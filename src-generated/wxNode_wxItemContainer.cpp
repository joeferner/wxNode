
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

/*static*/ v8::Handle<v8::Value> wxNode_wxItemContainer::New(const wxNode_wxItemContainer* obj) {
  v8::HandleScope scope;

  if(obj == NULL) {
    return scope.Close(v8::Null());
  }
  
  v8::Local<v8::FunctionTemplate> returnObjFt = v8::FunctionTemplate::New(wxNodeObject::NewFunc);
  returnObjFt->InstanceTemplate()->SetInternalFieldCount(2);
  returnObjFt->SetClassName(v8::String::NewSymbol("wxItemContainer"));
  wxNode_wxItemContainer::AddMethods(returnObjFt);

  v8::Local<v8::Function> returnObjFn = returnObjFt->GetFunction();
  v8::Handle<v8::Value> returnObjArgs[0];
  v8::Local<v8::Object> returnObj = returnObjFn->CallAsConstructor(0, returnObjArgs)->ToObject();
  returnObj->SetPointerInInternalField(0, (void*)obj);
  NodeExEvtHandlerImpl* evtHandler = dynamic_cast<NodeExEvtHandlerImpl*>((wxNode_wxItemContainer*)obj);
  returnObj->SetPointerInInternalField(1, evtHandler);

  return scope.Close(returnObj);
}

/*static*/ v8::Handle<v8::Value> wxNode_wxItemContainer::New(const wxItemContainer* obj) {
  v8::HandleScope scope;

  if(obj == NULL) {
    return scope.Close(v8::Null());
  }
  
  v8::Local<v8::FunctionTemplate> returnObjFt = v8::FunctionTemplate::New(wxNodeObject::NewFunc);
  returnObjFt->InstanceTemplate()->SetInternalFieldCount(2);
  returnObjFt->SetClassName(v8::String::NewSymbol("wxItemContainer"));
  wxNode_wxItemContainer::AddMethods(returnObjFt);

  v8::Local<v8::Function> returnObjFn = returnObjFt->GetFunction();
  v8::Handle<v8::Value> returnObjArgs[0];
  v8::Local<v8::Object> returnObj = returnObjFn->CallAsConstructor(0, returnObjArgs)->ToObject();
  returnObj->SetPointerInInternalField(0, (void*)obj);
  returnObj->SetPointerInInternalField(1, new NodeExEvtHandlerImplWrap(returnObj));

  return scope.Close(returnObj);
}

/*static*/ v8::Handle<v8::Value> wxNode_wxItemContainer::NewCopy(const wxItemContainer& obj) {
  return v8::Undefined();
}

/*static*/ bool wxNode_wxItemContainer::AssignableFrom(const v8::Handle<v8::String>& className) {
  v8::String::AsciiValue classNameStr(className);
  return AssignableFrom(*classNameStr);
}

/*static*/ bool wxNode_wxItemContainer::AssignableFrom(const char* className) {
  if(!strcmp("wxItemContainer", className)) { return true; }
  
  if(!strcmp("wxWindowWithItems<wxComboCtrl,wxItemContainer>", className)) { return true; }

  if(!strcmp("wxOwnerDrawnComboBox", className)) { return true; }
  if(!strcmp("wxWindowWithItems<wxHtmlListBox,wxItemContainer>", className)) { return true; }

  if(!strcmp("wxSimpleHtmlListBox", className)) { return true; }
  if(!strcmp("wxWindowWithItems<wxControl,wxItemContainer>", className)) { return true; }

  if(!strcmp("wxControlWithItemsBase", className)) { return true; }

  if(!strcmp("wxControlWithItems", className)) { return true; }

  if(!strcmp("wxChoiceBase", className)) { return true; }

  if(!strcmp("wxChoice", className)) { return true; }

  if(!strcmp("wxComboBox", className)) { return true; }

  if(!strcmp("wxBitmapComboBox", className)) { return true; }
  if(!strcmp("wxDirFilterListCtrl", className)) { return true; }
  if(!strcmp("wxListBoxBase", className)) { return true; }

  if(!strcmp("wxListBox", className)) { return true; }

  if(!strcmp("wxCheckListBoxBase", className)) { return true; }
  if(!strcmp("wxCheckListBox", className)) { return true; }

  if(!strcmp("wxRearrangeList", className)) { return true; }
  if(!strcmp("wxComboBoxBase", className)) { return true; }


  return false;
}

