
#include "messageBox.h"

/* static */ v8::Persistent<v8::FunctionTemplate> NodeWxMessageBox::s_ct;

/*static*/ void NodeWxMessageBox::Init(v8::Handle<v8::Object> target) {
  v8::HandleScope scope;

  v8::Local<v8::FunctionTemplate> t = v8::FunctionTemplate::New(wxNodeObject::NewFunc);
  s_ct = v8::Persistent<v8::FunctionTemplate>::New(t);
  s_ct->InstanceTemplate()->SetInternalFieldCount(2);
  s_ct->SetClassName(v8::String::NewSymbol("wxMessageBox"));

  wxNodeObject::AddMethods(s_ct);
  NODE_SET_METHOD(s_ct, "show", _show);

  target->Set(v8::String::NewSymbol("wxMessageBox"), s_ct->GetFunction());
}

/*static*/ v8::Handle<v8::Value> NodeWxMessageBox::_show(const v8::Arguments& args) {

  v8::Local<v8::String> messageObj = args[0]->ToString();
  v8::String::AsciiValue message(messageObj);

  v8::Local<v8::String> captionObj = args[1]->ToString();
  v8::String::AsciiValue caption(captionObj);

  v8::Local<v8::Int32> styleObj = args[2]->ToInt32();
  int32_t style = styleObj->Value();

  v8::Local<v8::Object> parentObj = args[3]->ToObject();
  wxWindow* parent = wxNodeObject::unwrap<wxWindow>(parentObj);

  int32_t x = -1;
  if(args.Length() > 4) {
    v8::Local<v8::Int32> xObj = args[4]->ToInt32();
    x = xObj->Value();
  }

  int32_t y = -1;
  if(args.Length() > 5) {
    v8::Local<v8::Int32> yObj = args[5]->ToInt32();
    y = yObj->Value();
  }

  wxMessageBox(*message, *caption, style, parent, x, y);

  return v8::Undefined();
}
