#!/usr/bin/env node

var wxNode = require("../");
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
var TabOrder_Quit = wxNode.wxID_EXIT;
var TabOrder_About = wxNode.wxID_ABOUT;

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
var MyTabTextCtrl = wxNode.wxTextCtrl.extend({
  init: function(parent, value, flags) {
    flags = flags || 0;
    this._super(parent, wxNode.wxID_ANY, value,
                     wxNode.wxDefaultPosition, wxNode.wxDefaultSize,
                     flags);
    this.EVT_KEY_DOWN(this.onKeyDown);
  },

  onKeyDown: function(event) {
    if ( event.getKeyCode() == wxNode.WXK_TAB &&
            wxNode.wxMessageBox
            (
                "Let the Tab be used for navigation?",
                "wxWidgets TabOrder sample: Tab key pressed",
                wxNode.wxICON_QUESTION | wxNode.wxYES_NO,
                this
            ) != wxNode.wxYES )
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

var MyApp = wxNode.wxApp.extend({
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

var MyFrame = wxNode.wxFrame.extend({
  init: function() {
    this._super(null, wxNode.wxID_ANY, "TabOrder wxWidgets Sample",
                 wxNode.wxDefaultPosition, new wxNode.wxSize(700, 450));

    this.setIcon(new wxNode.wxIcon("./examples/sample.ico", wxNode.wxBITMAP_TYPE_ICO));

    var menuFile = new wxNode.wxMenu();
    menuFile.append(TabOrder_About);
    menuFile.appendSeparator();
    menuFile.append(TabOrder_Quit);

    var menuNav = new wxNode.wxMenu();
    menuNav.append(TabOrder_TabForward, "Tab &forward\tCtrl-F",
                    "Emulate a <Tab> press");
    menuNav.append(TabOrder_TabBackward, "Tab &backward\tCtrl-B",
                    "Emulate a <Shift-Tab> press");

    var mbar = new wxNode.wxMenuBar();
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
    wxNode.wxMessageBox("Tab navigation sample\n(c) 2007 Vadim Zeitlin",
                 "About TabOrder wxWidgets Sample", wxNode.wxOK, this);
  },

  onTabForward: function(event) {
    this.doNavigate(wxNode.wxNavigationKeyEvent.isForward | wxNode.wxNavigationKeyEvent.fromTab);
  },

  onTabBackward: function(event) {
    this.doNavigate(wxNode.wxNavigationKeyEvent.isBackward | wxNode.wxNavigationKeyEvent.fromTab);
  },

  s_windowFocus: null,
  onIdle: function(event) {
    // track the window which has the focus in the status bar
    var focus = wxNode.wxWindow.findFocus();
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
      wxNode.wxLogStatus(this, "Navigation event processed");
    }
    else
    {
      wxNode.wxLogStatus(this, "Navigation event ignored");
    }
  }

});

// ----------------------------------------------------------------------------
// MyPanel
// ----------------------------------------------------------------------------

var MyPanel = wxNode.wxPanel.extend({
  init: function(parent) {
    this._super(parent, wxNode.wxID_ANY);

    var notebook = new wxNode.wxNotebook(this, wxNode.wxID_ANY);
    notebook.addPage(this.createButtonPage(notebook), "Button");
    notebook.addPage(this.createTextPage(notebook), "Text");
    var sizerV = new wxNode.wxBoxSizer(wxNode.wxVERTICAL);
    var sizerFlags = new wxNode.wxSizerFlags(1).expand();
    sizerV.add(notebook, sizerFlags);

    var lbox = new wxNode.wxListBox(this, wxNode.wxID_ANY);
    lbox.appendString("Just a");
    lbox.appendString("simple");
    lbox.appendString("listbox");
    var sizerFlags = new wxNode.wxSizerFlags(1).expand();
    sizerV.add(lbox, sizerFlags);

    this.setSizerAndFit(sizerV);
  },

  createButtonPage: function(parent) {
    var flagsBorder = new wxNode.wxSizerFlags().border().centre();

    var page = new wxNode.wxPanel(parent);
    var sizerPage = new wxNode.wxBoxSizer(wxNode.wxHORIZONTAL);
    sizerPage.add(new wxNode.wxButton(page, wxNode.wxID_ANY, "&First"), flagsBorder);
    sizerPage.add(new wxNode.wxStaticText(page, wxNode.wxID_ANY, "[st&atic]"),
                   flagsBorder);
    sizerPage.add(new wxNode.wxButton(page, wxNode.wxID_ANY, "&Second"), flagsBorder);

    page.setSizer(sizerPage);

    return page;
  },

  createTextPage: function(parent) {
    var flagsBorder = new wxNode.wxSizerFlags().border();

    var sizerPage = new wxNode.wxBoxSizer(wxNode.wxVERTICAL);
    var page = new wxNode.wxPanel(parent);
    var sizerH = new wxNode.wxBoxSizer(wxNode.wxHORIZONTAL);
    sizerH.add(new wxNode.wxStaticText(page, wxNode.wxID_ANY, "&Label:"), flagsBorder);
    sizerH.add(new MyTabTextCtrl(page, "TAB ignored here"), flagsBorder);
    var sizerFlags = new wxNode.wxSizerFlags(1).expand();
    sizerPage.add(sizerH, sizerFlags);

    sizerH = new wxNode.wxBoxSizer(wxNode.wxHORIZONTAL);
    sizerH.add(new wxNode.wxStaticText(page, wxNode.wxID_ANY, "&Another one:"),
                flagsBorder);
    sizerH.add(new MyTabTextCtrl(page, "press Tab here", wxNode.wxTE_PROCESS_TAB),
                flagsBorder);
    var sizerFlags = new wxNode.wxSizerFlags(1).expand();
    sizerPage.add(sizerH, sizerFlags);

    page.setSizer(sizerPage);

    return page;
  }
});

setInterval(function() { console.log("timer"); }, 5000);

var app = new MyApp();
app.run();
