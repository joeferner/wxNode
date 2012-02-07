
#include <sstream>
#include "wxNode_wxItemContainer.h"
#include "wxNode_wxEvtHandler.h"
#include "wxNode_wxItemContainerImmutable.h"
#include "wxNode_wxClientData.h"
#include "wxNode_wxArrayString.h"


/* static */ v8::Persistent<v8::FunctionTemplate> wxNode_wxItemContainer::s_ct;




/*static*/ void wxNode_wxItemContainer::Init(v8::Handle<v8::Object> target) {
  v8::HandleScope scope;

  v8::Local<v8::FunctionTemplate> t = v8::FunctionTemplate::New(wxNodeObject::NewFunc);
  s_ct = v8::Persistent<v8::FunctionTemplate>::New(t);
  s_ct->InstanceTemplate()->SetInternalFieldCount(2);
  s_ct->SetClassName(v8::String::NewSymbol("wxItemContainer"));

  NODE_SET_PROTOTYPE_METHOD(s_ct, "init", _init);
  AddMethods(s_ct);

  target->Set(v8::String::NewSymbol("wxItemContainer"), s_ct->GetFunction());
}

/*static*/ void wxNode_wxItemContainer::AddMethods(v8::Handle<v8::FunctionTemplate> target) {
  wxNode_wxItemContainerImmutable::AddMethods(target);
  NODE_SET_PROTOTYPE_METHOD(target, "append", _Append);
  NODE_SET_PROTOTYPE_METHOD(target, "appendString", _AppendString);
  NODE_SET_PROTOTYPE_METHOD(target, "insert", _Insert);
  NODE_SET_PROTOTYPE_METHOD(target, "set", _Set);
  NODE_SET_PROTOTYPE_METHOD(target, "clear", _Clear);
  NODE_SET_PROTOTYPE_METHOD(target, "delete", _Delete);
  NODE_SET_PROTOTYPE_METHOD(target, "isSorted", _IsSorted);
  NODE_SET_PROTOTYPE_METHOD(target, "setClientData", _SetClientData);
  NODE_SET_PROTOTYPE_METHOD(target, "getClientData", _GetClientData);
  NODE_SET_PROTOTYPE_METHOD(target, "setClientObject", _SetClientObject);
  NODE_SET_PROTOTYPE_METHOD(target, "getClientObject", _GetClientObject);
  NODE_SET_PROTOTYPE_METHOD(target, "detachClientObject", _DetachClientObject);
  NODE_SET_PROTOTYPE_METHOD(target, "getClientDataType", _GetClientDataType);
  NODE_SET_PROTOTYPE_METHOD(target, "hasClientData", _HasClientData);
  NODE_SET_PROTOTYPE_METHOD(target, "hasClientObjectData", _HasClientObjectData);
  NODE_SET_PROTOTYPE_METHOD(target, "hasClientUntypedData", _HasClientUntypedData);
  
}

/*static*/ bool wxNode_wxItemContainer::AssignableFrom(const v8::Handle<v8::String>& className) {
  v8::String::AsciiValue classNameStr(className);
  return AssignableFrom(*classNameStr);
}

/*static*/ bool wxNode_wxItemContainer::AssignableFrom(const char* className) {
  if(!strcmp("wxItemContainer", className)) {
    return true;
  }
  if(wxNode_wxItemContainerImmutable::AssignableFrom(className)) { return true; }

  printf("wxItemContainer ?== %s\n", className);
  return false;
}

/*static*/ v8::Handle<v8::Value> wxNode_wxItemContainer::_init(const v8::Arguments& args) {
  v8::HandleScope scope;

  

  std::ostringstream errStr;
  errStr << "Could not find matching constructor for arguments (class name: wxItemContainer).\n";                           \
  errStr << "  arg count: " << args.Length() << "\n";
  for(int i = 0; i < args.Length(); i++) {
    v8::String::AsciiValue argStr(args[i]);
    errStr << "  arg[" << i << "]: " << *argStr << "\n";
  }
  return v8::ThrowException(v8::Exception::TypeError(v8::String::New(errStr.str().c_str())));
}


