
#include <sstream>
#include "wxNode_wxToolBarToolBase.h"
#include "wxNode_wxEvtHandler.h"
#include "wxNode_wxObject.h"
#include "wxNode_wxControl.h"
#include "wxNode_wxToolBarBase.h"
#include "wxNode_wxBitmap.h"
#include "wxNode_wxToolBar.h"
#include "wxNode_wxMenu.h"
#include "wxNode_wxClassInfo.h"


/* static */ v8::Persistent<v8::FunctionTemplate> wxNode_wxToolBarToolBase::s_ct;




/*static*/ void wxNode_wxToolBarToolBase::Init(v8::Handle<v8::Object> target) {
  v8::HandleScope scope;

  v8::Local<v8::FunctionTemplate> t = v8::FunctionTemplate::New(wxNodeObject::NewFunc);
  s_ct = v8::Persistent<v8::FunctionTemplate>::New(t);
  s_ct->InstanceTemplate()->SetInternalFieldCount(2);
  s_ct->SetClassName(v8::String::NewSymbol("ToolBarToolBase"));

  NODE_SET_PROTOTYPE_METHOD(s_ct, "init", _init);
  AddMethods(s_ct);

  target->Set(v8::String::NewSymbol("ToolBarToolBase"), s_ct->GetFunction());
}

/*static*/ void wxNode_wxToolBarToolBase::AddMethods(v8::Handle<v8::FunctionTemplate> target) {
  wxNode_wxObject::AddMethods(target);
  NODE_SET_PROTOTYPE_METHOD(target, "getId", _GetId);
  NODE_SET_PROTOTYPE_METHOD(target, "getControl", _GetControl);
  NODE_SET_PROTOTYPE_METHOD(target, "getToolBar", _GetToolBar);
  NODE_SET_PROTOTYPE_METHOD(target, "isStretchable", _IsStretchable);
  NODE_SET_PROTOTYPE_METHOD(target, "isButton", _IsButton);
  NODE_SET_PROTOTYPE_METHOD(target, "isControl", _IsControl);
  NODE_SET_PROTOTYPE_METHOD(target, "isSeparator", _IsSeparator);
  NODE_SET_PROTOTYPE_METHOD(target, "isStretchableSpace", _IsStretchableSpace);
  NODE_SET_PROTOTYPE_METHOD(target, "getStyle", _GetStyle);
  NODE_SET_PROTOTYPE_METHOD(target, "getKind", _GetKind);
  NODE_SET_PROTOTYPE_METHOD(target, "makeStretchable", _MakeStretchable);
  NODE_SET_PROTOTYPE_METHOD(target, "isEnabled", _IsEnabled);
  NODE_SET_PROTOTYPE_METHOD(target, "isToggled", _IsToggled);
  NODE_SET_PROTOTYPE_METHOD(target, "canBeToggled", _CanBeToggled);
  NODE_SET_PROTOTYPE_METHOD(target, "getNormalBitmap", _GetNormalBitmap);
  NODE_SET_PROTOTYPE_METHOD(target, "getDisabledBitmap", _GetDisabledBitmap);
  NODE_SET_PROTOTYPE_METHOD(target, "getBitmap", _GetBitmap);
  NODE_SET_PROTOTYPE_METHOD(target, "getLabel", _GetLabel);
  NODE_SET_PROTOTYPE_METHOD(target, "getShortHelp", _GetShortHelp);
  NODE_SET_PROTOTYPE_METHOD(target, "getLongHelp", _GetLongHelp);
  NODE_SET_PROTOTYPE_METHOD(target, "getClientData", _GetClientData);
  NODE_SET_PROTOTYPE_METHOD(target, "enable", _Enable);
  NODE_SET_PROTOTYPE_METHOD(target, "toggle", _Toggle);
  NODE_SET_PROTOTYPE_METHOD(target, "setToggle", _SetToggle);
  NODE_SET_PROTOTYPE_METHOD(target, "setShortHelp", _SetShortHelp);
  NODE_SET_PROTOTYPE_METHOD(target, "setLongHelp", _SetLongHelp);
  NODE_SET_PROTOTYPE_METHOD(target, "setNormalBitmap", _SetNormalBitmap);
  NODE_SET_PROTOTYPE_METHOD(target, "setDisabledBitmap", _SetDisabledBitmap);
  NODE_SET_PROTOTYPE_METHOD(target, "setLabel", _SetLabel);
  NODE_SET_PROTOTYPE_METHOD(target, "setClientData", _SetClientData);
  NODE_SET_PROTOTYPE_METHOD(target, "detach", _Detach);
  NODE_SET_PROTOTYPE_METHOD(target, "attach", _Attach);
  NODE_SET_PROTOTYPE_METHOD(target, "setDropdownMenu", _SetDropdownMenu);
  NODE_SET_PROTOTYPE_METHOD(target, "getDropdownMenu", _GetDropdownMenu);
  NODE_SET_PROTOTYPE_METHOD(target, "getClassInfo", _GetClassInfo);
  NODE_SET_METHOD(target, "wxCreateObject", _wxCreateObject);
  
  
}

/*static*/ v8::Handle<v8::Value> wxNode_wxToolBarToolBase::New(const wxNode_wxToolBarToolBase* obj) {
  v8::HandleScope scope;

  if(obj == NULL) {
    return scope.Close(v8::Null());
  }
  
  v8::Local<v8::FunctionTemplate> returnObjFt = v8::FunctionTemplate::New(wxNodeObject::NewFunc);
  returnObjFt->InstanceTemplate()->SetInternalFieldCount(2);
  returnObjFt->SetClassName(v8::String::NewSymbol("ToolBarToolBase"));
  wxNode_wxToolBarToolBase::AddMethods(returnObjFt);

  v8::Local<v8::Function> returnObjFn = returnObjFt->GetFunction();

  v8::Local<v8::Object> returnObj = returnObjFn->CallAsConstructor(0, new v8::Local<v8::Value>[0])->ToObject();
  returnObj->SetPointerInInternalField(0, (void*)obj);
  NodeExEvtHandlerImpl* evtHandler = dynamic_cast<NodeExEvtHandlerImpl*>((wxNode_wxToolBarToolBase*)obj);
  returnObj->SetPointerInInternalField(1, evtHandler);

  return scope.Close(returnObj);
}

