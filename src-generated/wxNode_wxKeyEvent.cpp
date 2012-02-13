
#include <sstream>
#include "wxNode_wxKeyEvent.h"
#include "wxNode_wxEvtHandler.h"
#include "wxNode_wxEvent.h"
#include "wxNode_wxPoint.h"
#include "wxNode_wxClassInfo.h"
#include "wxNode_wxObject.h"


/* static */ v8::Persistent<v8::FunctionTemplate> wxNode_wxKeyEvent::s_ct;



wxNode_wxKeyEvent::wxNode_wxKeyEvent(int keyType)
  : wxKeyEvent(keyType)
{

}

wxNode_wxKeyEvent::wxNode_wxKeyEvent()
  : wxKeyEvent()
{

}

wxNode_wxKeyEvent::wxNode_wxKeyEvent(wxKeyEvent& evt)
  : wxKeyEvent(evt)
{

}

wxNode_wxKeyEvent::wxNode_wxKeyEvent(int eventType, wxKeyEvent& evt)
  : wxKeyEvent(eventType, evt)
{

}




/*static*/ void wxNode_wxKeyEvent::Init(v8::Handle<v8::Object> target) {
  v8::HandleScope scope;

  v8::Local<v8::FunctionTemplate> t = v8::FunctionTemplate::New(wxNodeObject::NewFunc);
  s_ct = v8::Persistent<v8::FunctionTemplate>::New(t);
  s_ct->InstanceTemplate()->SetInternalFieldCount(2);
  s_ct->SetClassName(v8::String::NewSymbol("KeyEvent"));

  NODE_SET_PROTOTYPE_METHOD(s_ct, "init", _init);
  AddMethods(s_ct);

  target->Set(v8::String::NewSymbol("KeyEvent"), s_ct->GetFunction());
}

/*static*/ void wxNode_wxKeyEvent::AddMethods(v8::Handle<v8::FunctionTemplate> target) {
  wxNode_wxEvent::AddMethods(target);
  NODE_SET_PROTOTYPE_METHOD(target, "getKeyCode", _GetKeyCode);
  NODE_SET_PROTOTYPE_METHOD(target, "isKeyInCategory", _IsKeyInCategory);
  NODE_SET_PROTOTYPE_METHOD(target, "getUnicodeKey", _GetUnicodeKey);
  NODE_SET_PROTOTYPE_METHOD(target, "getRawKeyCode", _GetRawKeyCode);
  NODE_SET_PROTOTYPE_METHOD(target, "getRawKeyFlags", _GetRawKeyFlags);
  NODE_SET_PROTOTYPE_METHOD(target, "getPosition", _GetPosition);
  NODE_SET_PROTOTYPE_METHOD(target, "getX", _GetX);
  NODE_SET_PROTOTYPE_METHOD(target, "getY", _GetY);
  NODE_SET_PROTOTYPE_METHOD(target, "doAllowNextEvent", _DoAllowNextEvent);
  NODE_SET_PROTOTYPE_METHOD(target, "isNextEventAllowed", _IsNextEventAllowed);
  NODE_SET_PROTOTYPE_METHOD(target, "clone", _Clone);
  NODE_SET_PROTOTYPE_METHOD(target, "getEventCategory", _GetEventCategory);
  NODE_SET_PROTOTYPE_METHOD(target, "getClassInfo", _GetClassInfo);
  NODE_SET_METHOD(target, "wxCreateObject", _wxCreateObject);
  
}