/*static*/ v8::Handle<v8::Value> wxNode_wxItemContainer::_Append(const v8::Arguments& args) {
  v8::HandleScope scope;
  wxNode_wxItemContainer* self = unwrap<wxNode_wxItemContainer>(args.This());

  
  /*
   * id: _30488
   */
  if(args.Length() == 1 && args[0]->IsString()) {
    v8::String::AsciiValue item(args[0]->ToString()); /* type: _14808  */
    

    int returnVal = self->Append(*item);

    return scope.Close(v8::Number::New(returnVal));
  }
  
  /*
   * id: _30490
   */
  if(args.Length() == 2 && args[0]->IsString() && (args[1]->IsNull() || (args[1]->IsObject() && wxNode_wxClientData::AssignableFrom(args[1]->ToObject()->GetConstructorName())))) {
    v8::String::AsciiValue item(args[0]->ToString()); /* type: _14808  */
    wxNode_wxClientData* clientData = args[1]->IsNull() ? NULL : wxNodeObject::unwrap<wxNode_wxClientData>(args[1]->ToObject()); /* type: _59122 * */
    

    int returnVal = self->Append(*item, clientData);

    return scope.Close(v8::Number::New(returnVal));
  }
  
  /*
   * id: _30491
   */
  if(args.Length() == 1 && (args[0]->IsNull() || (args[0]->IsObject() && wxNode_wxArrayString::AssignableFrom(args[0]->ToObject()->GetConstructorName())))) {
    wxNode_wxArrayString* items = args[0]->IsNull() ? NULL : wxNodeObject::unwrap<wxNode_wxArrayString>(args[0]->ToObject()); /* type: _20526  */
    

    int returnVal = self->Append(*items);

    return scope.Close(v8::Number::New(returnVal));
  }
  
  /*
   * id: _30493
   */
  if(args.Length() == 2 && (args[0]->IsNull() || (args[0]->IsObject() && wxNode_wxArrayString::AssignableFrom(args[0]->ToObject()->GetConstructorName()))) && false) {
    wxNode_wxArrayString* items = args[0]->IsNull() ? NULL : wxNodeObject::unwrap<wxNode_wxArrayString>(args[0]->ToObject()); /* type: _20526  */
    wxClientData* clientData; /* type: _63159 ** */
    

    int returnVal = self->Append(*items, &clientData);

    return scope.Close(v8::Number::New(returnVal));
  }
  
  /*
   * id: _30494
   */
  if(args.Length() == 2 && args[0]->IsNumber() && args[1]->IsString()) {
    unsigned int n = (unsigned int)args[0]->ToInt32()->Value(); /* type: _43  */
    wxString* items; /* type: _20525 * */
    

    int returnVal = self->Append(n, items);

    return scope.Close(v8::Number::New(returnVal));
  }
  
  /*
   * id: _30496
   */
  if(args.Length() == 3 && args[0]->IsNumber() && args[1]->IsString() && false) {
    unsigned int n = (unsigned int)args[0]->ToInt32()->Value(); /* type: _43  */
    wxString* items; /* type: _20525 * */
    wxClientData* clientData; /* type: _63159 ** */
    

    int returnVal = self->Append(n, items, &clientData);

    return scope.Close(v8::Number::New(returnVal));
  }
  

  std::ostringstream errStr;
  errStr << "Could not find matching method for arguments (method name: wxItemContainer::Append).\n";                           \
  errStr << "  arg count: " << args.Length() << "\n";
  for(int i = 0; i < args.Length(); i++) {
    v8::String::AsciiValue argStr(args[i]);
    errStr << "  arg[" << i << "]: " << *argStr << "\n";
  }
  return v8::ThrowException(v8::Exception::TypeError(v8::String::New(errStr.str().c_str())));
}

/*static*/ v8::Handle<v8::Value> wxNode_wxItemContainer::_AppendString(const v8::Arguments& args) {
  v8::HandleScope scope;
  wxNode_wxItemContainer* self = unwrap<wxNode_wxItemContainer>(args.This());

  
  /*
   * id: _30497
   */
  if(args.Length() == 1 && args[0]->IsString()) {
    v8::String::AsciiValue item(args[0]->ToString()); /* type: _14808  */
    

    self->AppendString(*item);

    return v8::Undefined();
  }
  

  std::ostringstream errStr;
  errStr << "Could not find matching method for arguments (method name: wxItemContainer::AppendString).\n";                           \
  errStr << "  arg count: " << args.Length() << "\n";
  for(int i = 0; i < args.Length(); i++) {
    v8::String::AsciiValue argStr(args[i]);
    errStr << "  arg[" << i << "]: " << *argStr << "\n";
  }
  return v8::ThrowException(v8::Exception::TypeError(v8::String::New(errStr.str().c_str())));
}