/*static*/ v8::Handle<v8::Value> wxNode_wxToolBarToolBase::New(const wxToolBarToolBase* obj) {
  v8::HandleScope scope;

  if(obj == NULL) {
    return scope.Close(v8::Null());
  }
  
  v8::Local<v8::FunctionTemplate> returnObjFt = v8::FunctionTemplate::New(wxNodeObject::NewFunc);
  returnObjFt->InstanceTemplate()->SetInternalFieldCount(2);
  returnObjFt->SetClassName(v8::String::NewSymbol("ToolBarToolBase"));
  wxNode_wxToolBarToolBase::AddMethods(returnObjFt);

  v8::Local<v8::Function> returnObjFn = returnObjFt->GetFunction();
  v8::Local<v8::Object> returnObj = returnObjFn->CallAsConstructor(0, new v8::Local<v8::Value>[0])->ToObject();
  returnObj->SetPointerInInternalField(0, (void*)obj);
  NodeExEvtHandlerImplWrap* wrap = new NodeExEvtHandlerImplWrap(returnObj);
  NodeExEvtHandlerImpl* evtHandler = dynamic_cast<NodeExEvtHandlerImpl*>(wrap);
  returnObj->SetPointerInInternalField(1, evtHandler);

  return scope.Close(returnObj);
}

/*static*/ v8::Handle<v8::Value> wxNode_wxToolBarToolBase::NewCopy(const wxToolBarToolBase& obj) {
  return v8::Undefined();
}

/*static*/ bool wxNode_wxToolBarToolBase::AssignableFrom(const v8::Handle<v8::String>& className) {
  v8::String::AsciiValue classNameStr(className);
  return AssignableFrom(*classNameStr);
}

/*static*/ bool wxNode_wxToolBarToolBase::AssignableFrom(const char* className) {
  if(!strcmp("ToolBarToolBase", className)) { return true; }
  

  return false;
}

/*static*/ v8::Handle<v8::Value> wxNode_wxToolBarToolBase::_init(const v8::Arguments& args) {
  v8::HandleScope scope;

  

  std::ostringstream errStr;
  errStr << "Could not find matching constructor for arguments (class name: wxToolBarToolBase).\n";
  errStr << "  arg count: " << args.Length() << "\n";
  for(int i = 0; i < args.Length(); i++) {
    v8::String::AsciiValue argStr(args[i]);
    errStr << "  arg[" << i << "]: " << *argStr << "\n";
  }
  return v8::ThrowException(v8::Exception::TypeError(v8::String::New(errStr.str().c_str())));
}


/*static*/ v8::Handle<v8::Value> wxNode_wxToolBarToolBase::_GetId(const v8::Arguments& args) {
  v8::HandleScope scope;
  wxNode_wxToolBarToolBase* self = unwrap<wxNode_wxToolBarToolBase>(args.This());

  
  /*
   * id: _18178
   */
  if(args.Length() == 0) {
    

    int returnVal = self->GetId();

    return scope.Close(v8::Number::New(returnVal));
  }
  

  std::ostringstream errStr;
  errStr << "Could not find matching method for arguments (method name: wxToolBarToolBase::GetId).\n";
  errStr << "  arg count: " << args.Length() << "\n";
  for(int i = 0; i < args.Length(); i++) {
    v8::String::AsciiValue argStr(args[i]);
    errStr << "  arg[" << i << "]: " << *argStr << "\n";
  }
  return v8::ThrowException(v8::Exception::TypeError(v8::String::New(errStr.str().c_str())));
}

/*static*/ v8::Handle<v8::Value> wxNode_wxToolBarToolBase::_GetControl(const v8::Arguments& args) {
  v8::HandleScope scope;
  wxNode_wxToolBarToolBase* self = unwrap<wxNode_wxToolBarToolBase>(args.This());

  
  /*
   * id: _18179
   */
  if(args.Length() == 0) {
    

    wxControl* returnVal = self->GetControl();

    return scope.Close(wxNode_wxControl::New(returnVal));
  }
  

  std::ostringstream errStr;
  errStr << "Could not find matching method for arguments (method name: wxToolBarToolBase::GetControl).\n";
  errStr << "  arg count: " << args.Length() << "\n";
  for(int i = 0; i < args.Length(); i++) {
    v8::String::AsciiValue argStr(args[i]);
    errStr << "  arg[" << i << "]: " << *argStr << "\n";
  }
  return v8::ThrowException(v8::Exception::TypeError(v8::String::New(errStr.str().c_str())));
}

/*static*/ v8::Handle<v8::Value> wxNode_wxToolBarToolBase::_GetToolBar(const v8::Arguments& args) {
  v8::HandleScope scope;
  wxNode_wxToolBarToolBase* self = unwrap<wxNode_wxToolBarToolBase>(args.This());

  
  /*
   * id: _18180
   */
  if(args.Length() == 0) {
    

    wxToolBarBase* returnVal = self->GetToolBar();

    return scope.Close(wxNode_wxToolBarBase::New(returnVal));
  }
  

  std::ostringstream errStr;
  errStr << "Could not find matching method for arguments (method name: wxToolBarToolBase::GetToolBar).\n";
  errStr << "  arg count: " << args.Length() << "\n";
  for(int i = 0; i < args.Length(); i++) {
    v8::String::AsciiValue argStr(args[i]);
    errStr << "  arg[" << i << "]: " << *argStr << "\n";
  }
  return v8::ThrowException(v8::Exception::TypeError(v8::String::New(errStr.str().c_str())));
}

