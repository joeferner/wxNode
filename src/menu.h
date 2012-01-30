
#ifndef _wxmenu_app_h_
#define _wxmenu_app_h_

#include "wxnode.h"

class NodeWxMenu : public wxMenu, public wxNodeObject {
public:
  static void Init(v8::Handle<v8::Object> target);

private:
  static v8::Handle<v8::Value> _init(const v8::Arguments& args);
  static v8::Handle<v8::Value> _append(const v8::Arguments& args);
  static v8::Handle<v8::Value> _appendSeparator(const v8::Arguments& args);

  static v8::Persistent<v8::FunctionTemplate> s_ct;
};

#endif