/*static*/ v8::Handle<v8::Value> wxNode_wxItemContainer::_Insert(const v8::Arguments& args) {
  v8::HandleScope scope;
  wxNode_wxItemContainer* self = unwrap<wxNode_wxItemContainer>(args.This());

  
  /*
   * id: _30498
   */
  if(args.Length() == 2 && args[0]->IsString() && args[1]->IsNumber()) {
    v8::String::AsciiValue item(args[0]->ToString()); /* type: _14808  */
    unsigned int pos = (unsigned int)args[1]->ToInt32()->Value(); /* type: _43  */
    

    int returnVal = self->Insert(*item, pos);

    return scope.Close(v8::Number::New(returnVal));
  }
  
  /*
   * id: _30500
   */
  if(args.Length() == 3 && args[0]->IsString() && args[1]->IsNumber() && (args[2]->IsNull() || (args[2]->IsObject() && wxNode_wxClientData::AssignableFrom(args[2]->ToObject()->GetConstructorName())))) {
    v8::String::AsciiValue item(args[0]->ToString()); /* type: _14808  */
    unsigned int pos = (unsigned int)args[1]->ToInt32()->Value(); /* type: _43  */
    wxNode_wxClientData* clientData = args[2]->IsNull() ? NULL : wxNodeObject::unwrap<wxNode_wxClientData>(args[2]->ToObject()); /* type: _59122 * */
    

    int returnVal = self->Insert(*item, pos, clientData);

    return scope.Close(v8::Number::New(returnVal));
  }
  
  /*
   * id: _30501
   */
  if(args.Length() == 2 && (args[0]->IsNull() || (args[0]->IsObject() && wxNode_wxArrayString::AssignableFrom(args[0]->ToObject()->GetConstructorName()))) && args[1]->IsNumber()) {
    wxNode_wxArrayString* items = args[0]->IsNull() ? NULL : wxNodeObject::unwrap<wxNode_wxArrayString>(args[0]->ToObject()); /* type: _20526  */
    unsigned int pos = (unsigned int)args[1]->ToInt32()->Value(); /* type: _43  */
    

    int returnVal = self->Insert(*items, pos);

    return scope.Close(v8::Number::New(returnVal));
  }
  
  /*
   * id: _30503
   */
  if(args.Length() == 3 && (args[0]->IsNull() || (args[0]->IsObject() && wxNode_wxArrayString::AssignableFrom(args[0]->ToObject()->GetConstructorName()))) && args[1]->IsNumber() && false) {
    wxNode_wxArrayString* items = args[0]->IsNull() ? NULL : wxNodeObject::unwrap<wxNode_wxArrayString>(args[0]->ToObject()); /* type: _20526  */
    unsigned int pos = (unsigned int)args[1]->ToInt32()->Value(); /* type: _43  */
    wxClientData* clientData; /* type: _63159 ** */
    

    int returnVal = self->Insert(*items, pos, &clientData);

    return scope.Close(v8::Number::New(returnVal));
  }
  
  /*
   * id: _30504
   */
  if(args.Length() == 3 && args[0]->IsNumber() && args[1]->IsString() && args[2]->IsNumber()) {
    unsigned int n = (unsigned int)args[0]->ToInt32()->Value(); /* type: _43  */
    wxString* items; /* type: _20525 * */
    unsigned int pos = (unsigned int)args[2]->ToInt32()->Value(); /* type: _43  */
    

    int returnVal = self->Insert(n, items, pos);

    return scope.Close(v8::Number::New(returnVal));
  }
  
  /*
   * id: _30506
   */
  if(args.Length() == 4 && args[0]->IsNumber() && args[1]->IsString() && args[2]->IsNumber() && false) {
    unsigned int n = (unsigned int)args[0]->ToInt32()->Value(); /* type: _43  */
    wxString* items; /* type: _20525 * */
    unsigned int pos = (unsigned int)args[2]->ToInt32()->Value(); /* type: _43  */
    wxClientData* clientData; /* type: _63159 ** */
    

    int returnVal = self->Insert(n, items, pos, &clientData);

    return scope.Close(v8::Number::New(returnVal));
  }
  

  std::ostringstream errStr;
  errStr << "Could not find matching method for arguments (method name: wxItemContainer::Insert).\n";                           \
  errStr << "  arg count: " << args.Length() << "\n";
  for(int i = 0; i < args.Length(); i++) {
    v8::String::AsciiValue argStr(args[i]);
    errStr << "  arg[" << i << "]: " << *argStr << "\n";
  }
  return v8::ThrowException(v8::Exception::TypeError(v8::String::New(errStr.str().c_str())));
}

