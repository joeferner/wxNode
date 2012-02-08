
#include <sstream>
#include "wxNode_wxIcon.h"
#include "wxNode_wxEvtHandler.h"
#include "wxNode_wxBitmap.h"
#include "wxNode_wxIconLocation.h"
#include "wxNode_wxClassInfo.h"
#include "wxNode_wxObject.h"


/* static */ v8::Persistent<v8::FunctionTemplate> wxNode_wxIcon::s_ct;



wxNode_wxIcon::wxNode_wxIcon(wxIcon& arg0)
  : wxIcon(arg0)
{

}

wxNode_wxIcon::wxNode_wxIcon()
  : wxIcon()
{

}

wxNode_wxIcon::wxNode_wxIcon(const char** bits)
  : wxIcon(bits)
{

}

wxNode_wxIcon::wxNode_wxIcon(const wxString& filename, wxBitmapType type, int arg2, int arg3)
  : wxIcon(filename, type, arg2, arg3)
{

}

wxNode_wxIcon::wxNode_wxIcon(const wxString& filename, wxBitmapType type, int arg2)
  : wxIcon(filename, type, arg2)
{

}

wxNode_wxIcon::wxNode_wxIcon(const wxString& filename, wxBitmapType type)
  : wxIcon(filename, type)
{

}

wxNode_wxIcon::wxNode_wxIcon(const wxString& filename)
  : wxIcon(filename)
{

}

wxNode_wxIcon::wxNode_wxIcon(wxIconLocation& loc)
  : wxIcon(loc)
{

}




/*static*/ void wxNode_wxIcon::Init(v8::Handle<v8::Object> target) {
  v8::HandleScope scope;

  v8::Local<v8::FunctionTemplate> t = v8::FunctionTemplate::New(wxNodeObject::NewFunc);
  s_ct = v8::Persistent<v8::FunctionTemplate>::New(t);
  s_ct->InstanceTemplate()->SetInternalFieldCount(2);
  s_ct->SetClassName(v8::String::NewSymbol("wxIcon"));

  NODE_SET_PROTOTYPE_METHOD(s_ct, "init", _init);
  AddMethods(s_ct);

  target->Set(v8::String::NewSymbol("wxIcon"), s_ct->GetFunction());
}

/*static*/ void wxNode_wxIcon::AddMethods(v8::Handle<v8::FunctionTemplate> target) {
  wxNode_wxBitmap::AddMethods(target);
  NODE_SET_PROTOTYPE_METHOD(target, "loadFile", _LoadFile);
  NODE_SET_PROTOTYPE_METHOD(target, "copyFromBitmap", _CopyFromBitmap);
  NODE_SET_PROTOTYPE_METHOD(target, "getClassInfo", _GetClassInfo);
  NODE_SET_METHOD(target, "wxCreateObject", _wxCreateObject);
  
}

/*static*/ v8::Handle<v8::Value> wxNode_wxIcon::New(wxNode_wxIcon* obj) {
  v8::HandleScope scope;

  if(obj == NULL) {
    return scope.Close(v8::Null());
  }
  
  v8::Local<v8::FunctionTemplate> returnObjFt = v8::FunctionTemplate::New(wxNodeObject::NewFunc);
  returnObjFt->InstanceTemplate()->SetInternalFieldCount(2);
  returnObjFt->SetClassName(v8::String::NewSymbol("wxIcon"));
  wxNode_wxIcon::AddMethods(returnObjFt);

  v8::Local<v8::Function> returnObjFn = returnObjFt->GetFunction();
  v8::Handle<v8::Value> returnObjArgs[0];
  v8::Local<v8::Object> returnObj = returnObjFn->CallAsConstructor(0, returnObjArgs)->ToObject();
  returnObj->SetPointerInInternalField(0, obj);
  NodeExEvtHandlerImpl* evtHandler = dynamic_cast<NodeExEvtHandlerImpl*>(obj);
  returnObj->SetPointerInInternalField(1, evtHandler);

  return scope.Close(returnObj);
}

