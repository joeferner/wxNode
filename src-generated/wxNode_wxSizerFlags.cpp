
#include <sstream>
#include "wxNode_wxSizerFlags.h"


/* static */ v8::Persistent<v8::FunctionTemplate> wxNode_wxSizerFlags::s_ct;



wxNode_wxSizerFlags::wxNode_wxSizerFlags(wxSizerFlags& arg0)
  : wxSizerFlags(arg0)
{

}

wxNode_wxSizerFlags::wxNode_wxSizerFlags(int proportion)
  : wxSizerFlags(proportion)
{

}

wxNode_wxSizerFlags::wxNode_wxSizerFlags()
  : wxSizerFlags()
{

}




/*static*/ void wxNode_wxSizerFlags::Init(v8::Handle<v8::Object> target) {
  v8::HandleScope scope;

  v8::Local<v8::FunctionTemplate> t = v8::FunctionTemplate::New(wxNodeObject::NewFunc);
  s_ct = v8::Persistent<v8::FunctionTemplate>::New(t);
  s_ct->InstanceTemplate()->SetInternalFieldCount(2);
  s_ct->SetClassName(v8::String::NewSymbol("SizerFlags"));

  NODE_SET_PROTOTYPE_METHOD(s_ct, "init", _init);
  AddMethods(s_ct);

  target->Set(v8::String::NewSymbol("SizerFlags"), s_ct->GetFunction());
}

/*static*/ void wxNode_wxSizerFlags::AddMethods(v8::Handle<v8::FunctionTemplate> target) {
  wxNode_wxEvtHandler::AddMethods(target);
  NODE_SET_PROTOTYPE_METHOD(target, "proportion", _Proportion);
  NODE_SET_PROTOTYPE_METHOD(target, "expand", _Expand);
  NODE_SET_PROTOTYPE_METHOD(target, "align", _Align);
  NODE_SET_PROTOTYPE_METHOD(target, "centre", _Centre);
  NODE_SET_PROTOTYPE_METHOD(target, "center", _Center);
  NODE_SET_PROTOTYPE_METHOD(target, "top", _Top);
  NODE_SET_PROTOTYPE_METHOD(target, "left", _Left);
  NODE_SET_PROTOTYPE_METHOD(target, "right", _Right);
  NODE_SET_PROTOTYPE_METHOD(target, "bottom", _Bottom);
  NODE_SET_METHOD(target, "getDefaultBorder", _GetDefaultBorder);
  NODE_SET_PROTOTYPE_METHOD(target, "border", _Border);
  NODE_SET_PROTOTYPE_METHOD(target, "doubleBorder", _DoubleBorder);
  NODE_SET_PROTOTYPE_METHOD(target, "tripleBorder", _TripleBorder);
  NODE_SET_PROTOTYPE_METHOD(target, "horzBorder", _HorzBorder);
  NODE_SET_PROTOTYPE_METHOD(target, "doubleHorzBorder", _DoubleHorzBorder);
  NODE_SET_PROTOTYPE_METHOD(target, "shaped", _Shaped);
  NODE_SET_PROTOTYPE_METHOD(target, "fixedMinSize", _FixedMinSize);
  NODE_SET_PROTOTYPE_METHOD(target, "reserveSpaceEvenIfHidden", _ReserveSpaceEvenIfHidden);
  NODE_SET_PROTOTYPE_METHOD(target, "getProportion", _GetProportion);
  NODE_SET_PROTOTYPE_METHOD(target, "getFlags", _GetFlags);
  NODE_SET_PROTOTYPE_METHOD(target, "getBorderInPixels", _GetBorderInPixels);
  
  
}

