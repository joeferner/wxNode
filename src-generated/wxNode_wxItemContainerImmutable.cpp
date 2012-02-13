
#include <sstream>
#include "wxNode_wxItemContainerImmutable.h"
#include "wxNode_wxArrayString.h"


/* static */ v8::Persistent<v8::FunctionTemplate> wxNode_wxItemContainerImmutable::s_ct;




/*static*/ void wxNode_wxItemContainerImmutable::Init(v8::Handle<v8::Object> target) {
  v8::HandleScope scope;

  v8::Local<v8::FunctionTemplate> t = v8::FunctionTemplate::New(wxNodeObject::NewFunc);
  s_ct = v8::Persistent<v8::FunctionTemplate>::New(t);
  s_ct->InstanceTemplate()->SetInternalFieldCount(2);
  s_ct->SetClassName(v8::String::NewSymbol("ItemContainerImmutable"));

  NODE_SET_PROTOTYPE_METHOD(s_ct, "init", _init);
  AddMethods(s_ct);

  target->Set(v8::String::NewSymbol("ItemContainerImmutable"), s_ct->GetFunction());
}

/*static*/ void wxNode_wxItemContainerImmutable::AddMethods(v8::Handle<v8::FunctionTemplate> target) {
  wxNode_wxEvtHandler::AddMethods(target);
  NODE_SET_PROTOTYPE_METHOD(target, "getCount", _GetCount);
  NODE_SET_PROTOTYPE_METHOD(target, "isEmpty", _IsEmpty);
  NODE_SET_PROTOTYPE_METHOD(target, "getString", _GetString);
  NODE_SET_PROTOTYPE_METHOD(target, "getStrings", _GetStrings);
  NODE_SET_PROTOTYPE_METHOD(target, "setString", _SetString);
  NODE_SET_PROTOTYPE_METHOD(target, "findString", _FindString);
  NODE_SET_PROTOTYPE_METHOD(target, "setSelection", _SetSelection);
  NODE_SET_PROTOTYPE_METHOD(target, "getSelection", _GetSelection);
  NODE_SET_PROTOTYPE_METHOD(target, "setStringSelection", _SetStringSelection);
  NODE_SET_PROTOTYPE_METHOD(target, "getStringSelection", _GetStringSelection);
  NODE_SET_PROTOTYPE_METHOD(target, "select", _Select);
  
  
}

/*static*/ v8::Handle<v8::Value> wxNode_wxItemContainerImmutable::New(const wxNode_wxItemContainerImmutable* obj) {
  v8::HandleScope scope;

  if(obj == NULL) {
    return scope.Close(v8::Null());
  }
  
  v8::Local<v8::FunctionTemplate> returnObjFt = v8::FunctionTemplate::New(wxNodeObject::NewFunc);
  returnObjFt->InstanceTemplate()->SetInternalFieldCount(2);
  returnObjFt->SetClassName(v8::String::NewSymbol("ItemContainerImmutable"));
  wxNode_wxItemContainerImmutable::AddMethods(returnObjFt);

  v8::Local<v8::Function> returnObjFn = returnObjFt->GetFunction();
  v8::Handle<v8::Value> returnObjArgs[0];
  v8::Local<v8::Object> returnObj = returnObjFn->CallAsConstructor(0, returnObjArgs)->ToObject();
  returnObj->SetPointerInInternalField(0, (void*)obj);
  NodeExEvtHandlerImpl* evtHandler = dynamic_cast<NodeExEvtHandlerImpl*>((wxNode_wxItemContainerImmutable*)obj);
  returnObj->SetPointerInInternalField(1, evtHandler);

  return scope.Close(returnObj);
}

