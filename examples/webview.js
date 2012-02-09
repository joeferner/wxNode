#!/usr/bin/env node

var wxNode = require("../");
var util = require("util");

/////////////////////////////////////////////////////////////////////////////
// Name:        webview.cpp
// Purpose:     wxWebView sample
// Author:      Marianne Gagnon
// Id:          $Id: webview.cpp 69748 2011-11-13 12:57:28Z SJL $
// Copyright:   (c) 2010 Marianne Gagnon, Steven Lamerton
// Licence:     wxWindows licence
/////////////////////////////////////////////////////////////////////////////

//We map menu items to their history items
// TODO
//WX_DECLARE_HASH_MAP(int, wxSharedPtr<wxWebViewHistoryItem>,
//                    wxIntegerHash, wxIntegerEqual, wxMenuHistoryMap);

var WebApp = wxNode.wxApp.extend({
  onInit: function() {
    this._super();

    var frame = new WebFrame();
    frame.show();

    return true;
  }
});

var WebFrame = wxNode.wxFrame.extend({
  init: function() {
    this._super(null, wxNode.wxID_ANY, "wxWebView Sample");
    
    //Required from virtual file system archive support
    // TODO wxNode.wxFileSystem.addHandler(new wxNode.wxArchiveFSHandler());

    // set the frame icon
    this.setIcon(new wxNode.wxIcon("./examples/sample.ico", wxNode.wxBITMAP_TYPE_ICO));
    this.setTitle("wxWebView Sample");

    var topsizer = new wxNode.wxBoxSizer(wxNode.wxVERTICAL);

    // Create the toolbar
    this.m_toolbar = this.createToolBar(wxNode.wxTB_TEXT);
    this.m_toolbar.setToolBitmapSize(new wxNode.wxSize(32, 32));

    var back = wxNode.wxArtProvider.getBitmap(wxNode.wxART_GO_BACK, wxNode.wxART_TOOLBAR);
    var forward = wxNode.wxArtProvider.getBitmap(wxNode.wxART_GO_FORWARD, wxNode.wxART_TOOLBAR);
    var stop = new wxNode.wxBitmap(stop_xpm);
    var refresh = new wxNode.wxBitmap(refresh_xpm);

    this.m_toolbar_back = this.m_toolbar.addTool(wxNode.wxID_ANY, "Back", this.back);
    this.m_toolbar_forward = this.m_toolbar.addTool(wxNode.wxID_ANY, "Forward", this.forward);
    this.m_toolbar_stop = this.m_toolbar.addTool(wxNode.wxID_ANY, "Stop", this.stop);
    this.m_toolbar_reload = this.m_toolbar.addTool(wxNode.wxID_ANY, "Reload", this.refresh);
    this.m_url = new wxNode.wxTextCtrl(this.m_toolbar, wxNode.wxID_ANY, "", wxNode.wxDefaultPosition, new wxNode.wxSize(400, -1), wxNode.wxTE_PROCESS_ENTER );
    this.m_toolbar.addControl(this.m_url, "URL");
    this.m_toolbar_tools = this.m_toolbar.addTool(wxNode.wxID_ANY, "Menu", new wxNode.wxBitmap(wxlogo_xpm));

    this.m_toolbar.realize();

    // Create the info panel
    this.m_info = new wxNode.wxInfoBar(this);
    this.topsizer.add(this.m_info, new wxNode.wxSizerFlags().expand());

    // Create the webview
    this.m_browser = wxNode.wxWebView.New(this, wxNode.wxID_ANY, "http://www.wxwidgets.org");
    this.topsizer.add(this.m_browser, new wxNode.wxSizerFlags().expand().proportion(1));

    //We register the wxfs:// protocol for testing purposes
    this.m_browser.registerHandler(new wxWebViewArchiveHandler("wxfs"));

    this.setSizer(this.topsizer);

    //Set a more sensible size for web browsing
    this.setSize(new wxNode.wxSize(800, 600));

    // Create a log window
    new wxNode.wxLogWindow(this, "Logging");

    // Create the Tools menu
    this.m_tools_menu = new wxNode.wxMenu();
    var print = this.m_tools_menu.append(wxNode.wxID_ANY , "Print");
    var viewSource = this.m_tools_menu.append(wxNode.wxID_ANY , "View Source");
    this.m_tools_menu.appendSeparator();
    this.m_tools_layout = this.m_tools_menu.appendCheckItem(wxNode.wxID_ANY, "Use Layout Zoom");
    this.m_tools_tiny = this.m_tools_menu.appendCheckItem(wxNode.wxID_ANY, "Tiny");
    this.m_tools_small = this.m_tools_menu.appendCheckItem(wxNode.wxID_ANY, "Small");
    this.m_tools_medium = this.m_tools_menu.appendCheckItem(wxNode.wxID_ANY, "Medium");
    this.m_tools_large = this.m_tools_menu.appendCheckItem(wxNode.wxID_ANY, "Large");
    this.m_tools_largest = this.m_tools_menu.appendCheckItem(wxNode.wxID_ANY, "Largest");
    this.m_tools_menu.appendSeparator();
    this.m_tools_handle_navigation = this.m_tools_menu.appendCheckItem(wxNode.wxID_ANY, "Handle Navigation");
    this.m_tools_handle_new_window = this.m_tools_menu.appendCheckItem(wxNode.wxID_ANY, "Handle New Windows");
    this.m_tools_menu.appendSeparator();

    //History menu
    this.m_tools_history_menu = new wxNode.wxMenu();
    var clearhist = this.m_tools_history_menu.append(wxNode.wxID_ANY, "Clear History");
    this.m_tools_enable_history = this.m_tools_history_menu.appendCheckItem(wxNode.wxID_ANY, "Enable History");
    this.m_tools_history_menu.appendSeparator();

    this.m_tools_menu.appendSubMenu(this.m_tools_history_menu, "History");

    //Create an editing menu
    var editmenu = new wxNode.wxMenu();
    this.m_edit_cut = editmenu.append(wxNode.wxID_ANY, "Cut");
    this.m_edit_copy = editmenu.append(wxNode.wxID_ANY, "Copy");
    this.m_edit_paste = editmenu.append(wxNode.wxID_ANY, "Paste");
    this.editmenu.appendSeparator();
    this.m_edit_undo = editmenu.append(wxNode.wxID_ANY, "Undo");
    this.m_edit_redo = editmenu.append(wxNode.wxID_ANY, "Redo");
    this.editmenu.appendSeparator();
    this.m_edit_mode = editmenu.appendCheckItem(wxNode.wxID_ANY, "Edit Mode");

    this.m_tools_menu.appendSeparator();
    this.m_tools_menu.appendSubMenu(this.editmenu, "Edit");

    var script = this.m_tools_menu.append(wxNode.wxID_ANY, "Run Script");

    //Selection menu
    var selection = new wxNode.wxMenu();
    this.m_selection_clear = selection.append(wxNode.wxID_ANY, "Clear Selection");
    this.m_selection_delete = selection.append(wxNode.wxID_ANY, "Delete Selection");
    var selectall = selection.append(wxNode.wxID_ANY, "Select All");

    editmenu.appendSubMenu(selection, "Selection");

    var loadscheme = this.m_tools_menu.append(wxNode.wxID_ANY, "Custom Scheme Example");

    //By default we want to handle navigation and new windows
    this.m_tools_handle_navigation.check();
    this.m_tools_handle_new_window.check();
    this.m_tools_enable_history.check();
    if(!this.m_browser.canSetZoomType(wxNode.wxWEB_VIEW_ZOOM_TYPE_LAYOUT))
        this.m_tools_layout.enable(false);


    // Connect the toolbar events
    this.connect(this.m_toolbar_back.getId(), wxNode.wxEVT_COMMAND_TOOL_CLICKED,
            this.onBack, null, this );
    this.connect(this.m_toolbar_forward.getId(), wxNode.wxEVT_COMMAND_TOOL_CLICKED,
            this.onForward, null, this );
    this.connect(this.m_toolbar_stop.getId(), wxNode.wxEVT_COMMAND_TOOL_CLICKED,
            this.onStop, null, this );
    this.connect(this.m_toolbar_reload.getId(), wxNode.wxEVT_COMMAND_TOOL_CLICKED,
            this.onReload, null, this );
    this.connect(this.m_toolbar_tools.getId(), wxNode.wxEVT_COMMAND_TOOL_CLICKED,
            onToolsClicked, null, this );

    this.connect(this.m_url.getId(), wxNode.wxEVT_COMMAND_TEXT_ENTER,
            this.onUrl, null, this );

    // Connect the webview events
    this.connect(this.m_browser.getId(), wxNode.wxEVT_COMMAND_WEB_VIEW_NAVIGATING,
            OnNavigationRequest, null, this);
    this.connect(this.m_browser.getId(), wxNode.wxEVT_COMMAND_WEB_VIEW_NAVIGATED,
            OnNavigationComplete, null, this);
    this.connect(this.m_browser.getId(), wxNode.wxEVT_COMMAND_WEB_VIEW_LOADED,
            OnDocumentLoaded, null, this);
    this.connect(this.m_browser.getId(), wxNode.wxEVT_COMMAND_WEB_VIEW_ERROR,
            OnError, null, this);
    this.connect(this.m_browser.getId(), wxNode.wxEVT_COMMAND_WEB_VIEW_NEWWINDOW,
            OnNewWindow, null, this);
    this.connect(this.m_browser.getId(), wxNode.wxEVT_COMMAND_WEB_VIEW_TITLE_CHANGED,
            OnTitleChanged, null, this);

    // Connect the menu events
    this.connect(viewSource.getId(), wxNode.wxEVT_COMMAND_MENU_SELECTED,
           OnViewSourceRequest,  null, this );
    this.connect(print.getId(), wxNode.wxEVT_COMMAND_MENU_SELECTED,
            OnPrint,  null, this );
    this.connect(this.m_tools_layout.getId(), wxNode.wxEVT_COMMAND_MENU_SELECTED,
            OnZoomLayout,  null, this );
    this.connect(this.m_tools_tiny.getId(), wxNode.wxEVT_COMMAND_MENU_SELECTED,
            OnSetZoom,  null, this );
    this.connect(this.m_tools_small.getId(), wxNode.wxEVT_COMMAND_MENU_SELECTED,
            OnSetZoom,  null, this );
    this.connect(this.m_tools_medium.getId(), wxNode.wxEVT_COMMAND_MENU_SELECTED,
            OnSetZoom,  null, this );
    this.connect(this.m_tools_large.getId(), wxNode.wxEVT_COMMAND_MENU_SELECTED,
            OnSetZoom,  null, this );
    this.connect(this.m_tools_largest.getId(), wxNode.wxEVT_COMMAND_MENU_SELECTED,
            OnSetZoom,  null, this );
    this.connect(clearhist.getId(), wxNode.wxEVT_COMMAND_MENU_SELECTED,
            OnClearHistory,  null, this );
    this.connect(this.m_tools_enable_history.getId(), wxNode.wxEVT_COMMAND_MENU_SELECTED,
            OnEnableHistory,  null, this );
    this.connect(this.m_edit_cut.getId(), wxNode.wxEVT_COMMAND_MENU_SELECTED,
            OnCut,  null, this );
    this.connect(this.m_edit_copy.getId(), wxNode.wxEVT_COMMAND_MENU_SELECTED,
            OnCopy,  null, this );
    this.connect(this.m_edit_paste.getId(), wxNode.wxEVT_COMMAND_MENU_SELECTED,
            OnPaste,  null, this );
    this.connect(this.m_edit_undo.getId(), wxNode.wxEVT_COMMAND_MENU_SELECTED,
            OnUndo,  null, this );
    this.connect(this.m_edit_redo.getId(), wxNode.wxEVT_COMMAND_MENU_SELECTED,
            OnRedo,  null, this );
    this.connect(this.m_edit_mode.getId(), wxNode.wxEVT_COMMAND_MENU_SELECTED,
            OnMode,  null, this );
    this.connect(script.getId(), wxNode.wxEVT_COMMAND_MENU_SELECTED,
            OnRunScript,  null, this );
    this.connect(this.m_selection_clear.getId(), wxNode.wxEVT_COMMAND_MENU_SELECTED,
            OnClearSelection,  null, this );
    this.connect(this.m_selection_delete.getId(), wxNode.wxEVT_COMMAND_MENU_SELECTED,
            OnDeleteSelection,  null, this );
    this.connect(selectall.getId(), wxNode.wxEVT_COMMAND_MENU_SELECTED,
            OnSelectAll,  null, this );
    this.connect(loadscheme.getId(), wxNode.wxEVT_COMMAND_MENU_SELECTED,
            OnLoadScheme,  null, this );

    //Connect the idle events
    this.connect(wxID_ANY, wxEVT_IDLE, this.onIdle, null, this);
  },
  
  /**
   * Method that retrieves the current state from the web control and updates the GUI
   * the reflect this current state.
   */
  updateState: function() {
    this.m_toolbar.enableTool( this.m_toolbar_back.getId(), this.m_browser.canGoBack() );
    this.m_toolbar.enableTool( this.m_toolbar_forward.getId(), this.m_browser.canGoForward() );

    if (this.m_browser.isBusy())
    {
        this.m_toolbar.enableTool( this.m_toolbar_stop.getId(), true );
    }
    else
    {
        this.m_toolbar.enableTool( this.m_toolbar_stop.getId(), false );
    }

    this.setTitle( this.m_browser.getCurrentTitle() );
    this.m_url.setValue( this.m_browser.getCurrentURL() );
  },
  
  onIdle: function(evt)
  {
    if(this.m_browser.isBusy())
    {
        wxNode.wxSetCursor(wxNode.wxCURSOR_ARROWWAIT);
        this.m_toolbar.enableTool(this.m_toolbar_stop.getId(), true);
    }
    else
    {
        wxNode.wxSetCursor(wxNode.wxNullCursor);
        this.m_toolbar.enableTool(this.m_toolbar_stop.getId(), false);
    }
  },

  /**
    * Callback invoked when user entered an URL and pressed enter
    */
  onUrl: function(evt)
  {
    this.m_browser.loadURL( this.m_url.getValue() );
    this.m_browser.setFocus();
    this.updateState();
  },

  /**
   * Callback invoked when user pressed the "back" button
   */
  onBack: function(evt)
  {
    this.m_browser.goBack();
    this.updateState();
  },

  /**
   * Callback invoked when user pressed the "forward" button
   */
  onForward: function(evt)
  {
    this.m_browser.goForward();
    this.updateState();
  },

  /**
   * Callback invoked when user pressed the "stop" button
   */
  onStop: function(evt)
  {
    this.m_browser.stop();
    updateState();
  },

  /**
   * Callback invoked when user pressed the "reload" button
   */
  onReload: function(evt)
  {
    this.m_browser.reload();
    this.updateState();
  },

  onClearHistory: function(evt)
  {
    this.m_browser.clearHistory();
    this.updateState();
  },

  onEnableHistory: function(evt)
  {
    this.m_browser.enableHistory(this.m_tools_enable_history.isChecked());
    this.updateState();
  },

  onCut: function(evt)
  {
    this.m_browser.cut();
  },

  onCopy: function(evt)
  {
    this.m_browser.copy();
  },

  onPaste: function(evt)
  {
    this.m_browser.paste();
  },

  onUndo: function(evt)
  {
    this.m_browser.undo();
  },

  onRedo: function(evt)
  {
    this.m_browser.redo();
  },

  onMode: function(evt)
  {
    this.m_browser.setEditable(this.m_edit_mode.isChecked());
  },

  onLoadScheme: function(evt)
  {
    var helpfile = new wxNode.wxFileName("../help/doc.zip");
    helpfile.makeAbsolute();
    var path = helpfile.getFullPath();
    //Under MSW we need to flip the slashes
    path.replace("\\", "/");
    path = "wxfs:///" + path + ";protocol=zip/doc.htm";
    this.m_browser.loadURL(path);
  },

  /**
   * Callback invoked when there is a request to load a new page (for instance
   * when the user clicks a link)
   */
  onNavigationRequest: function(evt)
  {
    if(this.m_info.isShown())
    {
      this.m_info.dismiss();
    }

    wxNode.wxLogMessage("%s", "Navigation request to '" + evt.getURL() + "' (target='" +
      evt.getTarget() + "')");

    //If we don't want to handle navigation then veto the event and navigation
    //will not take place, we also need to stop the loading animation
    if(!this.m_tools_handle_navigation.isChecked())
    {
        evt.veto();
        this.m_toolbar.enableTool( this.m_toolbar_stop.getId(), false );
    }
    else
    {
        this.updateState();
    }
  },

  /**
   * Callback invoked when a navigation request was accepted
   */
  onNavigationComplete: function(evt)
  {
    wxNode.wxLogMessage("%s", "Navigation complete; url='" + evt.getURL() + "'");
    this.updateState();
  },

  /**
   * Callback invoked when a page is finished loading
   */
  onDocumentLoaded: function(evt)
  {
    //Only notify if the document is the main frame, not a subframe
    if(evt.getURL() == this.m_browser.getCurrentURL())
    {
        wxNode.wxLogMessage("%s", "Document loaded; url='" + evt.getURL() + "'");
    }
    this.updateState();
  },

  /**
   * On new window, we veto to stop extra windows appearing
   */
  onNewWindow: function(evt)
  {
    wxNode.wxLogMessage("%s", "New window; url='" + evt.getURL() + "'");

    //If we handle new window events then just load them in this window as we
    //are a single window browser
    if(this.m_tools_handle_new_window.isChecked())
        this.m_browser.loadURL(evt.getURL());

    this.updateState();
  },

  onTitleChanged: function(evt)
  {
    this.setTitle(evt.getString());
    wxNode.wxLogMessage("%s", "Title changed; title='" + evt.getString() + "'");
  },

  /**
   * Invoked when user selects the "View Source" menu item
   */
  onViewSourceRequest: function(evt)
  {
    var dlg = new SourceViewDialog(this, this.m_browser.getPageSource());
    dlg.showModal();
  },

  /**
   * Invoked when user selects the "Menu" item
   */
  onToolsClicked: function(evt)
  {
    if(this.m_browser.getCurrentURL() == "")
        return;

    this.m_tools_tiny.check(false);
    this.m_tools_small.check(false);
    this.m_tools_medium.check(false);
    this.m_tools_large.check(false);
    this.m_tools_largest.check(false);

    var zoom = this.m_browser.getZoom();
    switch (zoom)
    {
    case wxNode.wxWEB_VIEW_ZOOM_TINY:
        this.m_tools_tiny.check();
        break;
    case wxNode.wxWEB_VIEW_ZOOM_SMALL:
        this.m_tools_small.check();
        break;
    case wxNode.wxWEB_VIEW_ZOOM_MEDIUM:
        this.m_tools_medium.check();
        break;
    case wxNode.wxWEB_VIEW_ZOOM_LARGE:
        this.m_tools_large.check();
        break;
    case wxNode.wxWEB_VIEW_ZOOM_LARGEST:
        this.m_tools_largest.check();
        break;
    }

    this.m_edit_cut.enable(this.m_browser.canCut());
    this.m_edit_copy.enable(this.m_browser.canCopy());
    this.m_edit_paste.enable(this.m_browser.canPaste());

    this.m_edit_undo.enable(this.m_browser.canUndo());
    this.m_edit_redo.enable(this.m_browser.canRedo());

    this.m_selection_clear.enable(this.m_browser.hasSelection());
    this.m_selection_delete.enable(this.m_browser.hasSelection());

    //Firstly we clear the existing menu items, then we add the current ones
    for( it = this.m_histMenuItems.begin(); it != this.m_histMenuItems.end(); ++it )
    {
      this.m_tools_history_menu.destroy(it.first);
    }
    this.m_histMenuItems.clear();

    var back = this.m_browser.getBackwardHistory();
    var forward = this.m_browser.getForwardHistory();

    var item;

    var i;
    for(i = 0; i < back.size(); i++)
    {
      item = this.m_tools_history_menu.appendRadioItem(wxNode.wxID_ANY, back[i].getTitle());
      this.m_histMenuItems[item.getId()] = back[i];
      this.connect(item.getId(), wxNode.wxEVT_COMMAND_MENU_SELECTED,
                this.onHistory, null, this );
    }

    item = this.m_tools_history_menu.appendRadioItem(wxNode.wxID_ANY, this.m_browser.getCurrentTitle());
    item.check();

    //No need to connect the current item
    this.m_histMenuItems[item.getId()] = new wxNode.wxWebViewHistoryItem(this.m_browser.getCurrentURL(), this.m_browser.getCurrentTitle());

    for(i = 0; i < forward.size(); i++)
    {
        item = this.m_tools_history_menu.appendRadioItem(wxNode.wxID_ANY, forward[i].getTitle());
        this.m_histMenuItems[item.getId()] = forward[i];
        this.connect(item.getId(), wxNode.wxEVT_COMMAND_TOOL_CLICKED,
                this.onHistory, null, this );
    }

    var position = this.screenToClient( wxNode.wxGetMousePosition() );
    this.popupMenu(this.m_tools_menu, position.x, position.y);
  },

  /**
   * Invoked when user selects the zoom size in the menu
   */
  onSetZoom: function(evt)
  {
    if (evt.getId() == this.m_tools_tiny.getId())
    {
        this.m_browser.setZoom(wxWEB_VIEW_ZOOM_TINY);
    }
    else if (evt.getId() == this.m_tools_small.getId())
    {
        this.m_browser.setZoom(wxWEB_VIEW_ZOOM_SMALL);
    }
    else if (evt.getId() == this.m_tools_medium.getId())
    {
        this.m_browser.setZoom(wxWEB_VIEW_ZOOM_MEDIUM);
    }
    else if (evt.getId() == this.m_tools_large.getId())
    {
        this.m_browser.setZoom(wxWEB_VIEW_ZOOM_LARGE);
    }
    else if (evt.getId() == this.m_tools_largest.getId())
    {
        this.m_browser.setZoom(wxWEB_VIEW_ZOOM_LARGEST);
    }
    else
    {
        throw new Error("Unhandled zoom");
    }
  },

  onZoomLayout: function(evt)
  {
    if(this.m_tools_layout.isChecked())
        this.m_browser.setZoomType(wxNode.wxWEB_VIEW_ZOOM_TYPE_LAYOUT);
    else
        this.m_browser.setZoomType(wxNode.wxWEB_VIEW_ZOOM_TYPE_TEXT);
  },

  onHistory: function(evt)
  {
    this.m_browser.loadHistoryItem(this.m_histMenuItems[evt.getId()]);
  },

  onRunScript: function(evt)
  {
    var dialog = new wxNode.wxTextEntryDialog(this, "Enter JavaScript to run.", wxNode.wxGetTextFromUserPromptStr, "", wxNode.wxOK|wxNode.wxCANCEL|wxNode.wxCENTRE|wxNode.wxTE_MULTILINE);
    if(dialog.showModal() == wxNode.wxID_OK)
    {
      this.m_browser.runScript(dialog.getValue());
    }
  },

  onClearSelection: function(evt)
  {
    this.m_browser.clearSelection();
  },

  onDeleteSelection: function(evt)
  {
    this.m_browser.deleteSelection();
  },

  onSelectAll: function(evt)
  {
    this.m_browser.selectAll();
  },

  /**
   * Callback invoked when a loading error occurs
   */
  onError: function(evt)
  {
    var errorCategory;
    switch (evt.getInt())
    {
    case wxNode.wxWEB_NAV_ERR_CONNECTION:
        errorCategory = "wxWEB_NAV_ERR_CONNECTION";
        break;

    case wxNode.wxWEB_NAV_ERR_CERTIFICATE:
        errorCategory = "wxWEB_NAV_ERR_CERTIFICATE";
        break;

    case wxNode.wxWEB_NAV_ERR_AUTH:
        errorCategory = "wxWEB_NAV_ERR_AUTH";
        break;

    case wxNode.wxWEB_NAV_ERR_SECURITY:
        errorCategory = "wxWEB_NAV_ERR_SECURITY";
        break;

    case wxNode.wxWEB_NAV_ERR_NOT_FOUND:
        errorCategory = "wxWEB_NAV_ERR_NOT_FOUND";
        break;

    case wxNode.wxWEB_NAV_ERR_REQUEST:
        errorCategory = "wxWEB_NAV_ERR_REQUEST";
        break;

    case wxNode.wxWEB_NAV_ERR_USER_CANCELLED:
        errorCategory = "wxWEB_NAV_ERR_USER_CANCELLED";
        break;

    case wxNode.wxWEB_NAV_ERR_OTHER:
        errorCategory = "wxWEB_NAV_ERR_OTHER";
        break;
    }

    wxNode.wxLogMessage("%s", "Error; url='" + evt.getURL() + "', error='" + errorCategory + "' (" + evt.getString() + ")");

    //Show the info bar with an error
    this.m_info.showMessage(_("An error occurred loading ") + evt.getURL() + "\n" +
      "'" + errorCategory + "' (" + evt.getString() + ")", wxNode.wxICON_ERROR);

    this.updateState();
  },

  /**
   * Invoked when user selects "Print" from the menu
   */
  onPrint: function(evt)
  {
    this.m_browser.print();
  }
});

