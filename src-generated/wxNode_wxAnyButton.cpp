
#include <sstream>
#include "wxNode_wxAnyButton.h"
#include "wxNode_wxEvtHandler.h"
#include "wxNode_wxControl.h"
#include "wxNode_wxBitmap.h"
#include "wxNode_wxSize.h"


/* static */ v8::Persistent<v8::FunctionTemplate> wxNode_wxAnyButton::s_ct;



wxNode_wxAnyButton::wxNode_wxAnyButton()
  : wxAnyButton()
{

}




/*static*/ void wxNode_wxAnyButton::Init(v8::Handle<v8::Object> target) {
  v8::HandleScope scope;

  v8::Local<v8::FunctionTemplate> t = v8::FunctionTemplate::New(wxNodeObject::NewFunc);
  s_ct = v8::Persistent<v8::FunctionTemplate>::New(t);
  s_ct->InstanceTemplate()->SetInternalFieldCount(2);
  s_ct->SetClassName(v8::String::NewSymbol("wxAnyButton"));

  NODE_SET_PROTOTYPE_METHOD(s_ct, "init", _init);
  AddMethods(s_ct);

  target->Set(v8::String::NewSymbol("wxAnyButton"), s_ct->GetFunction());
}

/*static*/ void wxNode_wxAnyButton::AddMethods(v8::Handle<v8::FunctionTemplate> target) {
  wxNode_wxControl::AddMethods(target);
  NODE_SET_PROTOTYPE_METHOD(target, "setBitmap", _SetBitmap);
  NODE_SET_PROTOTYPE_METHOD(target, "getBitmap", _GetBitmap);
  NODE_SET_PROTOTYPE_METHOD(target, "setBitmapLabel", _SetBitmapLabel);
  NODE_SET_PROTOTYPE_METHOD(target, "setBitmapPressed", _SetBitmapPressed);
  NODE_SET_PROTOTYPE_METHOD(target, "setBitmapDisabled", _SetBitmapDisabled);
  NODE_SET_PROTOTYPE_METHOD(target, "setBitmapCurrent", _SetBitmapCurrent);
  NODE_SET_PROTOTYPE_METHOD(target, "setBitmapFocus", _SetBitmapFocus);
  NODE_SET_PROTOTYPE_METHOD(target, "getBitmapLabel", _GetBitmapLabel);
  NODE_SET_PROTOTYPE_METHOD(target, "getBitmapPressed", _GetBitmapPressed);
  NODE_SET_PROTOTYPE_METHOD(target, "getBitmapDisabled", _GetBitmapDisabled);
  NODE_SET_PROTOTYPE_METHOD(target, "getBitmapCurrent", _GetBitmapCurrent);
  NODE_SET_PROTOTYPE_METHOD(target, "getBitmapFocus", _GetBitmapFocus);
  NODE_SET_PROTOTYPE_METHOD(target, "setBitmapMargins", _SetBitmapMargins);
  NODE_SET_PROTOTYPE_METHOD(target, "getBitmapMargins", _GetBitmapMargins);
  NODE_SET_PROTOTYPE_METHOD(target, "setBitmapPosition", _SetBitmapPosition);
  NODE_SET_PROTOTYPE_METHOD(target, "shouldInheritColours", _ShouldInheritColours);
  NODE_SET_PROTOTYPE_METHOD(target, "setImageLabel", _SetImageLabel);
  NODE_SET_PROTOTYPE_METHOD(target, "setImageMargins", _SetImageMargins);
  NODE_SET_PROTOTYPE_METHOD(target, "getBitmapSelected", _GetBitmapSelected);
  NODE_SET_PROTOTYPE_METHOD(target, "getBitmapHover", _GetBitmapHover);
  NODE_SET_PROTOTYPE_METHOD(target, "setBitmapSelected", _SetBitmapSelected);
  NODE_SET_PROTOTYPE_METHOD(target, "setBitmapHover", _SetBitmapHover);
  NODE_SET_PROTOTYPE_METHOD(target, "dontShowLabel", _DontShowLabel);
  NODE_SET_PROTOTYPE_METHOD(target, "showsLabel", _ShowsLabel);
  
}

/*static*/ v8::Handle<v8::Value> wxNode_wxAnyButton::_init(const v8::Arguments& args) {
  v8::HandleScope scope;

  
  
  /*
   * id: _32396
   */
  if(args.Length() == 0) {
    

    wxNode_wxAnyButton *self = new wxNode_wxAnyButton();
    NodeExEvtHandlerImpl* evtHandler = dynamic_cast<NodeExEvtHandlerImpl*>(self);
    self->wrap(args.This(), self, evtHandler);
    return args.This();
  }
  
  

  std::ostringstream errStr;
  errStr << "Could not find matching constructor for arguments (class name: wxAnyButton).\n";                           \
  errStr << "  arg count: " << args.Length() << "\n";
  for(int i = 0; i < args.Length(); i++) {
    v8::String::AsciiValue argStr(args[i]);
    errStr << "  arg[" << i << "]: " << *argStr << "\n";
  }
  return v8::ThrowException(v8::Exception::TypeError(v8::String::New(errStr.str().c_str())));
}


