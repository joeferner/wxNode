
#include <sstream>
#include "wxNode_wxButton.h"
#include "wxNode_wxEvtHandler.h"
#include "wxNode_wxAnyButton.h"
#include "wxNode_wxWindow.h"
#include "wxNode_wxPoint.h"
#include "wxNode_wxSize.h"
#include "wxNode_wxValidator.h"


/* static */ v8::Persistent<v8::FunctionTemplate> wxNode_wxButton::s_ct;



wxNode_wxButton::wxNode_wxButton()
  : wxButton()
{

}

wxNode_wxButton::wxNode_wxButton(wxNode_wxWindow* parent, int id, const wxString& label, wxNode_wxPoint& pos, wxNode_wxSize& size, long int style, wxNode_wxValidator& validator, const wxString& name)
  : wxButton(parent, id, label, pos, size, style, validator, name)
{

}

wxNode_wxButton::wxNode_wxButton(wxNode_wxWindow* parent, int id, const wxString& label, wxNode_wxPoint& pos, wxNode_wxSize& size, long int style, wxNode_wxValidator& validator)
  : wxButton(parent, id, label, pos, size, style, validator)
{

}

wxNode_wxButton::wxNode_wxButton(wxNode_wxWindow* parent, int id, const wxString& label, wxNode_wxPoint& pos, wxNode_wxSize& size, long int style)
  : wxButton(parent, id, label, pos, size, style)
{

}

wxNode_wxButton::wxNode_wxButton(wxNode_wxWindow* parent, int id, const wxString& label, wxNode_wxPoint& pos, wxNode_wxSize& size)
  : wxButton(parent, id, label, pos, size)
{

}

wxNode_wxButton::wxNode_wxButton(wxNode_wxWindow* parent, int id, const wxString& label, wxNode_wxPoint& pos)
  : wxButton(parent, id, label, pos)
{

}

wxNode_wxButton::wxNode_wxButton(wxNode_wxWindow* parent, int id, const wxString& label)
  : wxButton(parent, id, label)
{

}

wxNode_wxButton::wxNode_wxButton(wxNode_wxWindow* parent, int id)
  : wxButton(parent, id)
{

}




/*static*/ void wxNode_wxButton::Init(v8::Handle<v8::Object> target) {
  v8::HandleScope scope;

  v8::Local<v8::FunctionTemplate> t = v8::FunctionTemplate::New(wxNodeObject::NewFunc);
  s_ct = v8::Persistent<v8::FunctionTemplate>::New(t);
  s_ct->InstanceTemplate()->SetInternalFieldCount(2);
  s_ct->SetClassName(v8::String::NewSymbol("wxButton"));

  NODE_SET_PROTOTYPE_METHOD(s_ct, "init", _init);
  AddMethods(s_ct);

  target->Set(v8::String::NewSymbol("wxButton"), s_ct->GetFunction());
}

/*static*/ void wxNode_wxButton::AddMethods(v8::Handle<v8::FunctionTemplate> target) {
  wxNode_wxAnyButton::AddMethods(target);
  NODE_SET_PROTOTYPE_METHOD(target, "setAuthNeeded", _SetAuthNeeded);
  NODE_SET_PROTOTYPE_METHOD(target, "getAuthNeeded", _GetAuthNeeded);
  NODE_SET_PROTOTYPE_METHOD(target, "setDefault", _SetDefault);
  NODE_SET_PROTOTYPE_METHOD(target, "getDefaultSize", _GetDefaultSize);
  
}