/*static*/ v8::Handle<v8::Value> wxNode_wxKeyEvent::New(const wxNode_wxKeyEvent* obj) {
  v8::HandleScope scope;

  if(obj == NULL) {
    return scope.Close(v8::Null());
  }
  
  v8::Local<v8::FunctionTemplate> returnObjFt = v8::FunctionTemplate::New(wxNodeObject::NewFunc);
  returnObjFt->InstanceTemplate()->SetInternalFieldCount(2);
  returnObjFt->SetClassName(v8::String::NewSymbol("KeyEvent"));
  wxNode_wxKeyEvent::AddMethods(returnObjFt);

  v8::Local<v8::Function> returnObjFn = returnObjFt->GetFunction();
  v8::Handle<v8::Value> returnObjArgs[0];
  v8::Local<v8::Object> returnObj = returnObjFn->CallAsConstructor(0, returnObjArgs)->ToObject();
  returnObj->SetPointerInInternalField(0, (void*)obj);
  NodeExEvtHandlerImpl* evtHandler = dynamic_cast<NodeExEvtHandlerImpl*>((wxNode_wxKeyEvent*)obj);
  returnObj->SetPointerInInternalField(1, evtHandler);

  return scope.Close(returnObj);
}

/*static*/ v8::Handle<v8::Value> wxNode_wxKeyEvent::New(const wxKeyEvent* obj) {
  v8::HandleScope scope;

  if(obj == NULL) {
    return scope.Close(v8::Null());
  }
  
  v8::Local<v8::FunctionTemplate> returnObjFt = v8::FunctionTemplate::New(wxNodeObject::NewFunc);
  returnObjFt->InstanceTemplate()->SetInternalFieldCount(2);
  returnObjFt->SetClassName(v8::String::NewSymbol("KeyEvent"));
  wxNode_wxKeyEvent::AddMethods(returnObjFt);

  v8::Local<v8::Function> returnObjFn = returnObjFt->GetFunction();
  v8::Handle<v8::Value> returnObjArgs[0];
  v8::Local<v8::Object> returnObj = returnObjFn->CallAsConstructor(0, returnObjArgs)->ToObject();
  returnObj->SetPointerInInternalField(0, (void*)obj);
  returnObj->SetPointerInInternalField(1, new NodeExEvtHandlerImplWrap(returnObj));

  return scope.Close(returnObj);
}

/*static*/ v8::Handle<v8::Value> wxNode_wxKeyEvent::NewCopy(const wxKeyEvent& obj) {
  v8::HandleScope scope;
  wxNode_wxKeyEvent* returnVal = new wxNode_wxKeyEvent();
  memcpy(dynamic_cast<wxKeyEvent*>(returnVal), &obj, sizeof(wxKeyEvent));
  return scope.Close(New(returnVal));

}

/*static*/ bool wxNode_wxKeyEvent::AssignableFrom(const v8::Handle<v8::String>& className) {
  v8::String::AsciiValue classNameStr(className);
  return AssignableFrom(*classNameStr);
}

/*static*/ bool wxNode_wxKeyEvent::AssignableFrom(const char* className) {
  if(!strcmp("KeyEvent", className)) { return true; }
  

  return false;
}