/*static*/ v8::Handle<v8::Value> wxNode_wxAnyButton::_SetBitmap(const v8::Arguments& args) {
  v8::HandleScope scope;
  wxNode_wxAnyButton* self = unwrap<wxNode_wxAnyButton>(args.This());

  
  /*
   * id: _37217
   */
  if(args.Length() == 2 && (args[0]->IsNull() || args[0]->IsObject()) && args[1]->IsNumber()) {
    wxNode_wxBitmap* bitmap = args[0]->IsNull() ? NULL : wxNodeObject::unwrap<wxNode_wxBitmap>(args[0]->ToObject()); /* type: _15508  */
    wxDirection dir; /* type: _10177  */
    

    self->SetBitmap(*bitmap, dir);

    return v8::Undefined();
  }
  
  /*
   * id: _37217
   */
  if(args.Length() == 1 && (args[0]->IsNull() || args[0]->IsObject())) {
    wxNode_wxBitmap* bitmap = args[0]->IsNull() ? NULL : wxNodeObject::unwrap<wxNode_wxBitmap>(args[0]->ToObject()); /* type: _15508  */
    

    self->SetBitmap(*bitmap);

    return v8::Undefined();
  }
  

  std::ostringstream errStr;
  errStr << "Could not find matching method for arguments (method name: SetBitmap).\n";                           \
  errStr << "  arg count: " << args.Length() << "\n";
  for(int i = 0; i < args.Length(); i++) {
    v8::String::AsciiValue argStr(args[i]);
    errStr << "  arg[" << i << "]: " << *argStr << "\n";
  }
  return v8::ThrowException(v8::Exception::TypeError(v8::String::New(errStr.str().c_str())));
}

/*static*/ v8::Handle<v8::Value> wxNode_wxAnyButton::_GetBitmap(const v8::Arguments& args) {
  v8::HandleScope scope;
  wxNode_wxAnyButton* self = unwrap<wxNode_wxAnyButton>(args.This());

  
  /*
   * id: _37218
   */
  if(args.Length() == 0) {
    

    wxBitmap returnValTemp = self->GetBitmap();

    wxBitmap* returnVal = new wxBitmap();
    v8::Local<v8::FunctionTemplate> returnObjFt = v8::FunctionTemplate::New(wxNodeObject::NewFunc);
    returnObjFt->InstanceTemplate()->SetInternalFieldCount(2);
    wxNode_wxBitmap::AddMethods(returnObjFt);
    v8::Local<v8::Function> returnObjFn = returnObjFt->GetFunction();
    v8::Handle<v8::Value> returnObjArgs[0];
    v8::Local<v8::Object> returnObj = returnObjFn->CallAsConstructor(0, returnObjArgs)->ToObject();
    returnObj->SetPointerInInternalField(0, returnVal);
    returnObj->SetPointerInInternalField(1, new NodeExEvtHandlerImplWrap(returnObj));
    return scope.Close(returnObj);
  }
  

  std::ostringstream errStr;
  errStr << "Could not find matching method for arguments (method name: GetBitmap).\n";                           \
  errStr << "  arg count: " << args.Length() << "\n";
  for(int i = 0; i < args.Length(); i++) {
    v8::String::AsciiValue argStr(args[i]);
    errStr << "  arg[" << i << "]: " << *argStr << "\n";
  }
  return v8::ThrowException(v8::Exception::TypeError(v8::String::New(errStr.str().c_str())));
}

/*static*/ v8::Handle<v8::Value> wxNode_wxAnyButton::_SetBitmapLabel(const v8::Arguments& args) {
  v8::HandleScope scope;
  wxNode_wxAnyButton* self = unwrap<wxNode_wxAnyButton>(args.This());

  
  /*
   * id: _37219
   */
  if(args.Length() == 1 && (args[0]->IsNull() || args[0]->IsObject())) {
    wxNode_wxBitmap* bitmap = args[0]->IsNull() ? NULL : wxNodeObject::unwrap<wxNode_wxBitmap>(args[0]->ToObject()); /* type: _15508  */
    

    self->SetBitmapLabel(*bitmap);

    return v8::Undefined();
  }
  

  std::ostringstream errStr;
  errStr << "Could not find matching method for arguments (method name: SetBitmapLabel).\n";                           \
  errStr << "  arg count: " << args.Length() << "\n";
  for(int i = 0; i < args.Length(); i++) {
    v8::String::AsciiValue argStr(args[i]);
    errStr << "  arg[" << i << "]: " << *argStr << "\n";
  }
  return v8::ThrowException(v8::Exception::TypeError(v8::String::New(errStr.str().c_str())));
}

