
#include "frame.h"
#include "menuBar.h"
#include "app.h"
#include "evtHandler.h"

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
  s_ct->InstanceTemplate()->SetInternalFieldCount(2);
  s_ct->SetClassName(v8::String::NewSymbol("wxFrame"));

  NODE_SET_PROTOTYPE_METHOD(s_ct, "init", _init);
  NODE_SET_PROTOTYPE_METHOD(s_ct, "show", _show);
  NODE_SET_PROTOTYPE_METHOD(s_ct, "setMenuBar", _setMenuBar);
  NODE_SET_PROTOTYPE_METHOD(s_ct, "close", _close);
  NODE_SET_PROTOTYPE_METHOD(s_ct, "createStatusBar", _createStatusBar);
  NODE_SET_PROTOTYPE_METHOD(s_ct, "setStatusText", _setStatusText);
  NodeWxEvtHandler::InitMethods(s_ct);
  wxNodeObject::Init(s_ct);

  target->Set(v8::String::NewSymbol("wxFrame"), s_ct->GetFunction());
}


/*static*/ v8::Handle<v8::Value> NodeWxFrame::_init(const v8::Arguments& args) {
  v8::HandleScope scope;
  NodeWxFrame *self = new NodeWxFrame(NULL, -1, _("Hello World"), wxPoint(50, 50), wxSize(450, 340)); // TODO fill in args
  NodeExEvtHandlerImpl* evtHandler = dynamic_cast<NodeExEvtHandlerImpl*>(self);
  self->wrap(args.This(), self, evtHandler);
  return args.This();
}

/*static*/ v8::Handle<v8::Value> NodeWxFrame::_show(const v8::Arguments& args) {
  NodeWxFrame *self = unwrap<NodeWxFrame>(args.This());
  // TODO read args
  self->wxFrame::Show(true);
  return args.This();
}

/*static*/ v8::Handle<v8::Value> NodeWxFrame::_setMenuBar(const v8::Arguments& args) {
  NodeWxFrame *self = unwrap<NodeWxFrame>(args.This());

  v8::Local<v8::Object> menuBarObj = args[0]->ToObject();
  wxMenuBar* menuBar = wxNodeObject::unwrap<wxMenuBar>(menuBarObj);

  self->SetMenuBar(menuBar);
  return v8::Undefined();
}

/*static*/ v8::Handle<v8::Value> NodeWxFrame::_close(const v8::Arguments& args) {
  NodeWxFrame *self = unwrap<NodeWxFrame>(args.This());

  // TODO: read args
  self->Close(true);

  return v8::Undefined();
}

/*static*/ v8::Handle<v8::Value> NodeWxFrame::_createStatusBar(const v8::Arguments& args) {
  NodeWxFrame *self = unwrap<NodeWxFrame>(args.This());

  // TODO: read args
  self->CreateStatusBar(true);

  return v8::Undefined();
}

/*static*/ v8::Handle<v8::Value> NodeWxFrame::_setStatusText(const v8::Arguments& args) {
  NodeWxFrame *self = unwrap<NodeWxFrame>(args.This());

  // TODO: read args
  v8::Local<v8::String> textObj = args[0]->ToString();
  v8::String::AsciiValue text(textObj);

  self->SetStatusText(*text);

  return v8::Undefined();
}

bool NodeWxFrame::Destroy() {
	return wxFrame::Destroy();
}
