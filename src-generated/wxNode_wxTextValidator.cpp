
#include <sstream>
#include "wxNode_wxTextValidator.h"
#include "wxNode_wxEvtHandler.h"
#include "wxNode_wxValidator.h"
#include "wxNode_wxObject.h"
#include "wxNode_wxWindow.h"
#include "wxNode_wxTextEntry.h"
#include "wxNode_wxArrayString.h"
#include "wxNode_wxClassInfo.h"


/* static */ v8::Persistent<v8::FunctionTemplate> wxNode_wxTextValidator::s_ct;



wxNode_wxTextValidator::wxNode_wxTextValidator(long int style,  wxString* val)
  : wxTextValidator(style, val)
{

}

wxNode_wxTextValidator::wxNode_wxTextValidator(long int style)
  : wxTextValidator(style)
{

}

wxNode_wxTextValidator::wxNode_wxTextValidator()
  : wxTextValidator()
{

}

wxNode_wxTextValidator::wxNode_wxTextValidator(wxTextValidator& val)
  : wxTextValidator(val)
{

}




/*static*/ void wxNode_wxTextValidator::Init(v8::Handle<v8::Object> target) {
  v8::HandleScope scope;

  v8::Local<v8::FunctionTemplate> t = v8::FunctionTemplate::New(wxNodeObject::NewFunc);
  s_ct = v8::Persistent<v8::FunctionTemplate>::New(t);
  s_ct->InstanceTemplate()->SetInternalFieldCount(2);
  s_ct->SetClassName(v8::String::NewSymbol("TextValidator"));

  NODE_SET_PROTOTYPE_METHOD(s_ct, "init", _init);
  AddMethods(s_ct);

  target->Set(v8::String::NewSymbol("TextValidator"), s_ct->GetFunction());
}

/*static*/ void wxNode_wxTextValidator::AddMethods(v8::Handle<v8::FunctionTemplate> target) {
  wxNode_wxValidator::AddMethods(target);
  NODE_SET_PROTOTYPE_METHOD(target, "clone", _Clone);
  NODE_SET_PROTOTYPE_METHOD(target, "copy", _Copy);
  NODE_SET_PROTOTYPE_METHOD(target, "validate", _Validate);
  NODE_SET_PROTOTYPE_METHOD(target, "transferToWindow", _TransferToWindow);
  NODE_SET_PROTOTYPE_METHOD(target, "transferFromWindow", _TransferFromWindow);
  NODE_SET_PROTOTYPE_METHOD(target, "onChar", _OnChar);
  NODE_SET_PROTOTYPE_METHOD(target, "getStyle", _GetStyle);
  NODE_SET_PROTOTYPE_METHOD(target, "setStyle", _SetStyle);
  NODE_SET_PROTOTYPE_METHOD(target, "getTextEntry", _GetTextEntry);
  NODE_SET_PROTOTYPE_METHOD(target, "setCharIncludes", _SetCharIncludes);
  NODE_SET_PROTOTYPE_METHOD(target, "setIncludes", _SetIncludes);
  NODE_SET_PROTOTYPE_METHOD(target, "getIncludes", _GetIncludes);
  NODE_SET_PROTOTYPE_METHOD(target, "setCharExcludes", _SetCharExcludes);
  NODE_SET_PROTOTYPE_METHOD(target, "setExcludes", _SetExcludes);
  NODE_SET_PROTOTYPE_METHOD(target, "getExcludes", _GetExcludes);
  NODE_SET_PROTOTYPE_METHOD(target, "hasFlag", _HasFlag);
  NODE_SET_PROTOTYPE_METHOD(target, "getClassInfo", _GetClassInfo);
  NODE_SET_METHOD(target, "wxCreateObject", _wxCreateObject);
  
  
}

