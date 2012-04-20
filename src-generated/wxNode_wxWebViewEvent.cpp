
#include <sstream>
#include "wxNode_wxWebViewEvent.h"
#include "wxNode_wxEvtHandler.h"
#include "wxNode_wxNotifyEvent.h"
#include "wxNode_wxEvent.h"


/* static */ v8::Persistent<v8::FunctionTemplate> wxNode_wxWebViewEvent::s_ct;



/*
 * id: _47418
 */
wxNode_wxWebViewEvent::wxNode_wxWebViewEvent(wxWebViewEvent& arg0)
  : wxWebViewEvent(arg0)
{

}

/*
 * id: _47419
 */
wxNode_wxWebViewEvent::wxNode_wxWebViewEvent()
  : wxWebViewEvent()
{

}

/*
 * id: _47420
 */
wxNode_wxWebViewEvent::wxNode_wxWebViewEvent(int type, int id, const wxString url, const wxString target)
  : wxWebViewEvent(type, id, url, target)
{

}




/*static*/ void wxNode_wxWebViewEvent::Init(v8::Handle<v8::Object> target) {
  v8::HandleScope scope;

  v8::Local<v8::FunctionTemplate> t = v8::FunctionTemplate::New(wxNodeObject::NewFunc);
  s_ct = v8::Persistent<v8::FunctionTemplate>::New(t);
  s_ct->InstanceTemplate()->SetInternalFieldCount(2);
  s_ct->SetClassName(v8::String::NewSymbol("WebViewEvent"));

  NODE_SET_PROTOTYPE_METHOD(s_ct, "init", _init);
  AddMethods(s_ct);

  target->Set(v8::String::NewSymbol("WebViewEvent"), s_ct->GetFunction());
}

/*static*/ void wxNode_wxWebViewEvent::AddMethods(v8::Handle<v8::FunctionTemplate> target) {
  wxNode_wxNotifyEvent::AddMethods(target);
  NODE_SET_PROTOTYPE_METHOD(target, "getURL", _GetURL);
  NODE_SET_PROTOTYPE_METHOD(target, "getTarget", _GetTarget);
  NODE_SET_PROTOTYPE_METHOD(target, "clone", _Clone);
  
  
}

/*static*/ v8::Handle<v8::Value> wxNode_wxWebViewEvent::New(const wxNode_wxWebViewEvent* obj) {
  v8::HandleScope scope;

  if(obj == NULL) {
    return scope.Close(v8::Null());
  }
  
  v8::Local<v8::FunctionTemplate> returnObjFt = v8::FunctionTemplate::New(wxNodeObject::NewFunc);
  returnObjFt->InstanceTemplate()->SetInternalFieldCount(2);
  returnObjFt->SetClassName(v8::String::NewSymbol("WebViewEvent"));
  wxNode_wxWebViewEvent::AddMethods(returnObjFt);

  v8::Local<v8::Function> returnObjFn = returnObjFt->GetFunction();

  v8::Local<v8::Object> returnObj = returnObjFn->CallAsConstructor(0, new v8::Local<v8::Value>[0])->ToObject();
  returnObj->SetPointerInInternalField(0, (void*)obj);
  NodeExEvtHandlerImpl* evtHandler = dynamic_cast<NodeExEvtHandlerImpl*>((wxNode_wxWebViewEvent*)obj);
  returnObj->SetPointerInInternalField(1, evtHandler);

  return scope.Close(returnObj);
}

/*static*/ v8::Handle<v8::Value> wxNode_wxWebViewEvent::New(const wxWebViewEvent* obj) {
  v8::HandleScope scope;

  if(obj == NULL) {
    return scope.Close(v8::Null());
  }
  
  v8::Local<v8::FunctionTemplate> returnObjFt = v8::FunctionTemplate::New(wxNodeObject::NewFunc);
  returnObjFt->InstanceTemplate()->SetInternalFieldCount(2);
  returnObjFt->SetClassName(v8::String::NewSymbol("WebViewEvent"));
  wxNode_wxWebViewEvent::AddMethods(returnObjFt);

  v8::Local<v8::Function> returnObjFn = returnObjFt->GetFunction();
  v8::Local<v8::Object> returnObj = returnObjFn->CallAsConstructor(0, new v8::Local<v8::Value>[0])->ToObject();
  returnObj->SetPointerInInternalField(0, (void*)obj);
  NodeExEvtHandlerImplWrap* wrap = new NodeExEvtHandlerImplWrap(returnObj);
  NodeExEvtHandlerImpl* evtHandler = dynamic_cast<NodeExEvtHandlerImpl*>(wrap);
  returnObj->SetPointerInInternalField(1, evtHandler);

  return scope.Close(returnObj);
}

/*static*/ v8::Handle<v8::Value> wxNode_wxWebViewEvent::NewCopy(const wxWebViewEvent& obj) {
  v8::HandleScope scope;
  wxNode_wxWebViewEvent* returnVal = new wxNode_wxWebViewEvent();
  memcpy(dynamic_cast<wxWebViewEvent*>(returnVal), &obj, sizeof(wxWebViewEvent));
  return scope.Close(New(returnVal));

}

/*static*/ bool wxNode_wxWebViewEvent::AssignableFrom(const v8::Handle<v8::String>& className) {
  v8::String::AsciiValue classNameStr(className);
  return AssignableFrom(*classNameStr);
}

/*static*/ bool wxNode_wxWebViewEvent::AssignableFrom(const char* className) {
  if(!strcmp("WebViewEvent", className)) { return true; }
  

  return false;
}

