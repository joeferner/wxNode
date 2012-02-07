# wxNode

node.js wrapper for wxWidgets.

## Quick Examples

```javascript
var wxNode = require("wxnode");

var MyApp = wxNode.wxApp.extend({
  onInit: function() {
    var location = new wxNode.wxPoint(50, 50);
    var size = new wxNode.wxSize(450, 340);
    var frame = new MyFrame("Hello World", location, size);
    frame.show(true);
    this.setTopWindow(frame);
    return true;
  }
});

var MyFrame = wxNode.wxFrame.extend({
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