/*static*/ v8::Handle<v8::Value> wxNode_wxAnyButton::_SetBitmapPressed(const v8::Arguments& args) {
  v8::HandleScope scope;
  wxNode_wxAnyButton* self = unwrap<wxNode_wxAnyButton>(args.This());

  
  /*
   * id: _37220
   */
  if(args.Length() == 1 && (args[0]->IsNull() || args[0]->IsObject())) {
    wxNode_wxBitmap* bitmap = args[0]->IsNull() ? NULL : wxNodeObject::unwrap<wxNode_wxBitmap>(args[0]->ToObject()); /* type: _15508  */
    

    self->SetBitmapPressed(*bitmap);

    return v8::Undefined();
  }
  

  std::ostringstream errStr;
  errStr << "Could not find matching method for arguments (method name: SetBitmapPressed).\n";                           \
  errStr << "  arg count: " << args.Length() << "\n";
  for(int i = 0; i < args.Length(); i++) {
    v8::String::AsciiValue argStr(args[i]);
    errStr << "  arg[" << i << "]: " << *argStr << "\n";
  }
  return v8::ThrowException(v8::Exception::TypeError(v8::String::New(errStr.str().c_str())));
}

/*static*/ v8::Handle<v8::Value> wxNode_wxAnyButton::_SetBitmapDisabled(const v8::Arguments& args) {
  v8::HandleScope scope;
  wxNode_wxAnyButton* self = unwrap<wxNode_wxAnyButton>(args.This());

  
  /*
   * id: _37221
   */
  if(args.Length() == 1 && (args[0]->IsNull() || args[0]->IsObject())) {
    wxNode_wxBitmap* bitmap = args[0]->IsNull() ? NULL : wxNodeObject::unwrap<wxNode_wxBitmap>(args[0]->ToObject()); /* type: _15508  */
    

    self->SetBitmapDisabled(*bitmap);

    return v8::Undefined();
  }
  

  std::ostringstream errStr;
  errStr << "Could not find matching method for arguments (method name: SetBitmapDisabled).\n";                           \
  errStr << "  arg count: " << args.Length() << "\n";
  for(int i = 0; i < args.Length(); i++) {
    v8::String::AsciiValue argStr(args[i]);
    errStr << "  arg[" << i << "]: " << *argStr << "\n";
  }
  return v8::ThrowException(v8::Exception::TypeError(v8::String::New(errStr.str().c_str())));
}

/*static*/ v8::Handle<v8::Value> wxNode_wxAnyButton::_SetBitmapCurrent(const v8::Arguments& args) {
  v8::HandleScope scope;
  wxNode_wxAnyButton* self = unwrap<wxNode_wxAnyButton>(args.This());

  
  /*
   * id: _37222
   */
  if(args.Length() == 1 && (args[0]->IsNull() || args[0]->IsObject())) {
    wxNode_wxBitmap* bitmap = args[0]->IsNull() ? NULL : wxNodeObject::unwrap<wxNode_wxBitmap>(args[0]->ToObject()); /* type: _15508  */
    

    self->SetBitmapCurrent(*bitmap);

    return v8::Undefined();
  }
  

  std::ostringstream errStr;
  errStr << "Could not find matching method for arguments (method name: SetBitmapCurrent).\n";                           \
  errStr << "  arg count: " << args.Length() << "\n";
  for(int i = 0; i < args.Length(); i++) {
    v8::String::AsciiValue argStr(args[i]);
    errStr << "  arg[" << i << "]: " << *argStr << "\n";
  }
  return v8::ThrowException(v8::Exception::TypeError(v8::String::New(errStr.str().c_str())));
}

/*static*/ v8::Handle<v8::Value> wxNode_wxAnyButton::_SetBitmapFocus(const v8::Arguments& args) {
  v8::HandleScope scope;
  wxNode_wxAnyButton* self = unwrap<wxNode_wxAnyButton>(args.This());

  
  /*
   * id: _37223
   */
  if(args.Length() == 1 && (args[0]->IsNull() || args[0]->IsObject())) {
    wxNode_wxBitmap* bitmap = args[0]->IsNull() ? NULL : wxNodeObject::unwrap<wxNode_wxBitmap>(args[0]->ToObject()); /* type: _15508  */
    

    self->SetBitmapFocus(*bitmap);

    return v8::Undefined();
  }
  

  std::ostringstream errStr;
  errStr << "Could not find matching method for arguments (method name: SetBitmapFocus).\n";                           \
  errStr << "  arg count: " << args.Length() << "\n";
  for(int i = 0; i < args.Length(); i++) {
    v8::String::AsciiValue argStr(args[i]);
    errStr << "  arg[" << i << "]: " << *argStr << "\n";
  }
  return v8::ThrowException(v8::Exception::TypeError(v8::String::New(errStr.str().c_str())));
}