/*static*/ v8::Handle<v8::Value> wxNode_wxKeyEvent::_init(const v8::Arguments& args) {
  v8::HandleScope scope;

  
  
  /*
   * id: _42556
   */
  if(args.Length() == 1 && args[0]->IsNumber()) {
    int keyType = (int)args[0]->ToInt32()->Value(); /* type: _986  */
    

    wxNode_wxKeyEvent *self = new wxNode_wxKeyEvent(keyType);
    NodeExEvtHandlerImpl* evtHandler = dynamic_cast<NodeExEvtHandlerImpl*>(self);
    self->wrap(args.This(), self, evtHandler);
    return args.This();
  }
  
  /*
   * id: _42556
   */
  if(args.Length() == 0) {
    

    wxNode_wxKeyEvent *self = new wxNode_wxKeyEvent();
    NodeExEvtHandlerImpl* evtHandler = dynamic_cast<NodeExEvtHandlerImpl*>(self);
    self->wrap(args.This(), self, evtHandler);
    return args.This();
  }
  
  /*
   * id: _42557
   */
  if(args.Length() == 1 && (args[0]->IsNull() || (args[0]->IsObject() && wxNode_wxKeyEvent::AssignableFrom(args[0]->ToObject()->GetConstructorName())))) {
    wxNode_wxKeyEvent* evt = args[0]->IsNull() ? NULL : wxNodeObject::unwrap<wxNode_wxKeyEvent>(args[0]->ToObject()); /* type: _61743  */
    

    wxNode_wxKeyEvent *self = new wxNode_wxKeyEvent(*evt);
    NodeExEvtHandlerImpl* evtHandler = dynamic_cast<NodeExEvtHandlerImpl*>(self);
    self->wrap(args.This(), self, evtHandler);
    return args.This();
  }
  
  /*
   * id: _42558
   */
  if(args.Length() == 2 && args[0]->IsNumber() && (args[1]->IsNull() || (args[1]->IsObject() && wxNode_wxKeyEvent::AssignableFrom(args[1]->ToObject()->GetConstructorName())))) {
    int eventType = (int)args[0]->ToInt32()->Value(); /* type: _986  */
    wxNode_wxKeyEvent* evt = args[1]->IsNull() ? NULL : wxNodeObject::unwrap<wxNode_wxKeyEvent>(args[1]->ToObject()); /* type: _61743  */
    

    wxNode_wxKeyEvent *self = new wxNode_wxKeyEvent(eventType, *evt);
    NodeExEvtHandlerImpl* evtHandler = dynamic_cast<NodeExEvtHandlerImpl*>(self);
    self->wrap(args.This(), self, evtHandler);
    return args.This();
  }
  
  

  std::ostringstream errStr;
  errStr << "Could not find matching constructor for arguments (class name: wxKeyEvent).\n";
  errStr << "  arg count: " << args.Length() << "\n";
  for(int i = 0; i < args.Length(); i++) {
    v8::String::AsciiValue argStr(args[i]);
    errStr << "  arg[" << i << "]: " << *argStr << "\n";
  }
  return v8::ThrowException(v8::Exception::TypeError(v8::String::New(errStr.str().c_str())));
}


/*static*/ v8::Handle<v8::Value> wxNode_wxKeyEvent::_GetKeyCode(const v8::Arguments& args) {
  v8::HandleScope scope;
  wxNode_wxKeyEvent* self = unwrap<wxNode_wxKeyEvent>(args.This());

  
  /*
   * id: _42559
   */
  if(args.Length() == 0) {
    

    int returnVal = self->GetKeyCode();

    return scope.Close(v8::Number::New(returnVal));
  }
  

  std::ostringstream errStr;
  errStr << "Could not find matching method for arguments (method name: wxKeyEvent::GetKeyCode).\n";
  errStr << "  arg count: " << args.Length() << "\n";
  for(int i = 0; i < args.Length(); i++) {
    v8::String::AsciiValue argStr(args[i]);
    errStr << "  arg[" << i << "]: " << *argStr << "\n";
  }
  return v8::ThrowException(v8::Exception::TypeError(v8::String::New(errStr.str().c_str())));
}

/*static*/ v8::Handle<v8::Value> wxNode_wxKeyEvent::_IsKeyInCategory(const v8::Arguments& args) {
  v8::HandleScope scope;
  wxNode_wxKeyEvent* self = unwrap<wxNode_wxKeyEvent>(args.This());

  
  /*
   * id: _42560
   */
  if(args.Length() == 1 && args[0]->IsNumber()) {
    int category = (int)args[0]->ToInt32()->Value(); /* type: _165  */
    

    bool returnVal = self->IsKeyInCategory(category);

    return scope.Close(v8::Boolean::New(returnVal));
  }
  

  std::ostringstream errStr;
  errStr << "Could not find matching method for arguments (method name: wxKeyEvent::IsKeyInCategory).\n";
  errStr << "  arg count: " << args.Length() << "\n";
  for(int i = 0; i < args.Length(); i++) {
    v8::String::AsciiValue argStr(args[i]);
    errStr << "  arg[" << i << "]: " << *argStr << "\n";
  }
  return v8::ThrowException(v8::Exception::TypeError(v8::String::New(errStr.str().c_str())));
}

