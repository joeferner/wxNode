
#include <sstream>
#include "wxNode_wxNotifyEvent.h"
#include "wxNode_wxEvtHandler.h"
#include "wxNode_wxCommandEvent.h"
#include "wxNode_wxEvent.h"
#include "wxNode_wxClassInfo.h"
#include "wxNode_wxObject.h"


/* static */ v8::Persistent<v8::FunctionTemplate> wxNode_wxNotifyEvent::s_ct;



wxNode_wxNotifyEvent::wxNode_wxNotifyEvent(int commandType, int winid)
  : wxNotifyEvent(commandType, winid)
{

}

wxNode_wxNotifyEvent::wxNode_wxNotifyEvent(int commandType)
  : wxNotifyEvent(commandType)
{

}

wxNode_wxNotifyEvent::wxNode_wxNotifyEvent()
  : wxNotifyEvent()
{

}

wxNode_wxNotifyEvent::wxNode_wxNotifyEvent(wxNotifyEvent& event)
  : wxNotifyEvent(event)
{

}




/*static*/ void wxNode_wxNotifyEvent::Init(v8::Handle<v8::Object> target) {
  v8::HandleScope scope;

  v8::Local<v8::FunctionTemplate> t = v8::FunctionTemplate::New(wxNodeObject::NewFunc);
  s_ct = v8::Persistent<v8::FunctionTemplate>::New(t);
  s_ct->InstanceTemplate()->SetInternalFieldCount(2);
  s_ct->SetClassName(v8::String::NewSymbol("NotifyEvent"));

  NODE_SET_PROTOTYPE_METHOD(s_ct, "init", _init);
  AddMethods(s_ct);

  target->Set(v8::String::NewSymbol("NotifyEvent"), s_ct->GetFunction());
}

/*static*/ void wxNode_wxNotifyEvent::AddMethods(v8::Handle<v8::FunctionTemplate> target) {
  wxNode_wxCommandEvent::AddMethods(target);
  NODE_SET_PROTOTYPE_METHOD(target, "veto", _Veto);
  NODE_SET_PROTOTYPE_METHOD(target, "allow", _Allow);
  NODE_SET_PROTOTYPE_METHOD(target, "isAllowed", _IsAllowed);
  NODE_SET_PROTOTYPE_METHOD(target, "clone", _Clone);
  NODE_SET_PROTOTYPE_METHOD(target, "getClassInfo", _GetClassInfo);
  NODE_SET_METHOD(target, "wxCreateObject", _wxCreateObject);
  
}

/*static*/ v8::Handle<v8::Value> wxNode_wxNotifyEvent::New(const wxNode_wxNotifyEvent* obj) {
  v8::HandleScope scope;

  if(obj == NULL) {
    return scope.Close(v8::Null());
  }
  
  v8::Local<v8::FunctionTemplate> returnObjFt = v8::FunctionTemplate::New(wxNodeObject::NewFunc);
  returnObjFt->InstanceTemplate()->SetInternalFieldCount(2);
  returnObjFt->SetClassName(v8::String::NewSymbol("NotifyEvent"));
  wxNode_wxNotifyEvent::AddMethods(returnObjFt);

  v8::Local<v8::Function> returnObjFn = returnObjFt->GetFunction();
  v8::Handle<v8::Value> returnObjArgs[0];
  v8::Local<v8::Object> returnObj = returnObjFn->CallAsConstructor(0, returnObjArgs)->ToObject();
  returnObj->SetPointerInInternalField(0, (void*)obj);
  NodeExEvtHandlerImpl* evtHandler = dynamic_cast<NodeExEvtHandlerImpl*>((wxNode_wxNotifyEvent*)obj);
  returnObj->SetPointerInInternalField(1, evtHandler);

  return scope.Close(returnObj);
}

