
#include "app.h"

/* static */ v8::Persistent<v8::FunctionTemplate> NodeWxApp::s_ct;

/*static*/ void NodeWxApp::Init(v8::Handle<v8::Object> target) {
  v8::HandleScope scope;

  v8::Local<v8::FunctionTemplate> t = v8::FunctionTemplate::New(New);
  s_ct = v8::Persistent<v8::FunctionTemplate>::New(t);
  s_ct->InstanceTemplate()->SetInternalFieldCount(1);
  s_ct->SetClassName(v8::String::NewSymbol("wxApp"));

  NODE_SET_PROTOTYPE_METHOD(s_ct, "run", run);

  target->Set(v8::String::NewSymbol("wxApp"), s_ct->GetFunction());
}

/*static*/ v8::Handle<v8::Value> NodeWxApp::New(const v8::Arguments& args) {
  v8::HandleScope scope;

  NodeWxApp *self = new NodeWxApp();

  self->Wrap(args.This());
  return args.This();
}

/*static*/ v8::Handle<v8::Value> NodeWxApp::run(const v8::Arguments& args) {
  v8::HandleScope scope;

  return v8::Undefined();
}