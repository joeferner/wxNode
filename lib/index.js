
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
exports.wxStaticText = bindings.wxStaticText.extend({});
exports.wxMessageBox = bindings.wxMessageBox.show;

exports.wxDefaultPosition  = new exports.wxPoint();
exports.wxDefaultSize      = new exports.wxSize();

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

exports.wxOK               = 0x00000004; // TODO: get from .h file
exports.wxICON_INFORMATION = 0x00000800; // TODO: get from .h file

exports.wxHORIZONTAL       = 0x0004;
exports.wxVERTICAL         = 0x0004;
exports.wxBOTH             = exports.wxHORIZONTAL | exports.wxVERTICAL;
exports.wxORIENTATION_MASK = exports.wxBOTH;
