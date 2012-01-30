
#ifndef _wxnode_class_h_
#define _wxnode_class_h_

#include "wxnode.h"

class wxNodeClass {
public:
  static void Init(v8::Handle<v8::Object> target);

private:
  static v8::Persistent<v8::FunctionTemplate> s_ct;

  static v8::Handle<v8::Value> New(const v8::Arguments& args);
  static v8::Handle<v8::Value> extend(const v8::Arguments& args);
};

#endif