/*static*/ v8::Handle<v8::Value> wxNode_wxItemContainerImmutable::New(const wxItemContainerImmutable* obj) {
  v8::HandleScope scope;

  if(obj == NULL) {
    return scope.Close(v8::Null());
  }
  
  v8::Local<v8::FunctionTemplate> returnObjFt = v8::FunctionTemplate::New(wxNodeObject::NewFunc);
  returnObjFt->InstanceTemplate()->SetInternalFieldCount(2);
  returnObjFt->SetClassName(v8::String::NewSymbol("ItemContainerImmutable"));
  wxNode_wxItemContainerImmutable::AddMethods(returnObjFt);

  v8::Local<v8::Function> returnObjFn = returnObjFt->GetFunction();
  v8::Handle<v8::Value> returnObjArgs[0];
  v8::Local<v8::Object> returnObj = returnObjFn->CallAsConstructor(0, returnObjArgs)->ToObject();
  returnObj->SetPointerInInternalField(0, (void*)obj);
  NodeExEvtHandlerImplWrap* wrap = new NodeExEvtHandlerImplWrap(returnObj);
  NodeExEvtHandlerImpl* evtHandler = dynamic_cast<NodeExEvtHandlerImpl*>(wrap);
  returnObj->SetPointerInInternalField(1, evtHandler);

  return scope.Close(returnObj);
}

/*static*/ v8::Handle<v8::Value> wxNode_wxItemContainerImmutable::NewCopy(const wxItemContainerImmutable& obj) {
  return v8::Undefined();
}

/*static*/ bool wxNode_wxItemContainerImmutable::AssignableFrom(const v8::Handle<v8::String>& className) {
  v8::String::AsciiValue classNameStr(className);
  return AssignableFrom(*classNameStr);
}

/*static*/ bool wxNode_wxItemContainerImmutable::AssignableFrom(const char* className) {
  if(!strcmp("ItemContainerImmutable", className)) { return true; }
  
  if(!strcmp("RadioBoxBase", className)) { return true; }

  if(!strcmp("RadioBox", className)) { return true; }
  if(!strcmp("ItemContainer", className)) { return true; }

  if(!strcmp("WindowWithItems<wxComboCtrl,wxItemContainer>", className)) { return true; }

  if(!strcmp("OwnerDrawnComboBox", className)) { return true; }
  if(!strcmp("WindowWithItems<wxHtmlListBox,wxItemContainer>", className)) { return true; }

  if(!strcmp("SimpleHtmlListBox", className)) { return true; }
  if(!strcmp("WindowWithItems<wxControl,wxItemContainer>", className)) { return true; }

  if(!strcmp("ControlWithItemsBase", className)) { return true; }

  if(!strcmp("ControlWithItems", className)) { return true; }

  if(!strcmp("ChoiceBase", className)) { return true; }

  if(!strcmp("Choice", className)) { return true; }

  if(!strcmp("ComboBox", className)) { return true; }

  if(!strcmp("BitmapComboBox", className)) { return true; }
  if(!strcmp("DirFilterListCtrl", className)) { return true; }
  if(!strcmp("ListBoxBase", className)) { return true; }

  if(!strcmp("ListBox", className)) { return true; }

  if(!strcmp("CheckListBoxBase", className)) { return true; }
  if(!strcmp("CheckListBox", className)) { return true; }

  if(!strcmp("RearrangeList", className)) { return true; }
  if(!strcmp("ComboBoxBase", className)) { return true; }


  return false;
}

/*static*/ v8::Handle<v8::Value> wxNode_wxItemContainerImmutable::_init(const v8::Arguments& args) {
  v8::HandleScope scope;

  

  std::ostringstream errStr;
  errStr << "Could not find matching constructor for arguments (class name: wxItemContainerImmutable).\n";
  errStr << "  arg count: " << args.Length() << "\n";
  for(int i = 0; i < args.Length(); i++) {
    v8::String::AsciiValue argStr(args[i]);
    errStr << "  arg[" << i << "]: " << *argStr << "\n";
  }
  return v8::ThrowException(v8::Exception::TypeError(v8::String::New(errStr.str().c_str())));
}