/*static*/ v8::Handle<v8::Value> wxNode_wxSizerFlags::New(const wxNode_wxSizerFlags* obj) {
  v8::HandleScope scope;

  if(obj == NULL) {
    return scope.Close(v8::Null());
  }
  
  v8::Local<v8::FunctionTemplate> returnObjFt = v8::FunctionTemplate::New(wxNodeObject::NewFunc);
  returnObjFt->InstanceTemplate()->SetInternalFieldCount(2);
  returnObjFt->SetClassName(v8::String::NewSymbol("SizerFlags"));
  wxNode_wxSizerFlags::AddMethods(returnObjFt);

  v8::Local<v8::Function> returnObjFn = returnObjFt->GetFunction();
  v8::Handle<v8::Value> returnObjArgs[0];
  v8::Local<v8::Object> returnObj = returnObjFn->CallAsConstructor(0, returnObjArgs)->ToObject();
  returnObj->SetPointerInInternalField(0, (void*)obj);
  NodeExEvtHandlerImpl* evtHandler = dynamic_cast<NodeExEvtHandlerImpl*>((wxNode_wxSizerFlags*)obj);
  returnObj->SetPointerInInternalField(1, evtHandler);

  return scope.Close(returnObj);
}

/*static*/ v8::Handle<v8::Value> wxNode_wxSizerFlags::New(const wxSizerFlags* obj) {
  v8::HandleScope scope;

  if(obj == NULL) {
    return scope.Close(v8::Null());
  }
  
  v8::Local<v8::FunctionTemplate> returnObjFt = v8::FunctionTemplate::New(wxNodeObject::NewFunc);
  returnObjFt->InstanceTemplate()->SetInternalFieldCount(2);
  returnObjFt->SetClassName(v8::String::NewSymbol("SizerFlags"));
  wxNode_wxSizerFlags::AddMethods(returnObjFt);

  v8::Local<v8::Function> returnObjFn = returnObjFt->GetFunction();
  v8::Handle<v8::Value> returnObjArgs[0];
  v8::Local<v8::Object> returnObj = returnObjFn->CallAsConstructor(0, returnObjArgs)->ToObject();
  returnObj->SetPointerInInternalField(0, (void*)obj);
  NodeExEvtHandlerImplWrap* wrap = new NodeExEvtHandlerImplWrap(returnObj);
  NodeExEvtHandlerImpl* evtHandler = dynamic_cast<NodeExEvtHandlerImpl*>(wrap);
  returnObj->SetPointerInInternalField(1, evtHandler);

  return scope.Close(returnObj);
}

/*static*/ v8::Handle<v8::Value> wxNode_wxSizerFlags::NewCopy(const wxSizerFlags& obj) {
  v8::HandleScope scope;
  wxNode_wxSizerFlags* returnVal = new wxNode_wxSizerFlags();
  memcpy(dynamic_cast<wxSizerFlags*>(returnVal), &obj, sizeof(wxSizerFlags));
  return scope.Close(New(returnVal));

}

/*static*/ bool wxNode_wxSizerFlags::AssignableFrom(const v8::Handle<v8::String>& className) {
  v8::String::AsciiValue classNameStr(className);
  return AssignableFrom(*classNameStr);
}

/*static*/ bool wxNode_wxSizerFlags::AssignableFrom(const char* className) {
  if(!strcmp("SizerFlags", className)) { return true; }
  

  return false;
}