/*static*/ v8::Handle<v8::Value> wxNode_wxAnyButton::_GetBitmapLabel(const v8::Arguments& args) {
  v8::HandleScope scope;
  wxNode_wxAnyButton* self = unwrap<wxNode_wxAnyButton>(args.This());

  
  /*
   * id: _37224
   */
  if(args.Length() == 0) {
    

    wxBitmap returnValTemp = self->GetBitmapLabel();

    wxBitmap* returnVal = new wxBitmap();
    v8::Local<v8::FunctionTemplate> returnObjFt = v8::FunctionTemplate::New(wxNodeObject::NewFunc);
    returnObjFt->InstanceTemplate()->SetInternalFieldCount(2);
    wxNode_wxBitmap::AddMethods(returnObjFt);
    v8::Local<v8::Function> returnObjFn = returnObjFt->GetFunction();
    v8::Handle<v8::Value> returnObjArgs[0];
    v8::Local<v8::Object> returnObj = returnObjFn->CallAsConstructor(0, returnObjArgs)->ToObject();
    returnObj->SetPointerInInternalField(0, returnVal);
    returnObj->SetPointerInInternalField(1, new NodeExEvtHandlerImplWrap(returnObj));
    return scope.Close(returnObj);
  }
  

  std::ostringstream errStr;
  errStr << "Could not find matching method for arguments (method name: GetBitmapLabel).\n";                           \
  errStr << "  arg count: " << args.Length() << "\n";
  for(int i = 0; i < args.Length(); i++) {
    v8::String::AsciiValue argStr(args[i]);
    errStr << "  arg[" << i << "]: " << *argStr << "\n";
  }
  return v8::ThrowException(v8::Exception::TypeError(v8::String::New(errStr.str().c_str())));
}

/*static*/ v8::Handle<v8::Value> wxNode_wxAnyButton::_GetBitmapPressed(const v8::Arguments& args) {
  v8::HandleScope scope;
  wxNode_wxAnyButton* self = unwrap<wxNode_wxAnyButton>(args.This());

  
  /*
   * id: _37225
   */
  if(args.Length() == 0) {
    

    wxBitmap returnValTemp = self->GetBitmapPressed();

    wxBitmap* returnVal = new wxBitmap();
    v8::Local<v8::FunctionTemplate> returnObjFt = v8::FunctionTemplate::New(wxNodeObject::NewFunc);
    returnObjFt->InstanceTemplate()->SetInternalFieldCount(2);
    wxNode_wxBitmap::AddMethods(returnObjFt);
    v8::Local<v8::Function> returnObjFn = returnObjFt->GetFunction();
    v8::Handle<v8::Value> returnObjArgs[0];
    v8::Local<v8::Object> returnObj = returnObjFn->CallAsConstructor(0, returnObjArgs)->ToObject();
    returnObj->SetPointerInInternalField(0, returnVal);
    returnObj->SetPointerInInternalField(1, new NodeExEvtHandlerImplWrap(returnObj));
    return scope.Close(returnObj);
  }
  

  std::ostringstream errStr;
  errStr << "Could not find matching method for arguments (method name: GetBitmapPressed).\n";                           \
  errStr << "  arg count: " << args.Length() << "\n";
  for(int i = 0; i < args.Length(); i++) {
    v8::String::AsciiValue argStr(args[i]);
    errStr << "  arg[" << i << "]: " << *argStr << "\n";
  }
  return v8::ThrowException(v8::Exception::TypeError(v8::String::New(errStr.str().c_str())));
}

/*static*/ v8::Handle<v8::Value> wxNode_wxAnyButton::_GetBitmapDisabled(const v8::Arguments& args) {
  v8::HandleScope scope;
  wxNode_wxAnyButton* self = unwrap<wxNode_wxAnyButton>(args.This());

  
  /*
   * id: _37226
   */
  if(args.Length() == 0) {
    

    wxBitmap returnValTemp = self->GetBitmapDisabled();

    wxBitmap* returnVal = new wxBitmap();
    v8::Local<v8::FunctionTemplate> returnObjFt = v8::FunctionTemplate::New(wxNodeObject::NewFunc);
    returnObjFt->InstanceTemplate()->SetInternalFieldCount(2);
    wxNode_wxBitmap::AddMethods(returnObjFt);
    v8::Local<v8::Function> returnObjFn = returnObjFt->GetFunction();
    v8::Handle<v8::Value> returnObjArgs[0];
    v8::Local<v8::Object> returnObj = returnObjFn->CallAsConstructor(0, returnObjArgs)->ToObject();
    returnObj->SetPointerInInternalField(0, returnVal);
    returnObj->SetPointerInInternalField(1, new NodeExEvtHandlerImplWrap(returnObj));
    return scope.Close(returnObj);
  }
  

  std::ostringstream errStr;
  errStr << "Could not find matching method for arguments (method name: GetBitmapDisabled).\n";                           \
  errStr << "  arg count: " << args.Length() << "\n";
  for(int i = 0; i < args.Length(); i++) {
    v8::String::AsciiValue argStr(args[i]);
    errStr << "  arg[" << i << "]: " << *argStr << "\n";
  }
  return v8::ThrowException(v8::Exception::TypeError(v8::String::New(errStr.str().c_str())));
}