/*static*/ v8::Handle<v8::Value> wxNode_wxItemContainer::_init(const v8::Arguments& args) {
  v8::HandleScope scope;

  

  std::ostringstream errStr;
  errStr << "Could not find matching constructor for arguments (class name: wxItemContainer).\n";
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
   * id: _35681
   */
  if(args.Length() == 1 && args[0]->IsString()) {
    v8::String::AsciiValue item(args[0]->ToString()); /* type: _18997  */
    

    int returnVal = self->Append(*item);

    return scope.Close(v8::Number::New(returnVal));
  }
  
  /*
   * id: _35683
   */
  if(args.Length() == 2 && args[0]->IsString() && (args[1]->IsNull() || (args[1]->IsObject() && wxNode_wxClientData::AssignableFrom(args[1]->ToObject()->GetConstructorName())))) {
    v8::String::AsciiValue item(args[0]->ToString()); /* type: _18997  */
    wxNode_wxClientData* clientData = args[1]->IsNull() ? NULL : wxNodeObject::unwrap<wxNode_wxClientData>(args[1]->ToObject()); /* type: _65309 * */
    

    int returnVal = self->Append(*item, clientData);

    return scope.Close(v8::Number::New(returnVal));
  }
  
  /*
   * id: _35684
   */
  if(args.Length() == 1 && (args[0]->IsNull() || (args[0]->IsObject() && wxNode_wxArrayString::AssignableFrom(args[0]->ToObject()->GetConstructorName())))) {
    wxNode_wxArrayString* items = args[0]->IsNull() ? NULL : wxNodeObject::unwrap<wxNode_wxArrayString>(args[0]->ToObject()); /* type: _25392  */
    

    int returnVal = self->Append(*items);

    return scope.Close(v8::Number::New(returnVal));
  }
  
  /*
   * id: _35686
   */
  if(args.Length() == 2 && (args[0]->IsNull() || (args[0]->IsObject() && wxNode_wxArrayString::AssignableFrom(args[0]->ToObject()->GetConstructorName()))) && false) {
    wxNode_wxArrayString* items = args[0]->IsNull() ? NULL : wxNodeObject::unwrap<wxNode_wxArrayString>(args[0]->ToObject()); /* type: _25392  */
    wxClientData* clientData; /* type: _69469 ** */
    

    int returnVal = self->Append(*items, &clientData);

    return scope.Close(v8::Number::New(returnVal));
  }
  
  /*
   * id: _35687
   */
  if(args.Length() == 2 && args[0]->IsNumber() && args[1]->IsString()) {
    unsigned int n = (unsigned int)args[0]->ToInt32()->Value(); /* type: _62  */
    wxString* items; /* type: _25391 * */
    

    int returnVal = self->Append(n, items);

    return scope.Close(v8::Number::New(returnVal));
  }
  
  /*
   * id: _35689
   */
  if(args.Length() == 3 && args[0]->IsNumber() && args[1]->IsString() && false) {
    unsigned int n = (unsigned int)args[0]->ToInt32()->Value(); /* type: _62  */
    wxString* items; /* type: _25391 * */
    wxClientData* clientData; /* type: _69469 ** */
    

    int returnVal = self->Append(n, items, &clientData);

    return scope.Close(v8::Number::New(returnVal));
  }
  

  std::ostringstream errStr;
  errStr << "Could not find matching method for arguments (method name: wxItemContainer::Append).\n";
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
   * id: _35690
   */
  if(args.Length() == 1 && args[0]->IsString()) {
    v8::String::AsciiValue item(args[0]->ToString()); /* type: _18997  */
    

    self->AppendString(*item);

    return v8::Undefined();
  }
  

  std::ostringstream errStr;
  errStr << "Could not find matching method for arguments (method name: wxItemContainer::AppendString).\n";
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
   * id: _35691
   */
  if(args.Length() == 2 && args[0]->IsString() && args[1]->IsNumber()) {
    v8::String::AsciiValue item(args[0]->ToString()); /* type: _18997  */
    unsigned int pos = (unsigned int)args[1]->ToInt32()->Value(); /* type: _62  */
    

    int returnVal = self->Insert(*item, pos);

    return scope.Close(v8::Number::New(returnVal));
  }
  
  /*
   * id: _35693
   */
  if(args.Length() == 3 && args[0]->IsString() && args[1]->IsNumber() && (args[2]->IsNull() || (args[2]->IsObject() && wxNode_wxClientData::AssignableFrom(args[2]->ToObject()->GetConstructorName())))) {
    v8::String::AsciiValue item(args[0]->ToString()); /* type: _18997  */
    unsigned int pos = (unsigned int)args[1]->ToInt32()->Value(); /* type: _62  */
    wxNode_wxClientData* clientData = args[2]->IsNull() ? NULL : wxNodeObject::unwrap<wxNode_wxClientData>(args[2]->ToObject()); /* type: _65309 * */
    

    int returnVal = self->Insert(*item, pos, clientData);

    return scope.Close(v8::Number::New(returnVal));
  }
  
  /*
   * id: _35694
   */
  if(args.Length() == 2 && (args[0]->IsNull() || (args[0]->IsObject() && wxNode_wxArrayString::AssignableFrom(args[0]->ToObject()->GetConstructorName()))) && args[1]->IsNumber()) {
    wxNode_wxArrayString* items = args[0]->IsNull() ? NULL : wxNodeObject::unwrap<wxNode_wxArrayString>(args[0]->ToObject()); /* type: _25392  */
    unsigned int pos = (unsigned int)args[1]->ToInt32()->Value(); /* type: _62  */
    

    int returnVal = self->Insert(*items, pos);

    return scope.Close(v8::Number::New(returnVal));
  }
  
  /*
   * id: _35696
   */
  if(args.Length() == 3 && (args[0]->IsNull() || (args[0]->IsObject() && wxNode_wxArrayString::AssignableFrom(args[0]->ToObject()->GetConstructorName()))) && args[1]->IsNumber() && false) {
    wxNode_wxArrayString* items = args[0]->IsNull() ? NULL : wxNodeObject::unwrap<wxNode_wxArrayString>(args[0]->ToObject()); /* type: _25392  */
    unsigned int pos = (unsigned int)args[1]->ToInt32()->Value(); /* type: _62  */
    wxClientData* clientData; /* type: _69469 ** */
    

    int returnVal = self->Insert(*items, pos, &clientData);

    return scope.Close(v8::Number::New(returnVal));
  }
  
  /*
   * id: _35697
   */
  if(args.Length() == 3 && args[0]->IsNumber() && args[1]->IsString() && args[2]->IsNumber()) {
    unsigned int n = (unsigned int)args[0]->ToInt32()->Value(); /* type: _62  */
    wxString* items; /* type: _25391 * */
    unsigned int pos = (unsigned int)args[2]->ToInt32()->Value(); /* type: _62  */
    

    int returnVal = self->Insert(n, items, pos);

    return scope.Close(v8::Number::New(returnVal));
  }
  
  /*
   * id: _35699
   */
  if(args.Length() == 4 && args[0]->IsNumber() && args[1]->IsString() && args[2]->IsNumber() && false) {
    unsigned int n = (unsigned int)args[0]->ToInt32()->Value(); /* type: _62  */
    wxString* items; /* type: _25391 * */
    unsigned int pos = (unsigned int)args[2]->ToInt32()->Value(); /* type: _62  */
    wxClientData* clientData; /* type: _69469 ** */
    

    int returnVal = self->Insert(n, items, pos, &clientData);

    return scope.Close(v8::Number::New(returnVal));
  }
  

  std::ostringstream errStr;
  errStr << "Could not find matching method for arguments (method name: wxItemContainer::Insert).\n";
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
   * id: _35700
   */
  if(args.Length() == 1 && (args[0]->IsNull() || (args[0]->IsObject() && wxNode_wxArrayString::AssignableFrom(args[0]->ToObject()->GetConstructorName())))) {
    wxNode_wxArrayString* items = args[0]->IsNull() ? NULL : wxNodeObject::unwrap<wxNode_wxArrayString>(args[0]->ToObject()); /* type: _25392  */
    

    self->Set(*items);

    return v8::Undefined();
  }
  
  /*
   * id: _35702
   */
  if(args.Length() == 2 && (args[0]->IsNull() || (args[0]->IsObject() && wxNode_wxArrayString::AssignableFrom(args[0]->ToObject()->GetConstructorName()))) && false) {
    wxNode_wxArrayString* items = args[0]->IsNull() ? NULL : wxNodeObject::unwrap<wxNode_wxArrayString>(args[0]->ToObject()); /* type: _25392  */
    wxClientData* clientData; /* type: _69469 ** */
    

    self->Set(*items, &clientData);

    return v8::Undefined();
  }
  
  /*
   * id: _35703
   */
  if(args.Length() == 2 && args[0]->IsNumber() && args[1]->IsString()) {
    unsigned int n = (unsigned int)args[0]->ToInt32()->Value(); /* type: _62  */
    wxString* items; /* type: _25391 * */
    

    self->Set(n, items);

    return v8::Undefined();
  }
  
  /*
   * id: _35705
   */
  if(args.Length() == 3 && args[0]->IsNumber() && args[1]->IsString() && false) {
    unsigned int n = (unsigned int)args[0]->ToInt32()->Value(); /* type: _62  */
    wxString* items; /* type: _25391 * */
    wxClientData* clientData; /* type: _69469 ** */
    

    self->Set(n, items, &clientData);

    return v8::Undefined();
  }
  

  std::ostringstream errStr;
  errStr << "Could not find matching method for arguments (method name: wxItemContainer::Set).\n";
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
   * id: _35706
   */
  if(args.Length() == 0) {
    

    self->Clear();

    return v8::Undefined();
  }
  

  std::ostringstream errStr;
  errStr << "Could not find matching method for arguments (method name: wxItemContainer::Clear).\n";
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
   * id: _35707
   */
  if(args.Length() == 1 && args[0]->IsNumber()) {
    unsigned int pos = (unsigned int)args[0]->ToInt32()->Value(); /* type: _62  */
    

    self->Delete(pos);

    return v8::Undefined();
  }
  

  std::ostringstream errStr;
  errStr << "Could not find matching method for arguments (method name: wxItemContainer::Delete).\n";
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
   * id: _35708
   */
  if(args.Length() == 0) {
    

    bool returnVal = self->IsSorted();

    return scope.Close(v8::Boolean::New(returnVal));
  }
  

  std::ostringstream errStr;
  errStr << "Could not find matching method for arguments (method name: wxItemContainer::IsSorted).\n";
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
  errStr << "Could not find matching method for arguments (method name: wxItemContainer::SetClientData).\n";
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
   * id: _35710
   */
  if(args.Length() == 1 && args[0]->IsNumber()) {
    unsigned int n = (unsigned int)args[0]->ToInt32()->Value(); /* type: _62  */
    

    self->GetClientData(n);

    return v8::Undefined();
  }
  

  std::ostringstream errStr;
  errStr << "Could not find matching method for arguments (method name: wxItemContainer::GetClientData).\n";
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
   * id: _35711
   */
  if(args.Length() == 2 && args[0]->IsNumber() && (args[1]->IsNull() || (args[1]->IsObject() && wxNode_wxClientData::AssignableFrom(args[1]->ToObject()->GetConstructorName())))) {
    unsigned int n = (unsigned int)args[0]->ToInt32()->Value(); /* type: _62  */
    wxNode_wxClientData* clientData = args[1]->IsNull() ? NULL : wxNodeObject::unwrap<wxNode_wxClientData>(args[1]->ToObject()); /* type: _65309 * */
    

    self->SetClientObject(n, clientData);

    return v8::Undefined();
  }
  

  std::ostringstream errStr;
  errStr << "Could not find matching method for arguments (method name: wxItemContainer::SetClientObject).\n";
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
   * id: _35712
   */
  if(args.Length() == 1 && args[0]->IsNumber()) {
    unsigned int n = (unsigned int)args[0]->ToInt32()->Value(); /* type: _62  */
    

    wxClientData* returnVal = self->GetClientObject(n);

    return scope.Close(wxNode_wxClientData::New(returnVal));
  }
  

  std::ostringstream errStr;
  errStr << "Could not find matching method for arguments (method name: wxItemContainer::GetClientObject).\n";
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
   * id: _35713
   */
  if(args.Length() == 1 && args[0]->IsNumber()) {
    unsigned int n = (unsigned int)args[0]->ToInt32()->Value(); /* type: _62  */
    

    wxClientData* returnVal = self->DetachClientObject(n);

    return scope.Close(wxNode_wxClientData::New(returnVal));
  }
  

  std::ostringstream errStr;
  errStr << "Could not find matching method for arguments (method name: wxItemContainer::DetachClientObject).\n";
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
   * id: _35714
   */
  if(args.Length() == 0) {
    

    int returnVal = (int)self->GetClientDataType();

    return scope.Close(v8::Number::New(returnVal));
  }
  

  std::ostringstream errStr;
  errStr << "Could not find matching method for arguments (method name: wxItemContainer::GetClientDataType).\n";
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
   * id: _35715
   */
  if(args.Length() == 0) {
    

    bool returnVal = self->HasClientData();

    return scope.Close(v8::Boolean::New(returnVal));
  }
  

  std::ostringstream errStr;
  errStr << "Could not find matching method for arguments (method name: wxItemContainer::HasClientData).\n";
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
   * id: _35716
   */
  if(args.Length() == 0) {
    

    bool returnVal = self->HasClientObjectData();

    return scope.Close(v8::Boolean::New(returnVal));
  }
  

  std::ostringstream errStr;
  errStr << "Could not find matching method for arguments (method name: wxItemContainer::HasClientObjectData).\n";
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
   * id: _35717
   */
  if(args.Length() == 0) {
    

    bool returnVal = self->HasClientUntypedData();

    return scope.Close(v8::Boolean::New(returnVal));
  }
  

  std::ostringstream errStr;
  errStr << "Could not find matching method for arguments (method name: wxItemContainer::HasClientUntypedData).\n";
  errStr << "  arg count: " << args.Length() << "\n";
  for(int i = 0; i < args.Length(); i++) {
    v8::String::AsciiValue argStr(args[i]);
    errStr << "  arg[" << i << "]: " << *argStr << "\n";
  }
  return v8::ThrowException(v8::Exception::TypeError(v8::String::New(errStr.str().c_str())));
}

