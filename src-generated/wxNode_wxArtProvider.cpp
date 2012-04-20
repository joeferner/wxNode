
#include <sstream>
#include "wxNode_wxArtProvider.h"
#include "wxNode_wxEvtHandler.h"
#include "wxNode_wxObject.h"
#include "wxNode_wxBitmap.h"
#include "wxNode_wxSize.h"
#include "wxNode_wxIcon.h"
#include "wxNode_wxIconBundle.h"
#include "wxNode_wxClassInfo.h"


/* static */ v8::Persistent<v8::FunctionTemplate> wxNode_wxArtProvider::s_ct;



/*
 * id: _35328
 */
wxNode_wxArtProvider::wxNode_wxArtProvider(wxArtProvider& arg0)
  : wxArtProvider(arg0)
{

}

/*
 * id: _35329
 */
wxNode_wxArtProvider::wxNode_wxArtProvider()
  : wxArtProvider()
{

}




/*static*/ void wxNode_wxArtProvider::Init(v8::Handle<v8::Object> target) {
  v8::HandleScope scope;

  v8::Local<v8::FunctionTemplate> t = v8::FunctionTemplate::New(wxNodeObject::NewFunc);
  s_ct = v8::Persistent<v8::FunctionTemplate>::New(t);
  s_ct->InstanceTemplate()->SetInternalFieldCount(2);
  s_ct->SetClassName(v8::String::NewSymbol("ArtProvider"));

  NODE_SET_PROTOTYPE_METHOD(s_ct, "init", _init);
  AddMethods(s_ct);

  target->Set(v8::String::NewSymbol("ArtProvider"), s_ct->GetFunction());
}

/*static*/ void wxNode_wxArtProvider::AddMethods(v8::Handle<v8::FunctionTemplate> target) {
  wxNode_wxObject::AddMethods(target);
  NODE_SET_METHOD(target, "hasNativeProvider", _HasNativeProvider);
  NODE_SET_METHOD(target, "push", _Push);
  NODE_SET_METHOD(target, "pushBack", _PushBack);
  NODE_SET_METHOD(target, "pop", _Pop);
  NODE_SET_METHOD(target, "remove", _Remove);
  NODE_SET_METHOD(target, "delete", _Delete);
  NODE_SET_METHOD(target, "getBitmap", _GetBitmap);
  NODE_SET_METHOD(target, "getIcon", _GetIcon);
  NODE_SET_METHOD(target, "getMessageBoxIconId", _GetMessageBoxIconId);
  NODE_SET_METHOD(target, "getMessageBoxIcon", _GetMessageBoxIcon);
  NODE_SET_METHOD(target, "getIconBundle", _GetIconBundle);
  NODE_SET_METHOD(target, "getNativeSizeHint", _GetNativeSizeHint);
  NODE_SET_METHOD(target, "getSizeHint", _GetSizeHint);
  NODE_SET_PROTOTYPE_METHOD(target, "getClassInfo", _GetClassInfo);
  
  
}

/*static*/ v8::Handle<v8::Value> wxNode_wxArtProvider::New(const wxNode_wxArtProvider* obj) {
  v8::HandleScope scope;

  if(obj == NULL) {
    return scope.Close(v8::Null());
  }
  
  v8::Local<v8::FunctionTemplate> returnObjFt = v8::FunctionTemplate::New(wxNodeObject::NewFunc);
  returnObjFt->InstanceTemplate()->SetInternalFieldCount(2);
  returnObjFt->SetClassName(v8::String::NewSymbol("ArtProvider"));
  wxNode_wxArtProvider::AddMethods(returnObjFt);

  v8::Local<v8::Function> returnObjFn = returnObjFt->GetFunction();

  v8::Local<v8::Object> returnObj = returnObjFn->CallAsConstructor(0, new v8::Local<v8::Value>[0])->ToObject();
  returnObj->SetPointerInInternalField(0, (void*)obj);
  NodeExEvtHandlerImpl* evtHandler = dynamic_cast<NodeExEvtHandlerImpl*>((wxNode_wxArtProvider*)obj);
  returnObj->SetPointerInInternalField(1, evtHandler);

  return scope.Close(returnObj);
}

