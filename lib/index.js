
var bindings = require('./bindings');

exports.wxOK               = 0x00000004;
exports.wxICON_INFORMATION = 0x00000800;

exports.wxApp = bindings.wxApp.extend({});

exports.wxFrame = bindings.wxFrame.extend({});

exports.wxMenu = bindings.wxMenu.extend({});
exports.wxMenuBar = bindings.wxMenuBar.extend({});
exports.wxPoint = require("./point");
exports.wxSize = require("./size");

exports.wxMessageBox = bindings.wxMessageBox.show;
