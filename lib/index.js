
var bindings = require('./bindings');

exports.App = bindings.App.extend({});
exports.Frame = bindings.Frame.extend({});
exports.Menu = bindings.Menu.extend({});
exports.MenuBar = bindings.MenuBar.extend({});
exports.Point = bindings.Point.extend({});
exports.Size = bindings.Size.extend({});
exports.TextCtrl = bindings.TextCtrl.extend({});
exports.Panel = bindings.Panel.extend({});
exports.ListBox = bindings.ListBox.extend({});
exports.Window = bindings.Window.extend({});
exports.Notebook = bindings.Notebook.extend({});
exports.SizerFlags = bindings.SizerFlags.extend({});
exports.BoxSizer = bindings.BoxSizer.extend({});
exports.Button = bindings.Button.extend({});
exports.Icon = bindings.Icon.extend({});
exports.Dialog = bindings.Dialog.extend({});
exports.StaticText = bindings.StaticText.extend({});
exports.Bitmap = bindings.Bitmap.extend({});
exports.ArtProvider = bindings.ArtProvider.extend({});
exports.InfoBar = bindings.InfoBar.extend({});
exports.LogWindow = bindings.LogWindow.extend({});
exports.WebView = bindings.WebView.extend({});
exports.WebViewArchiveHandler = bindings.WebViewArchiveHandler.extend({});
exports.MessageBox = bindings.MessageBox.show;
exports.LogStatus = bindings.LogStatus.log;
exports.setCursor = bindings.setCursor;
exports.logMessage = bindings.logMessage;

exports.DefaultPosition  = bindings.DefaultPosition;
exports.DefaultSize      = bindings.DefaultSize;

exports.CURSOR_ARROWWAIT = bindings.CURSOR_ARROWWAIT;
exports.NullCursor       = bindings.NullCursor;

exports.ID_ANY           = -1; // TODO: get from .h file
exports.ID_OPEN          = 5000;
exports.ID_CLOSE         = 5001;
exports.ID_NEW           = 5002;
exports.ID_SAVE          = 5003;
exports.ID_SAVEAS        = 5004;
exports.ID_REVERT        = 5005;
exports.ID_EXIT          = 5006;
exports.ID_UNDO          = 5007;
exports.ID_REDO          = 5008;
exports.ID_HELP          = 5009;
exports.ID_PRINT         = 5010;
exports.ID_PRINT_SETUP   = 5011;
exports.ID_PAGE_SETUP    = 5012;
exports.ID_PREVIEW       = 5013;
exports.ID_ABOUT         = 5014;
exports.ID_HELP_CONTENTS = 5015;
exports.ID_HELP_INDEX    = 5016;
exports.ID_HELP_SEARCH   = 5017;
exports.ID_HELP_COMMANDS = 5018;
exports.ID_HELP_PROCEDURES = 5019;
exports.ID_HELP_CONTEXT  = 5020;
exports.ID_CLOSE_ALL     = 5021;
exports.ID_PREFERENCES   = 5022;

exports.YES              = 0x00000002;
exports.OK               = 0x00000004;
exports.NO               = 0x00000008;
exports.YES_NO           = (exports.YES | exports.NO);
exports.CANCEL           = 0x00000010;
exports.APPLY            = 0x00000020;
exports.CLOSE            = 0x00000040;

exports.ICON_EXCLAMATION = 0x00000100;
exports.ICON_HAND        = 0x00000200;
exports.ICON_WARNING     = exports.ICON_EXCLAMATION;
exports.ICON_ERROR       = exports.ICON_HAND;
exports.ICON_QUESTION    = 0x00000400;
exports.ICON_INFORMATION = 0x00000800;
exports.ICON_STOP        = exports.ICON_HAND;
exports.ICON_ASTERISK    = exports.ICON_INFORMATION;

exports.EVT_COMMAND_TOOL_CLICKED         = 10012;
exports.EVT_KEY_DOWN                     = 10052;
exports.EVT_COMMAND_TEXT_ENTER           = 10180;
exports.EVT_COMMAND_WEB_VIEW_NAVIGATING  = 10218;
exports.EVT_COMMAND_WEB_VIEW_NAVIGATED   = 10219;
exports.EVT_COMMAND_WEB_VIEW_LOADED      = 10220;
exports.EVT_COMMAND_WEB_VIEW_ERROR       = 10221;
exports.EVT_COMMAND_WEB_VIEW_NEWWINDOW   = 10222;
exports.EVT_COMMAND_WEB_VIEW_TITLE_CHANGED = 10223;
exports.EVT_COMMAND_MENU_SELECTED        = 10012;

exports.HORIZONTAL       = 0x0004;
exports.VERTICAL         = 0x0008;
exports.BOTH             = exports.HORIZONTAL | exports.VERTICAL;
exports.ORIENTATION_MASK = exports.BOTH;

exports.TE_PROCESS_ENTER = 0x0400;

// lay out the toolbar horizontally
exports.TB_HORIZONTAL  = exports.HORIZONTAL;    // == 0x0004
exports.TB_TOP         = exports.TB_HORIZONTAL;

// lay out the toolbar vertically
exports.TB_VERTICAL    = exports.VERTICAL;      // == 0x0008
exports.TB_LEFT        = exports.TB_VERTICAL;

// show 3D buttons (wxToolBarSimple only)
exports.TB_3DBUTTONS   = 0x0010;

// "flat" buttons (Win32/GTK only)
exports.TB_FLAT        = 0x0020;

// dockable toolbar (GTK only)
exports.TB_DOCKABLE    = 0x0040;

// don't show the icons (they're shown by default)
exports.TB_NOICONS     = 0x0080;

// show the text (not shown by default)
exports.TB_TEXT        = 0x0100;

// don't show the divider between toolbar and the window (Win32 only)
exports.TB_NODIVIDER   = 0x0200;

// no automatic alignment (Win32 only, useless)
exports.TB_NOALIGN     = 0x0400;

// show the text and the icons alongside, not vertically stacked (Win32/GTK)
exports.TB_HORZ_LAYOUT = 0x0800;
exports.TB_HORZ_TEXT   = exports.TB_HORZ_LAYOUT | exports.TB_TEXT;

// don't show the toolbar short help tooltips
exports.TB_NO_TOOLTIPS = 0x1000;

// lay out toolbar at the bottom of the window
exports.TB_BOTTOM       = 0x2000;

// lay out toolbar at the right edge of the window
exports.TB_RIGHT        = 0x4000;

exports.K_TAB           = 9;

exports.BITMAP_TYPE_ICO = 3;

exports.ART_GO_BACK    = 'wxART_GO_BACK';
exports.ART_GO_FORWARD = 'wxART_GO_FORWARD';
exports.ART_TOOLBAR    = 'wxART_TOOLBAR_C';

exports.NavigationKeyEvent = {
  isBackward: 0x0000,
  isForward: 0x0001,
  winChange: 0x0002,
  fromTab: 0x0004
};

//enum wxWebViewZoomType
//Scales entire page, including images
exports.WEB_VIEW_ZOOM_TYPE_LAYOUT = 0;
exports.WEB_VIEW_ZOOM_TYPE_TEXT   = 1;