/*static*/ v8::Handle<v8::Value> wxNode_wxSizerFlags::_init(const v8::Arguments& args) {
  v8::HandleScope scope;

  
  
  /*
   * id: _40880
   */
  if(args.Length() == 1 && (args[0]->IsNull() || (args[0]->IsObject() && wxNode_wxSizerFlags::AssignableFrom(args[0]->ToObject()->GetConstructorName())))) {
    wxNode_wxSizerFlags* arg0 = args[0]->IsNull() ? NULL : wxNodeObject::unwrap<wxNode_wxSizerFlags>(args[0]->ToObject()); /* type: _58914  */
    

    wxNode_wxSizerFlags *self = new wxNode_wxSizerFlags(*arg0);
    NodeExEvtHandlerImpl* evtHandler = dynamic_cast<NodeExEvtHandlerImpl*>(self);
    self->wrap(args.This(), self, evtHandler);
    return args.This();
  }
  
  /*
   * id: _40881
   */
  if(args.Length() == 1 && args[0]->IsNumber()) {
    int proportion = (int)args[0]->ToInt32()->Value(); /* type: _165  */
    

    wxNode_wxSizerFlags *self = new wxNode_wxSizerFlags(proportion);
    NodeExEvtHandlerImpl* evtHandler = dynamic_cast<NodeExEvtHandlerImpl*>(self);
    self->wrap(args.This(), self, evtHandler);
    return args.This();
  }
  
  /*
   * id: _40881
   */
  if(args.Length() == 0) {
    

    wxNode_wxSizerFlags *self = new wxNode_wxSizerFlags();
    NodeExEvtHandlerImpl* evtHandler = dynamic_cast<NodeExEvtHandlerImpl*>(self);
    self->wrap(args.This(), self, evtHandler);
    return args.This();
  }
  
  

  std::ostringstream errStr;
  errStr << "Could not find matching constructor for arguments (class name: wxSizerFlags).\n";
  errStr << "  arg count: " << args.Length() << "\n";
  for(int i = 0; i < args.Length(); i++) {
    v8::String::AsciiValue argStr(args[i]);
    errStr << "  arg[" << i << "]: " << *argStr << "\n";
  }
  return v8::ThrowException(v8::Exception::TypeError(v8::String::New(errStr.str().c_str())));
}


/*static*/ v8::Handle<v8::Value> wxNode_wxSizerFlags::_Proportion(const v8::Arguments& args) {
  v8::HandleScope scope;
  wxNode_wxSizerFlags* self = unwrap<wxNode_wxSizerFlags>(args.This());

  
  /*
   * id: _40882
   */
  if(args.Length() == 1 && args[0]->IsNumber()) {
    int proportion = (int)args[0]->ToInt32()->Value(); /* type: _165  */
    

    wxSizerFlags returnVal = self->Proportion(proportion);

    return scope.Close(wxNode_wxSizerFlags::NewCopy(returnVal));
  }
  

  std::ostringstream errStr;
  errStr << "Could not find matching method for arguments (method name: wxSizerFlags::Proportion).\n";
  errStr << "  arg count: " << args.Length() << "\n";
  for(int i = 0; i < args.Length(); i++) {
    v8::String::AsciiValue argStr(args[i]);
    errStr << "  arg[" << i << "]: " << *argStr << "\n";
  }
  return v8::ThrowException(v8::Exception::TypeError(v8::String::New(errStr.str().c_str())));
}

/*static*/ v8::Handle<v8::Value> wxNode_wxSizerFlags::_Expand(const v8::Arguments& args) {
  v8::HandleScope scope;
  wxNode_wxSizerFlags* self = unwrap<wxNode_wxSizerFlags>(args.This());

  
  /*
   * id: _40883
   */
  if(args.Length() == 0) {
    

    wxSizerFlags returnVal = self->Expand();

    return scope.Close(wxNode_wxSizerFlags::NewCopy(returnVal));
  }
  

  std::ostringstream errStr;
  errStr << "Could not find matching method for arguments (method name: wxSizerFlags::Expand).\n";
  errStr << "  arg count: " << args.Length() << "\n";
  for(int i = 0; i < args.Length(); i++) {
    v8::String::AsciiValue argStr(args[i]);
    errStr << "  arg[" << i << "]: " << *argStr << "\n";
  }
  return v8::ThrowException(v8::Exception::TypeError(v8::String::New(errStr.str().c_str())));
}

/*static*/ v8::Handle<v8::Value> wxNode_wxSizerFlags::_Align(const v8::Arguments& args) {
  v8::HandleScope scope;
  wxNode_wxSizerFlags* self = unwrap<wxNode_wxSizerFlags>(args.This());

  
  /*
   * id: _40884
   */
  if(args.Length() == 1 && args[0]->IsNumber()) {
    int alignment = (int)args[0]->ToInt32()->Value(); /* type: _165  */
    

    wxSizerFlags returnVal = self->Align(alignment);

    return scope.Close(wxNode_wxSizerFlags::NewCopy(returnVal));
  }
  

  std::ostringstream errStr;
  errStr << "Could not find matching method for arguments (method name: wxSizerFlags::Align).\n";
  errStr << "  arg count: " << args.Length() << "\n";
  for(int i = 0; i < args.Length(); i++) {
    v8::String::AsciiValue argStr(args[i]);
    errStr << "  arg[" << i << "]: " << *argStr << "\n";
  }
  return v8::ThrowException(v8::Exception::TypeError(v8::String::New(errStr.str().c_str())));
}

