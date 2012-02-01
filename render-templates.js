#!/usr/bin/env node

var path = require('path');
var fs = require('fs');
var util = require('util');
var Mustache = require("mustache");
var xml2js = require('xml2js');
var jsonpath = require('JSONPath');

var files = [
  { templateFileName: "generic.h", outputFileType: "h", className: 'wxMenu', realClassName: 'wxMenuBase' },
  { templateFileName: "generic.cpp", outputFileType: "cpp", className: 'wxMenu', realClassName: 'wxMenuBase' }
];

fs.readFile('./wxapi.json', 'utf8', function(err, data) {
  if(err) {
    console.error("reading xml file");
    fs.readFile('./wxapi.xml', 'utf8', function(err, data) {
      if(err) { throw err; }

      var xmlParser = new xml2js.Parser({
        explicitRoot: true,
        explicitArray: true,
        mergeAttrs: true
      });
      xmlParser.parseString(data, function(err, result) {
        if(err) { throw err; }

        fs.writeFile('./wxapi.json', JSON.stringify(result, null, '\t'), function(err) {
          if(err) { throw err; }

          renderFiles(files, result);
        });
      });
    });
  } else {
    console.error("reading json file");
    renderFiles(files, JSON.parse(data));
  }
});

function lookupClassById(rawJson, typeId) {
  var clazz = jsonpath.eval(rawJson, util.format("$.GCC_XML.Class[?(@.id=='%s')]", typeId));
  if(clazz && clazz.length == 1) {
    clazz[0].pointers = '';
    return clazz[0];
  }

  clazz = jsonpath.eval(rawJson, util.format("$.GCC_XML.PointerType[?(@.id=='%s')]", typeId));
  if(clazz && clazz.length == 1) {
    var result = lookupClassById(rawJson, clazz[0]['type']);
    result.pointers += '*';
    return result;
  }

  clazz = jsonpath.eval(rawJson, util.format("$.GCC_XML.ReferenceType[?(@.id=='%s')]", typeId));
  if(clazz && clazz.length == 1) {
    return lookupClassById(rawJson, clazz[0]['type']);
  }

  clazz = jsonpath.eval(rawJson, util.format("$.GCC_XML.CvQualifiedType[?(@.id=='%s')]", typeId));
  if(clazz && clazz.length == 1) {
    return lookupClassById(rawJson, clazz[0]['type']);
  }

  clazz = jsonpath.eval(rawJson, util.format("$.GCC_XML.FundamentalType[?(@.id=='%s')]", typeId));
  if(clazz && clazz.length == 1) {
    clazz[0].pointers = '';
    return clazz[0];
  }

  clazz = jsonpath.eval(rawJson, util.format("$.GCC_XML.Typedef[?(@.id=='%s')]", typeId));
  if(clazz && clazz.length == 1) {
    clazz[0].pointers = '';
    return clazz[0];
  }

  clazz = jsonpath.eval(rawJson, util.format("$.GCC_XML.Enumeration[?(@.id=='%s')]", typeId));
  if(clazz && clazz.length == 1) {
    clazz[0].pointers = '';
    return clazz[0];
  }

  throw new Error("Could not find class '" + typeId + "'");
}

function concatUnique(orig, newItems) {
  for(var i=0; i<newItems.length; i++) {
    if(orig.indexOf(newItems[i]) < 0) {
      orig.push(newItems[i]);
    }
  }
  return orig;
}

