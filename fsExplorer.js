var path = require('path');
var fs = require('fs');



var exists =  fs.exists || path.exists;
var existsSync = fs.existsSync || path.existsSync;
var resolve = path.resolve;

var isWin = process.platform === 'win32';
var slice = Function.call.bind([].slice);




module.exports = {
  explore: function explore(path){
    return new Path(path);
  },
  
  Path: Path,
  File: File,
  Directory: Directory,

  existsSync: existsSync,
  exists: exists,
  resolve: resolve
};




var cache = {};
var existCache = {};


function Path(request, type){
  if (type) {
    return Path.isPath(request) ? new type(request.path) : new type(request);
  }
  if (Path.isPath(request)) return request;
  if (!Path.isPath(this)) return new Path(request);

  this.path = Array.isArray(request) ? resolve.apply(null, request) : resolve(request);
  if (this.path in cache) return cache[this.path];
  return cache[this.path] = this;
}

Path.separator = isWin ? [/[\/\\]/, '\\'] : [/\//, '/'];

Path.isPath = function isPath(o){
  return Path.prototype.isPrototypeOf(o);
};


Path.prototype = {
  constructor: Path,

  getExtname: function getExtname(){
    return this.define('extname', path.extname(this.path));
  },
  get extname(){ return this.getExtname() },

  getDirname: function getDirname(){
    return this.define('dirname', path.dirname(this.path));
  },
  get dirname(){ return this.getDirname() },

  getBasename: function getBasename(){ 
    return this.define('basename', path.basename(this.path));
  },
  get basename(){ return this.getBasename() },

  getName: function getName(){
    return this.define('name', this.basename.slice(0, -this.extname.length));
  },
  get name(){ return this.getName() },


  getStats: function getStats(){
    return this.define('stats', fs.statSync(this.path));
  },
  get stats(){ return this.getStats() },

  getParts: function getParts(){
    this.define('parts', this.path.split(Path.separator[0]));
    if (isWin) {
      this.define('drive', this.parts.shift());
    }
    return this.parts;
  },
  get parts(){ return this.getParts() },

  getType: function getType(){
    if (!this.exists()) return null;
    var stats = fs.statSync(this.path);
    if (stats.isFile()) {
      this.__proto__ = File.prototype;
      return 'File';
    }
    if (stats.isDirectory()) {
      this.__proto__ = Directory.prototype;
      return 'Directory';
    }
    return null;
  },
  get type(){ return this.getType() },

  getParent: function getParent(){
    if (this.root) return
    this.define('parent', new Directory([this.path, '..']));
    if (this.parent === this) {
      this.define('root', true);
    }
    return this.parent;
  },
  get parent(){ return this.getParent() },

  resolve: function resolve(request, type){
    type = type || File;
    return new type([this.path].concat(request));
  },

  relative: function relative(to){
    return path.relative(this.path, to);
  },

  toUnix: function toUnix(){
    return '/'+this.split.join('/');
  },

  toWin: function toWin(){
    return [this.drive ? this.drive : 'C:'].concat(this.split).join('\\');
  },

  toIdentifier: function toIdentifier(){
    return this.basename.slice(0,-this.extname.length).replace(/[^\w]+(.)?/g, function(m,c){
      return c ? c.toUpperCase() : '';
    });
  },

  toString: function toString(){
    return this.path;
  },

  exists: function exists(){
    if (existCache[this.path]) return existCache[this.path][0];
    existCache[this.path] = [
      existsSync(this.path),
      setTimeout(function(){ delete existCache[this.path] }.bind(this), 10000)
    ];
    return existCache[this.path][0];
  },

  define: function define(name, value, hidden, readonly){
    if (arguments.length === 2) {
      hidden = this.constructor.prototype === this;
    }
    Object.defineProperty(this, name, {
      value: value,
      enumerable: !hidden,
      writable: !readonly,
      configurable: true
    });
    return value;
  }
};



function File(name){
  if (!Path.isPath(this)) return new File(name);
  if (Path.call(this, name) === name) return name;
}

File.prototype = {
  __proto__: Path.prototype,
  constructor: File,
  encoding: 'utf8',
  chunkSize: 2 << 15,
  isFile: true,
  type: 'File',
  read: function read(){
    return this.contents = fs.readFileSync(this.path, this.encoding);
  },
  write: function write(content){
    this.contents = content || this.contents || '';
    fs.writeFileSync(this.path, this.contents);
    return this;
  },
  delete: function delete_(){
    fs.unlinkSync(this.path);
    delete this.contents;
    return this;
  },
  move: function move(to){
    to = new File(to);
    fs.renameSync(this.path, to.path);
    return to;
  },
  copy: function copy(to, processor){
    to = new File(to);
    to.write(processor ? processor(this.read()) : this.read());
    return to;
  },
  open: function open(flag){
    this.fd && this.close();
    this.fd = fs.openSync(this.path, flag);
    return this;
  },
  close: function close(){
    this.fd && fs.closeSync(this.fd);
    delete this.fd;
    return this;
  },
  streamCopy: function streamCopy(to){
    var buffer = new Buffer(this.chunkSize);
    var dest = new File(to);
    var read = 1, offset = 0;

    this.open('r');
    dest.open('w');
    while (read > 0) {
      read = fs.readSync(this.fd, buffer, 0, this.chunkSize, offset);
      fs.writeSync(dest.fd, buffer, 0, read);
      offset += read;
    }
    this.close();
    dest.close();
    return dest;
  }
};



function Directory(name){
  if (!Path.isPath(this)) return new Directory(name);
  if (Path.call(this, name) === name) return name;
}

Directory.filters = {
  ext: function ext(ext){
    return function(f){ return path.extname(f) === ext }
  },
  prop: function prop(n, to, op){
    switch (op) {
      default:
      case '===': return function(f){ return f[n] === to };
      case '!==': return function(f){ return f[n] !== to };
      case '>':   return function(f){ return f[n] > to };
      case '<':   return function(f){ return f[n] < to };
    }
  }
};

Directory.prototype = {
  __proto__: Path.prototype,
  constructor: Directory,
  isDir: true,
  type: 'Directory',
  map: function map(names){
    return (Array.isArray(names) ? names : [names]).map(resolve.bind(null, this.path));
  },
  read: function read(unmapped){
    var names = fs.readdirSync(this.path);
    return unmapped ? names : this.map(names);
  },
  filter: function filter(filterBy){
    var callback;
    if (typeof filtberBy === 'function') {
      callback = filterBy;
    } else if (typeof filterBy === 'string') {
      if (filterBy[0] === '.') {
        callback = Directory.filters.ext(filterBy)
      }
    }
    return this.read().filter(callback);
  }
};



// function filesize(a){
//   for (var b=0; a>=1024; b++) a /= 1024;
//   return (b ? a.toFixed(2)+' '+' kmgt'[b] : a+' ')+'b';
// }