/*static*/ v8::Handle<v8::Value> wxNode_wxButton::_init(const v8::Arguments& args) {
  v8::HandleScope scope;

  
  
  /*
   * id: _44811
   */
  if(args.Length() == 0) {
    

    wxNode_wxButton *self = new wxNode_wxButton();
    NodeExEvtHandlerImpl* evtHandler = dynamic_cast<NodeExEvtHandlerImpl*>(self);
    self->wrap(args.This(), self, evtHandler);
    return args.This();
  }
  
  /*
   * id: _44812
   */
  if(args.Length() == 8 && (args[0]->IsNull() || args[0]->IsObject()) && args[1]->IsNumber() && args[2]->IsString() && (args[3]->IsNull() || args[3]->IsObject()) && (args[4]->IsNull() || args[4]->IsObject()) && args[5]->IsNumber() && (args[6]->IsNull() || args[6]->IsObject()) && args[7]->IsString()) {
    wxNode_wxWindow* parent = args[0]->IsNull() ? NULL : wxNodeObject::unwrap<wxNode_wxWindow>(args[0]->ToObject()); /* type: _993 * */
    int id = (int)args[1]->ToInt32()->Value(); /* type: _8633  */
    v8::String::AsciiValue label(args[2]->ToString()); /* type: _14808  */
    wxNode_wxPoint* pos = args[3]->IsNull() ? NULL : wxNodeObject::unwrap<wxNode_wxPoint>(args[3]->ToObject()); /* type: _20412  */
    wxNode_wxSize* size = args[4]->IsNull() ? NULL : wxNodeObject::unwrap<wxNode_wxSize>(args[4]->ToObject()); /* type: _20522  */
    long int style = (long int)args[5]->ToInt32()->Value(); /* type: _586  */
    wxNode_wxValidator* validator = args[6]->IsNull() ? NULL : wxNodeObject::unwrap<wxNode_wxValidator>(args[6]->ToObject()); /* type: _59059  */
    v8::String::AsciiValue name(args[7]->ToString()); /* type: _14808  */
    

    wxNode_wxButton *self = new wxNode_wxButton(parent, id, *label, *pos, *size, style, *validator, *name);
    NodeExEvtHandlerImpl* evtHandler = dynamic_cast<NodeExEvtHandlerImpl*>(self);
    self->wrap(args.This(), self, evtHandler);
    return args.This();
  }
  
  /*
   * id: _44812
   */
  if(args.Length() == 7 && (args[0]->IsNull() || args[0]->IsObject()) && args[1]->IsNumber() && args[2]->IsString() && (args[3]->IsNull() || args[3]->IsObject()) && (args[4]->IsNull() || args[4]->IsObject()) && args[5]->IsNumber() && (args[6]->IsNull() || args[6]->IsObject())) {
    wxNode_wxWindow* parent = args[0]->IsNull() ? NULL : wxNodeObject::unwrap<wxNode_wxWindow>(args[0]->ToObject()); /* type: _993 * */
    int id = (int)args[1]->ToInt32()->Value(); /* type: _8633  */
    v8::String::AsciiValue label(args[2]->ToString()); /* type: _14808  */
    wxNode_wxPoint* pos = args[3]->IsNull() ? NULL : wxNodeObject::unwrap<wxNode_wxPoint>(args[3]->ToObject()); /* type: _20412  */
    wxNode_wxSize* size = args[4]->IsNull() ? NULL : wxNodeObject::unwrap<wxNode_wxSize>(args[4]->ToObject()); /* type: _20522  */
    long int style = (long int)args[5]->ToInt32()->Value(); /* type: _586  */
    wxNode_wxValidator* validator = args[6]->IsNull() ? NULL : wxNodeObject::unwrap<wxNode_wxValidator>(args[6]->ToObject()); /* type: _59059  */
    

    wxNode_wxButton *self = new wxNode_wxButton(parent, id, *label, *pos, *size, style, *validator);
    NodeExEvtHandlerImpl* evtHandler = dynamic_cast<NodeExEvtHandlerImpl*>(self);
    self->wrap(args.This(), self, evtHandler);
    return args.This();
  }
  
  /*
   * id: _44812
   */
  if(args.Length() == 6 && (args[0]->IsNull() || args[0]->IsObject()) && args[1]->IsNumber() && args[2]->IsString() && (args[3]->IsNull() || args[3]->IsObject()) && (args[4]->IsNull() || args[4]->IsObject()) && args[5]->IsNumber()) {
    wxNode_wxWindow* parent = args[0]->IsNull() ? NULL : wxNodeObject::unwrap<wxNode_wxWindow>(args[0]->ToObject()); /* type: _993 * */
    int id = (int)args[1]->ToInt32()->Value(); /* type: _8633  */
    v8::String::AsciiValue label(args[2]->ToString()); /* type: _14808  */
    wxNode_wxPoint* pos = args[3]->IsNull() ? NULL : wxNodeObject::unwrap<wxNode_wxPoint>(args[3]->ToObject()); /* type: _20412  */
    wxNode_wxSize* size = args[4]->IsNull() ? NULL : wxNodeObject::unwrap<wxNode_wxSize>(args[4]->ToObject()); /* type: _20522  */
    long int style = (long int)args[5]->ToInt32()->Value(); /* type: _586  */
    

    wxNode_wxButton *self = new wxNode_wxButton(parent, id, *label, *pos, *size, style);
    NodeExEvtHandlerImpl* evtHandler = dynamic_cast<NodeExEvtHandlerImpl*>(self);
    self->wrap(args.This(), self, evtHandler);
    return args.This();
  }
  
  /*
   * id: _44812
   */
  if(args.Length() == 5 && (args[0]->IsNull() || args[0]->IsObject()) && args[1]->IsNumber() && args[2]->IsString() && (args[3]->IsNull() || args[3]->IsObject()) && (args[4]->IsNull() || args[4]->IsObject())) {
    wxNode_wxWindow* parent = args[0]->IsNull() ? NULL : wxNodeObject::unwrap<wxNode_wxWindow>(args[0]->ToObject()); /* type: _993 * */
    int id = (int)args[1]->ToInt32()->Value(); /* type: _8633  */
    v8::String::AsciiValue label(args[2]->ToString()); /* type: _14808  */
    wxNode_wxPoint* pos = args[3]->IsNull() ? NULL : wxNodeObject::unwrap<wxNode_wxPoint>(args[3]->ToObject()); /* type: _20412  */
    wxNode_wxSize* size = args[4]->IsNull() ? NULL : wxNodeObject::unwrap<wxNode_wxSize>(args[4]->ToObject()); /* type: _20522  */
    

    wxNode_wxButton *self = new wxNode_wxButton(parent, id, *label, *pos, *size);
    NodeExEvtHandlerImpl* evtHandler = dynamic_cast<NodeExEvtHandlerImpl*>(self);
    self->wrap(args.This(), self, evtHandler);
    return args.This();
  }
  
  /*
   * id: _44812
   */
  if(args.Length() == 4 && (args[0]->IsNull() || args[0]->IsObject()) && args[1]->IsNumber() && args[2]->IsString() && (args[3]->IsNull() || args[3]->IsObject())) {
    wxNode_wxWindow* parent = args[0]->IsNull() ? NULL : wxNodeObject::unwrap<wxNode_wxWindow>(args[0]->ToObject()); /* type: _993 * */
    int id = (int)args[1]->ToInt32()->Value(); /* type: _8633  */
    v8::String::AsciiValue label(args[2]->ToString()); /* type: _14808  */
    wxNode_wxPoint* pos = args[3]->IsNull() ? NULL : wxNodeObject::unwrap<wxNode_wxPoint>(args[3]->ToObject()); /* type: _20412  */
    

    wxNode_wxButton *self = new wxNode_wxButton(parent, id, *label, *pos);
    NodeExEvtHandlerImpl* evtHandler = dynamic_cast<NodeExEvtHandlerImpl*>(self);
    self->wrap(args.This(), self, evtHandler);
    return args.This();
  }
  
  /*
   * id: _44812
   */
  if(args.Length() == 3 && (args[0]->IsNull() || args[0]->IsObject()) && args[1]->IsNumber() && args[2]->IsString()) {
    wxNode_wxWindow* parent = args[0]->IsNull() ? NULL : wxNodeObject::unwrap<wxNode_wxWindow>(args[0]->ToObject()); /* type: _993 * */
    int id = (int)args[1]->ToInt32()->Value(); /* type: _8633  */
    v8::String::AsciiValue label(args[2]->ToString()); /* type: _14808  */
    

    wxNode_wxButton *self = new wxNode_wxButton(parent, id, *label);
    NodeExEvtHandlerImpl* evtHandler = dynamic_cast<NodeExEvtHandlerImpl*>(self);
    self->wrap(args.This(), self, evtHandler);
    return args.This();
  }
  
  /*
   * id: _44812
   */
  if(args.Length() == 2 && (args[0]->IsNull() || args[0]->IsObject()) && args[1]->IsNumber()) {
    wxNode_wxWindow* parent = args[0]->IsNull() ? NULL : wxNodeObject::unwrap<wxNode_wxWindow>(args[0]->ToObject()); /* type: _993 * */
    int id = (int)args[1]->ToInt32()->Value(); /* type: _8633  */
    

    wxNode_wxButton *self = new wxNode_wxButton(parent, id);
    NodeExEvtHandlerImpl* evtHandler = dynamic_cast<NodeExEvtHandlerImpl*>(self);
    self->wrap(args.This(), self, evtHandler);
    return args.This();
  }
  
  

  std::ostringstream errStr;
  errStr << "Could not find matching constructor for arguments (class name: wxButton).\n";                           \
  errStr << "  arg count: " << args.Length() << "\n";
  for(int i = 0; i < args.Length(); i++) {
    v8::String::AsciiValue argStr(args[i]);
    errStr << "  arg[" << i << "]: " << *argStr << "\n";
  }
  return v8::ThrowException(v8::Exception::TypeError(v8::String::New(errStr.str().c_str())));
}