function argJsonToCtx(ctx, rawJson, arg, i) {
  var typeId = arg['type'];
  var type = lookupClassById(rawJson, typeId);
  var argCode = "unhandled argCode type " + type['name'];
  var argCallCode = "";
  var typeName = type['name'];
  var argName = arg['name'];
  var argTestCode = "false";

  typeName = typeName.replace(/Base$/, '');

  if(typeName == "int" || typeName == "long int" || typeName == "size_t") {
    if(type.pointers == '*') {
      argCode = util.format("%s %s;", typeName, argName);
      argCallCode = "&" + argName;
    } else {
      argCode = util.format("%s %s = (%s)args[%d]->ToInt32()->Value();", typeName, argName, typeName, i);
      argCallCode = argName;
      argTestCode = util.format("args[%d]->IsNumber()", i);
    }
  } else if(typeName == "bool") {
    argCode = util.format("bool %s = args[%d]->ToBoolean()->Value();", argName, i);
    argCallCode = argName;
    argTestCode = util.format("args[%d]->IsBoolean()", i);
  } else if(typeName == "wxString") {
    argCode = util.format("v8::String::AsciiValue %s(args[%d]->ToString());", argName, i);
    argCallCode = "*" + argName;
    argTestCode = util.format("args[%d]->IsString()", i);
  } else if(typeName.match(/^wx.*/)) {
    if(type.pointers == '**') {
      argCode = util.format("%s* %s;", typeName, argName);
      argCallCode = "&" + argName;
    } else {
      argCode = util.format("wxNode_%s* %s = wxNodeObject::unwrap<wxNode_%s>(args[%d]->ToObject());", typeName, argName, typeName, i);
      argCallCode = argName;
      argTestCode = util.format("args[%d]->IsObject()", i);
    }
    ctx.includes = concatUnique(ctx.includes, ["wxNode_" + typeName + ".h"]);
  } else {
    console.error(argCode);
  }

  argCode += " /* type: " + typeId + ' ' + type.pointers + " */";

  return {
    argumentName: argName,
    type: typeName,
    typeId: type['id'],
    argCode: argCode,
    argCallCode: argCallCode,
    defaultValue: arg['default'],
    argTestCode: argTestCode
  };
}

function getMethodArgTestCode(ctx) {
  var results = "args.Length() == " + ctx.args.length;
  for(var i=0; i<ctx.args.length; i++) {
    var argTestCode = ctx.args[i].argTestCode;
    if(argTestCode) {
      results += " && " + argTestCode;
    }
  }
  return results;
}

function getMethodArgCallCode(ctx) {
  var results = "";
  for(var i=0; i<ctx.args.length; i++) {
    if(i != 0) {
      results += ", ";
    }
    results += ctx.args[i].argCallCode;
  }
  return results;
}

function methodJsonToCtx(rawJson, methodJson) {
  var ctx = {
    name: methodJson['name'],
    id: methodJson['id'],
    args: [],
    includes: []
  };

  if(methodJson['returns']) {
    var returnType = lookupClassById(rawJson, methodJson['returns']);
    ctx.returnTypeName = returnType['name'];
    ctx.returnTypeId = returnType['id'];
  }

  var args = methodJson['Argument'];
  if(args) {
    for(var i=0; i<args.length; i++) {
      var arg = argJsonToCtx(ctx, rawJson, args[i], i);
      ctx.args.push(arg);
    }
  }

  updateMethodCalculatedFields(ctx);

  return ctx;
}

function updateMethodCalculatedFields(ctx) {
  ctx.argTestCode = getMethodArgTestCode(ctx);
  ctx.argCallCode = getMethodArgCallCode(ctx);
}

function toJsName(str) {
  if(str.length > 1) {
    return str.slice(0,1).toLowerCase() + str.slice(1);
  } else {
    return str.toLowerCase();
  }
}