/*static*/ v8::Handle<v8::Value> wxNode_wxToolBarToolBase::_IsStretchable(const v8::Arguments& args) {
  v8::HandleScope scope;
  wxNode_wxToolBarToolBase* self = unwrap<wxNode_wxToolBarToolBase>(args.This());

  
  /*
   * id: _18181
   */
  if(args.Length() == 0) {
    

    bool returnVal = self->IsStretchable();

    return scope.Close(v8::Boolean::New(returnVal));
  }
  

  std::ostringstream errStr;
  errStr << "Could not find matching method for arguments (method name: wxToolBarToolBase::IsStretchable).\n";
  errStr << "  arg count: " << args.Length() << "\n";
  for(int i = 0; i < args.Length(); i++) {
    v8::String::AsciiValue argStr(args[i]);
    errStr << "  arg[" << i << "]: " << *argStr << "\n";
  }
  return v8::ThrowException(v8::Exception::TypeError(v8::String::New(errStr.str().c_str())));
}

/*static*/ v8::Handle<v8::Value> wxNode_wxToolBarToolBase::_IsButton(const v8::Arguments& args) {
  v8::HandleScope scope;
  wxNode_wxToolBarToolBase* self = unwrap<wxNode_wxToolBarToolBase>(args.This());

  
  /*
   * id: _18182
   */
  if(args.Length() == 0) {
    

    bool returnVal = self->IsButton();

    return scope.Close(v8::Boolean::New(returnVal));
  }
  

  std::ostringstream errStr;
  errStr << "Could not find matching method for arguments (method name: wxToolBarToolBase::IsButton).\n";
  errStr << "  arg count: " << args.Length() << "\n";
  for(int i = 0; i < args.Length(); i++) {
    v8::String::AsciiValue argStr(args[i]);
    errStr << "  arg[" << i << "]: " << *argStr << "\n";
  }
  return v8::ThrowException(v8::Exception::TypeError(v8::String::New(errStr.str().c_str())));
}

/*static*/ v8::Handle<v8::Value> wxNode_wxToolBarToolBase::_IsControl(const v8::Arguments& args) {
  v8::HandleScope scope;
  wxNode_wxToolBarToolBase* self = unwrap<wxNode_wxToolBarToolBase>(args.This());

  
  /*
   * id: _18183
   */
  if(args.Length() == 0) {
    

    bool returnVal = self->IsControl();

    return scope.Close(v8::Boolean::New(returnVal));
  }
  

  std::ostringstream errStr;
  errStr << "Could not find matching method for arguments (method name: wxToolBarToolBase::IsControl).\n";
  errStr << "  arg count: " << args.Length() << "\n";
  for(int i = 0; i < args.Length(); i++) {
    v8::String::AsciiValue argStr(args[i]);
    errStr << "  arg[" << i << "]: " << *argStr << "\n";
  }
  return v8::ThrowException(v8::Exception::TypeError(v8::String::New(errStr.str().c_str())));
}

/*static*/ v8::Handle<v8::Value> wxNode_wxToolBarToolBase::_IsSeparator(const v8::Arguments& args) {
  v8::HandleScope scope;
  wxNode_wxToolBarToolBase* self = unwrap<wxNode_wxToolBarToolBase>(args.This());

  
  /*
   * id: _18184
   */
  if(args.Length() == 0) {
    

    bool returnVal = self->IsSeparator();

    return scope.Close(v8::Boolean::New(returnVal));
  }
  

  std::ostringstream errStr;
  errStr << "Could not find matching method for arguments (method name: wxToolBarToolBase::IsSeparator).\n";
  errStr << "  arg count: " << args.Length() << "\n";
  for(int i = 0; i < args.Length(); i++) {
    v8::String::AsciiValue argStr(args[i]);
    errStr << "  arg[" << i << "]: " << *argStr << "\n";
  }
  return v8::ThrowException(v8::Exception::TypeError(v8::String::New(errStr.str().c_str())));
}

/*static*/ v8::Handle<v8::Value> wxNode_wxToolBarToolBase::_IsStretchableSpace(const v8::Arguments& args) {
  v8::HandleScope scope;
  wxNode_wxToolBarToolBase* self = unwrap<wxNode_wxToolBarToolBase>(args.This());

  
  /*
   * id: _18185
   */
  if(args.Length() == 0) {
    

    bool returnVal = self->IsStretchableSpace();

    return scope.Close(v8::Boolean::New(returnVal));
  }
  

  std::ostringstream errStr;
  errStr << "Could not find matching method for arguments (method name: wxToolBarToolBase::IsStretchableSpace).\n";
  errStr << "  arg count: " << args.Length() << "\n";
  for(int i = 0; i < args.Length(); i++) {
    v8::String::AsciiValue argStr(args[i]);
    errStr << "  arg[" << i << "]: " << *argStr << "\n";
  }
  return v8::ThrowException(v8::Exception::TypeError(v8::String::New(errStr.str().c_str())));
}

/*static*/ v8::Handle<v8::Value> wxNode_wxToolBarToolBase::_GetStyle(const v8::Arguments& args) {
  v8::HandleScope scope;
  wxNode_wxToolBarToolBase* self = unwrap<wxNode_wxToolBarToolBase>(args.This());

  
  /*
   * id: _18186
   */
  if(args.Length() == 0) {
    

    int returnVal = self->GetStyle();

    return scope.Close(v8::Number::New(returnVal));
  }
  

  std::ostringstream errStr;
  errStr << "Could not find matching method for arguments (method name: wxToolBarToolBase::GetStyle).\n";
  errStr << "  arg count: " << args.Length() << "\n";
  for(int i = 0; i < args.Length(); i++) {
    v8::String::AsciiValue argStr(args[i]);
    errStr << "  arg[" << i << "]: " << *argStr << "\n";
  }
  return v8::ThrowException(v8::Exception::TypeError(v8::String::New(errStr.str().c_str())));
}

