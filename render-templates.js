#!/usr/bin/env node

var path = require('path');
var fs = require('fs');
var util = require('util');
var Mustache = require("mustache");
var xml2js = require('xml2js');
var jsonpath = require('JSONPath');
var crc32 = require('crc32');
var async = require('async');

var files = [
  { className: 'wxMenu', baseClassName: 'wxMenuBase', allowNew: true },
  { className: 'wxMenuBar', baseClassName: 'wxMenuBarBase', allowNew: true },
  { className: 'wxFrame', baseClassName: 'wxFrameBase', allowNew: true },
  { className: 'wxTopLevelWindow', baseClassName: 'wxTopLevelWindowBase', allowNew: true },
  { className: 'wxNonOwnedWindow', baseClassName: 'wxNonOwnedWindowBase', allowNew: true },
  { className: 'wxTextCtrl', baseClassName: 'wxTextCtrlBase', allowNew: true },
  { className: 'wxButton', baseClassName: 'wxButtonBase', allowNew: true },
  { className: 'wxListBox', baseClassName: 'wxListBoxBase', allowNew: true, addMethodsFrom: 'wxItemContainer' },
  { className: 'wxAnyButton', baseClassName: 'wxAnyButtonBase', allowNew: true },
  { className: 'wxStaticText', baseClassName: 'wxStaticTextBase', allowNew: true },
  { className: 'wxControl', baseClassName: 'wxControlBase', allowNew: true },
  { className: 'wxPanel', baseClassName: 'wxPanelBase', allowNew: true },
  { className: 'wxNotebook', baseClassName: 'wxNotebookBase', allowNew: true },
  { className: 'wxBookCtrlBase', baseClassName: 'wxBookCtrlBase', allowNew: false },
  { className: 'wxControlWithItems', baseClassName: 'wxControlWithItemsBase', allowNew: false, addMethodsClass: 'wxNode_wxWindowWithItems_wxControl_wxItemContainer' },
  { className: 'wxWindow', baseClassName: 'wxWindowBase', allowNew: true },
  { className: 'wxItemContainer', allowNew: false },
  { className: 'wxItemContainerImmutable', allowNew: false },
  { className: 'wxSizer', allowNew: false },
  { className: 'wxBoxSizer', allowNew: true, hasCopyConstructor: true },
  { className: 'wxSizerFlags', allowNew: true },
  { className: 'wxPoint', allowNew: true },
  { className: 'wxSize', allowNew: true },
  { className: 'wxEvent', allowNew: false },
  { className: 'wxKeyEvent', allowNew: true },
  { className: 'wxIcon', allowNew: true },
  /*
  { className: 'wxBitmap', baseClassName: 'wxBitmapBase' },
  { className: 'wxInputStream', baseClassName: 'wxStreamBase' },
  { className: 'wxOutputStream', baseClassName: 'wxStreamBase' },
  { className: 'wxPalette', baseClassName: 'wxPaletteBase' },
  */
  /*
  { className: 'wxGDIObject' },
  { className: 'wxObject' },
  { className: 'wxClassInfo' },
  { className: 'wxRefCounter' },
  { className: 'wxRect' },
  { className: 'wxPolygonFillMode' },
  { className: 'wxBitmapType' },
  { className: 'wxImage' },
  { className: 'wxStreamError' },
  { className: 'wxImageResizeQuality' },
  */
];

fs.readFile('./wxapi.json', 'utf8', function(err, data) {
  if(err) {
    console.error("reading xml file");
    fs.readFile('./wxapi.xml', 'utf8', function(err, data) {
      if(err) { throw err; }
      console.log("wxapi.xml read");

      var xmlParser = new xml2js.Parser({
        explicitRoot: true,
        explicitArray: true,
        mergeAttrs: true
      });
      xmlParser.parseString(data, function(err, result) {
        if(err) { throw err; }
        console.log("wxapi.xml parsed");

        var apiJson = {
          classNameToId: {},
          subClasses: {}
        };
        for(var elementName in result['GCC_XML']) {
          var elem = result['GCC_XML'][elementName];
          for(var i=0; i<elem.length; i++) {
            var id = elem[i]['id'];
            apiJson[id] = elem[i];
            apiJson[id].elementName = elementName;
            if(elementName == "Class" || elementName == "Enumeration") {
              var name = removeTemplateFromClassName(elem[i]['name']);
              apiJson.classNameToId[name] = id;
              var bases = elem[i]['bases'];
              if(bases) {
                bases = bases.split(' ');
                for(var baseIdx=0; baseIdx<bases.length; baseIdx++) {
                  var base = bases[baseIdx];
                  if(base == "") { continue; }
                  var subClasses = apiJson.subClasses[base];
                  if(!subClasses) {
                    apiJson.subClasses[base] = [];
                  }
                  apiJson.subClasses[base].push(id);
                }
              }
            }
          }
        }

        fs.writeFile('./wxapi.json', JSON.stringify(apiJson, null, '\t'), function(err) {
          if(err) { throw err; }

          renderFiles(files, apiJson, function() { console.log("done"); });
        });
      });
    });
  } else {
    console.error("wxapi.json read");
    var json = JSON.parse(data);
    console.error("json parsed");
    renderFiles(files, json, function() { console.log("done"); });
  }
});