/*static*/ v8::Handle<v8::Value> wxNode_wxArtProvider::New(const wxArtProvider* obj) {
  v8::HandleScope scope;

  if(obj == NULL) {
    return scope.Close(v8::Null());
  }
  
  v8::Local<v8::FunctionTemplate> returnObjFt = v8::FunctionTemplate::New(wxNodeObject::NewFunc);
  returnObjFt->InstanceTemplate()->SetInternalFieldCount(2);
  returnObjFt->SetClassName(v8::String::NewSymbol("ArtProvider"));
  wxNode_wxArtProvider::AddMethods(returnObjFt);

  v8::Local<v8::Function> returnObjFn = returnObjFt->GetFunction();
  v8::Local<v8::Object> returnObj = returnObjFn->CallAsConstructor(0, new v8::Local<v8::Value>[0])->ToObject();
  returnObj->SetPointerInInternalField(0, (void*)obj);
  NodeExEvtHandlerImplWrap* wrap = new NodeExEvtHandlerImplWrap(returnObj);
  NodeExEvtHandlerImpl* evtHandler = dynamic_cast<NodeExEvtHandlerImpl*>(wrap);
  returnObj->SetPointerInInternalField(1, evtHandler);

  return scope.Close(returnObj);
}

/*static*/ v8::Handle<v8::Value> wxNode_wxArtProvider::NewCopy(const wxArtProvider& obj) {
  v8::HandleScope scope;
  wxNode_wxArtProvider* returnVal = new wxNode_wxArtProvider();
  memcpy(dynamic_cast<wxArtProvider*>(returnVal), &obj, sizeof(wxArtProvider));
  return scope.Close(New(returnVal));

}

/*static*/ bool wxNode_wxArtProvider::AssignableFrom(const v8::Handle<v8::String>& className) {
  v8::String::AsciiValue classNameStr(className);
  return AssignableFrom(*classNameStr);
}

/*static*/ bool wxNode_wxArtProvider::AssignableFrom(const char* className) {
  if(!strcmp("ArtProvider", className)) { return true; }
  

  return false;
}

/*static*/ v8::Handle<v8::Value> wxNode_wxArtProvider::_init(const v8::Arguments& args) {
  v8::HandleScope scope;

  
  
  /*
   * id: _35328
   */
  if(args.Length() == 1 && (args[0]->IsNull() || (args[0]->IsObject() && wxNode_wxArtProvider::AssignableFrom(args[0]->ToObject()->GetConstructorName())))) {
    wxNode_wxArtProvider* arg0 = args[0]->IsNull() ? NULL : wxNodeObject::unwrap<wxNode_wxArtProvider>(args[0]->ToObject()); /* type: _64567  */
    

    wxNode_wxArtProvider *self = new wxNode_wxArtProvider(*arg0);
    NodeExEvtHandlerImpl* evtHandler = dynamic_cast<NodeExEvtHandlerImpl*>(self);
    self->wrap(args.This(), self, evtHandler);
    return args.This();
  }
  
  /*
   * id: _35329
   */
  if(args.Length() == 0) {
    

    wxNode_wxArtProvider *self = new wxNode_wxArtProvider();
    NodeExEvtHandlerImpl* evtHandler = dynamic_cast<NodeExEvtHandlerImpl*>(self);
    self->wrap(args.This(), self, evtHandler);
    return args.This();
  }
  
  

  std::ostringstream errStr;
  errStr << "Could not find matching constructor for arguments (class name: wxArtProvider).\n";
  errStr << "  arg count: " << args.Length() << "\n";
  for(int i = 0; i < args.Length(); i++) {
    v8::String::AsciiValue argStr(args[i]);
    errStr << "  arg[" << i << "]: " << *argStr << "\n";
  }
  return v8::ThrowException(v8::Exception::TypeError(v8::String::New(errStr.str().c_str())));
}