/*static*/ v8::Handle<v8::Value> wxNode_wxAnyButton::_GetBitmapCurrent(const v8::Arguments& args) {
  v8::HandleScope scope;
  wxNode_wxAnyButton* self = unwrap<wxNode_wxAnyButton>(args.This());

  
  /*
   * id: _37227
   */
  if(args.Length() == 0) {
    

    wxBitmap returnValTemp = self->GetBitmapCurrent();

    wxBitmap* returnVal = new wxBitmap();
    v8::Local<v8::FunctionTemplate> returnObjFt = v8::FunctionTemplate::New(wxNodeObject::NewFunc);
    returnObjFt->InstanceTemplate()->SetInternalFieldCount(2);
    wxNode_wxBitmap::AddMethods(returnObjFt);
    v8::Local<v8::Function> returnObjFn = returnObjFt->GetFunction();
    v8::Handle<v8::Value> returnObjArgs[0];
    v8::Local<v8::Object> returnObj = returnObjFn->CallAsConstructor(0, returnObjArgs)->ToObject();
    returnObj->SetPointerInInternalField(0, returnVal);
    returnObj->SetPointerInInternalField(1, new NodeExEvtHandlerImplWrap(returnObj));
    return scope.Close(returnObj);
  }
  

  std::ostringstream errStr;
  errStr << "Could not find matching method for arguments (method name: GetBitmapCurrent).\n";                           \
  errStr << "  arg count: " << args.Length() << "\n";
  for(int i = 0; i < args.Length(); i++) {
    v8::String::AsciiValue argStr(args[i]);
    errStr << "  arg[" << i << "]: " << *argStr << "\n";
  }
  return v8::ThrowException(v8::Exception::TypeError(v8::String::New(errStr.str().c_str())));
}

/*static*/ v8::Handle<v8::Value> wxNode_wxAnyButton::_GetBitmapFocus(const v8::Arguments& args) {
  v8::HandleScope scope;
  wxNode_wxAnyButton* self = unwrap<wxNode_wxAnyButton>(args.This());

  
  /*
   * id: _37228
   */
  if(args.Length() == 0) {
    

    wxBitmap returnValTemp = self->GetBitmapFocus();

    wxBitmap* returnVal = new wxBitmap();
    v8::Local<v8::FunctionTemplate> returnObjFt = v8::FunctionTemplate::New(wxNodeObject::NewFunc);
    returnObjFt->InstanceTemplate()->SetInternalFieldCount(2);
    wxNode_wxBitmap::AddMethods(returnObjFt);
    v8::Local<v8::Function> returnObjFn = returnObjFt->GetFunction();
    v8::Handle<v8::Value> returnObjArgs[0];
    v8::Local<v8::Object> returnObj = returnObjFn->CallAsConstructor(0, returnObjArgs)->ToObject();
    returnObj->SetPointerInInternalField(0, returnVal);
    returnObj->SetPointerInInternalField(1, new NodeExEvtHandlerImplWrap(returnObj));
    return scope.Close(returnObj);
  }
  

  std::ostringstream errStr;
  errStr << "Could not find matching method for arguments (method name: GetBitmapFocus).\n";                           \
  errStr << "  arg count: " << args.Length() << "\n";
  for(int i = 0; i < args.Length(); i++) {
    v8::String::AsciiValue argStr(args[i]);
    errStr << "  arg[" << i << "]: " << *argStr << "\n";
  }
  return v8::ThrowException(v8::Exception::TypeError(v8::String::New(errStr.str().c_str())));
}

/*static*/ v8::Handle<v8::Value> wxNode_wxAnyButton::_SetBitmapMargins(const v8::Arguments& args) {
  v8::HandleScope scope;
  wxNode_wxAnyButton* self = unwrap<wxNode_wxAnyButton>(args.This());

  
  /*
   * id: _37229
   */
  if(args.Length() == 2 && args[0]->IsNumber() && args[1]->IsNumber()) {
    int x = (int)args[0]->ToInt32()->Value(); /* type: _12095  */
    int y = (int)args[1]->ToInt32()->Value(); /* type: _12095  */
    

    self->SetBitmapMargins(x, y);

    return v8::Undefined();
  }
  
  /*
   * id: _37230
   */
  if(args.Length() == 1 && (args[0]->IsNull() || args[0]->IsObject())) {
    wxNode_wxSize* sz = args[0]->IsNull() ? NULL : wxNodeObject::unwrap<wxNode_wxSize>(args[0]->ToObject()); /* type: _20522  */
    

    self->SetBitmapMargins(*sz);

    return v8::Undefined();
  }
  

  std::ostringstream errStr;
  errStr << "Could not find matching method for arguments (method name: SetBitmapMargins).\n";                           \
  errStr << "  arg count: " << args.Length() << "\n";
  for(int i = 0; i < args.Length(); i++) {
    v8::String::AsciiValue argStr(args[i]);
    errStr << "  arg[" << i << "]: " << *argStr << "\n";
  }
  return v8::ThrowException(v8::Exception::TypeError(v8::String::New(errStr.str().c_str())));
}

