#!/usr/bin/env node

var path = require('path');
var childProcess = require('child_process');
var Builder = require('mnm');
var builder = new Builder();
var RenderTemplates = require('./render-templates.js');

builder.appendIncludeDir('src/');
builder.appendIncludeDir('src-dummy/');

var wxConfigAdditionalCxxParams = [];
var wxConfigAdditionalLibsParams = [];

function build (wxCxxFlags, wxLibs) {
  builder.appendUnique('CXXFLAGS', wxCxxFlags);
  builder.appendUnique('LINKFLAGS', wxLibs);

  builder.target = "wxnode_bindings";
  builder.appendSourceDir('./src');
  builder.appendIncludeDir('src/');
  builder.appendSourceDir('./src-generated');
  builder.appendIncludeDir('src-generated/');

  builder.run();
}

var renderTemplates = true;
for (var i = 0; i < process.argv.length; i++) {
  if (process.argv[i] == '--skip-render-templates') {
    renderTemplates = false;
  }
}

// get the wx command line flags
var wxConfigPath = 'wx-config';
if (process.platform === 'win32') {
  var wxHome = process.env['WXWIN'];
  if (!wxHome) {
    builder.fail("Could not find wxWidgets home. Set the WXWIN environment variable.");
  }
  if (!path.existsSync(wxHome)) {
    builder.fail("Could not find wxWidgets home. WXWIN is pointing to an invalid directory. " + wxHome);
  }
  wxConfigPath = './deps/wx-config.exe';

  builder.appendUnique('CXXFLAGS', '-DUNICODE');
  builder.appendUnique('LINKFLAGS', 'wxmsw29u_webview.lib');

  wxConfigAdditionalLibsParams.push('webview,xrc,qa,html,adv,core,xml,net,base');
}

runCommandLine(wxConfigPath, ['--cxxflags'].concat(wxConfigAdditionalCxxParams), function (err, wxCxxFlags) {
  if (err) {
    builder.fail(err);
    return;
  }
  runCommandLine(wxConfigPath, ['--libs'].concat(wxConfigAdditionalLibsParams), function (err, wxLibs) {
    if (err) {
      builder.fail(err);
      return;
    }
    if (renderTemplates) {
      RenderTemplates.renderTemplates(function (err) {
        if (err) {
          builder.fail(err);
          return;
        }
        build(wxCxxFlags, wxLibs);
      });
    } else {
      build(wxCxxFlags, wxLibs);
    }
  });
});

String.prototype.trim = function () {
  return this.replace(/^\s+|\s+$/g, "");
};

function runCommandLine (cmd, args, callback) {
  var results = "";
  var child = childProcess.spawn(cmd, args);
  child.stdout.on('data', function (data) {
    results += data;
  });
  child.stderr.on('data', function (data) {
    results += data;
  });
  child.on('exit', function (code) {
    if (code != 0) {
      callback(new Error(results));
      return;
    }
    callback(code, results.trim().split(' ').filter(function (item) { return item.length > 0; }));
  });
}
