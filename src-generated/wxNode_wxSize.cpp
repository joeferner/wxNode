
#include "wxNode_wxSize.h"
#include "wxNode_wxPoint.h"


/* static */ v8::Persistent<v8::FunctionTemplate> wxNode_wxSize::s_ct;



wxNode_wxSize::wxNode_wxSize(wxNode_wxSize& arg0)
  : wxSize(arg0)
{

}

wxNode_wxSize::wxNode_wxSize()
  : wxSize()
{

}

wxNode_wxSize::wxNode_wxSize(int xx, int yy)
  : wxSize(xx, yy)
{

}




/*static*/ void wxNode_wxSize::Init(v8::Handle<v8::Object> target) {
  v8::HandleScope scope;

  v8::Local<v8::FunctionTemplate> t = v8::FunctionTemplate::New(wxNodeObject::NewFunc);
  s_ct = v8::Persistent<v8::FunctionTemplate>::New(t);
  s_ct->InstanceTemplate()->SetInternalFieldCount(2);
  s_ct->SetClassName(v8::String::NewSymbol("wxSize"));

  NODE_SET_PROTOTYPE_METHOD(s_ct, "init", _init);
  AddMethods(s_ct);

  target->Set(v8::String::NewSymbol("wxSize"), s_ct->GetFunction());
}

/*static*/ void wxNode_wxSize::AddMethods(v8::Handle<v8::FunctionTemplate> target) {
  wxNode_wxEvtHandler::AddMethods(target);
  NODE_SET_PROTOTYPE_METHOD(target, "incTo", _IncTo);
  NODE_SET_PROTOTYPE_METHOD(target, "decTo", _DecTo);
  NODE_SET_PROTOTYPE_METHOD(target, "incBy", _IncBy);
  NODE_SET_PROTOTYPE_METHOD(target, "decBy", _DecBy);
  NODE_SET_PROTOTYPE_METHOD(target, "scale", _Scale);
  NODE_SET_PROTOTYPE_METHOD(target, "set", _Set);
  NODE_SET_PROTOTYPE_METHOD(target, "setWidth", _SetWidth);
  NODE_SET_PROTOTYPE_METHOD(target, "setHeight", _SetHeight);
  NODE_SET_PROTOTYPE_METHOD(target, "getWidth", _GetWidth);
  NODE_SET_PROTOTYPE_METHOD(target, "getHeight", _GetHeight);
  NODE_SET_PROTOTYPE_METHOD(target, "isFullySpecified", _IsFullySpecified);
  NODE_SET_PROTOTYPE_METHOD(target, "setDefaults", _SetDefaults);
  NODE_SET_PROTOTYPE_METHOD(target, "getX", _GetX);
  NODE_SET_PROTOTYPE_METHOD(target, "getY", _GetY);
  
}

/*static*/ v8::Handle<v8::Value> wxNode_wxSize::_init(const v8::Arguments& args) {
  v8::HandleScope scope;

  
  
  /*
   * id: _37138
   */
  if(args.Length() == 1 && (args[0]->IsNull() || args[0]->IsObject())) {
    wxNode_wxSize* arg0 = args[0]->IsNull() ? NULL : wxNodeObject::unwrap<wxNode_wxSize>(args[0]->ToObject()); /* type: _20522  */
    

    wxNode_wxSize *self = new wxNode_wxSize(*arg0);
    NodeExEvtHandlerImpl* evtHandler = dynamic_cast<NodeExEvtHandlerImpl*>(self);
    self->wrap(args.This(), self, evtHandler);
    return args.This();
  }
  
  /*
   * id: _37139
   */
  if(args.Length() == 0) {
    

    wxNode_wxSize *self = new wxNode_wxSize();
    NodeExEvtHandlerImpl* evtHandler = dynamic_cast<NodeExEvtHandlerImpl*>(self);
    self->wrap(args.This(), self, evtHandler);
    return args.This();
  }
  
  /*
   * id: _37140
   */
  if(args.Length() == 2 && args[0]->IsNumber() && args[1]->IsNumber()) {
    int xx = (int)args[0]->ToInt32()->Value(); /* type: _162  */
    int yy = (int)args[1]->ToInt32()->Value(); /* type: _162  */
    

    wxNode_wxSize *self = new wxNode_wxSize(xx, yy);
    NodeExEvtHandlerImpl* evtHandler = dynamic_cast<NodeExEvtHandlerImpl*>(self);
    self->wrap(args.This(), self, evtHandler);
    return args.This();
  }
  
  

  return v8::ThrowException(v8::String::New("Could not find matching constructor for arguments (class name: wxSize)."));
}


