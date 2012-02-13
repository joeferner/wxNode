
#include <sstream>
#include "wxNode_wxNotebook.h"
#include "wxNode_wxEvtHandler.h"
#include "wxNode_wxBookCtrlBase.h"
#include "wxNode_wxWindow.h"
#include "wxNode_wxPoint.h"
#include "wxNode_wxSize.h"
#include "wxNode_wxColour.h"


/* static */ v8::Persistent<v8::FunctionTemplate> wxNode_wxNotebook::s_ct;



wxNode_wxNotebook::wxNode_wxNotebook()
  : wxNotebook()
{

}

wxNode_wxNotebook::wxNode_wxNotebook(wxWindow* parent, int id, wxPoint& pos, wxSize& size, long int style, const wxString& name)
  : wxNotebook(parent, id, pos, size, style, name)
{

}

wxNode_wxNotebook::wxNode_wxNotebook(wxWindow* parent, int id, wxPoint& pos, wxSize& size, long int style)
  : wxNotebook(parent, id, pos, size, style)
{

}

wxNode_wxNotebook::wxNode_wxNotebook(wxWindow* parent, int id, wxPoint& pos, wxSize& size)
  : wxNotebook(parent, id, pos, size)
{

}

wxNode_wxNotebook::wxNode_wxNotebook(wxWindow* parent, int id, wxPoint& pos)
  : wxNotebook(parent, id, pos)
{

}

wxNode_wxNotebook::wxNode_wxNotebook(wxWindow* parent, int id)
  : wxNotebook(parent, id)
{

}




/*static*/ void wxNode_wxNotebook::Init(v8::Handle<v8::Object> target) {
  v8::HandleScope scope;

  v8::Local<v8::FunctionTemplate> t = v8::FunctionTemplate::New(wxNodeObject::NewFunc);
  s_ct = v8::Persistent<v8::FunctionTemplate>::New(t);
  s_ct->InstanceTemplate()->SetInternalFieldCount(2);
  s_ct->SetClassName(v8::String::NewSymbol("Notebook"));

  NODE_SET_PROTOTYPE_METHOD(s_ct, "init", _init);
  AddMethods(s_ct);

  target->Set(v8::String::NewSymbol("Notebook"), s_ct->GetFunction());
}

/*static*/ void wxNode_wxNotebook::AddMethods(v8::Handle<v8::FunctionTemplate> target) {
  wxNode_wxBookCtrlBase::AddMethods(target);
  NODE_SET_PROTOTYPE_METHOD(target, "getRowCount", _GetRowCount);
  NODE_SET_PROTOTYPE_METHOD(target, "setPadding", _SetPadding);
  NODE_SET_PROTOTYPE_METHOD(target, "setTabSize", _SetTabSize);
  NODE_SET_PROTOTYPE_METHOD(target, "calcSizeFromPage", _CalcSizeFromPage);
  NODE_SET_PROTOTYPE_METHOD(target, "getThemeBackgroundColour", _GetThemeBackgroundColour);
  NODE_SET_PROTOTYPE_METHOD(target, "sendPageChangingEvent", _SendPageChangingEvent);
  NODE_SET_PROTOTYPE_METHOD(target, "sendPageChangedEvent", _SendPageChangedEvent);
  NODE_SET_PROTOTYPE_METHOD(target, "acceptsFocus", _AcceptsFocus);
  
}

/*static*/ v8::Handle<v8::Value> wxNode_wxNotebook::New(const wxNode_wxNotebook* obj) {
  v8::HandleScope scope;

  if(obj == NULL) {
    return scope.Close(v8::Null());
  }
  
  v8::Local<v8::FunctionTemplate> returnObjFt = v8::FunctionTemplate::New(wxNodeObject::NewFunc);
  returnObjFt->InstanceTemplate()->SetInternalFieldCount(2);
  returnObjFt->SetClassName(v8::String::NewSymbol("Notebook"));
  wxNode_wxNotebook::AddMethods(returnObjFt);

  v8::Local<v8::Function> returnObjFn = returnObjFt->GetFunction();
  v8::Handle<v8::Value> returnObjArgs[0];
  v8::Local<v8::Object> returnObj = returnObjFn->CallAsConstructor(0, returnObjArgs)->ToObject();
  returnObj->SetPointerInInternalField(0, (void*)obj);
  NodeExEvtHandlerImpl* evtHandler = dynamic_cast<NodeExEvtHandlerImpl*>((wxNode_wxNotebook*)obj);
  returnObj->SetPointerInInternalField(1, evtHandler);

  return scope.Close(returnObj);
}