/*static*/ v8::Handle<v8::Value> wxNode_wxKeyEvent::_GetUnicodeKey(const v8::Arguments& args) {
  v8::HandleScope scope;
  wxNode_wxKeyEvent* self = unwrap<wxNode_wxKeyEvent>(args.This());

  
  /*
   * id: _42561
   */
  if(args.Length() == 0) {
    

    wchar_t returnVal = self->GetUnicodeKey();

    char returnValTemp[5];
sprintf(returnValTemp, "%lc", returnVal);
return scope.Close(v8::String::New(returnValTemp));
  }
  

  std::ostringstream errStr;
  errStr << "Could not find matching method for arguments (method name: wxKeyEvent::GetUnicodeKey).\n";
  errStr << "  arg count: " << args.Length() << "\n";
  for(int i = 0; i < args.Length(); i++) {
    v8::String::AsciiValue argStr(args[i]);
    errStr << "  arg[" << i << "]: " << *argStr << "\n";
  }
  return v8::ThrowException(v8::Exception::TypeError(v8::String::New(errStr.str().c_str())));
}

/*static*/ v8::Handle<v8::Value> wxNode_wxKeyEvent::_GetRawKeyCode(const v8::Arguments& args) {
  v8::HandleScope scope;
  wxNode_wxKeyEvent* self = unwrap<wxNode_wxKeyEvent>(args.This());

  
  /*
   * id: _42562
   */
  if(args.Length() == 0) {
    

    int returnVal = self->GetRawKeyCode();

    return scope.Close(v8::Number::New(returnVal));
  }
  

  std::ostringstream errStr;
  errStr << "Could not find matching method for arguments (method name: wxKeyEvent::GetRawKeyCode).\n";
  errStr << "  arg count: " << args.Length() << "\n";
  for(int i = 0; i < args.Length(); i++) {
    v8::String::AsciiValue argStr(args[i]);
    errStr << "  arg[" << i << "]: " << *argStr << "\n";
  }
  return v8::ThrowException(v8::Exception::TypeError(v8::String::New(errStr.str().c_str())));
}

/*static*/ v8::Handle<v8::Value> wxNode_wxKeyEvent::_GetRawKeyFlags(const v8::Arguments& args) {
  v8::HandleScope scope;
  wxNode_wxKeyEvent* self = unwrap<wxNode_wxKeyEvent>(args.This());

  
  /*
   * id: _42563
   */
  if(args.Length() == 0) {
    

    int returnVal = self->GetRawKeyFlags();

    return scope.Close(v8::Number::New(returnVal));
  }
  

  std::ostringstream errStr;
  errStr << "Could not find matching method for arguments (method name: wxKeyEvent::GetRawKeyFlags).\n";
  errStr << "  arg count: " << args.Length() << "\n";
  for(int i = 0; i < args.Length(); i++) {
    v8::String::AsciiValue argStr(args[i]);
    errStr << "  arg[" << i << "]: " << *argStr << "\n";
  }
  return v8::ThrowException(v8::Exception::TypeError(v8::String::New(errStr.str().c_str())));
}

/*static*/ v8::Handle<v8::Value> wxNode_wxKeyEvent::_GetPosition(const v8::Arguments& args) {
  v8::HandleScope scope;
  wxNode_wxKeyEvent* self = unwrap<wxNode_wxKeyEvent>(args.This());

  
  /*
   * id: _42564
   */
  if(args.Length() == 2 && false && false) {
    int xpos; /* type: _61293 * */
    int ypos; /* type: _61293 * */
    

    self->GetPosition(&xpos, &ypos);

    return v8::Undefined();
  }
  
  /*
   * id: _42565
   */
  if(args.Length() == 2 && false && false) {
    long int xpos; /* type: _20486 * */
    long int ypos; /* type: _20486 * */
    

    self->GetPosition(&xpos, &ypos);

    return v8::Undefined();
  }
  
  /*
   * id: _42566
   */
  if(args.Length() == 0) {
    

    wxPoint returnVal = self->GetPosition();

    return scope.Close(wxNode_wxPoint::NewCopy(returnVal));
  }
  

  std::ostringstream errStr;
  errStr << "Could not find matching method for arguments (method name: wxKeyEvent::GetPosition).\n";
  errStr << "  arg count: " << args.Length() << "\n";
  for(int i = 0; i < args.Length(); i++) {
    v8::String::AsciiValue argStr(args[i]);
    errStr << "  arg[" << i << "]: " << *argStr << "\n";
  }
  return v8::ThrowException(v8::Exception::TypeError(v8::String::New(errStr.str().c_str())));
}

