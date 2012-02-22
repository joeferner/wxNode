var path = require('path');
var fs = require('fs');
var child_process = require('child_process');

var Builder = require('mnm');

var fsExplorer = require('./fsExplorer');

var Path = fsExplorer.Path;
var File = fsExplorer.File;
var Directory = fsExplorer.Directory;
var exists = fsExplorer.existsSync;
var resolve = fsExplorer.resolve;



function wxBuilder(o){
  o = Object.keys(o || {}).reduce(function(r,s){ r[s]=o[s]; return r; }, {
    wxBase: '/wxWidgets',
    wxConfig: resolve('config-'+process.platform+'.json'),
    useDll: false,
    verbose: false,
    name: 'wxnode',
  });

  this.wxConfig = new Config(o.wxConfig);
  this.name = this.wxConfig.CFG = o.name;
  this.wxBase = new Directory(o.wxBase);
  this.wxLibDir = new Directory(o.wxBase+'/lib/vc_'+(o.useDll ? 'dll' : 'lib')+o.name);
  this.wxBuildDir = new Directory(o.wxBase+'/build/msw');
  this.wxIncludeDir = new Directory(o.wxBase+'/include');
  this.srcDir =  new Directory(__dirname+'/src');
  this.buildDir =  new Directory(__dirname+'/build');
}

wxBuilder.msLibs = [ 'kernel32', 'user32', 'gdi32', 'comdlg32',
                     'comctl32', 'advapi32', 'shell32', 'ole32',
                     'oleaut32', 'rpcrt4', 'winspool', 'winmm' ];

wxBuilder.prototype = {
  build: function build(callback){
    var self = this;
    if (!this.wxLibDir.exists()) {
      this.buildWX(function(e){
        self.buildBindings(callback);
      });
    } else {
      self.buildBindings(callback);
    }
  },

  buildWX: function buildWX(callback){
    if (!this.vcVars()) throw new Error('Unable to find Visual C++');
    callback = callback || function(){};

    var configname = 'config_'+this.name;
    var config = this.wxConfig.save(this.wxBuildDir.resolve(configname));
    var makefile = this.wxBuildDir.resolve('makefile.vc').copy(this.wxBuildDir.resolve('makefile_'+this.name), function(s){
      return s.replace('config.vc', configname);
    });
    this.wxIncludeDir.resolve('wx/msw/setup0.h').copy(this.wxIncludeDir.resolve('wx/msw/setup.h'));

    child_process.spawn('nmake', [ makefile.path ], {
      cwd: this.wxBuildDir.path,
      env: process.env,
      customFds: [0,1,2]
    }).on('exit', function(code) {
      config.delete();
      makefile.delete();
      callback(code);
    });
  },

  buildBindings: function buildBindings(callback){
    if (!this.vcVars()) throw new Error('Unable to find Visual C++');
    callback = callback || function(){};
    var builder = new Builder;

    builder.target = this.name+'_bindings';
    builder.verbose = this.verbose;
    
    builder.appendUnique('CXXFLAGS', ['-DUNICODE', '-DNDEBUG']);

    if (this.dll)
      builder.appendUnique('CXXFLAGS', '-DWXUSINGDLL');

    builder.appendLinkerSearchDir(this.wxLibDir.path);

    builder.appendLinkerLibrary(this.wxLibDir.filter('.lib'));
    builder.appendLinkerLibrary(wxBuilder.msLibs);

    builder.appendIncludeDir([
      this.srcDir+'',
      this.srcDir+'-dummy',
      this.srcDir+'-generated',
      this.wxIncludeDir
    ]);

    builder.appendSourceDir([
      this.srcDir+'',
      this.srcDir+'-generated'
    ]);

    builder.compileAndLink(callback);
  },

  vcVars: function vcVars(){
    var vcpath = [10,9,8].reduce(function(r,s){
      return r ? r : (s = 'VS'+s+'0COMNTOOLS') in process.env ? process.env[s] : r;
    }, null);
    var vars;
    if (!vcpath || !exists(vcpath = resolve(vcpath, '../../vc/vcvarsall.bat'))) {
      vars = null;
    } else {
      vars = execSync('"'+vcpath+'" & set').trim().split('\r\n').reduce(function(r,s){
        var name = s.slice(0, s.indexOf('='));
        s = s.slice(name.length+1);
        if (process.env[name] !== s) {
          process.env[name] = r[name] = s;
        }
        return r;
      }, {});
    }
    this.vcVars = function(){ return vars };
    return vars;
  },
}



function Config(o){
  if (Path.isPath(o)) o = o.path;
  if (typeof o === 'string' && path.extname(o) === '.json' && exists(o)) {
    o = require(o);
  }
  if (o && typeof o === 'object') {
    Object.keys(o).forEach(function(s){ this[s] = o[s] }, this);
  }
}

Config.prototype = {
  constructor: Config,
  parse: function parse(s){
    return s.split('\r\n').reduce(function(r,s){
      if (s && (s=s.trim())[0] !== '#' && ~s.indexOf('=')) {
        s = s.split('=');
        r[s[0].toLowerCase().trim()] = s[1].trim();
      }
      return r;
    }, this);
  },
  serialize: function serialize(){
    return Object.keys(this).map(function(s){
      return s+' = '+this[s]
    }, this).join('\r\n')+'\r\n';
  },
  save: function save(path){
    return new File(path).write(this.serialize());
  },
  load: function load(path){
    return this.parse(new File(path).read());
  }
}


function execSync(params){
  var f = Math.random().toString(36).slice(2)+'.temp';
  child_process.exec(params+' 1>'+f+' 2>&1 & ren '+f+' _'+f);
  f = new File('_'+f);
  while (!exists(f.path));
  var output = f.read();
  f.delete();
  return output;
}


var builder = new wxBuilder;
console.log(builder.build());
//builder.build();