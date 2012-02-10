
#include <sstream>
#include "wxNode_wxBitmap.h"
#include "wxNode_wxEvtHandler.h"
#include "wxNode_wxGDIObject.h"
#include "wxNode_wxSize.h"
#include "wxNode_wxImage.h"
#include "wxNode_wxMask.h"
#include "wxNode_wxRect.h"
#include "wxNode_wxPalette.h"
#include "wxNode_wxIcon.h"
#include "wxNode_wxList.h"
#include "wxNode_wxBitmapHandler.h"
#include "wxNode_wxColour.h"
#include "wxNode_wxClassInfo.h"


/* static */ v8::Persistent<v8::FunctionTemplate> wxNode_wxBitmap::s_ct;



wxNode_wxBitmap::wxNode_wxBitmap(wxBitmap& arg0)
  : wxBitmap(arg0)
{

}

wxNode_wxBitmap::wxNode_wxBitmap()
  : wxBitmap()
{

}

wxNode_wxBitmap::wxNode_wxBitmap(int width, int height, int depth)
  : wxBitmap(width, height, depth)
{

}

wxNode_wxBitmap::wxNode_wxBitmap(int width, int height)
  : wxBitmap(width, height)
{

}

wxNode_wxBitmap::wxNode_wxBitmap(wxSize& sz, int depth)
  : wxBitmap(sz, depth)
{

}

wxNode_wxBitmap::wxNode_wxBitmap(wxSize& sz)
  : wxBitmap(sz)
{

}

wxNode_wxBitmap::wxNode_wxBitmap(const char* bits, int width, int height, int depth)
  : wxBitmap(bits, width, height, depth)
{

}

wxNode_wxBitmap::wxNode_wxBitmap(const char* bits, int width, int height)
  : wxBitmap(bits, width, height)
{

}

wxNode_wxBitmap::wxNode_wxBitmap(const char** bits)
  : wxBitmap(bits)
{

}

wxNode_wxBitmap::wxNode_wxBitmap(const wxString& filename, wxBitmapType type)
  : wxBitmap(filename, type)
{

}

wxNode_wxBitmap::wxNode_wxBitmap(const wxString& filename)
  : wxBitmap(filename)
{

}

wxNode_wxBitmap::wxNode_wxBitmap(wxImage& image, int depth)
  : wxBitmap(image, depth)
{

}

wxNode_wxBitmap::wxNode_wxBitmap(wxImage& image)
  : wxBitmap(image)
{

}




/*static*/ void wxNode_wxBitmap::Init(v8::Handle<v8::Object> target) {
  v8::HandleScope scope;

  v8::Local<v8::FunctionTemplate> t = v8::FunctionTemplate::New(wxNodeObject::NewFunc);
  s_ct = v8::Persistent<v8::FunctionTemplate>::New(t);
  s_ct->InstanceTemplate()->SetInternalFieldCount(2);
  s_ct->SetClassName(v8::String::NewSymbol("Bitmap"));

  NODE_SET_PROTOTYPE_METHOD(s_ct, "init", _init);
  AddMethods(s_ct);

  target->Set(v8::String::NewSymbol("Bitmap"), s_ct->GetFunction());
}

/*static*/ void wxNode_wxBitmap::AddMethods(v8::Handle<v8::FunctionTemplate> target) {
  wxNode_wxGDIObject::AddMethods(target);
  NODE_SET_PROTOTYPE_METHOD(target, "create", _Create);
  NODE_SET_PROTOTYPE_METHOD(target, "getHeight", _GetHeight);
  NODE_SET_PROTOTYPE_METHOD(target, "getWidth", _GetWidth);
  NODE_SET_PROTOTYPE_METHOD(target, "getDepth", _GetDepth);
  NODE_SET_PROTOTYPE_METHOD(target, "getSize", _GetSize);
  NODE_SET_PROTOTYPE_METHOD(target, "convertToImage", _ConvertToImage);
  NODE_SET_PROTOTYPE_METHOD(target, "convertToDisabled", _ConvertToDisabled);
  NODE_SET_PROTOTYPE_METHOD(target, "getMask", _GetMask);
  NODE_SET_PROTOTYPE_METHOD(target, "setMask", _SetMask);
  NODE_SET_PROTOTYPE_METHOD(target, "getSubBitmap", _GetSubBitmap);
  NODE_SET_PROTOTYPE_METHOD(target, "saveFile", _SaveFile);
  NODE_SET_PROTOTYPE_METHOD(target, "loadFile", _LoadFile);
  NODE_SET_PROTOTYPE_METHOD(target, "getPalette", _GetPalette);
  NODE_SET_PROTOTYPE_METHOD(target, "setPalette", _SetPalette);
  NODE_SET_PROTOTYPE_METHOD(target, "copyFromIcon", _CopyFromIcon);
  NODE_SET_PROTOTYPE_METHOD(target, "setHeight", _SetHeight);
  NODE_SET_PROTOTYPE_METHOD(target, "setWidth", _SetWidth);
  NODE_SET_PROTOTYPE_METHOD(target, "setDepth", _SetDepth);
  NODE_SET_METHOD(target, "getHandlers", _GetHandlers);
  NODE_SET_METHOD(target, "addHandler", _AddHandler);
  NODE_SET_METHOD(target, "insertHandler", _InsertHandler);
  NODE_SET_METHOD(target, "removeHandler", _RemoveHandler);
  NODE_SET_METHOD(target, "findHandler", _FindHandler);
  NODE_SET_METHOD(target, "cleanUpHandlers", _CleanUpHandlers);
  NODE_SET_PROTOTYPE_METHOD(target, "quantizeColour", _QuantizeColour);
  NODE_SET_PROTOTYPE_METHOD(target, "getClassInfo", _GetClassInfo);
  
}