/*static*/ v8::Handle<v8::Value> wxNode_wxKeyEvent::_GetX(const v8::Arguments& args) {
  v8::HandleScope scope;
  wxNode_wxKeyEvent* self = unwrap<wxNode_wxKeyEvent>(args.This());

  
  /*
   * id: _42567
   */
  if(args.Length() == 0) {
    

    int returnVal = self->GetX();

    return scope.Close(v8::Number::New(returnVal));
  }
  

  std::ostringstream errStr;
  errStr << "Could not find matching method for arguments (method name: wxKeyEvent::GetX).\n";
  errStr << "  arg count: " << args.Length() << "\n";
  for(int i = 0; i < args.Length(); i++) {
    v8::String::AsciiValue argStr(args[i]);
    errStr << "  arg[" << i << "]: " << *argStr << "\n";
  }
  return v8::ThrowException(v8::Exception::TypeError(v8::String::New(errStr.str().c_str())));
}

/*static*/ v8::Handle<v8::Value> wxNode_wxKeyEvent::_GetY(const v8::Arguments& args) {
  v8::HandleScope scope;
  wxNode_wxKeyEvent* self = unwrap<wxNode_wxKeyEvent>(args.This());

  
  /*
   * id: _42568
   */
  if(args.Length() == 0) {
    

    int returnVal = self->GetY();

    return scope.Close(v8::Number::New(returnVal));
  }
  

  std::ostringstream errStr;
  errStr << "Could not find matching method for arguments (method name: wxKeyEvent::GetY).\n";
  errStr << "  arg count: " << args.Length() << "\n";
  for(int i = 0; i < args.Length(); i++) {
    v8::String::AsciiValue argStr(args[i]);
    errStr << "  arg[" << i << "]: " << *argStr << "\n";
  }
  return v8::ThrowException(v8::Exception::TypeError(v8::String::New(errStr.str().c_str())));
}

/*static*/ v8::Handle<v8::Value> wxNode_wxKeyEvent::_DoAllowNextEvent(const v8::Arguments& args) {
  v8::HandleScope scope;
  wxNode_wxKeyEvent* self = unwrap<wxNode_wxKeyEvent>(args.This());

  
  /*
   * id: _42569
   */
  if(args.Length() == 0) {
    

    self->DoAllowNextEvent();

    return v8::Undefined();
  }
  

  std::ostringstream errStr;
  errStr << "Could not find matching method for arguments (method name: wxKeyEvent::DoAllowNextEvent).\n";
  errStr << "  arg count: " << args.Length() << "\n";
  for(int i = 0; i < args.Length(); i++) {
    v8::String::AsciiValue argStr(args[i]);
    errStr << "  arg[" << i << "]: " << *argStr << "\n";
  }
  return v8::ThrowException(v8::Exception::TypeError(v8::String::New(errStr.str().c_str())));
}

/*static*/ v8::Handle<v8::Value> wxNode_wxKeyEvent::_IsNextEventAllowed(const v8::Arguments& args) {
  v8::HandleScope scope;
  wxNode_wxKeyEvent* self = unwrap<wxNode_wxKeyEvent>(args.This());

  
  /*
   * id: _42570
   */
  if(args.Length() == 0) {
    

    bool returnVal = self->IsNextEventAllowed();

    return scope.Close(v8::Boolean::New(returnVal));
  }
  

  std::ostringstream errStr;
  errStr << "Could not find matching method for arguments (method name: wxKeyEvent::IsNextEventAllowed).\n";
  errStr << "  arg count: " << args.Length() << "\n";
  for(int i = 0; i < args.Length(); i++) {
    v8::String::AsciiValue argStr(args[i]);
    errStr << "  arg[" << i << "]: " << *argStr << "\n";
  }
  return v8::ThrowException(v8::Exception::TypeError(v8::String::New(errStr.str().c_str())));
}

