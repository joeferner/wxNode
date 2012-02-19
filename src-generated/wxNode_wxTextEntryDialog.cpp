
#include <sstream>
#include "wxNode_wxTextEntryDialog.h"
#include "wxNode_wxEvtHandler.h"
#include "wxNode_wxDialog.h"
#include "wxNode_wxWindow.h"
#include "wxNode_wxPoint.h"
#include "wxNode_wxTextValidator.h"
#include "wxNode_wxClassInfo.h"
#include "wxNode_wxObject.h"


/* static */ v8::Persistent<v8::FunctionTemplate> wxNode_wxTextEntryDialog::s_ct;



wxNode_wxTextEntryDialog::wxNode_wxTextEntryDialog(wxWindow* parent, const wxString& message, const wxString& caption, const wxString& value, long int style, wxPoint& pos)
  : wxTextEntryDialog(parent, message, caption, value, style, pos)
{

}

wxNode_wxTextEntryDialog::wxNode_wxTextEntryDialog(wxWindow* parent, const wxString& message, const wxString& caption, const wxString& value, long int style)
  : wxTextEntryDialog(parent, message, caption, value, style)
{

}

wxNode_wxTextEntryDialog::wxNode_wxTextEntryDialog(wxWindow* parent, const wxString& message, const wxString& caption, const wxString& value)
  : wxTextEntryDialog(parent, message, caption, value)
{

}

wxNode_wxTextEntryDialog::wxNode_wxTextEntryDialog(wxWindow* parent, const wxString& message, const wxString& caption)
  : wxTextEntryDialog(parent, message, caption)
{

}

wxNode_wxTextEntryDialog::wxNode_wxTextEntryDialog(wxWindow* parent, const wxString& message)
  : wxTextEntryDialog(parent, message)
{

}




/*static*/ void wxNode_wxTextEntryDialog::Init(v8::Handle<v8::Object> target) {
  v8::HandleScope scope;

  v8::Local<v8::FunctionTemplate> t = v8::FunctionTemplate::New(wxNodeObject::NewFunc);
  s_ct = v8::Persistent<v8::FunctionTemplate>::New(t);
  s_ct->InstanceTemplate()->SetInternalFieldCount(2);
  s_ct->SetClassName(v8::String::NewSymbol("TextEntryDialog"));

  NODE_SET_PROTOTYPE_METHOD(s_ct, "init", _init);
  AddMethods(s_ct);

  target->Set(v8::String::NewSymbol("TextEntryDialog"), s_ct->GetFunction());
}

/*static*/ void wxNode_wxTextEntryDialog::AddMethods(v8::Handle<v8::FunctionTemplate> target) {
  wxNode_wxDialog::AddMethods(target);
  NODE_SET_PROTOTYPE_METHOD(target, "setValue", _SetValue);
  NODE_SET_PROTOTYPE_METHOD(target, "getValue", _GetValue);
  NODE_SET_PROTOTYPE_METHOD(target, "setTextValidator", _SetTextValidator);
  NODE_SET_PROTOTYPE_METHOD(target, "getTextValidator", _GetTextValidator);
  NODE_SET_PROTOTYPE_METHOD(target, "onOK", _OnOK);
  NODE_SET_PROTOTYPE_METHOD(target, "getClassInfo", _GetClassInfo);
  NODE_SET_METHOD(target, "wxCreateObject", _wxCreateObject);
  
  
}

/*static*/ v8::Handle<v8::Value> wxNode_wxTextEntryDialog::New(const wxNode_wxTextEntryDialog* obj) {
  v8::HandleScope scope;

  if(obj == NULL) {
    return scope.Close(v8::Null());
  }
  
  v8::Local<v8::FunctionTemplate> returnObjFt = v8::FunctionTemplate::New(wxNodeObject::NewFunc);
  returnObjFt->InstanceTemplate()->SetInternalFieldCount(2);
  returnObjFt->SetClassName(v8::String::NewSymbol("TextEntryDialog"));
  wxNode_wxTextEntryDialog::AddMethods(returnObjFt);

  v8::Local<v8::Function> returnObjFn = returnObjFt->GetFunction();

  v8::Local<v8::Object> returnObj = returnObjFn->CallAsConstructor(0, new v8::Local<v8::Value>[0])->ToObject();
  returnObj->SetPointerInInternalField(0, (void*)obj);
  NodeExEvtHandlerImpl* evtHandler = dynamic_cast<NodeExEvtHandlerImpl*>((wxNode_wxTextEntryDialog*)obj);
  returnObj->SetPointerInInternalField(1, evtHandler);

  return scope.Close(returnObj);
}