/*static*/ v8::Handle<v8::Value> wxNode_wxTextValidator::New(const wxNode_wxTextValidator* obj) {
  v8::HandleScope scope;

  if(obj == NULL) {
    return scope.Close(v8::Null());
  }
  
  v8::Local<v8::FunctionTemplate> returnObjFt = v8::FunctionTemplate::New(wxNodeObject::NewFunc);
  returnObjFt->InstanceTemplate()->SetInternalFieldCount(2);
  returnObjFt->SetClassName(v8::String::NewSymbol("TextValidator"));
  wxNode_wxTextValidator::AddMethods(returnObjFt);

  v8::Local<v8::Function> returnObjFn = returnObjFt->GetFunction();
  v8::Handle<v8::Value> returnObjArgs[0];
  v8::Local<v8::Object> returnObj = returnObjFn->CallAsConstructor(0, returnObjArgs)->ToObject();
  returnObj->SetPointerInInternalField(0, (void*)obj);
  NodeExEvtHandlerImpl* evtHandler = dynamic_cast<NodeExEvtHandlerImpl*>((wxNode_wxTextValidator*)obj);
  returnObj->SetPointerInInternalField(1, evtHandler);

  return scope.Close(returnObj);
}

/*static*/ v8::Handle<v8::Value> wxNode_wxTextValidator::New(const wxTextValidator* obj) {
  v8::HandleScope scope;

  if(obj == NULL) {
    return scope.Close(v8::Null());
  }
  
  v8::Local<v8::FunctionTemplate> returnObjFt = v8::FunctionTemplate::New(wxNodeObject::NewFunc);
  returnObjFt->InstanceTemplate()->SetInternalFieldCount(2);
  returnObjFt->SetClassName(v8::String::NewSymbol("TextValidator"));
  wxNode_wxTextValidator::AddMethods(returnObjFt);

  v8::Local<v8::Function> returnObjFn = returnObjFt->GetFunction();
  v8::Handle<v8::Value> returnObjArgs[0];
  v8::Local<v8::Object> returnObj = returnObjFn->CallAsConstructor(0, returnObjArgs)->ToObject();
  returnObj->SetPointerInInternalField(0, (void*)obj);
  NodeExEvtHandlerImplWrap* wrap = new NodeExEvtHandlerImplWrap(returnObj);
  NodeExEvtHandlerImpl* evtHandler = dynamic_cast<NodeExEvtHandlerImpl*>(wrap);
  returnObj->SetPointerInInternalField(1, evtHandler);

  return scope.Close(returnObj);
}

/*static*/ v8::Handle<v8::Value> wxNode_wxTextValidator::NewCopy(const wxTextValidator& obj) {
  v8::HandleScope scope;
  wxNode_wxTextValidator* returnVal = new wxNode_wxTextValidator();
  memcpy(dynamic_cast<wxTextValidator*>(returnVal), &obj, sizeof(wxTextValidator));
  return scope.Close(New(returnVal));

}

/*static*/ bool wxNode_wxTextValidator::AssignableFrom(const v8::Handle<v8::String>& className) {
  v8::String::AsciiValue classNameStr(className);
  return AssignableFrom(*classNameStr);
}

/*static*/ bool wxNode_wxTextValidator::AssignableFrom(const char* className) {
  if(!strcmp("TextValidator", className)) { return true; }
  

  return false;
}

