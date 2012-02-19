var path = require('path');
var fs = require('fs');
path.existsSync = fs.existsSync || path.existsSync;
var resolve = path.resolve;

var Builder =require('../mnm');

var wx = new (function wxWidgets(){
  var base = '/wxWidgets';
  this.base = resolve(base);
  var lib = this.lib = resolve(base, 'lib', 'vc_lib');
  var include = this.include =  resolve(base, 'include');

  var builder = new Builder;
  function bind(name){ return builder[name].bind(builder) }

  var add = this.bindings = {
    includeDir: bind('appendIncludeDir'),
    sourceDir: bind('appendSourceDir'),
    libDir: bind('appendLinkerSearchDir'),
    source: bind('appendSource'),
    lib: bind('appendLinkerLibrary'),
  };

  this.bindings.build = function buildBindings(cxxFlags, customLibs) {
    cxxFlags && builder.appendUnique('CXXFLAGS', cxxFlags);

    builder.target = 'wxnode_bindings';
    builder.verbose = true;


    [].concat(customLibs ? customLibs : lib).forEach(add.libDir);
    add.includeDir(include);


    var src = resolve(__dirname, 'src');
    var dummy = resolve(__dirname, 'src-dummy');
    var generated = resolve(__dirname, 'src-generated');

    [src, dummy, generated].forEach(add.includeDir);
    [src, generated].forEach(add.sourceDir);


    builder.compileAndLink(function(e){
      console.log(e || 'complete');
    });
  };

  this.getConfig = function getConfig(){
    var configFile = resolve(lib, 'mswud', 'build.cfg');

    return fs.readFileSync(configFile, 'utf8').split('\n').reduce(function(r,s){
      s = s.split('=');
      if (s[1]) r[s[0]] = s[1];
      return r;
    }, {});
  };
});

wx.bindings.build('-DUNICODE', 'wxmsw29ud');
