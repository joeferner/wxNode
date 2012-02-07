
#include <sstream>
#include "wxNode_wxBoxSizer.h"
#include "wxNode_wxEvtHandler.h"
#include "wxNode_wxSizer.h"
#include "wxNode_wxSizerItem.h"
#include "wxNode_wxSize.h"
#include "wxNode_wxClassInfo.h"


/* static */ v8::Persistent<v8::FunctionTemplate> wxNode_wxBoxSizer::s_ct;



wxNode_wxBoxSizer::wxNode_wxBoxSizer(wxNode_wxBoxSizer& arg0)
  : wxBoxSizer(arg0)
{

}

wxNode_wxBoxSizer::wxNode_wxBoxSizer(int orient)
  : wxBoxSizer(orient)
{

}




/*static*/ void wxNode_wxBoxSizer::Init(v8::Handle<v8::Object> target) {
  v8::HandleScope scope;

  v8::Local<v8::FunctionTemplate> t = v8::FunctionTemplate::New(wxNodeObject::NewFunc);
  s_ct = v8::Persistent<v8::FunctionTemplate>::New(t);
  s_ct->InstanceTemplate()->SetInternalFieldCount(2);
  s_ct->SetClassName(v8::String::NewSymbol("wxBoxSizer"));

  NODE_SET_PROTOTYPE_METHOD(s_ct, "init", _init);
  AddMethods(s_ct);

  target->Set(v8::String::NewSymbol("wxBoxSizer"), s_ct->GetFunction());
}

/*static*/ void wxNode_wxBoxSizer::AddMethods(v8::Handle<v8::FunctionTemplate> target) {
  wxNode_wxSizer::AddMethods(target);
  NODE_SET_PROTOTYPE_METHOD(target, "addSpacer", _AddSpacer);
  NODE_SET_PROTOTYPE_METHOD(target, "getOrientation", _GetOrientation);
  NODE_SET_PROTOTYPE_METHOD(target, "isVertical", _IsVertical);
  NODE_SET_PROTOTYPE_METHOD(target, "setOrientation", _SetOrientation);
  NODE_SET_PROTOTYPE_METHOD(target, "calcMin", _CalcMin);
  NODE_SET_PROTOTYPE_METHOD(target, "recalcSizes", _RecalcSizes);
  NODE_SET_PROTOTYPE_METHOD(target, "getClassInfo", _GetClassInfo);
  
}

/*static*/ bool wxNode_wxBoxSizer::AssignableFrom(const v8::Handle<v8::String>& className) {
  v8::String::AsciiValue classNameStr(className);
  return AssignableFrom(*classNameStr);
}

/*static*/ bool wxNode_wxBoxSizer::AssignableFrom(const char* className) {
  if(!strcmp("wxBoxSizer", className)) { return true; }
  
  if(!strcmp("wxStaticBoxSizer", className)) { return true; }
  if(!strcmp("wxWrapSizer", className)) { return true; }
  if(!strcmp("wxStdDialogButtonSizer", className)) { return true; }


  return false;
}

/*static*/ v8::Handle<v8::Value> wxNode_wxBoxSizer::_init(const v8::Arguments& args) {
  v8::HandleScope scope;

  
  
  /*
   * id: _28123
   */
  if(args.Length() == 1 && (args[0]->IsNull() || (args[0]->IsObject() && wxNode_wxBoxSizer::AssignableFrom(args[0]->ToObject()->GetConstructorName())))) {
    wxNode_wxBoxSizer* arg0 = args[0]->IsNull() ? NULL : wxNodeObject::unwrap<wxNode_wxBoxSizer>(args[0]->ToObject()); /* type: _62616  */
    

    wxNode_wxBoxSizer *self = new wxNode_wxBoxSizer(*arg0);
    NodeExEvtHandlerImpl* evtHandler = dynamic_cast<NodeExEvtHandlerImpl*>(self);
    self->wrap(args.This(), self, evtHandler);
    return args.This();
  }
  
  /*
   * id: _28124
   */
  if(args.Length() == 1 && args[0]->IsNumber()) {
    int orient = (int)args[0]->ToInt32()->Value(); /* type: _162  */
    

    wxNode_wxBoxSizer *self = new wxNode_wxBoxSizer(orient);
    NodeExEvtHandlerImpl* evtHandler = dynamic_cast<NodeExEvtHandlerImpl*>(self);
    self->wrap(args.This(), self, evtHandler);
    return args.This();
  }
  
  

  std::ostringstream errStr;
  errStr << "Could not find matching constructor for arguments (class name: wxBoxSizer).\n";                           \
  errStr << "  arg count: " << args.Length() << "\n";
  for(int i = 0; i < args.Length(); i++) {
    v8::String::AsciiValue argStr(args[i]);
    errStr << "  arg[" << i << "]: " << *argStr << "\n";
  }
  return v8::ThrowException(v8::Exception::TypeError(v8::String::New(errStr.str().c_str())));
}