/*static*/ v8::Handle<v8::Value> wxNode_wxItemContainer::_Set(const v8::Arguments& args) {
  v8::HandleScope scope;
  wxNode_wxItemContainer* self = unwrap<wxNode_wxItemContainer>(args.This());

  
  /*
   * id: _30507
   */
  if(args.Length() == 1 && (args[0]->IsNull() || (args[0]->IsObject() && wxNode_wxArrayString::AssignableFrom(args[0]->ToObject()->GetConstructorName())))) {
    wxNode_wxArrayString* items = args[0]->IsNull() ? NULL : wxNodeObject::unwrap<wxNode_wxArrayString>(args[0]->ToObject()); /* type: _20526  */
    

    self->Set(*items);

    return v8::Undefined();
  }
  
  /*
   * id: _30509
   */
  if(args.Length() == 2 && (args[0]->IsNull() || (args[0]->IsObject() && wxNode_wxArrayString::AssignableFrom(args[0]->ToObject()->GetConstructorName()))) && false) {
    wxNode_wxArrayString* items = args[0]->IsNull() ? NULL : wxNodeObject::unwrap<wxNode_wxArrayString>(args[0]->ToObject()); /* type: _20526  */
    wxClientData* clientData; /* type: _63159 ** */
    

    self->Set(*items, &clientData);

    return v8::Undefined();
  }
  
  /*
   * id: _30510
   */
  if(args.Length() == 2 && args[0]->IsNumber() && args[1]->IsString()) {
    unsigned int n = (unsigned int)args[0]->ToInt32()->Value(); /* type: _43  */
    wxString* items; /* type: _20525 * */
    

    self->Set(n, items);

    return v8::Undefined();
  }
  
  /*
   * id: _30512
   */
  if(args.Length() == 3 && args[0]->IsNumber() && args[1]->IsString() && false) {
    unsigned int n = (unsigned int)args[0]->ToInt32()->Value(); /* type: _43  */
    wxString* items; /* type: _20525 * */
    wxClientData* clientData; /* type: _63159 ** */
    

    self->Set(n, items, &clientData);

    return v8::Undefined();
  }
  

  std::ostringstream errStr;
  errStr << "Could not find matching method for arguments (method name: wxItemContainer::Set).\n";                           \
  errStr << "  arg count: " << args.Length() << "\n";
  for(int i = 0; i < args.Length(); i++) {
    v8::String::AsciiValue argStr(args[i]);
    errStr << "  arg[" << i << "]: " << *argStr << "\n";
  }
  return v8::ThrowException(v8::Exception::TypeError(v8::String::New(errStr.str().c_str())));
}

/*static*/ v8::Handle<v8::Value> wxNode_wxItemContainer::_Clear(const v8::Arguments& args) {
  v8::HandleScope scope;
  wxNode_wxItemContainer* self = unwrap<wxNode_wxItemContainer>(args.This());

  
  /*
   * id: _30513
   */
  if(args.Length() == 0) {
    

    self->Clear();

    return v8::Undefined();
  }
  

  std::ostringstream errStr;
  errStr << "Could not find matching method for arguments (method name: wxItemContainer::Clear).\n";                           \
  errStr << "  arg count: " << args.Length() << "\n";
  for(int i = 0; i < args.Length(); i++) {
    v8::String::AsciiValue argStr(args[i]);
    errStr << "  arg[" << i << "]: " << *argStr << "\n";
  }
  return v8::ThrowException(v8::Exception::TypeError(v8::String::New(errStr.str().c_str())));
}