/*static*/ v8::Handle<v8::Value> wxNode_wxButton::_SetAuthNeeded(const v8::Arguments& args) {
  v8::HandleScope scope;
  wxNode_wxButton* self = unwrap<wxNode_wxButton>(args.This());

  
  /*
   * id: _49285
   */
  if(args.Length() == 1 && args[0]->IsBoolean()) {
    bool show = args[0]->ToBoolean()->Value(); /* type: _14666  */
    

    self->SetAuthNeeded(show);

    return v8::Undefined();
  }
  
  /*
   * id: _49285
   */
  if(args.Length() == 0) {
    

    self->SetAuthNeeded();

    return v8::Undefined();
  }
  

  std::ostringstream errStr;
  errStr << "Could not find matching method for arguments (method name: SetAuthNeeded).\n";                           \
  errStr << "  arg count: " << args.Length() << "\n";
  for(int i = 0; i < args.Length(); i++) {
    v8::String::AsciiValue argStr(args[i]);
    errStr << "  arg[" << i << "]: " << *argStr << "\n";
  }
  return v8::ThrowException(v8::Exception::TypeError(v8::String::New(errStr.str().c_str())));
}

/*static*/ v8::Handle<v8::Value> wxNode_wxButton::_GetAuthNeeded(const v8::Arguments& args) {
  v8::HandleScope scope;
  wxNode_wxButton* self = unwrap<wxNode_wxButton>(args.This());

  
  /*
   * id: _49286
   */
  if(args.Length() == 0) {
    

    bool returnVal = self->GetAuthNeeded();

    return scope.Close(v8::Boolean::New(returnVal));
  }
  

  std::ostringstream errStr;
  errStr << "Could not find matching method for arguments (method name: GetAuthNeeded).\n";                           \
  errStr << "  arg count: " << args.Length() << "\n";
  for(int i = 0; i < args.Length(); i++) {
    v8::String::AsciiValue argStr(args[i]);
    errStr << "  arg[" << i << "]: " << *argStr << "\n";
  }
  return v8::ThrowException(v8::Exception::TypeError(v8::String::New(errStr.str().c_str())));
}