/*static*/ v8::Handle<v8::Value> wxNode_wxArtProvider::_HasNativeProvider(const v8::Arguments& args) {
  v8::HandleScope scope;
  wxNode_wxArtProvider* self = unwrap<wxNode_wxArtProvider>(args.This());

  
  /*
   * id: _35331
   */
  if(args.Length() == 0) {
    

    bool returnVal = wxArtProvider::HasNativeProvider();

    return scope.Close(v8::Boolean::New(returnVal));
  }
  

  std::ostringstream errStr;
  errStr << "Could not find matching method for arguments (method name: wxArtProvider::HasNativeProvider).\n";
  errStr << "  arg count: " << args.Length() << "\n";
  for(int i = 0; i < args.Length(); i++) {
    v8::String::AsciiValue argStr(args[i]);
    errStr << "  arg[" << i << "]: " << *argStr << "\n";
  }
  return v8::ThrowException(v8::Exception::TypeError(v8::String::New(errStr.str().c_str())));
}

/*static*/ v8::Handle<v8::Value> wxNode_wxArtProvider::_Push(const v8::Arguments& args) {
  v8::HandleScope scope;
  wxNode_wxArtProvider* self = unwrap<wxNode_wxArtProvider>(args.This());

  
  /*
   * id: _35332
   */
  if(args.Length() == 1 && (args[0]->IsNull() || (args[0]->IsObject() && wxNode_wxArtProvider::AssignableFrom(args[0]->ToObject()->GetConstructorName())))) {
    wxNode_wxArtProvider* provider = args[0]->IsNull() ? NULL : wxNodeObject::unwrap<wxNode_wxArtProvider>(args[0]->ToObject()); /* type: _64568 * */
    

    wxArtProvider::Push(provider);

    return v8::Undefined();
  }
  

  std::ostringstream errStr;
  errStr << "Could not find matching method for arguments (method name: wxArtProvider::Push).\n";
  errStr << "  arg count: " << args.Length() << "\n";
  for(int i = 0; i < args.Length(); i++) {
    v8::String::AsciiValue argStr(args[i]);
    errStr << "  arg[" << i << "]: " << *argStr << "\n";
  }
  return v8::ThrowException(v8::Exception::TypeError(v8::String::New(errStr.str().c_str())));
}

/*static*/ v8::Handle<v8::Value> wxNode_wxArtProvider::_PushBack(const v8::Arguments& args) {
  v8::HandleScope scope;
  wxNode_wxArtProvider* self = unwrap<wxNode_wxArtProvider>(args.This());

  
  /*
   * id: _35333
   */
  if(args.Length() == 1 && (args[0]->IsNull() || (args[0]->IsObject() && wxNode_wxArtProvider::AssignableFrom(args[0]->ToObject()->GetConstructorName())))) {
    wxNode_wxArtProvider* provider = args[0]->IsNull() ? NULL : wxNodeObject::unwrap<wxNode_wxArtProvider>(args[0]->ToObject()); /* type: _64568 * */
    

    wxArtProvider::PushBack(provider);

    return v8::Undefined();
  }
  

  std::ostringstream errStr;
  errStr << "Could not find matching method for arguments (method name: wxArtProvider::PushBack).\n";
  errStr << "  arg count: " << args.Length() << "\n";
  for(int i = 0; i < args.Length(); i++) {
    v8::String::AsciiValue argStr(args[i]);
    errStr << "  arg[" << i << "]: " << *argStr << "\n";
  }
  return v8::ThrowException(v8::Exception::TypeError(v8::String::New(errStr.str().c_str())));
}

