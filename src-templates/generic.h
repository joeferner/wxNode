
#ifndef _wxNode_{{name}}_h_
#define _wxNode_{{name}}_h_

#include "wxnode.h"

class wxNode_{{name}} : public {{name}}, public wxNodeObject {
public:
  static void Init(v8::Handle<v8::Object> target);

private:
  static v8::Handle<v8::Value> _init(const v8::Arguments& args);

  {{#methods}}static v8::Handle<v8::Value> _{{name}}(const v8::Arguments& args);
  {{/methods}}

  static v8::Persistent<v8::FunctionTemplate> s_ct;
};

#endif