/*static*/ v8::Handle<v8::Value> wxNode_wxSizerFlags::_Centre(const v8::Arguments& args) {
  v8::HandleScope scope;
  wxNode_wxSizerFlags* self = unwrap<wxNode_wxSizerFlags>(args.This());

  
  /*
   * id: _40885
   */
  if(args.Length() == 0) {
    

    wxSizerFlags returnVal = self->Centre();

    return scope.Close(wxNode_wxSizerFlags::NewCopy(returnVal));
  }
  

  std::ostringstream errStr;
  errStr << "Could not find matching method for arguments (method name: wxSizerFlags::Centre).\n";
  errStr << "  arg count: " << args.Length() << "\n";
  for(int i = 0; i < args.Length(); i++) {
    v8::String::AsciiValue argStr(args[i]);
    errStr << "  arg[" << i << "]: " << *argStr << "\n";
  }
  return v8::ThrowException(v8::Exception::TypeError(v8::String::New(errStr.str().c_str())));
}

/*static*/ v8::Handle<v8::Value> wxNode_wxSizerFlags::_Center(const v8::Arguments& args) {
  v8::HandleScope scope;
  wxNode_wxSizerFlags* self = unwrap<wxNode_wxSizerFlags>(args.This());

  
  /*
   * id: _40886
   */
  if(args.Length() == 0) {
    

    wxSizerFlags returnVal = self->Center();

    return scope.Close(wxNode_wxSizerFlags::NewCopy(returnVal));
  }
  

  std::ostringstream errStr;
  errStr << "Could not find matching method for arguments (method name: wxSizerFlags::Center).\n";
  errStr << "  arg count: " << args.Length() << "\n";
  for(int i = 0; i < args.Length(); i++) {
    v8::String::AsciiValue argStr(args[i]);
    errStr << "  arg[" << i << "]: " << *argStr << "\n";
  }
  return v8::ThrowException(v8::Exception::TypeError(v8::String::New(errStr.str().c_str())));
}

/*static*/ v8::Handle<v8::Value> wxNode_wxSizerFlags::_Top(const v8::Arguments& args) {
  v8::HandleScope scope;
  wxNode_wxSizerFlags* self = unwrap<wxNode_wxSizerFlags>(args.This());

  
  /*
   * id: _40887
   */
  if(args.Length() == 0) {
    

    wxSizerFlags returnVal = self->Top();

    return scope.Close(wxNode_wxSizerFlags::NewCopy(returnVal));
  }
  

  std::ostringstream errStr;
  errStr << "Could not find matching method for arguments (method name: wxSizerFlags::Top).\n";
  errStr << "  arg count: " << args.Length() << "\n";
  for(int i = 0; i < args.Length(); i++) {
    v8::String::AsciiValue argStr(args[i]);
    errStr << "  arg[" << i << "]: " << *argStr << "\n";
  }
  return v8::ThrowException(v8::Exception::TypeError(v8::String::New(errStr.str().c_str())));
}

/*static*/ v8::Handle<v8::Value> wxNode_wxSizerFlags::_Left(const v8::Arguments& args) {
  v8::HandleScope scope;
  wxNode_wxSizerFlags* self = unwrap<wxNode_wxSizerFlags>(args.This());

  
  /*
   * id: _40888
   */
  if(args.Length() == 0) {
    

    wxSizerFlags returnVal = self->Left();

    return scope.Close(wxNode_wxSizerFlags::NewCopy(returnVal));
  }
  

  std::ostringstream errStr;
  errStr << "Could not find matching method for arguments (method name: wxSizerFlags::Left).\n";
  errStr << "  arg count: " << args.Length() << "\n";
  for(int i = 0; i < args.Length(); i++) {
    v8::String::AsciiValue argStr(args[i]);
    errStr << "  arg[" << i << "]: " << *argStr << "\n";
  }
  return v8::ThrowException(v8::Exception::TypeError(v8::String::New(errStr.str().c_str())));
}

