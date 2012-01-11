
#include "frame.h"

/* static */ v8::Persistent<v8::FunctionTemplate> NodeWxFrame::s_ct;

/*static*/ void NodeWxFrame::Init(v8::Handle<v8::Object> target) {
  v8::HandleScope scope;

  v8::Local<v8::FunctionTemplate> t = v8::FunctionTemplate::New(EmptyFunc);
  s_ct = v8::Persistent<v8::FunctionTemplate>::New(t);
  s_ct->InstanceTemplate()->SetInternalFieldCount(1);
  s_ct->SetClassName(v8::String::NewSymbol("wxFrame"));

  NODE_SET_PROTOTYPE_METHOD(s_ct, "init", init);

  target->Set(v8::String::NewSymbol("wxFrame"), s_ct->GetFunction());
}

/*static*/ v8::Handle<v8::Value> NodeWxFrame::init(const v8::Arguments& args) {
  v8::HandleScope scope;
  
  NodeWxFrame *self = new NodeWxFrame();
  wrap(args, self);
  
  return args.This();
}
