
#ifndef _wxnodeclass_h_
#define _wxnodeclass_h_

#include "wxnode.h"
#include "wxNodeObject.h"

class wxNodeClass : public wxNodeObject {
public:
  static void Init(v8::Handle<v8::Object> target);
  static v8::Local<v8::Object> New(wxNodeObject *obj);

private:
  static v8::Persistent<v8::FunctionTemplate> s_ct;

  v8::Persistent<v8::Object> m_self;
};

#endif