/*static*/ v8::Handle<v8::Value> wxNode_wxArtProvider::_Pop(const v8::Arguments& args) {
  v8::HandleScope scope;
  wxNode_wxArtProvider* self = unwrap<wxNode_wxArtProvider>(args.This());

  
  /*
   * id: _35335
   */
  if(args.Length() == 0) {
    

    bool returnVal = wxArtProvider::Pop();

    return scope.Close(v8::Boolean::New(returnVal));
  }
  

  std::ostringstream errStr;
  errStr << "Could not find matching method for arguments (method name: wxArtProvider::Pop).\n";
  errStr << "  arg count: " << args.Length() << "\n";
  for(int i = 0; i < args.Length(); i++) {
    v8::String::AsciiValue argStr(args[i]);
    errStr << "  arg[" << i << "]: " << *argStr << "\n";
  }
  return v8::ThrowException(v8::Exception::TypeError(v8::String::New(errStr.str().c_str())));
}

/*static*/ v8::Handle<v8::Value> wxNode_wxArtProvider::_Remove(const v8::Arguments& args) {
  v8::HandleScope scope;
  wxNode_wxArtProvider* self = unwrap<wxNode_wxArtProvider>(args.This());

  
  /*
   * id: _35336
   */
  if(args.Length() == 1 && (args[0]->IsNull() || (args[0]->IsObject() && wxNode_wxArtProvider::AssignableFrom(args[0]->ToObject()->GetConstructorName())))) {
    wxNode_wxArtProvider* provider = args[0]->IsNull() ? NULL : wxNodeObject::unwrap<wxNode_wxArtProvider>(args[0]->ToObject()); /* type: _64568 * */
    

    bool returnVal = wxArtProvider::Remove(provider);

    return scope.Close(v8::Boolean::New(returnVal));
  }
  

  std::ostringstream errStr;
  errStr << "Could not find matching method for arguments (method name: wxArtProvider::Remove).\n";
  errStr << "  arg count: " << args.Length() << "\n";
  for(int i = 0; i < args.Length(); i++) {
    v8::String::AsciiValue argStr(args[i]);
    errStr << "  arg[" << i << "]: " << *argStr << "\n";
  }
  return v8::ThrowException(v8::Exception::TypeError(v8::String::New(errStr.str().c_str())));
}

/*static*/ v8::Handle<v8::Value> wxNode_wxArtProvider::_Delete(const v8::Arguments& args) {
  v8::HandleScope scope;
  wxNode_wxArtProvider* self = unwrap<wxNode_wxArtProvider>(args.This());

  
  /*
   * id: _35337
   */
  if(args.Length() == 1 && (args[0]->IsNull() || (args[0]->IsObject() && wxNode_wxArtProvider::AssignableFrom(args[0]->ToObject()->GetConstructorName())))) {
    wxNode_wxArtProvider* provider = args[0]->IsNull() ? NULL : wxNodeObject::unwrap<wxNode_wxArtProvider>(args[0]->ToObject()); /* type: _64568 * */
    

    bool returnVal = wxArtProvider::Delete(provider);

    return scope.Close(v8::Boolean::New(returnVal));
  }
  

  std::ostringstream errStr;
  errStr << "Could not find matching method for arguments (method name: wxArtProvider::Delete).\n";
  errStr << "  arg count: " << args.Length() << "\n";
  for(int i = 0; i < args.Length(); i++) {
    v8::String::AsciiValue argStr(args[i]);
    errStr << "  arg[" << i << "]: " << *argStr << "\n";
  }
  return v8::ThrowException(v8::Exception::TypeError(v8::String::New(errStr.str().c_str())));
}

