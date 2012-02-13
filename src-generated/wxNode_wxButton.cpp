
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

wxNode_wxButton::wxNode_wxButton(wxWindow* parent, int id, const wxString& label, wxPoint& pos, wxSize& size, long int style, wxValidator& validator, const wxString& name)
  : wxButton(parent, id, label, pos, size, style, validator, name)
{

}

wxNode_wxButton::wxNode_wxButton(wxWindow* parent, int id, const wxString& label, wxPoint& pos, wxSize& size, long int style, wxValidator& validator)
  : wxButton(parent, id, label, pos, size, style, validator)
{

}

wxNode_wxButton::wxNode_wxButton(wxWindow* parent, int id, const wxString& label, wxPoint& pos, wxSize& size, long int style)
  : wxButton(parent, id, label, pos, size, style)
{

}

wxNode_wxButton::wxNode_wxButton(wxWindow* parent, int id, const wxString& label, wxPoint& pos, wxSize& size)
  : wxButton(parent, id, label, pos, size)
{

}

wxNode_wxButton::wxNode_wxButton(wxWindow* parent, int id, const wxString& label, wxPoint& pos)
  : wxButton(parent, id, label, pos)
{

}

wxNode_wxButton::wxNode_wxButton(wxWindow* parent, int id, const wxString& label)
  : wxButton(parent, id, label)
{

}

wxNode_wxButton::wxNode_wxButton(wxWindow* parent, int id)
  : wxButton(parent, id)
{

}




/*static*/ void wxNode_wxButton::Init(v8::Handle<v8::Object> target) {
  v8::HandleScope scope;

  v8::Local<v8::FunctionTemplate> t = v8::FunctionTemplate::New(wxNodeObject::NewFunc);
  s_ct = v8::Persistent<v8::FunctionTemplate>::New(t);
  s_ct->InstanceTemplate()->SetInternalFieldCount(2);
  s_ct->SetClassName(v8::String::NewSymbol("Button"));

  NODE_SET_PROTOTYPE_METHOD(s_ct, "init", _init);
  AddMethods(s_ct);

  target->Set(v8::String::NewSymbol("Button"), s_ct->GetFunction());
}

/*static*/ void wxNode_wxButton::AddMethods(v8::Handle<v8::FunctionTemplate> target) {
  wxNode_wxAnyButton::AddMethods(target);
  NODE_SET_PROTOTYPE_METHOD(target, "setAuthNeeded", _SetAuthNeeded);
  NODE_SET_PROTOTYPE_METHOD(target, "getAuthNeeded", _GetAuthNeeded);
  NODE_SET_PROTOTYPE_METHOD(target, "setDefault", _SetDefault);
  NODE_SET_METHOD(target, "getDefaultSize", _GetDefaultSize);
  
}

/*static*/ v8::Handle<v8::Value> wxNode_wxButton::New(const wxNode_wxButton* obj) {
  v8::HandleScope scope;

  if(obj == NULL) {
    return scope.Close(v8::Null());
  }
  
  v8::Local<v8::FunctionTemplate> returnObjFt = v8::FunctionTemplate::New(wxNodeObject::NewFunc);
  returnObjFt->InstanceTemplate()->SetInternalFieldCount(2);
  returnObjFt->SetClassName(v8::String::NewSymbol("Button"));
  wxNode_wxButton::AddMethods(returnObjFt);

  v8::Local<v8::Function> returnObjFn = returnObjFt->GetFunction();
  v8::Handle<v8::Value> returnObjArgs[0];
  v8::Local<v8::Object> returnObj = returnObjFn->CallAsConstructor(0, returnObjArgs)->ToObject();
  returnObj->SetPointerInInternalField(0, (void*)obj);
  NodeExEvtHandlerImpl* evtHandler = dynamic_cast<NodeExEvtHandlerImpl*>((wxNode_wxButton*)obj);
  returnObj->SetPointerInInternalField(1, evtHandler);

  return scope.Close(returnObj);
}

