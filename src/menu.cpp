
#include "menu.h"

/* static */ v8::Persistent<v8::FunctionTemplate> NodeWxMenu::s_ct;

/*static*/ void NodeWxMenu::Init(v8::Handle<v8::Object> target) {
  v8::HandleScope scope;

  v8::Local<v8::FunctionTemplate> t = v8::FunctionTemplate::New(wxNodeObject::NewFunc);
  s_ct = v8::Persistent<v8::FunctionTemplate>::New(t);
  s_ct->InstanceTemplate()->SetInternalFieldCount(2);
  s_ct->SetClassName(v8::String::NewSymbol("wxMenu"));

  NODE_SET_PROTOTYPE_METHOD(s_ct, "init", _init);
  NODE_SET_PROTOTYPE_METHOD(s_ct, "append", _append);
  NODE_SET_PROTOTYPE_METHOD(s_ct, "appendSeparator", _appendSeparator);
  wxNodeObject::Init(s_ct);

  target->Set(v8::String::NewSymbol("wxMenu"), s_ct->GetFunction());
}

/*static*/ v8::Handle<v8::Value> NodeWxMenu::_init(const v8::Arguments& args) {
  v8::HandleScope scope;
  NodeWxMenu *self = new NodeWxMenu();
  self->wrap(args.This(), self, NULL);
  return args.This();
}

/*static*/ v8::Handle<v8::Value> NodeWxMenu::_append(const v8::Arguments& args) {
  NodeWxMenu *self = unwrap<NodeWxMenu>(args.This());

  v8::Local<v8::Int32> idObj = args[0]->ToInt32();
  int32_t id = idObj->Value();

  v8::Local<v8::String> nameObj = args[1]->ToString();
  v8::String::AsciiValue name(nameObj);

  self->Append(id, *name);

  return v8::Undefined();
}

/*static*/ v8::Handle<v8::Value> NodeWxMenu::_appendSeparator(const v8::Arguments& args) {
  NodeWxMenu *self = unwrap<NodeWxMenu>(args.This());

  self->AppendSeparator();

  return v8::Undefined();
}
