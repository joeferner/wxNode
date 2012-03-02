
#include "app.h"
#include "wxNode_wxFrame.h"
#include <wx/evtloop.h>
#include <wx/apptrait.h>

/* static */ v8::Persistent<v8::FunctionTemplate> NodeWxApp::s_ct;

/*static*/ void NodeWxApp::Init(v8::Handle<v8::Object> target) {
  v8::HandleScope scope;

  v8::Local<v8::FunctionTemplate> t = v8::FunctionTemplate::New(wxNodeObject::NewFunc);
  s_ct = v8::Persistent<v8::FunctionTemplate>::New(t);
  s_ct->InstanceTemplate()->SetInternalFieldCount(2);
  s_ct->SetClassName(v8::String::NewSymbol("App"));

  wxNodeObject::AddMethods(s_ct);
  NODE_SET_PROTOTYPE_METHOD(s_ct, "init", _init);
  NODE_SET_PROTOTYPE_METHOD(s_ct, "onInit", _onInit);
  NODE_SET_PROTOTYPE_METHOD(s_ct, "run", _run);
  NODE_SET_PROTOTYPE_METHOD(s_ct, "setTopWindow", _setTopWindow);

  target->Set(v8::String::NewSymbol("App"), s_ct->GetFunction());

  if(!wxInitialize()) {
    printf("failed to wxInitialize\n"); // TODO: change to exception
  }
  wxInitAllImageHandlers();
  wxEventLoop* loop = new wxEventLoop();
  wxEventLoop::SetActive(loop);
}

/*static*/ v8::Handle<v8::Value> NodeWxApp::_init(const v8::Arguments& args) {
  v8::HandleScope scope;
  NodeWxApp *self = new NodeWxApp();
  self->wrap(args.This(), self, NULL);
  return args.This();
}


bool NodeWxApp::OnInit() {
  v8::Handle<v8::Value> result = call("onInit", 0, new v8::Local<v8::Value>[0]);
  if(result.IsEmpty()) return false;
  return result->ToBoolean()->Value();
}

/*static*/ v8::Handle<v8::Value> NodeWxApp::_loop(const v8::Arguments& args) {
  wxEventLoopBase* evtLoop = wxEventLoop::GetActive();
  if(evtLoop) {
    while(evtLoop->DispatchTimeout(1) != -1) {
    }
  }

  return v8::Undefined();
}

/*static*/ v8::Handle<v8::Value> NodeWxApp::_run(const v8::Arguments& args) {
  v8::HandleScope scope;

  wxTheApp->CallOnInit();

  // setInterval the message loop
  v8::Local<v8::FunctionTemplate> loopFnTemplate = v8::FunctionTemplate::New(_loop);

  v8::Function* setIntervalMethod = v8::Function::Cast(*v8::Context::GetCurrent()->Global()->Get(v8::String::New("setInterval")));
  v8::Local<v8::Value> setIntervalArgs[2];
  setIntervalArgs[0] = loopFnTemplate->GetFunction();
  setIntervalArgs[1] = v8::Integer::New(1);
  setIntervalMethod->Call(args.This(), 2, setIntervalArgs);

  return v8::Undefined();
}

/*static*/ v8::Handle<v8::Value> NodeWxApp::_onInit(const v8::Arguments& args) {
  return v8::Undefined();
}

/*static*/ v8::Handle<v8::Value> NodeWxApp::_setTopWindow(const v8::Arguments& args) {
  NodeWxApp *self = unwrap<NodeWxApp>(args.This());
  v8::Local<v8::Object> windowObj = args[0]->ToObject();
  wxFrame* wnd = wxNodeObject::unwrap<wxFrame>(windowObj);
  self->SetTopWindow(wnd);
  return v8::Undefined();
}