/*static*/ v8::Handle<v8::Value> wxNode_wxTextEntryDialog::New(const wxTextEntryDialog* obj) {
  v8::HandleScope scope;

  if(obj == NULL) {
    return scope.Close(v8::Null());
  }
  
  v8::Local<v8::FunctionTemplate> returnObjFt = v8::FunctionTemplate::New(wxNodeObject::NewFunc);
  returnObjFt->InstanceTemplate()->SetInternalFieldCount(2);
  returnObjFt->SetClassName(v8::String::NewSymbol("TextEntryDialog"));
  wxNode_wxTextEntryDialog::AddMethods(returnObjFt);

  v8::Local<v8::Function> returnObjFn = returnObjFt->GetFunction();
  v8::Local<v8::Object> returnObj = returnObjFn->CallAsConstructor(0, new v8::Local<v8::Value>[0])->ToObject();
  returnObj->SetPointerInInternalField(0, (void*)obj);
  NodeExEvtHandlerImplWrap* wrap = new NodeExEvtHandlerImplWrap(returnObj);
  NodeExEvtHandlerImpl* evtHandler = dynamic_cast<NodeExEvtHandlerImpl*>(wrap);
  returnObj->SetPointerInInternalField(1, evtHandler);

  return scope.Close(returnObj);
}

/*static*/ v8::Handle<v8::Value> wxNode_wxTextEntryDialog::NewCopy(const wxTextEntryDialog& obj) {
  return v8::Undefined();
}

/*static*/ bool wxNode_wxTextEntryDialog::AssignableFrom(const v8::Handle<v8::String>& className) {
  v8::String::AsciiValue classNameStr(className);
  return AssignableFrom(*classNameStr);
}

/*static*/ bool wxNode_wxTextEntryDialog::AssignableFrom(const char* className) {
  if(!strcmp("TextEntryDialog", className)) { return true; }
  
  if(!strcmp("PasswordEntryDialog", className)) { return true; }


  return false;
}

