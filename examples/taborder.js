#!/usr/bin/env node

var wx = require("../");
var util = require("util");

/////////////////////////////////////////////////////////////////////////////
// Name:        taborder.cpp
// Purpose:     Sample for testing TAB navigation
// Author:      Vadim Zeitlin
// Copyright:   (c) 2007 Vadim Zeitlin
// Licence:     wxWindows licence
/////////////////////////////////////////////////////////////////////////////

// ----------------------------------------------------------------------------
// constants
// ----------------------------------------------------------------------------

// menu commands and controls ids

// file menu
var TabOrder_Quit = wx.ID_EXIT;
var TabOrder_About = wx.ID_ABOUT;

// navigation menu
var TabOrder_TabForward = 200;
var TabOrder_TabBackward = 201;

var TabOrder_Max = 202;

// status panes: first one is for temporary messages, the second one shows
// current focus
var StatusPane_Default = 0;
var StatusPane_Focus = 1;
var StatusPane_Max = 2;

// ----------------------------------------------------------------------------
// declarations of the classes used in this sample
// ----------------------------------------------------------------------------

// a text control which checks if processing Tab presses in controls with
// wxTE_PROCESS_TAB style really works
var MyTabTextCtrl = wx.TextCtrl.extend({
  init: function(parent, value, flags) {
    flags = flags || 0;
    this._super(parent, wx.ID_ANY, value,
                     wx.DefaultPosition, wx.DefaultSize,
                     flags);
    this.EVT_KEY_DOWN(this.onKeyDown);
  },

  onKeyDown: function(event) {
    if ( event.getKeyCode() == wx.WXK_TAB &&
            wx.MessageBox
            (
                "Let the Tab be used for navigation?",
                "wxWidgets TabOrder sample: Tab key pressed",
                wx.ICON_QUESTION | wx.YES_NO,
                this
            ) != wx.YES )
    {
      // skip Skip() below: we consume the Tab press ourselves and so the
      // focus shouldn't change
      return;
    }

    event.skip();
  }
});

// ============================================================================
// implementation
// ============================================================================

// ----------------------------------------------------------------------------
// MyApp
// ----------------------------------------------------------------------------

var MyApp = wx.App.extend({
  onInit: function() {
    this._super();

    var frame = new MyFrame();
    frame.show(true);

    return true;
  }
});

// ----------------------------------------------------------------------------
// MyFrame
// ----------------------------------------------------------------------------

var MyFrame = wx.Frame.extend({
  init: function() {
    this._super(null, wx.ID_ANY, "TabOrder wxWidgets Sample",
                 wx.DefaultPosition, new wx.Size(700, 450));

    this.setIcon(new wx.Icon("./examples/sample.ico", wx.BITMAP_TYPE_ICO));

    var menuFile = new wx.Menu();
    menuFile.append(TabOrder_About);
    menuFile.appendSeparator();
    menuFile.append(TabOrder_Quit);

    var menuNav = new wx.Menu();
    menuNav.append(TabOrder_TabForward, "Tab &forward\tCtrl-F",
                    "Emulate a <Tab> press");
    menuNav.append(TabOrder_TabBackward, "Tab &backward\tCtrl-B",
                    "Emulate a <Shift-Tab> press");

    var mbar = new wx.MenuBar();
    mbar.append(menuFile, "&File");
    mbar.append(menuNav, "&Navigate");

    this.setMenuBar(mbar);

    this.m_panel = new MyPanel(this);

    this.createStatusBar(StatusPane_Max);

    this.EVT_MENU(TabOrder_Quit, this.onQuit);
    this.EVT_MENU(TabOrder_About, this.onAbout);

    this.EVT_MENU(TabOrder_TabForward, this.onTabForward);
    this.EVT_MENU(TabOrder_TabBackward, this.onTabBackward);

    this.EVT_IDLE(this.onIdle);

    this.EVT_CLOSE(this.onClose);
  },

  onClose: function(event) {
    process.exit();
  },

  onQuit: function(event) {
    this.close(true);
  },

  onAbout: function(event) {
    wx.MessageBox("Tab navigation sample\n(c) 2007 Vadim Zeitlin",
                 "About TabOrder wxWidgets Sample", wx.OK, this);
  },

  onTabForward: function(event) {
    this.doNavigate(wx.NavigationKeyEvent.isForward | wx.NavigationKeyEvent.fromTab);
  },

  onTabBackward: function(event) {
    this.doNavigate(wx.NavigationKeyEvent.isBackward | wx.NavigationKeyEvent.fromTab);
  },

  s_windowFocus: null,
  onIdle: function(event) {
    // track the window which has the focus in the status bar
    var focus = wx.Window.findFocus();
    if ( focus != this.s_windowFocus )
    {
      this.s_windowFocus = focus;

      var msg;
      if ( focus )
      {
          msg = util.format("Focus is at %s", this.s_windowFocus.getName());
      }
      else
      {
          msg = "No focus";
      }

      this.setStatusText(msg, StatusPane_Focus);
    }
  },

  doNavigate: function(flags) {
    if ( this.m_panel.navigateIn(flags) )
    {
      wx.LogStatus(this, "Navigation event processed");
    }
    else
    {
      wx.LogStatus(this, "Navigation event ignored");
    }
  }

});