/*static*/ v8::Handle<v8::Value> wxNode_wxItemContainerImmutable::_GetCount(const v8::Arguments& args) {
  v8::HandleScope scope;
  wxNode_wxItemContainerImmutable* self = unwrap<wxNode_wxItemContainerImmutable>(args.This());

  
  /*
   * id: _52541
   */
  if(args.Length() == 0) {
    

    int returnVal = self->GetCount();

    return scope.Close(v8::Number::New(returnVal));
  }
  

  std::ostringstream errStr;
  errStr << "Could not find matching method for arguments (method name: wxItemContainerImmutable::GetCount).\n";
  errStr << "  arg count: " << args.Length() << "\n";
  for(int i = 0; i < args.Length(); i++) {
    v8::String::AsciiValue argStr(args[i]);
    errStr << "  arg[" << i << "]: " << *argStr << "\n";
  }
  return v8::ThrowException(v8::Exception::TypeError(v8::String::New(errStr.str().c_str())));
}

/*static*/ v8::Handle<v8::Value> wxNode_wxItemContainerImmutable::_IsEmpty(const v8::Arguments& args) {
  v8::HandleScope scope;
  wxNode_wxItemContainerImmutable* self = unwrap<wxNode_wxItemContainerImmutable>(args.This());

  
  /*
   * id: _52542
   */
  if(args.Length() == 0) {
    

    bool returnVal = self->IsEmpty();

    return scope.Close(v8::Boolean::New(returnVal));
  }
  

  std::ostringstream errStr;
  errStr << "Could not find matching method for arguments (method name: wxItemContainerImmutable::IsEmpty).\n";
  errStr << "  arg count: " << args.Length() << "\n";
  for(int i = 0; i < args.Length(); i++) {
    v8::String::AsciiValue argStr(args[i]);
    errStr << "  arg[" << i << "]: " << *argStr << "\n";
  }
  return v8::ThrowException(v8::Exception::TypeError(v8::String::New(errStr.str().c_str())));
}

/*static*/ v8::Handle<v8::Value> wxNode_wxItemContainerImmutable::_GetString(const v8::Arguments& args) {
  v8::HandleScope scope;
  wxNode_wxItemContainerImmutable* self = unwrap<wxNode_wxItemContainerImmutable>(args.This());

  
  /*
   * id: _52543
   */
  if(args.Length() == 1 && args[0]->IsNumber()) {
    unsigned int n = (unsigned int)args[0]->ToInt32()->Value(); /* type: _44  */
    

    wxString returnVal = self->GetString(n);

    return scope.Close(v8::String::New(returnVal.mb_str()));
  }
  

  std::ostringstream errStr;
  errStr << "Could not find matching method for arguments (method name: wxItemContainerImmutable::GetString).\n";
  errStr << "  arg count: " << args.Length() << "\n";
  for(int i = 0; i < args.Length(); i++) {
    v8::String::AsciiValue argStr(args[i]);
    errStr << "  arg[" << i << "]: " << *argStr << "\n";
  }
  return v8::ThrowException(v8::Exception::TypeError(v8::String::New(errStr.str().c_str())));
}

/*static*/ v8::Handle<v8::Value> wxNode_wxItemContainerImmutable::_GetStrings(const v8::Arguments& args) {
  v8::HandleScope scope;
  wxNode_wxItemContainerImmutable* self = unwrap<wxNode_wxItemContainerImmutable>(args.This());

  
  /*
   * id: _52544
   */
  if(args.Length() == 0) {
    

    wxArrayString returnVal = self->GetStrings();

    return scope.Close(wxNode_wxArrayString::NewCopy(returnVal));
  }
  

  std::ostringstream errStr;
  errStr << "Could not find matching method for arguments (method name: wxItemContainerImmutable::GetStrings).\n";
  errStr << "  arg count: " << args.Length() << "\n";
  for(int i = 0; i < args.Length(); i++) {
    v8::String::AsciiValue argStr(args[i]);
    errStr << "  arg[" << i << "]: " << *argStr << "\n";
  }
  return v8::ThrowException(v8::Exception::TypeError(v8::String::New(errStr.str().c_str())));
}

