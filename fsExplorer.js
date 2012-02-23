var path = require('path');
var fs = require('fs');

var exists =  fs.exists || path.exists;
var existsSync = fs.existsSync || path.existsSync;
var isWin = process.platform === 'win32';
var slice = Function.call.bind([].slice);



module.exports = {
  explore: explore,
  resolve: resolve,
  Path: Path,
  File: File,
  Directory: Directory,
  existsSync: existsSync,
  exists: exists
};





var cache = {};
var existCache = {};

var types = {
  path: Path,
  file: File,
  directory: Directory
};



function explore(path){
  return new Path(path);
}


function resolve(){
  var parts = arguments.length ? 1 in arguments ? slice(arguments) : [arguments[0]] : null;
  if (!parts) return '';

  if (parts[0][0] === '~') {
    var home = process.env[isWin ? 'homepath' : 'home'];
    if (home) {
      parts[0] = parts[0].slice(1);
      parts.unshift(home);
    }
  }
  return path.resolve.apply(null, parts);
}




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

Path.getType = function getType(o){
  if (Path.isPath(o)) return o.getType(), o.constructor;
  if (typeof o === 'string') {
    if (o.toLowerCase() in types) return types[o.toLowerCase()];
    if (o in cache) return cache[o].constructor;
  }
}





Path.prototype = {
  constructor: Path,

  deref: function deref(){
    this.getName();
    this.getDirname();
    this.getParts();
    this.getType();
    this.getParent();
    return this;
  },

  getExtname: function getExtname(){
    return object.getResolve(this, 'extname', path.extname(this.path));
  },
  get extname(){ return this.getExtname() },

  getDirname: function getDirname(){
    return object.getResolve(this, 'dirname', path.dirname(this.path));
  },
  get dirname(){ return this.getDirname() },

  getBasename: function getBasename(){ 
    return object.getResolve(this, 'basename', path.basename(this.path));
  },
  get basename(){ return this.getBasename() },

  getName: function getName(){
//return object.getResolve(this, 'name', this.extname.length ? this.basename.slice(0, -this.extname.length) : this.basename.slice);
  },
  get name(){ return this.getName() },


  getStats: function getStats(){
    return object.getResolve(this, 'stats', new Stat(this.path));
  },
  get stats(){ return this.getStats() },

  getParts: function getParts(){
    return object.getResolve(this, 'parts', function(parts){
      parts = this.path.split(Path.separator[0]);
      isWin && object.define(this, 'drive', parts.shift());
      return parts;
    });
  },
  get parts(){ return this.getParts() },

  getType: function getType(){
    if (!this.exists()) return null;
    if (!this.constructor === Path) return this.type;

    var stats = this.stats;
    this.__proto__ = Path.getType(stats.type).prototype;
    return stats.type;
  },
  get type(){ return this.getType() },

  getParent: function getParent(){
    if (this.root) return
    return object.getResolve(this, 'parent', function(parent){
      parent = new Directory([this.path, '..']);
      if (parent === this) {
        object.define(this, 'root', true);
        return;
      }
      return parent;
    });
  },
  get parent(){ return this.getParent() },

  resolve: function resolve(request, type){
    return new type([this.path].concat(request));
  },

  relative: function relative(to){
    return path.relative(this.path, to);
  },

  toUnix: function toUnix(){
    return '/'+this.parts.join('/');
  },

  toWin: function toWin(){
    return [this.drive ? this.drive : 'C:'].concat(this.parts).join('\\');
  },

  toIdentifier: function toIdentifier(){
    return string.camelCase(this.basename.slice(0, -this.extname.length));
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
  }
};




function File(name){
  if (!Path.isPath(this)) return new File(name);
  if (Path.call(this, name) === name) return name;
}

File.prototype = {
  __proto__: Path.prototype,
  constructor: File,
  type: 'File',
  encoding: 'utf8',
  chunkSize: 65536,


  getSize: function getSize(){
    return object.getResolve(this, 'size', this.stats.size);
  },
  get size(){ return this.getSize() },

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
  },

  getChildren: function getChildren(){
    return object.getResolve(this, 'children', function(children){
      children = this.read().map(explore);
      return children;
    });
  },
  get children(){ return this.getChildren() },
};




var statTypes = Object.keys(fs.Stats.prototype);


function Stat(stats){
  if (typeof stats === 'string' && existsSync(stats)) {
    stats = fs.statSync(stats);
  }

  Object.getOwnPropertyNames(stats).forEach(function(s){
    if (stats[s]) this[s] = stats[s];
  }, this);

  for (var i=0; statTypes[i]; i++) {
    if (stats[statTypes[i]]()) {
      this.type = statTypes[i].slice(2);
      break;
    }
  }

  if (this.type === 'File') {
    this.sizeLabel = string.filesize(this.size);
  }
}





var object = {
  getOwn: function getOwn(o, name){
    if (o.hasOwnProperty(name)) return o[name];
  },

  getResolve: function getResolve(o, name, value, hidden, readonly){
    var val = object.getOwn(o, name);
    if (typeof val !== 'undefined') return val;

    var args = slice(arguments);
    if (args.length > 2 && typeof args[args.length-1] === 'function') {
      var cb = args.pop();
    }
    args[2] = cb ? cb.call(o, val || args[2]) : val || args[2];
    return object.define.apply(this, args);
  },

  define: function define(o, name, value, hidden, readonly){
    if (arguments.length === 3) {
      hidden = o.constructor.prototype === o;
    }
    Object.defineProperty(o, name, {
      value: value,
      enumerable: !hidden,
      writable: !readonly,
      configurable: true
    });
    return value;
  },

  hide: function hide(o,p){
    p = p || Object.keys(o);
    return Array.isArray(p) ? p.map(hide.bind(null, o)) : Object.defineProperty(o, p, { enumerable: false });
  }
};




var string = {
  camelCase: function(s){
    return s.replace(/[^\w]+(.)?/g, function(m, c){
      return c ? c.toUpperCase() : '';
    });
  },
  filesize: function(s){
    for (var b=0; s >= 1024; b++) s /= 1024;
    return (b ? s.toFixed(2)+' '+' kmgt'[b] : s+' ')+'b';
  }
};

object.hide(Path.prototype);
object.hide(File.prototype);
object.hide(Directory.prototype);