/*static*/ v8::Handle<v8::Value> wxNode_wxTextValidator::_init(const v8::Arguments& args) {
  v8::HandleScope scope;

  
  
  /*
   * id: _41312
   */
  if(args.Length() == 2 && args[0]->IsNumber() && args[1]->IsString()) {
    long int style = (long int)args[0]->ToInt32()->Value(); /* type: _592  */
    wxString* val; /* type: _24013 * */
    

    wxNode_wxTextValidator *self = new wxNode_wxTextValidator(style, val);
    NodeExEvtHandlerImpl* evtHandler = dynamic_cast<NodeExEvtHandlerImpl*>(self);
    self->wrap(args.This(), self, evtHandler);
    return args.This();
  }
  
  /*
   * id: _41312
   */
  if(args.Length() == 1 && args[0]->IsNumber()) {
    long int style = (long int)args[0]->ToInt32()->Value(); /* type: _592  */
    

    wxNode_wxTextValidator *self = new wxNode_wxTextValidator(style);
    NodeExEvtHandlerImpl* evtHandler = dynamic_cast<NodeExEvtHandlerImpl*>(self);
    self->wrap(args.This(), self, evtHandler);
    return args.This();
  }
  
  /*
   * id: _41312
   */
  if(args.Length() == 0) {
    

    wxNode_wxTextValidator *self = new wxNode_wxTextValidator();
    NodeExEvtHandlerImpl* evtHandler = dynamic_cast<NodeExEvtHandlerImpl*>(self);
    self->wrap(args.This(), self, evtHandler);
    return args.This();
  }
  
  /*
   * id: _41313
   */
  if(args.Length() == 1 && (args[0]->IsNull() || (args[0]->IsObject() && wxNode_wxTextValidator::AssignableFrom(args[0]->ToObject()->GetConstructorName())))) {
    wxNode_wxTextValidator* val = args[0]->IsNull() ? NULL : wxNodeObject::unwrap<wxNode_wxTextValidator>(args[0]->ToObject()); /* type: _64328  */
    

    wxNode_wxTextValidator *self = new wxNode_wxTextValidator(*val);
    NodeExEvtHandlerImpl* evtHandler = dynamic_cast<NodeExEvtHandlerImpl*>(self);
    self->wrap(args.This(), self, evtHandler);
    return args.This();
  }
  
  

  std::ostringstream errStr;
  errStr << "Could not find matching constructor for arguments (class name: wxTextValidator).\n";
  errStr << "  arg count: " << args.Length() << "\n";
  for(int i = 0; i < args.Length(); i++) {
    v8::String::AsciiValue argStr(args[i]);
    errStr << "  arg[" << i << "]: " << *argStr << "\n";
  }
  return v8::ThrowException(v8::Exception::TypeError(v8::String::New(errStr.str().c_str())));
}


/*static*/ v8::Handle<v8::Value> wxNode_wxTextValidator::_Clone(const v8::Arguments& args) {
  v8::HandleScope scope;
  wxNode_wxTextValidator* self = unwrap<wxNode_wxTextValidator>(args.This());

  
  /*
   * id: _41315
   */
  if(args.Length() == 0) {
    

    wxObject* returnVal = self->Clone();

    return scope.Close(wxNode_wxObject::New(returnVal));
  }
  

  std::ostringstream errStr;
  errStr << "Could not find matching method for arguments (method name: wxTextValidator::Clone).\n";
  errStr << "  arg count: " << args.Length() << "\n";
  for(int i = 0; i < args.Length(); i++) {
    v8::String::AsciiValue argStr(args[i]);
    errStr << "  arg[" << i << "]: " << *argStr << "\n";
  }
  return v8::ThrowException(v8::Exception::TypeError(v8::String::New(errStr.str().c_str())));
}

/*static*/ v8::Handle<v8::Value> wxNode_wxTextValidator::_Copy(const v8::Arguments& args) {
  v8::HandleScope scope;
  wxNode_wxTextValidator* self = unwrap<wxNode_wxTextValidator>(args.This());

  
  /*
   * id: _41316
   */
  if(args.Length() == 1 && (args[0]->IsNull() || (args[0]->IsObject() && wxNode_wxTextValidator::AssignableFrom(args[0]->ToObject()->GetConstructorName())))) {
    wxNode_wxTextValidator* val = args[0]->IsNull() ? NULL : wxNodeObject::unwrap<wxNode_wxTextValidator>(args[0]->ToObject()); /* type: _64328  */
    

    bool returnVal = self->Copy(*val);

    return scope.Close(v8::Boolean::New(returnVal));
  }
  

  std::ostringstream errStr;
  errStr << "Could not find matching method for arguments (method name: wxTextValidator::Copy).\n";
  errStr << "  arg count: " << args.Length() << "\n";
  for(int i = 0; i < args.Length(); i++) {
    v8::String::AsciiValue argStr(args[i]);
    errStr << "  arg[" << i << "]: " << *argStr << "\n";
  }
  return v8::ThrowException(v8::Exception::TypeError(v8::String::New(errStr.str().c_str())));
}