/*static*/ v8::Handle<v8::Value> wxNode_wxToolBarToolBase::_GetKind(const v8::Arguments& args) {
  v8::HandleScope scope;
  wxNode_wxToolBarToolBase* self = unwrap<wxNode_wxToolBarToolBase>(args.This());

  
  /*
   * id: _18187
   */
  if(args.Length() == 0) {
    

    int returnVal = (int)self->GetKind();

    return scope.Close(v8::Number::New(returnVal));
  }
  

  std::ostringstream errStr;
  errStr << "Could not find matching method for arguments (method name: wxToolBarToolBase::GetKind).\n";
  errStr << "  arg count: " << args.Length() << "\n";
  for(int i = 0; i < args.Length(); i++) {
    v8::String::AsciiValue argStr(args[i]);
    errStr << "  arg[" << i << "]: " << *argStr << "\n";
  }
  return v8::ThrowException(v8::Exception::TypeError(v8::String::New(errStr.str().c_str())));
}

/*static*/ v8::Handle<v8::Value> wxNode_wxToolBarToolBase::_MakeStretchable(const v8::Arguments& args) {
  v8::HandleScope scope;
  wxNode_wxToolBarToolBase* self = unwrap<wxNode_wxToolBarToolBase>(args.This());

  
  /*
   * id: _18188
   */
  if(args.Length() == 0) {
    

    self->MakeStretchable();

    return v8::Undefined();
  }
  

  std::ostringstream errStr;
  errStr << "Could not find matching method for arguments (method name: wxToolBarToolBase::MakeStretchable).\n";
  errStr << "  arg count: " << args.Length() << "\n";
  for(int i = 0; i < args.Length(); i++) {
    v8::String::AsciiValue argStr(args[i]);
    errStr << "  arg[" << i << "]: " << *argStr << "\n";
  }
  return v8::ThrowException(v8::Exception::TypeError(v8::String::New(errStr.str().c_str())));
}

/*static*/ v8::Handle<v8::Value> wxNode_wxToolBarToolBase::_IsEnabled(const v8::Arguments& args) {
  v8::HandleScope scope;
  wxNode_wxToolBarToolBase* self = unwrap<wxNode_wxToolBarToolBase>(args.This());

  
  /*
   * id: _18189
   */
  if(args.Length() == 0) {
    

    bool returnVal = self->IsEnabled();

    return scope.Close(v8::Boolean::New(returnVal));
  }
  

  std::ostringstream errStr;
  errStr << "Could not find matching method for arguments (method name: wxToolBarToolBase::IsEnabled).\n";
  errStr << "  arg count: " << args.Length() << "\n";
  for(int i = 0; i < args.Length(); i++) {
    v8::String::AsciiValue argStr(args[i]);
    errStr << "  arg[" << i << "]: " << *argStr << "\n";
  }
  return v8::ThrowException(v8::Exception::TypeError(v8::String::New(errStr.str().c_str())));
}

/*static*/ v8::Handle<v8::Value> wxNode_wxToolBarToolBase::_IsToggled(const v8::Arguments& args) {
  v8::HandleScope scope;
  wxNode_wxToolBarToolBase* self = unwrap<wxNode_wxToolBarToolBase>(args.This());

  
  /*
   * id: _18190
   */
  if(args.Length() == 0) {
    

    bool returnVal = self->IsToggled();

    return scope.Close(v8::Boolean::New(returnVal));
  }
  

  std::ostringstream errStr;
  errStr << "Could not find matching method for arguments (method name: wxToolBarToolBase::IsToggled).\n";
  errStr << "  arg count: " << args.Length() << "\n";
  for(int i = 0; i < args.Length(); i++) {
    v8::String::AsciiValue argStr(args[i]);
    errStr << "  arg[" << i << "]: " << *argStr << "\n";
  }
  return v8::ThrowException(v8::Exception::TypeError(v8::String::New(errStr.str().c_str())));
}

/*static*/ v8::Handle<v8::Value> wxNode_wxToolBarToolBase::_CanBeToggled(const v8::Arguments& args) {
  v8::HandleScope scope;
  wxNode_wxToolBarToolBase* self = unwrap<wxNode_wxToolBarToolBase>(args.This());

  
  /*
   * id: _18191
   */
  if(args.Length() == 0) {
    

    bool returnVal = self->CanBeToggled();

    return scope.Close(v8::Boolean::New(returnVal));
  }
  

  std::ostringstream errStr;
  errStr << "Could not find matching method for arguments (method name: wxToolBarToolBase::CanBeToggled).\n";
  errStr << "  arg count: " << args.Length() << "\n";
  for(int i = 0; i < args.Length(); i++) {
    v8::String::AsciiValue argStr(args[i]);
    errStr << "  arg[" << i << "]: " << *argStr << "\n";
  }
  return v8::ThrowException(v8::Exception::TypeError(v8::String::New(errStr.str().c_str())));
}

/*static*/ v8::Handle<v8::Value> wxNode_wxToolBarToolBase::_GetNormalBitmap(const v8::Arguments& args) {
  v8::HandleScope scope;
  wxNode_wxToolBarToolBase* self = unwrap<wxNode_wxToolBarToolBase>(args.This());

  
  /*
   * id: _18192
   */
  if(args.Length() == 0) {
    

    wxBitmap returnVal = self->GetNormalBitmap();

    return scope.Close(wxNode_wxBitmap::NewCopy(returnVal));
  }
  

  std::ostringstream errStr;
  errStr << "Could not find matching method for arguments (method name: wxToolBarToolBase::GetNormalBitmap).\n";
  errStr << "  arg count: " << args.Length() << "\n";
  for(int i = 0; i < args.Length(); i++) {
    v8::String::AsciiValue argStr(args[i]);
    errStr << "  arg[" << i << "]: " << *argStr << "\n";
  }
  return v8::ThrowException(v8::Exception::TypeError(v8::String::New(errStr.str().c_str())));
}

