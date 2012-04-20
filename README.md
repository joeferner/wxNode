# wxNode

node.js wrapper for wxWidgets.

## Installation Linux

* Download and install wxWidgets 2.9.3.

```bash
$ npm install wxnode
```

## Installation Windows

* Download wxWidgets 2.9.3.
* Download and install node from source (release, 64-bit) "vcbuild.bat release"

```bash
cd d:\dev\wxWidgets-2.9.3\build\msw
nmake -f makefile.vc BUILD=release UNICODE=1 RUNTIME_LIBS=static DEBUG_FLAG=0
set WXWIN=d:\dev\wxWidgets-2.9.3
set WXCFG=vc_lib\mswu
cd d:\dev\wxNode
node mnm.js build
```

## Try an example

```javascript
node examples/helloWorld.js
node examples/...
```

## Quick Examples

```javascript
var wx = require("wxnode");

var MyApp = wx.App.extend({
  onInit: function() {
    var location = new wx.Point(50, 50);
    var size = new wx.Size(450, 340);
    var frame = new MyFrame("Hello World", location, size);
    frame.show(true);
    this.setTopWindow(frame);
    return true;
  }
});

var MyFrame = wx.Frame.extend({
  init: function(title, pos, size) {
    this._super(null, -1, title, pos, size);

    this.EVT_CLOSE(this.onClose);
  },

  onClose: function(event) {
    process.exit();
  }
});

var app = new MyApp();
app.run();
```

## Building wxWidgets linux
```bash
$ sudo apt-get install libwebkitgtk-dev
$ sudo ldconfig
$ ./configure --enable-webview --enable-webview-webkit && make
$ sudo make install
```

<a name="create-wxapi"/>
## Creating wxapi.xml from wxWidgets

```bash
$ sudo apt-get install libwebkitgtk-dev
$ cd wxWidgets-2.9.3/docs/doxygen
$ ./regen.sh xml
$ cd ../..
$ ./configure --enable-webview --enable-webview-webkit
$ patch -p0 -i ~/wxNode/rungccxml.sh.patch
$ patch -p0 -i ~/wxNode/strvararg.h.patch
$ cd utils/ifacecheck/
$ ./rungccxml.sh
$ cp wxapi.xml ~/wxNode/wxapi.xml
$ cd ~/wxNode
$ rm wxapi.json
$ rm -rf build
$ ./render-templates.js && ./mnm.js build
```