/*static*/ v8::Handle<v8::Value> wxNode_wxBitmap::New(const wxNode_wxBitmap* obj) {
  v8::HandleScope scope;

  if(obj == NULL) {
    return scope.Close(v8::Null());
  }
  
  v8::Local<v8::FunctionTemplate> returnObjFt = v8::FunctionTemplate::New(wxNodeObject::NewFunc);
  returnObjFt->InstanceTemplate()->SetInternalFieldCount(2);
  returnObjFt->SetClassName(v8::String::NewSymbol("Bitmap"));
  wxNode_wxBitmap::AddMethods(returnObjFt);

  v8::Local<v8::Function> returnObjFn = returnObjFt->GetFunction();
  v8::Handle<v8::Value> returnObjArgs[0];
  v8::Local<v8::Object> returnObj = returnObjFn->CallAsConstructor(0, returnObjArgs)->ToObject();
  returnObj->SetPointerInInternalField(0, (void*)obj);
  NodeExEvtHandlerImpl* evtHandler = dynamic_cast<NodeExEvtHandlerImpl*>((wxNode_wxBitmap*)obj);
  returnObj->SetPointerInInternalField(1, evtHandler);

  return scope.Close(returnObj);
}

/*static*/ v8::Handle<v8::Value> wxNode_wxBitmap::New(const wxBitmap* obj) {
  v8::HandleScope scope;

  if(obj == NULL) {
    return scope.Close(v8::Null());
  }
  
  v8::Local<v8::FunctionTemplate> returnObjFt = v8::FunctionTemplate::New(wxNodeObject::NewFunc);
  returnObjFt->InstanceTemplate()->SetInternalFieldCount(2);
  returnObjFt->SetClassName(v8::String::NewSymbol("Bitmap"));
  wxNode_wxBitmap::AddMethods(returnObjFt);

  v8::Local<v8::Function> returnObjFn = returnObjFt->GetFunction();
  v8::Handle<v8::Value> returnObjArgs[0];
  v8::Local<v8::Object> returnObj = returnObjFn->CallAsConstructor(0, returnObjArgs)->ToObject();
  returnObj->SetPointerInInternalField(0, (void*)obj);
  returnObj->SetPointerInInternalField(1, new NodeExEvtHandlerImplWrap(returnObj));

  return scope.Close(returnObj);
}

/*static*/ v8::Handle<v8::Value> wxNode_wxBitmap::NewCopy(const wxBitmap& obj) {
  v8::HandleScope scope;
  wxNode_wxBitmap* returnVal = new wxNode_wxBitmap();
  memcpy(dynamic_cast<wxBitmap*>(returnVal), &obj, sizeof(wxBitmap));
  return scope.Close(New(returnVal));

}

/*static*/ bool wxNode_wxBitmap::AssignableFrom(const v8::Handle<v8::String>& className) {
  v8::String::AsciiValue classNameStr(className);
  return AssignableFrom(*classNameStr);
}

/*static*/ bool wxNode_wxBitmap::AssignableFrom(const char* className) {
  if(!strcmp("Bitmap", className)) { return true; }
  
  if(!strcmp("Bitmap", className)) { return true; }

  if(!strcmp("Icon", className)) { return true; }


  return false;
}