/*static*/ v8::Handle<v8::Value> wxNode_wxNotebook::New(const wxNotebook* obj) {
  v8::HandleScope scope;

  if(obj == NULL) {
    return scope.Close(v8::Null());
  }
  
  v8::Local<v8::FunctionTemplate> returnObjFt = v8::FunctionTemplate::New(wxNodeObject::NewFunc);
  returnObjFt->InstanceTemplate()->SetInternalFieldCount(2);
  returnObjFt->SetClassName(v8::String::NewSymbol("Notebook"));
  wxNode_wxNotebook::AddMethods(returnObjFt);

  v8::Local<v8::Function> returnObjFn = returnObjFt->GetFunction();
  v8::Handle<v8::Value> returnObjArgs[0];
  v8::Local<v8::Object> returnObj = returnObjFn->CallAsConstructor(0, returnObjArgs)->ToObject();
  returnObj->SetPointerInInternalField(0, (void*)obj);
  NodeExEvtHandlerImplWrap* wrap = new NodeExEvtHandlerImplWrap(returnObj);
  NodeExEvtHandlerImpl* evtHandler = dynamic_cast<NodeExEvtHandlerImpl*>(wrap);
  returnObj->SetPointerInInternalField(1, evtHandler);

  return scope.Close(returnObj);
}

/*static*/ v8::Handle<v8::Value> wxNode_wxNotebook::NewCopy(const wxNotebook& obj) {
  v8::HandleScope scope;
  wxNode_wxNotebook* returnVal = new wxNode_wxNotebook();
  memcpy(dynamic_cast<wxNotebook*>(returnVal), &obj, sizeof(wxNotebook));
  return scope.Close(New(returnVal));

}

/*static*/ bool wxNode_wxNotebook::AssignableFrom(const v8::Handle<v8::String>& className) {
  v8::String::AsciiValue classNameStr(className);
  return AssignableFrom(*classNameStr);
}

/*static*/ bool wxNode_wxNotebook::AssignableFrom(const char* className) {
  if(!strcmp("Notebook", className)) { return true; }
  
  if(!strcmp("Notebook", className)) { return true; }


  return false;
}