/*static*/ v8::Handle<v8::Value> wxNode_wxSizerFlags::_Right(const v8::Arguments& args) {
  v8::HandleScope scope;
  wxNode_wxSizerFlags* self = unwrap<wxNode_wxSizerFlags>(args.This());

  
  /*
   * id: _40889
   */
  if(args.Length() == 0) {
    

    wxSizerFlags returnVal = self->Right();

    return scope.Close(wxNode_wxSizerFlags::NewCopy(returnVal));
  }
  

  std::ostringstream errStr;
  errStr << "Could not find matching method for arguments (method name: wxSizerFlags::Right).\n";
  errStr << "  arg count: " << args.Length() << "\n";
  for(int i = 0; i < args.Length(); i++) {
    v8::String::AsciiValue argStr(args[i]);
    errStr << "  arg[" << i << "]: " << *argStr << "\n";
  }
  return v8::ThrowException(v8::Exception::TypeError(v8::String::New(errStr.str().c_str())));
}

/*static*/ v8::Handle<v8::Value> wxNode_wxSizerFlags::_Bottom(const v8::Arguments& args) {
  v8::HandleScope scope;
  wxNode_wxSizerFlags* self = unwrap<wxNode_wxSizerFlags>(args.This());

  
  /*
   * id: _40890
   */
  if(args.Length() == 0) {
    

    wxSizerFlags returnVal = self->Bottom();

    return scope.Close(wxNode_wxSizerFlags::NewCopy(returnVal));
  }
  

  std::ostringstream errStr;
  errStr << "Could not find matching method for arguments (method name: wxSizerFlags::Bottom).\n";
  errStr << "  arg count: " << args.Length() << "\n";
  for(int i = 0; i < args.Length(); i++) {
    v8::String::AsciiValue argStr(args[i]);
    errStr << "  arg[" << i << "]: " << *argStr << "\n";
  }
  return v8::ThrowException(v8::Exception::TypeError(v8::String::New(errStr.str().c_str())));
}

/*static*/ v8::Handle<v8::Value> wxNode_wxSizerFlags::_GetDefaultBorder(const v8::Arguments& args) {
  v8::HandleScope scope;
  wxNode_wxSizerFlags* self = unwrap<wxNode_wxSizerFlags>(args.This());

  
  /*
   * id: _40891
   */
  if(args.Length() == 0) {
    

    int returnVal = wxSizerFlags::GetDefaultBorder();

    return scope.Close(v8::Number::New(returnVal));
  }
  

  std::ostringstream errStr;
  errStr << "Could not find matching method for arguments (method name: wxSizerFlags::GetDefaultBorder).\n";
  errStr << "  arg count: " << args.Length() << "\n";
  for(int i = 0; i < args.Length(); i++) {
    v8::String::AsciiValue argStr(args[i]);
    errStr << "  arg[" << i << "]: " << *argStr << "\n";
  }
  return v8::ThrowException(v8::Exception::TypeError(v8::String::New(errStr.str().c_str())));
}