/*static*/ v8::Handle<v8::Value> wxNode_wxButton::New(const wxButton* obj) {
  v8::HandleScope scope;

  if(obj == NULL) {
    return scope.Close(v8::Null());
  }
  
  v8::Local<v8::FunctionTemplate> returnObjFt = v8::FunctionTemplate::New(wxNodeObject::NewFunc);
  returnObjFt->InstanceTemplate()->SetInternalFieldCount(2);
  returnObjFt->SetClassName(v8::String::NewSymbol("Button"));
  wxNode_wxButton::AddMethods(returnObjFt);

  v8::Local<v8::Function> returnObjFn = returnObjFt->GetFunction();
  v8::Handle<v8::Value> returnObjArgs[0];
  v8::Local<v8::Object> returnObj = returnObjFn->CallAsConstructor(0, returnObjArgs)->ToObject();
  returnObj->SetPointerInInternalField(0, (void*)obj);
  returnObj->SetPointerInInternalField(1, new NodeExEvtHandlerImplWrap(returnObj));

  return scope.Close(returnObj);
}

/*static*/ v8::Handle<v8::Value> wxNode_wxButton::NewCopy(const wxButton& obj) {
  v8::HandleScope scope;
  wxNode_wxButton* returnVal = new wxNode_wxButton();
  memcpy(dynamic_cast<wxButton*>(returnVal), &obj, sizeof(wxButton));
  return scope.Close(New(returnVal));

}

/*static*/ bool wxNode_wxButton::AssignableFrom(const v8::Handle<v8::String>& className) {
  v8::String::AsciiValue classNameStr(className);
  return AssignableFrom(*classNameStr);
}