/*static*/ v8::Handle<v8::Value> wxNode_wxNotebook::_init(const v8::Arguments& args) {
  v8::HandleScope scope;

  
  
  /*
   * id: _31978
   */
  if(args.Length() == 0) {
    

    wxNode_wxNotebook *self = new wxNode_wxNotebook();
    NodeExEvtHandlerImpl* evtHandler = dynamic_cast<NodeExEvtHandlerImpl*>(self);
    self->wrap(args.This(), self, evtHandler);
    return args.This();
  }
  
  /*
   * id: _31979
   */
  if(args.Length() == 6 && (args[0]->IsNull() || (args[0]->IsObject() && wxNode_wxWindow::AssignableFrom(args[0]->ToObject()->GetConstructorName()))) && args[1]->IsNumber() && (args[2]->IsNull() || (args[2]->IsObject() && wxNode_wxPoint::AssignableFrom(args[2]->ToObject()->GetConstructorName()))) && (args[3]->IsNull() || (args[3]->IsObject() && wxNode_wxSize::AssignableFrom(args[3]->ToObject()->GetConstructorName()))) && args[4]->IsNumber() && args[5]->IsString()) {
    wxNode_wxWindow* parent = args[0]->IsNull() ? NULL : wxNodeObject::unwrap<wxNode_wxWindow>(args[0]->ToObject()); /* type: _1000 * */
    int id = (int)args[1]->ToInt32()->Value(); /* type: _8725  */
    wxNode_wxPoint* pos = args[2]->IsNull() ? NULL : wxNodeObject::unwrap<wxNode_wxPoint>(args[2]->ToObject()); /* type: _20518  */
    wxNode_wxSize* size = args[3]->IsNull() ? NULL : wxNodeObject::unwrap<wxNode_wxSize>(args[3]->ToObject()); /* type: _20628  */
    long int style = (long int)args[4]->ToInt32()->Value(); /* type: _592  */
    v8::String::AsciiValue name(args[5]->ToString()); /* type: _14975  */
    

    wxNode_wxNotebook *self = new wxNode_wxNotebook(parent, id, *pos, *size, style, *name);
    NodeExEvtHandlerImpl* evtHandler = dynamic_cast<NodeExEvtHandlerImpl*>(self);
    self->wrap(args.This(), self, evtHandler);
    return args.This();
  }
  
  /*
   * id: _31979
   */
  if(args.Length() == 5 && (args[0]->IsNull() || (args[0]->IsObject() && wxNode_wxWindow::AssignableFrom(args[0]->ToObject()->GetConstructorName()))) && args[1]->IsNumber() && (args[2]->IsNull() || (args[2]->IsObject() && wxNode_wxPoint::AssignableFrom(args[2]->ToObject()->GetConstructorName()))) && (args[3]->IsNull() || (args[3]->IsObject() && wxNode_wxSize::AssignableFrom(args[3]->ToObject()->GetConstructorName()))) && args[4]->IsNumber()) {
    wxNode_wxWindow* parent = args[0]->IsNull() ? NULL : wxNodeObject::unwrap<wxNode_wxWindow>(args[0]->ToObject()); /* type: _1000 * */
    int id = (int)args[1]->ToInt32()->Value(); /* type: _8725  */
    wxNode_wxPoint* pos = args[2]->IsNull() ? NULL : wxNodeObject::unwrap<wxNode_wxPoint>(args[2]->ToObject()); /* type: _20518  */
    wxNode_wxSize* size = args[3]->IsNull() ? NULL : wxNodeObject::unwrap<wxNode_wxSize>(args[3]->ToObject()); /* type: _20628  */
    long int style = (long int)args[4]->ToInt32()->Value(); /* type: _592  */
    

    wxNode_wxNotebook *self = new wxNode_wxNotebook(parent, id, *pos, *size, style);
    NodeExEvtHandlerImpl* evtHandler = dynamic_cast<NodeExEvtHandlerImpl*>(self);
    self->wrap(args.This(), self, evtHandler);
    return args.This();
  }
  
  /*
   * id: _31979
   */
  if(args.Length() == 4 && (args[0]->IsNull() || (args[0]->IsObject() && wxNode_wxWindow::AssignableFrom(args[0]->ToObject()->GetConstructorName()))) && args[1]->IsNumber() && (args[2]->IsNull() || (args[2]->IsObject() && wxNode_wxPoint::AssignableFrom(args[2]->ToObject()->GetConstructorName()))) && (args[3]->IsNull() || (args[3]->IsObject() && wxNode_wxSize::AssignableFrom(args[3]->ToObject()->GetConstructorName())))) {
    wxNode_wxWindow* parent = args[0]->IsNull() ? NULL : wxNodeObject::unwrap<wxNode_wxWindow>(args[0]->ToObject()); /* type: _1000 * */
    int id = (int)args[1]->ToInt32()->Value(); /* type: _8725  */
    wxNode_wxPoint* pos = args[2]->IsNull() ? NULL : wxNodeObject::unwrap<wxNode_wxPoint>(args[2]->ToObject()); /* type: _20518  */
    wxNode_wxSize* size = args[3]->IsNull() ? NULL : wxNodeObject::unwrap<wxNode_wxSize>(args[3]->ToObject()); /* type: _20628  */
    

    wxNode_wxNotebook *self = new wxNode_wxNotebook(parent, id, *pos, *size);
    NodeExEvtHandlerImpl* evtHandler = dynamic_cast<NodeExEvtHandlerImpl*>(self);
    self->wrap(args.This(), self, evtHandler);
    return args.This();
  }
  
  /*
   * id: _31979
   */
  if(args.Length() == 3 && (args[0]->IsNull() || (args[0]->IsObject() && wxNode_wxWindow::AssignableFrom(args[0]->ToObject()->GetConstructorName()))) && args[1]->IsNumber() && (args[2]->IsNull() || (args[2]->IsObject() && wxNode_wxPoint::AssignableFrom(args[2]->ToObject()->GetConstructorName())))) {
    wxNode_wxWindow* parent = args[0]->IsNull() ? NULL : wxNodeObject::unwrap<wxNode_wxWindow>(args[0]->ToObject()); /* type: _1000 * */
    int id = (int)args[1]->ToInt32()->Value(); /* type: _8725  */
    wxNode_wxPoint* pos = args[2]->IsNull() ? NULL : wxNodeObject::unwrap<wxNode_wxPoint>(args[2]->ToObject()); /* type: _20518  */
    

    wxNode_wxNotebook *self = new wxNode_wxNotebook(parent, id, *pos);
    NodeExEvtHandlerImpl* evtHandler = dynamic_cast<NodeExEvtHandlerImpl*>(self);
    self->wrap(args.This(), self, evtHandler);
    return args.This();
  }
  
  /*
   * id: _31979
   */
  if(args.Length() == 2 && (args[0]->IsNull() || (args[0]->IsObject() && wxNode_wxWindow::AssignableFrom(args[0]->ToObject()->GetConstructorName()))) && args[1]->IsNumber()) {
    wxNode_wxWindow* parent = args[0]->IsNull() ? NULL : wxNodeObject::unwrap<wxNode_wxWindow>(args[0]->ToObject()); /* type: _1000 * */
    int id = (int)args[1]->ToInt32()->Value(); /* type: _8725  */
    

    wxNode_wxNotebook *self = new wxNode_wxNotebook(parent, id);
    NodeExEvtHandlerImpl* evtHandler = dynamic_cast<NodeExEvtHandlerImpl*>(self);
    self->wrap(args.This(), self, evtHandler);
    return args.This();
  }
  
  

  std::ostringstream errStr;
  errStr << "Could not find matching constructor for arguments (class name: wxNotebook).\n";
  errStr << "  arg count: " << args.Length() << "\n";
  for(int i = 0; i < args.Length(); i++) {
    v8::String::AsciiValue argStr(args[i]);
    errStr << "  arg[" << i << "]: " << *argStr << "\n";
  }
  return v8::ThrowException(v8::Exception::TypeError(v8::String::New(errStr.str().c_str())));
}