// ----------------------------------------------------------------------------
// MyPanel
// ----------------------------------------------------------------------------

var MyPanel = wx.Panel.extend({
  init: function(parent) {
    this._super(parent, wx.ID_ANY);

    var notebook = new wx.Notebook(this, wx.ID_ANY);
    notebook.addPage(this.createButtonPage(notebook), "Button");
    notebook.addPage(this.createTextPage(notebook), "Text");
    var sizerV = new wx.BoxSizer(wx.VERTICAL);
    var sizerFlags = new wx.SizerFlags(1).expand();
    sizerV.add(notebook, sizerFlags);

    var lbox = new wx.ListBox(this, wx.ID_ANY);
    lbox.appendString("Just a");
    lbox.appendString("simple");
    lbox.appendString("listbox");
    var sizerFlags = new wx.SizerFlags(1).expand();
    sizerV.add(lbox, sizerFlags);

    this.setSizerAndFit(sizerV);
  },

  createButtonPage: function(parent) {
    var flagsBorder = new wx.SizerFlags().border().centre();

    var page = new wx.Panel(parent);
    var sizerPage = new wx.BoxSizer(wx.HORIZONTAL);
    sizerPage.add(new wx.Button(page, wx.ID_ANY, "&First"), flagsBorder);
    sizerPage.add(new wx.StaticText(page, wx.ID_ANY, "[st&atic]"),
                   flagsBorder);
    sizerPage.add(new wx.Button(page, wx.ID_ANY, "&Second"), flagsBorder);

    page.setSizer(sizerPage);

    return page;
  },

  createTextPage: function(parent) {
    var flagsBorder = new wx.SizerFlags().border();

    var sizerPage = new wx.BoxSizer(wx.VERTICAL);
    var page = new wx.Panel(parent);
    var sizerH = new wx.BoxSizer(wx.HORIZONTAL);
    sizerH.add(new wx.StaticText(page, wx.ID_ANY, "&Label:"), flagsBorder);
    sizerH.add(new MyTabTextCtrl(page, "TAB ignored here"), flagsBorder);
    var sizerFlags = new wx.SizerFlags(1).expand();
    sizerPage.add(sizerH, sizerFlags);

    sizerH = new wx.BoxSizer(wx.HORIZONTAL);
    sizerH.add(new wx.StaticText(page, wx.ID_ANY, "&Another one:"),
                flagsBorder);
    sizerH.add(new MyTabTextCtrl(page, "press Tab here", wx.TE_PROCESS_TAB),
                flagsBorder);
    var sizerFlags = new wx.SizerFlags(1).expand();
    sizerPage.add(sizerH, sizerFlags);

    page.setSizer(sizerPage);

    return page;
  }
});

setInterval(function() { console.log("timer"); }, 5000);

var app = new MyApp();
app.run();