/*static*/ v8::Handle<v8::Value> wxNode_wxSizerFlags::_Border(const v8::Arguments& args) {
  v8::HandleScope scope;
  wxNode_wxSizerFlags* self = unwrap<wxNode_wxSizerFlags>(args.This());

  
  /*
   * id: _40892
   */
  if(args.Length() == 2 && args[0]->IsNumber() && args[1]->IsNumber()) {
    int direction = (int)args[0]->ToInt32()->Value(); /* type: _165  */
    int borderInPixels = (int)args[1]->ToInt32()->Value(); /* type: _165  */
    

    wxSizerFlags returnVal = self->Border(direction, borderInPixels);

    return scope.Close(wxNode_wxSizerFlags::NewCopy(returnVal));
  }
  
  /*
   * id: _40893
   */
  if(args.Length() == 1 && args[0]->IsNumber()) {
    int direction = (int)args[0]->ToInt32()->Value(); /* type: _165  */
    

    wxSizerFlags returnVal = self->Border(direction);

    return scope.Close(wxNode_wxSizerFlags::NewCopy(returnVal));
  }
  
  /*
   * id: _40893
   */
  if(args.Length() == 0) {
    

    wxSizerFlags returnVal = self->Border();

    return scope.Close(wxNode_wxSizerFlags::NewCopy(returnVal));
  }
  

  std::ostringstream errStr;
  errStr << "Could not find matching method for arguments (method name: wxSizerFlags::Border).\n";
  errStr << "  arg count: " << args.Length() << "\n";
  for(int i = 0; i < args.Length(); i++) {
    v8::String::AsciiValue argStr(args[i]);
    errStr << "  arg[" << i << "]: " << *argStr << "\n";
  }
  return v8::ThrowException(v8::Exception::TypeError(v8::String::New(errStr.str().c_str())));
}

/*static*/ v8::Handle<v8::Value> wxNode_wxSizerFlags::_DoubleBorder(const v8::Arguments& args) {
  v8::HandleScope scope;
  wxNode_wxSizerFlags* self = unwrap<wxNode_wxSizerFlags>(args.This());

  
  /*
   * id: _40894
   */
  if(args.Length() == 1 && args[0]->IsNumber()) {
    int direction = (int)args[0]->ToInt32()->Value(); /* type: _165  */
    

    wxSizerFlags returnVal = self->DoubleBorder(direction);

    return scope.Close(wxNode_wxSizerFlags::NewCopy(returnVal));
  }
  
  /*
   * id: _40894
   */
  if(args.Length() == 0) {
    

    wxSizerFlags returnVal = self->DoubleBorder();

    return scope.Close(wxNode_wxSizerFlags::NewCopy(returnVal));
  }
  

  std::ostringstream errStr;
  errStr << "Could not find matching method for arguments (method name: wxSizerFlags::DoubleBorder).\n";
  errStr << "  arg count: " << args.Length() << "\n";
  for(int i = 0; i < args.Length(); i++) {
    v8::String::AsciiValue argStr(args[i]);
    errStr << "  arg[" << i << "]: " << *argStr << "\n";
  }
  return v8::ThrowException(v8::Exception::TypeError(v8::String::New(errStr.str().c_str())));
}

/*static*/ v8::Handle<v8::Value> wxNode_wxSizerFlags::_TripleBorder(const v8::Arguments& args) {
  v8::HandleScope scope;
  wxNode_wxSizerFlags* self = unwrap<wxNode_wxSizerFlags>(args.This());

  
  /*
   * id: _40895
   */
  if(args.Length() == 1 && args[0]->IsNumber()) {
    int direction = (int)args[0]->ToInt32()->Value(); /* type: _165  */
    

    wxSizerFlags returnVal = self->TripleBorder(direction);

    return scope.Close(wxNode_wxSizerFlags::NewCopy(returnVal));
  }
  
  /*
   * id: _40895
   */
  if(args.Length() == 0) {
    

    wxSizerFlags returnVal = self->TripleBorder();

    return scope.Close(wxNode_wxSizerFlags::NewCopy(returnVal));
  }
  

  std::ostringstream errStr;
  errStr << "Could not find matching method for arguments (method name: wxSizerFlags::TripleBorder).\n";
  errStr << "  arg count: " << args.Length() << "\n";
  for(int i = 0; i < args.Length(); i++) {
    v8::String::AsciiValue argStr(args[i]);
    errStr << "  arg[" << i << "]: " << *argStr << "\n";
  }
  return v8::ThrowException(v8::Exception::TypeError(v8::String::New(errStr.str().c_str())));
}