/*static*/ v8::Handle<v8::Value> wxNode_wxNotebook::_GetRowCount(const v8::Arguments& args) {
  v8::HandleScope scope;
  wxNode_wxNotebook* self = unwrap<wxNode_wxNotebook>(args.This());

  
  /*
   * id: _37167
   */
  if(args.Length() == 0) {
    

    int returnVal = self->GetRowCount();

    return scope.Close(v8::Number::New(returnVal));
  }
  

  std::ostringstream errStr;
  errStr << "Could not find matching method for arguments (method name: wxNotebook::GetRowCount).\n";
  errStr << "  arg count: " << args.Length() << "\n";
  for(int i = 0; i < args.Length(); i++) {
    v8::String::AsciiValue argStr(args[i]);
    errStr << "  arg[" << i << "]: " << *argStr << "\n";
  }
  return v8::ThrowException(v8::Exception::TypeError(v8::String::New(errStr.str().c_str())));
}

/*static*/ v8::Handle<v8::Value> wxNode_wxNotebook::_SetPadding(const v8::Arguments& args) {
  v8::HandleScope scope;
  wxNode_wxNotebook* self = unwrap<wxNode_wxNotebook>(args.This());

  
  /*
   * id: _37168
   */
  if(args.Length() == 1 && (args[0]->IsNull() || (args[0]->IsObject() && wxNode_wxSize::AssignableFrom(args[0]->ToObject()->GetConstructorName())))) {
    wxNode_wxSize* padding = args[0]->IsNull() ? NULL : wxNodeObject::unwrap<wxNode_wxSize>(args[0]->ToObject()); /* type: _20628  */
    

    self->SetPadding(*padding);

    return v8::Undefined();
  }
  

  std::ostringstream errStr;
  errStr << "Could not find matching method for arguments (method name: wxNotebook::SetPadding).\n";
  errStr << "  arg count: " << args.Length() << "\n";
  for(int i = 0; i < args.Length(); i++) {
    v8::String::AsciiValue argStr(args[i]);
    errStr << "  arg[" << i << "]: " << *argStr << "\n";
  }
  return v8::ThrowException(v8::Exception::TypeError(v8::String::New(errStr.str().c_str())));
}

