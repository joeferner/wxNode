
#include "wxLogStatus.h"

/* static */ v8::Persistent<v8::FunctionTemplate> NodeWxLogStatus::s_ct;

/*static*/ void NodeWxLogStatus::Init(v8::Handle<v8::Object> target) {
  v8::HandleScope scope;

  v8::Local<v8::FunctionTemplate> t = v8::FunctionTemplate::New(wxNodeObject::NewFunc);
  s_ct = v8::Persistent<v8::FunctionTemplate>::New(t);
  s_ct->InstanceTemplate()->SetInternalFieldCount(2);
  s_ct->SetClassName(v8::String::NewSymbol("wxLogStatus"));

  wxNodeObject::AddMethods(s_ct);
  NODE_SET_METHOD(s_ct, "log", _log);

  target->Set(v8::String::NewSymbol("wxLogStatus"), s_ct->GetFunction());
}

/*static*/ v8::Handle<v8::Value> NodeWxLogStatus::_log(const v8::Arguments& args) {

  v8::Local<v8::Object> parentObj = args[0]->ToObject();
  wxWindow* parent = wxNodeObject::unwrap<wxWindow>(parentObj);

  v8::Local<v8::String> messageObj = args[1]->ToString();
  v8::String::AsciiValue message(messageObj);

  wxLogStatus(parent, *message);

  return v8::Undefined();
}