/*static*/ v8::Handle<v8::Value> wxNode_wxSizerFlags::_HorzBorder(const v8::Arguments& args) {
  v8::HandleScope scope;
  wxNode_wxSizerFlags* self = unwrap<wxNode_wxSizerFlags>(args.This());

  
  /*
   * id: _40896
   */
  if(args.Length() == 0) {
    

    wxSizerFlags returnVal = self->HorzBorder();

    return scope.Close(wxNode_wxSizerFlags::NewCopy(returnVal));
  }
  

  std::ostringstream errStr;
  errStr << "Could not find matching method for arguments (method name: wxSizerFlags::HorzBorder).\n";
  errStr << "  arg count: " << args.Length() << "\n";
  for(int i = 0; i < args.Length(); i++) {
    v8::String::AsciiValue argStr(args[i]);
    errStr << "  arg[" << i << "]: " << *argStr << "\n";
  }
  return v8::ThrowException(v8::Exception::TypeError(v8::String::New(errStr.str().c_str())));
}

/*static*/ v8::Handle<v8::Value> wxNode_wxSizerFlags::_DoubleHorzBorder(const v8::Arguments& args) {
  v8::HandleScope scope;
  wxNode_wxSizerFlags* self = unwrap<wxNode_wxSizerFlags>(args.This());

  
  /*
   * id: _40897
   */
  if(args.Length() == 0) {
    

    wxSizerFlags returnVal = self->DoubleHorzBorder();

    return scope.Close(wxNode_wxSizerFlags::NewCopy(returnVal));
  }
  

  std::ostringstream errStr;
  errStr << "Could not find matching method for arguments (method name: wxSizerFlags::DoubleHorzBorder).\n";
  errStr << "  arg count: " << args.Length() << "\n";
  for(int i = 0; i < args.Length(); i++) {
    v8::String::AsciiValue argStr(args[i]);
    errStr << "  arg[" << i << "]: " << *argStr << "\n";
  }
  return v8::ThrowException(v8::Exception::TypeError(v8::String::New(errStr.str().c_str())));
}

/*static*/ v8::Handle<v8::Value> wxNode_wxSizerFlags::_Shaped(const v8::Arguments& args) {
  v8::HandleScope scope;
  wxNode_wxSizerFlags* self = unwrap<wxNode_wxSizerFlags>(args.This());

  
  /*
   * id: _40898
   */
  if(args.Length() == 0) {
    

    wxSizerFlags returnVal = self->Shaped();

    return scope.Close(wxNode_wxSizerFlags::NewCopy(returnVal));
  }
  

  std::ostringstream errStr;
  errStr << "Could not find matching method for arguments (method name: wxSizerFlags::Shaped).\n";
  errStr << "  arg count: " << args.Length() << "\n";
  for(int i = 0; i < args.Length(); i++) {
    v8::String::AsciiValue argStr(args[i]);
    errStr << "  arg[" << i << "]: " << *argStr << "\n";
  }
  return v8::ThrowException(v8::Exception::TypeError(v8::String::New(errStr.str().c_str())));
}

/*static*/ v8::Handle<v8::Value> wxNode_wxSizerFlags::_FixedMinSize(const v8::Arguments& args) {
  v8::HandleScope scope;
  wxNode_wxSizerFlags* self = unwrap<wxNode_wxSizerFlags>(args.This());

  
  /*
   * id: _40899
   */
  if(args.Length() == 0) {
    

    wxSizerFlags returnVal = self->FixedMinSize();

    return scope.Close(wxNode_wxSizerFlags::NewCopy(returnVal));
  }
  

  std::ostringstream errStr;
  errStr << "Could not find matching method for arguments (method name: wxSizerFlags::FixedMinSize).\n";
  errStr << "  arg count: " << args.Length() << "\n";
  for(int i = 0; i < args.Length(); i++) {
    v8::String::AsciiValue argStr(args[i]);
    errStr << "  arg[" << i << "]: " << *argStr << "\n";
  }
  return v8::ThrowException(v8::Exception::TypeError(v8::String::New(errStr.str().c_str())));
}