/*static*/ v8::Handle<v8::Value> wxNode_wxNotebook::_SetTabSize(const v8::Arguments& args) {
  v8::HandleScope scope;
  wxNode_wxNotebook* self = unwrap<wxNode_wxNotebook>(args.This());

  
  /*
   * id: _37169
   */
  if(args.Length() == 1 && (args[0]->IsNull() || (args[0]->IsObject() && wxNode_wxSize::AssignableFrom(args[0]->ToObject()->GetConstructorName())))) {
    wxNode_wxSize* sz = args[0]->IsNull() ? NULL : wxNodeObject::unwrap<wxNode_wxSize>(args[0]->ToObject()); /* type: _20628  */
    

    self->SetTabSize(*sz);

    return v8::Undefined();
  }
  

  std::ostringstream errStr;
  errStr << "Could not find matching method for arguments (method name: wxNotebook::SetTabSize).\n";
  errStr << "  arg count: " << args.Length() << "\n";
  for(int i = 0; i < args.Length(); i++) {
    v8::String::AsciiValue argStr(args[i]);
    errStr << "  arg[" << i << "]: " << *argStr << "\n";
  }
  return v8::ThrowException(v8::Exception::TypeError(v8::String::New(errStr.str().c_str())));
}

/*static*/ v8::Handle<v8::Value> wxNode_wxNotebook::_CalcSizeFromPage(const v8::Arguments& args) {
  v8::HandleScope scope;
  wxNode_wxNotebook* self = unwrap<wxNode_wxNotebook>(args.This());

  
  /*
   * id: _37170
   */
  if(args.Length() == 1 && (args[0]->IsNull() || (args[0]->IsObject() && wxNode_wxSize::AssignableFrom(args[0]->ToObject()->GetConstructorName())))) {
    wxNode_wxSize* sizePage = args[0]->IsNull() ? NULL : wxNodeObject::unwrap<wxNode_wxSize>(args[0]->ToObject()); /* type: _20628  */
    

    wxSize returnVal = self->CalcSizeFromPage(*sizePage);

    return scope.Close(wxNode_wxSize::NewCopy(returnVal));
  }
  

  std::ostringstream errStr;
  errStr << "Could not find matching method for arguments (method name: wxNotebook::CalcSizeFromPage).\n";
  errStr << "  arg count: " << args.Length() << "\n";
  for(int i = 0; i < args.Length(); i++) {
    v8::String::AsciiValue argStr(args[i]);
    errStr << "  arg[" << i << "]: " << *argStr << "\n";
  }
  return v8::ThrowException(v8::Exception::TypeError(v8::String::New(errStr.str().c_str())));
}

/*static*/ v8::Handle<v8::Value> wxNode_wxNotebook::_GetThemeBackgroundColour(const v8::Arguments& args) {
  v8::HandleScope scope;
  wxNode_wxNotebook* self = unwrap<wxNode_wxNotebook>(args.This());

  
  /*
   * id: _37171
   */
  if(args.Length() == 0) {
    

    wxColour returnVal = self->GetThemeBackgroundColour();

    return scope.Close(wxNode_wxColour::NewCopy(returnVal));
  }
  

  std::ostringstream errStr;
  errStr << "Could not find matching method for arguments (method name: wxNotebook::GetThemeBackgroundColour).\n";
  errStr << "  arg count: " << args.Length() << "\n";
  for(int i = 0; i < args.Length(); i++) {
    v8::String::AsciiValue argStr(args[i]);
    errStr << "  arg[" << i << "]: " << *argStr << "\n";
  }
  return v8::ThrowException(v8::Exception::TypeError(v8::String::New(errStr.str().c_str())));
}

