
var resolve = require('path').resolve;
var childProcess = require('child_process');
var Builder =require('../mnm');

var wx = new (function wxWidgets(){
  var base = '/wxWidgets';
  this.base = resolve(base);
  this.lib = resolve(base, 'lib', 'vc_lib');
  this.include =  resolve(base, 'include');

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


    [].concat(customLibs ? customLibs : this.lib).forEach(add.libDir);
    add.includeDir(this.include);


    var src = resolve(__dirname, 'src');
    var dummy = resolve(__dirname, 'src-dummy');
    var generated = resolve(__dirname, 'src-generated');

    [src, dummy, generated].forEach(add.IncludeDir);
    [src, generated].forEach(add.sourceDir);


    builder.compileAndLink(function(e){
      console.log(e || 'complete');
    });
  };

  this.getConfig = function getConfig(){
    var configFile = resolve(this.lib, 'mswud', 'build.cfg');

    return fs.readFileSync(configFile, 'utf8').split('\n').reduce(function(r,s){
      s = s.split('=');
      if (s[1]) r[s[0]] = s[1];
      return r;
    }, {});
  };
});


wx.bindings.build('-DUNICODE', 'wxmsw29ud');
