
#include "frame.h"
#include "menuBar.h"
#include "app.h"

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
  NODE_SET_PROTOTYPE_METHOD(s_ct, "setMenuBar", _setMenuBar);
  NODE_SET_PROTOTYPE_METHOD(s_ct, "close", _close);
  NODE_SET_PROTOTYPE_METHOD(s_ct, "createStatusBar", _createStatusBar);
  NODE_SET_PROTOTYPE_METHOD(s_ct, "setStatusText", _setStatusText);
  NODE_SET_PROTOTYPE_METHOD(s_ct, "EVT_MENU", _EVT_MENU);
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

struct EventProxyData : public wxObject {
  NodeWxFrame* m_self;
  int32_t m_iListener;
};

class wxEvtProxy : public wxEvtHandler
{
public:
	void forwardEvent(wxEvent& event)
	{
		EventProxyData* data = (EventProxyData*)event.m_callbackUserData;
    data->m_self->fireEvent(data->m_iListener, event);
	}
};

void NodeWxFrame::fireEvent(int iListener, wxEvent& event) {
  ListenerData* listenerData = m_listeners[iListener];
  v8::Function* fn = v8::Function::Cast(*listenerData->m_fn);

  // TODO: fill in event args
  v8::TryCatch tryCatch;
  v8::Handle<v8::Value> argv[0];
  fn->Call(this->self(), 0, argv);
  if(tryCatch.HasCaught()) {
    v8::String::AsciiValue ex(tryCatch.Exception());
    printf("fireEvent: %s\n", *ex);
  }
}

void NodeWxFrame::connect(int id, int lastId, int eventType, int iListener) {
  EventProxyData* data = new EventProxyData();
  data->m_self = this;
  data->m_iListener = iListener;

  Connect(id, lastId, eventType, (wxObjectEventFunction)&wxEvtProxy::forwardEvent, data);
}

void NodeWxFrame::addCommandRangeListener(int id, int lastId, int eventType, v8::Local<v8::Object> fn) {
  // TODO: memory cleanup
  m_listeners.push_back(new ListenerData(eventType, fn));
  connect(id, lastId, eventType, m_listeners.size() - 1);
}

void NodeWxFrame::addCommandListener(int id, int eventType, v8::Local<v8::Object> fn) {
  addCommandRangeListener(id, -1, eventType, fn);
}

/*static*/ v8::Handle<v8::Value> NodeWxFrame::_EVT_MENU(const v8::Arguments& args) {
  NodeWxFrame *self = unwrap<NodeWxFrame>(args.This());

  v8::Local<v8::Int32> idObj = args[0]->ToInt32();
  int32_t id = idObj->Value();

  if(!args[1]->IsFunction()) {
    printf("Invalid Arg\n"); // TODO: throw exception
  }
  v8::Local<v8::Object> fnObj = args[1]->ToObject();

  self->addCommandListener(id, wxEVT_COMMAND_MENU_SELECTED, fnObj);

  return v8::Undefined();
}

/*
   NodeWxFrame *self = unwrap<NodeWxFrame>(args.This());

  v8::Local<v8::Int32> idObj = args[0]->ToInt32();
  int32_t id = idObj->Value();

  v8::Local<v8::Int32> lastIdObj = args[1]->ToInt32();
  int32_t lastId = lastIdObj->Value();

  v8::Local<v8::Int32> eventTypeObj = args[2]->ToInt32();
  int32_t eventType = eventTypeObj->Value();

  v8::Local<v8::Int32> iListenerObj = args[3]->ToInt32();
  int32_t iListener = iListenerObj->Value();



  return v8::Undefined();
 */