/*static*/ v8::Handle<v8::Value> wxNode_wxTextEntryDialog::_init(const v8::Arguments& args) {
  v8::HandleScope scope;

  
  
  /*
   * id: _34200
   */
  if(args.Length() == 6 && (args[0]->IsNull() || (args[0]->IsObject() && wxNode_wxWindow::AssignableFrom(args[0]->ToObject()->GetConstructorName()))) && args[1]->IsString() && args[2]->IsString() && args[3]->IsString() && args[4]->IsNumber() && (args[5]->IsNull() || (args[5]->IsObject() && wxNode_wxPoint::AssignableFrom(args[5]->ToObject()->GetConstructorName())))) {
    wxNode_wxWindow* parent = args[0]->IsNull() ? NULL : wxNodeObject::unwrap<wxNode_wxWindow>(args[0]->ToObject()); /* type: _1000 * */
    v8::String::AsciiValue message(args[1]->ToString()); /* type: _14975  */
    v8::String::AsciiValue caption(args[2]->ToString()); /* type: _14975  */
    v8::String::AsciiValue value(args[3]->ToString()); /* type: _14975  */
    long int style = (long int)args[4]->ToInt32()->Value(); /* type: _592  */
    wxNode_wxPoint* pos = args[5]->IsNull() ? NULL : wxNodeObject::unwrap<wxNode_wxPoint>(args[5]->ToObject()); /* type: _20518  */
    

    wxNode_wxTextEntryDialog *self = new wxNode_wxTextEntryDialog(parent, *message, *caption, *value, style, *pos);
    NodeExEvtHandlerImpl* evtHandler = dynamic_cast<NodeExEvtHandlerImpl*>(self);
    self->wrap(args.This(), self, evtHandler);
    return args.This();
  }
  
  /*
   * id: _34200
   */
  if(args.Length() == 5 && (args[0]->IsNull() || (args[0]->IsObject() && wxNode_wxWindow::AssignableFrom(args[0]->ToObject()->GetConstructorName()))) && args[1]->IsString() && args[2]->IsString() && args[3]->IsString() && args[4]->IsNumber()) {
    wxNode_wxWindow* parent = args[0]->IsNull() ? NULL : wxNodeObject::unwrap<wxNode_wxWindow>(args[0]->ToObject()); /* type: _1000 * */
    v8::String::AsciiValue message(args[1]->ToString()); /* type: _14975  */
    v8::String::AsciiValue caption(args[2]->ToString()); /* type: _14975  */
    v8::String::AsciiValue value(args[3]->ToString()); /* type: _14975  */
    long int style = (long int)args[4]->ToInt32()->Value(); /* type: _592  */
    

    wxNode_wxTextEntryDialog *self = new wxNode_wxTextEntryDialog(parent, *message, *caption, *value, style);
    NodeExEvtHandlerImpl* evtHandler = dynamic_cast<NodeExEvtHandlerImpl*>(self);
    self->wrap(args.This(), self, evtHandler);
    return args.This();
  }
  
  /*
   * id: _34200
   */
  if(args.Length() == 4 && (args[0]->IsNull() || (args[0]->IsObject() && wxNode_wxWindow::AssignableFrom(args[0]->ToObject()->GetConstructorName()))) && args[1]->IsString() && args[2]->IsString() && args[3]->IsString()) {
    wxNode_wxWindow* parent = args[0]->IsNull() ? NULL : wxNodeObject::unwrap<wxNode_wxWindow>(args[0]->ToObject()); /* type: _1000 * */
    v8::String::AsciiValue message(args[1]->ToString()); /* type: _14975  */
    v8::String::AsciiValue caption(args[2]->ToString()); /* type: _14975  */
    v8::String::AsciiValue value(args[3]->ToString()); /* type: _14975  */
    

    wxNode_wxTextEntryDialog *self = new wxNode_wxTextEntryDialog(parent, *message, *caption, *value);
    NodeExEvtHandlerImpl* evtHandler = dynamic_cast<NodeExEvtHandlerImpl*>(self);
    self->wrap(args.This(), self, evtHandler);
    return args.This();
  }
  
  /*
   * id: _34200
   */
  if(args.Length() == 3 && (args[0]->IsNull() || (args[0]->IsObject() && wxNode_wxWindow::AssignableFrom(args[0]->ToObject()->GetConstructorName()))) && args[1]->IsString() && args[2]->IsString()) {
    wxNode_wxWindow* parent = args[0]->IsNull() ? NULL : wxNodeObject::unwrap<wxNode_wxWindow>(args[0]->ToObject()); /* type: _1000 * */
    v8::String::AsciiValue message(args[1]->ToString()); /* type: _14975  */
    v8::String::AsciiValue caption(args[2]->ToString()); /* type: _14975  */
    

    wxNode_wxTextEntryDialog *self = new wxNode_wxTextEntryDialog(parent, *message, *caption);
    NodeExEvtHandlerImpl* evtHandler = dynamic_cast<NodeExEvtHandlerImpl*>(self);
    self->wrap(args.This(), self, evtHandler);
    return args.This();
  }
  
  /*
   * id: _34200
   */
  if(args.Length() == 2 && (args[0]->IsNull() || (args[0]->IsObject() && wxNode_wxWindow::AssignableFrom(args[0]->ToObject()->GetConstructorName()))) && args[1]->IsString()) {
    wxNode_wxWindow* parent = args[0]->IsNull() ? NULL : wxNodeObject::unwrap<wxNode_wxWindow>(args[0]->ToObject()); /* type: _1000 * */
    v8::String::AsciiValue message(args[1]->ToString()); /* type: _14975  */
    

    wxNode_wxTextEntryDialog *self = new wxNode_wxTextEntryDialog(parent, *message);
    NodeExEvtHandlerImpl* evtHandler = dynamic_cast<NodeExEvtHandlerImpl*>(self);
    self->wrap(args.This(), self, evtHandler);
    return args.This();
  }
  
  

  std::ostringstream errStr;
  errStr << "Could not find matching constructor for arguments (class name: wxTextEntryDialog).\n";
  errStr << "  arg count: " << args.Length() << "\n";
  for(int i = 0; i < args.Length(); i++) {
    v8::String::AsciiValue argStr(args[i]);
    errStr << "  arg[" << i << "]: " << *argStr << "\n";
  }
  return v8::ThrowException(v8::Exception::TypeError(v8::String::New(errStr.str().c_str())));
}