/*static*/ v8::Handle<v8::Value> wxNode_wxAnyButton::_GetBitmapMargins(const v8::Arguments& args) {
  v8::HandleScope scope;
  wxNode_wxAnyButton* self = unwrap<wxNode_wxAnyButton>(args.This());

  
  /*
   * id: _37231
   */
  if(args.Length() == 0) {
    

    wxSize returnValTemp = self->GetBitmapMargins();

    wxSize* returnVal = new wxSize();
    v8::Local<v8::FunctionTemplate> returnObjFt = v8::FunctionTemplate::New(wxNodeObject::NewFunc);
    returnObjFt->InstanceTemplate()->SetInternalFieldCount(2);
    wxNode_wxSize::AddMethods(returnObjFt);
    v8::Local<v8::Function> returnObjFn = returnObjFt->GetFunction();
    v8::Handle<v8::Value> returnObjArgs[0];
    v8::Local<v8::Object> returnObj = returnObjFn->CallAsConstructor(0, returnObjArgs)->ToObject();
    returnObj->SetPointerInInternalField(0, returnVal);
    returnObj->SetPointerInInternalField(1, new NodeExEvtHandlerImplWrap(returnObj));
    return scope.Close(returnObj);
  }
  

  std::ostringstream errStr;
  errStr << "Could not find matching method for arguments (method name: GetBitmapMargins).\n";                           \
  errStr << "  arg count: " << args.Length() << "\n";
  for(int i = 0; i < args.Length(); i++) {
    v8::String::AsciiValue argStr(args[i]);
    errStr << "  arg[" << i << "]: " << *argStr << "\n";
  }
  return v8::ThrowException(v8::Exception::TypeError(v8::String::New(errStr.str().c_str())));
}

/*static*/ v8::Handle<v8::Value> wxNode_wxAnyButton::_SetBitmapPosition(const v8::Arguments& args) {
  v8::HandleScope scope;
  wxNode_wxAnyButton* self = unwrap<wxNode_wxAnyButton>(args.This());

  
  /*
   * id: _37232
   */
  if(args.Length() == 1 && args[0]->IsNumber()) {
    wxDirection dir; /* type: _10177  */
    

    self->SetBitmapPosition(dir);

    return v8::Undefined();
  }
  

  std::ostringstream errStr;
  errStr << "Could not find matching method for arguments (method name: SetBitmapPosition).\n";                           \
  errStr << "  arg count: " << args.Length() << "\n";
  for(int i = 0; i < args.Length(); i++) {
    v8::String::AsciiValue argStr(args[i]);
    errStr << "  arg[" << i << "]: " << *argStr << "\n";
  }
  return v8::ThrowException(v8::Exception::TypeError(v8::String::New(errStr.str().c_str())));
}

/*static*/ v8::Handle<v8::Value> wxNode_wxAnyButton::_ShouldInheritColours(const v8::Arguments& args) {
  v8::HandleScope scope;
  wxNode_wxAnyButton* self = unwrap<wxNode_wxAnyButton>(args.This());

  
  /*
   * id: _37233
   */
  if(args.Length() == 0) {
    

    bool returnVal = self->ShouldInheritColours();

    return scope.Close(v8::Boolean::New(returnVal));
  }
  

  std::ostringstream errStr;
  errStr << "Could not find matching method for arguments (method name: ShouldInheritColours).\n";                           \
  errStr << "  arg count: " << args.Length() << "\n";
  for(int i = 0; i < args.Length(); i++) {
    v8::String::AsciiValue argStr(args[i]);
    errStr << "  arg[" << i << "]: " << *argStr << "\n";
  }
  return v8::ThrowException(v8::Exception::TypeError(v8::String::New(errStr.str().c_str())));
}