/*static*/ v8::Handle<v8::Value> wxNode_wxBitmap::_init(const v8::Arguments& args) {
  v8::HandleScope scope;

  
  
  /*
   * id: _43146
   */
  if(args.Length() == 1 && (args[0]->IsNull() || (args[0]->IsObject() && wxNode_wxBitmap::AssignableFrom(args[0]->ToObject()->GetConstructorName())))) {
    wxNode_wxBitmap* arg0 = args[0]->IsNull() ? NULL : wxNodeObject::unwrap<wxNode_wxBitmap>(args[0]->ToObject()); /* type: _19639  */
    

    wxNode_wxBitmap *self = new wxNode_wxBitmap(*arg0);
    NodeExEvtHandlerImpl* evtHandler = dynamic_cast<NodeExEvtHandlerImpl*>(self);
    self->wrap(args.This(), self, evtHandler);
    return args.This();
  }
  
  /*
   * id: _43147
   */
  if(args.Length() == 0) {
    

    wxNode_wxBitmap *self = new wxNode_wxBitmap();
    NodeExEvtHandlerImpl* evtHandler = dynamic_cast<NodeExEvtHandlerImpl*>(self);
    self->wrap(args.This(), self, evtHandler);
    return args.This();
  }
  
  /*
   * id: _43148
   */
  if(args.Length() == 3 && args[0]->IsNumber() && args[1]->IsNumber() && args[2]->IsNumber()) {
    int width = (int)args[0]->ToInt32()->Value(); /* type: _233  */
    int height = (int)args[1]->ToInt32()->Value(); /* type: _233  */
    int depth = (int)args[2]->ToInt32()->Value(); /* type: _233  */
    

    wxNode_wxBitmap *self = new wxNode_wxBitmap(width, height, depth);
    NodeExEvtHandlerImpl* evtHandler = dynamic_cast<NodeExEvtHandlerImpl*>(self);
    self->wrap(args.This(), self, evtHandler);
    return args.This();
  }
  
  /*
   * id: _43148
   */
  if(args.Length() == 2 && args[0]->IsNumber() && args[1]->IsNumber()) {
    int width = (int)args[0]->ToInt32()->Value(); /* type: _233  */
    int height = (int)args[1]->ToInt32()->Value(); /* type: _233  */
    

    wxNode_wxBitmap *self = new wxNode_wxBitmap(width, height);
    NodeExEvtHandlerImpl* evtHandler = dynamic_cast<NodeExEvtHandlerImpl*>(self);
    self->wrap(args.This(), self, evtHandler);
    return args.This();
  }
  
  /*
   * id: _43149
   */
  if(args.Length() == 2 && (args[0]->IsNull() || (args[0]->IsObject() && wxNode_wxSize::AssignableFrom(args[0]->ToObject()->GetConstructorName()))) && args[1]->IsNumber()) {
    wxNode_wxSize* sz = args[0]->IsNull() ? NULL : wxNodeObject::unwrap<wxNode_wxSize>(args[0]->ToObject()); /* type: _25379  */
    int depth = (int)args[1]->ToInt32()->Value(); /* type: _233  */
    

    wxNode_wxBitmap *self = new wxNode_wxBitmap(*sz, depth);
    NodeExEvtHandlerImpl* evtHandler = dynamic_cast<NodeExEvtHandlerImpl*>(self);
    self->wrap(args.This(), self, evtHandler);
    return args.This();
  }
  
  /*
   * id: _43149
   */
  if(args.Length() == 1 && (args[0]->IsNull() || (args[0]->IsObject() && wxNode_wxSize::AssignableFrom(args[0]->ToObject()->GetConstructorName())))) {
    wxNode_wxSize* sz = args[0]->IsNull() ? NULL : wxNodeObject::unwrap<wxNode_wxSize>(args[0]->ToObject()); /* type: _25379  */
    

    wxNode_wxBitmap *self = new wxNode_wxBitmap(*sz);
    NodeExEvtHandlerImpl* evtHandler = dynamic_cast<NodeExEvtHandlerImpl*>(self);
    self->wrap(args.This(), self, evtHandler);
    return args.This();
  }
  
  /*
   * id: _43150
   */
  if(args.Length() == 4 && args[0]->IsString() && args[1]->IsNumber() && args[2]->IsNumber() && args[3]->IsNumber()) {
    char* bits; /* type: _18576 * */
    int width = (int)args[1]->ToInt32()->Value(); /* type: _233  */
    int height = (int)args[2]->ToInt32()->Value(); /* type: _233  */
    int depth = (int)args[3]->ToInt32()->Value(); /* type: _233  */
    

    wxNode_wxBitmap *self = new wxNode_wxBitmap(bits, width, height, depth);
    NodeExEvtHandlerImpl* evtHandler = dynamic_cast<NodeExEvtHandlerImpl*>(self);
    self->wrap(args.This(), self, evtHandler);
    return args.This();
  }
  
  /*
   * id: _43150
   */
  if(args.Length() == 3 && args[0]->IsString() && args[1]->IsNumber() && args[2]->IsNumber()) {
    char* bits; /* type: _18576 * */
    int width = (int)args[1]->ToInt32()->Value(); /* type: _233  */
    int height = (int)args[2]->ToInt32()->Value(); /* type: _233  */
    

    wxNode_wxBitmap *self = new wxNode_wxBitmap(bits, width, height);
    NodeExEvtHandlerImpl* evtHandler = dynamic_cast<NodeExEvtHandlerImpl*>(self);
    self->wrap(args.This(), self, evtHandler);
    return args.This();
  }
  
  /*
   * id: _43151
   */
  if(args.Length() == 1 && args[0]->IsString()) {
    v8::String::AsciiValue bits(args[0]->ToString()); /* type: _65497 ** */
    

    wxNode_wxBitmap *self = new wxNode_wxBitmap(*bits);
    NodeExEvtHandlerImpl* evtHandler = dynamic_cast<NodeExEvtHandlerImpl*>(self);
    self->wrap(args.This(), self, evtHandler);
    return args.This();
  }
  
  /*
   * id: _43152
   */
  if(args.Length() == 2 && args[0]->IsString() && args[1]->IsNumber()) {
    v8::String::AsciiValue filename(args[0]->ToString()); /* type: _18997  */
    wxBitmapType type = (wxBitmapType)args[1]->ToNumber()->Value(); /* type: _3508  */
    

    wxNode_wxBitmap *self = new wxNode_wxBitmap(*filename, type);
    NodeExEvtHandlerImpl* evtHandler = dynamic_cast<NodeExEvtHandlerImpl*>(self);
    self->wrap(args.This(), self, evtHandler);
    return args.This();
  }
  
  /*
   * id: _43152
   */
  if(args.Length() == 1 && args[0]->IsString()) {
    v8::String::AsciiValue filename(args[0]->ToString()); /* type: _18997  */
    

    wxNode_wxBitmap *self = new wxNode_wxBitmap(*filename);
    NodeExEvtHandlerImpl* evtHandler = dynamic_cast<NodeExEvtHandlerImpl*>(self);
    self->wrap(args.This(), self, evtHandler);
    return args.This();
  }
  
  /*
   * id: _43153
   */
  if(args.Length() == 2 && (args[0]->IsNull() || (args[0]->IsObject() && wxNode_wxImage::AssignableFrom(args[0]->ToObject()->GetConstructorName()))) && args[1]->IsNumber()) {
    wxNode_wxImage* image = args[0]->IsNull() ? NULL : wxNodeObject::unwrap<wxNode_wxImage>(args[0]->ToObject()); /* type: _19641  */
    int depth = (int)args[1]->ToInt32()->Value(); /* type: _233  */
    

    wxNode_wxBitmap *self = new wxNode_wxBitmap(*image, depth);
    NodeExEvtHandlerImpl* evtHandler = dynamic_cast<NodeExEvtHandlerImpl*>(self);
    self->wrap(args.This(), self, evtHandler);
    return args.This();
  }
  
  /*
   * id: _43153
   */
  if(args.Length() == 1 && (args[0]->IsNull() || (args[0]->IsObject() && wxNode_wxImage::AssignableFrom(args[0]->ToObject()->GetConstructorName())))) {
    wxNode_wxImage* image = args[0]->IsNull() ? NULL : wxNodeObject::unwrap<wxNode_wxImage>(args[0]->ToObject()); /* type: _19641  */
    

    wxNode_wxBitmap *self = new wxNode_wxBitmap(*image);
    NodeExEvtHandlerImpl* evtHandler = dynamic_cast<NodeExEvtHandlerImpl*>(self);
    self->wrap(args.This(), self, evtHandler);
    return args.This();
  }
  
  

  std::ostringstream errStr;
  errStr << "Could not find matching constructor for arguments (class name: wxBitmap).\n";
  errStr << "  arg count: " << args.Length() << "\n";
  for(int i = 0; i < args.Length(); i++) {
    v8::String::AsciiValue argStr(args[i]);
    errStr << "  arg[" << i << "]: " << *argStr << "\n";
  }
  return v8::ThrowException(v8::Exception::TypeError(v8::String::New(errStr.str().c_str())));
}