/*static*/ v8::Handle<v8::Value> wxNode_wxTextValidator::_Validate(const v8::Arguments& args) {
  v8::HandleScope scope;
  wxNode_wxTextValidator* self = unwrap<wxNode_wxTextValidator>(args.This());

  
  /*
   * id: _41317
   */
  if(args.Length() == 1 && (args[0]->IsNull() || (args[0]->IsObject() && wxNode_wxWindow::AssignableFrom(args[0]->ToObject()->GetConstructorName())))) {
    wxNode_wxWindow* parent = args[0]->IsNull() ? NULL : wxNodeObject::unwrap<wxNode_wxWindow>(args[0]->ToObject()); /* type: _1000 * */
    

    bool returnVal = self->Validate(parent);

    return scope.Close(v8::Boolean::New(returnVal));
  }
  

  std::ostringstream errStr;
  errStr << "Could not find matching method for arguments (method name: wxTextValidator::Validate).\n";
  errStr << "  arg count: " << args.Length() << "\n";
  for(int i = 0; i < args.Length(); i++) {
    v8::String::AsciiValue argStr(args[i]);
    errStr << "  arg[" << i << "]: " << *argStr << "\n";
  }
  return v8::ThrowException(v8::Exception::TypeError(v8::String::New(errStr.str().c_str())));
}

/*static*/ v8::Handle<v8::Value> wxNode_wxTextValidator::_TransferToWindow(const v8::Arguments& args) {
  v8::HandleScope scope;
  wxNode_wxTextValidator* self = unwrap<wxNode_wxTextValidator>(args.This());

  
  /*
   * id: _41318
   */
  if(args.Length() == 0) {
    

    bool returnVal = self->TransferToWindow();

    return scope.Close(v8::Boolean::New(returnVal));
  }
  

  std::ostringstream errStr;
  errStr << "Could not find matching method for arguments (method name: wxTextValidator::TransferToWindow).\n";
  errStr << "  arg count: " << args.Length() << "\n";
  for(int i = 0; i < args.Length(); i++) {
    v8::String::AsciiValue argStr(args[i]);
    errStr << "  arg[" << i << "]: " << *argStr << "\n";
  }
  return v8::ThrowException(v8::Exception::TypeError(v8::String::New(errStr.str().c_str())));
}

/*static*/ v8::Handle<v8::Value> wxNode_wxTextValidator::_TransferFromWindow(const v8::Arguments& args) {
  v8::HandleScope scope;
  wxNode_wxTextValidator* self = unwrap<wxNode_wxTextValidator>(args.This());

  
  /*
   * id: _41319
   */
  if(args.Length() == 0) {
    

    bool returnVal = self->TransferFromWindow();

    return scope.Close(v8::Boolean::New(returnVal));
  }
  

  std::ostringstream errStr;
  errStr << "Could not find matching method for arguments (method name: wxTextValidator::TransferFromWindow).\n";
  errStr << "  arg count: " << args.Length() << "\n";
  for(int i = 0; i < args.Length(); i++) {
    v8::String::AsciiValue argStr(args[i]);
    errStr << "  arg[" << i << "]: " << *argStr << "\n";
  }
  return v8::ThrowException(v8::Exception::TypeError(v8::String::New(errStr.str().c_str())));
}

/*static*/ v8::Handle<v8::Value> wxNode_wxTextValidator::_OnChar(const v8::Arguments& args) {
  v8::HandleScope scope;
  wxNode_wxTextValidator* self = unwrap<wxNode_wxTextValidator>(args.This());

  

  std::ostringstream errStr;
  errStr << "Could not find matching method for arguments (method name: wxTextValidator::OnChar).\n";
  errStr << "  arg count: " << args.Length() << "\n";
  for(int i = 0; i < args.Length(); i++) {
    v8::String::AsciiValue argStr(args[i]);
    errStr << "  arg[" << i << "]: " << *argStr << "\n";
  }
  return v8::ThrowException(v8::Exception::TypeError(v8::String::New(errStr.str().c_str())));
}