/*static*/ v8::Handle<v8::Value> wxNode_wxItemContainer::_Delete(const v8::Arguments& args) {
  v8::HandleScope scope;
  wxNode_wxItemContainer* self = unwrap<wxNode_wxItemContainer>(args.This());

  
  /*
   * id: _30514
   */
  if(args.Length() == 1 && args[0]->IsNumber()) {
    unsigned int pos = (unsigned int)args[0]->ToInt32()->Value(); /* type: _43  */
    

    self->Delete(pos);

    return v8::Undefined();
  }
  

  std::ostringstream errStr;
  errStr << "Could not find matching method for arguments (method name: wxItemContainer::Delete).\n";                           \
  errStr << "  arg count: " << args.Length() << "\n";
  for(int i = 0; i < args.Length(); i++) {
    v8::String::AsciiValue argStr(args[i]);
    errStr << "  arg[" << i << "]: " << *argStr << "\n";
  }
  return v8::ThrowException(v8::Exception::TypeError(v8::String::New(errStr.str().c_str())));
}

/*static*/ v8::Handle<v8::Value> wxNode_wxItemContainer::_IsSorted(const v8::Arguments& args) {
  v8::HandleScope scope;
  wxNode_wxItemContainer* self = unwrap<wxNode_wxItemContainer>(args.This());

  
  /*
   * id: _30515
   */
  if(args.Length() == 0) {
    

    bool returnVal = self->IsSorted();

    return scope.Close(v8::Boolean::New(returnVal));
  }
  

  std::ostringstream errStr;
  errStr << "Could not find matching method for arguments (method name: wxItemContainer::IsSorted).\n";                           \
  errStr << "  arg count: " << args.Length() << "\n";
  for(int i = 0; i < args.Length(); i++) {
    v8::String::AsciiValue argStr(args[i]);
    errStr << "  arg[" << i << "]: " << *argStr << "\n";
  }
  return v8::ThrowException(v8::Exception::TypeError(v8::String::New(errStr.str().c_str())));
}

/*static*/ v8::Handle<v8::Value> wxNode_wxItemContainer::_SetClientData(const v8::Arguments& args) {
  v8::HandleScope scope;
  wxNode_wxItemContainer* self = unwrap<wxNode_wxItemContainer>(args.This());

  

  std::ostringstream errStr;
  errStr << "Could not find matching method for arguments (method name: wxItemContainer::SetClientData).\n";                           \
  errStr << "  arg count: " << args.Length() << "\n";
  for(int i = 0; i < args.Length(); i++) {
    v8::String::AsciiValue argStr(args[i]);
    errStr << "  arg[" << i << "]: " << *argStr << "\n";
  }
  return v8::ThrowException(v8::Exception::TypeError(v8::String::New(errStr.str().c_str())));
}

/*static*/ v8::Handle<v8::Value> wxNode_wxItemContainer::_GetClientData(const v8::Arguments& args) {
  v8::HandleScope scope;
  wxNode_wxItemContainer* self = unwrap<wxNode_wxItemContainer>(args.This());

  
  /*
   * id: _30517
   */
  if(args.Length() == 1 && args[0]->IsNumber()) {
    unsigned int n = (unsigned int)args[0]->ToInt32()->Value(); /* type: _43  */
    

    self->GetClientData(n);

    return v8::Undefined();
  }
  

  std::ostringstream errStr;
  errStr << "Could not find matching method for arguments (method name: wxItemContainer::GetClientData).\n";                           \
  errStr << "  arg count: " << args.Length() << "\n";
  for(int i = 0; i < args.Length(); i++) {
    v8::String::AsciiValue argStr(args[i]);
    errStr << "  arg[" << i << "]: " << *argStr << "\n";
  }
  return v8::ThrowException(v8::Exception::TypeError(v8::String::New(errStr.str().c_str())));
}