/*static*/ v8::Handle<v8::Value> wxNode_wxSize::_IncTo(const v8::Arguments& args) {
  v8::HandleScope scope;
  wxNode_wxSize* self = unwrap<wxNode_wxSize>(args.This());

  
  /*
   * id: _37153
   */
  if(args.Length() == 1 && (args[0]->IsNull() || args[0]->IsObject())) {
    wxNode_wxSize* sz = args[0]->IsNull() ? NULL : wxNodeObject::unwrap<wxNode_wxSize>(args[0]->ToObject()); /* type: _20522  */
    

    self->IncTo(*sz);

    // TODO: handle return type
    return v8::Undefined();
  }
  

  return v8::ThrowException(v8::String::New("Could not find matching method for arguments (method name: IncTo)."));
}

/*static*/ v8::Handle<v8::Value> wxNode_wxSize::_DecTo(const v8::Arguments& args) {
  v8::HandleScope scope;
  wxNode_wxSize* self = unwrap<wxNode_wxSize>(args.This());

  
  /*
   * id: _37154
   */
  if(args.Length() == 1 && (args[0]->IsNull() || args[0]->IsObject())) {
    wxNode_wxSize* sz = args[0]->IsNull() ? NULL : wxNodeObject::unwrap<wxNode_wxSize>(args[0]->ToObject()); /* type: _20522  */
    

    self->DecTo(*sz);

    // TODO: handle return type
    return v8::Undefined();
  }
  

  return v8::ThrowException(v8::String::New("Could not find matching method for arguments (method name: DecTo)."));
}

/*static*/ v8::Handle<v8::Value> wxNode_wxSize::_IncBy(const v8::Arguments& args) {
  v8::HandleScope scope;
  wxNode_wxSize* self = unwrap<wxNode_wxSize>(args.This());

  
  /*
   * id: _37155
   */
  if(args.Length() == 2 && args[0]->IsNumber() && args[1]->IsNumber()) {
    int dx = (int)args[0]->ToInt32()->Value(); /* type: _162  */
    int dy = (int)args[1]->ToInt32()->Value(); /* type: _162  */
    

    self->IncBy(dx, dy);

    // TODO: handle return type
    return v8::Undefined();
  }
  
  /*
   * id: _37156
   */
  if(args.Length() == 1 && (args[0]->IsNull() || args[0]->IsObject())) {
    wxNode_wxPoint* pt = args[0]->IsNull() ? NULL : wxNodeObject::unwrap<wxNode_wxPoint>(args[0]->ToObject()); /* type: _20412  */
    

    self->IncBy(*pt);

    // TODO: handle return type
    return v8::Undefined();
  }
  
  /*
   * id: _37157
   */
  if(args.Length() == 1 && (args[0]->IsNull() || args[0]->IsObject())) {
    wxNode_wxSize* sz = args[0]->IsNull() ? NULL : wxNodeObject::unwrap<wxNode_wxSize>(args[0]->ToObject()); /* type: _20522  */
    

    self->IncBy(*sz);

    // TODO: handle return type
    return v8::Undefined();
  }
  
  /*
   * id: _37158
   */
  if(args.Length() == 1 && args[0]->IsNumber()) {
    int d = (int)args[0]->ToInt32()->Value(); /* type: _162  */
    

    self->IncBy(d);

    // TODO: handle return type
    return v8::Undefined();
  }
  

  return v8::ThrowException(v8::String::New("Could not find matching method for arguments (method name: IncBy)."));
}