/*static*/ v8::Handle<v8::Value> wxNode_wxTextValidator::_GetStyle(const v8::Arguments& args) {
  v8::HandleScope scope;
  wxNode_wxTextValidator* self = unwrap<wxNode_wxTextValidator>(args.This());

  
  /*
   * id: _41321
   */
  if(args.Length() == 0) {
    

    int returnVal = self->GetStyle();

    return scope.Close(v8::Number::New(returnVal));
  }
  

  std::ostringstream errStr;
  errStr << "Could not find matching method for arguments (method name: wxTextValidator::GetStyle).\n";
  errStr << "  arg count: " << args.Length() << "\n";
  for(int i = 0; i < args.Length(); i++) {
    v8::String::AsciiValue argStr(args[i]);
    errStr << "  arg[" << i << "]: " << *argStr << "\n";
  }
  return v8::ThrowException(v8::Exception::TypeError(v8::String::New(errStr.str().c_str())));
}

/*static*/ v8::Handle<v8::Value> wxNode_wxTextValidator::_SetStyle(const v8::Arguments& args) {
  v8::HandleScope scope;
  wxNode_wxTextValidator* self = unwrap<wxNode_wxTextValidator>(args.This());

  
  /*
   * id: _41322
   */
  if(args.Length() == 1 && args[0]->IsNumber()) {
    long int style = (long int)args[0]->ToInt32()->Value(); /* type: _592  */
    

    self->SetStyle(style);

    return v8::Undefined();
  }
  

  std::ostringstream errStr;
  errStr << "Could not find matching method for arguments (method name: wxTextValidator::SetStyle).\n";
  errStr << "  arg count: " << args.Length() << "\n";
  for(int i = 0; i < args.Length(); i++) {
    v8::String::AsciiValue argStr(args[i]);
    errStr << "  arg[" << i << "]: " << *argStr << "\n";
  }
  return v8::ThrowException(v8::Exception::TypeError(v8::String::New(errStr.str().c_str())));
}

/*static*/ v8::Handle<v8::Value> wxNode_wxTextValidator::_GetTextEntry(const v8::Arguments& args) {
  v8::HandleScope scope;
  wxNode_wxTextValidator* self = unwrap<wxNode_wxTextValidator>(args.This());

  
  /*
   * id: _41323
   */
  if(args.Length() == 0) {
    

    wxTextEntry* returnVal = self->GetTextEntry();

    return scope.Close(wxNode_wxTextEntry::New(returnVal));
  }
  

  std::ostringstream errStr;
  errStr << "Could not find matching method for arguments (method name: wxTextValidator::GetTextEntry).\n";
  errStr << "  arg count: " << args.Length() << "\n";
  for(int i = 0; i < args.Length(); i++) {
    v8::String::AsciiValue argStr(args[i]);
    errStr << "  arg[" << i << "]: " << *argStr << "\n";
  }
  return v8::ThrowException(v8::Exception::TypeError(v8::String::New(errStr.str().c_str())));
}

/*static*/ v8::Handle<v8::Value> wxNode_wxTextValidator::_SetCharIncludes(const v8::Arguments& args) {
  v8::HandleScope scope;
  wxNode_wxTextValidator* self = unwrap<wxNode_wxTextValidator>(args.This());

  
  /*
   * id: _41324
   */
  if(args.Length() == 1 && args[0]->IsString()) {
    v8::String::AsciiValue chars(args[0]->ToString()); /* type: _14975  */
    

    self->SetCharIncludes(*chars);

    return v8::Undefined();
  }
  

  std::ostringstream errStr;
  errStr << "Could not find matching method for arguments (method name: wxTextValidator::SetCharIncludes).\n";
  errStr << "  arg count: " << args.Length() << "\n";
  for(int i = 0; i < args.Length(); i++) {
    v8::String::AsciiValue argStr(args[i]);
    errStr << "  arg[" << i << "]: " << *argStr << "\n";
  }
  return v8::ThrowException(v8::Exception::TypeError(v8::String::New(errStr.str().c_str())));
}