/*static*/ v8::Handle<v8::Value> wxNode_wxIcon::New(wxIcon* obj) {
  v8::HandleScope scope;

  if(obj == NULL) {
    return scope.Close(v8::Null());
  }
  
  v8::Local<v8::FunctionTemplate> returnObjFt = v8::FunctionTemplate::New(wxNodeObject::NewFunc);
  returnObjFt->InstanceTemplate()->SetInternalFieldCount(2);
  returnObjFt->SetClassName(v8::String::NewSymbol("wxIcon"));
  wxNode_wxIcon::AddMethods(returnObjFt);

  v8::Local<v8::Function> returnObjFn = returnObjFt->GetFunction();
  v8::Handle<v8::Value> returnObjArgs[0];
  v8::Local<v8::Object> returnObj = returnObjFn->CallAsConstructor(0, returnObjArgs)->ToObject();
  returnObj->SetPointerInInternalField(0, obj);
  returnObj->SetPointerInInternalField(1, new NodeExEvtHandlerImplWrap(returnObj));

  return scope.Close(returnObj);
}

/*static*/ v8::Handle<v8::Value> wxNode_wxIcon::NewCopy(wxIcon& obj) {
  v8::HandleScope scope;
  wxNode_wxIcon* returnVal = new wxNode_wxIcon();
  memcpy(dynamic_cast<wxIcon*>(returnVal), &obj, sizeof(wxIcon));
  return scope.Close(New(returnVal));

}

/*static*/ bool wxNode_wxIcon::AssignableFrom(const v8::Handle<v8::String>& className) {
  v8::String::AsciiValue classNameStr(className);
  return AssignableFrom(*classNameStr);
}

/*static*/ bool wxNode_wxIcon::AssignableFrom(const char* className) {
  if(!strcmp("wxIcon", className)) { return true; }
  

  return false;
}