var SourceViewDialog = wxNode.wxDialog.extend({
  init: function(parent, source) {
    this._super(parent, wxNode.wxID_ANY, "Source Code",
                           wxNode.wxDefaultPosition, new wxNode.wxSize(700,500),
                           wxNode.wxDEFAULT_DIALOG_STYLE | wxNode.wxRESIZE_BORDER);

    var text = new wxNode.wxStyledTextCtrl(this, wxNode.wxID_ANY);
    text.setMarginWidth(1, 30);
    text.setMarginType(1, wxNode.wxSTC_MARGIN_NUMBER);
    text.setText(source);

    text.styleClearAll();
    text.setLexer(wxSTC_LEX_HTML);
    text.styleSetForeground(wxNode.wxSTC_H_DOUBLESTRING, new wxNode.wxColour(255,0,0));
    text.styleSetForeground(wxNode.wxSTC_H_SINGLESTRING, new wxNode.wxColour(255,0,0));
    text.styleSetForeground(wxNode.wxSTC_H_ENTITY, new wxNode.wxColour(255,0,0));
    text.styleSetForeground(wxNode.wxSTC_H_TAG, new wxNode.wxColour(0,150,0));
    text.styleSetForeground(wxNode.wxSTC_H_TAGUNKNOWN, new wxNode.wxColour(0,150,0));
    text.styleSetForeground(wxNode.wxSTC_H_ATTRIBUTE, new wxNode.wxColour(0,0,150));
    text.styleSetForeground(wxNode.wxSTC_H_ATTRIBUTEUNKNOWN, new wxNode.wxColour(0,0,150));
    text.styleSetForeground(wxNode.wxSTC_H_COMMENT, new wxNode.wxColour(150,150,150));

    var sizer = new wxNode.wxBoxSizer(wxNode.wxVERTICAL);
    sizer.Add(text, 1, wxNode.wxEXPAND);
    this.setSizer(sizer);
  }
});

setInterval(function() { console.log("timer"); }, 5000);

var app = new WebApp();
app.run();