/*static*/ v8::Handle<v8::Value> wxNode_wxNotifyEvent::New(const wxNotifyEvent* obj) {
  v8::HandleScope scope;

  if(obj == NULL) {
    return scope.Close(v8::Null());
  }
  
  v8::Local<v8::FunctionTemplate> returnObjFt = v8::FunctionTemplate::New(wxNodeObject::NewFunc);
  returnObjFt->InstanceTemplate()->SetInternalFieldCount(2);
  returnObjFt->SetClassName(v8::String::NewSymbol("NotifyEvent"));
  wxNode_wxNotifyEvent::AddMethods(returnObjFt);

  v8::Local<v8::Function> returnObjFn = returnObjFt->GetFunction();
  v8::Handle<v8::Value> returnObjArgs[0];
  v8::Local<v8::Object> returnObj = returnObjFn->CallAsConstructor(0, returnObjArgs)->ToObject();
  returnObj->SetPointerInInternalField(0, (void*)obj);
  NodeExEvtHandlerImplWrap* wrap = new NodeExEvtHandlerImplWrap(returnObj);
  NodeExEvtHandlerImpl* evtHandler = dynamic_cast<NodeExEvtHandlerImpl*>(wrap);
  returnObj->SetPointerInInternalField(1, evtHandler);

  return scope.Close(returnObj);
}

/*static*/ v8::Handle<v8::Value> wxNode_wxNotifyEvent::NewCopy(const wxNotifyEvent& obj) {
  v8::HandleScope scope;
  wxNode_wxNotifyEvent* returnVal = new wxNode_wxNotifyEvent();
  memcpy(dynamic_cast<wxNotifyEvent*>(returnVal), &obj, sizeof(wxNotifyEvent));
  return scope.Close(New(returnVal));

}

/*static*/ bool wxNode_wxNotifyEvent::AssignableFrom(const v8::Handle<v8::String>& className) {
  v8::String::AsciiValue classNameStr(className);
  return AssignableFrom(*classNameStr);
}

/*static*/ bool wxNode_wxNotifyEvent::AssignableFrom(const char* className) {
  if(!strcmp("NotifyEvent", className)) { return true; }
  
  if(!strcmp("BookCtrlEvent", className)) { return true; }

  if(!strcmp("AuiNotebookEvent", className)) { return true; }
  if(!strcmp("SplitterEvent", className)) { return true; }
  if(!strcmp("WizardEvent", className)) { return true; }
  if(!strcmp("HeaderCtrlEvent", className)) { return true; }
  if(!strcmp("TreeEvent", className)) { return true; }
  if(!strcmp("GridEvent", className)) { return true; }
  if(!strcmp("SpinEvent", className)) { return true; }
  if(!strcmp("TreeListEvent", className)) { return true; }
  if(!strcmp("RichTextEvent", className)) { return true; }
  if(!strcmp("DataViewEvent", className)) { return true; }
  if(!strcmp("GridSizeEvent", className)) { return true; }
  if(!strcmp("WebViewEvent", className)) { return true; }
  if(!strcmp("AuiToolBarEvent", className)) { return true; }
  if(!strcmp("ListEvent", className)) { return true; }
  if(!strcmp("GridRangeSelectEvent", className)) { return true; }
  if(!strcmp("SpinDoubleEvent", className)) { return true; }


  return false;
}

