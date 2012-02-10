# wxNode

node.js wrapper for wxWidgets.

## Installation Linux

* Download and install wxWidgets 2.9.3.

```bash
$ npm install wxnode
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

<a name="create-wxapi"/>
## Creating wxapi.xml from wxWidgets

```bash
$ cd wxWidgets-2.9.3/docs/doxygen
$ ./regen.sh xml
$ cd ../..
$ ./configure
$ patch -p1 -i ~/wxNode/rungccxml.sh.patch
$ patch -p1 -i ~/wxNode/strvararg.h.patch
$ cd utils/ifacecheck/
$ ./rungccxml.sh
$ cp wxapi.xml ~/wxNode/wxapi.xml
$ cd ~/wxNode
$ rm wxapi.json
$ rm -rf build
$ ./render-templates.js && ./mnm.js build
```
