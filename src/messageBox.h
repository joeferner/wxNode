
#ifndef _wxmessagebox_h_
#define _wxmessagebox_h_

#include "wxnode.h"

class NodeWxMessageBox : public wxNodeObject {
public:
  static void Init(v8::Handle<v8::Object> target);

private:
  static v8::Handle<v8::Value> _show(const v8::Arguments& args);

  static v8::Persistent<v8::FunctionTemplate> s_ct;
};

#endif
