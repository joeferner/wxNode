
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
  s_ct->SetClassName(v8::String::NewSymbol("AnyButton"));

  NODE_SET_PROTOTYPE_METHOD(s_ct, "init", _init);
  AddMethods(s_ct);

  target->Set(v8::String::NewSymbol("AnyButton"), s_ct->GetFunction());
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

/*static*/ v8::Handle<v8::Value> wxNode_wxAnyButton::New(const wxNode_wxAnyButton* obj) {
  v8::HandleScope scope;

  if(obj == NULL) {
    return scope.Close(v8::Null());
  }
  
  v8::Local<v8::FunctionTemplate> returnObjFt = v8::FunctionTemplate::New(wxNodeObject::NewFunc);
  returnObjFt->InstanceTemplate()->SetInternalFieldCount(2);
  returnObjFt->SetClassName(v8::String::NewSymbol("AnyButton"));
  wxNode_wxAnyButton::AddMethods(returnObjFt);

  v8::Local<v8::Function> returnObjFn = returnObjFt->GetFunction();
  v8::Handle<v8::Value> returnObjArgs[0];
  v8::Local<v8::Object> returnObj = returnObjFn->CallAsConstructor(0, returnObjArgs)->ToObject();
  returnObj->SetPointerInInternalField(0, (void*)obj);
  NodeExEvtHandlerImpl* evtHandler = dynamic_cast<NodeExEvtHandlerImpl*>((wxNode_wxAnyButton*)obj);
  returnObj->SetPointerInInternalField(1, evtHandler);

  return scope.Close(returnObj);
}

/*static*/ v8::Handle<v8::Value> wxNode_wxAnyButton::New(const wxAnyButton* obj) {
  v8::HandleScope scope;

  if(obj == NULL) {
    return scope.Close(v8::Null());
  }
  
  v8::Local<v8::FunctionTemplate> returnObjFt = v8::FunctionTemplate::New(wxNodeObject::NewFunc);
  returnObjFt->InstanceTemplate()->SetInternalFieldCount(2);
  returnObjFt->SetClassName(v8::String::NewSymbol("AnyButton"));
  wxNode_wxAnyButton::AddMethods(returnObjFt);

  v8::Local<v8::Function> returnObjFn = returnObjFt->GetFunction();
  v8::Handle<v8::Value> returnObjArgs[0];
  v8::Local<v8::Object> returnObj = returnObjFn->CallAsConstructor(0, returnObjArgs)->ToObject();
  returnObj->SetPointerInInternalField(0, (void*)obj);
  NodeExEvtHandlerImplWrap* wrap = new NodeExEvtHandlerImplWrap(returnObj);
  NodeExEvtHandlerImpl* evtHandler = dynamic_cast<NodeExEvtHandlerImpl*>(wrap);
  returnObj->SetPointerInInternalField(1, evtHandler);

  return scope.Close(returnObj);
}

/*static*/ v8::Handle<v8::Value> wxNode_wxAnyButton::NewCopy(const wxAnyButton& obj) {
  v8::HandleScope scope;
  wxNode_wxAnyButton* returnVal = new wxNode_wxAnyButton();
  memcpy(dynamic_cast<wxAnyButton*>(returnVal), &obj, sizeof(wxAnyButton));
  return scope.Close(New(returnVal));

}

/*static*/ bool wxNode_wxAnyButton::AssignableFrom(const v8::Handle<v8::String>& className) {
  v8::String::AsciiValue classNameStr(className);
  return AssignableFrom(*classNameStr);
}

/*static*/ bool wxNode_wxAnyButton::AssignableFrom(const char* className) {
  if(!strcmp("AnyButton", className)) { return true; }
  
  if(!strcmp("AnyButton", className)) { return true; }

  if(!strcmp("ToggleButtonBase", className)) { return true; }

  if(!strcmp("ToggleButton", className)) { return true; }

  if(!strcmp("BitmapToggleButton", className)) { return true; }
  if(!strcmp("ButtonBase", className)) { return true; }

  if(!strcmp("Button", className)) { return true; }

  if(!strcmp("BitmapButtonBase", className)) { return true; }

  if(!strcmp("BitmapButton", className)) { return true; }

  if(!strcmp("ContextHelpButton", className)) { return true; }
  if(!strcmp("GenericFileDirButton", className)) { return true; }

  if(!strcmp("GenericFileButton", className)) { return true; }

  if(!strcmp("FileButton", className)) { return true; }
  if(!strcmp("GenericDirButton", className)) { return true; }

  if(!strcmp("DirButton", className)) { return true; }
  if(!strcmp("CommandLinkButtonBase", className)) { return true; }

  if(!strcmp("GenericCommandLinkButton", className)) { return true; }

  if(!strcmp("CommandLinkButton", className)) { return true; }
  if(!strcmp("FontButton", className)) { return true; }
  if(!strcmp("ColourButton", className)) { return true; }


  return false;
}