/*static*/ v8::Handle<v8::Value> wxNode_wxTextValidator::_SetIncludes(const v8::Arguments& args) {
  v8::HandleScope scope;
  wxNode_wxTextValidator* self = unwrap<wxNode_wxTextValidator>(args.This());

  
  /*
   * id: _41325
   */
  if(args.Length() == 1 && (args[0]->IsNull() || (args[0]->IsObject() && wxNode_wxArrayString::AssignableFrom(args[0]->ToObject()->GetConstructorName())))) {
    wxNode_wxArrayString* includes = args[0]->IsNull() ? NULL : wxNodeObject::unwrap<wxNode_wxArrayString>(args[0]->ToObject()); /* type: _20632  */
    

    self->SetIncludes(*includes);

    return v8::Undefined();
  }
  

  std::ostringstream errStr;
  errStr << "Could not find matching method for arguments (method name: wxTextValidator::SetIncludes).\n";
  errStr << "  arg count: " << args.Length() << "\n";
  for(int i = 0; i < args.Length(); i++) {
    v8::String::AsciiValue argStr(args[i]);
    errStr << "  arg[" << i << "]: " << *argStr << "\n";
  }
  return v8::ThrowException(v8::Exception::TypeError(v8::String::New(errStr.str().c_str())));
}

/*static*/ v8::Handle<v8::Value> wxNode_wxTextValidator::_GetIncludes(const v8::Arguments& args) {
  v8::HandleScope scope;
  wxNode_wxTextValidator* self = unwrap<wxNode_wxTextValidator>(args.This());

  
  /*
   * id: _41326
   */
  if(args.Length() == 0) {
    

    wxArrayString returnVal = self->GetIncludes();

    return scope.Close(wxNode_wxArrayString::NewCopy(returnVal));
  }
  

  std::ostringstream errStr;
  errStr << "Could not find matching method for arguments (method name: wxTextValidator::GetIncludes).\n";
  errStr << "  arg count: " << args.Length() << "\n";
  for(int i = 0; i < args.Length(); i++) {
    v8::String::AsciiValue argStr(args[i]);
    errStr << "  arg[" << i << "]: " << *argStr << "\n";
  }
  return v8::ThrowException(v8::Exception::TypeError(v8::String::New(errStr.str().c_str())));
}

/*static*/ v8::Handle<v8::Value> wxNode_wxTextValidator::_SetCharExcludes(const v8::Arguments& args) {
  v8::HandleScope scope;
  wxNode_wxTextValidator* self = unwrap<wxNode_wxTextValidator>(args.This());

  
  /*
   * id: _41327
   */
  if(args.Length() == 1 && args[0]->IsString()) {
    v8::String::AsciiValue chars(args[0]->ToString()); /* type: _14975  */
    

    self->SetCharExcludes(*chars);

    return v8::Undefined();
  }
  

  std::ostringstream errStr;
  errStr << "Could not find matching method for arguments (method name: wxTextValidator::SetCharExcludes).\n";
  errStr << "  arg count: " << args.Length() << "\n";
  for(int i = 0; i < args.Length(); i++) {
    v8::String::AsciiValue argStr(args[i]);
    errStr << "  arg[" << i << "]: " << *argStr << "\n";
  }
  return v8::ThrowException(v8::Exception::TypeError(v8::String::New(errStr.str().c_str())));
}

/*static*/ v8::Handle<v8::Value> wxNode_wxTextValidator::_SetExcludes(const v8::Arguments& args) {
  v8::HandleScope scope;
  wxNode_wxTextValidator* self = unwrap<wxNode_wxTextValidator>(args.This());

  
  /*
   * id: _41328
   */
  if(args.Length() == 1 && (args[0]->IsNull() || (args[0]->IsObject() && wxNode_wxArrayString::AssignableFrom(args[0]->ToObject()->GetConstructorName())))) {
    wxNode_wxArrayString* excludes = args[0]->IsNull() ? NULL : wxNodeObject::unwrap<wxNode_wxArrayString>(args[0]->ToObject()); /* type: _20632  */
    

    self->SetExcludes(*excludes);

    return v8::Undefined();
  }
  

  std::ostringstream errStr;
  errStr << "Could not find matching method for arguments (method name: wxTextValidator::SetExcludes).\n";
  errStr << "  arg count: " << args.Length() << "\n";
  for(int i = 0; i < args.Length(); i++) {
    v8::String::AsciiValue argStr(args[i]);
    errStr << "  arg[" << i << "]: " << *argStr << "\n";
  }
  return v8::ThrowException(v8::Exception::TypeError(v8::String::New(errStr.str().c_str())));
}

