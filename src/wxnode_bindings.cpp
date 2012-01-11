
#include <v8.h>
#include <node.h>
#include "app.h"
#include "frame.h"

extern "C" {
  static void init(v8::Handle<v8::Object> target) {
    NodeWxApp::Init(target);
    NodeWxFrame::Init(target);
  }

  NODE_MODULE(wxnode_bindings, init);
}

v8::Handle<v8::Value> EmptyFunc(const v8::Arguments& args) {
  return args.This();
}

IMPLEMENT_WX_THEME_SUPPORT
wxApp& wxGetApp() { return *static_cast<wxApp*>(wxApp::GetInstance()); }