/*static*/ v8::Handle<v8::Value> wxNode_wxKeyEvent::_Clone(const v8::Arguments& args) {
  v8::HandleScope scope;
  wxNode_wxKeyEvent* self = unwrap<wxNode_wxKeyEvent>(args.This());

  
  /*
   * id: _42571
   */
  if(args.Length() == 0) {
    

    wxEvent* returnVal = self->Clone();

    return scope.Close(wxNode_wxEvent::New(returnVal));
  }
  

  std::ostringstream errStr;
  errStr << "Could not find matching method for arguments (method name: wxKeyEvent::Clone).\n";
  errStr << "  arg count: " << args.Length() << "\n";
  for(int i = 0; i < args.Length(); i++) {
    v8::String::AsciiValue argStr(args[i]);
    errStr << "  arg[" << i << "]: " << *argStr << "\n";
  }
  return v8::ThrowException(v8::Exception::TypeError(v8::String::New(errStr.str().c_str())));
}

/*static*/ v8::Handle<v8::Value> wxNode_wxKeyEvent::_GetEventCategory(const v8::Arguments& args) {
  v8::HandleScope scope;
  wxNode_wxKeyEvent* self = unwrap<wxNode_wxKeyEvent>(args.This());

  
  /*
   * id: _42572
   */
  if(args.Length() == 0) {
    

    int returnVal = (int)self->GetEventCategory();

    return scope.Close(v8::Number::New(returnVal));
  }
  

  std::ostringstream errStr;
  errStr << "Could not find matching method for arguments (method name: wxKeyEvent::GetEventCategory).\n";
  errStr << "  arg count: " << args.Length() << "\n";
  for(int i = 0; i < args.Length(); i++) {
    v8::String::AsciiValue argStr(args[i]);
    errStr << "  arg[" << i << "]: " << *argStr << "\n";
  }
  return v8::ThrowException(v8::Exception::TypeError(v8::String::New(errStr.str().c_str())));
}

/*static*/ v8::Handle<v8::Value> wxNode_wxKeyEvent::_GetClassInfo(const v8::Arguments& args) {
  v8::HandleScope scope;
  wxNode_wxKeyEvent* self = unwrap<wxNode_wxKeyEvent>(args.This());

  
  /*
   * id: _42576
   */
  if(args.Length() == 0) {
    

    wxClassInfo* returnVal = self->GetClassInfo();

    return scope.Close(wxNode_wxClassInfo::New(returnVal));
  }
  

  std::ostringstream errStr;
  errStr << "Could not find matching method for arguments (method name: wxKeyEvent::GetClassInfo).\n";
  errStr << "  arg count: " << args.Length() << "\n";
  for(int i = 0; i < args.Length(); i++) {
    v8::String::AsciiValue argStr(args[i]);
    errStr << "  arg[" << i << "]: " << *argStr << "\n";
  }
  return v8::ThrowException(v8::Exception::TypeError(v8::String::New(errStr.str().c_str())));
}

/*static*/ v8::Handle<v8::Value> wxNode_wxKeyEvent::_wxCreateObject(const v8::Arguments& args) {
  v8::HandleScope scope;
  wxNode_wxKeyEvent* self = unwrap<wxNode_wxKeyEvent>(args.This());

  
  /*
   * id: _42577
   */
  if(args.Length() == 0) {
    

    wxObject* returnVal = wxKeyEvent::wxCreateObject();

    return scope.Close(wxNode_wxObject::New(returnVal));
  }
  

  std::ostringstream errStr;
  errStr << "Could not find matching method for arguments (method name: wxKeyEvent::wxCreateObject).\n";
  errStr << "  arg count: " << args.Length() << "\n";
  for(int i = 0; i < args.Length(); i++) {
    v8::String::AsciiValue argStr(args[i]);
    errStr << "  arg[" << i << "]: " << *argStr << "\n";
  }
  return v8::ThrowException(v8::Exception::TypeError(v8::String::New(errStr.str().c_str())));
}