/*static*/ v8::Handle<v8::Value> wxNode_wxToolBarToolBase::_GetDisabledBitmap(const v8::Arguments& args) {
  v8::HandleScope scope;
  wxNode_wxToolBarToolBase* self = unwrap<wxNode_wxToolBarToolBase>(args.This());

  
  /*
   * id: _18193
   */
  if(args.Length() == 0) {
    

    wxBitmap returnVal = self->GetDisabledBitmap();

    return scope.Close(wxNode_wxBitmap::NewCopy(returnVal));
  }
  

  std::ostringstream errStr;
  errStr << "Could not find matching method for arguments (method name: wxToolBarToolBase::GetDisabledBitmap).\n";
  errStr << "  arg count: " << args.Length() << "\n";
  for(int i = 0; i < args.Length(); i++) {
    v8::String::AsciiValue argStr(args[i]);
    errStr << "  arg[" << i << "]: " << *argStr << "\n";
  }
  return v8::ThrowException(v8::Exception::TypeError(v8::String::New(errStr.str().c_str())));
}

/*static*/ v8::Handle<v8::Value> wxNode_wxToolBarToolBase::_GetBitmap(const v8::Arguments& args) {
  v8::HandleScope scope;
  wxNode_wxToolBarToolBase* self = unwrap<wxNode_wxToolBarToolBase>(args.This());

  
  /*
   * id: _18194
   */
  if(args.Length() == 0) {
    

    wxBitmap returnVal = self->GetBitmap();

    return scope.Close(wxNode_wxBitmap::NewCopy(returnVal));
  }
  

  std::ostringstream errStr;
  errStr << "Could not find matching method for arguments (method name: wxToolBarToolBase::GetBitmap).\n";
  errStr << "  arg count: " << args.Length() << "\n";
  for(int i = 0; i < args.Length(); i++) {
    v8::String::AsciiValue argStr(args[i]);
    errStr << "  arg[" << i << "]: " << *argStr << "\n";
  }
  return v8::ThrowException(v8::Exception::TypeError(v8::String::New(errStr.str().c_str())));
}

/*static*/ v8::Handle<v8::Value> wxNode_wxToolBarToolBase::_GetLabel(const v8::Arguments& args) {
  v8::HandleScope scope;
  wxNode_wxToolBarToolBase* self = unwrap<wxNode_wxToolBarToolBase>(args.This());

  
  /*
   * id: _18195
   */
  if(args.Length() == 0) {
    

    wxString returnVal = self->GetLabel();

    return scope.Close(v8::String::New(returnVal.mb_str()));
  }
  

  std::ostringstream errStr;
  errStr << "Could not find matching method for arguments (method name: wxToolBarToolBase::GetLabel).\n";
  errStr << "  arg count: " << args.Length() << "\n";
  for(int i = 0; i < args.Length(); i++) {
    v8::String::AsciiValue argStr(args[i]);
    errStr << "  arg[" << i << "]: " << *argStr << "\n";
  }
  return v8::ThrowException(v8::Exception::TypeError(v8::String::New(errStr.str().c_str())));
}

/*static*/ v8::Handle<v8::Value> wxNode_wxToolBarToolBase::_GetShortHelp(const v8::Arguments& args) {
  v8::HandleScope scope;
  wxNode_wxToolBarToolBase* self = unwrap<wxNode_wxToolBarToolBase>(args.This());

  
  /*
   * id: _18196
   */
  if(args.Length() == 0) {
    

    wxString returnVal = self->GetShortHelp();

    return scope.Close(v8::String::New(returnVal.mb_str()));
  }
  

  std::ostringstream errStr;
  errStr << "Could not find matching method for arguments (method name: wxToolBarToolBase::GetShortHelp).\n";
  errStr << "  arg count: " << args.Length() << "\n";
  for(int i = 0; i < args.Length(); i++) {
    v8::String::AsciiValue argStr(args[i]);
    errStr << "  arg[" << i << "]: " << *argStr << "\n";
  }
  return v8::ThrowException(v8::Exception::TypeError(v8::String::New(errStr.str().c_str())));
}

/*static*/ v8::Handle<v8::Value> wxNode_wxToolBarToolBase::_GetLongHelp(const v8::Arguments& args) {
  v8::HandleScope scope;
  wxNode_wxToolBarToolBase* self = unwrap<wxNode_wxToolBarToolBase>(args.This());

  
  /*
   * id: _18197
   */
  if(args.Length() == 0) {
    

    wxString returnVal = self->GetLongHelp();

    return scope.Close(v8::String::New(returnVal.mb_str()));
  }
  

  std::ostringstream errStr;
  errStr << "Could not find matching method for arguments (method name: wxToolBarToolBase::GetLongHelp).\n";
  errStr << "  arg count: " << args.Length() << "\n";
  for(int i = 0; i < args.Length(); i++) {
    v8::String::AsciiValue argStr(args[i]);
    errStr << "  arg[" << i << "]: " << *argStr << "\n";
  }
  return v8::ThrowException(v8::Exception::TypeError(v8::String::New(errStr.str().c_str())));
}

/*static*/ v8::Handle<v8::Value> wxNode_wxToolBarToolBase::_GetClientData(const v8::Arguments& args) {
  v8::HandleScope scope;
  wxNode_wxToolBarToolBase* self = unwrap<wxNode_wxToolBarToolBase>(args.This());

  
  /*
   * id: _18198
   */
  if(args.Length() == 0) {
    

    wxObject* returnVal = self->GetClientData();

    return scope.Close(wxNode_wxObject::New(returnVal));
  }
  

  std::ostringstream errStr;
  errStr << "Could not find matching method for arguments (method name: wxToolBarToolBase::GetClientData).\n";
  errStr << "  arg count: " << args.Length() << "\n";
  for(int i = 0; i < args.Length(); i++) {
    v8::String::AsciiValue argStr(args[i]);
    errStr << "  arg[" << i << "]: " << *argStr << "\n";
  }
  return v8::ThrowException(v8::Exception::TypeError(v8::String::New(errStr.str().c_str())));
}

