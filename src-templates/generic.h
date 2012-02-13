
#ifndef _wxNode_{{name}}_h_
#define _wxNode_{{name}}_h_

#include "wxnode.h"
#include "wxNode_wxEvtHandler.h"
{{#classes}}class {{{.}}};
{{/classes}}

class wxNode_{{name}} : public {{name}}, public wxNodeObject, public NodeExEvtHandlerImpl {
public:
  static void Init(v8::Handle<v8::Object> target);
  static void AddMethods(v8::Handle<v8::FunctionTemplate> target);
  virtual v8::Handle<v8::Object> self() { return m_self; }
  static bool AssignableFrom(const v8::Handle<v8::String>& className);
  static bool AssignableFrom(const char* className);
  static v8::Handle<v8::Value> New(const {{name}}* obj);
  static v8::Handle<v8::Value> New(const wxNode_{{name}}* obj);
  static v8::Handle<v8::Value> NewCopy(const {{name}}& obj);

  {{#constructors}}
  {{#overloads}}
  wxNode_{{parent.parent.name}}({{{argDeclCode}}});
  {{/overloads}}
  {{/constructors}}

private:
  static v8::Handle<v8::Value> _init(const v8::Arguments& args);

  {{#methods}}static v8::Handle<v8::Value> _{{name}}(const v8::Arguments& args);
  {{/methods}}
  {{#fields}}static v8::Handle<v8::Value> _{{name}}Get(v8::Local<v8::String> name, const v8::AccessorInfo& info);
  static void _{{name}}Set(v8::Local<v8::String> name, v8::Local<v8::Value> val, const v8::AccessorInfo& info);
  {{/fields}}

  static v8::Persistent<v8::FunctionTemplate> s_ct;
};

#endif