function rawJsonToCtx(rawJson, file) {
  var ctx = {
    name: file.className,
    outputFilename: "wxNode" + "_" + file.className + "." + file.outputFileType,
    methods: [],
    constructors: [],
    includes: [],
    baseClassAddMethodsCallCode: ""
  };
  ctx.headerFilename = ctx.outputFilename.replace(/\.cpp$/, '.h');
  ctx.includes.push(ctx.headerFilename);

  var clazz = jsonpath.eval(rawJson, util.format("$.GCC_XML.Class[?(@.name=='%s')]", file.realClassName));
  if(!clazz || clazz.length < 1) {
    throw new Error("Could not find class '" + file.realClassName + "'");
  }
  if(clazz.length > 1) {
    throw new Error("Found multiple matches for '" + file.realClassName + "'");
  }
  clazz = clazz[0];
  ctx.classId = clazz['id'];

  // process base class
  if(clazz['Base'] && clazz['Base'].length > 0) {
    var baseId = clazz['Base'][0]['type'];
    var baseClazz = lookupClassById(rawJson, baseId);
    ctx.baseClassName = baseClazz['name'];
    ctx.baseClassId = baseClazz['id'];
    ctx.baseClassAddMethodsCallCode = "wxNode_" + ctx.baseClassName + "::AddMethods(s_ct);";
    ctx.includes = concatUnique(ctx.includes, ["wxNode_wxEvtHandler.h"]);
  }

  // process members
  if(clazz['members']) {
    var memberIds = clazz['members'].split(' ');
    for(var i=0; i<memberIds.length; i++) {
      var memberId = memberIds[i];
      if(memberId.length == 0) {
        continue;
      }

      var member = jsonpath.eval(rawJson, util.format("$.GCC_XML.Method[?(@.id=='%s')]", memberId));
      if(member && member.length > 0) {
        member = member[0];
        if(member['access'] == 'public') {
          var methodGroup = ctx.methods.filter(function(item) { return item.name == member['name']; });
          if(!methodGroup || methodGroup.length == 0) {
            methodGroup = {
              name: member['name'],
              overloads: [],
              parent: ctx
            };
            methodGroup.jsName = toJsName(methodGroup.name);
            ctx.methods.push(methodGroup);
          } else {
            methodGroup = methodGroup[0];
          }
          var methodJson = methodJsonToCtx(rawJson, member);
          ctx.includes = concatUnique(ctx.includes, methodJson.includes);
          methodGroup.overloads.push(methodJson);

          // add overloads for each default value parameter
          for(var argIdx=methodJson.args.length-1; argIdx>0 && methodJson.args[argIdx].defaultValue; argIdx--) {
            var newMethodJson = JSON.parse(JSON.stringify(methodJson));
            newMethodJson.args = newMethodJson.args.slice(0, argIdx);
            updateMethodCalculatedFields(newMethodJson);
            methodGroup.overloads.push(newMethodJson);
          }
        }
        continue;
      }

      member = jsonpath.eval(rawJson, util.format("$.GCC_XML.Constructor[?(@.id=='%s')]", memberId));
      if(member && member.length > 0) {
        member = member[0];
        if(member['access'] == 'public') {
          var methodJson = methodJsonToCtx(rawJson, member);
          ctx.includes = concatUnique(ctx.includes, methodJson.includes);
          ctx.constructors.push(methodJson);
        }
        continue;
      }

      member = jsonpath.eval(rawJson, util.format("$.GCC_XML.Field[?(@.id=='%s')]", memberId));
      if(member && member.length > 0) {
        member = member[0];
        continue;
      }

      member = jsonpath.eval(rawJson, util.format("$.GCC_XML.Variable[?(@.id=='%s')]", memberId));
      if(member && member.length > 0) {
        member = member[0];
        continue;
      }

      member = jsonpath.eval(rawJson, util.format("$.GCC_XML.Destructor[?(@.id=='%s')]", memberId));
      if(member && member.length > 0) {
        member = member[0];
        continue;
      }

      member = jsonpath.eval(rawJson, util.format("$.GCC_XML.OperatorMethod[?(@.id=='%s')]", memberId));
      if(member && member.length > 0) {
        member = member[0];
        continue;
      }

      throw new Error("Could not find member with id '" + memberId + "'");
    }
  }

  //console.log("ctx", util.inspect(ctx, false, 10));

  return ctx;
}

function renderFiles(files, rawJson) {
  for(var fileIdx = 0; fileIdx < files.length; fileIdx++) {
    renderFile(files[fileIdx], rawJson);
  }
}

function renderFile(file, rawJson) {
  var ctx = rawJsonToCtx(rawJson, file);

  fs.readFile(path.join("./src-templates", file.templateFileName), 'utf8', function(err, data) {
    if(err) { throw err; }

    var output = Mustache.compile(data, {
      space: true
    })(ctx, null);
    console.log("writing " + ctx.outputFilename);
    fs.writeFile(path.join("./src", ctx.outputFilename), output);
  });
}