/*static*/ v8::Handle<v8::Value> wxNode_wxAnyButton::_SetImageLabel(const v8::Arguments& args) {
  v8::HandleScope scope;
  wxNode_wxAnyButton* self = unwrap<wxNode_wxAnyButton>(args.This());

  
  /*
   * id: _37234
   */
  if(args.Length() == 1 && (args[0]->IsNull() || args[0]->IsObject())) {
    wxNode_wxBitmap* bitmap = args[0]->IsNull() ? NULL : wxNodeObject::unwrap<wxNode_wxBitmap>(args[0]->ToObject()); /* type: _15508  */
    

    self->SetImageLabel(*bitmap);

    return v8::Undefined();
  }
  

  std::ostringstream errStr;
  errStr << "Could not find matching method for arguments (method name: SetImageLabel).\n";                           \
  errStr << "  arg count: " << args.Length() << "\n";
  for(int i = 0; i < args.Length(); i++) {
    v8::String::AsciiValue argStr(args[i]);
    errStr << "  arg[" << i << "]: " << *argStr << "\n";
  }
  return v8::ThrowException(v8::Exception::TypeError(v8::String::New(errStr.str().c_str())));
}

/*static*/ v8::Handle<v8::Value> wxNode_wxAnyButton::_SetImageMargins(const v8::Arguments& args) {
  v8::HandleScope scope;
  wxNode_wxAnyButton* self = unwrap<wxNode_wxAnyButton>(args.This());

  
  /*
   * id: _37235
   */
  if(args.Length() == 2 && args[0]->IsNumber() && args[1]->IsNumber()) {
    int x = (int)args[0]->ToInt32()->Value(); /* type: _12095  */
    int y = (int)args[1]->ToInt32()->Value(); /* type: _12095  */
    

    self->SetImageMargins(x, y);

    return v8::Undefined();
  }
  

  std::ostringstream errStr;
  errStr << "Could not find matching method for arguments (method name: SetImageMargins).\n";                           \
  errStr << "  arg count: " << args.Length() << "\n";
  for(int i = 0; i < args.Length(); i++) {
    v8::String::AsciiValue argStr(args[i]);
    errStr << "  arg[" << i << "]: " << *argStr << "\n";
  }
  return v8::ThrowException(v8::Exception::TypeError(v8::String::New(errStr.str().c_str())));
}

/*static*/ v8::Handle<v8::Value> wxNode_wxAnyButton::_GetBitmapSelected(const v8::Arguments& args) {
  v8::HandleScope scope;
  wxNode_wxAnyButton* self = unwrap<wxNode_wxAnyButton>(args.This());

  
  /*
   * id: _37236
   */
  if(args.Length() == 0) {
    

    wxBitmap returnValTemp = self->GetBitmapSelected();

    wxBitmap* returnVal = new wxBitmap();
    v8::Local<v8::FunctionTemplate> returnObjFt = v8::FunctionTemplate::New(wxNodeObject::NewFunc);
    returnObjFt->InstanceTemplate()->SetInternalFieldCount(2);
    wxNode_wxBitmap::AddMethods(returnObjFt);
    v8::Local<v8::Function> returnObjFn = returnObjFt->GetFunction();
    v8::Handle<v8::Value> returnObjArgs[0];
    v8::Local<v8::Object> returnObj = returnObjFn->CallAsConstructor(0, returnObjArgs)->ToObject();
    returnObj->SetPointerInInternalField(0, returnVal);
    returnObj->SetPointerInInternalField(1, new NodeExEvtHandlerImplWrap(returnObj));
    return scope.Close(returnObj);
  }
  

  std::ostringstream errStr;
  errStr << "Could not find matching method for arguments (method name: GetBitmapSelected).\n";                           \
  errStr << "  arg count: " << args.Length() << "\n";
  for(int i = 0; i < args.Length(); i++) {
    v8::String::AsciiValue argStr(args[i]);
    errStr << "  arg[" << i << "]: " << *argStr << "\n";
  }
  return v8::ThrowException(v8::Exception::TypeError(v8::String::New(errStr.str().c_str())));
}

/*static*/ v8::Handle<v8::Value> wxNode_wxAnyButton::_GetBitmapHover(const v8::Arguments& args) {
  v8::HandleScope scope;
  wxNode_wxAnyButton* self = unwrap<wxNode_wxAnyButton>(args.This());

  
  /*
   * id: _37237
   */
  if(args.Length() == 0) {
    

    wxBitmap returnValTemp = self->GetBitmapHover();

    wxBitmap* returnVal = new wxBitmap();
    v8::Local<v8::FunctionTemplate> returnObjFt = v8::FunctionTemplate::New(wxNodeObject::NewFunc);
    returnObjFt->InstanceTemplate()->SetInternalFieldCount(2);
    wxNode_wxBitmap::AddMethods(returnObjFt);
    v8::Local<v8::Function> returnObjFn = returnObjFt->GetFunction();
    v8::Handle<v8::Value> returnObjArgs[0];
    v8::Local<v8::Object> returnObj = returnObjFn->CallAsConstructor(0, returnObjArgs)->ToObject();
    returnObj->SetPointerInInternalField(0, returnVal);
    returnObj->SetPointerInInternalField(1, new NodeExEvtHandlerImplWrap(returnObj));
    return scope.Close(returnObj);
  }
  

  std::ostringstream errStr;
  errStr << "Could not find matching method for arguments (method name: GetBitmapHover).\n";                           \
  errStr << "  arg count: " << args.Length() << "\n";
  for(int i = 0; i < args.Length(); i++) {
    v8::String::AsciiValue argStr(args[i]);
    errStr << "  arg[" << i << "]: " << *argStr << "\n";
  }
  return v8::ThrowException(v8::Exception::TypeError(v8::String::New(errStr.str().c_str())));
}