/*static*/ v8::Handle<v8::Value> wxNode_wxIcon::_init(const v8::Arguments& args) {
  v8::HandleScope scope;

  
  
  /*
   * id: _16627
   */
  if(args.Length() == 1 && (args[0]->IsNull() || (args[0]->IsObject() && wxNode_wxIcon::AssignableFrom(args[0]->ToObject()->GetConstructorName())))) {
    wxNode_wxIcon* arg0 = args[0]->IsNull() ? NULL : wxNodeObject::unwrap<wxNode_wxIcon>(args[0]->ToObject()); /* type: _15506  */
    

    wxNode_wxIcon *self = new wxNode_wxIcon(*arg0);
    NodeExEvtHandlerImpl* evtHandler = dynamic_cast<NodeExEvtHandlerImpl*>(self);
    self->wrap(args.This(), self, evtHandler);
    return args.This();
  }
  
  /*
   * id: _16628
   */
  if(args.Length() == 0) {
    

    wxNode_wxIcon *self = new wxNode_wxIcon();
    NodeExEvtHandlerImpl* evtHandler = dynamic_cast<NodeExEvtHandlerImpl*>(self);
    self->wrap(args.This(), self, evtHandler);
    return args.This();
  }
  
  /*
   * id: _16629
   */
  if(args.Length() == 1 && args[0]->IsString()) {
    v8::String::AsciiValue bits(args[0]->ToString()); /* type: _59212 ** */
    

    wxNode_wxIcon *self = new wxNode_wxIcon(*bits);
    NodeExEvtHandlerImpl* evtHandler = dynamic_cast<NodeExEvtHandlerImpl*>(self);
    self->wrap(args.This(), self, evtHandler);
    return args.This();
  }
  
  /*
   * id: _16630
   */
  if(args.Length() == 4 && args[0]->IsString() && args[1]->IsNumber() && args[2]->IsNumber() && args[3]->IsNumber()) {
    v8::String::AsciiValue filename(args[0]->ToString()); /* type: _14808  */
    wxBitmapType type = (wxBitmapType)args[1]->ToNumber()->Value(); /* type: _2548  */
    int arg2 = (int)args[2]->ToInt32()->Value(); /* type: _162  */
    int arg3 = (int)args[3]->ToInt32()->Value(); /* type: _162  */
    

    wxNode_wxIcon *self = new wxNode_wxIcon(*filename, type, arg2, arg3);
    NodeExEvtHandlerImpl* evtHandler = dynamic_cast<NodeExEvtHandlerImpl*>(self);
    self->wrap(args.This(), self, evtHandler);
    return args.This();
  }
  
  /*
   * id: _16630
   */
  if(args.Length() == 3 && args[0]->IsString() && args[1]->IsNumber() && args[2]->IsNumber()) {
    v8::String::AsciiValue filename(args[0]->ToString()); /* type: _14808  */
    wxBitmapType type = (wxBitmapType)args[1]->ToNumber()->Value(); /* type: _2548  */
    int arg2 = (int)args[2]->ToInt32()->Value(); /* type: _162  */
    

    wxNode_wxIcon *self = new wxNode_wxIcon(*filename, type, arg2);
    NodeExEvtHandlerImpl* evtHandler = dynamic_cast<NodeExEvtHandlerImpl*>(self);
    self->wrap(args.This(), self, evtHandler);
    return args.This();
  }
  
  /*
   * id: _16630
   */
  if(args.Length() == 2 && args[0]->IsString() && args[1]->IsNumber()) {
    v8::String::AsciiValue filename(args[0]->ToString()); /* type: _14808  */
    wxBitmapType type = (wxBitmapType)args[1]->ToNumber()->Value(); /* type: _2548  */
    

    wxNode_wxIcon *self = new wxNode_wxIcon(*filename, type);
    NodeExEvtHandlerImpl* evtHandler = dynamic_cast<NodeExEvtHandlerImpl*>(self);
    self->wrap(args.This(), self, evtHandler);
    return args.This();
  }
  
  /*
   * id: _16630
   */
  if(args.Length() == 1 && args[0]->IsString()) {
    v8::String::AsciiValue filename(args[0]->ToString()); /* type: _14808  */
    

    wxNode_wxIcon *self = new wxNode_wxIcon(*filename);
    NodeExEvtHandlerImpl* evtHandler = dynamic_cast<NodeExEvtHandlerImpl*>(self);
    self->wrap(args.This(), self, evtHandler);
    return args.This();
  }
  
  /*
   * id: _16631
   */
  if(args.Length() == 1 && (args[0]->IsNull() || (args[0]->IsObject() && wxNode_wxIconLocation::AssignableFrom(args[0]->ToObject()->GetConstructorName())))) {
    wxNode_wxIconLocation* loc = args[0]->IsNull() ? NULL : wxNodeObject::unwrap<wxNode_wxIconLocation>(args[0]->ToObject()); /* type: _59213  */
    

    wxNode_wxIcon *self = new wxNode_wxIcon(*loc);
    NodeExEvtHandlerImpl* evtHandler = dynamic_cast<NodeExEvtHandlerImpl*>(self);
    self->wrap(args.This(), self, evtHandler);
    return args.This();
  }
  
  

  std::ostringstream errStr;
  errStr << "Could not find matching constructor for arguments (class name: wxIcon).\n";
  errStr << "  arg count: " << args.Length() << "\n";
  for(int i = 0; i < args.Length(); i++) {
    v8::String::AsciiValue argStr(args[i]);
    errStr << "  arg[" << i << "]: " << *argStr << "\n";
  }
  return v8::ThrowException(v8::Exception::TypeError(v8::String::New(errStr.str().c_str())));
}


/*static*/ v8::Handle<v8::Value> wxNode_wxIcon::_LoadFile(const v8::Arguments& args) {
  v8::HandleScope scope;
  wxNode_wxIcon* self = unwrap<wxNode_wxIcon>(args.This());

  
  /*
   * id: _16632
   */
  if(args.Length() == 4 && args[0]->IsString() && args[1]->IsNumber() && args[2]->IsNumber() && args[3]->IsNumber()) {
    v8::String::AsciiValue name(args[0]->ToString()); /* type: _14808  */
    wxBitmapType flags = (wxBitmapType)args[1]->ToNumber()->Value(); /* type: _2548  */
    int arg2 = (int)args[2]->ToInt32()->Value(); /* type: _162  */
    int arg3 = (int)args[3]->ToInt32()->Value(); /* type: _162  */
    

    bool returnVal = self->LoadFile(*name, flags, arg2, arg3);

    return scope.Close(v8::Boolean::New(returnVal));
  }
  
  /*
   * id: _16633
   */
  if(args.Length() == 2 && args[0]->IsString() && args[1]->IsNumber()) {
    v8::String::AsciiValue name(args[0]->ToString()); /* type: _14808  */
    wxBitmapType flags = (wxBitmapType)args[1]->ToNumber()->Value(); /* type: _2548  */
    

    bool returnVal = self->LoadFile(*name, flags);

    return scope.Close(v8::Boolean::New(returnVal));
  }
  
  /*
   * id: _16633
   */
  if(args.Length() == 1 && args[0]->IsString()) {
    v8::String::AsciiValue name(args[0]->ToString()); /* type: _14808  */
    

    bool returnVal = self->LoadFile(*name);

    return scope.Close(v8::Boolean::New(returnVal));
  }
  

  std::ostringstream errStr;
  errStr << "Could not find matching method for arguments (method name: wxIcon::LoadFile).\n";
  errStr << "  arg count: " << args.Length() << "\n";
  for(int i = 0; i < args.Length(); i++) {
    v8::String::AsciiValue argStr(args[i]);
    errStr << "  arg[" << i << "]: " << *argStr << "\n";
  }
  return v8::ThrowException(v8::Exception::TypeError(v8::String::New(errStr.str().c_str())));
}

