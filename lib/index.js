
var bindings = require('./bindings');

exports.wxApp = bindings.wxApp.extend({});
exports.wxFrame = bindings.wxFrame.extend({});
exports.wxMenu = bindings.wxMenu.extend({});
exports.wxMenuBar = bindings.wxMenuBar.extend({});
exports.wxPoint = bindings.wxPoint.extend({});
exports.wxSize = bindings.wxSize.extend({});
exports.wxTextCtrl = bindings.wxTextCtrl.extend({});
exports.wxPanel = bindings.wxPanel.extend({});
exports.wxListBox = bindings.wxListBox.extend({});
exports.wxWindow = bindings.wxWindow.extend({});
exports.wxNotebook = bindings.wxNotebook.extend({});
exports.wxSizerFlags = bindings.wxSizerFlags.extend({});
exports.wxBoxSizer = bindings.wxBoxSizer.extend({});
exports.wxButton = bindings.wxButton.extend({});
exports.wxIcon = bindings.wxIcon.extend({});
exports.wxDialog = bindings.wxDialog.extend({});
exports.wxStaticText = bindings.wxStaticText.extend({});
exports.wxMessageBox = bindings.wxMessageBox.show;
exports.wxLogStatus = bindings.wxLogStatus.log;

exports.wxDefaultPosition  = bindings.wxDefaultPosition;
exports.wxDefaultSize      = bindings.wxDefaultSize;

exports.wxID_ANY           = -1; // TODO: get from .h file
exports.wxID_OPEN          = 5000;
exports.wxID_CLOSE         = 5001;
exports.wxID_NEW           = 5002;
exports.wxID_SAVE          = 5003;
exports.wxID_SAVEAS        = 5004;
exports.wxID_REVERT        = 5005;
exports.wxID_EXIT          = 5006;
exports.wxID_UNDO          = 5007;
exports.wxID_REDO          = 5008;
exports.wxID_HELP          = 5009;
exports.wxID_PRINT         = 5010;
exports.wxID_PRINT_SETUP   = 5011;
exports.wxID_PAGE_SETUP    = 5012;
exports.wxID_PREVIEW       = 5013;
exports.wxID_ABOUT         = 5014;
exports.wxID_HELP_CONTENTS = 5015;
exports.wxID_HELP_INDEX    = 5016;
exports.wxID_HELP_SEARCH   = 5017;
exports.wxID_HELP_COMMANDS = 5018;
exports.wxID_HELP_PROCEDURES = 5019;
exports.wxID_HELP_CONTEXT  = 5020;
exports.wxID_CLOSE_ALL     = 5021;
exports.wxID_PREFERENCES   = 5022;

exports.wxYES              = 0x00000002;
exports.wxOK               = 0x00000004;
exports.wxNO               = 0x00000008;
exports.wxYES_NO           = (exports.wxYES | exports.wxNO);
exports.wxCANCEL           = 0x00000010;
exports.wxAPPLY            = 0x00000020;
exports.wxCLOSE            = 0x00000040;

exports.wxICON_EXCLAMATION = 0x00000100;
exports.wxICON_HAND        = 0x00000200;
exports.wxICON_WARNING     = exports.wxICON_EXCLAMATION;
exports.wxICON_ERROR       = exports.wxICON_HAND;
exports.wxICON_QUESTION    = 0x00000400;
exports.wxICON_INFORMATION = 0x00000800;
exports.wxICON_STOP        = exports.wxICON_HAND;
exports.wxICON_ASTERISK    = exports.wxICON_INFORMATION;

exports.wxEVT_KEY_DOWN     = 10052;

exports.wxHORIZONTAL       = 0x0004;
exports.wxVERTICAL         = 0x0008;
exports.wxBOTH             = exports.wxHORIZONTAL | exports.wxVERTICAL;
exports.wxORIENTATION_MASK = exports.wxBOTH;

// lay out the toolbar horizontally
exports.wxTB_HORIZONTAL  = exports.wxHORIZONTAL;    // == 0x0004
exports.wxTB_TOP         = exports.wxTB_HORIZONTAL;

// lay out the toolbar vertically
exports.wxTB_VERTICAL    = exports.wxVERTICAL;      // == 0x0008
exports.wxTB_LEFT        = exports.wxTB_VERTICAL;

// show 3D buttons (wxToolBarSimple only)
exports.wxTB_3DBUTTONS   = 0x0010;

// "flat" buttons (Win32/GTK only)
exports.wxTB_FLAT        = 0x0020;

// dockable toolbar (GTK only)
exports.wxTB_DOCKABLE    = 0x0040;

// don't show the icons (they're shown by default)
exports.wxTB_NOICONS     = 0x0080;

// show the text (not shown by default)
exports.wxTB_TEXT        = 0x0100;

// don't show the divider between toolbar and the window (Win32 only)
exports.wxTB_NODIVIDER   = 0x0200;

// no automatic alignment (Win32 only, useless)
exports.wxTB_NOALIGN     = 0x0400;

// show the text and the icons alongside, not vertically stacked (Win32/GTK)
exports.wxTB_HORZ_LAYOUT = 0x0800;
exports.wxTB_HORZ_TEXT   = exports.wxTB_HORZ_LAYOUT | exports.wxTB_TEXT;

// don't show the toolbar short help tooltips
exports.wxTB_NO_TOOLTIPS = 0x1000;

// lay out toolbar at the bottom of the window
exports.wxTB_BOTTOM       = 0x2000;

// lay out toolbar at the right edge of the window
exports.wxTB_RIGHT        = 0x4000;

exports.WXK_TAB            = 9;

exports.wxBITMAP_TYPE_ICO   = 3;

exports.wxNavigationKeyEvent = {
  isBackward: 0x0000,
  isForward: 0x0001,
  winChange: 0x0002,
  fromTab: 0x0004
};
