
#include "menuBar.h"
#include "menu.h"

/* static */ v8::Persistent<v8::FunctionTemplate> NodeWxMenuBar::s_ct;

/*static*/ void NodeWxMenuBar::Init(v8::Handle<v8::Object> target) {
  v8::HandleScope scope;

  v8::Local<v8::FunctionTemplate> t = v8::FunctionTemplate::New(wxNodeObject::NewFunc);
  s_ct = v8::Persistent<v8::FunctionTemplate>::New(t);
  s_ct->InstanceTemplate()->SetInternalFieldCount(1);
  s_ct->SetClassName(v8::String::NewSymbol("wxMenuBar"));

  NODE_SET_PROTOTYPE_METHOD(s_ct, "init", _init);
  NODE_SET_PROTOTYPE_METHOD(s_ct, "append", _append);
  wxNodeObject::Init(s_ct);

  target->Set(v8::String::NewSymbol("wxMenuBar"), s_ct->GetFunction());
}

/*static*/ v8::Handle<v8::Value> NodeWxMenuBar::_init(const v8::Arguments& args) {
  v8::HandleScope scope;
  NodeWxMenuBar *self = new NodeWxMenuBar();
  self->wrap(args.This(), self);
  return args.This();
}

/*static*/ v8::Handle<v8::Value> NodeWxMenuBar::_append(const v8::Arguments& args) {
  NodeWxMenuBar *self = unwrap<NodeWxMenuBar>(args.This());

  v8::Local<v8::Object> menuObj = args[0]->ToObject();
  wxMenu* menu = wxNodeObject::unwrap<wxMenu>(menuObj);

  v8::Local<v8::String> nameObj = args[1]->ToString();
  v8::String::AsciiValue name(nameObj);

  self->Append(menu, *name);

  return v8::Undefined();
}