/*static*/ v8::Handle<v8::Value> wxNode_wxButton::_SetDefault(const v8::Arguments& args) {
  v8::HandleScope scope;
  wxNode_wxButton* self = unwrap<wxNode_wxButton>(args.This());

  
  /*
   * id: _49287
   */
  if(args.Length() == 0) {
    

    wxWindow* returnVal = self->SetDefault();

    
    v8::Local<v8::FunctionTemplate> returnObjFt = v8::FunctionTemplate::New(wxNodeObject::NewFunc);
    returnObjFt->InstanceTemplate()->SetInternalFieldCount(2);
    wxNode_wxWindow::AddMethods(returnObjFt);
    v8::Local<v8::Function> returnObjFn = returnObjFt->GetFunction();
    v8::Handle<v8::Value> returnObjArgs[0];
    v8::Local<v8::Object> returnObj = returnObjFn->Call(args.This(), 0, returnObjArgs)->ToObject();
    returnObj->SetPointerInInternalField(0, returnVal);
    returnObj->SetPointerInInternalField(1, new NodeExEvtHandlerImplWrap(returnObj));
    return scope.Close(returnObj);
  }
  

  std::ostringstream errStr;
  errStr << "Could not find matching method for arguments (method name: SetDefault).\n";                           \
  errStr << "  arg count: " << args.Length() << "\n";
  for(int i = 0; i < args.Length(); i++) {
    v8::String::AsciiValue argStr(args[i]);
    errStr << "  arg[" << i << "]: " << *argStr << "\n";
  }
  return v8::ThrowException(v8::Exception::TypeError(v8::String::New(errStr.str().c_str())));
}

/*static*/ v8::Handle<v8::Value> wxNode_wxButton::_GetDefaultSize(const v8::Arguments& args) {
  v8::HandleScope scope;
  wxNode_wxButton* self = unwrap<wxNode_wxButton>(args.This());

  
  /*
   * id: _49288
   */
  if(args.Length() == 0) {
    

    wxSize returnValTemp = self->GetDefaultSize();

    wxSize* returnVal = new wxSize();
    v8::Local<v8::FunctionTemplate> returnObjFt = v8::FunctionTemplate::New(wxNodeObject::NewFunc);
    returnObjFt->InstanceTemplate()->SetInternalFieldCount(2);
    wxNode_wxSize::AddMethods(returnObjFt);
    v8::Local<v8::Function> returnObjFn = returnObjFt->GetFunction();
    v8::Handle<v8::Value> returnObjArgs[0];
    v8::Local<v8::Object> returnObj = returnObjFn->Call(args.This(), 0, returnObjArgs)->ToObject();
    returnObj->SetPointerInInternalField(0, returnVal);
    returnObj->SetPointerInInternalField(1, new NodeExEvtHandlerImplWrap(returnObj));
    return scope.Close(returnObj);
  }
  

  std::ostringstream errStr;
  errStr << "Could not find matching method for arguments (method name: GetDefaultSize).\n";                           \
  errStr << "  arg count: " << args.Length() << "\n";
  for(int i = 0; i < args.Length(); i++) {
    v8::String::AsciiValue argStr(args[i]);
    errStr << "  arg[" << i << "]: " << *argStr << "\n";
  }
  return v8::ThrowException(v8::Exception::TypeError(v8::String::New(errStr.str().c_str())));
}
