var path = require('path');
var fs = require('fs');
var child_process = require('child_process');

var Builder = require('mnm');


var exists = fs.existsSync || path.existsSync;
var resolve = path.resolve;



function wxBuilder(o){
  o = Object.keys(o || {}).reduce(function(r,s){ r[s]=o[s]; return r; }, {
    wxBase: '/wxWidgets',
    wxConfig: resolve('build', 'config-'+process.platform+'.json'),
    useDll: false,
    verbose: false,
    name: 'wxnode',
  });

  this.wxConfig = new Config(o.wxConfig);
  this.name = this.wxConfig.CFG = o.name;
  this.wxBase = resolve(o.wxBase);
  this.wxLibDir = resolve(o.wxBase, 'lib/vc_'+(o.useDll ? 'dll' : 'lib')+o.name);
  this.wxBuildDir = resolve(o.wxBase, 'build/msw');
  this.wxIncludeDir = resolve(o.wxBase, 'include');
  this.srcDir =  resolve(__dirname, 'src');
  this.buildDir =  resolve(__dirname, 'build');
}

wxBuilder.msLibs = [ 'kernel32', 'user32', 'gdi32', 'comdlg32',
                     'comctl32', 'advapi32', 'shell32', 'ole32',
                     'oleaut32', 'rpcrt4', 'winspool', 'winmm' ];

wxBuilder.prototype = {
  build: function build(callback){
    var self = this;
    if (!exists(this.wxLibDir)) {
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
    var config = new File(this.wxBuildDir + '/'+configname);
    var makefile = new File(this.wxBuildDir + '/makefile_'+this.name);

    this.wxConfig.save(config);
    new File(this.wxBuildDir + '/makefile.vc').copy(makefile, function(s){
      return s.replace('config.vc', configname);
    });
    new File(this.wxIncludeDir + '/wx/msw/setup0.h').copy(this.wxIncludeDir + '/wx/msw/setup.h');

    child_process.spawn('nmake', [ makefile.path ], {
      cwd: this.wxBuildDir,
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

    builder.appendLinkerSearchDir(this.wxLibDir);

    builder.appendLinkerLibrary(dir(this.wxLibDir, '.lib'));
    builder.appendLinkerLibrary(wxBuilder.msLibs);

    builder.appendIncludeDir([
      this.srcDir,
      this.srcDir+'-dummy',
      this.srcDir+'-generated',
      this.wxIncludeDir
    ]);

    builder.appendSourceDir([
      this.srcDir,
      this.srcDir+'-generated'
    ]);

    builder.compileAndLink(callback);
  },

  vcVars: function vcVars(){
    var vcpath = [10,9,8].reduce(function(r,s){ return r ? r : (s = 'VS'+s+'0COMNTOOLS') in process.env ? process.env[s] : r; }, null);
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
    new File(path).write(this.serialize());
  },
  load: function load(path){
    return this.parse(new File(path).read());
  }
}


function File(name){
  if (File.prototype.isPrototypeOf(name)) return name;
  if (!File.prototype.isPrototypeOf(this)) return new File(name);
  this.path = path.resolve(name);
}

File.prototype = {
  constructor: File,
  encoding: 'utf8',
  chunkSize: 2 << 15,
  exists: function exists(){
    return fs.existsSync(this.path);
  },
  read: function read(){
    return fs.readFileSync(this.path, this.encoding);
  },
  write: function write(content){
    fs.writeFileSync(this.path, content);
  },
  delete: function delete_(){
    fs.unlinkSync(this.path);
  },
  open: function open(flag){
    this.fd && this.close();
    return this.fd = fs.openSync(this.path, flag);
  },
  close: function close(){
    this.fd && fs.closeSync(this.fd);
    delete this.fd;
  },
  copy: function copy(to, processor){
    to = new File(to);
    to.write(processor ? processor(this.read()) : this.read());
    return to.path;
  }
};
  // copy: function copy(to){
  //   var buffer = new Buffer(this.chunkSize);
  //   var dest = new File(to);
  //   var read = 1, offset = 0;

  //   this.open('r');
  //   dest.open('w');
  //   while (read > 0) {
  //     read = fs.readSync(this.fd, buffer, 0, this.chunkSize, offset);
  //     fs.writeSync(dest.fd, buffer, 0, read);
  //     offset += read;
  //   }
  //   this.close();
  //   dest.close();
  // }




function dir(name, filter){
  if (!exists(name))
    throw new Error('Path not found: '+pnameath);
  var files = fs.readdirSync(name);
  return filter ? files.filter(function(s){ return path.extname(s) === filter }) : files;
}

function execSync(params){
  var f = Math.random().toString(36).slice(2)+'.temp';
  child_process.exec(params+' 1>'+f+' 2>&1 & ren '+f+' _'+f);
  f = new File('_'+f);
  while (!f.exists());
  var output = f.read();
  f.delete();
  return output;
}



var builder = new wxBuilder;
builder.build();