#!/usr/bin/env node

var wx = require("../");
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

var WebApp = wx.App.extend({
  onInit: function() {
    this._super();

    var frame = new WebFrame();
    frame.show();

    return true;
  }
});

var WebFrame = wx.Frame.extend({
  init: function() {
    this._super(null, wx.ID_ANY, "wxWebView Sample");
    
    //Required from virtual file system archive support
    // TODO wx.FileSystem.addHandler(new wx.ArchiveFSHandler());

    // set the frame icon
    this.setIcon(new wx.Icon("./examples/sample.ico", wx.BITMAP_TYPE_ICO));
    this.setTitle("wxWebView Sample");

    var topsizer = new wx.BoxSizer(wx.VERTICAL);

    // Create the toolbar
    this.m_toolbar = this.createToolBar(wx.TB_TEXT);
    this.m_toolbar.setToolBitmapSize(new wx.Size(32, 32));

    var back = wx.ArtProvider.getBitmap(wx.ART_GO_BACK, wx.ART_TOOLBAR);
    var forward = wx.ArtProvider.getBitmap(wx.ART_GO_FORWARD, wx.ART_TOOLBAR);
    var stop = new wx.Bitmap("./examples/stop.xpm");
    var refresh = new wx.Bitmap("./examples/refresh.xpm");

    this.m_toolbar_back = this.m_toolbar.addTool(wx.ID_ANY, "Back", back);
    this.m_toolbar_forward = this.m_toolbar.addTool(wx.ID_ANY, "Forward", forward);
    this.m_toolbar_stop = this.m_toolbar.addTool(wx.ID_ANY, "Stop", stop);
    this.m_toolbar_reload = this.m_toolbar.addTool(wx.ID_ANY, "Reload", refresh);
    this.m_url = new wx.TextCtrl(this.m_toolbar, wx.ID_ANY, "", wx.DefaultPosition, new wx.Size(400, -1), wx.TE_PROCESS_ENTER );
    this.m_toolbar.addControl(this.m_url, "URL");
    this.m_toolbar_tools = this.m_toolbar.addTool(wx.ID_ANY, "Menu", new wx.Bitmap("./examples/wxlogo.xpm"));

    this.m_toolbar.realize();

    // Create the info panel
    this.m_info = new wx.InfoBar(this);
    topsizer.add(this.m_info, new wx.SizerFlags().expand());

    // Create the webview
    this.m_browser = wx.WebView.new(this, wx.ID_ANY, "http://www.wxwidgets.org");
    topsizer.add(this.m_browser, new wx.SizerFlags().expand().proportion(1));

    //We register the wxfs:// protocol for testing purposes
    this.m_browser.registerHandler(new wx.WebViewArchiveHandler("wxfs"));

    this.setSizer(topsizer);

    //Set a more sensible size for web browsing
    this.setSize(new wx.Size(800, 600));

    // Create a log window
    new wx.LogWindow(this, "Logging");

    // Create the Tools menu
    this.m_tools_menu = new wx.Menu();
    var print = this.m_tools_menu.append(wx.ID_ANY , "Print");
    var viewSource = this.m_tools_menu.append(wx.ID_ANY , "View Source");
    this.m_tools_menu.appendSeparator();
    this.m_tools_layout = this.m_tools_menu.appendCheckItem(wx.ID_ANY, "Use Layout Zoom");
    this.m_tools_tiny = this.m_tools_menu.appendCheckItem(wx.ID_ANY, "Tiny");
    this.m_tools_small = this.m_tools_menu.appendCheckItem(wx.ID_ANY, "Small");
    this.m_tools_medium = this.m_tools_menu.appendCheckItem(wx.ID_ANY, "Medium");
    this.m_tools_large = this.m_tools_menu.appendCheckItem(wx.ID_ANY, "Large");
    this.m_tools_largest = this.m_tools_menu.appendCheckItem(wx.ID_ANY, "Largest");
    this.m_tools_menu.appendSeparator();
    this.m_tools_handle_navigation = this.m_tools_menu.appendCheckItem(wx.ID_ANY, "Handle Navigation");
    this.m_tools_handle_new_window = this.m_tools_menu.appendCheckItem(wx.ID_ANY, "Handle New Windows");
    this.m_tools_menu.appendSeparator();

    //History menu
    this.m_tools_history_menu = new wx.Menu();
    var clearhist = this.m_tools_history_menu.append(wx.ID_ANY, "Clear History");
    this.m_tools_enable_history = this.m_tools_history_menu.appendCheckItem(wx.ID_ANY, "Enable History");
    this.m_tools_history_menu.appendSeparator();

    this.m_tools_menu.appendSubMenu(this.m_tools_history_menu, "History");

    //Create an editing menu
    var editmenu = new wx.Menu();
    this.m_edit_cut = editmenu.append(wx.ID_ANY, "Cut");
    this.m_edit_copy = editmenu.append(wx.ID_ANY, "Copy");
    this.m_edit_paste = editmenu.append(wx.ID_ANY, "Paste");
    editmenu.appendSeparator();
    this.m_edit_undo = editmenu.append(wx.ID_ANY, "Undo");
    this.m_edit_redo = editmenu.append(wx.ID_ANY, "Redo");
    editmenu.appendSeparator();
    this.m_edit_mode = editmenu.appendCheckItem(wx.ID_ANY, "Edit Mode");

    this.m_tools_menu.appendSeparator();
    this.m_tools_menu.appendSubMenu(editmenu, "Edit");

    var script = this.m_tools_menu.append(wx.ID_ANY, "Run Script");

    //Selection menu
    var selection = new wx.Menu();
    this.m_selection_clear = selection.append(wx.ID_ANY, "Clear Selection");
    this.m_selection_delete = selection.append(wx.ID_ANY, "Delete Selection");
    var selectall = selection.append(wx.ID_ANY, "Select All");

    editmenu.appendSubMenu(selection, "Selection");

    var loadscheme = this.m_tools_menu.append(wx.ID_ANY, "Custom Scheme Example");

    //By default we want to handle navigation and new windows
    this.m_tools_handle_navigation.check();
    this.m_tools_handle_new_window.check();
    this.m_tools_enable_history.check();
    if(!this.m_browser.canSetZoomType(wx.WEB_VIEW_ZOOM_TYPE_LAYOUT))
      this.m_tools_layout.enable(false);


    // Connect the toolbar events
    this.connect(this.m_toolbar_back.getId(), wx.EVT_COMMAND_TOOL_CLICKED,
            this.onBack, null, this );
    this.connect(this.m_toolbar_forward.getId(), wx.EVT_COMMAND_TOOL_CLICKED,
            this.onForward, null, this );
    this.connect(this.m_toolbar_stop.getId(), wx.EVT_COMMAND_TOOL_CLICKED,
            this.onStop, null, this );
    this.connect(this.m_toolbar_reload.getId(), wx.EVT_COMMAND_TOOL_CLICKED,
            this.onReload, null, this );
    this.connect(this.m_toolbar_tools.getId(), wx.EVT_COMMAND_TOOL_CLICKED,
            this.onToolsClicked, null, this );

    this.connect(this.m_url.getId(), wx.EVT_COMMAND_TEXT_ENTER,
            this.onUrl, null, this );

    // Connect the webview events
    this.connect(this.m_browser.getId(), wx.EVT_COMMAND_WEB_VIEW_NAVIGATING,
            this.onNavigationRequest, null, this);
    this.connect(this.m_browser.getId(), wx.EVT_COMMAND_WEB_VIEW_NAVIGATED,
            this.onNavigationComplete, null, this);
    this.connect(this.m_browser.getId(), wx.EVT_COMMAND_WEB_VIEW_LOADED,
            this.onDocumentLoaded, null, this);
    this.connect(this.m_browser.getId(), wx.EVT_COMMAND_WEB_VIEW_ERROR,
            this.onError, null, this);
    this.connect(this.m_browser.getId(), wx.EVT_COMMAND_WEB_VIEW_NEWWINDOW,
            this.onNewWindow, null, this);
    this.connect(this.m_browser.getId(), wx.EVT_COMMAND_WEB_VIEW_TITLE_CHANGED,
            this.onTitleChanged, null, this);

    // Connect the menu events
    this.connect(viewSource.getId(), wx.EVT_COMMAND_MENU_SELECTED,
           this.onViewSourceRequest,  null, this );
    this.connect(print.getId(), wx.EVT_COMMAND_MENU_SELECTED,
            this.onPrint,  null, this );
    this.connect(this.m_tools_layout.getId(), wx.EVT_COMMAND_MENU_SELECTED,
            this.onZoomLayout,  null, this );
    this.connect(this.m_tools_tiny.getId(), wx.EVT_COMMAND_MENU_SELECTED,
            this.onSetZoom,  null, this );
    this.connect(this.m_tools_small.getId(), wx.EVT_COMMAND_MENU_SELECTED,
            this.onSetZoom,  null, this );
    this.connect(this.m_tools_medium.getId(), wx.EVT_COMMAND_MENU_SELECTED,
            this.onSetZoom,  null, this );
    this.connect(this.m_tools_large.getId(), wx.EVT_COMMAND_MENU_SELECTED,
            this.onSetZoom,  null, this );
    this.connect(this.m_tools_largest.getId(), wx.EVT_COMMAND_MENU_SELECTED,
            this.onSetZoom,  null, this );
    this.connect(clearhist.getId(), wx.EVT_COMMAND_MENU_SELECTED,
            this.onClearHistory,  null, this );
    this.connect(this.m_tools_enable_history.getId(), wx.EVT_COMMAND_MENU_SELECTED,
            this.onEnableHistory,  null, this );
    this.connect(this.m_edit_cut.getId(), wx.EVT_COMMAND_MENU_SELECTED,
            this.onCut,  null, this );
    this.connect(this.m_edit_copy.getId(), wx.EVT_COMMAND_MENU_SELECTED,
            this.onCopy,  null, this );
    this.connect(this.m_edit_paste.getId(), wx.EVT_COMMAND_MENU_SELECTED,
            this.onPaste,  null, this );
    this.connect(this.m_edit_undo.getId(), wx.EVT_COMMAND_MENU_SELECTED,
            this.onUndo,  null, this );
    this.connect(this.m_edit_redo.getId(), wx.EVT_COMMAND_MENU_SELECTED,
            this.onRedo,  null, this );
    this.connect(this.m_edit_mode.getId(), wx.EVT_COMMAND_MENU_SELECTED,
            this.onMode,  null, this );
    this.connect(script.getId(), wx.EVT_COMMAND_MENU_SELECTED,
            this.onRunScript,  null, this );
    this.connect(this.m_selection_clear.getId(), wx.EVT_COMMAND_MENU_SELECTED,
            this.onClearSelection,  null, this );
    this.connect(this.m_selection_delete.getId(), wx.EVT_COMMAND_MENU_SELECTED,
            this.onDeleteSelection,  null, this );
    this.connect(selectall.getId(), wx.EVT_COMMAND_MENU_SELECTED,
            this.onSelectAll,  null, this );
    this.connect(loadscheme.getId(), wx.EVT_COMMAND_MENU_SELECTED,
            this.onLoadScheme,  null, this );

    //Connect the idle events
    this.EVT_IDLE(this.onIdle);
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
        wx.setCursor(wx.CURSOR_ARROWWAIT);
        this.m_toolbar.enableTool(this.m_toolbar_stop.getId(), true);
    }
    else
    {
        wx.setCursor(wx.NullCursor);
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
    var helpfile = new wx.FileName("../help/doc.zip");
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

    wx.LogMessage("%s", "Navigation request to '" + evt.getURL() + "' (target='" +
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
    wx.LogMessage("%s", "Navigation complete; url='" + evt.getURL() + "'");
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
        wx.LogMessage("%s", "Document loaded; url='" + evt.getURL() + "'");
    }
    this.updateState();
  },

  /**
   * On new window, we veto to stop extra windows appearing
   */
  onNewWindow: function(evt)
  {
    wx.LogMessage("%s", "New window; url='" + evt.getURL() + "'");

    //If we handle new window events then just load them in this window as we
    //are a single window browser
    if(this.m_tools_handle_new_window.isChecked())
        this.m_browser.loadURL(evt.getURL());

    this.updateState();
  },

  onTitleChanged: function(evt)
  {
    this.setTitle(evt.getString());
    wx.LogMessage("%s", "Title changed; title='" + evt.getString() + "'");
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
    case wx.WEB_VIEW_ZOOM_TINY:
        this.m_tools_tiny.check();
        break;
    case wx.WEB_VIEW_ZOOM_SMALL:
        this.m_tools_small.check();
        break;
    case wx.WEB_VIEW_ZOOM_MEDIUM:
        this.m_tools_medium.check();
        break;
    case wx.WEB_VIEW_ZOOM_LARGE:
        this.m_tools_large.check();
        break;
    case wx.WEB_VIEW_ZOOM_LARGEST:
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
      item = this.m_tools_history_menu.appendRadioItem(wx.ID_ANY, back[i].getTitle());
      this.m_histMenuItems[item.getId()] = back[i];
      this.connect(item.getId(), wx.EVT_COMMAND_MENU_SELECTED,
                this.onHistory, null, this );
    }

    item = this.m_tools_history_menu.appendRadioItem(wx.ID_ANY, this.m_browser.getCurrentTitle());
    item.check();

    //No need to connect the current item
    this.m_histMenuItems[item.getId()] = new wx.WebViewHistoryItem(this.m_browser.getCurrentURL(), this.m_browser.getCurrentTitle());

    for(i = 0; i < forward.size(); i++)
    {
        item = this.m_tools_history_menu.appendRadioItem(wx.ID_ANY, forward[i].getTitle());
        this.m_histMenuItems[item.getId()] = forward[i];
        this.connect(item.getId(), wx.EVT_COMMAND_TOOL_CLICKED,
                this.onHistory, null, this );
    }

    var position = this.screenToClient( wx.GetMousePosition() );
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
        this.m_browser.setZoomType(wx.WEB_VIEW_ZOOM_TYPE_LAYOUT);
    else
        this.m_browser.setZoomType(wx.WEB_VIEW_ZOOM_TYPE_TEXT);
  },

  onHistory: function(evt)
  {
    this.m_browser.loadHistoryItem(this.m_histMenuItems[evt.getId()]);
  },

  onRunScript: function(evt)
  {
    var dialog = new wx.TextEntryDialog(this, "Enter JavaScript to run.", wx.GetTextFromUserPromptStr, "", wx.OK|wx.CANCEL|wx.CENTRE|wx.TE_MULTILINE);
    if(dialog.showModal() == wx.ID_OK)
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
    case wx.WEB_NAV_ERR_CONNECTION:
        errorCategory = "wxWEB_NAV_ERR_CONNECTION";
        break;

    case wx.WEB_NAV_ERR_CERTIFICATE:
        errorCategory = "wxWEB_NAV_ERR_CERTIFICATE";
        break;

    case wx.WEB_NAV_ERR_AUTH:
        errorCategory = "wxWEB_NAV_ERR_AUTH";
        break;

    case wx.WEB_NAV_ERR_SECURITY:
        errorCategory = "wxWEB_NAV_ERR_SECURITY";
        break;

    case wx.WEB_NAV_ERR_NOT_FOUND:
        errorCategory = "wxWEB_NAV_ERR_NOT_FOUND";
        break;

    case wx.WEB_NAV_ERR_REQUEST:
        errorCategory = "wxWEB_NAV_ERR_REQUEST";
        break;

    case wx.WEB_NAV_ERR_USER_CANCELLED:
        errorCategory = "wxWEB_NAV_ERR_USER_CANCELLED";
        break;

    case wx.WEB_NAV_ERR_OTHER:
        errorCategory = "wxWEB_NAV_ERR_OTHER";
        break;
    }

    wx.LogMessage("%s", "Error; url='" + evt.getURL() + "', error='" + errorCategory + "' (" + evt.getString() + ")");

    //Show the info bar with an error
    this.m_info.showMessage(_("An error occurred loading ") + evt.getURL() + "\n" +
      "'" + errorCategory + "' (" + evt.getString() + ")", wx.ICON_ERROR);

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

var SourceViewDialog = wx.Dialog.extend({
  init: function(parent, source) {
    this._super(parent, wx.ID_ANY, "Source Code",
                           wx.DefaultPosition, new wx.Size(700,500),
                           wx.DEFAULT_DIALOG_STYLE | wx.RESIZE_BORDER);

    var text = new wx.StyledTextCtrl(this, wx.ID_ANY);
    text.setMarginWidth(1, 30);
    text.setMarginType(1, wx.STC_MARGIN_NUMBER);
    text.setText(source);

    text.styleClearAll();
    text.setLexer(wxSTC_LEX_HTML);
    text.styleSetForeground(wx.STC_H_DOUBLESTRING, new wx.Colour(255,0,0));
    text.styleSetForeground(wx.STC_H_SINGLESTRING, new wx.Colour(255,0,0));
    text.styleSetForeground(wx.STC_H_ENTITY, new wx.Colour(255,0,0));
    text.styleSetForeground(wx.STC_H_TAG, new wx.Colour(0,150,0));
    text.styleSetForeground(wx.STC_H_TAGUNKNOWN, new wx.Colour(0,150,0));
    text.styleSetForeground(wx.STC_H_ATTRIBUTE, new wx.Colour(0,0,150));
    text.styleSetForeground(wx.STC_H_ATTRIBUTEUNKNOWN, new wx.Colour(0,0,150));
    text.styleSetForeground(wx.STC_H_COMMENT, new wx.Colour(150,150,150));

    var sizer = new wx.BoxSizer(wx.VERTICAL);
    sizer.Add(text, 1, wx.EXPAND);
    this.setSizer(sizer);
  }
});

setInterval(function() { console.log("timer"); }, 5000);

var app = new WebApp();
app.run();