/*static*/ v8::Handle<v8::Value> wxNode_wxAnyButton::_init(const v8::Arguments& args) {
  v8::HandleScope scope;

  
  
  /*
   * id: _32562
   */
  if(args.Length() == 0) {
    

    wxNode_wxAnyButton *self = new wxNode_wxAnyButton();
    NodeExEvtHandlerImpl* evtHandler = dynamic_cast<NodeExEvtHandlerImpl*>(self);
    self->wrap(args.This(), self, evtHandler);
    return args.This();
  }
  
  

  std::ostringstream errStr;
  errStr << "Could not find matching constructor for arguments (class name: wxAnyButton).\n";
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
   * id: _37426
   */
  if(args.Length() == 2 && (args[0]->IsNull() || (args[0]->IsObject() && wxNode_wxBitmap::AssignableFrom(args[0]->ToObject()->GetConstructorName()))) && args[1]->IsNumber()) {
    wxNode_wxBitmap* bitmap = args[0]->IsNull() ? NULL : wxNodeObject::unwrap<wxNode_wxBitmap>(args[0]->ToObject()); /* type: _15645  */
    wxDirection dir = (wxDirection)args[1]->ToNumber()->Value(); /* type: _10279  */
    

    self->SetBitmap(*bitmap, dir);

    return v8::Undefined();
  }
  
  /*
   * id: _37426
   */
  if(args.Length() == 1 && (args[0]->IsNull() || (args[0]->IsObject() && wxNode_wxBitmap::AssignableFrom(args[0]->ToObject()->GetConstructorName())))) {
    wxNode_wxBitmap* bitmap = args[0]->IsNull() ? NULL : wxNodeObject::unwrap<wxNode_wxBitmap>(args[0]->ToObject()); /* type: _15645  */
    

    self->SetBitmap(*bitmap);

    return v8::Undefined();
  }
  

  std::ostringstream errStr;
  errStr << "Could not find matching method for arguments (method name: wxAnyButton::SetBitmap).\n";
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
   * id: _37427
   */
  if(args.Length() == 0) {
    

    wxBitmap returnVal = self->GetBitmap();

    return scope.Close(wxNode_wxBitmap::NewCopy(returnVal));
  }
  

  std::ostringstream errStr;
  errStr << "Could not find matching method for arguments (method name: wxAnyButton::GetBitmap).\n";
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
   * id: _37428
   */
  if(args.Length() == 1 && (args[0]->IsNull() || (args[0]->IsObject() && wxNode_wxBitmap::AssignableFrom(args[0]->ToObject()->GetConstructorName())))) {
    wxNode_wxBitmap* bitmap = args[0]->IsNull() ? NULL : wxNodeObject::unwrap<wxNode_wxBitmap>(args[0]->ToObject()); /* type: _15645  */
    

    self->SetBitmapLabel(*bitmap);

    return v8::Undefined();
  }
  

  std::ostringstream errStr;
  errStr << "Could not find matching method for arguments (method name: wxAnyButton::SetBitmapLabel).\n";
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
   * id: _37429
   */
  if(args.Length() == 1 && (args[0]->IsNull() || (args[0]->IsObject() && wxNode_wxBitmap::AssignableFrom(args[0]->ToObject()->GetConstructorName())))) {
    wxNode_wxBitmap* bitmap = args[0]->IsNull() ? NULL : wxNodeObject::unwrap<wxNode_wxBitmap>(args[0]->ToObject()); /* type: _15645  */
    

    self->SetBitmapPressed(*bitmap);

    return v8::Undefined();
  }
  

  std::ostringstream errStr;
  errStr << "Could not find matching method for arguments (method name: wxAnyButton::SetBitmapPressed).\n";
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
   * id: _37430
   */
  if(args.Length() == 1 && (args[0]->IsNull() || (args[0]->IsObject() && wxNode_wxBitmap::AssignableFrom(args[0]->ToObject()->GetConstructorName())))) {
    wxNode_wxBitmap* bitmap = args[0]->IsNull() ? NULL : wxNodeObject::unwrap<wxNode_wxBitmap>(args[0]->ToObject()); /* type: _15645  */
    

    self->SetBitmapDisabled(*bitmap);

    return v8::Undefined();
  }
  

  std::ostringstream errStr;
  errStr << "Could not find matching method for arguments (method name: wxAnyButton::SetBitmapDisabled).\n";
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
   * id: _37431
   */
  if(args.Length() == 1 && (args[0]->IsNull() || (args[0]->IsObject() && wxNode_wxBitmap::AssignableFrom(args[0]->ToObject()->GetConstructorName())))) {
    wxNode_wxBitmap* bitmap = args[0]->IsNull() ? NULL : wxNodeObject::unwrap<wxNode_wxBitmap>(args[0]->ToObject()); /* type: _15645  */
    

    self->SetBitmapCurrent(*bitmap);

    return v8::Undefined();
  }
  

  std::ostringstream errStr;
  errStr << "Could not find matching method for arguments (method name: wxAnyButton::SetBitmapCurrent).\n";
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
   * id: _37432
   */
  if(args.Length() == 1 && (args[0]->IsNull() || (args[0]->IsObject() && wxNode_wxBitmap::AssignableFrom(args[0]->ToObject()->GetConstructorName())))) {
    wxNode_wxBitmap* bitmap = args[0]->IsNull() ? NULL : wxNodeObject::unwrap<wxNode_wxBitmap>(args[0]->ToObject()); /* type: _15645  */
    

    self->SetBitmapFocus(*bitmap);

    return v8::Undefined();
  }
  

  std::ostringstream errStr;
  errStr << "Could not find matching method for arguments (method name: wxAnyButton::SetBitmapFocus).\n";
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
   * id: _37433
   */
  if(args.Length() == 0) {
    

    wxBitmap returnVal = self->GetBitmapLabel();

    return scope.Close(wxNode_wxBitmap::NewCopy(returnVal));
  }
  

  std::ostringstream errStr;
  errStr << "Could not find matching method for arguments (method name: wxAnyButton::GetBitmapLabel).\n";
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
   * id: _37434
   */
  if(args.Length() == 0) {
    

    wxBitmap returnVal = self->GetBitmapPressed();

    return scope.Close(wxNode_wxBitmap::NewCopy(returnVal));
  }
  

  std::ostringstream errStr;
  errStr << "Could not find matching method for arguments (method name: wxAnyButton::GetBitmapPressed).\n";
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
   * id: _37435
   */
  if(args.Length() == 0) {
    

    wxBitmap returnVal = self->GetBitmapDisabled();

    return scope.Close(wxNode_wxBitmap::NewCopy(returnVal));
  }
  

  std::ostringstream errStr;
  errStr << "Could not find matching method for arguments (method name: wxAnyButton::GetBitmapDisabled).\n";
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
   * id: _37436
   */
  if(args.Length() == 0) {
    

    wxBitmap returnVal = self->GetBitmapCurrent();

    return scope.Close(wxNode_wxBitmap::NewCopy(returnVal));
  }
  

  std::ostringstream errStr;
  errStr << "Could not find matching method for arguments (method name: wxAnyButton::GetBitmapCurrent).\n";
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
   * id: _37437
   */
  if(args.Length() == 0) {
    

    wxBitmap returnVal = self->GetBitmapFocus();

    return scope.Close(wxNode_wxBitmap::NewCopy(returnVal));
  }
  

  std::ostringstream errStr;
  errStr << "Could not find matching method for arguments (method name: wxAnyButton::GetBitmapFocus).\n";
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
   * id: _37438
   */
  if(args.Length() == 2 && args[0]->IsNumber() && args[1]->IsNumber()) {
    int x = (int)args[0]->ToInt32()->Value(); /* type: _12231  */
    int y = (int)args[1]->ToInt32()->Value(); /* type: _12231  */
    

    self->SetBitmapMargins(x, y);

    return v8::Undefined();
  }
  
  /*
   * id: _37439
   */
  if(args.Length() == 1 && (args[0]->IsNull() || (args[0]->IsObject() && wxNode_wxSize::AssignableFrom(args[0]->ToObject()->GetConstructorName())))) {
    wxNode_wxSize* sz = args[0]->IsNull() ? NULL : wxNodeObject::unwrap<wxNode_wxSize>(args[0]->ToObject()); /* type: _20628  */
    

    self->SetBitmapMargins(*sz);

    return v8::Undefined();
  }
  

  std::ostringstream errStr;
  errStr << "Could not find matching method for arguments (method name: wxAnyButton::SetBitmapMargins).\n";
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
   * id: _37440
   */
  if(args.Length() == 0) {
    

    wxSize returnVal = self->GetBitmapMargins();

    return scope.Close(wxNode_wxSize::NewCopy(returnVal));
  }
  

  std::ostringstream errStr;
  errStr << "Could not find matching method for arguments (method name: wxAnyButton::GetBitmapMargins).\n";
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
   * id: _37441
   */
  if(args.Length() == 1 && args[0]->IsNumber()) {
    wxDirection dir = (wxDirection)args[0]->ToNumber()->Value(); /* type: _10279  */
    

    self->SetBitmapPosition(dir);

    return v8::Undefined();
  }
  

  std::ostringstream errStr;
  errStr << "Could not find matching method for arguments (method name: wxAnyButton::SetBitmapPosition).\n";
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
   * id: _37442
   */
  if(args.Length() == 0) {
    

    bool returnVal = self->ShouldInheritColours();

    return scope.Close(v8::Boolean::New(returnVal));
  }
  

  std::ostringstream errStr;
  errStr << "Could not find matching method for arguments (method name: wxAnyButton::ShouldInheritColours).\n";
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
   * id: _37443
   */
  if(args.Length() == 1 && (args[0]->IsNull() || (args[0]->IsObject() && wxNode_wxBitmap::AssignableFrom(args[0]->ToObject()->GetConstructorName())))) {
    wxNode_wxBitmap* bitmap = args[0]->IsNull() ? NULL : wxNodeObject::unwrap<wxNode_wxBitmap>(args[0]->ToObject()); /* type: _15645  */
    

    self->SetImageLabel(*bitmap);

    return v8::Undefined();
  }
  

  std::ostringstream errStr;
  errStr << "Could not find matching method for arguments (method name: wxAnyButton::SetImageLabel).\n";
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
   * id: _37444
   */
  if(args.Length() == 2 && args[0]->IsNumber() && args[1]->IsNumber()) {
    int x = (int)args[0]->ToInt32()->Value(); /* type: _12231  */
    int y = (int)args[1]->ToInt32()->Value(); /* type: _12231  */
    

    self->SetImageMargins(x, y);

    return v8::Undefined();
  }
  

  std::ostringstream errStr;
  errStr << "Could not find matching method for arguments (method name: wxAnyButton::SetImageMargins).\n";
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
   * id: _37445
   */
  if(args.Length() == 0) {
    

    wxBitmap returnVal = self->GetBitmapSelected();

    return scope.Close(wxNode_wxBitmap::NewCopy(returnVal));
  }
  

  std::ostringstream errStr;
  errStr << "Could not find matching method for arguments (method name: wxAnyButton::GetBitmapSelected).\n";
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
   * id: _37446
   */
  if(args.Length() == 0) {
    

    wxBitmap returnVal = self->GetBitmapHover();

    return scope.Close(wxNode_wxBitmap::NewCopy(returnVal));
  }
  

  std::ostringstream errStr;
  errStr << "Could not find matching method for arguments (method name: wxAnyButton::GetBitmapHover).\n";
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
   * id: _37447
   */
  if(args.Length() == 1 && (args[0]->IsNull() || (args[0]->IsObject() && wxNode_wxBitmap::AssignableFrom(args[0]->ToObject()->GetConstructorName())))) {
    wxNode_wxBitmap* bitmap = args[0]->IsNull() ? NULL : wxNodeObject::unwrap<wxNode_wxBitmap>(args[0]->ToObject()); /* type: _15645  */
    

    self->SetBitmapSelected(*bitmap);

    return v8::Undefined();
  }
  

  std::ostringstream errStr;
  errStr << "Could not find matching method for arguments (method name: wxAnyButton::SetBitmapSelected).\n";
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
   * id: _37448
   */
  if(args.Length() == 1 && (args[0]->IsNull() || (args[0]->IsObject() && wxNode_wxBitmap::AssignableFrom(args[0]->ToObject()->GetConstructorName())))) {
    wxNode_wxBitmap* bitmap = args[0]->IsNull() ? NULL : wxNodeObject::unwrap<wxNode_wxBitmap>(args[0]->ToObject()); /* type: _15645  */
    

    self->SetBitmapHover(*bitmap);

    return v8::Undefined();
  }
  

  std::ostringstream errStr;
  errStr << "Could not find matching method for arguments (method name: wxAnyButton::SetBitmapHover).\n";
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
   * id: _37449
   */
  if(args.Length() == 0) {
    

    bool returnVal = self->DontShowLabel();

    return scope.Close(v8::Boolean::New(returnVal));
  }
  

  std::ostringstream errStr;
  errStr << "Could not find matching method for arguments (method name: wxAnyButton::DontShowLabel).\n";
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
   * id: _37450
   */
  if(args.Length() == 0) {
    

    bool returnVal = self->ShowsLabel();

    return scope.Close(v8::Boolean::New(returnVal));
  }
  

  std::ostringstream errStr;
  errStr << "Could not find matching method for arguments (method name: wxAnyButton::ShowsLabel).\n";
  errStr << "  arg count: " << args.Length() << "\n";
  for(int i = 0; i < args.Length(); i++) {
    v8::String::AsciiValue argStr(args[i]);
    errStr << "  arg[" << i << "]: " << *argStr << "\n";
  }
  return v8::ThrowException(v8::Exception::TypeError(v8::String::New(errStr.str().c_str())));
}