/*static*/ v8::Handle<v8::Value> wxNode_wxArtProvider::_GetBitmap(const v8::Arguments& args) {
  v8::HandleScope scope;
  wxNode_wxArtProvider* self = unwrap<wxNode_wxArtProvider>(args.This());

  
  /*
   * id: _35338
   */
  if(args.Length() == 3 && args[0]->IsString() && args[1]->IsString() && (args[2]->IsNull() || (args[2]->IsObject() && wxNode_wxSize::AssignableFrom(args[2]->ToObject()->GetConstructorName())))) {
    v8::String::AsciiValue id(args[0]->ToString()); /* type: _64569  */
    v8::String::AsciiValue client(args[1]->ToString()); /* type: _64570  */
    wxNode_wxSize* size = args[2]->IsNull() ? NULL : wxNodeObject::unwrap<wxNode_wxSize>(args[2]->ToObject()); /* type: _20628  */
    

    wxBitmap returnVal = wxArtProvider::GetBitmap(*id, *client, *size);

    return scope.Close(wxNode_wxBitmap::NewCopy(returnVal));
  }
  
  /*
   * id: _35338
   */
  if(args.Length() == 2 && args[0]->IsString() && args[1]->IsString()) {
    v8::String::AsciiValue id(args[0]->ToString()); /* type: _64569  */
    v8::String::AsciiValue client(args[1]->ToString()); /* type: _64570  */
    

    wxBitmap returnVal = wxArtProvider::GetBitmap(*id, *client);

    return scope.Close(wxNode_wxBitmap::NewCopy(returnVal));
  }
  
  /*
   * id: _35338
   */
  if(args.Length() == 1 && args[0]->IsString()) {
    v8::String::AsciiValue id(args[0]->ToString()); /* type: _64569  */
    

    wxBitmap returnVal = wxArtProvider::GetBitmap(*id);

    return scope.Close(wxNode_wxBitmap::NewCopy(returnVal));
  }
  

  std::ostringstream errStr;
  errStr << "Could not find matching method for arguments (method name: wxArtProvider::GetBitmap).\n";
  errStr << "  arg count: " << args.Length() << "\n";
  for(int i = 0; i < args.Length(); i++) {
    v8::String::AsciiValue argStr(args[i]);
    errStr << "  arg[" << i << "]: " << *argStr << "\n";
  }
  return v8::ThrowException(v8::Exception::TypeError(v8::String::New(errStr.str().c_str())));
}

/*static*/ v8::Handle<v8::Value> wxNode_wxArtProvider::_GetIcon(const v8::Arguments& args) {
  v8::HandleScope scope;
  wxNode_wxArtProvider* self = unwrap<wxNode_wxArtProvider>(args.This());

  
  /*
   * id: _35339
   */
  if(args.Length() == 3 && args[0]->IsString() && args[1]->IsString() && (args[2]->IsNull() || (args[2]->IsObject() && wxNode_wxSize::AssignableFrom(args[2]->ToObject()->GetConstructorName())))) {
    v8::String::AsciiValue id(args[0]->ToString()); /* type: _64569  */
    v8::String::AsciiValue client(args[1]->ToString()); /* type: _64570  */
    wxNode_wxSize* size = args[2]->IsNull() ? NULL : wxNodeObject::unwrap<wxNode_wxSize>(args[2]->ToObject()); /* type: _20628  */
    

    wxIcon returnVal = wxArtProvider::GetIcon(*id, *client, *size);

    return scope.Close(wxNode_wxIcon::NewCopy(returnVal));
  }
  
  /*
   * id: _35339
   */
  if(args.Length() == 2 && args[0]->IsString() && args[1]->IsString()) {
    v8::String::AsciiValue id(args[0]->ToString()); /* type: _64569  */
    v8::String::AsciiValue client(args[1]->ToString()); /* type: _64570  */
    

    wxIcon returnVal = wxArtProvider::GetIcon(*id, *client);

    return scope.Close(wxNode_wxIcon::NewCopy(returnVal));
  }
  
  /*
   * id: _35339
   */
  if(args.Length() == 1 && args[0]->IsString()) {
    v8::String::AsciiValue id(args[0]->ToString()); /* type: _64569  */
    

    wxIcon returnVal = wxArtProvider::GetIcon(*id);

    return scope.Close(wxNode_wxIcon::NewCopy(returnVal));
  }
  

  std::ostringstream errStr;
  errStr << "Could not find matching method for arguments (method name: wxArtProvider::GetIcon).\n";
  errStr << "  arg count: " << args.Length() << "\n";
  for(int i = 0; i < args.Length(); i++) {
    v8::String::AsciiValue argStr(args[i]);
    errStr << "  arg[" << i << "]: " << *argStr << "\n";
  }
  return v8::ThrowException(v8::Exception::TypeError(v8::String::New(errStr.str().c_str())));
}

