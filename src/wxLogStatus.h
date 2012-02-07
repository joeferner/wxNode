
#ifndef _NodeWxLogStatus_h_
#define _NodeWxLogStatus_h_

#include "wxnode.h"

class NodeWxLogStatus : public wxNodeObject {
public:
  static void Init(v8::Handle<v8::Object> target);

private:
  static v8::Handle<v8::Value> _log(const v8::Arguments& args);

  static v8::Persistent<v8::FunctionTemplate> s_ct;
};

#endif