/*static*/ v8::Handle<v8::Value> wxNode_wxWebViewEvent::_init(const v8::Arguments& args) {
  v8::HandleScope scope;

  
  
  /*
   * id: _47418
   */
  if(args.Length() == 1 && (args[0]->IsNull() || (args[0]->IsObject() && wxNode_wxWebViewEvent::AssignableFrom(args[0]->ToObject()->GetConstructorName())))) {
    wxNode_wxWebViewEvent* arg0 = args[0]->IsNull() ? NULL : wxNodeObject::unwrap<wxNode_wxWebViewEvent>(args[0]->ToObject()); /* type: _66883  */
    

    wxNode_wxWebViewEvent *self = new wxNode_wxWebViewEvent(*arg0);
    NodeExEvtHandlerImpl* evtHandler = dynamic_cast<NodeExEvtHandlerImpl*>(self);
    self->wrap(args.This(), self, evtHandler);
    return args.This();
  }
  
  /*
   * id: _47419
   */
  if(args.Length() == 0) {
    

    wxNode_wxWebViewEvent *self = new wxNode_wxWebViewEvent();
    NodeExEvtHandlerImpl* evtHandler = dynamic_cast<NodeExEvtHandlerImpl*>(self);
    self->wrap(args.This(), self, evtHandler);
    return args.This();
  }
  
  /*
   * id: _47420
   */
  if(args.Length() == 4 && args[0]->IsNumber() && args[1]->IsNumber() && args[2]->IsString() && args[3]->IsString()) {
    int type = (int)args[0]->ToInt32()->Value(); /* type: _986  */
    int id = (int)args[1]->ToInt32()->Value(); /* type: _165  */
    v8::String::AsciiValue url(args[2]->ToString()); /* type: _1214c  */
    v8::String::AsciiValue target(args[3]->ToString()); /* type: _1214c  */
    

    wxNode_wxWebViewEvent *self = new wxNode_wxWebViewEvent(type, id, *url, *target);
    NodeExEvtHandlerImpl* evtHandler = dynamic_cast<NodeExEvtHandlerImpl*>(self);
    self->wrap(args.This(), self, evtHandler);
    return args.This();
  }
  
  

  std::ostringstream errStr;
  errStr << "Could not find matching constructor for arguments (class name: wxWebViewEvent).\n";
  errStr << "  arg count: " << args.Length() << "\n";
  for(int i = 0; i < args.Length(); i++) {
    v8::String::AsciiValue argStr(args[i]);
    errStr << "  arg[" << i << "]: " << *argStr << "\n";
  }
  return v8::ThrowException(v8::Exception::TypeError(v8::String::New(errStr.str().c_str())));
}


/*static*/ v8::Handle<v8::Value> wxNode_wxWebViewEvent::_GetURL(const v8::Arguments& args) {
  v8::HandleScope scope;
  wxNode_wxWebViewEvent* self = unwrap<wxNode_wxWebViewEvent>(args.This());

  
  /*
   * id: _47421
   */
  if(args.Length() == 0) {
    

    wxString returnVal = self->GetURL();

    return scope.Close(v8::String::New(returnVal.mb_str()));
  }
  

  std::ostringstream errStr;
  errStr << "Could not find matching method for arguments (method name: wxWebViewEvent::GetURL).\n";
  errStr << "  arg count: " << args.Length() << "\n";
  for(int i = 0; i < args.Length(); i++) {
    v8::String::AsciiValue argStr(args[i]);
    errStr << "  arg[" << i << "]: " << *argStr << "\n";
  }
  return v8::ThrowException(v8::Exception::TypeError(v8::String::New(errStr.str().c_str())));
}

/*static*/ v8::Handle<v8::Value> wxNode_wxWebViewEvent::_GetTarget(const v8::Arguments& args) {
  v8::HandleScope scope;
  wxNode_wxWebViewEvent* self = unwrap<wxNode_wxWebViewEvent>(args.This());

  
  /*
   * id: _47422
   */
  if(args.Length() == 0) {
    

    wxString returnVal = self->GetTarget();

    return scope.Close(v8::String::New(returnVal.mb_str()));
  }
  

  std::ostringstream errStr;
  errStr << "Could not find matching method for arguments (method name: wxWebViewEvent::GetTarget).\n";
  errStr << "  arg count: " << args.Length() << "\n";
  for(int i = 0; i < args.Length(); i++) {
    v8::String::AsciiValue argStr(args[i]);
    errStr << "  arg[" << i << "]: " << *argStr << "\n";
  }
  return v8::ThrowException(v8::Exception::TypeError(v8::String::New(errStr.str().c_str())));
}

/*static*/ v8::Handle<v8::Value> wxNode_wxWebViewEvent::_Clone(const v8::Arguments& args) {
  v8::HandleScope scope;
  wxNode_wxWebViewEvent* self = unwrap<wxNode_wxWebViewEvent>(args.This());

  
  /*
   * id: _47423
   */
  if(args.Length() == 0) {
    

    wxEvent* returnVal = self->Clone();

    return scope.Close(wxNode_wxEvent::New(returnVal));
  }
  

  std::ostringstream errStr;
  errStr << "Could not find matching method for arguments (method name: wxWebViewEvent::Clone).\n";
  errStr << "  arg count: " << args.Length() << "\n";
  for(int i = 0; i < args.Length(); i++) {
    v8::String::AsciiValue argStr(args[i]);
    errStr << "  arg[" << i << "]: " << *argStr << "\n";
  }
  return v8::ThrowException(v8::Exception::TypeError(v8::String::New(errStr.str().c_str())));
}