/*static*/ v8::Handle<v8::Value> wxNode_wxAnyButton::_SetBitmapSelected(const v8::Arguments& args) {
  v8::HandleScope scope;
  wxNode_wxAnyButton* self = unwrap<wxNode_wxAnyButton>(args.This());

  
  /*
   * id: _37238
   */
  if(args.Length() == 1 && (args[0]->IsNull() || args[0]->IsObject())) {
    wxNode_wxBitmap* bitmap = args[0]->IsNull() ? NULL : wxNodeObject::unwrap<wxNode_wxBitmap>(args[0]->ToObject()); /* type: _15508  */
    

    self->SetBitmapSelected(*bitmap);

    return v8::Undefined();
  }
  

  std::ostringstream errStr;
  errStr << "Could not find matching method for arguments (method name: SetBitmapSelected).\n";                           \
  errStr << "  arg count: " << args.Length() << "\n";
  for(int i = 0; i < args.Length(); i++) {
    v8::String::AsciiValue argStr(args[i]);
    errStr << "  arg[" << i << "]: " << *argStr << "\n";
  }
  return v8::ThrowException(v8::Exception::TypeError(v8::String::New(errStr.str().c_str())));
}

/*static*/ v8::Handle<v8::Value> wxNode_wxAnyButton::_SetBitmapHover(const v8::Arguments& args) {
  v8::HandleScope scope;
  wxNode_wxAnyButton* self = unwrap<wxNode_wxAnyButton>(args.This());

  
  /*
   * id: _37239
   */
  if(args.Length() == 1 && (args[0]->IsNull() || args[0]->IsObject())) {
    wxNode_wxBitmap* bitmap = args[0]->IsNull() ? NULL : wxNodeObject::unwrap<wxNode_wxBitmap>(args[0]->ToObject()); /* type: _15508  */
    

    self->SetBitmapHover(*bitmap);

    return v8::Undefined();
  }
  

  std::ostringstream errStr;
  errStr << "Could not find matching method for arguments (method name: SetBitmapHover).\n";                           \
  errStr << "  arg count: " << args.Length() << "\n";
  for(int i = 0; i < args.Length(); i++) {
    v8::String::AsciiValue argStr(args[i]);
    errStr << "  arg[" << i << "]: " << *argStr << "\n";
  }
  return v8::ThrowException(v8::Exception::TypeError(v8::String::New(errStr.str().c_str())));
}

/*static*/ v8::Handle<v8::Value> wxNode_wxAnyButton::_DontShowLabel(const v8::Arguments& args) {
  v8::HandleScope scope;
  wxNode_wxAnyButton* self = unwrap<wxNode_wxAnyButton>(args.This());

  
  /*
   * id: _37240
   */
  if(args.Length() == 0) {
    

    bool returnVal = self->DontShowLabel();

    return scope.Close(v8::Boolean::New(returnVal));
  }
  

  std::ostringstream errStr;
  errStr << "Could not find matching method for arguments (method name: DontShowLabel).\n";                           \
  errStr << "  arg count: " << args.Length() << "\n";
  for(int i = 0; i < args.Length(); i++) {
    v8::String::AsciiValue argStr(args[i]);
    errStr << "  arg[" << i << "]: " << *argStr << "\n";
  }
  return v8::ThrowException(v8::Exception::TypeError(v8::String::New(errStr.str().c_str())));
}

/*static*/ v8::Handle<v8::Value> wxNode_wxAnyButton::_ShowsLabel(const v8::Arguments& args) {
  v8::HandleScope scope;
  wxNode_wxAnyButton* self = unwrap<wxNode_wxAnyButton>(args.This());

  
  /*
   * id: _37241
   */
  if(args.Length() == 0) {
    

    bool returnVal = self->ShowsLabel();

    return scope.Close(v8::Boolean::New(returnVal));
  }
  

  std::ostringstream errStr;
  errStr << "Could not find matching method for arguments (method name: ShowsLabel).\n";                           \
  errStr << "  arg count: " << args.Length() << "\n";
  for(int i = 0; i < args.Length(); i++) {
    v8::String::AsciiValue argStr(args[i]);
    errStr << "  arg[" << i << "]: " << *argStr << "\n";
  }
  return v8::ThrowException(v8::Exception::TypeError(v8::String::New(errStr.str().c_str())));
}

