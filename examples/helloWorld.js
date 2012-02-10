#!/usr/bin/env node

var wx = require("../");

var ID_Quit = 1;
var ID_About = 2;

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

    var menuFile = new wx.Menu();
    menuFile.append(ID_About, "&About");
    menuFile.appendSeparator();
    menuFile.append(ID_Quit, "E&xit");

    var menuBar = new wx.MenuBar();
    menuBar.append(menuFile, "&File");

    this.setMenuBar(menuBar);

    this.createStatusBar();
    this.setStatusText("Welcome to wxNode!");

    this.EVT_MENU(ID_About, this.onAbout);
    this.EVT_MENU(ID_Quit, this.onQuit);

    this.EVT_CLOSE(this.onClose);
  },

  onClose: function(event) {
    process.exit();
  },

  onQuit: function(event) {
    this.close(true);
  },

  onAbout: function(event) {
    wx.MessageBox("This is a wxNode Hello world sample", "About Hello World", wx.OK | wx.ICON_INFORMATION, this);
  }
});

setInterval(function() { console.log("timer"); }, 5000);

var app = new MyApp();
app.run();