/*static*/ v8::Handle<v8::Value> wxNode_wxTextEntryDialog::_SetValue(const v8::Arguments& args) {
  v8::HandleScope scope;
  wxNode_wxTextEntryDialog* self = unwrap<wxNode_wxTextEntryDialog>(args.This());

  
  /*
   * id: _34201
   */
  if(args.Length() == 1 && args[0]->IsString()) {
    v8::String::AsciiValue val(args[0]->ToString()); /* type: _14975  */
    

    self->SetValue(*val);

    return v8::Undefined();
  }
  

  std::ostringstream errStr;
  errStr << "Could not find matching method for arguments (method name: wxTextEntryDialog::SetValue).\n";
  errStr << "  arg count: " << args.Length() << "\n";
  for(int i = 0; i < args.Length(); i++) {
    v8::String::AsciiValue argStr(args[i]);
    errStr << "  arg[" << i << "]: " << *argStr << "\n";
  }
  return v8::ThrowException(v8::Exception::TypeError(v8::String::New(errStr.str().c_str())));
}

/*static*/ v8::Handle<v8::Value> wxNode_wxTextEntryDialog::_GetValue(const v8::Arguments& args) {
  v8::HandleScope scope;
  wxNode_wxTextEntryDialog* self = unwrap<wxNode_wxTextEntryDialog>(args.This());

  
  /*
   * id: _34202
   */
  if(args.Length() == 0) {
    

    wxString returnVal = self->GetValue();

    return scope.Close(v8::String::New(returnVal.mb_str()));
  }
  

  std::ostringstream errStr;
  errStr << "Could not find matching method for arguments (method name: wxTextEntryDialog::GetValue).\n";
  errStr << "  arg count: " << args.Length() << "\n";
  for(int i = 0; i < args.Length(); i++) {
    v8::String::AsciiValue argStr(args[i]);
    errStr << "  arg[" << i << "]: " << *argStr << "\n";
  }
  return v8::ThrowException(v8::Exception::TypeError(v8::String::New(errStr.str().c_str())));
}

/*static*/ v8::Handle<v8::Value> wxNode_wxTextEntryDialog::_SetTextValidator(const v8::Arguments& args) {
  v8::HandleScope scope;
  wxNode_wxTextEntryDialog* self = unwrap<wxNode_wxTextEntryDialog>(args.This());

  
  /*
   * id: _34203
   */
  if(args.Length() == 1 && (args[0]->IsNull() || (args[0]->IsObject() && wxNode_wxTextValidator::AssignableFrom(args[0]->ToObject()->GetConstructorName())))) {
    wxNode_wxTextValidator* validator = args[0]->IsNull() ? NULL : wxNodeObject::unwrap<wxNode_wxTextValidator>(args[0]->ToObject()); /* type: _64328  */
    

    self->SetTextValidator(*validator);

    return v8::Undefined();
  }
  
  /*
   * id: _34205
   */
  if(args.Length() == 1 && args[0]->IsNumber()) {
    wxTextValidatorStyle style = (wxTextValidatorStyle)args[0]->ToNumber()->Value(); /* type: _3917  */
    

    self->SetTextValidator(style);

    return v8::Undefined();
  }
  
  /*
   * id: _34205
   */
  if(args.Length() == 0) {
    

    self->SetTextValidator();

    return v8::Undefined();
  }
  

  std::ostringstream errStr;
  errStr << "Could not find matching method for arguments (method name: wxTextEntryDialog::SetTextValidator).\n";
  errStr << "  arg count: " << args.Length() << "\n";
  for(int i = 0; i < args.Length(); i++) {
    v8::String::AsciiValue argStr(args[i]);
    errStr << "  arg[" << i << "]: " << *argStr << "\n";
  }
  return v8::ThrowException(v8::Exception::TypeError(v8::String::New(errStr.str().c_str())));
}