/*static*/ v8::Handle<v8::Value> wxNode_wxNotebook::_SendPageChangingEvent(const v8::Arguments& args) {
  v8::HandleScope scope;
  wxNode_wxNotebook* self = unwrap<wxNode_wxNotebook>(args.This());

  
  /*
   * id: _37172
   */
  if(args.Length() == 1 && args[0]->IsNumber()) {
    int nPage = (int)args[0]->ToInt32()->Value(); /* type: _165  */
    

    bool returnVal = self->SendPageChangingEvent(nPage);

    return scope.Close(v8::Boolean::New(returnVal));
  }
  

  std::ostringstream errStr;
  errStr << "Could not find matching method for arguments (method name: wxNotebook::SendPageChangingEvent).\n";
  errStr << "  arg count: " << args.Length() << "\n";
  for(int i = 0; i < args.Length(); i++) {
    v8::String::AsciiValue argStr(args[i]);
    errStr << "  arg[" << i << "]: " << *argStr << "\n";
  }
  return v8::ThrowException(v8::Exception::TypeError(v8::String::New(errStr.str().c_str())));
}

/*static*/ v8::Handle<v8::Value> wxNode_wxNotebook::_SendPageChangedEvent(const v8::Arguments& args) {
  v8::HandleScope scope;
  wxNode_wxNotebook* self = unwrap<wxNode_wxNotebook>(args.This());

  
  /*
   * id: _37173
   */
  if(args.Length() == 2 && args[0]->IsNumber() && args[1]->IsNumber()) {
    int nPageOld = (int)args[0]->ToInt32()->Value(); /* type: _165  */
    int nPageNew = (int)args[1]->ToInt32()->Value(); /* type: _165  */
    

    self->SendPageChangedEvent(nPageOld, nPageNew);

    return v8::Undefined();
  }
  
  /*
   * id: _37173
   */
  if(args.Length() == 1 && args[0]->IsNumber()) {
    int nPageOld = (int)args[0]->ToInt32()->Value(); /* type: _165  */
    

    self->SendPageChangedEvent(nPageOld);

    return v8::Undefined();
  }
  

  std::ostringstream errStr;
  errStr << "Could not find matching method for arguments (method name: wxNotebook::SendPageChangedEvent).\n";
  errStr << "  arg count: " << args.Length() << "\n";
  for(int i = 0; i < args.Length(); i++) {
    v8::String::AsciiValue argStr(args[i]);
    errStr << "  arg[" << i << "]: " << *argStr << "\n";
  }
  return v8::ThrowException(v8::Exception::TypeError(v8::String::New(errStr.str().c_str())));
}

/*static*/ v8::Handle<v8::Value> wxNode_wxNotebook::_AcceptsFocus(const v8::Arguments& args) {
  v8::HandleScope scope;
  wxNode_wxNotebook* self = unwrap<wxNode_wxNotebook>(args.This());

  
  /*
   * id: _37174
   */
  if(args.Length() == 0) {
    

    bool returnVal = self->AcceptsFocus();

    return scope.Close(v8::Boolean::New(returnVal));
  }
  

  std::ostringstream errStr;
  errStr << "Could not find matching method for arguments (method name: wxNotebook::AcceptsFocus).\n";
  errStr << "  arg count: " << args.Length() << "\n";
  for(int i = 0; i < args.Length(); i++) {
    v8::String::AsciiValue argStr(args[i]);
    errStr << "  arg[" << i << "]: " << *argStr << "\n";
  }
  return v8::ThrowException(v8::Exception::TypeError(v8::String::New(errStr.str().c_str())));
}