/*static*/ v8::Handle<v8::Value> wxNode_wxTextValidator::_GetExcludes(const v8::Arguments& args) {
  v8::HandleScope scope;
  wxNode_wxTextValidator* self = unwrap<wxNode_wxTextValidator>(args.This());

  
  /*
   * id: _41329
   */
  if(args.Length() == 0) {
    

    wxArrayString returnVal = self->GetExcludes();

    return scope.Close(wxNode_wxArrayString::NewCopy(returnVal));
  }
  

  std::ostringstream errStr;
  errStr << "Could not find matching method for arguments (method name: wxTextValidator::GetExcludes).\n";
  errStr << "  arg count: " << args.Length() << "\n";
  for(int i = 0; i < args.Length(); i++) {
    v8::String::AsciiValue argStr(args[i]);
    errStr << "  arg[" << i << "]: " << *argStr << "\n";
  }
  return v8::ThrowException(v8::Exception::TypeError(v8::String::New(errStr.str().c_str())));
}

/*static*/ v8::Handle<v8::Value> wxNode_wxTextValidator::_HasFlag(const v8::Arguments& args) {
  v8::HandleScope scope;
  wxNode_wxTextValidator* self = unwrap<wxNode_wxTextValidator>(args.This());

  
  /*
   * id: _41330
   */
  if(args.Length() == 1 && args[0]->IsNumber()) {
    wxTextValidatorStyle style = (wxTextValidatorStyle)args[0]->ToNumber()->Value(); /* type: _3917  */
    

    bool returnVal = self->HasFlag(style);

    return scope.Close(v8::Boolean::New(returnVal));
  }
  

  std::ostringstream errStr;
  errStr << "Could not find matching method for arguments (method name: wxTextValidator::HasFlag).\n";
  errStr << "  arg count: " << args.Length() << "\n";
  for(int i = 0; i < args.Length(); i++) {
    v8::String::AsciiValue argStr(args[i]);
    errStr << "  arg[" << i << "]: " << *argStr << "\n";
  }
  return v8::ThrowException(v8::Exception::TypeError(v8::String::New(errStr.str().c_str())));
}

/*static*/ v8::Handle<v8::Value> wxNode_wxTextValidator::_GetClassInfo(const v8::Arguments& args) {
  v8::HandleScope scope;
  wxNode_wxTextValidator* self = unwrap<wxNode_wxTextValidator>(args.This());

  
  /*
   * id: _41335
   */
  if(args.Length() == 0) {
    

    wxClassInfo* returnVal = self->GetClassInfo();

    return scope.Close(wxNode_wxClassInfo::New(returnVal));
  }
  

  std::ostringstream errStr;
  errStr << "Could not find matching method for arguments (method name: wxTextValidator::GetClassInfo).\n";
  errStr << "  arg count: " << args.Length() << "\n";
  for(int i = 0; i < args.Length(); i++) {
    v8::String::AsciiValue argStr(args[i]);
    errStr << "  arg[" << i << "]: " << *argStr << "\n";
  }
  return v8::ThrowException(v8::Exception::TypeError(v8::String::New(errStr.str().c_str())));
}

/*static*/ v8::Handle<v8::Value> wxNode_wxTextValidator::_wxCreateObject(const v8::Arguments& args) {
  v8::HandleScope scope;
  wxNode_wxTextValidator* self = unwrap<wxNode_wxTextValidator>(args.This());

  
  /*
   * id: _41336
   */
  if(args.Length() == 0) {
    

    wxObject* returnVal = wxTextValidator::wxCreateObject();

    return scope.Close(wxNode_wxObject::New(returnVal));
  }
  

  std::ostringstream errStr;
  errStr << "Could not find matching method for arguments (method name: wxTextValidator::wxCreateObject).\n";
  errStr << "  arg count: " << args.Length() << "\n";
  for(int i = 0; i < args.Length(); i++) {
    v8::String::AsciiValue argStr(args[i]);
    errStr << "  arg[" << i << "]: " << *argStr << "\n";
  }
  return v8::ThrowException(v8::Exception::TypeError(v8::String::New(errStr.str().c_str())));
}