/*static*/ v8::Handle<v8::Value> wxNode_wxItemContainerImmutable::_SetString(const v8::Arguments& args) {
  v8::HandleScope scope;
  wxNode_wxItemContainerImmutable* self = unwrap<wxNode_wxItemContainerImmutable>(args.This());

  
  /*
   * id: _52545
   */
  if(args.Length() == 2 && args[0]->IsNumber() && args[1]->IsString()) {
    unsigned int n = (unsigned int)args[0]->ToInt32()->Value(); /* type: _44  */
    v8::String::AsciiValue s(args[1]->ToString()); /* type: _14975  */
    

    self->SetString(n, *s);

    return v8::Undefined();
  }
  

  std::ostringstream errStr;
  errStr << "Could not find matching method for arguments (method name: wxItemContainerImmutable::SetString).\n";
  errStr << "  arg count: " << args.Length() << "\n";
  for(int i = 0; i < args.Length(); i++) {
    v8::String::AsciiValue argStr(args[i]);
    errStr << "  arg[" << i << "]: " << *argStr << "\n";
  }
  return v8::ThrowException(v8::Exception::TypeError(v8::String::New(errStr.str().c_str())));
}

/*static*/ v8::Handle<v8::Value> wxNode_wxItemContainerImmutable::_FindString(const v8::Arguments& args) {
  v8::HandleScope scope;
  wxNode_wxItemContainerImmutable* self = unwrap<wxNode_wxItemContainerImmutable>(args.This());

  
  /*
   * id: _52546
   */
  if(args.Length() == 2 && args[0]->IsString() && args[1]->IsBoolean()) {
    v8::String::AsciiValue s(args[0]->ToString()); /* type: _14975  */
    bool bCase = args[1]->ToBoolean()->Value(); /* type: _14830  */
    

    int returnVal = self->FindString(*s, bCase);

    return scope.Close(v8::Number::New(returnVal));
  }
  
  /*
   * id: _52546
   */
  if(args.Length() == 1 && args[0]->IsString()) {
    v8::String::AsciiValue s(args[0]->ToString()); /* type: _14975  */
    

    int returnVal = self->FindString(*s);

    return scope.Close(v8::Number::New(returnVal));
  }
  

  std::ostringstream errStr;
  errStr << "Could not find matching method for arguments (method name: wxItemContainerImmutable::FindString).\n";
  errStr << "  arg count: " << args.Length() << "\n";
  for(int i = 0; i < args.Length(); i++) {
    v8::String::AsciiValue argStr(args[i]);
    errStr << "  arg[" << i << "]: " << *argStr << "\n";
  }
  return v8::ThrowException(v8::Exception::TypeError(v8::String::New(errStr.str().c_str())));
}

/*static*/ v8::Handle<v8::Value> wxNode_wxItemContainerImmutable::_SetSelection(const v8::Arguments& args) {
  v8::HandleScope scope;
  wxNode_wxItemContainerImmutable* self = unwrap<wxNode_wxItemContainerImmutable>(args.This());

  
  /*
   * id: _52547
   */
  if(args.Length() == 1 && args[0]->IsNumber()) {
    int n = (int)args[0]->ToInt32()->Value(); /* type: _165  */
    

    self->SetSelection(n);

    return v8::Undefined();
  }
  

  std::ostringstream errStr;
  errStr << "Could not find matching method for arguments (method name: wxItemContainerImmutable::SetSelection).\n";
  errStr << "  arg count: " << args.Length() << "\n";
  for(int i = 0; i < args.Length(); i++) {
    v8::String::AsciiValue argStr(args[i]);
    errStr << "  arg[" << i << "]: " << *argStr << "\n";
  }
  return v8::ThrowException(v8::Exception::TypeError(v8::String::New(errStr.str().c_str())));
}