/*static*/ v8::Handle<v8::Value> wxNode_wxTextEntryDialog::_GetTextValidator(const v8::Arguments& args) {
  v8::HandleScope scope;
  wxNode_wxTextEntryDialog* self = unwrap<wxNode_wxTextEntryDialog>(args.This());

  
  /*
   * id: _34206
   */
  if(args.Length() == 0) {
    

    const wxTextValidator* returnVal = self->GetTextValidator();

    return scope.Close(wxNode_wxTextValidator::New(returnVal));
  }
  

  std::ostringstream errStr;
  errStr << "Could not find matching method for arguments (method name: wxTextEntryDialog::GetTextValidator).\n";
  errStr << "  arg count: " << args.Length() << "\n";
  for(int i = 0; i < args.Length(); i++) {
    v8::String::AsciiValue argStr(args[i]);
    errStr << "  arg[" << i << "]: " << *argStr << "\n";
  }
  return v8::ThrowException(v8::Exception::TypeError(v8::String::New(errStr.str().c_str())));
}

/*static*/ v8::Handle<v8::Value> wxNode_wxTextEntryDialog::_OnOK(const v8::Arguments& args) {
  v8::HandleScope scope;
  wxNode_wxTextEntryDialog* self = unwrap<wxNode_wxTextEntryDialog>(args.This());

  

  std::ostringstream errStr;
  errStr << "Could not find matching method for arguments (method name: wxTextEntryDialog::OnOK).\n";
  errStr << "  arg count: " << args.Length() << "\n";
  for(int i = 0; i < args.Length(); i++) {
    v8::String::AsciiValue argStr(args[i]);
    errStr << "  arg[" << i << "]: " << *argStr << "\n";
  }
  return v8::ThrowException(v8::Exception::TypeError(v8::String::New(errStr.str().c_str())));
}

/*static*/ v8::Handle<v8::Value> wxNode_wxTextEntryDialog::_GetClassInfo(const v8::Arguments& args) {
  v8::HandleScope scope;
  wxNode_wxTextEntryDialog* self = unwrap<wxNode_wxTextEntryDialog>(args.This());

  
  /*
   * id: _34210
   */
  if(args.Length() == 0) {
    

    wxClassInfo* returnVal = self->GetClassInfo();

    return scope.Close(wxNode_wxClassInfo::New(returnVal));
  }
  

  std::ostringstream errStr;
  errStr << "Could not find matching method for arguments (method name: wxTextEntryDialog::GetClassInfo).\n";
  errStr << "  arg count: " << args.Length() << "\n";
  for(int i = 0; i < args.Length(); i++) {
    v8::String::AsciiValue argStr(args[i]);
    errStr << "  arg[" << i << "]: " << *argStr << "\n";
  }
  return v8::ThrowException(v8::Exception::TypeError(v8::String::New(errStr.str().c_str())));
}

/*static*/ v8::Handle<v8::Value> wxNode_wxTextEntryDialog::_wxCreateObject(const v8::Arguments& args) {
  v8::HandleScope scope;
  wxNode_wxTextEntryDialog* self = unwrap<wxNode_wxTextEntryDialog>(args.This());

  
  /*
   * id: _34211
   */
  if(args.Length() == 0) {
    

    wxObject* returnVal = wxTextEntryDialog::wxCreateObject();

    return scope.Close(wxNode_wxObject::New(returnVal));
  }
  

  std::ostringstream errStr;
  errStr << "Could not find matching method for arguments (method name: wxTextEntryDialog::wxCreateObject).\n";
  errStr << "  arg count: " << args.Length() << "\n";
  for(int i = 0; i < args.Length(); i++) {
    v8::String::AsciiValue argStr(args[i]);
    errStr << "  arg[" << i << "]: " << *argStr << "\n";
  }
  return v8::ThrowException(v8::Exception::TypeError(v8::String::New(errStr.str().c_str())));
}