/*static*/ v8::Handle<v8::Value> wxNode_wxSizerFlags::_ReserveSpaceEvenIfHidden(const v8::Arguments& args) {
  v8::HandleScope scope;
  wxNode_wxSizerFlags* self = unwrap<wxNode_wxSizerFlags>(args.This());

  
  /*
   * id: _40900
   */
  if(args.Length() == 0) {
    

    wxSizerFlags returnVal = self->ReserveSpaceEvenIfHidden();

    return scope.Close(wxNode_wxSizerFlags::NewCopy(returnVal));
  }
  

  std::ostringstream errStr;
  errStr << "Could not find matching method for arguments (method name: wxSizerFlags::ReserveSpaceEvenIfHidden).\n";
  errStr << "  arg count: " << args.Length() << "\n";
  for(int i = 0; i < args.Length(); i++) {
    v8::String::AsciiValue argStr(args[i]);
    errStr << "  arg[" << i << "]: " << *argStr << "\n";
  }
  return v8::ThrowException(v8::Exception::TypeError(v8::String::New(errStr.str().c_str())));
}

/*static*/ v8::Handle<v8::Value> wxNode_wxSizerFlags::_GetProportion(const v8::Arguments& args) {
  v8::HandleScope scope;
  wxNode_wxSizerFlags* self = unwrap<wxNode_wxSizerFlags>(args.This());

  
  /*
   * id: _40901
   */
  if(args.Length() == 0) {
    

    int returnVal = self->GetProportion();

    return scope.Close(v8::Number::New(returnVal));
  }
  

  std::ostringstream errStr;
  errStr << "Could not find matching method for arguments (method name: wxSizerFlags::GetProportion).\n";
  errStr << "  arg count: " << args.Length() << "\n";
  for(int i = 0; i < args.Length(); i++) {
    v8::String::AsciiValue argStr(args[i]);
    errStr << "  arg[" << i << "]: " << *argStr << "\n";
  }
  return v8::ThrowException(v8::Exception::TypeError(v8::String::New(errStr.str().c_str())));
}

/*static*/ v8::Handle<v8::Value> wxNode_wxSizerFlags::_GetFlags(const v8::Arguments& args) {
  v8::HandleScope scope;
  wxNode_wxSizerFlags* self = unwrap<wxNode_wxSizerFlags>(args.This());

  
  /*
   * id: _40902
   */
  if(args.Length() == 0) {
    

    int returnVal = self->GetFlags();

    return scope.Close(v8::Number::New(returnVal));
  }
  

  std::ostringstream errStr;
  errStr << "Could not find matching method for arguments (method name: wxSizerFlags::GetFlags).\n";
  errStr << "  arg count: " << args.Length() << "\n";
  for(int i = 0; i < args.Length(); i++) {
    v8::String::AsciiValue argStr(args[i]);
    errStr << "  arg[" << i << "]: " << *argStr << "\n";
  }
  return v8::ThrowException(v8::Exception::TypeError(v8::String::New(errStr.str().c_str())));
}

/*static*/ v8::Handle<v8::Value> wxNode_wxSizerFlags::_GetBorderInPixels(const v8::Arguments& args) {
  v8::HandleScope scope;
  wxNode_wxSizerFlags* self = unwrap<wxNode_wxSizerFlags>(args.This());

  
  /*
   * id: _40903
   */
  if(args.Length() == 0) {
    

    int returnVal = self->GetBorderInPixels();

    return scope.Close(v8::Number::New(returnVal));
  }
  

  std::ostringstream errStr;
  errStr << "Could not find matching method for arguments (method name: wxSizerFlags::GetBorderInPixels).\n";
  errStr << "  arg count: " << args.Length() << "\n";
  for(int i = 0; i < args.Length(); i++) {
    v8::String::AsciiValue argStr(args[i]);
    errStr << "  arg[" << i << "]: " << *argStr << "\n";
  }
  return v8::ThrowException(v8::Exception::TypeError(v8::String::New(errStr.str().c_str())));
}