/*static*/ v8::Handle<v8::Value> wxNode_wxNotifyEvent::_init(const v8::Arguments& args) {
  v8::HandleScope scope;

  
  
  /*
   * id: _27675
   */
  if(args.Length() == 2 && args[0]->IsNumber() && args[1]->IsNumber()) {
    int commandType = (int)args[0]->ToInt32()->Value(); /* type: _986  */
    int winid = (int)args[1]->ToInt32()->Value(); /* type: _165  */
    

    wxNode_wxNotifyEvent *self = new wxNode_wxNotifyEvent(commandType, winid);
    NodeExEvtHandlerImpl* evtHandler = dynamic_cast<NodeExEvtHandlerImpl*>(self);
    self->wrap(args.This(), self, evtHandler);
    return args.This();
  }
  
  /*
   * id: _27675
   */
  if(args.Length() == 1 && args[0]->IsNumber()) {
    int commandType = (int)args[0]->ToInt32()->Value(); /* type: _986  */
    

    wxNode_wxNotifyEvent *self = new wxNode_wxNotifyEvent(commandType);
    NodeExEvtHandlerImpl* evtHandler = dynamic_cast<NodeExEvtHandlerImpl*>(self);
    self->wrap(args.This(), self, evtHandler);
    return args.This();
  }
  
  /*
   * id: _27675
   */
  if(args.Length() == 0) {
    

    wxNode_wxNotifyEvent *self = new wxNode_wxNotifyEvent();
    NodeExEvtHandlerImpl* evtHandler = dynamic_cast<NodeExEvtHandlerImpl*>(self);
    self->wrap(args.This(), self, evtHandler);
    return args.This();
  }
  
  /*
   * id: _27676
   */
  if(args.Length() == 1 && (args[0]->IsNull() || (args[0]->IsObject() && wxNode_wxNotifyEvent::AssignableFrom(args[0]->ToObject()->GetConstructorName())))) {
    wxNode_wxNotifyEvent* event = args[0]->IsNull() ? NULL : wxNodeObject::unwrap<wxNode_wxNotifyEvent>(args[0]->ToObject()); /* type: _62709  */
    

    wxNode_wxNotifyEvent *self = new wxNode_wxNotifyEvent(*event);
    NodeExEvtHandlerImpl* evtHandler = dynamic_cast<NodeExEvtHandlerImpl*>(self);
    self->wrap(args.This(), self, evtHandler);
    return args.This();
  }
  
  

  std::ostringstream errStr;
  errStr << "Could not find matching constructor for arguments (class name: wxNotifyEvent).\n";
  errStr << "  arg count: " << args.Length() << "\n";
  for(int i = 0; i < args.Length(); i++) {
    v8::String::AsciiValue argStr(args[i]);
    errStr << "  arg[" << i << "]: " << *argStr << "\n";
  }
  return v8::ThrowException(v8::Exception::TypeError(v8::String::New(errStr.str().c_str())));
}


/*static*/ v8::Handle<v8::Value> wxNode_wxNotifyEvent::_Veto(const v8::Arguments& args) {
  v8::HandleScope scope;
  wxNode_wxNotifyEvent* self = unwrap<wxNode_wxNotifyEvent>(args.This());

  
  /*
   * id: _27677
   */
  if(args.Length() == 0) {
    

    self->Veto();

    return v8::Undefined();
  }
  

  std::ostringstream errStr;
  errStr << "Could not find matching method for arguments (method name: wxNotifyEvent::Veto).\n";
  errStr << "  arg count: " << args.Length() << "\n";
  for(int i = 0; i < args.Length(); i++) {
    v8::String::AsciiValue argStr(args[i]);
    errStr << "  arg[" << i << "]: " << *argStr << "\n";
  }
  return v8::ThrowException(v8::Exception::TypeError(v8::String::New(errStr.str().c_str())));
}

/*static*/ v8::Handle<v8::Value> wxNode_wxNotifyEvent::_Allow(const v8::Arguments& args) {
  v8::HandleScope scope;
  wxNode_wxNotifyEvent* self = unwrap<wxNode_wxNotifyEvent>(args.This());

  
  /*
   * id: _27678
   */
  if(args.Length() == 0) {
    

    self->Allow();

    return v8::Undefined();
  }
  

  std::ostringstream errStr;
  errStr << "Could not find matching method for arguments (method name: wxNotifyEvent::Allow).\n";
  errStr << "  arg count: " << args.Length() << "\n";
  for(int i = 0; i < args.Length(); i++) {
    v8::String::AsciiValue argStr(args[i]);
    errStr << "  arg[" << i << "]: " << *argStr << "\n";
  }
  return v8::ThrowException(v8::Exception::TypeError(v8::String::New(errStr.str().c_str())));
}