/*static*/ v8::Handle<v8::Value> wxNode_wxBitmap::_Create(const v8::Arguments& args) {
  v8::HandleScope scope;
  wxNode_wxBitmap* self = unwrap<wxNode_wxBitmap>(args.This());

  
  /*
   * id: _21149
   */
  if(args.Length() == 3 && args[0]->IsNumber() && args[1]->IsNumber() && args[2]->IsNumber()) {
    int width = (int)args[0]->ToInt32()->Value(); /* type: _233  */
    int height = (int)args[1]->ToInt32()->Value(); /* type: _233  */
    int depth = (int)args[2]->ToInt32()->Value(); /* type: _233  */
    

    bool returnVal = self->Create(width, height, depth);

    return scope.Close(v8::Boolean::New(returnVal));
  }
  
  /*
   * id: _21149
   */
  if(args.Length() == 2 && args[0]->IsNumber() && args[1]->IsNumber()) {
    int width = (int)args[0]->ToInt32()->Value(); /* type: _233  */
    int height = (int)args[1]->ToInt32()->Value(); /* type: _233  */
    

    bool returnVal = self->Create(width, height);

    return scope.Close(v8::Boolean::New(returnVal));
  }
  
  /*
   * id: _21150
   */
  if(args.Length() == 2 && (args[0]->IsNull() || (args[0]->IsObject() && wxNode_wxSize::AssignableFrom(args[0]->ToObject()->GetConstructorName()))) && args[1]->IsNumber()) {
    wxNode_wxSize* sz = args[0]->IsNull() ? NULL : wxNodeObject::unwrap<wxNode_wxSize>(args[0]->ToObject()); /* type: _25379  */
    int depth = (int)args[1]->ToInt32()->Value(); /* type: _233  */
    

    bool returnVal = self->Create(*sz, depth);

    return scope.Close(v8::Boolean::New(returnVal));
  }
  
  /*
   * id: _21150
   */
  if(args.Length() == 1 && (args[0]->IsNull() || (args[0]->IsObject() && wxNode_wxSize::AssignableFrom(args[0]->ToObject()->GetConstructorName())))) {
    wxNode_wxSize* sz = args[0]->IsNull() ? NULL : wxNodeObject::unwrap<wxNode_wxSize>(args[0]->ToObject()); /* type: _25379  */
    

    bool returnVal = self->Create(*sz);

    return scope.Close(v8::Boolean::New(returnVal));
  }
  

  std::ostringstream errStr;
  errStr << "Could not find matching method for arguments (method name: wxBitmap::Create).\n";
  errStr << "  arg count: " << args.Length() << "\n";
  for(int i = 0; i < args.Length(); i++) {
    v8::String::AsciiValue argStr(args[i]);
    errStr << "  arg[" << i << "]: " << *argStr << "\n";
  }
  return v8::ThrowException(v8::Exception::TypeError(v8::String::New(errStr.str().c_str())));
}

/*static*/ v8::Handle<v8::Value> wxNode_wxBitmap::_GetHeight(const v8::Arguments& args) {
  v8::HandleScope scope;
  wxNode_wxBitmap* self = unwrap<wxNode_wxBitmap>(args.This());

  
  /*
   * id: _21151
   */
  if(args.Length() == 0) {
    

    int returnVal = self->GetHeight();

    return scope.Close(v8::Number::New(returnVal));
  }
  

  std::ostringstream errStr;
  errStr << "Could not find matching method for arguments (method name: wxBitmap::GetHeight).\n";
  errStr << "  arg count: " << args.Length() << "\n";
  for(int i = 0; i < args.Length(); i++) {
    v8::String::AsciiValue argStr(args[i]);
    errStr << "  arg[" << i << "]: " << *argStr << "\n";
  }
  return v8::ThrowException(v8::Exception::TypeError(v8::String::New(errStr.str().c_str())));
}

/*static*/ v8::Handle<v8::Value> wxNode_wxBitmap::_GetWidth(const v8::Arguments& args) {
  v8::HandleScope scope;
  wxNode_wxBitmap* self = unwrap<wxNode_wxBitmap>(args.This());

  
  /*
   * id: _21152
   */
  if(args.Length() == 0) {
    

    int returnVal = self->GetWidth();

    return scope.Close(v8::Number::New(returnVal));
  }
  

  std::ostringstream errStr;
  errStr << "Could not find matching method for arguments (method name: wxBitmap::GetWidth).\n";
  errStr << "  arg count: " << args.Length() << "\n";
  for(int i = 0; i < args.Length(); i++) {
    v8::String::AsciiValue argStr(args[i]);
    errStr << "  arg[" << i << "]: " << *argStr << "\n";
  }
  return v8::ThrowException(v8::Exception::TypeError(v8::String::New(errStr.str().c_str())));
}

/*static*/ v8::Handle<v8::Value> wxNode_wxBitmap::_GetDepth(const v8::Arguments& args) {
  v8::HandleScope scope;
  wxNode_wxBitmap* self = unwrap<wxNode_wxBitmap>(args.This());

  
  /*
   * id: _21153
   */
  if(args.Length() == 0) {
    

    int returnVal = self->GetDepth();

    return scope.Close(v8::Number::New(returnVal));
  }
  

  std::ostringstream errStr;
  errStr << "Could not find matching method for arguments (method name: wxBitmap::GetDepth).\n";
  errStr << "  arg count: " << args.Length() << "\n";
  for(int i = 0; i < args.Length(); i++) {
    v8::String::AsciiValue argStr(args[i]);
    errStr << "  arg[" << i << "]: " << *argStr << "\n";
  }
  return v8::ThrowException(v8::Exception::TypeError(v8::String::New(errStr.str().c_str())));
}

/*static*/ v8::Handle<v8::Value> wxNode_wxBitmap::_GetSize(const v8::Arguments& args) {
  v8::HandleScope scope;
  wxNode_wxBitmap* self = unwrap<wxNode_wxBitmap>(args.This());

  
  /*
   * id: _21154
   */
  if(args.Length() == 0) {
    

    wxSize returnVal = self->GetSize();

    return scope.Close(wxNode_wxSize::NewCopy(returnVal));
  }
  

  std::ostringstream errStr;
  errStr << "Could not find matching method for arguments (method name: wxBitmap::GetSize).\n";
  errStr << "  arg count: " << args.Length() << "\n";
  for(int i = 0; i < args.Length(); i++) {
    v8::String::AsciiValue argStr(args[i]);
    errStr << "  arg[" << i << "]: " << *argStr << "\n";
  }
  return v8::ThrowException(v8::Exception::TypeError(v8::String::New(errStr.str().c_str())));
}

