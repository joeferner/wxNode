
#include <sstream>
#include "wxNode_wxPoint.h"
#include "wxNode_wxRealPoint.h"


/* static */ v8::Persistent<v8::FunctionTemplate> wxNode_wxPoint::s_ct;



wxNode_wxPoint::wxNode_wxPoint(wxPoint& arg0)
  : wxPoint(arg0)
{

}

wxNode_wxPoint::wxNode_wxPoint()
  : wxPoint()
{

}

wxNode_wxPoint::wxNode_wxPoint(int xx, int yy)
  : wxPoint(xx, yy)
{

}

wxNode_wxPoint::wxNode_wxPoint(wxRealPoint& pt)
  : wxPoint(pt)
{

}




/*static*/ void wxNode_wxPoint::Init(v8::Handle<v8::Object> target) {
  v8::HandleScope scope;

  v8::Local<v8::FunctionTemplate> t = v8::FunctionTemplate::New(wxNodeObject::NewFunc);
  s_ct = v8::Persistent<v8::FunctionTemplate>::New(t);
  s_ct->InstanceTemplate()->SetInternalFieldCount(2);
  s_ct->SetClassName(v8::String::NewSymbol("Point"));

  NODE_SET_PROTOTYPE_METHOD(s_ct, "init", _init);
  AddMethods(s_ct);

  target->Set(v8::String::NewSymbol("Point"), s_ct->GetFunction());
}

/*static*/ void wxNode_wxPoint::AddMethods(v8::Handle<v8::FunctionTemplate> target) {
  wxNode_wxEvtHandler::AddMethods(target);
  NODE_SET_PROTOTYPE_METHOD(target, "isFullySpecified", _IsFullySpecified);
  NODE_SET_PROTOTYPE_METHOD(target, "setDefaults", _SetDefaults);
  
  target->PrototypeTemplate()->SetAccessor(v8::String::New("x"), _xGet, _xSet);
  target->PrototypeTemplate()->SetAccessor(v8::String::New("y"), _yGet, _ySet);
  
}

/*static*/ v8::Handle<v8::Value> wxNode_wxPoint::New(const wxNode_wxPoint* obj) {
  v8::HandleScope scope;

  if(obj == NULL) {
    return scope.Close(v8::Null());
  }
  
  v8::Local<v8::FunctionTemplate> returnObjFt = v8::FunctionTemplate::New(wxNodeObject::NewFunc);
  returnObjFt->InstanceTemplate()->SetInternalFieldCount(2);
  returnObjFt->SetClassName(v8::String::NewSymbol("Point"));
  wxNode_wxPoint::AddMethods(returnObjFt);

  v8::Local<v8::Function> returnObjFn = returnObjFt->GetFunction();

  v8::Local<v8::Object> returnObj = returnObjFn->CallAsConstructor(0, new v8::Local<v8::Value>[0])->ToObject();
  returnObj->SetPointerInInternalField(0, (void*)obj);
  NodeExEvtHandlerImpl* evtHandler = dynamic_cast<NodeExEvtHandlerImpl*>((wxNode_wxPoint*)obj);
  returnObj->SetPointerInInternalField(1, evtHandler);

  return scope.Close(returnObj);
}

/*static*/ v8::Handle<v8::Value> wxNode_wxPoint::New(const wxPoint* obj) {
  v8::HandleScope scope;

  if(obj == NULL) {
    return scope.Close(v8::Null());
  }
  
  v8::Local<v8::FunctionTemplate> returnObjFt = v8::FunctionTemplate::New(wxNodeObject::NewFunc);
  returnObjFt->InstanceTemplate()->SetInternalFieldCount(2);
  returnObjFt->SetClassName(v8::String::NewSymbol("Point"));
  wxNode_wxPoint::AddMethods(returnObjFt);

  v8::Local<v8::Function> returnObjFn = returnObjFt->GetFunction();
  v8::Local<v8::Object> returnObj = returnObjFn->CallAsConstructor(0, new v8::Local<v8::Value>[0])->ToObject();
  returnObj->SetPointerInInternalField(0, (void*)obj);
  NodeExEvtHandlerImplWrap* wrap = new NodeExEvtHandlerImplWrap(returnObj);
  NodeExEvtHandlerImpl* evtHandler = dynamic_cast<NodeExEvtHandlerImpl*>(wrap);
  returnObj->SetPointerInInternalField(1, evtHandler);

  return scope.Close(returnObj);
}