/*static*/ v8::Handle<v8::Value> wxNode_wxArtProvider::_GetMessageBoxIconId(const v8::Arguments& args) {
  v8::HandleScope scope;
  wxNode_wxArtProvider* self = unwrap<wxNode_wxArtProvider>(args.This());

  
  /*
   * id: _35340
   */
  if(args.Length() == 1 && args[0]->IsNumber()) {
    int flags = (int)args[0]->ToInt32()->Value(); /* type: _165  */
    

    wxString returnVal = wxArtProvider::GetMessageBoxIconId(flags);

    return scope.Close(v8::String::New(returnVal.mb_str()));
  }
  

  std::ostringstream errStr;
  errStr << "Could not find matching method for arguments (method name: wxArtProvider::GetMessageBoxIconId).\n";
  errStr << "  arg count: " << args.Length() << "\n";
  for(int i = 0; i < args.Length(); i++) {
    v8::String::AsciiValue argStr(args[i]);
    errStr << "  arg[" << i << "]: " << *argStr << "\n";
  }
  return v8::ThrowException(v8::Exception::TypeError(v8::String::New(errStr.str().c_str())));
}

/*static*/ v8::Handle<v8::Value> wxNode_wxArtProvider::_GetMessageBoxIcon(const v8::Arguments& args) {
  v8::HandleScope scope;
  wxNode_wxArtProvider* self = unwrap<wxNode_wxArtProvider>(args.This());

  
  /*
   * id: _35341
   */
  if(args.Length() == 1 && args[0]->IsNumber()) {
    int flags = (int)args[0]->ToInt32()->Value(); /* type: _165  */
    

    wxIcon returnVal = wxArtProvider::GetMessageBoxIcon(flags);

    return scope.Close(wxNode_wxIcon::NewCopy(returnVal));
  }
  

  std::ostringstream errStr;
  errStr << "Could not find matching method for arguments (method name: wxArtProvider::GetMessageBoxIcon).\n";
  errStr << "  arg count: " << args.Length() << "\n";
  for(int i = 0; i < args.Length(); i++) {
    v8::String::AsciiValue argStr(args[i]);
    errStr << "  arg[" << i << "]: " << *argStr << "\n";
  }
  return v8::ThrowException(v8::Exception::TypeError(v8::String::New(errStr.str().c_str())));
}

/*static*/ v8::Handle<v8::Value> wxNode_wxArtProvider::_GetIconBundle(const v8::Arguments& args) {
  v8::HandleScope scope;
  wxNode_wxArtProvider* self = unwrap<wxNode_wxArtProvider>(args.This());

  
  /*
   * id: _35342
   */
  if(args.Length() == 2 && args[0]->IsString() && args[1]->IsString()) {
    v8::String::AsciiValue id(args[0]->ToString()); /* type: _64569  */
    v8::String::AsciiValue client(args[1]->ToString()); /* type: _64570  */
    

    wxIconBundle returnVal = wxArtProvider::GetIconBundle(*id, *client);

    return scope.Close(wxNode_wxIconBundle::NewCopy(returnVal));
  }
  
  /*
   * id: _35342
   */
  if(args.Length() == 1 && args[0]->IsString()) {
    v8::String::AsciiValue id(args[0]->ToString()); /* type: _64569  */
    

    wxIconBundle returnVal = wxArtProvider::GetIconBundle(*id);

    return scope.Close(wxNode_wxIconBundle::NewCopy(returnVal));
  }
  

  std::ostringstream errStr;
  errStr << "Could not find matching method for arguments (method name: wxArtProvider::GetIconBundle).\n";
  errStr << "  arg count: " << args.Length() << "\n";
  for(int i = 0; i < args.Length(); i++) {
    v8::String::AsciiValue argStr(args[i]);
    errStr << "  arg[" << i << "]: " << *argStr << "\n";
  }
  return v8::ThrowException(v8::Exception::TypeError(v8::String::New(errStr.str().c_str())));
}