/*static*/ v8::Handle<v8::Value> wxNode_wxBitmap::_ConvertToImage(const v8::Arguments& args) {
  v8::HandleScope scope;
  wxNode_wxBitmap* self = unwrap<wxNode_wxBitmap>(args.This());

  
  /*
   * id: _21155
   */
  if(args.Length() == 0) {
    

    wxImage returnVal = self->ConvertToImage();

    return scope.Close(wxNode_wxImage::NewCopy(returnVal));
  }
  

  std::ostringstream errStr;
  errStr << "Could not find matching method for arguments (method name: wxBitmap::ConvertToImage).\n";
  errStr << "  arg count: " << args.Length() << "\n";
  for(int i = 0; i < args.Length(); i++) {
    v8::String::AsciiValue argStr(args[i]);
    errStr << "  arg[" << i << "]: " << *argStr << "\n";
  }
  return v8::ThrowException(v8::Exception::TypeError(v8::String::New(errStr.str().c_str())));
}

/*static*/ v8::Handle<v8::Value> wxNode_wxBitmap::_ConvertToDisabled(const v8::Arguments& args) {
  v8::HandleScope scope;
  wxNode_wxBitmap* self = unwrap<wxNode_wxBitmap>(args.This());

  
  /*
   * id: _21156
   */
  if(args.Length() == 1 && args[0]->IsNumber()) {
    unsigned char brightness = args[0]->ToInt32()->Value(); /* type: _1539  */
    

    wxBitmap returnVal = self->ConvertToDisabled(brightness);

    return scope.Close(wxNode_wxBitmap::NewCopy(returnVal));
  }
  
  /*
   * id: _21156
   */
  if(args.Length() == 0) {
    

    wxBitmap returnVal = self->ConvertToDisabled();

    return scope.Close(wxNode_wxBitmap::NewCopy(returnVal));
  }
  

  std::ostringstream errStr;
  errStr << "Could not find matching method for arguments (method name: wxBitmap::ConvertToDisabled).\n";
  errStr << "  arg count: " << args.Length() << "\n";
  for(int i = 0; i < args.Length(); i++) {
    v8::String::AsciiValue argStr(args[i]);
    errStr << "  arg[" << i << "]: " << *argStr << "\n";
  }
  return v8::ThrowException(v8::Exception::TypeError(v8::String::New(errStr.str().c_str())));
}

/*static*/ v8::Handle<v8::Value> wxNode_wxBitmap::_GetMask(const v8::Arguments& args) {
  v8::HandleScope scope;
  wxNode_wxBitmap* self = unwrap<wxNode_wxBitmap>(args.This());

  
  /*
   * id: _21157
   */
  if(args.Length() == 0) {
    

    wxMask* returnVal = self->GetMask();

    return scope.Close(wxNode_wxMask::New(returnVal));
  }
  

  std::ostringstream errStr;
  errStr << "Could not find matching method for arguments (method name: wxBitmap::GetMask).\n";
  errStr << "  arg count: " << args.Length() << "\n";
  for(int i = 0; i < args.Length(); i++) {
    v8::String::AsciiValue argStr(args[i]);
    errStr << "  arg[" << i << "]: " << *argStr << "\n";
  }
  return v8::ThrowException(v8::Exception::TypeError(v8::String::New(errStr.str().c_str())));
}

/*static*/ v8::Handle<v8::Value> wxNode_wxBitmap::_SetMask(const v8::Arguments& args) {
  v8::HandleScope scope;
  wxNode_wxBitmap* self = unwrap<wxNode_wxBitmap>(args.This());

  
  /*
   * id: _21158
   */
  if(args.Length() == 1 && (args[0]->IsNull() || (args[0]->IsObject() && wxNode_wxMask::AssignableFrom(args[0]->ToObject()->GetConstructorName())))) {
    wxNode_wxMask* mask = args[0]->IsNull() ? NULL : wxNodeObject::unwrap<wxNode_wxMask>(args[0]->ToObject()); /* type: _65559 * */
    

    self->SetMask(mask);

    return v8::Undefined();
  }
  

  std::ostringstream errStr;
  errStr << "Could not find matching method for arguments (method name: wxBitmap::SetMask).\n";
  errStr << "  arg count: " << args.Length() << "\n";
  for(int i = 0; i < args.Length(); i++) {
    v8::String::AsciiValue argStr(args[i]);
    errStr << "  arg[" << i << "]: " << *argStr << "\n";
  }
  return v8::ThrowException(v8::Exception::TypeError(v8::String::New(errStr.str().c_str())));
}

/*static*/ v8::Handle<v8::Value> wxNode_wxBitmap::_GetSubBitmap(const v8::Arguments& args) {
  v8::HandleScope scope;
  wxNode_wxBitmap* self = unwrap<wxNode_wxBitmap>(args.This());

  
  /*
   * id: _21159
   */
  if(args.Length() == 1 && (args[0]->IsNull() || (args[0]->IsObject() && wxNode_wxRect::AssignableFrom(args[0]->ToObject()->GetConstructorName())))) {
    wxNode_wxRect* rect = args[0]->IsNull() ? NULL : wxNodeObject::unwrap<wxNode_wxRect>(args[0]->ToObject()); /* type: _25378  */
    

    wxBitmap returnVal = self->GetSubBitmap(*rect);

    return scope.Close(wxNode_wxBitmap::NewCopy(returnVal));
  }
  

  std::ostringstream errStr;
  errStr << "Could not find matching method for arguments (method name: wxBitmap::GetSubBitmap).\n";
  errStr << "  arg count: " << args.Length() << "\n";
  for(int i = 0; i < args.Length(); i++) {
    v8::String::AsciiValue argStr(args[i]);
    errStr << "  arg[" << i << "]: " << *argStr << "\n";
  }
  return v8::ThrowException(v8::Exception::TypeError(v8::String::New(errStr.str().c_str())));
}