/*static*/ v8::Handle<v8::Value> wxNode_wxPoint::NewCopy(const wxPoint& obj) {
  v8::HandleScope scope;
  wxNode_wxPoint* returnVal = new wxNode_wxPoint();
  memcpy(dynamic_cast<wxPoint*>(returnVal), &obj, sizeof(wxPoint));
  return scope.Close(New(returnVal));

}

/*static*/ bool wxNode_wxPoint::AssignableFrom(const v8::Handle<v8::String>& className) {
  v8::String::AsciiValue classNameStr(className);
  return AssignableFrom(*classNameStr);
}

/*static*/ bool wxNode_wxPoint::AssignableFrom(const char* className) {
  if(!strcmp("Point", className)) { return true; }
  

  return false;
}

/*static*/ v8::Handle<v8::Value> wxNode_wxPoint::_init(const v8::Arguments& args) {
  v8::HandleScope scope;

  
  
  /*
   * id: _26648
   */
  if(args.Length() == 1 && (args[0]->IsNull() || (args[0]->IsObject() && wxNode_wxPoint::AssignableFrom(args[0]->ToObject()->GetConstructorName())))) {
    wxNode_wxPoint* arg0 = args[0]->IsNull() ? NULL : wxNodeObject::unwrap<wxNode_wxPoint>(args[0]->ToObject()); /* type: _20518  */
    

    wxNode_wxPoint *self = new wxNode_wxPoint(*arg0);
    NodeExEvtHandlerImpl* evtHandler = dynamic_cast<NodeExEvtHandlerImpl*>(self);
    self->wrap(args.This(), self, evtHandler);
    return args.This();
  }
  
  /*
   * id: _26649
   */
  if(args.Length() == 0) {
    

    wxNode_wxPoint *self = new wxNode_wxPoint();
    NodeExEvtHandlerImpl* evtHandler = dynamic_cast<NodeExEvtHandlerImpl*>(self);
    self->wrap(args.This(), self, evtHandler);
    return args.This();
  }
  
  /*
   * id: _26650
   */
  if(args.Length() == 2 && args[0]->IsNumber() && args[1]->IsNumber()) {
    int xx = (int)args[0]->ToInt32()->Value(); /* type: _165  */
    int yy = (int)args[1]->ToInt32()->Value(); /* type: _165  */
    

    wxNode_wxPoint *self = new wxNode_wxPoint(xx, yy);
    NodeExEvtHandlerImpl* evtHandler = dynamic_cast<NodeExEvtHandlerImpl*>(self);
    self->wrap(args.This(), self, evtHandler);
    return args.This();
  }
  
  /*
   * id: _26651
   */
  if(args.Length() == 1 && (args[0]->IsNull() || (args[0]->IsObject() && wxNode_wxRealPoint::AssignableFrom(args[0]->ToObject()->GetConstructorName())))) {
    wxNode_wxRealPoint* pt = args[0]->IsNull() ? NULL : wxNodeObject::unwrap<wxNode_wxRealPoint>(args[0]->ToObject()); /* type: _20629  */
    

    wxNode_wxPoint *self = new wxNode_wxPoint(*pt);
    NodeExEvtHandlerImpl* evtHandler = dynamic_cast<NodeExEvtHandlerImpl*>(self);
    self->wrap(args.This(), self, evtHandler);
    return args.This();
  }
  
  

  std::ostringstream errStr;
  errStr << "Could not find matching constructor for arguments (class name: wxPoint).\n";
  errStr << "  arg count: " << args.Length() << "\n";
  for(int i = 0; i < args.Length(); i++) {
    v8::String::AsciiValue argStr(args[i]);
    errStr << "  arg[" << i << "]: " << *argStr << "\n";
  }
  return v8::ThrowException(v8::Exception::TypeError(v8::String::New(errStr.str().c_str())));
}