/*static*/ v8::Handle<v8::Value> wxNode_wxToolBarToolBase::_Enable(const v8::Arguments& args) {
  v8::HandleScope scope;
  wxNode_wxToolBarToolBase* self = unwrap<wxNode_wxToolBarToolBase>(args.This());

  
  /*
   * id: _18199
   */
  if(args.Length() == 1 && args[0]->IsBoolean()) {
    bool enable = args[0]->ToBoolean()->Value(); /* type: _14830  */
    

    bool returnVal = self->Enable(enable);

    return scope.Close(v8::Boolean::New(returnVal));
  }
  

  std::ostringstream errStr;
  errStr << "Could not find matching method for arguments (method name: wxToolBarToolBase::Enable).\n";
  errStr << "  arg count: " << args.Length() << "\n";
  for(int i = 0; i < args.Length(); i++) {
    v8::String::AsciiValue argStr(args[i]);
    errStr << "  arg[" << i << "]: " << *argStr << "\n";
  }
  return v8::ThrowException(v8::Exception::TypeError(v8::String::New(errStr.str().c_str())));
}

/*static*/ v8::Handle<v8::Value> wxNode_wxToolBarToolBase::_Toggle(const v8::Arguments& args) {
  v8::HandleScope scope;
  wxNode_wxToolBarToolBase* self = unwrap<wxNode_wxToolBarToolBase>(args.This());

  
  /*
   * id: _18200
   */
  if(args.Length() == 1 && args[0]->IsBoolean()) {
    bool toggle = args[0]->ToBoolean()->Value(); /* type: _14830  */
    

    bool returnVal = self->Toggle(toggle);

    return scope.Close(v8::Boolean::New(returnVal));
  }
  
  /*
   * id: _18204
   */
  if(args.Length() == 0) {
    

    self->Toggle();

    return v8::Undefined();
  }
  

  std::ostringstream errStr;
  errStr << "Could not find matching method for arguments (method name: wxToolBarToolBase::Toggle).\n";
  errStr << "  arg count: " << args.Length() << "\n";
  for(int i = 0; i < args.Length(); i++) {
    v8::String::AsciiValue argStr(args[i]);
    errStr << "  arg[" << i << "]: " << *argStr << "\n";
  }
  return v8::ThrowException(v8::Exception::TypeError(v8::String::New(errStr.str().c_str())));
}

/*static*/ v8::Handle<v8::Value> wxNode_wxToolBarToolBase::_SetToggle(const v8::Arguments& args) {
  v8::HandleScope scope;
  wxNode_wxToolBarToolBase* self = unwrap<wxNode_wxToolBarToolBase>(args.This());

  
  /*
   * id: _18201
   */
  if(args.Length() == 1 && args[0]->IsBoolean()) {
    bool toggle = args[0]->ToBoolean()->Value(); /* type: _14830  */
    

    bool returnVal = self->SetToggle(toggle);

    return scope.Close(v8::Boolean::New(returnVal));
  }
  

  std::ostringstream errStr;
  errStr << "Could not find matching method for arguments (method name: wxToolBarToolBase::SetToggle).\n";
  errStr << "  arg count: " << args.Length() << "\n";
  for(int i = 0; i < args.Length(); i++) {
    v8::String::AsciiValue argStr(args[i]);
    errStr << "  arg[" << i << "]: " << *argStr << "\n";
  }
  return v8::ThrowException(v8::Exception::TypeError(v8::String::New(errStr.str().c_str())));
}

/*static*/ v8::Handle<v8::Value> wxNode_wxToolBarToolBase::_SetShortHelp(const v8::Arguments& args) {
  v8::HandleScope scope;
  wxNode_wxToolBarToolBase* self = unwrap<wxNode_wxToolBarToolBase>(args.This());

  
  /*
   * id: _18202
   */
  if(args.Length() == 1 && args[0]->IsString()) {
    v8::String::AsciiValue help(args[0]->ToString()); /* type: _14975  */
    

    bool returnVal = self->SetShortHelp(*help);

    return scope.Close(v8::Boolean::New(returnVal));
  }
  

  std::ostringstream errStr;
  errStr << "Could not find matching method for arguments (method name: wxToolBarToolBase::SetShortHelp).\n";
  errStr << "  arg count: " << args.Length() << "\n";
  for(int i = 0; i < args.Length(); i++) {
    v8::String::AsciiValue argStr(args[i]);
    errStr << "  arg[" << i << "]: " << *argStr << "\n";
  }
  return v8::ThrowException(v8::Exception::TypeError(v8::String::New(errStr.str().c_str())));
}

/*static*/ v8::Handle<v8::Value> wxNode_wxToolBarToolBase::_SetLongHelp(const v8::Arguments& args) {
  v8::HandleScope scope;
  wxNode_wxToolBarToolBase* self = unwrap<wxNode_wxToolBarToolBase>(args.This());

  
  /*
   * id: _18203
   */
  if(args.Length() == 1 && args[0]->IsString()) {
    v8::String::AsciiValue help(args[0]->ToString()); /* type: _14975  */
    

    bool returnVal = self->SetLongHelp(*help);

    return scope.Close(v8::Boolean::New(returnVal));
  }
  

  std::ostringstream errStr;
  errStr << "Could not find matching method for arguments (method name: wxToolBarToolBase::SetLongHelp).\n";
  errStr << "  arg count: " << args.Length() << "\n";
  for(int i = 0; i < args.Length(); i++) {
    v8::String::AsciiValue argStr(args[i]);
    errStr << "  arg[" << i << "]: " << *argStr << "\n";
  }
  return v8::ThrowException(v8::Exception::TypeError(v8::String::New(errStr.str().c_str())));
}