/*static*/ v8::Handle<v8::Value> wxNode_wxBitmap::_SaveFile(const v8::Arguments& args) {
  v8::HandleScope scope;
  wxNode_wxBitmap* self = unwrap<wxNode_wxBitmap>(args.This());

  
  /*
   * id: _21160
   */
  if(args.Length() == 3 && args[0]->IsString() && args[1]->IsNumber() && (args[2]->IsNull() || (args[2]->IsObject() && wxNode_wxPalette::AssignableFrom(args[2]->ToObject()->GetConstructorName())))) {
    v8::String::AsciiValue name(args[0]->ToString()); /* type: _18997  */
    wxBitmapType type = (wxBitmapType)args[1]->ToNumber()->Value(); /* type: _3508  */
    wxNode_wxPalette* palette = args[2]->IsNull() ? NULL : wxNodeObject::unwrap<wxNode_wxPalette>(args[2]->ToObject()); /* type: _65560 * */
    

    bool returnVal = self->SaveFile(*name, type, palette);

    return scope.Close(v8::Boolean::New(returnVal));
  }
  
  /*
   * id: _21160
   */
  if(args.Length() == 2 && args[0]->IsString() && args[1]->IsNumber()) {
    v8::String::AsciiValue name(args[0]->ToString()); /* type: _18997  */
    wxBitmapType type = (wxBitmapType)args[1]->ToNumber()->Value(); /* type: _3508  */
    

    bool returnVal = self->SaveFile(*name, type);

    return scope.Close(v8::Boolean::New(returnVal));
  }
  

  std::ostringstream errStr;
  errStr << "Could not find matching method for arguments (method name: wxBitmap::SaveFile).\n";
  errStr << "  arg count: " << args.Length() << "\n";
  for(int i = 0; i < args.Length(); i++) {
    v8::String::AsciiValue argStr(args[i]);
    errStr << "  arg[" << i << "]: " << *argStr << "\n";
  }
  return v8::ThrowException(v8::Exception::TypeError(v8::String::New(errStr.str().c_str())));
}

/*static*/ v8::Handle<v8::Value> wxNode_wxBitmap::_LoadFile(const v8::Arguments& args) {
  v8::HandleScope scope;
  wxNode_wxBitmap* self = unwrap<wxNode_wxBitmap>(args.This());

  
  /*
   * id: _21161
   */
  if(args.Length() == 2 && args[0]->IsString() && args[1]->IsNumber()) {
    v8::String::AsciiValue name(args[0]->ToString()); /* type: _18997  */
    wxBitmapType type = (wxBitmapType)args[1]->ToNumber()->Value(); /* type: _3508  */
    

    bool returnVal = self->LoadFile(*name, type);

    return scope.Close(v8::Boolean::New(returnVal));
  }
  

  std::ostringstream errStr;
  errStr << "Could not find matching method for arguments (method name: wxBitmap::LoadFile).\n";
  errStr << "  arg count: " << args.Length() << "\n";
  for(int i = 0; i < args.Length(); i++) {
    v8::String::AsciiValue argStr(args[i]);
    errStr << "  arg[" << i << "]: " << *argStr << "\n";
  }
  return v8::ThrowException(v8::Exception::TypeError(v8::String::New(errStr.str().c_str())));
}

/*static*/ v8::Handle<v8::Value> wxNode_wxBitmap::_GetPalette(const v8::Arguments& args) {
  v8::HandleScope scope;
  wxNode_wxBitmap* self = unwrap<wxNode_wxBitmap>(args.This());

  
  /*
   * id: _21162
   */
  if(args.Length() == 0) {
    

    const wxPalette* returnVal = self->GetPalette();

    return scope.Close(wxNode_wxPalette::New(returnVal));
  }
  

  std::ostringstream errStr;
  errStr << "Could not find matching method for arguments (method name: wxBitmap::GetPalette).\n";
  errStr << "  arg count: " << args.Length() << "\n";
  for(int i = 0; i < args.Length(); i++) {
    v8::String::AsciiValue argStr(args[i]);
    errStr << "  arg[" << i << "]: " << *argStr << "\n";
  }
  return v8::ThrowException(v8::Exception::TypeError(v8::String::New(errStr.str().c_str())));
}

/*static*/ v8::Handle<v8::Value> wxNode_wxBitmap::_SetPalette(const v8::Arguments& args) {
  v8::HandleScope scope;
  wxNode_wxBitmap* self = unwrap<wxNode_wxBitmap>(args.This());

  
  /*
   * id: _21163
   */
  if(args.Length() == 1 && (args[0]->IsNull() || (args[0]->IsObject() && wxNode_wxPalette::AssignableFrom(args[0]->ToObject()->GetConstructorName())))) {
    wxNode_wxPalette* palette = args[0]->IsNull() ? NULL : wxNodeObject::unwrap<wxNode_wxPalette>(args[0]->ToObject()); /* type: _65562  */
    

    self->SetPalette(*palette);

    return v8::Undefined();
  }
  

  std::ostringstream errStr;
  errStr << "Could not find matching method for arguments (method name: wxBitmap::SetPalette).\n";
  errStr << "  arg count: " << args.Length() << "\n";
  for(int i = 0; i < args.Length(); i++) {
    v8::String::AsciiValue argStr(args[i]);
    errStr << "  arg[" << i << "]: " << *argStr << "\n";
  }
  return v8::ThrowException(v8::Exception::TypeError(v8::String::New(errStr.str().c_str())));
}

/*static*/ v8::Handle<v8::Value> wxNode_wxBitmap::_CopyFromIcon(const v8::Arguments& args) {
  v8::HandleScope scope;
  wxNode_wxBitmap* self = unwrap<wxNode_wxBitmap>(args.This());

  
  /*
   * id: _21164
   */
  if(args.Length() == 1 && (args[0]->IsNull() || (args[0]->IsObject() && wxNode_wxIcon::AssignableFrom(args[0]->ToObject()->GetConstructorName())))) {
    wxNode_wxIcon* icon = args[0]->IsNull() ? NULL : wxNodeObject::unwrap<wxNode_wxIcon>(args[0]->ToObject()); /* type: _19637  */
    

    bool returnVal = self->CopyFromIcon(*icon);

    return scope.Close(v8::Boolean::New(returnVal));
  }
  

  std::ostringstream errStr;
  errStr << "Could not find matching method for arguments (method name: wxBitmap::CopyFromIcon).\n";
  errStr << "  arg count: " << args.Length() << "\n";
  for(int i = 0; i < args.Length(); i++) {
    v8::String::AsciiValue argStr(args[i]);
    errStr << "  arg[" << i << "]: " << *argStr << "\n";
  }
  return v8::ThrowException(v8::Exception::TypeError(v8::String::New(errStr.str().c_str())));
}