/*static*/ v8::Handle<v8::Value> wxNode_wxPoint::_IsFullySpecified(const v8::Arguments& args) {
  v8::HandleScope scope;
  wxNode_wxPoint* self = unwrap<wxNode_wxPoint>(args.This());

  
  /*
   * id: _26656
   */
  if(args.Length() == 0) {
    

    bool returnVal = self->IsFullySpecified();

    return scope.Close(v8::Boolean::New(returnVal));
  }
  

  std::ostringstream errStr;
  errStr << "Could not find matching method for arguments (method name: wxPoint::IsFullySpecified).\n";
  errStr << "  arg count: " << args.Length() << "\n";
  for(int i = 0; i < args.Length(); i++) {
    v8::String::AsciiValue argStr(args[i]);
    errStr << "  arg[" << i << "]: " << *argStr << "\n";
  }
  return v8::ThrowException(v8::Exception::TypeError(v8::String::New(errStr.str().c_str())));
}

/*static*/ v8::Handle<v8::Value> wxNode_wxPoint::_SetDefaults(const v8::Arguments& args) {
  v8::HandleScope scope;
  wxNode_wxPoint* self = unwrap<wxNode_wxPoint>(args.This());

  
  /*
   * id: _26657
   */
  if(args.Length() == 1 && (args[0]->IsNull() || (args[0]->IsObject() && wxNode_wxPoint::AssignableFrom(args[0]->ToObject()->GetConstructorName())))) {
    wxNode_wxPoint* pt = args[0]->IsNull() ? NULL : wxNodeObject::unwrap<wxNode_wxPoint>(args[0]->ToObject()); /* type: _20518  */
    

    self->SetDefaults(*pt);

    return v8::Undefined();
  }
  

  std::ostringstream errStr;
  errStr << "Could not find matching method for arguments (method name: wxPoint::SetDefaults).\n";
  errStr << "  arg count: " << args.Length() << "\n";
  for(int i = 0; i < args.Length(); i++) {
    v8::String::AsciiValue argStr(args[i]);
    errStr << "  arg[" << i << "]: " << *argStr << "\n";
  }
  return v8::ThrowException(v8::Exception::TypeError(v8::String::New(errStr.str().c_str())));
}



/*static*/ v8::Handle<v8::Value> wxNode_wxPoint::_xGet(v8::Local<v8::String> name, const v8::AccessorInfo& info) {
  v8::HandleScope scope;
  wxNode_wxPoint* self = unwrap<wxNode_wxPoint>(info.This());

  return scope.Close(v8::Number::New(self->x));
}

/*static*/ void wxNode_wxPoint::_xSet(v8::Local<v8::String> name, v8::Local<v8::Value> val, const v8::AccessorInfo& info) {
  v8::HandleScope scope;
  wxNode_wxPoint* self = unwrap<wxNode_wxPoint>(info.This());

  self->x = val->ToNumber()->Value();
}

/*static*/ v8::Handle<v8::Value> wxNode_wxPoint::_yGet(v8::Local<v8::String> name, const v8::AccessorInfo& info) {
  v8::HandleScope scope;
  wxNode_wxPoint* self = unwrap<wxNode_wxPoint>(info.This());

  return scope.Close(v8::Number::New(self->y));
}

/*static*/ void wxNode_wxPoint::_ySet(v8::Local<v8::String> name, v8::Local<v8::Value> val, const v8::AccessorInfo& info) {
  v8::HandleScope scope;
  wxNode_wxPoint* self = unwrap<wxNode_wxPoint>(info.This());

  self->y = val->ToNumber()->Value();
}

