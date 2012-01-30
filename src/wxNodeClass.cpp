
#include "wxNodeClass.h"

/* static */ v8::Persistent<v8::FunctionTemplate> wxNodeClass::s_ct;

/*static*/ void wxNodeClass::Init(v8::Handle<v8::Object> target) {
  v8::HandleScope scope;

  v8::Local<v8::FunctionTemplate> t = v8::FunctionTemplate::New();
  s_ct = v8::Persistent<v8::FunctionTemplate>::New(t);
  s_ct->InstanceTemplate()->SetInternalFieldCount(2);
  s_ct->SetClassName(v8::String::NewSymbol("wxNodeClass"));

  target->Set(v8::String::NewSymbol("wxNodeClass"), s_ct->GetFunction());
}

/*static*/ v8::Local<v8::Object> wxNodeClass::New(wxNodeObject *obj) {
  v8::HandleScope scope;
  v8::Local<v8::Function> ctor = s_ct->GetFunction();
  v8::Local<v8::Object> newObj = ctor->NewInstance();
  wxNodeClass* c = new wxNodeClass();
  c->m_self = v8::Persistent<v8::Object>::New(newObj);
  c->m_self->SetPointerInInternalField(0, obj);
  c->m_self->SetPointerInInternalField(1, c);

  return scope.Close(newObj);
}