/*static*/ v8::Handle<v8::Value> wxNode_wxToolBarToolBase::_SetNormalBitmap(const v8::Arguments& args) {
  v8::HandleScope scope;
  wxNode_wxToolBarToolBase* self = unwrap<wxNode_wxToolBarToolBase>(args.This());

  
  /*
   * id: _18205
   */
  if(args.Length() == 1 && (args[0]->IsNull() || (args[0]->IsObject() && wxNode_wxBitmap::AssignableFrom(args[0]->ToObject()->GetConstructorName())))) {
    wxNode_wxBitmap* bmp = args[0]->IsNull() ? NULL : wxNodeObject::unwrap<wxNode_wxBitmap>(args[0]->ToObject()); /* type: _15645  */
    

    self->SetNormalBitmap(*bmp);

    return v8::Undefined();
  }
  

  std::ostringstream errStr;
  errStr << "Could not find matching method for arguments (method name: wxToolBarToolBase::SetNormalBitmap).\n";
  errStr << "  arg count: " << args.Length() << "\n";
  for(int i = 0; i < args.Length(); i++) {
    v8::String::AsciiValue argStr(args[i]);
    errStr << "  arg[" << i << "]: " << *argStr << "\n";
  }
  return v8::ThrowException(v8::Exception::TypeError(v8::String::New(errStr.str().c_str())));
}

/*static*/ v8::Handle<v8::Value> wxNode_wxToolBarToolBase::_SetDisabledBitmap(const v8::Arguments& args) {
  v8::HandleScope scope;
  wxNode_wxToolBarToolBase* self = unwrap<wxNode_wxToolBarToolBase>(args.This());

  
  /*
   * id: _18206
   */
  if(args.Length() == 1 && (args[0]->IsNull() || (args[0]->IsObject() && wxNode_wxBitmap::AssignableFrom(args[0]->ToObject()->GetConstructorName())))) {
    wxNode_wxBitmap* bmp = args[0]->IsNull() ? NULL : wxNodeObject::unwrap<wxNode_wxBitmap>(args[0]->ToObject()); /* type: _15645  */
    

    self->SetDisabledBitmap(*bmp);

    return v8::Undefined();
  }
  

  std::ostringstream errStr;
  errStr << "Could not find matching method for arguments (method name: wxToolBarToolBase::SetDisabledBitmap).\n";
  errStr << "  arg count: " << args.Length() << "\n";
  for(int i = 0; i < args.Length(); i++) {
    v8::String::AsciiValue argStr(args[i]);
    errStr << "  arg[" << i << "]: " << *argStr << "\n";
  }
  return v8::ThrowException(v8::Exception::TypeError(v8::String::New(errStr.str().c_str())));
}

/*static*/ v8::Handle<v8::Value> wxNode_wxToolBarToolBase::_SetLabel(const v8::Arguments& args) {
  v8::HandleScope scope;
  wxNode_wxToolBarToolBase* self = unwrap<wxNode_wxToolBarToolBase>(args.This());

  
  /*
   * id: _18207
   */
  if(args.Length() == 1 && args[0]->IsString()) {
    v8::String::AsciiValue label(args[0]->ToString()); /* type: _14975  */
    

    self->SetLabel(*label);

    return v8::Undefined();
  }
  

  std::ostringstream errStr;
  errStr << "Could not find matching method for arguments (method name: wxToolBarToolBase::SetLabel).\n";
  errStr << "  arg count: " << args.Length() << "\n";
  for(int i = 0; i < args.Length(); i++) {
    v8::String::AsciiValue argStr(args[i]);
    errStr << "  arg[" << i << "]: " << *argStr << "\n";
  }
  return v8::ThrowException(v8::Exception::TypeError(v8::String::New(errStr.str().c_str())));
}

/*static*/ v8::Handle<v8::Value> wxNode_wxToolBarToolBase::_SetClientData(const v8::Arguments& args) {
  v8::HandleScope scope;
  wxNode_wxToolBarToolBase* self = unwrap<wxNode_wxToolBarToolBase>(args.This());

  
  /*
   * id: _18208
   */
  if(args.Length() == 1 && (args[0]->IsNull() || (args[0]->IsObject() && wxNode_wxObject::AssignableFrom(args[0]->ToObject()->GetConstructorName())))) {
    wxNode_wxObject* clientData = args[0]->IsNull() ? NULL : wxNodeObject::unwrap<wxNode_wxObject>(args[0]->ToObject()); /* type: _15746 * */
    

    self->SetClientData(clientData);

    return v8::Undefined();
  }
  

  std::ostringstream errStr;
  errStr << "Could not find matching method for arguments (method name: wxToolBarToolBase::SetClientData).\n";
  errStr << "  arg count: " << args.Length() << "\n";
  for(int i = 0; i < args.Length(); i++) {
    v8::String::AsciiValue argStr(args[i]);
    errStr << "  arg[" << i << "]: " << *argStr << "\n";
  }
  return v8::ThrowException(v8::Exception::TypeError(v8::String::New(errStr.str().c_str())));
}

/*static*/ v8::Handle<v8::Value> wxNode_wxToolBarToolBase::_Detach(const v8::Arguments& args) {
  v8::HandleScope scope;
  wxNode_wxToolBarToolBase* self = unwrap<wxNode_wxToolBarToolBase>(args.This());

  
  /*
   * id: _18209
   */
  if(args.Length() == 0) {
    

    self->Detach();

    return v8::Undefined();
  }
  

  std::ostringstream errStr;
  errStr << "Could not find matching method for arguments (method name: wxToolBarToolBase::Detach).\n";
  errStr << "  arg count: " << args.Length() << "\n";
  for(int i = 0; i < args.Length(); i++) {
    v8::String::AsciiValue argStr(args[i]);
    errStr << "  arg[" << i << "]: " << *argStr << "\n";
  }
  return v8::ThrowException(v8::Exception::TypeError(v8::String::New(errStr.str().c_str())));
}