function lookupClassById(rawJson, typeId) {
  var clazz = rawJson[typeId];
  if(clazz.elementName == "Class" || clazz.elementName == "Struct") {
    clazz.pointers = '';
    clazz.refs = '';
    return clazz;
  }

  if(clazz.elementName == "PointerType") {
    var result = lookupClassById(rawJson, clazz['type']);
    result.pointers += '*';
    return result;
  }

  if(clazz.elementName == "ReferenceType") {
    var result = lookupClassById(rawJson, clazz['type']);
    result.refs += '&';
    return result;
  }

  if(clazz.elementName == "CvQualifiedType") {
    return lookupClassById(rawJson, clazz['type']);
  }

  if(clazz.elementName == "FundamentalType") {
    clazz.pointers = '';
    clazz.refs = '';
    return clazz;
  }

  if(clazz.elementName == "FunctionType") {
    clazz.pointers = '';
    clazz.refs = '';
    return clazz;
  }

  if(clazz.elementName == "Typedef") {
    return lookupClassById(rawJson, clazz['type']);
  }

  if(clazz.elementName == "Enumeration") {
    clazz.pointers = '';
    clazz.refs = '';
    return clazz;
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
  var argCode = "#error(\"unhandled argCode type '" + type['name'] + "'\")";
  var argCallCode = "";
  var argDeclCode = "";
  var typeName = type['name'];
  var argName = arg['name'] || ("arg" + i);
  var argTestCode = "false";

  if(typeName) {
    typeName = typeName.replace(/Base$/, '');
  }

  if(typeName == "int" || typeName == "long int" || typeName == "size_t" || typeName == "unsigned int") {
    if(type.pointers == '*') {
      argCode = util.format("%s %s;", typeName, argName);
      argDeclCode = util.format("%s* %s", typeName, argName);
      argCallCode = "&" + argName;
    } else {
      argCode = util.format("%s %s = (%s)args[%d]->ToInt32()->Value();", typeName, argName, typeName, i);
      argCallCode = argName;
      argDeclCode = util.format("%s %s", typeName, argName);
      argTestCode = util.format("args[%d]->IsNumber()", i);
    }
  } else if(typeName == "float") {
    if(type.pointers == '*') {
      argCode = util.format("%s %s;", typeName, argName);
      argDeclCode = util.format("%s* %s", typeName, argName);
      argCallCode = "&" + argName;
    } else {
      argCode = util.format("%s %s = (%s)args[%d]->ToNumber()->Value();", typeName, argName, typeName, i);
      argCallCode = argName;
      argDeclCode = util.format("%s %s", typeName, argName);
      argTestCode = util.format("args[%d]->IsNumber()", i);
    }
  } else if(typeName == "bool") {
    argCode = util.format("bool %s = args[%d]->ToBoolean()->Value();", argName, i);
    argCallCode = argName;
    argDeclCode = util.format("bool %s", argName);
    argTestCode = util.format("args[%d]->IsBoolean()", i);
  } else if(typeName == "unsigned char") {
    argCode = util.format("unsigned char %s = args[%d]->ToInt32()->Value();", argName, i);
    argCallCode = argName;
    argDeclCode = util.format("unsigned char %s", argName);
    argTestCode = util.format("args[%d]->IsNumber()", i);
  } else if(typeName == "wxString") {
    if(type.pointers == '*') {
      argCode = util.format("wxString* %s;", argName);
      argCallCode = argName;
      argDeclCode = util.format("const wxString%s %s", type.refs + type.pointers, argName);
      argTestCode = util.format("args[%d]->IsString()", i);
    } else {
      argCode = util.format("v8::String::AsciiValue %s(args[%d]->ToString());", argName, i);
      argCallCode = "*" + argName;
      argDeclCode = util.format("const wxString%s %s", type.refs + type.pointers, argName);
      argTestCode = util.format("args[%d]->IsString()", i);
    }
  } else if(typeName == "wchar_t" || typeName == "char") {
    if(type.pointers == '*') {
      argCode = util.format("%s* %s;", typeName, argName);
      argCallCode = argName;
      argDeclCode = util.format("const %s%s %s", typeName, type.refs + type.pointers, argName);
      argTestCode = util.format("args[%d]->IsString()", i);
    } else {
      argCode = util.format("v8::String::AsciiValue %s(args[%d]->ToString());", argName, i);
      argCallCode = "*" + argName;
      argDeclCode = util.format("const %s%s %s", typeName, type.refs + type.pointers, argName);
      argTestCode = util.format("args[%d]->IsString()", i);
    }
  } else if(type.elementName == "Enumeration") {
    if(typeName == 'Origin') {
      typeName = 'wxHelpEvent::Origin';
    }

    argCode = util.format("%s %s = (%s)args[%d]->ToNumber()->Value();", typeName, argName, typeName, i);
    argCallCode = argName;
    argDeclCode = util.format("%s%s %s", typeName, type.refs + type.pointers, argName);
    argTestCode = util.format("args[%d]->IsNumber()", i);
  } else if(typeName == "void") {
    return null;
  } else if(typeName && (typeName.match(/^wx.*/))) {
    if(type.pointers == '**') {
      argCode = util.format("%s* %s;", typeName, argName);
      argDeclCode = util.format("%s** %s", typeName, argName);
      argCallCode = "&" + argName;
    } else {
      argCode = util.format("wxNode_%s* %s = args[%d]->IsNull() ? NULL : wxNodeObject::unwrap<wxNode_%s>(args[%d]->ToObject());", typeName, argName, i, typeName, i);
      if(type.refs == '&') {
        argCallCode = '*' + argName;
        argDeclCode = util.format("%s& %s", typeName, argName);
      } else {
        argCallCode = argName;
        argDeclCode = util.format("%s* %s", typeName, argName);
      }
      argTestCode = util.format("(args[%d]->IsNull() || (args[%d]->IsObject() && wxNode_%s::AssignableFrom(args[%d]->ToObject()->GetConstructorName())))", i, i, typeName, i);
    }
    ctx.includes = concatUnique(ctx.includes, ["wxNode_" + typeName + ".h"]);
    ctx.classes = concatUnique(ctx.classes, ["wxNode_" + typeName]);
  } else {
    throw new Error(argCode);
  }

  argCode += " /* type: " + typeId + ' ' + type.pointers + " */";

  return {
    argumentName: argName,
    type: typeName,
    typeId: type['id'],
    argCode: argCode,
    argCallCode: argCallCode,
    defaultValue: arg['default'],
    argTestCode: argTestCode,
    argDeclCode: argDeclCode
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

function getMethodConstructorCallCode(ctx) {
  var results = "";
  for(var i=0; i<ctx.args.length; i++) {
    if(i != 0) {
      results += ", ";
    }
    results += ctx.args[i].argumentName;
  }
  return results;
}

function getMethodArgDeclCode(ctx) {
  var results = "";
  for(var i=0; i<ctx.args.length; i++) {
    if(i != 0) {
      results += ", ";
    }
    results += ctx.args[i].argDeclCode;
  }
  return results;
}

function methodJsonToCtx(parent, rawJson, methodJson) {
  var ctx = {
    name: methodJson['name'],
    id: methodJson['id'],
    args: [],
    includes: [],
    classes: []
  };

  if(methodJson['returns']) {
    var returnType = lookupClassById(rawJson, methodJson['returns']);
    ctx.returnTypeName = returnType['name'];
    ctx.returnTypeId = returnType['id'];
    ctx.returnEq = "";
    ctx.returnStmt = "return v8::Undefined();";
    if(ctx.returnTypeName == "void") {
      // do nothing
    } else if(ctx.returnTypeName == "int" || ctx.returnTypeName == "unsigned int" || ctx.returnTypeName == "long int") {
      ctx.returnEq = "int returnVal = ";
      ctx.returnStmt = "return scope.Close(v8::Number::New(returnVal));";
    } else if(returnType.elementName == 'Enumeration') {
      ctx.returnEq = "int returnVal = (int)";
      ctx.returnStmt = "return scope.Close(v8::Number::New(returnVal));";
    } else if(ctx.returnTypeName == "bool") {
      ctx.returnEq = "bool returnVal = ";
      ctx.returnStmt = "return scope.Close(v8::Boolean::New(returnVal));";
    } else if(ctx.returnTypeName == "wxString") {
      ctx.returnEq = "wxString returnVal = ";
      ctx.returnStmt = "return scope.Close(v8::String::New(returnVal.mb_str()));";
    } else if(ctx.returnTypeName == "wchar_t") {
      ctx.returnEq = "wchar_t returnVal = ";
      ctx.returnStmt =
        'char returnValTemp[5];\n'
        + 'sprintf(returnValTemp, "%lc", returnVal);\n'
        + "return scope.Close(v8::String::New(returnValTemp));";
    } else if(ctx.returnTypeName && ctx.returnTypeName.match(/^wx.*/)) {
      if(returnType.refs == '&' || (returnType.refs == '' && returnType.pointers == '')) {
        ctx.returnEq = ctx.returnTypeName + " returnVal = ";
        ctx.returnStmt = "return scope.Close(wxNode_" + ctx.returnTypeName + "::NewCopy(returnVal));";
      } else if(returnType.pointers == '*') {
        ctx.returnEq = ctx.returnTypeName + "* returnVal = ";
        ctx.returnStmt = "return scope.Close(wxNode_" + ctx.returnTypeName + "::New(returnVal));";
      } else {
        console.error(red("Unhandled return pointers"), returnType);
      }

      ctx.includes = concatUnique(ctx.includes, ["wxNode_" + ctx.returnTypeName + ".h"]);
    } else {
      console.error(red("Unhandled return type"), returnType);
    }
  }

  var args = methodJson['Argument'];
  if(args) {
    for(var i=0; i<args.length; i++) {
      var arg;
      try {
        arg = argJsonToCtx(ctx, rawJson, args[i], i);
      } catch(e) {
        console.error(red(e));
        return null;
      }
      if(!arg) {
        return null;
      }
      ctx.args.push(arg);
    }
  }

  updateMethodCalculatedFields(ctx);

  return ctx;
}

function updateMethodCalculatedFields(ctx) {
  ctx.argTestCode = getMethodArgTestCode(ctx);
  ctx.argCallCode = getMethodArgCallCode(ctx);
  ctx.argConstructorCallCode = getMethodConstructorCallCode(ctx);
  ctx.argDeclCode = getMethodArgDeclCode(ctx);
}

function toJsName(str) {
  if(str.length > 1) {
    return str.slice(0,1).toLowerCase() + str.slice(1);
  } else {
    return str.toLowerCase();
  }
}

function addMethod(rawJson, ctx, member, dest) {
  if(member['access'] != 'public') {
    return;
  }
  if(member['attributes'] && member['attributes'].match(/deprecated/)) {
    return;
  }

  var methodGroup = dest.filter(function(item) { return item.name == member['name']; });
  if(!methodGroup || methodGroup.length == 0) {
    methodGroup = {
      name: member['name'],
      overloads: [],
      parent: ctx
    };
    methodGroup.jsName = toJsName(methodGroup.name);
    if(member['static'] == 1) {
      methodGroup.addMethodStmt = 'NODE_SET_METHOD(target, "' + methodGroup.jsName + '", _' + methodGroup.name + ');'
    } else {
      methodGroup.addMethodStmt = 'NODE_SET_PROTOTYPE_METHOD(target, "' + methodGroup.jsName + '", _' + methodGroup.name + ');'
    }
    dest.push(methodGroup);
  } else {
    methodGroup = methodGroup[0];
  }
  var methodJson = methodJsonToCtx(methodGroup, rawJson, member);
  if(!methodJson) {
    return;
  }
  if(methodJson.name.match(/^On/)) {
    return;
  }
  ctx.includes = concatUnique(ctx.includes, methodJson.includes);
  ctx.classes = concatUnique(ctx.classes, methodJson.classes);
  methodGroup.overloads.push(methodJson);

  // add overloads for each default value parameter
  for(var argIdx = methodJson.args.length - 1; argIdx >= 0 && methodJson.args[argIdx].defaultValue; argIdx--) {
    var newMethodJson = deepCopy(methodJson);
    newMethodJson.args = newMethodJson.args.slice(0, argIdx);
    updateMethodCalculatedFields(newMethodJson);
    methodGroup.overloads.push(newMethodJson);
  }

  for(var i=0; i<methodGroup.overloads.length; i++) {
    methodGroup.overloads[i].parent = methodGroup;
  }
}

function getClassByName(rawJson, name) {
  var clazzId = rawJson.classNameToId[name];
  if(!clazzId) {
    throw new Error("Could not find class '" + name + "'");
  }
  var clazz = rawJson[clazzId];
  return clazz;
}

function removeTemplateFromClassName(name) {
  if(name.indexOf('<')) {
    name = name.split('<')[0];
  }
  return name;
}

function getAssignableFromCode(rawJson, classId) {
  var subClasses = rawJson.subClasses[classId];
  if(!subClasses) {
    return null;
  }

  var result = "\n";
  for(var i=0; i<subClasses.length; i++) {
    var subClass = lookupClassById(rawJson, subClasses[i]);
    result += '  if(!strcmp("' + subClass.name + '", className)) { return true; }\n';
    var t = getAssignableFromCode(rawJson, subClasses[i]);
    if(t) {
      result += t;
    }
  }

  return result;
}

function rawJsonToCtx(rawJson, file) {
  var ctx = {
    name: file.className,
    outputFilename: "wxNode" + "_" + file.className + "." + file.outputFileType,
    methods: [],
    constructors: [],
    includes: [],
    classes: [],
    baseClassAddMethodsCallCode: "",
    assignableFromCode: "",
    newCopyCode: "return v8::Undefined();" // todo: throw error?
  };
  ctx.headerFilename = ctx.outputFilename.replace(/\.cpp$/, '.h');
  ctx.includes.push(ctx.headerFilename);

  if(!file.baseClassName) {
    file.baseClassName = file.className;
  }

  // process base class
  var clazz = getClassByName(rawJson, file.baseClassName);
  ctx.classId = clazz['id'];
  if(clazz['Base'] && clazz['Base'].length > 0) {
    var baseId = clazz['Base'][0]['type'];
    var baseClazz = lookupClassById(rawJson, baseId);
    ctx.baseClassName = removeTemplateFromClassName(baseClazz['name']);
    ctx.baseClassId = baseClazz['id'];
    if(file.addMethodsClass) {
      ctx.baseClassAddMethodsCallCode = file.addMethodsClass + "::AddMethods(target);";
    } else {
      ctx.baseClassAddMethodsCallCode = "wxNode_" + ctx.baseClassName + "::AddMethods(target);";
    }
    ctx.includes = concatUnique(ctx.includes, ["wxNode_wxEvtHandler.h", "wxNode_" + ctx.baseClassName + ".h"]);
    ctx.classes = concatUnique(ctx.classes, ["wxNode_wxEvtHandler", "wxNode_" + ctx.baseClassName]);
  } else {
    ctx.baseClassAddMethodsCallCode = "wxNode_wxEvtHandler::AddMethods(target);";
  }

  ctx.assignableFromCode = getAssignableFromCode(rawJson, ctx.classId);

  // process members
  if(file.allowNew) {
    if(file.hasCopyConstructor) {
      ctx.newCopyCode = "v8::HandleScope scope;\n";
      ctx.newCopyCode += "  wxNode_" + ctx.name + "* returnVal = new wxNode_" + ctx.name + "(obj);\n";
      ctx.newCopyCode += "  return scope.Close(New(returnVal));\n";
    } else {
      ctx.newCopyCode = "v8::HandleScope scope;\n";
      ctx.newCopyCode += "  wxNode_" + ctx.name + "* returnVal = new wxNode_" + ctx.name + "();\n";
      ctx.newCopyCode += "  memcpy(dynamic_cast<" + ctx.name + "*>(returnVal), &obj, sizeof(" + ctx.name + "));\n";
      ctx.newCopyCode += "  return scope.Close(New(returnVal));\n";
    }

    var subClazz = getClassByName(rawJson, file.className);
    if(subClazz['members']) {
      var memberIds = subClazz['members'].split(' ');
      for(var i=0; i<memberIds.length; i++) {
        var memberId = memberIds[i];
        if(memberId.length == 0) {
          continue;
        }

        var member = rawJson[memberId];

        if(member.elementName == "Constructor") {
          addMethod(rawJson, ctx, member, ctx.constructors);
          continue;
        }
      }
    }
  }

  if(clazz['members']) {
    var memberIds = clazz['members'].split(' ');
    if(file.addMethodsFrom) {
      var additionalMethodClass = getClassByName(rawJson, file.addMethodsFrom);
      if(!additionalMethodClass) {
        throw new Error("Could not find class " + file.addMethodsFrom);
      }
      var additionalMethodClassMembers = additionalMethodClass['members'].split(' ');
      memberIds = memberIds.concat(additionalMethodClassMembers);
    }
    for(var i=0; i<memberIds.length; i++) {
      var memberId = memberIds[i];
      if(memberId.length == 0) {
        continue;
      }

      var member = rawJson[memberId];
      if(member.elementName == "Method") {
        if(member.name == "New") {
          continue;
        }
        addMethod(rawJson, ctx, member, ctx.methods);
        continue;
      }

      if(member.elementName == "Constructor") {
        continue;
      }

      if(member.elementName == "Field") {
        continue;
      }

      if(member.elementName == "Variable") {
        continue;
      }

      if(member.elementName == "Destructor") {
        continue;
      }

      if(member.elementName == "OperatorMethod") {
        continue;
      }

      if(member.elementName == "Typedef") {
        continue;
      }

      if(member.elementName == "Class") {
        continue;
      }

      if(member.elementName == "Enumeration") {
        continue;
      }

      throw new Error("Could not find member with id '" + memberId + "'");
    }
  }

  //console.log("ctx", util.inspect(ctx, false, 10));

  return ctx;
}

function renderFiles(files, rawJson, renderFilesCallback) {
  async.forEachSeries(files, function(file, callback) {
    if(file.outputFileType) {
      renderFile(file, rawJson, callback);
    } else {
      async.series([
        function(seriesCallback) {
          var file_h = deepCopy(file);
          file_h.templateFileName = file_h.templateFileName || "generic.h";
          file_h.outputFileType = "h";
          renderFile(file_h, rawJson, seriesCallback);
        },
        function(seriesCallback) {
          var file_cpp = deepCopy(file);
          file_cpp.templateFileName = file_cpp.templateFileName || "generic.cpp";
          file_cpp.outputFileType = "cpp";
          renderFile(file_cpp, rawJson, seriesCallback);
        }
      ], callback);
    }
  }, renderFilesCallback);
}

function renderFile(file, rawJson, callback) {
  var ctx = rawJsonToCtx(rawJson, file);
  console.log(green("RENDER: " + file.templateFileName + " -> " + ctx.outputFilename));

  fs.readFile(path.join("./src-templates", file.templateFileName), 'utf8', function(err, data) {
    if(err) { throw err; }

    var output = Mustache.compile(data, {
      space: true
    })(ctx, null);
    var outputFilename = path.join("./src-generated", ctx.outputFilename);
    var oldContentsCrc = 0;
    if(path.existsSync(outputFilename)) {
      var oldContents = fs.readFileSync(outputFilename, 'utf8');
      oldContentsCrc = crc32(oldContents);
    }
    var newContentsCrc = crc32(output);
    if(oldContentsCrc != newContentsCrc) {
      fs.writeFile(outputFilename, output, callback);
    } else {
      console.log(yellow("skipping " + ctx.outputFilename + " crc match"));
      callback();
    }
  });
}

function deepCopy(obj) {
  if (Object.prototype.toString.call(obj) === '[object Array]') {
    var out = [], i = 0, len = obj.length;
    for ( ; i < len; i++ ) {
      out[i] = deepCopy(obj[i]);
    }
    return out;
  }
  if (typeof obj === 'object') {
    var out = {}, i;
    for ( i in obj ) {
      out[i] = deepCopy(obj[i]);
    }
    return out;
  }
  return obj;
}

function green(msg) {
  return '\u001b[32m' + msg + '\u001b[0m';
}

function yellow(msg) {
  return '\u001b[33m' + msg + '\u001b[0m';
}

function red(msg) {
  return '\u001b[31m' + msg + '\u001b[0m';
}
