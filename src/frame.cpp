
#include "frame.h"

/* static */ v8::Persistent<v8::FunctionTemplate> NodeWxFrame::s_ct;

NodeWxFrame::NodeWxFrame(wxWindow *parent,
  wxWindowID id,
  const wxString& title,
  const wxPoint& pos /*= wxDefaultPosition*/,
  const wxSize& size /*= wxDefaultSize*/,
  long style /*= wxDEFAULT_FRAME_STYLE*/,
  const wxString& name /*= wxFrameNameStr*/) : wxFrame(parent, id, title, pos, size, style, name) {

}

/*static*/ void NodeWxFrame::Init(v8::Handle<v8::Object> target) {
  v8::HandleScope scope;

  v8::Local<v8::FunctionTemplate> t = v8::FunctionTemplate::New(wxNodeObject::NewFunc);
  s_ct = v8::Persistent<v8::FunctionTemplate>::New(t);
  s_ct->InstanceTemplate()->SetInternalFieldCount(1);
  s_ct->SetClassName(v8::String::NewSymbol("wxFrame"));

  NODE_SET_PROTOTYPE_METHOD(s_ct, "init", _init);
  NODE_SET_PROTOTYPE_METHOD(s_ct, "show", _show);
  wxNodeObject::Init(s_ct);

  target->Set(v8::String::NewSymbol("wxFrame"), s_ct->GetFunction());
}


/*static*/ v8::Handle<v8::Value> NodeWxFrame::_init(const v8::Arguments& args) {
  v8::HandleScope scope;
  NodeWxFrame *self = new NodeWxFrame(NULL, -1, _("Hello World"), wxPoint(50, 50), wxSize(450, 340)); // TODO fill in args
  self->wrap(args.This(), self);
  return args.This();
}

/*static*/ v8::Handle<v8::Value> NodeWxFrame::_show(const v8::Arguments& args) {
  NodeWxFrame *self = unwrap<NodeWxFrame>(args.This());
  // TODO read args
  self->wxFrame::Show(true);
  return args.This();
}
