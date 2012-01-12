
#include <v8.h>
#include <node.h>
#include "app.h"

extern "C" {
  static void init(v8::Handle<v8::Object> target) {
    NodeWxApp::Init(target);
  }

  NODE_MODULE(wxnode_bindings, init);
}