/*static*/ v8::Handle<v8::Value> wxNode_wxItemContainer::_SetClientObject(const v8::Arguments& args) {
  v8::HandleScope scope;
  wxNode_wxItemContainer* self = unwrap<wxNode_wxItemContainer>(args.This());

  
  /*
   * id: _30518
   */
  if(args.Length() == 2 && args[0]->IsNumber() && (args[1]->IsNull() || (args[1]->IsObject() && wxNode_wxClientData::AssignableFrom(args[1]->ToObject()->GetConstructorName())))) {
    unsigned int n = (unsigned int)args[0]->ToInt32()->Value(); /* type: _43  */
    wxNode_wxClientData* clientData = args[1]->IsNull() ? NULL : wxNodeObject::unwrap<wxNode_wxClientData>(args[1]->ToObject()); /* type: _59122 * */
    

    self->SetClientObject(n, clientData);

    return v8::Undefined();
  }
  

  std::ostringstream errStr;
  errStr << "Could not find matching method for arguments (method name: wxItemContainer::SetClientObject).\n";                           \
  errStr << "  arg count: " << args.Length() << "\n";
  for(int i = 0; i < args.Length(); i++) {
    v8::String::AsciiValue argStr(args[i]);
    errStr << "  arg[" << i << "]: " << *argStr << "\n";
  }
  return v8::ThrowException(v8::Exception::TypeError(v8::String::New(errStr.str().c_str())));
}

/*static*/ v8::Handle<v8::Value> wxNode_wxItemContainer::_GetClientObject(const v8::Arguments& args) {
  v8::HandleScope scope;
  wxNode_wxItemContainer* self = unwrap<wxNode_wxItemContainer>(args.This());

  
  /*
   * id: _30519
   */
  if(args.Length() == 1 && args[0]->IsNumber()) {
    unsigned int n = (unsigned int)args[0]->ToInt32()->Value(); /* type: _43  */
    

    wxClientData* returnVal = self->GetClientObject(n);

    
    v8::Local<v8::FunctionTemplate> returnObjFt = v8::FunctionTemplate::New(wxNodeObject::NewFunc);
    returnObjFt->InstanceTemplate()->SetInternalFieldCount(2);
    wxNode_wxClientData::AddMethods(returnObjFt);
    v8::Local<v8::Function> returnObjFn = returnObjFt->GetFunction();
    v8::Handle<v8::Value> returnObjArgs[0];
    v8::Local<v8::Object> returnObj = returnObjFn->CallAsConstructor(0, returnObjArgs)->ToObject();
    returnObj->SetPointerInInternalField(0, returnVal);
    returnObj->SetPointerInInternalField(1, new NodeExEvtHandlerImplWrap(returnObj));
    return scope.Close(returnObj);
  }
  

  std::ostringstream errStr;
  errStr << "Could not find matching method for arguments (method name: wxItemContainer::GetClientObject).\n";                           \
  errStr << "  arg count: " << args.Length() << "\n";
  for(int i = 0; i < args.Length(); i++) {
    v8::String::AsciiValue argStr(args[i]);
    errStr << "  arg[" << i << "]: " << *argStr << "\n";
  }
  return v8::ThrowException(v8::Exception::TypeError(v8::String::New(errStr.str().c_str())));
}

/*static*/ v8::Handle<v8::Value> wxNode_wxItemContainer::_DetachClientObject(const v8::Arguments& args) {
  v8::HandleScope scope;
  wxNode_wxItemContainer* self = unwrap<wxNode_wxItemContainer>(args.This());

  
  /*
   * id: _30520
   */
  if(args.Length() == 1 && args[0]->IsNumber()) {
    unsigned int n = (unsigned int)args[0]->ToInt32()->Value(); /* type: _43  */
    

    wxClientData* returnVal = self->DetachClientObject(n);

    
    v8::Local<v8::FunctionTemplate> returnObjFt = v8::FunctionTemplate::New(wxNodeObject::NewFunc);
    returnObjFt->InstanceTemplate()->SetInternalFieldCount(2);
    wxNode_wxClientData::AddMethods(returnObjFt);
    v8::Local<v8::Function> returnObjFn = returnObjFt->GetFunction();
    v8::Handle<v8::Value> returnObjArgs[0];
    v8::Local<v8::Object> returnObj = returnObjFn->CallAsConstructor(0, returnObjArgs)->ToObject();
    returnObj->SetPointerInInternalField(0, returnVal);
    returnObj->SetPointerInInternalField(1, new NodeExEvtHandlerImplWrap(returnObj));
    return scope.Close(returnObj);
  }
  

  std::ostringstream errStr;
  errStr << "Could not find matching method for arguments (method name: wxItemContainer::DetachClientObject).\n";                           \
  errStr << "  arg count: " << args.Length() << "\n";
  for(int i = 0; i < args.Length(); i++) {
    v8::String::AsciiValue argStr(args[i]);
    errStr << "  arg[" << i << "]: " << *argStr << "\n";
  }
  return v8::ThrowException(v8::Exception::TypeError(v8::String::New(errStr.str().c_str())));
}