/*static*/ v8::Handle<v8::Value> wxNode_wxArtProvider::_GetNativeSizeHint(const v8::Arguments& args) {
  v8::HandleScope scope;
  wxNode_wxArtProvider* self = unwrap<wxNode_wxArtProvider>(args.This());

  
  /*
   * id: _35343
   */
  if(args.Length() == 1 && args[0]->IsString()) {
    v8::String::AsciiValue client(args[0]->ToString()); /* type: _64570  */
    

    wxSize returnVal = wxArtProvider::GetNativeSizeHint(*client);

    return scope.Close(wxNode_wxSize::NewCopy(returnVal));
  }
  

  std::ostringstream errStr;
  errStr << "Could not find matching method for arguments (method name: wxArtProvider::GetNativeSizeHint).\n";
  errStr << "  arg count: " << args.Length() << "\n";
  for(int i = 0; i < args.Length(); i++) {
    v8::String::AsciiValue argStr(args[i]);
    errStr << "  arg[" << i << "]: " << *argStr << "\n";
  }
  return v8::ThrowException(v8::Exception::TypeError(v8::String::New(errStr.str().c_str())));
}

/*static*/ v8::Handle<v8::Value> wxNode_wxArtProvider::_GetSizeHint(const v8::Arguments& args) {
  v8::HandleScope scope;
  wxNode_wxArtProvider* self = unwrap<wxNode_wxArtProvider>(args.This());

  
  /*
   * id: _35344
   */
  if(args.Length() == 2 && args[0]->IsString() && args[1]->IsBoolean()) {
    v8::String::AsciiValue client(args[0]->ToString()); /* type: _64570  */
    bool platform_dependent = args[1]->ToBoolean()->Value(); /* type: _14830  */
    

    wxSize returnVal = wxArtProvider::GetSizeHint(*client, platform_dependent);

    return scope.Close(wxNode_wxSize::NewCopy(returnVal));
  }
  
  /*
   * id: _35344
   */
  if(args.Length() == 1 && args[0]->IsString()) {
    v8::String::AsciiValue client(args[0]->ToString()); /* type: _64570  */
    

    wxSize returnVal = wxArtProvider::GetSizeHint(*client);

    return scope.Close(wxNode_wxSize::NewCopy(returnVal));
  }
  

  std::ostringstream errStr;
  errStr << "Could not find matching method for arguments (method name: wxArtProvider::GetSizeHint).\n";
  errStr << "  arg count: " << args.Length() << "\n";
  for(int i = 0; i < args.Length(); i++) {
    v8::String::AsciiValue argStr(args[i]);
    errStr << "  arg[" << i << "]: " << *argStr << "\n";
  }
  return v8::ThrowException(v8::Exception::TypeError(v8::String::New(errStr.str().c_str())));
}

/*static*/ v8::Handle<v8::Value> wxNode_wxArtProvider::_GetClassInfo(const v8::Arguments& args) {
  v8::HandleScope scope;
  wxNode_wxArtProvider* self = unwrap<wxNode_wxArtProvider>(args.This());

  
  /*
   * id: _35353
   */
  if(args.Length() == 0) {
    

    wxClassInfo* returnVal = self->GetClassInfo();

    return scope.Close(wxNode_wxClassInfo::New(returnVal));
  }
  

  std::ostringstream errStr;
  errStr << "Could not find matching method for arguments (method name: wxArtProvider::GetClassInfo).\n";
  errStr << "  arg count: " << args.Length() << "\n";
  for(int i = 0; i < args.Length(); i++) {
    v8::String::AsciiValue argStr(args[i]);
    errStr << "  arg[" << i << "]: " << *argStr << "\n";
  }
  return v8::ThrowException(v8::Exception::TypeError(v8::String::New(errStr.str().c_str())));
}