/*static*/ v8::Handle<v8::Value> wxNode_wxBitmap::_SetHeight(const v8::Arguments& args) {
  v8::HandleScope scope;
  wxNode_wxBitmap* self = unwrap<wxNode_wxBitmap>(args.This());

  
  /*
   * id: _21165
   */
  if(args.Length() == 1 && args[0]->IsNumber()) {
    int height = (int)args[0]->ToInt32()->Value(); /* type: _233  */
    

    self->SetHeight(height);

    return v8::Undefined();
  }
  

  std::ostringstream errStr;
  errStr << "Could not find matching method for arguments (method name: wxBitmap::SetHeight).\n";
  errStr << "  arg count: " << args.Length() << "\n";
  for(int i = 0; i < args.Length(); i++) {
    v8::String::AsciiValue argStr(args[i]);
    errStr << "  arg[" << i << "]: " << *argStr << "\n";
  }
  return v8::ThrowException(v8::Exception::TypeError(v8::String::New(errStr.str().c_str())));
}

/*static*/ v8::Handle<v8::Value> wxNode_wxBitmap::_SetWidth(const v8::Arguments& args) {
  v8::HandleScope scope;
  wxNode_wxBitmap* self = unwrap<wxNode_wxBitmap>(args.This());

  
  /*
   * id: _21166
   */
  if(args.Length() == 1 && args[0]->IsNumber()) {
    int width = (int)args[0]->ToInt32()->Value(); /* type: _233  */
    

    self->SetWidth(width);

    return v8::Undefined();
  }
  

  std::ostringstream errStr;
  errStr << "Could not find matching method for arguments (method name: wxBitmap::SetWidth).\n";
  errStr << "  arg count: " << args.Length() << "\n";
  for(int i = 0; i < args.Length(); i++) {
    v8::String::AsciiValue argStr(args[i]);
    errStr << "  arg[" << i << "]: " << *argStr << "\n";
  }
  return v8::ThrowException(v8::Exception::TypeError(v8::String::New(errStr.str().c_str())));
}

/*static*/ v8::Handle<v8::Value> wxNode_wxBitmap::_SetDepth(const v8::Arguments& args) {
  v8::HandleScope scope;
  wxNode_wxBitmap* self = unwrap<wxNode_wxBitmap>(args.This());

  
  /*
   * id: _21167
   */
  if(args.Length() == 1 && args[0]->IsNumber()) {
    int depth = (int)args[0]->ToInt32()->Value(); /* type: _233  */
    

    self->SetDepth(depth);

    return v8::Undefined();
  }
  

  std::ostringstream errStr;
  errStr << "Could not find matching method for arguments (method name: wxBitmap::SetDepth).\n";
  errStr << "  arg count: " << args.Length() << "\n";
  for(int i = 0; i < args.Length(); i++) {
    v8::String::AsciiValue argStr(args[i]);
    errStr << "  arg[" << i << "]: " << *argStr << "\n";
  }
  return v8::ThrowException(v8::Exception::TypeError(v8::String::New(errStr.str().c_str())));
}

/*static*/ v8::Handle<v8::Value> wxNode_wxBitmap::_GetHandlers(const v8::Arguments& args) {
  v8::HandleScope scope;
  wxNode_wxBitmap* self = unwrap<wxNode_wxBitmap>(args.This());

  
  /*
   * id: _21168
   */
  if(args.Length() == 0) {
    

    wxList returnVal = self->GetHandlers();

    return scope.Close(wxNode_wxList::NewCopy(returnVal));
  }
  

  std::ostringstream errStr;
  errStr << "Could not find matching method for arguments (method name: wxBitmap::GetHandlers).\n";
  errStr << "  arg count: " << args.Length() << "\n";
  for(int i = 0; i < args.Length(); i++) {
    v8::String::AsciiValue argStr(args[i]);
    errStr << "  arg[" << i << "]: " << *argStr << "\n";
  }
  return v8::ThrowException(v8::Exception::TypeError(v8::String::New(errStr.str().c_str())));
}

/*static*/ v8::Handle<v8::Value> wxNode_wxBitmap::_AddHandler(const v8::Arguments& args) {
  v8::HandleScope scope;
  wxNode_wxBitmap* self = unwrap<wxNode_wxBitmap>(args.This());

  
  /*
   * id: _21169
   */
  if(args.Length() == 1 && (args[0]->IsNull() || (args[0]->IsObject() && wxNode_wxBitmapHandler::AssignableFrom(args[0]->ToObject()->GetConstructorName())))) {
    wxNode_wxBitmapHandler* handler = args[0]->IsNull() ? NULL : wxNodeObject::unwrap<wxNode_wxBitmapHandler>(args[0]->ToObject()); /* type: _65564 * */
    

    self->AddHandler(handler);

    return v8::Undefined();
  }
  

  std::ostringstream errStr;
  errStr << "Could not find matching method for arguments (method name: wxBitmap::AddHandler).\n";
  errStr << "  arg count: " << args.Length() << "\n";
  for(int i = 0; i < args.Length(); i++) {
    v8::String::AsciiValue argStr(args[i]);
    errStr << "  arg[" << i << "]: " << *argStr << "\n";
  }
  return v8::ThrowException(v8::Exception::TypeError(v8::String::New(errStr.str().c_str())));
}

/*static*/ v8::Handle<v8::Value> wxNode_wxBitmap::_InsertHandler(const v8::Arguments& args) {
  v8::HandleScope scope;
  wxNode_wxBitmap* self = unwrap<wxNode_wxBitmap>(args.This());

  
  /*
   * id: _21170
   */
  if(args.Length() == 1 && (args[0]->IsNull() || (args[0]->IsObject() && wxNode_wxBitmapHandler::AssignableFrom(args[0]->ToObject()->GetConstructorName())))) {
    wxNode_wxBitmapHandler* handler = args[0]->IsNull() ? NULL : wxNodeObject::unwrap<wxNode_wxBitmapHandler>(args[0]->ToObject()); /* type: _65564 * */
    

    self->InsertHandler(handler);

    return v8::Undefined();
  }
  

  std::ostringstream errStr;
  errStr << "Could not find matching method for arguments (method name: wxBitmap::InsertHandler).\n";
  errStr << "  arg count: " << args.Length() << "\n";
  for(int i = 0; i < args.Length(); i++) {
    v8::String::AsciiValue argStr(args[i]);
    errStr << "  arg[" << i << "]: " << *argStr << "\n";
  }
  return v8::ThrowException(v8::Exception::TypeError(v8::String::New(errStr.str().c_str())));
}