/*static*/ v8::Handle<v8::Value> wxNode_wxNotifyEvent::_IsAllowed(const v8::Arguments& args) {
  v8::HandleScope scope;
  wxNode_wxNotifyEvent* self = unwrap<wxNode_wxNotifyEvent>(args.This());

  
  /*
   * id: _27679
   */
  if(args.Length() == 0) {
    

    bool returnVal = self->IsAllowed();

    return scope.Close(v8::Boolean::New(returnVal));
  }
  

  std::ostringstream errStr;
  errStr << "Could not find matching method for arguments (method name: wxNotifyEvent::IsAllowed).\n";
  errStr << "  arg count: " << args.Length() << "\n";
  for(int i = 0; i < args.Length(); i++) {
    v8::String::AsciiValue argStr(args[i]);
    errStr << "  arg[" << i << "]: " << *argStr << "\n";
  }
  return v8::ThrowException(v8::Exception::TypeError(v8::String::New(errStr.str().c_str())));
}

/*static*/ v8::Handle<v8::Value> wxNode_wxNotifyEvent::_Clone(const v8::Arguments& args) {
  v8::HandleScope scope;
  wxNode_wxNotifyEvent* self = unwrap<wxNode_wxNotifyEvent>(args.This());

  
  /*
   * id: _27680
   */
  if(args.Length() == 0) {
    

    wxEvent* returnVal = self->Clone();

    return scope.Close(wxNode_wxEvent::New(returnVal));
  }
  

  std::ostringstream errStr;
  errStr << "Could not find matching method for arguments (method name: wxNotifyEvent::Clone).\n";
  errStr << "  arg count: " << args.Length() << "\n";
  for(int i = 0; i < args.Length(); i++) {
    v8::String::AsciiValue argStr(args[i]);
    errStr << "  arg[" << i << "]: " << *argStr << "\n";
  }
  return v8::ThrowException(v8::Exception::TypeError(v8::String::New(errStr.str().c_str())));
}

/*static*/ v8::Handle<v8::Value> wxNode_wxNotifyEvent::_GetClassInfo(const v8::Arguments& args) {
  v8::HandleScope scope;
  wxNode_wxNotifyEvent* self = unwrap<wxNode_wxNotifyEvent>(args.This());

  
  /*
   * id: _27682
   */
  if(args.Length() == 0) {
    

    wxClassInfo* returnVal = self->GetClassInfo();

    return scope.Close(wxNode_wxClassInfo::New(returnVal));
  }
  

  std::ostringstream errStr;
  errStr << "Could not find matching method for arguments (method name: wxNotifyEvent::GetClassInfo).\n";
  errStr << "  arg count: " << args.Length() << "\n";
  for(int i = 0; i < args.Length(); i++) {
    v8::String::AsciiValue argStr(args[i]);
    errStr << "  arg[" << i << "]: " << *argStr << "\n";
  }
  return v8::ThrowException(v8::Exception::TypeError(v8::String::New(errStr.str().c_str())));
}

/*static*/ v8::Handle<v8::Value> wxNode_wxNotifyEvent::_wxCreateObject(const v8::Arguments& args) {
  v8::HandleScope scope;
  wxNode_wxNotifyEvent* self = unwrap<wxNode_wxNotifyEvent>(args.This());

  
  /*
   * id: _27683
   */
  if(args.Length() == 0) {
    

    wxObject* returnVal = wxNotifyEvent::wxCreateObject();

    return scope.Close(wxNode_wxObject::New(returnVal));
  }
  

  std::ostringstream errStr;
  errStr << "Could not find matching method for arguments (method name: wxNotifyEvent::wxCreateObject).\n";
  errStr << "  arg count: " << args.Length() << "\n";
  for(int i = 0; i < args.Length(); i++) {
    v8::String::AsciiValue argStr(args[i]);
    errStr << "  arg[" << i << "]: " << *argStr << "\n";
  }
  return v8::ThrowException(v8::Exception::TypeError(v8::String::New(errStr.str().c_str())));
}

