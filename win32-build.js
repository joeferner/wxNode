var path = require('path');
var fs = require('fs');
path.existsSync = fs.existsSync || path.existsSync;
var resolve = path.resolve;

var Builder = require('mnm');


function wxBuilder(base){
  base = base || '/wxWidgets'
  this.wxBase = resolve(base);
  this.wxLibDir = resolve(base, 'lib/vc_'+(this.dll ? 'dll' : 'lib'));
  this.wxIncludeDir = resolve(base, 'include');
  this.srcDir =  resolve(__dirname, 'src');
  this.name = 'wxnode_bindings';
  this.wxBuildConfig = wxBuilder.readConfig(resolve(this.wxLibDir, 'mswu/build.cfg'));
}

wxBuilder.readConfig = function readConfig(file){
  return fs.readFileSync(file, 'utf8').split(' \r\n').reduce(function(r,s){
    if (s) {
      s = s.split('=');
      r[s[0].toLowerCase()] = s[1];
    }
    return r;
  }, {});
}

wxBuilder.prototype = {
  verbose: false,
  dll: true,
  build: function build(){
    var b = new Builder;
    b.target = this.name;
    b.verbose = this.verbose;
    
    b.appendUnique('CXXFLAGS', '-DUNICODE');

    if (this.dll)
      b.appendUnique('CXXFLAGS', '-DWXUSINGDLL');

    if (this.wxBuildConfig.cxxflags)
      b.appendUnique('CXXFLAGS', this.wxBuildConfig.cxxflags);

    ['IncludeDir', 'SourceDir', 'LinkerSearchDir','Source', 'LinkerLibrary'].forEach(function(s){
      b[s] = function(){ [].forEach.call(arguments, Builder.prototype['append'+s].bind(b)) };
    });

    b.LinkerSearchDir(this.wxLibDir);
    b.LinkerLibrary.apply(null, fs.readdirSync(this.wxLibDir).filter(function(s){ return path.extname(s) === '.lib' }));

    b.IncludeDir(this.srcDir, this.srcDir+'-dummy', this.srcDir+'-generated', this.wxIncludeDir);
    b.SourceDir(this.srcDir, this.srcDir+'-generated');

    b.compileAndLink(function(e){
      console.log(e || 'complete');
    });
  }
}


var builder = new wxBuilder;
builder.build();