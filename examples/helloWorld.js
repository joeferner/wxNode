
var wxNode = require("../");

var ID_Quit = 1;
var ID_About = 2;

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

    var menuFile = new wxNode.wxMenu();
    menuFile.append(ID_About, "&About");
    menuFile.appendSeparator();
    menuFile.append(ID_Quit, "E&xit");

    var menuBar = new wxNode.wxMenuBar();
    menuBar.append(menuFile, "&File");

    this.setMenuBar(menuBar);

    //TODO: this.createStatusBar();
    //TODO: this.setStatusText("Welcome to wxNode!");

    this.EVT_MENU(ID_About, this.onAbout);
    this.EVT_MENU(ID_Quit, this.onQuit);
  },

  onQuit: function(event) {
    this.close(true);
  },

  onAbout: function(event) {
    wxNode.wxMessageBox("This is a wxNode Hello world sample", "About Hello World", wxNode.wxOK | wxNode.wxICON_INFORMATION, this);
  }
});

var app = new MyApp();
app.run();