/*static*/ v8::Handle<v8::Value> wxNode_wxBoxSizer::_AddSpacer(const v8::Arguments& args) {
  v8::HandleScope scope;
  wxNode_wxBoxSizer* self = unwrap<wxNode_wxBoxSizer>(args.This());

  
  /*
   * id: _28125
   */
  if(args.Length() == 1 && args[0]->IsNumber()) {
    int size = (int)args[0]->ToInt32()->Value(); /* type: _162  */
    

    wxSizerItem* returnVal = self->AddSpacer(size);

    
    v8::Local<v8::FunctionTemplate> returnObjFt = v8::FunctionTemplate::New(wxNodeObject::NewFunc);
    returnObjFt->InstanceTemplate()->SetInternalFieldCount(2);
    returnObjFt->SetClassName(v8::String::NewSymbol("wxSizerItem"));
    wxNode_wxSizerItem::AddMethods(returnObjFt);
    v8::Local<v8::Function> returnObjFn = returnObjFt->GetFunction();
    v8::Handle<v8::Value> returnObjArgs[0];
    v8::Local<v8::Object> returnObj = returnObjFn->CallAsConstructor(0, returnObjArgs)->ToObject();
    returnObj->SetPointerInInternalField(0, returnVal);
    returnObj->SetPointerInInternalField(1, new NodeExEvtHandlerImplWrap(returnObj));
    return scope.Close(returnObj);
  }
  

  std::ostringstream errStr;
  errStr << "Could not find matching method for arguments (method name: wxBoxSizer::AddSpacer).\n";                           \
  errStr << "  arg count: " << args.Length() << "\n";
  for(int i = 0; i < args.Length(); i++) {
    v8::String::AsciiValue argStr(args[i]);
    errStr << "  arg[" << i << "]: " << *argStr << "\n";
  }
  return v8::ThrowException(v8::Exception::TypeError(v8::String::New(errStr.str().c_str())));
}

/*static*/ v8::Handle<v8::Value> wxNode_wxBoxSizer::_GetOrientation(const v8::Arguments& args) {
  v8::HandleScope scope;
  wxNode_wxBoxSizer* self = unwrap<wxNode_wxBoxSizer>(args.This());

  
  /*
   * id: _28126
   */
  if(args.Length() == 0) {
    

    int returnVal = self->GetOrientation();

    return scope.Close(v8::Number::New(returnVal));
  }
  

  std::ostringstream errStr;
  errStr << "Could not find matching method for arguments (method name: wxBoxSizer::GetOrientation).\n";                           \
  errStr << "  arg count: " << args.Length() << "\n";
  for(int i = 0; i < args.Length(); i++) {
    v8::String::AsciiValue argStr(args[i]);
    errStr << "  arg[" << i << "]: " << *argStr << "\n";
  }
  return v8::ThrowException(v8::Exception::TypeError(v8::String::New(errStr.str().c_str())));
}

/*static*/ v8::Handle<v8::Value> wxNode_wxBoxSizer::_IsVertical(const v8::Arguments& args) {
  v8::HandleScope scope;
  wxNode_wxBoxSizer* self = unwrap<wxNode_wxBoxSizer>(args.This());

  
  /*
   * id: _28127
   */
  if(args.Length() == 0) {
    

    bool returnVal = self->IsVertical();

    return scope.Close(v8::Boolean::New(returnVal));
  }
  

  std::ostringstream errStr;
  errStr << "Could not find matching method for arguments (method name: wxBoxSizer::IsVertical).\n";                           \
  errStr << "  arg count: " << args.Length() << "\n";
  for(int i = 0; i < args.Length(); i++) {
    v8::String::AsciiValue argStr(args[i]);
    errStr << "  arg[" << i << "]: " << *argStr << "\n";
  }
  return v8::ThrowException(v8::Exception::TypeError(v8::String::New(errStr.str().c_str())));
}

/*static*/ v8::Handle<v8::Value> wxNode_wxBoxSizer::_SetOrientation(const v8::Arguments& args) {
  v8::HandleScope scope;
  wxNode_wxBoxSizer* self = unwrap<wxNode_wxBoxSizer>(args.This());

  
  /*
   * id: _28128
   */
  if(args.Length() == 1 && args[0]->IsNumber()) {
    int orient = (int)args[0]->ToInt32()->Value(); /* type: _162  */
    

    self->SetOrientation(orient);

    return v8::Undefined();
  }
  

  std::ostringstream errStr;
  errStr << "Could not find matching method for arguments (method name: wxBoxSizer::SetOrientation).\n";                           \
  errStr << "  arg count: " << args.Length() << "\n";
  for(int i = 0; i < args.Length(); i++) {
    v8::String::AsciiValue argStr(args[i]);
    errStr << "  arg[" << i << "]: " << *argStr << "\n";
  }
  return v8::ThrowException(v8::Exception::TypeError(v8::String::New(errStr.str().c_str())));
}