/*static*/ v8::Handle<v8::Value> wxNode_wxItemContainer::_GetClientDataType(const v8::Arguments& args) {
  v8::HandleScope scope;
  wxNode_wxItemContainer* self = unwrap<wxNode_wxItemContainer>(args.This());

  
  /*
   * id: _30521
   */
  if(args.Length() == 0) {
    

    int returnVal = (int)self->GetClientDataType();

    return scope.Close(v8::Number::New(returnVal));
  }
  

  std::ostringstream errStr;
  errStr << "Could not find matching method for arguments (method name: wxItemContainer::GetClientDataType).\n";                           \
  errStr << "  arg count: " << args.Length() << "\n";
  for(int i = 0; i < args.Length(); i++) {
    v8::String::AsciiValue argStr(args[i]);
    errStr << "  arg[" << i << "]: " << *argStr << "\n";
  }
  return v8::ThrowException(v8::Exception::TypeError(v8::String::New(errStr.str().c_str())));
}

/*static*/ v8::Handle<v8::Value> wxNode_wxItemContainer::_HasClientData(const v8::Arguments& args) {
  v8::HandleScope scope;
  wxNode_wxItemContainer* self = unwrap<wxNode_wxItemContainer>(args.This());

  
  /*
   * id: _30522
   */
  if(args.Length() == 0) {
    

    bool returnVal = self->HasClientData();

    return scope.Close(v8::Boolean::New(returnVal));
  }
  

  std::ostringstream errStr;
  errStr << "Could not find matching method for arguments (method name: wxItemContainer::HasClientData).\n";                           \
  errStr << "  arg count: " << args.Length() << "\n";
  for(int i = 0; i < args.Length(); i++) {
    v8::String::AsciiValue argStr(args[i]);
    errStr << "  arg[" << i << "]: " << *argStr << "\n";
  }
  return v8::ThrowException(v8::Exception::TypeError(v8::String::New(errStr.str().c_str())));
}

/*static*/ v8::Handle<v8::Value> wxNode_wxItemContainer::_HasClientObjectData(const v8::Arguments& args) {
  v8::HandleScope scope;
  wxNode_wxItemContainer* self = unwrap<wxNode_wxItemContainer>(args.This());

  
  /*
   * id: _30523
   */
  if(args.Length() == 0) {
    

    bool returnVal = self->HasClientObjectData();

    return scope.Close(v8::Boolean::New(returnVal));
  }
  

  std::ostringstream errStr;
  errStr << "Could not find matching method for arguments (method name: wxItemContainer::HasClientObjectData).\n";                           \
  errStr << "  arg count: " << args.Length() << "\n";
  for(int i = 0; i < args.Length(); i++) {
    v8::String::AsciiValue argStr(args[i]);
    errStr << "  arg[" << i << "]: " << *argStr << "\n";
  }
  return v8::ThrowException(v8::Exception::TypeError(v8::String::New(errStr.str().c_str())));
}

/*static*/ v8::Handle<v8::Value> wxNode_wxItemContainer::_HasClientUntypedData(const v8::Arguments& args) {
  v8::HandleScope scope;
  wxNode_wxItemContainer* self = unwrap<wxNode_wxItemContainer>(args.This());

  
  /*
   * id: _30524
   */
  if(args.Length() == 0) {
    

    bool returnVal = self->HasClientUntypedData();

    return scope.Close(v8::Boolean::New(returnVal));
  }
  

  std::ostringstream errStr;
  errStr << "Could not find matching method for arguments (method name: wxItemContainer::HasClientUntypedData).\n";                           \
  errStr << "  arg count: " << args.Length() << "\n";
  for(int i = 0; i < args.Length(); i++) {
    v8::String::AsciiValue argStr(args[i]);
    errStr << "  arg[" << i << "]: " << *argStr << "\n";
  }
  return v8::ThrowException(v8::Exception::TypeError(v8::String::New(errStr.str().c_str())));
}