/*static*/ v8::Handle<v8::Value> wxNode_wxSize::_DecBy(const v8::Arguments& args) {
  v8::HandleScope scope;
  wxNode_wxSize* self = unwrap<wxNode_wxSize>(args.This());

  
  /*
   * id: _37159
   */
  if(args.Length() == 2 && args[0]->IsNumber() && args[1]->IsNumber()) {
    int dx = (int)args[0]->ToInt32()->Value(); /* type: _162  */
    int dy = (int)args[1]->ToInt32()->Value(); /* type: _162  */
    

    self->DecBy(dx, dy);

    // TODO: handle return type
    return v8::Undefined();
  }
  
  /*
   * id: _37160
   */
  if(args.Length() == 1 && (args[0]->IsNull() || args[0]->IsObject())) {
    wxNode_wxPoint* pt = args[0]->IsNull() ? NULL : wxNodeObject::unwrap<wxNode_wxPoint>(args[0]->ToObject()); /* type: _20412  */
    

    self->DecBy(*pt);

    // TODO: handle return type
    return v8::Undefined();
  }
  
  /*
   * id: _37161
   */
  if(args.Length() == 1 && (args[0]->IsNull() || args[0]->IsObject())) {
    wxNode_wxSize* sz = args[0]->IsNull() ? NULL : wxNodeObject::unwrap<wxNode_wxSize>(args[0]->ToObject()); /* type: _20522  */
    

    self->DecBy(*sz);

    // TODO: handle return type
    return v8::Undefined();
  }
  
  /*
   * id: _37162
   */
  if(args.Length() == 1 && args[0]->IsNumber()) {
    int d = (int)args[0]->ToInt32()->Value(); /* type: _162  */
    

    self->DecBy(d);

    // TODO: handle return type
    return v8::Undefined();
  }
  

  return v8::ThrowException(v8::String::New("Could not find matching method for arguments (method name: DecBy)."));
}

/*static*/ v8::Handle<v8::Value> wxNode_wxSize::_Scale(const v8::Arguments& args) {
  v8::HandleScope scope;
  wxNode_wxSize* self = unwrap<wxNode_wxSize>(args.This());

  
  /*
   * id: _37163
   */
  if(args.Length() == 2 && args[0]->IsNumber() && args[1]->IsNumber()) {
    float xscale = (float)args[0]->ToNumber()->Value(); /* type: _13252  */
    float yscale = (float)args[1]->ToNumber()->Value(); /* type: _13252  */
    

    self->Scale(xscale, yscale);

    // TODO: handle return type
    return v8::Undefined();
  }
  

  return v8::ThrowException(v8::String::New("Could not find matching method for arguments (method name: Scale)."));
}

/*static*/ v8::Handle<v8::Value> wxNode_wxSize::_Set(const v8::Arguments& args) {
  v8::HandleScope scope;
  wxNode_wxSize* self = unwrap<wxNode_wxSize>(args.This());

  
  /*
   * id: _37164
   */
  if(args.Length() == 2 && args[0]->IsNumber() && args[1]->IsNumber()) {
    int xx = (int)args[0]->ToInt32()->Value(); /* type: _162  */
    int yy = (int)args[1]->ToInt32()->Value(); /* type: _162  */
    

    self->Set(xx, yy);

    // TODO: handle return type
    return v8::Undefined();
  }
  

  return v8::ThrowException(v8::String::New("Could not find matching method for arguments (method name: Set)."));
}

/*static*/ v8::Handle<v8::Value> wxNode_wxSize::_SetWidth(const v8::Arguments& args) {
  v8::HandleScope scope;
  wxNode_wxSize* self = unwrap<wxNode_wxSize>(args.This());

  
  /*
   * id: _37165
   */
  if(args.Length() == 1 && args[0]->IsNumber()) {
    int w = (int)args[0]->ToInt32()->Value(); /* type: _162  */
    

    self->SetWidth(w);

    // TODO: handle return type
    return v8::Undefined();
  }
  

  return v8::ThrowException(v8::String::New("Could not find matching method for arguments (method name: SetWidth)."));
}