/*static*/ v8::Handle<v8::Value> wxNode_wxIcon::_CopyFromBitmap(const v8::Arguments& args) {
  v8::HandleScope scope;
  wxNode_wxIcon* self = unwrap<wxNode_wxIcon>(args.This());

  
  /*
   * id: _16634
   */
  if(args.Length() == 1 && (args[0]->IsNull() || (args[0]->IsObject() && wxNode_wxBitmap::AssignableFrom(args[0]->ToObject()->GetConstructorName())))) {
    wxNode_wxBitmap* bmp = args[0]->IsNull() ? NULL : wxNodeObject::unwrap<wxNode_wxBitmap>(args[0]->ToObject()); /* type: _15508  */
    

    self->CopyFromBitmap(*bmp);

    return v8::Undefined();
  }
  

  std::ostringstream errStr;
  errStr << "Could not find matching method for arguments (method name: wxIcon::CopyFromBitmap).\n";
  errStr << "  arg count: " << args.Length() << "\n";
  for(int i = 0; i < args.Length(); i++) {
    v8::String::AsciiValue argStr(args[i]);
    errStr << "  arg[" << i << "]: " << *argStr << "\n";
  }
  return v8::ThrowException(v8::Exception::TypeError(v8::String::New(errStr.str().c_str())));
}

/*static*/ v8::Handle<v8::Value> wxNode_wxIcon::_GetClassInfo(const v8::Arguments& args) {
  v8::HandleScope scope;
  wxNode_wxIcon* self = unwrap<wxNode_wxIcon>(args.This());

  
  /*
   * id: _16635
   */
  if(args.Length() == 0) {
    

    wxClassInfo* returnVal = self->GetClassInfo();

    return scope.Close(wxNode_wxClassInfo::New(returnVal));
  }
  

  std::ostringstream errStr;
  errStr << "Could not find matching method for arguments (method name: wxIcon::GetClassInfo).\n";
  errStr << "  arg count: " << args.Length() << "\n";
  for(int i = 0; i < args.Length(); i++) {
    v8::String::AsciiValue argStr(args[i]);
    errStr << "  arg[" << i << "]: " << *argStr << "\n";
  }
  return v8::ThrowException(v8::Exception::TypeError(v8::String::New(errStr.str().c_str())));
}

/*static*/ v8::Handle<v8::Value> wxNode_wxIcon::_wxCreateObject(const v8::Arguments& args) {
  v8::HandleScope scope;
  wxNode_wxIcon* self = unwrap<wxNode_wxIcon>(args.This());

  
  /*
   * id: _16636
   */
  if(args.Length() == 0) {
    

    wxObject* returnVal = self->wxCreateObject();

    return scope.Close(wxNode_wxObject::New(returnVal));
  }
  

  std::ostringstream errStr;
  errStr << "Could not find matching method for arguments (method name: wxIcon::wxCreateObject).\n";
  errStr << "  arg count: " << args.Length() << "\n";
  for(int i = 0; i < args.Length(); i++) {
    v8::String::AsciiValue argStr(args[i]);
    errStr << "  arg[" << i << "]: " << *argStr << "\n";
  }
  return v8::ThrowException(v8::Exception::TypeError(v8::String::New(errStr.str().c_str())));
}