/*static*/ bool wxNode_wxButton::AssignableFrom(const char* className) {
  if(!strcmp("Button", className)) { return true; }
  
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

/*static*/ v8::Handle<v8::Value> wxNode_wxButton::_init(const v8::Arguments& args) {
  v8::HandleScope scope;

  
  
  /*
   * id: _45056
   */
  if(args.Length() == 0) {
    

    wxNode_wxButton *self = new wxNode_wxButton();
    NodeExEvtHandlerImpl* evtHandler = dynamic_cast<NodeExEvtHandlerImpl*>(self);
    self->wrap(args.This(), self, evtHandler);
    return args.This();
  }
  
  /*
   * id: _45057
   */
  if(args.Length() == 8 && (args[0]->IsNull() || (args[0]->IsObject() && wxNode_wxWindow::AssignableFrom(args[0]->ToObject()->GetConstructorName()))) && args[1]->IsNumber() && args[2]->IsString() && (args[3]->IsNull() || (args[3]->IsObject() && wxNode_wxPoint::AssignableFrom(args[3]->ToObject()->GetConstructorName()))) && (args[4]->IsNull() || (args[4]->IsObject() && wxNode_wxSize::AssignableFrom(args[4]->ToObject()->GetConstructorName()))) && args[5]->IsNumber() && (args[6]->IsNull() || (args[6]->IsObject() && wxNode_wxValidator::AssignableFrom(args[6]->ToObject()->GetConstructorName()))) && args[7]->IsString()) {
    wxNode_wxWindow* parent = args[0]->IsNull() ? NULL : wxNodeObject::unwrap<wxNode_wxWindow>(args[0]->ToObject()); /* type: _1000 * */
    int id = (int)args[1]->ToInt32()->Value(); /* type: _8725  */
    v8::String::AsciiValue label(args[2]->ToString()); /* type: _14975  */
    wxNode_wxPoint* pos = args[3]->IsNull() ? NULL : wxNodeObject::unwrap<wxNode_wxPoint>(args[3]->ToObject()); /* type: _20518  */
    wxNode_wxSize* size = args[4]->IsNull() ? NULL : wxNodeObject::unwrap<wxNode_wxSize>(args[4]->ToObject()); /* type: _20628  */
    long int style = (long int)args[5]->ToInt32()->Value(); /* type: _592  */
    wxNode_wxValidator* validator = args[6]->IsNull() ? NULL : wxNodeObject::unwrap<wxNode_wxValidator>(args[6]->ToObject()); /* type: _59247  */
    v8::String::AsciiValue name(args[7]->ToString()); /* type: _14975  */
    

    wxNode_wxButton *self = new wxNode_wxButton(parent, id, *label, *pos, *size, style, *validator, *name);
    NodeExEvtHandlerImpl* evtHandler = dynamic_cast<NodeExEvtHandlerImpl*>(self);
    self->wrap(args.This(), self, evtHandler);
    return args.This();
  }
  
  /*
   * id: _45057
   */
  if(args.Length() == 7 && (args[0]->IsNull() || (args[0]->IsObject() && wxNode_wxWindow::AssignableFrom(args[0]->ToObject()->GetConstructorName()))) && args[1]->IsNumber() && args[2]->IsString() && (args[3]->IsNull() || (args[3]->IsObject() && wxNode_wxPoint::AssignableFrom(args[3]->ToObject()->GetConstructorName()))) && (args[4]->IsNull() || (args[4]->IsObject() && wxNode_wxSize::AssignableFrom(args[4]->ToObject()->GetConstructorName()))) && args[5]->IsNumber() && (args[6]->IsNull() || (args[6]->IsObject() && wxNode_wxValidator::AssignableFrom(args[6]->ToObject()->GetConstructorName())))) {
    wxNode_wxWindow* parent = args[0]->IsNull() ? NULL : wxNodeObject::unwrap<wxNode_wxWindow>(args[0]->ToObject()); /* type: _1000 * */
    int id = (int)args[1]->ToInt32()->Value(); /* type: _8725  */
    v8::String::AsciiValue label(args[2]->ToString()); /* type: _14975  */
    wxNode_wxPoint* pos = args[3]->IsNull() ? NULL : wxNodeObject::unwrap<wxNode_wxPoint>(args[3]->ToObject()); /* type: _20518  */
    wxNode_wxSize* size = args[4]->IsNull() ? NULL : wxNodeObject::unwrap<wxNode_wxSize>(args[4]->ToObject()); /* type: _20628  */
    long int style = (long int)args[5]->ToInt32()->Value(); /* type: _592  */
    wxNode_wxValidator* validator = args[6]->IsNull() ? NULL : wxNodeObject::unwrap<wxNode_wxValidator>(args[6]->ToObject()); /* type: _59247  */
    

    wxNode_wxButton *self = new wxNode_wxButton(parent, id, *label, *pos, *size, style, *validator);
    NodeExEvtHandlerImpl* evtHandler = dynamic_cast<NodeExEvtHandlerImpl*>(self);
    self->wrap(args.This(), self, evtHandler);
    return args.This();
  }
  
  /*
   * id: _45057
   */
  if(args.Length() == 6 && (args[0]->IsNull() || (args[0]->IsObject() && wxNode_wxWindow::AssignableFrom(args[0]->ToObject()->GetConstructorName()))) && args[1]->IsNumber() && args[2]->IsString() && (args[3]->IsNull() || (args[3]->IsObject() && wxNode_wxPoint::AssignableFrom(args[3]->ToObject()->GetConstructorName()))) && (args[4]->IsNull() || (args[4]->IsObject() && wxNode_wxSize::AssignableFrom(args[4]->ToObject()->GetConstructorName()))) && args[5]->IsNumber()) {
    wxNode_wxWindow* parent = args[0]->IsNull() ? NULL : wxNodeObject::unwrap<wxNode_wxWindow>(args[0]->ToObject()); /* type: _1000 * */
    int id = (int)args[1]->ToInt32()->Value(); /* type: _8725  */
    v8::String::AsciiValue label(args[2]->ToString()); /* type: _14975  */
    wxNode_wxPoint* pos = args[3]->IsNull() ? NULL : wxNodeObject::unwrap<wxNode_wxPoint>(args[3]->ToObject()); /* type: _20518  */
    wxNode_wxSize* size = args[4]->IsNull() ? NULL : wxNodeObject::unwrap<wxNode_wxSize>(args[4]->ToObject()); /* type: _20628  */
    long int style = (long int)args[5]->ToInt32()->Value(); /* type: _592  */
    

    wxNode_wxButton *self = new wxNode_wxButton(parent, id, *label, *pos, *size, style);
    NodeExEvtHandlerImpl* evtHandler = dynamic_cast<NodeExEvtHandlerImpl*>(self);
    self->wrap(args.This(), self, evtHandler);
    return args.This();
  }
  
  /*
   * id: _45057
   */
  if(args.Length() == 5 && (args[0]->IsNull() || (args[0]->IsObject() && wxNode_wxWindow::AssignableFrom(args[0]->ToObject()->GetConstructorName()))) && args[1]->IsNumber() && args[2]->IsString() && (args[3]->IsNull() || (args[3]->IsObject() && wxNode_wxPoint::AssignableFrom(args[3]->ToObject()->GetConstructorName()))) && (args[4]->IsNull() || (args[4]->IsObject() && wxNode_wxSize::AssignableFrom(args[4]->ToObject()->GetConstructorName())))) {
    wxNode_wxWindow* parent = args[0]->IsNull() ? NULL : wxNodeObject::unwrap<wxNode_wxWindow>(args[0]->ToObject()); /* type: _1000 * */
    int id = (int)args[1]->ToInt32()->Value(); /* type: _8725  */
    v8::String::AsciiValue label(args[2]->ToString()); /* type: _14975  */
    wxNode_wxPoint* pos = args[3]->IsNull() ? NULL : wxNodeObject::unwrap<wxNode_wxPoint>(args[3]->ToObject()); /* type: _20518  */
    wxNode_wxSize* size = args[4]->IsNull() ? NULL : wxNodeObject::unwrap<wxNode_wxSize>(args[4]->ToObject()); /* type: _20628  */
    

    wxNode_wxButton *self = new wxNode_wxButton(parent, id, *label, *pos, *size);
    NodeExEvtHandlerImpl* evtHandler = dynamic_cast<NodeExEvtHandlerImpl*>(self);
    self->wrap(args.This(), self, evtHandler);
    return args.This();
  }
  
  /*
   * id: _45057
   */
  if(args.Length() == 4 && (args[0]->IsNull() || (args[0]->IsObject() && wxNode_wxWindow::AssignableFrom(args[0]->ToObject()->GetConstructorName()))) && args[1]->IsNumber() && args[2]->IsString() && (args[3]->IsNull() || (args[3]->IsObject() && wxNode_wxPoint::AssignableFrom(args[3]->ToObject()->GetConstructorName())))) {
    wxNode_wxWindow* parent = args[0]->IsNull() ? NULL : wxNodeObject::unwrap<wxNode_wxWindow>(args[0]->ToObject()); /* type: _1000 * */
    int id = (int)args[1]->ToInt32()->Value(); /* type: _8725  */
    v8::String::AsciiValue label(args[2]->ToString()); /* type: _14975  */
    wxNode_wxPoint* pos = args[3]->IsNull() ? NULL : wxNodeObject::unwrap<wxNode_wxPoint>(args[3]->ToObject()); /* type: _20518  */
    

    wxNode_wxButton *self = new wxNode_wxButton(parent, id, *label, *pos);
    NodeExEvtHandlerImpl* evtHandler = dynamic_cast<NodeExEvtHandlerImpl*>(self);
    self->wrap(args.This(), self, evtHandler);
    return args.This();
  }
  
  /*
   * id: _45057
   */
  if(args.Length() == 3 && (args[0]->IsNull() || (args[0]->IsObject() && wxNode_wxWindow::AssignableFrom(args[0]->ToObject()->GetConstructorName()))) && args[1]->IsNumber() && args[2]->IsString()) {
    wxNode_wxWindow* parent = args[0]->IsNull() ? NULL : wxNodeObject::unwrap<wxNode_wxWindow>(args[0]->ToObject()); /* type: _1000 * */
    int id = (int)args[1]->ToInt32()->Value(); /* type: _8725  */
    v8::String::AsciiValue label(args[2]->ToString()); /* type: _14975  */
    

    wxNode_wxButton *self = new wxNode_wxButton(parent, id, *label);
    NodeExEvtHandlerImpl* evtHandler = dynamic_cast<NodeExEvtHandlerImpl*>(self);
    self->wrap(args.This(), self, evtHandler);
    return args.This();
  }
  
  /*
   * id: _45057
   */
  if(args.Length() == 2 && (args[0]->IsNull() || (args[0]->IsObject() && wxNode_wxWindow::AssignableFrom(args[0]->ToObject()->GetConstructorName()))) && args[1]->IsNumber()) {
    wxNode_wxWindow* parent = args[0]->IsNull() ? NULL : wxNodeObject::unwrap<wxNode_wxWindow>(args[0]->ToObject()); /* type: _1000 * */
    int id = (int)args[1]->ToInt32()->Value(); /* type: _8725  */
    

    wxNode_wxButton *self = new wxNode_wxButton(parent, id);
    NodeExEvtHandlerImpl* evtHandler = dynamic_cast<NodeExEvtHandlerImpl*>(self);
    self->wrap(args.This(), self, evtHandler);
    return args.This();
  }
  
  

  std::ostringstream errStr;
  errStr << "Could not find matching constructor for arguments (class name: wxButton).\n";
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
   * id: _49556
   */
  if(args.Length() == 1 && args[0]->IsBoolean()) {
    bool show = args[0]->ToBoolean()->Value(); /* type: _14830  */
    

    self->SetAuthNeeded(show);

    return v8::Undefined();
  }
  
  /*
   * id: _49556
   */
  if(args.Length() == 0) {
    

    self->SetAuthNeeded();

    return v8::Undefined();
  }
  

  std::ostringstream errStr;
  errStr << "Could not find matching method for arguments (method name: wxButton::SetAuthNeeded).\n";
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
   * id: _49557
   */
  if(args.Length() == 0) {
    

    bool returnVal = self->GetAuthNeeded();

    return scope.Close(v8::Boolean::New(returnVal));
  }
  

  std::ostringstream errStr;
  errStr << "Could not find matching method for arguments (method name: wxButton::GetAuthNeeded).\n";
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
   * id: _49558
   */
  if(args.Length() == 0) {
    

    const wxWindow* returnVal = self->SetDefault();

    return scope.Close(wxNode_wxWindow::New(returnVal));
  }
  

  std::ostringstream errStr;
  errStr << "Could not find matching method for arguments (method name: wxButton::SetDefault).\n";
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
   * id: _49559
   */
  if(args.Length() == 0) {
    

    wxSize returnVal = wxButton::GetDefaultSize();

    return scope.Close(wxNode_wxSize::NewCopy(returnVal));
  }
  

  std::ostringstream errStr;
  errStr << "Could not find matching method for arguments (method name: wxButton::GetDefaultSize).\n";
  errStr << "  arg count: " << args.Length() << "\n";
  for(int i = 0; i < args.Length(); i++) {
    v8::String::AsciiValue argStr(args[i]);
    errStr << "  arg[" << i << "]: " << *argStr << "\n";
  }
  return v8::ThrowException(v8::Exception::TypeError(v8::String::New(errStr.str().c_str())));
}