/*static*/ v8::Handle<v8::Value> wxNode_wxSize::_SetHeight(const v8::Arguments& args) {
  v8::HandleScope scope;
  wxNode_wxSize* self = unwrap<wxNode_wxSize>(args.This());

  
  /*
   * id: _37166
   */
  if(args.Length() == 1 && args[0]->IsNumber()) {
    int h = (int)args[0]->ToInt32()->Value(); /* type: _162  */
    

    self->SetHeight(h);

    // TODO: handle return type
    return v8::Undefined();
  }
  

  return v8::ThrowException(v8::String::New("Could not find matching method for arguments (method name: SetHeight)."));
}

/*static*/ v8::Handle<v8::Value> wxNode_wxSize::_GetWidth(const v8::Arguments& args) {
  v8::HandleScope scope;
  wxNode_wxSize* self = unwrap<wxNode_wxSize>(args.This());

  
  /*
   * id: _37167
   */
  if(args.Length() == 0) {
    

    self->GetWidth();

    // TODO: handle return type
    return v8::Undefined();
  }
  

  return v8::ThrowException(v8::String::New("Could not find matching method for arguments (method name: GetWidth)."));
}

/*static*/ v8::Handle<v8::Value> wxNode_wxSize::_GetHeight(const v8::Arguments& args) {
  v8::HandleScope scope;
  wxNode_wxSize* self = unwrap<wxNode_wxSize>(args.This());

  
  /*
   * id: _37168
   */
  if(args.Length() == 0) {
    

    self->GetHeight();

    // TODO: handle return type
    return v8::Undefined();
  }
  

  return v8::ThrowException(v8::String::New("Could not find matching method for arguments (method name: GetHeight)."));
}

/*static*/ v8::Handle<v8::Value> wxNode_wxSize::_IsFullySpecified(const v8::Arguments& args) {
  v8::HandleScope scope;
  wxNode_wxSize* self = unwrap<wxNode_wxSize>(args.This());

  
  /*
   * id: _37169
   */
  if(args.Length() == 0) {
    

    self->IsFullySpecified();

    // TODO: handle return type
    return v8::Undefined();
  }
  

  return v8::ThrowException(v8::String::New("Could not find matching method for arguments (method name: IsFullySpecified)."));
}

/*static*/ v8::Handle<v8::Value> wxNode_wxSize::_SetDefaults(const v8::Arguments& args) {
  v8::HandleScope scope;
  wxNode_wxSize* self = unwrap<wxNode_wxSize>(args.This());

  
  /*
   * id: _37170
   */
  if(args.Length() == 1 && (args[0]->IsNull() || args[0]->IsObject())) {
    wxNode_wxSize* size = args[0]->IsNull() ? NULL : wxNodeObject::unwrap<wxNode_wxSize>(args[0]->ToObject()); /* type: _20522  */
    

    self->SetDefaults(*size);

    // TODO: handle return type
    return v8::Undefined();
  }
  

  return v8::ThrowException(v8::String::New("Could not find matching method for arguments (method name: SetDefaults)."));
}

/*static*/ v8::Handle<v8::Value> wxNode_wxSize::_GetX(const v8::Arguments& args) {
  v8::HandleScope scope;
  wxNode_wxSize* self = unwrap<wxNode_wxSize>(args.This());

  
  /*
   * id: _37171
   */
  if(args.Length() == 0) {
    

    self->GetX();

    // TODO: handle return type
    return v8::Undefined();
  }
  

  return v8::ThrowException(v8::String::New("Could not find matching method for arguments (method name: GetX)."));
}

/*static*/ v8::Handle<v8::Value> wxNode_wxSize::_GetY(const v8::Arguments& args) {
  v8::HandleScope scope;
  wxNode_wxSize* self = unwrap<wxNode_wxSize>(args.This());

  
  /*
   * id: _37172
   */
  if(args.Length() == 0) {
    

    self->GetY();

    // TODO: handle return type
    return v8::Undefined();
  }
  

  return v8::ThrowException(v8::String::New("Could not find matching method for arguments (method name: GetY)."));
}