/*static*/ v8::Handle<v8::Value> wxNode_wxItemContainerImmutable::_GetSelection(const v8::Arguments& args) {
  v8::HandleScope scope;
  wxNode_wxItemContainerImmutable* self = unwrap<wxNode_wxItemContainerImmutable>(args.This());

  
  /*
   * id: _52548
   */
  if(args.Length() == 0) {
    

    int returnVal = self->GetSelection();

    return scope.Close(v8::Number::New(returnVal));
  }
  

  std::ostringstream errStr;
  errStr << "Could not find matching method for arguments (method name: wxItemContainerImmutable::GetSelection).\n";
  errStr << "  arg count: " << args.Length() << "\n";
  for(int i = 0; i < args.Length(); i++) {
    v8::String::AsciiValue argStr(args[i]);
    errStr << "  arg[" << i << "]: " << *argStr << "\n";
  }
  return v8::ThrowException(v8::Exception::TypeError(v8::String::New(errStr.str().c_str())));
}

/*static*/ v8::Handle<v8::Value> wxNode_wxItemContainerImmutable::_SetStringSelection(const v8::Arguments& args) {
  v8::HandleScope scope;
  wxNode_wxItemContainerImmutable* self = unwrap<wxNode_wxItemContainerImmutable>(args.This());

  
  /*
   * id: _52549
   */
  if(args.Length() == 1 && args[0]->IsString()) {
    v8::String::AsciiValue s(args[0]->ToString()); /* type: _14975  */
    

    bool returnVal = self->SetStringSelection(*s);

    return scope.Close(v8::Boolean::New(returnVal));
  }
  

  std::ostringstream errStr;
  errStr << "Could not find matching method for arguments (method name: wxItemContainerImmutable::SetStringSelection).\n";
  errStr << "  arg count: " << args.Length() << "\n";
  for(int i = 0; i < args.Length(); i++) {
    v8::String::AsciiValue argStr(args[i]);
    errStr << "  arg[" << i << "]: " << *argStr << "\n";
  }
  return v8::ThrowException(v8::Exception::TypeError(v8::String::New(errStr.str().c_str())));
}

/*static*/ v8::Handle<v8::Value> wxNode_wxItemContainerImmutable::_GetStringSelection(const v8::Arguments& args) {
  v8::HandleScope scope;
  wxNode_wxItemContainerImmutable* self = unwrap<wxNode_wxItemContainerImmutable>(args.This());

  
  /*
   * id: _52550
   */
  if(args.Length() == 0) {
    

    wxString returnVal = self->GetStringSelection();

    return scope.Close(v8::String::New(returnVal.mb_str()));
  }
  

  std::ostringstream errStr;
  errStr << "Could not find matching method for arguments (method name: wxItemContainerImmutable::GetStringSelection).\n";
  errStr << "  arg count: " << args.Length() << "\n";
  for(int i = 0; i < args.Length(); i++) {
    v8::String::AsciiValue argStr(args[i]);
    errStr << "  arg[" << i << "]: " << *argStr << "\n";
  }
  return v8::ThrowException(v8::Exception::TypeError(v8::String::New(errStr.str().c_str())));
}

/*static*/ v8::Handle<v8::Value> wxNode_wxItemContainerImmutable::_Select(const v8::Arguments& args) {
  v8::HandleScope scope;
  wxNode_wxItemContainerImmutable* self = unwrap<wxNode_wxItemContainerImmutable>(args.This());

  
  /*
   * id: _52551
   */
  if(args.Length() == 1 && args[0]->IsNumber()) {
    int n = (int)args[0]->ToInt32()->Value(); /* type: _165  */
    

    self->Select(n);

    return v8::Undefined();
  }
  

  std::ostringstream errStr;
  errStr << "Could not find matching method for arguments (method name: wxItemContainerImmutable::Select).\n";
  errStr << "  arg count: " << args.Length() << "\n";
  for(int i = 0; i < args.Length(); i++) {
    v8::String::AsciiValue argStr(args[i]);
    errStr << "  arg[" << i << "]: " << *argStr << "\n";
  }
  return v8::ThrowException(v8::Exception::TypeError(v8::String::New(errStr.str().c_str())));
}



