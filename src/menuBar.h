
#ifndef _wxmenubar_app_h_
#define _wxmenubar_app_h_

#include "wxnode.h"

class NodeWxMenuBar : public wxMenuBar, public wxNodeObject {
public:
  static void Init(v8::Handle<v8::Object> target);

private:
  static v8::Handle<v8::Value> _init(const v8::Arguments& args);
  static v8::Handle<v8::Value> _append(const v8::Arguments& args);

  static v8::Persistent<v8::FunctionTemplate> s_ct;
};

#endif
