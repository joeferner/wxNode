
#include <sstream>
#include "wxNode_wxSizerFlags.h"


/* static */ v8::Persistent<v8::FunctionTemplate> wxNode_wxSizerFlags::s_ct;



wxNode_wxSizerFlags::wxNode_wxSizerFlags(wxNode_wxSizerFlags& arg0)
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
  s_ct->SetClassName(v8::String::NewSymbol("wxSizerFlags"));

  NODE_SET_PROTOTYPE_METHOD(s_ct, "init", _init);
  AddMethods(s_ct);

  target->Set(v8::String::NewSymbol("wxSizerFlags"), s_ct->GetFunction());
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

/*static*/ v8::Handle<v8::Value> wxNode_wxSizerFlags::_init(const v8::Arguments& args) {
  v8::HandleScope scope;

  
  
  /*
   * id: _40666
   */
  if(args.Length() == 1 && (args[0]->IsNull() || args[0]->IsObject())) {
    wxNode_wxSizerFlags* arg0 = args[0]->IsNull() ? NULL : wxNodeObject::unwrap<wxNode_wxSizerFlags>(args[0]->ToObject()); /* type: _58724  */
    

    wxNode_wxSizerFlags *self = new wxNode_wxSizerFlags(*arg0);
    NodeExEvtHandlerImpl* evtHandler = dynamic_cast<NodeExEvtHandlerImpl*>(self);
    self->wrap(args.This(), self, evtHandler);
    return args.This();
  }
  
  /*
   * id: _40667
   */
  if(args.Length() == 1 && args[0]->IsNumber()) {
    int proportion = (int)args[0]->ToInt32()->Value(); /* type: _162  */
    

    wxNode_wxSizerFlags *self = new wxNode_wxSizerFlags(proportion);
    NodeExEvtHandlerImpl* evtHandler = dynamic_cast<NodeExEvtHandlerImpl*>(self);
    self->wrap(args.This(), self, evtHandler);
    return args.This();
  }
  
  /*
   * id: _40667
   */
  if(args.Length() == 0) {
    

    wxNode_wxSizerFlags *self = new wxNode_wxSizerFlags();
    NodeExEvtHandlerImpl* evtHandler = dynamic_cast<NodeExEvtHandlerImpl*>(self);
    self->wrap(args.This(), self, evtHandler);
    return args.This();
  }
  
  

  std::ostringstream errStr;
  errStr << "Could not find matching constructor for arguments (class name: wxSizerFlags).\n";                           \
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
   * id: _40668
   */
  if(args.Length() == 1 && args[0]->IsNumber()) {
    int proportion = (int)args[0]->ToInt32()->Value(); /* type: _162  */
    

    wxSizerFlags returnValTemp = self->Proportion(proportion);

    wxSizerFlags* returnVal = new wxSizerFlags();
    v8::Local<v8::FunctionTemplate> returnObjFt = v8::FunctionTemplate::New(wxNodeObject::NewFunc);
    returnObjFt->InstanceTemplate()->SetInternalFieldCount(2);
    wxNode_wxSizerFlags::AddMethods(returnObjFt);
    v8::Local<v8::Function> returnObjFn = returnObjFt->GetFunction();
    v8::Handle<v8::Value> returnObjArgs[0];
    v8::Local<v8::Object> returnObj = returnObjFn->CallAsConstructor(0, returnObjArgs)->ToObject();
    returnObj->SetPointerInInternalField(0, returnVal);
    returnObj->SetPointerInInternalField(1, new NodeExEvtHandlerImplWrap(returnObj));
    return scope.Close(returnObj);
  }
  

  std::ostringstream errStr;
  errStr << "Could not find matching method for arguments (method name: Proportion).\n";                           \
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
   * id: _40669
   */
  if(args.Length() == 0) {
    

    wxSizerFlags returnValTemp = self->Expand();

    wxSizerFlags* returnVal = new wxSizerFlags();
    v8::Local<v8::FunctionTemplate> returnObjFt = v8::FunctionTemplate::New(wxNodeObject::NewFunc);
    returnObjFt->InstanceTemplate()->SetInternalFieldCount(2);
    wxNode_wxSizerFlags::AddMethods(returnObjFt);
    v8::Local<v8::Function> returnObjFn = returnObjFt->GetFunction();
    v8::Handle<v8::Value> returnObjArgs[0];
    v8::Local<v8::Object> returnObj = returnObjFn->CallAsConstructor(0, returnObjArgs)->ToObject();
    returnObj->SetPointerInInternalField(0, returnVal);
    returnObj->SetPointerInInternalField(1, new NodeExEvtHandlerImplWrap(returnObj));
    return scope.Close(returnObj);
  }
  

  std::ostringstream errStr;
  errStr << "Could not find matching method for arguments (method name: Expand).\n";                           \
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
   * id: _40670
   */
  if(args.Length() == 1 && args[0]->IsNumber()) {
    int alignment = (int)args[0]->ToInt32()->Value(); /* type: _162  */
    

    wxSizerFlags returnValTemp = self->Align(alignment);

    wxSizerFlags* returnVal = new wxSizerFlags();
    v8::Local<v8::FunctionTemplate> returnObjFt = v8::FunctionTemplate::New(wxNodeObject::NewFunc);
    returnObjFt->InstanceTemplate()->SetInternalFieldCount(2);
    wxNode_wxSizerFlags::AddMethods(returnObjFt);
    v8::Local<v8::Function> returnObjFn = returnObjFt->GetFunction();
    v8::Handle<v8::Value> returnObjArgs[0];
    v8::Local<v8::Object> returnObj = returnObjFn->CallAsConstructor(0, returnObjArgs)->ToObject();
    returnObj->SetPointerInInternalField(0, returnVal);
    returnObj->SetPointerInInternalField(1, new NodeExEvtHandlerImplWrap(returnObj));
    return scope.Close(returnObj);
  }
  

  std::ostringstream errStr;
  errStr << "Could not find matching method for arguments (method name: Align).\n";                           \
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
   * id: _40671
   */
  if(args.Length() == 0) {
    

    wxSizerFlags returnValTemp = self->Centre();

    wxSizerFlags* returnVal = new wxSizerFlags();
    v8::Local<v8::FunctionTemplate> returnObjFt = v8::FunctionTemplate::New(wxNodeObject::NewFunc);
    returnObjFt->InstanceTemplate()->SetInternalFieldCount(2);
    wxNode_wxSizerFlags::AddMethods(returnObjFt);
    v8::Local<v8::Function> returnObjFn = returnObjFt->GetFunction();
    v8::Handle<v8::Value> returnObjArgs[0];
    v8::Local<v8::Object> returnObj = returnObjFn->CallAsConstructor(0, returnObjArgs)->ToObject();
    returnObj->SetPointerInInternalField(0, returnVal);
    returnObj->SetPointerInInternalField(1, new NodeExEvtHandlerImplWrap(returnObj));
    return scope.Close(returnObj);
  }
  

  std::ostringstream errStr;
  errStr << "Could not find matching method for arguments (method name: Centre).\n";                           \
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
   * id: _40672
   */
  if(args.Length() == 0) {
    

    wxSizerFlags returnValTemp = self->Center();

    wxSizerFlags* returnVal = new wxSizerFlags();
    v8::Local<v8::FunctionTemplate> returnObjFt = v8::FunctionTemplate::New(wxNodeObject::NewFunc);
    returnObjFt->InstanceTemplate()->SetInternalFieldCount(2);
    wxNode_wxSizerFlags::AddMethods(returnObjFt);
    v8::Local<v8::Function> returnObjFn = returnObjFt->GetFunction();
    v8::Handle<v8::Value> returnObjArgs[0];
    v8::Local<v8::Object> returnObj = returnObjFn->CallAsConstructor(0, returnObjArgs)->ToObject();
    returnObj->SetPointerInInternalField(0, returnVal);
    returnObj->SetPointerInInternalField(1, new NodeExEvtHandlerImplWrap(returnObj));
    return scope.Close(returnObj);
  }
  

  std::ostringstream errStr;
  errStr << "Could not find matching method for arguments (method name: Center).\n";                           \
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
   * id: _40673
   */
  if(args.Length() == 0) {
    

    wxSizerFlags returnValTemp = self->Top();

    wxSizerFlags* returnVal = new wxSizerFlags();
    v8::Local<v8::FunctionTemplate> returnObjFt = v8::FunctionTemplate::New(wxNodeObject::NewFunc);
    returnObjFt->InstanceTemplate()->SetInternalFieldCount(2);
    wxNode_wxSizerFlags::AddMethods(returnObjFt);
    v8::Local<v8::Function> returnObjFn = returnObjFt->GetFunction();
    v8::Handle<v8::Value> returnObjArgs[0];
    v8::Local<v8::Object> returnObj = returnObjFn->CallAsConstructor(0, returnObjArgs)->ToObject();
    returnObj->SetPointerInInternalField(0, returnVal);
    returnObj->SetPointerInInternalField(1, new NodeExEvtHandlerImplWrap(returnObj));
    return scope.Close(returnObj);
  }
  

  std::ostringstream errStr;
  errStr << "Could not find matching method for arguments (method name: Top).\n";                           \
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
   * id: _40674
   */
  if(args.Length() == 0) {
    

    wxSizerFlags returnValTemp = self->Left();

    wxSizerFlags* returnVal = new wxSizerFlags();
    v8::Local<v8::FunctionTemplate> returnObjFt = v8::FunctionTemplate::New(wxNodeObject::NewFunc);
    returnObjFt->InstanceTemplate()->SetInternalFieldCount(2);
    wxNode_wxSizerFlags::AddMethods(returnObjFt);
    v8::Local<v8::Function> returnObjFn = returnObjFt->GetFunction();
    v8::Handle<v8::Value> returnObjArgs[0];
    v8::Local<v8::Object> returnObj = returnObjFn->CallAsConstructor(0, returnObjArgs)->ToObject();
    returnObj->SetPointerInInternalField(0, returnVal);
    returnObj->SetPointerInInternalField(1, new NodeExEvtHandlerImplWrap(returnObj));
    return scope.Close(returnObj);
  }
  

  std::ostringstream errStr;
  errStr << "Could not find matching method for arguments (method name: Left).\n";                           \
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
   * id: _40675
   */
  if(args.Length() == 0) {
    

    wxSizerFlags returnValTemp = self->Right();

    wxSizerFlags* returnVal = new wxSizerFlags();
    v8::Local<v8::FunctionTemplate> returnObjFt = v8::FunctionTemplate::New(wxNodeObject::NewFunc);
    returnObjFt->InstanceTemplate()->SetInternalFieldCount(2);
    wxNode_wxSizerFlags::AddMethods(returnObjFt);
    v8::Local<v8::Function> returnObjFn = returnObjFt->GetFunction();
    v8::Handle<v8::Value> returnObjArgs[0];
    v8::Local<v8::Object> returnObj = returnObjFn->CallAsConstructor(0, returnObjArgs)->ToObject();
    returnObj->SetPointerInInternalField(0, returnVal);
    returnObj->SetPointerInInternalField(1, new NodeExEvtHandlerImplWrap(returnObj));
    return scope.Close(returnObj);
  }
  

  std::ostringstream errStr;
  errStr << "Could not find matching method for arguments (method name: Right).\n";                           \
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
   * id: _40676
   */
  if(args.Length() == 0) {
    

    wxSizerFlags returnValTemp = self->Bottom();

    wxSizerFlags* returnVal = new wxSizerFlags();
    v8::Local<v8::FunctionTemplate> returnObjFt = v8::FunctionTemplate::New(wxNodeObject::NewFunc);
    returnObjFt->InstanceTemplate()->SetInternalFieldCount(2);
    wxNode_wxSizerFlags::AddMethods(returnObjFt);
    v8::Local<v8::Function> returnObjFn = returnObjFt->GetFunction();
    v8::Handle<v8::Value> returnObjArgs[0];
    v8::Local<v8::Object> returnObj = returnObjFn->CallAsConstructor(0, returnObjArgs)->ToObject();
    returnObj->SetPointerInInternalField(0, returnVal);
    returnObj->SetPointerInInternalField(1, new NodeExEvtHandlerImplWrap(returnObj));
    return scope.Close(returnObj);
  }
  

  std::ostringstream errStr;
  errStr << "Could not find matching method for arguments (method name: Bottom).\n";                           \
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
   * id: _40677
   */
  if(args.Length() == 0) {
    

    int returnVal = self->GetDefaultBorder();

    return scope.Close(v8::Number::New(returnVal));
  }
  

  std::ostringstream errStr;
  errStr << "Could not find matching method for arguments (method name: GetDefaultBorder).\n";                           \
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
   * id: _40678
   */
  if(args.Length() == 2 && args[0]->IsNumber() && args[1]->IsNumber()) {
    int direction = (int)args[0]->ToInt32()->Value(); /* type: _162  */
    int borderInPixels = (int)args[1]->ToInt32()->Value(); /* type: _162  */
    

    wxSizerFlags returnValTemp = self->Border(direction, borderInPixels);

    wxSizerFlags* returnVal = new wxSizerFlags();
    v8::Local<v8::FunctionTemplate> returnObjFt = v8::FunctionTemplate::New(wxNodeObject::NewFunc);
    returnObjFt->InstanceTemplate()->SetInternalFieldCount(2);
    wxNode_wxSizerFlags::AddMethods(returnObjFt);
    v8::Local<v8::Function> returnObjFn = returnObjFt->GetFunction();
    v8::Handle<v8::Value> returnObjArgs[0];
    v8::Local<v8::Object> returnObj = returnObjFn->CallAsConstructor(0, returnObjArgs)->ToObject();
    returnObj->SetPointerInInternalField(0, returnVal);
    returnObj->SetPointerInInternalField(1, new NodeExEvtHandlerImplWrap(returnObj));
    return scope.Close(returnObj);
  }
  
  /*
   * id: _40679
   */
  if(args.Length() == 1 && args[0]->IsNumber()) {
    int direction = (int)args[0]->ToInt32()->Value(); /* type: _162  */
    

    wxSizerFlags returnValTemp = self->Border(direction);

    wxSizerFlags* returnVal = new wxSizerFlags();
    v8::Local<v8::FunctionTemplate> returnObjFt = v8::FunctionTemplate::New(wxNodeObject::NewFunc);
    returnObjFt->InstanceTemplate()->SetInternalFieldCount(2);
    wxNode_wxSizerFlags::AddMethods(returnObjFt);
    v8::Local<v8::Function> returnObjFn = returnObjFt->GetFunction();
    v8::Handle<v8::Value> returnObjArgs[0];
    v8::Local<v8::Object> returnObj = returnObjFn->CallAsConstructor(0, returnObjArgs)->ToObject();
    returnObj->SetPointerInInternalField(0, returnVal);
    returnObj->SetPointerInInternalField(1, new NodeExEvtHandlerImplWrap(returnObj));
    return scope.Close(returnObj);
  }
  
  /*
   * id: _40679
   */
  if(args.Length() == 0) {
    

    wxSizerFlags returnValTemp = self->Border();

    wxSizerFlags* returnVal = new wxSizerFlags();
    v8::Local<v8::FunctionTemplate> returnObjFt = v8::FunctionTemplate::New(wxNodeObject::NewFunc);
    returnObjFt->InstanceTemplate()->SetInternalFieldCount(2);
    wxNode_wxSizerFlags::AddMethods(returnObjFt);
    v8::Local<v8::Function> returnObjFn = returnObjFt->GetFunction();
    v8::Handle<v8::Value> returnObjArgs[0];
    v8::Local<v8::Object> returnObj = returnObjFn->CallAsConstructor(0, returnObjArgs)->ToObject();
    returnObj->SetPointerInInternalField(0, returnVal);
    returnObj->SetPointerInInternalField(1, new NodeExEvtHandlerImplWrap(returnObj));
    return scope.Close(returnObj);
  }
  

  std::ostringstream errStr;
  errStr << "Could not find matching method for arguments (method name: Border).\n";                           \
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
   * id: _40680
   */
  if(args.Length() == 1 && args[0]->IsNumber()) {
    int direction = (int)args[0]->ToInt32()->Value(); /* type: _162  */
    

    wxSizerFlags returnValTemp = self->DoubleBorder(direction);

    wxSizerFlags* returnVal = new wxSizerFlags();
    v8::Local<v8::FunctionTemplate> returnObjFt = v8::FunctionTemplate::New(wxNodeObject::NewFunc);
    returnObjFt->InstanceTemplate()->SetInternalFieldCount(2);
    wxNode_wxSizerFlags::AddMethods(returnObjFt);
    v8::Local<v8::Function> returnObjFn = returnObjFt->GetFunction();
    v8::Handle<v8::Value> returnObjArgs[0];
    v8::Local<v8::Object> returnObj = returnObjFn->CallAsConstructor(0, returnObjArgs)->ToObject();
    returnObj->SetPointerInInternalField(0, returnVal);
    returnObj->SetPointerInInternalField(1, new NodeExEvtHandlerImplWrap(returnObj));
    return scope.Close(returnObj);
  }
  
  /*
   * id: _40680
   */
  if(args.Length() == 0) {
    

    wxSizerFlags returnValTemp = self->DoubleBorder();

    wxSizerFlags* returnVal = new wxSizerFlags();
    v8::Local<v8::FunctionTemplate> returnObjFt = v8::FunctionTemplate::New(wxNodeObject::NewFunc);
    returnObjFt->InstanceTemplate()->SetInternalFieldCount(2);
    wxNode_wxSizerFlags::AddMethods(returnObjFt);
    v8::Local<v8::Function> returnObjFn = returnObjFt->GetFunction();
    v8::Handle<v8::Value> returnObjArgs[0];
    v8::Local<v8::Object> returnObj = returnObjFn->CallAsConstructor(0, returnObjArgs)->ToObject();
    returnObj->SetPointerInInternalField(0, returnVal);
    returnObj->SetPointerInInternalField(1, new NodeExEvtHandlerImplWrap(returnObj));
    return scope.Close(returnObj);
  }
  

  std::ostringstream errStr;
  errStr << "Could not find matching method for arguments (method name: DoubleBorder).\n";                           \
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
   * id: _40681
   */
  if(args.Length() == 1 && args[0]->IsNumber()) {
    int direction = (int)args[0]->ToInt32()->Value(); /* type: _162  */
    

    wxSizerFlags returnValTemp = self->TripleBorder(direction);

    wxSizerFlags* returnVal = new wxSizerFlags();
    v8::Local<v8::FunctionTemplate> returnObjFt = v8::FunctionTemplate::New(wxNodeObject::NewFunc);
    returnObjFt->InstanceTemplate()->SetInternalFieldCount(2);
    wxNode_wxSizerFlags::AddMethods(returnObjFt);
    v8::Local<v8::Function> returnObjFn = returnObjFt->GetFunction();
    v8::Handle<v8::Value> returnObjArgs[0];
    v8::Local<v8::Object> returnObj = returnObjFn->CallAsConstructor(0, returnObjArgs)->ToObject();
    returnObj->SetPointerInInternalField(0, returnVal);
    returnObj->SetPointerInInternalField(1, new NodeExEvtHandlerImplWrap(returnObj));
    return scope.Close(returnObj);
  }
  
  /*
   * id: _40681
   */
  if(args.Length() == 0) {
    

    wxSizerFlags returnValTemp = self->TripleBorder();

    wxSizerFlags* returnVal = new wxSizerFlags();
    v8::Local<v8::FunctionTemplate> returnObjFt = v8::FunctionTemplate::New(wxNodeObject::NewFunc);
    returnObjFt->InstanceTemplate()->SetInternalFieldCount(2);
    wxNode_wxSizerFlags::AddMethods(returnObjFt);
    v8::Local<v8::Function> returnObjFn = returnObjFt->GetFunction();
    v8::Handle<v8::Value> returnObjArgs[0];
    v8::Local<v8::Object> returnObj = returnObjFn->CallAsConstructor(0, returnObjArgs)->ToObject();
    returnObj->SetPointerInInternalField(0, returnVal);
    returnObj->SetPointerInInternalField(1, new NodeExEvtHandlerImplWrap(returnObj));
    return scope.Close(returnObj);
  }
  

  std::ostringstream errStr;
  errStr << "Could not find matching method for arguments (method name: TripleBorder).\n";                           \
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
   * id: _40682
   */
  if(args.Length() == 0) {
    

    wxSizerFlags returnValTemp = self->HorzBorder();

    wxSizerFlags* returnVal = new wxSizerFlags();
    v8::Local<v8::FunctionTemplate> returnObjFt = v8::FunctionTemplate::New(wxNodeObject::NewFunc);
    returnObjFt->InstanceTemplate()->SetInternalFieldCount(2);
    wxNode_wxSizerFlags::AddMethods(returnObjFt);
    v8::Local<v8::Function> returnObjFn = returnObjFt->GetFunction();
    v8::Handle<v8::Value> returnObjArgs[0];
    v8::Local<v8::Object> returnObj = returnObjFn->CallAsConstructor(0, returnObjArgs)->ToObject();
    returnObj->SetPointerInInternalField(0, returnVal);
    returnObj->SetPointerInInternalField(1, new NodeExEvtHandlerImplWrap(returnObj));
    return scope.Close(returnObj);
  }
  

  std::ostringstream errStr;
  errStr << "Could not find matching method for arguments (method name: HorzBorder).\n";                           \
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
   * id: _40683
   */
  if(args.Length() == 0) {
    

    wxSizerFlags returnValTemp = self->DoubleHorzBorder();

    wxSizerFlags* returnVal = new wxSizerFlags();
    v8::Local<v8::FunctionTemplate> returnObjFt = v8::FunctionTemplate::New(wxNodeObject::NewFunc);
    returnObjFt->InstanceTemplate()->SetInternalFieldCount(2);
    wxNode_wxSizerFlags::AddMethods(returnObjFt);
    v8::Local<v8::Function> returnObjFn = returnObjFt->GetFunction();
    v8::Handle<v8::Value> returnObjArgs[0];
    v8::Local<v8::Object> returnObj = returnObjFn->CallAsConstructor(0, returnObjArgs)->ToObject();
    returnObj->SetPointerInInternalField(0, returnVal);
    returnObj->SetPointerInInternalField(1, new NodeExEvtHandlerImplWrap(returnObj));
    return scope.Close(returnObj);
  }
  

  std::ostringstream errStr;
  errStr << "Could not find matching method for arguments (method name: DoubleHorzBorder).\n";                           \
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
   * id: _40684
   */
  if(args.Length() == 0) {
    

    wxSizerFlags returnValTemp = self->Shaped();

    wxSizerFlags* returnVal = new wxSizerFlags();
    v8::Local<v8::FunctionTemplate> returnObjFt = v8::FunctionTemplate::New(wxNodeObject::NewFunc);
    returnObjFt->InstanceTemplate()->SetInternalFieldCount(2);
    wxNode_wxSizerFlags::AddMethods(returnObjFt);
    v8::Local<v8::Function> returnObjFn = returnObjFt->GetFunction();
    v8::Handle<v8::Value> returnObjArgs[0];
    v8::Local<v8::Object> returnObj = returnObjFn->CallAsConstructor(0, returnObjArgs)->ToObject();
    returnObj->SetPointerInInternalField(0, returnVal);
    returnObj->SetPointerInInternalField(1, new NodeExEvtHandlerImplWrap(returnObj));
    return scope.Close(returnObj);
  }
  

  std::ostringstream errStr;
  errStr << "Could not find matching method for arguments (method name: Shaped).\n";                           \
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
   * id: _40685
   */
  if(args.Length() == 0) {
    

    wxSizerFlags returnValTemp = self->FixedMinSize();

    wxSizerFlags* returnVal = new wxSizerFlags();
    v8::Local<v8::FunctionTemplate> returnObjFt = v8::FunctionTemplate::New(wxNodeObject::NewFunc);
    returnObjFt->InstanceTemplate()->SetInternalFieldCount(2);
    wxNode_wxSizerFlags::AddMethods(returnObjFt);
    v8::Local<v8::Function> returnObjFn = returnObjFt->GetFunction();
    v8::Handle<v8::Value> returnObjArgs[0];
    v8::Local<v8::Object> returnObj = returnObjFn->CallAsConstructor(0, returnObjArgs)->ToObject();
    returnObj->SetPointerInInternalField(0, returnVal);
    returnObj->SetPointerInInternalField(1, new NodeExEvtHandlerImplWrap(returnObj));
    return scope.Close(returnObj);
  }
  

  std::ostringstream errStr;
  errStr << "Could not find matching method for arguments (method name: FixedMinSize).\n";                           \
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
   * id: _40686
   */
  if(args.Length() == 0) {
    

    wxSizerFlags returnValTemp = self->ReserveSpaceEvenIfHidden();

    wxSizerFlags* returnVal = new wxSizerFlags();
    v8::Local<v8::FunctionTemplate> returnObjFt = v8::FunctionTemplate::New(wxNodeObject::NewFunc);
    returnObjFt->InstanceTemplate()->SetInternalFieldCount(2);
    wxNode_wxSizerFlags::AddMethods(returnObjFt);
    v8::Local<v8::Function> returnObjFn = returnObjFt->GetFunction();
    v8::Handle<v8::Value> returnObjArgs[0];
    v8::Local<v8::Object> returnObj = returnObjFn->CallAsConstructor(0, returnObjArgs)->ToObject();
    returnObj->SetPointerInInternalField(0, returnVal);
    returnObj->SetPointerInInternalField(1, new NodeExEvtHandlerImplWrap(returnObj));
    return scope.Close(returnObj);
  }
  

  std::ostringstream errStr;
  errStr << "Could not find matching method for arguments (method name: ReserveSpaceEvenIfHidden).\n";                           \
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
   * id: _40687
   */
  if(args.Length() == 0) {
    

    int returnVal = self->GetProportion();

    return scope.Close(v8::Number::New(returnVal));
  }
  

  std::ostringstream errStr;
  errStr << "Could not find matching method for arguments (method name: GetProportion).\n";                           \
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
   * id: _40688
   */
  if(args.Length() == 0) {
    

    int returnVal = self->GetFlags();

    return scope.Close(v8::Number::New(returnVal));
  }
  

  std::ostringstream errStr;
  errStr << "Could not find matching method for arguments (method name: GetFlags).\n";                           \
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
   * id: _40689
   */
  if(args.Length() == 0) {
    

    int returnVal = self->GetBorderInPixels();

    return scope.Close(v8::Number::New(returnVal));
  }
  

  std::ostringstream errStr;
  errStr << "Could not find matching method for arguments (method name: GetBorderInPixels).\n";                           \
  errStr << "  arg count: " << args.Length() << "\n";
  for(int i = 0; i < args.Length(); i++) {
    v8::String::AsciiValue argStr(args[i]);
    errStr << "  arg[" << i << "]: " << *argStr << "\n";
  }
  return v8::ThrowException(v8::Exception::TypeError(v8::String::New(errStr.str().c_str())));
}