/*static*/ v8::Handle<v8::Value> wxNode_wxBitmap::_RemoveHandler(const v8::Arguments& args) {
  v8::HandleScope scope;
  wxNode_wxBitmap* self = unwrap<wxNode_wxBitmap>(args.This());

  
  /*
   * id: _21171
   */
  if(args.Length() == 1 && args[0]->IsString()) {
    v8::String::AsciiValue name(args[0]->ToString()); /* type: _18997  */
    

    bool returnVal = self->RemoveHandler(*name);

    return scope.Close(v8::Boolean::New(returnVal));
  }
  

  std::ostringstream errStr;
  errStr << "Could not find matching method for arguments (method name: wxBitmap::RemoveHandler).\n";
  errStr << "  arg count: " << args.Length() << "\n";
  for(int i = 0; i < args.Length(); i++) {
    v8::String::AsciiValue argStr(args[i]);
    errStr << "  arg[" << i << "]: " << *argStr << "\n";
  }
  return v8::ThrowException(v8::Exception::TypeError(v8::String::New(errStr.str().c_str())));
}

/*static*/ v8::Handle<v8::Value> wxNode_wxBitmap::_FindHandler(const v8::Arguments& args) {
  v8::HandleScope scope;
  wxNode_wxBitmap* self = unwrap<wxNode_wxBitmap>(args.This());

  
  /*
   * id: _21172
   */
  if(args.Length() == 1 && args[0]->IsString()) {
    v8::String::AsciiValue name(args[0]->ToString()); /* type: _18997  */
    

    wxBitmapHandler* returnVal = self->FindHandler(*name);

    return scope.Close(wxNode_wxBitmapHandler::New(returnVal));
  }
  
  /*
   * id: _21173
   */
  if(args.Length() == 2 && args[0]->IsString() && args[1]->IsNumber()) {
    v8::String::AsciiValue extension(args[0]->ToString()); /* type: _18997  */
    wxBitmapType bitmapType = (wxBitmapType)args[1]->ToNumber()->Value(); /* type: _3508  */
    

    wxBitmapHandler* returnVal = self->FindHandler(*extension, bitmapType);

    return scope.Close(wxNode_wxBitmapHandler::New(returnVal));
  }
  
  /*
   * id: _21174
   */
  if(args.Length() == 1 && args[0]->IsNumber()) {
    wxBitmapType bitmapType = (wxBitmapType)args[0]->ToNumber()->Value(); /* type: _3508  */
    

    wxBitmapHandler* returnVal = self->FindHandler(bitmapType);

    return scope.Close(wxNode_wxBitmapHandler::New(returnVal));
  }
  

  std::ostringstream errStr;
  errStr << "Could not find matching method for arguments (method name: wxBitmap::FindHandler).\n";
  errStr << "  arg count: " << args.Length() << "\n";
  for(int i = 0; i < args.Length(); i++) {
    v8::String::AsciiValue argStr(args[i]);
    errStr << "  arg[" << i << "]: " << *argStr << "\n";
  }
  return v8::ThrowException(v8::Exception::TypeError(v8::String::New(errStr.str().c_str())));
}

/*static*/ v8::Handle<v8::Value> wxNode_wxBitmap::_CleanUpHandlers(const v8::Arguments& args) {
  v8::HandleScope scope;
  wxNode_wxBitmap* self = unwrap<wxNode_wxBitmap>(args.This());

  
  /*
   * id: _21175
   */
  if(args.Length() == 0) {
    

    self->CleanUpHandlers();

    return v8::Undefined();
  }
  

  std::ostringstream errStr;
  errStr << "Could not find matching method for arguments (method name: wxBitmap::CleanUpHandlers).\n";
  errStr << "  arg count: " << args.Length() << "\n";
  for(int i = 0; i < args.Length(); i++) {
    v8::String::AsciiValue argStr(args[i]);
    errStr << "  arg[" << i << "]: " << *argStr << "\n";
  }
  return v8::ThrowException(v8::Exception::TypeError(v8::String::New(errStr.str().c_str())));
}

/*static*/ v8::Handle<v8::Value> wxNode_wxBitmap::_QuantizeColour(const v8::Arguments& args) {
  v8::HandleScope scope;
  wxNode_wxBitmap* self = unwrap<wxNode_wxBitmap>(args.This());

  
  /*
   * id: _21176
   */
  if(args.Length() == 1 && (args[0]->IsNull() || (args[0]->IsObject() && wxNode_wxColour::AssignableFrom(args[0]->ToObject()->GetConstructorName())))) {
    wxNode_wxColour* colour = args[0]->IsNull() ? NULL : wxNodeObject::unwrap<wxNode_wxColour>(args[0]->ToObject()); /* type: _19643  */
    

    wxColour returnVal = self->QuantizeColour(*colour);

    return scope.Close(wxNode_wxColour::NewCopy(returnVal));
  }
  

  std::ostringstream errStr;
  errStr << "Could not find matching method for arguments (method name: wxBitmap::QuantizeColour).\n";
  errStr << "  arg count: " << args.Length() << "\n";
  for(int i = 0; i < args.Length(); i++) {
    v8::String::AsciiValue argStr(args[i]);
    errStr << "  arg[" << i << "]: " << *argStr << "\n";
  }
  return v8::ThrowException(v8::Exception::TypeError(v8::String::New(errStr.str().c_str())));
}

/*static*/ v8::Handle<v8::Value> wxNode_wxBitmap::_GetClassInfo(const v8::Arguments& args) {
  v8::HandleScope scope;
  wxNode_wxBitmap* self = unwrap<wxNode_wxBitmap>(args.This());

  
  /*
   * id: _21177
   */
  if(args.Length() == 0) {
    

    wxClassInfo* returnVal = self->GetClassInfo();

    return scope.Close(wxNode_wxClassInfo::New(returnVal));
  }
  

  std::ostringstream errStr;
  errStr << "Could not find matching method for arguments (method name: wxBitmap::GetClassInfo).\n";
  errStr << "  arg count: " << args.Length() << "\n";
  for(int i = 0; i < args.Length(); i++) {
    v8::String::AsciiValue argStr(args[i]);
    errStr << "  arg[" << i << "]: " << *argStr << "\n";
  }
  return v8::ThrowException(v8::Exception::TypeError(v8::String::New(errStr.str().c_str())));
}