/*static*/ v8::Handle<v8::Value> wxNode_wxToolBarToolBase::_Attach(const v8::Arguments& args) {
  v8::HandleScope scope;
  wxNode_wxToolBarToolBase* self = unwrap<wxNode_wxToolBarToolBase>(args.This());

  
  /*
   * id: _18210
   */
  if(args.Length() == 1 && (args[0]->IsNull() || (args[0]->IsObject() && wxNode_wxToolBar::AssignableFrom(args[0]->ToObject()->GetConstructorName())))) {
    wxNode_wxToolBar* tbar = args[0]->IsNull() ? NULL : wxNodeObject::unwrap<wxNode_wxToolBar>(args[0]->ToObject()); /* type: _59694 * */
    

    self->Attach(tbar);

    return v8::Undefined();
  }
  

  std::ostringstream errStr;
  errStr << "Could not find matching method for arguments (method name: wxToolBarToolBase::Attach).\n";
  errStr << "  arg count: " << args.Length() << "\n";
  for(int i = 0; i < args.Length(); i++) {
    v8::String::AsciiValue argStr(args[i]);
    errStr << "  arg[" << i << "]: " << *argStr << "\n";
  }
  return v8::ThrowException(v8::Exception::TypeError(v8::String::New(errStr.str().c_str())));
}

/*static*/ v8::Handle<v8::Value> wxNode_wxToolBarToolBase::_SetDropdownMenu(const v8::Arguments& args) {
  v8::HandleScope scope;
  wxNode_wxToolBarToolBase* self = unwrap<wxNode_wxToolBarToolBase>(args.This());

  
  /*
   * id: _18211
   */
  if(args.Length() == 1 && (args[0]->IsNull() || (args[0]->IsObject() && wxNode_wxMenu::AssignableFrom(args[0]->ToObject()->GetConstructorName())))) {
    wxNode_wxMenu* menu = args[0]->IsNull() ? NULL : wxNodeObject::unwrap<wxNode_wxMenu>(args[0]->ToObject()); /* type: _53132 * */
    

    self->SetDropdownMenu(menu);

    return v8::Undefined();
  }
  

  std::ostringstream errStr;
  errStr << "Could not find matching method for arguments (method name: wxToolBarToolBase::SetDropdownMenu).\n";
  errStr << "  arg count: " << args.Length() << "\n";
  for(int i = 0; i < args.Length(); i++) {
    v8::String::AsciiValue argStr(args[i]);
    errStr << "  arg[" << i << "]: " << *argStr << "\n";
  }
  return v8::ThrowException(v8::Exception::TypeError(v8::String::New(errStr.str().c_str())));
}

/*static*/ v8::Handle<v8::Value> wxNode_wxToolBarToolBase::_GetDropdownMenu(const v8::Arguments& args) {
  v8::HandleScope scope;
  wxNode_wxToolBarToolBase* self = unwrap<wxNode_wxToolBarToolBase>(args.This());

  
  /*
   * id: _18212
   */
  if(args.Length() == 0) {
    

    wxMenu* returnVal = self->GetDropdownMenu();

    return scope.Close(wxNode_wxMenu::New(returnVal));
  }
  

  std::ostringstream errStr;
  errStr << "Could not find matching method for arguments (method name: wxToolBarToolBase::GetDropdownMenu).\n";
  errStr << "  arg count: " << args.Length() << "\n";
  for(int i = 0; i < args.Length(); i++) {
    v8::String::AsciiValue argStr(args[i]);
    errStr << "  arg[" << i << "]: " << *argStr << "\n";
  }
  return v8::ThrowException(v8::Exception::TypeError(v8::String::New(errStr.str().c_str())));
}

/*static*/ v8::Handle<v8::Value> wxNode_wxToolBarToolBase::_GetClassInfo(const v8::Arguments& args) {
  v8::HandleScope scope;
  wxNode_wxToolBarToolBase* self = unwrap<wxNode_wxToolBarToolBase>(args.This());

  
  /*
   * id: _18216
   */
  if(args.Length() == 0) {
    

    wxClassInfo* returnVal = self->GetClassInfo();

    return scope.Close(wxNode_wxClassInfo::New(returnVal));
  }
  

  std::ostringstream errStr;
  errStr << "Could not find matching method for arguments (method name: wxToolBarToolBase::GetClassInfo).\n";
  errStr << "  arg count: " << args.Length() << "\n";
  for(int i = 0; i < args.Length(); i++) {
    v8::String::AsciiValue argStr(args[i]);
    errStr << "  arg[" << i << "]: " << *argStr << "\n";
  }
  return v8::ThrowException(v8::Exception::TypeError(v8::String::New(errStr.str().c_str())));
}

/*static*/ v8::Handle<v8::Value> wxNode_wxToolBarToolBase::_wxCreateObject(const v8::Arguments& args) {
  v8::HandleScope scope;
  wxNode_wxToolBarToolBase* self = unwrap<wxNode_wxToolBarToolBase>(args.This());

  
  /*
   * id: _18217
   */
  if(args.Length() == 0) {
    

    wxObject* returnVal = wxToolBarToolBase::wxCreateObject();

    return scope.Close(wxNode_wxObject::New(returnVal));
  }
  

  std::ostringstream errStr;
  errStr << "Could not find matching method for arguments (method name: wxToolBarToolBase::wxCreateObject).\n";
  errStr << "  arg count: " << args.Length() << "\n";
  for(int i = 0; i < args.Length(); i++) {
    v8::String::AsciiValue argStr(args[i]);
    errStr << "  arg[" << i << "]: " << *argStr << "\n";
  }
  return v8::ThrowException(v8::Exception::TypeError(v8::String::New(errStr.str().c_str())));
}