/*static*/ v8::Handle<v8::Value> wxNode_wxBoxSizer::_CalcMin(const v8::Arguments& args) {
  v8::HandleScope scope;
  wxNode_wxBoxSizer* self = unwrap<wxNode_wxBoxSizer>(args.This());

  
  /*
   * id: _28129
   */
  if(args.Length() == 0) {
    

    wxSize returnValTemp = self->CalcMin();

    wxNode_wxSize* returnVal = new wxNode_wxSize();
    memcpy(dynamic_cast<wxSize*>(returnVal), &returnValTemp, sizeof(wxSize));
    v8::Local<v8::FunctionTemplate> returnObjFt = v8::FunctionTemplate::New(wxNodeObject::NewFunc);
    returnObjFt->InstanceTemplate()->SetInternalFieldCount(2);
    returnObjFt->SetClassName(v8::String::NewSymbol("wxSize"));
    wxNode_wxSize::AddMethods(returnObjFt);
    v8::Local<v8::Function> returnObjFn = returnObjFt->GetFunction();
    v8::Handle<v8::Value> returnObjArgs[0];
    v8::Local<v8::Object> returnObj = returnObjFn->CallAsConstructor(0, returnObjArgs)->ToObject();
    returnObj->SetPointerInInternalField(0, returnVal);
    returnObj->SetPointerInInternalField(1, new NodeExEvtHandlerImplWrap(returnObj));
    return scope.Close(returnObj);
  }
  

  std::ostringstream errStr;
  errStr << "Could not find matching method for arguments (method name: wxBoxSizer::CalcMin).\n";                           \
  errStr << "  arg count: " << args.Length() << "\n";
  for(int i = 0; i < args.Length(); i++) {
    v8::String::AsciiValue argStr(args[i]);
    errStr << "  arg[" << i << "]: " << *argStr << "\n";
  }
  return v8::ThrowException(v8::Exception::TypeError(v8::String::New(errStr.str().c_str())));
}

/*static*/ v8::Handle<v8::Value> wxNode_wxBoxSizer::_RecalcSizes(const v8::Arguments& args) {
  v8::HandleScope scope;
  wxNode_wxBoxSizer* self = unwrap<wxNode_wxBoxSizer>(args.This());

  
  /*
   * id: _28130
   */
  if(args.Length() == 0) {
    

    self->RecalcSizes();

    return v8::Undefined();
  }
  

  std::ostringstream errStr;
  errStr << "Could not find matching method for arguments (method name: wxBoxSizer::RecalcSizes).\n";                           \
  errStr << "  arg count: " << args.Length() << "\n";
  for(int i = 0; i < args.Length(); i++) {
    v8::String::AsciiValue argStr(args[i]);
    errStr << "  arg[" << i << "]: " << *argStr << "\n";
  }
  return v8::ThrowException(v8::Exception::TypeError(v8::String::New(errStr.str().c_str())));
}

/*static*/ v8::Handle<v8::Value> wxNode_wxBoxSizer::_GetClassInfo(const v8::Arguments& args) {
  v8::HandleScope scope;
  wxNode_wxBoxSizer* self = unwrap<wxNode_wxBoxSizer>(args.This());

  
  /*
   * id: _28138
   */
  if(args.Length() == 0) {
    

    wxClassInfo* returnVal = self->GetClassInfo();

    
    v8::Local<v8::FunctionTemplate> returnObjFt = v8::FunctionTemplate::New(wxNodeObject::NewFunc);
    returnObjFt->InstanceTemplate()->SetInternalFieldCount(2);
    returnObjFt->SetClassName(v8::String::NewSymbol("wxClassInfo"));
    wxNode_wxClassInfo::AddMethods(returnObjFt);
    v8::Local<v8::Function> returnObjFn = returnObjFt->GetFunction();
    v8::Handle<v8::Value> returnObjArgs[0];
    v8::Local<v8::Object> returnObj = returnObjFn->CallAsConstructor(0, returnObjArgs)->ToObject();
    returnObj->SetPointerInInternalField(0, returnVal);
    returnObj->SetPointerInInternalField(1, new NodeExEvtHandlerImplWrap(returnObj));
    return scope.Close(returnObj);
  }
  

  std::ostringstream errStr;
  errStr << "Could not find matching method for arguments (method name: wxBoxSizer::GetClassInfo).\n";                           \
  errStr << "  arg count: " << args.Length() << "\n";
  for(int i = 0; i < args.Length(); i++) {
    v8::String::AsciiValue argStr(args[i]);
    errStr << "  arg[" << i << "]: " << *argStr << "\n";
  }
  return v8::ThrowException(v8::Exception::TypeError(v8::String::New(errStr.str().c_str())));
}

