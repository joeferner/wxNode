
#include <sstream>
#include "wxNode_wxTextCtrl.h"
#include "wxNode_wxEvtHandler.h"
#include "wxNode_wxControl.h"
#include "wxNode_wxWindow.h"
#include "wxNode_wxPoint.h"
#include "wxNode_wxSize.h"
#include "wxNode_wxValidator.h"
#include "wxNode_wxKeyEvent.h"
#include "wxNode_wxUpdateUIEvent.h"
#include "wxNode_wxTextAttr.h"
#include "wxNode_wxVisualAttributes.h"
#include "wxNode_wxClassInfo.h"


/* static */ v8::Persistent<v8::FunctionTemplate> wxNode_wxTextCtrl::s_ct;



wxNode_wxTextCtrl::wxNode_wxTextCtrl()
  : wxTextCtrl()
{

}

wxNode_wxTextCtrl::wxNode_wxTextCtrl(wxNode_wxWindow* parent, int id, const wxString& value, wxNode_wxPoint& pos, wxNode_wxSize& size, long int style, wxNode_wxValidator& validator, const wxString& name)
  : wxTextCtrl(parent, id, value, pos, size, style, validator, name)
{

}

wxNode_wxTextCtrl::wxNode_wxTextCtrl(wxNode_wxWindow* parent, int id, const wxString& value, wxNode_wxPoint& pos, wxNode_wxSize& size, long int style, wxNode_wxValidator& validator)
  : wxTextCtrl(parent, id, value, pos, size, style, validator)
{

}

wxNode_wxTextCtrl::wxNode_wxTextCtrl(wxNode_wxWindow* parent, int id, const wxString& value, wxNode_wxPoint& pos, wxNode_wxSize& size, long int style)
  : wxTextCtrl(parent, id, value, pos, size, style)
{

}

wxNode_wxTextCtrl::wxNode_wxTextCtrl(wxNode_wxWindow* parent, int id, const wxString& value, wxNode_wxPoint& pos, wxNode_wxSize& size)
  : wxTextCtrl(parent, id, value, pos, size)
{

}

wxNode_wxTextCtrl::wxNode_wxTextCtrl(wxNode_wxWindow* parent, int id, const wxString& value, wxNode_wxPoint& pos)
  : wxTextCtrl(parent, id, value, pos)
{

}

wxNode_wxTextCtrl::wxNode_wxTextCtrl(wxNode_wxWindow* parent, int id, const wxString& value)
  : wxTextCtrl(parent, id, value)
{

}

wxNode_wxTextCtrl::wxNode_wxTextCtrl(wxNode_wxWindow* parent, int id)
  : wxTextCtrl(parent, id)
{

}




/*static*/ void wxNode_wxTextCtrl::Init(v8::Handle<v8::Object> target) {
  v8::HandleScope scope;

  v8::Local<v8::FunctionTemplate> t = v8::FunctionTemplate::New(wxNodeObject::NewFunc);
  s_ct = v8::Persistent<v8::FunctionTemplate>::New(t);
  s_ct->InstanceTemplate()->SetInternalFieldCount(2);
  s_ct->SetClassName(v8::String::NewSymbol("wxTextCtrl"));

  NODE_SET_PROTOTYPE_METHOD(s_ct, "init", _init);
  AddMethods(s_ct);

  target->Set(v8::String::NewSymbol("wxTextCtrl"), s_ct->GetFunction());
}

/*static*/ void wxNode_wxTextCtrl::AddMethods(v8::Handle<v8::FunctionTemplate> target) {
  wxNode_wxControl::AddMethods(target);
  NODE_SET_PROTOTYPE_METHOD(target, "isSingleLine", _IsSingleLine);
  NODE_SET_PROTOTYPE_METHOD(target, "isMultiLine", _IsMultiLine);
  NODE_SET_PROTOTYPE_METHOD(target, "emulateKeyPress", _EmulateKeyPress);
  NODE_SET_PROTOTYPE_METHOD(target, "doUpdateWindowUI", _DoUpdateWindowUI);
  NODE_SET_PROTOTYPE_METHOD(target, "shouldInheritColours", _ShouldInheritColours);
  NODE_SET_PROTOTYPE_METHOD(target, "hitTest", _HitTest);
  NODE_SET_PROTOTYPE_METHOD(target, "setStyle", _SetStyle);
  NODE_SET_PROTOTYPE_METHOD(target, "getStyle", _GetStyle);
  NODE_SET_PROTOTYPE_METHOD(target, "setDefaultStyle", _SetDefaultStyle);
  NODE_SET_PROTOTYPE_METHOD(target, "getValue", _GetValue);
  NODE_SET_PROTOTYPE_METHOD(target, "setValue", _SetValue);
  NODE_SET_PROTOTYPE_METHOD(target, "getDefaultAttributes", _GetDefaultAttributes);
  NODE_SET_METHOD(target, "getClassDefaultAttributes", _GetClassDefaultAttributes);
  NODE_SET_PROTOTYPE_METHOD(target, "getClassInfo", _GetClassInfo);
  
}

/*static*/ bool wxNode_wxTextCtrl::AssignableFrom(const v8::Handle<v8::String>& className) {
  v8::String::AsciiValue classNameStr(className);
  return AssignableFrom(*classNameStr);
}

/*static*/ bool wxNode_wxTextCtrl::AssignableFrom(const char* className) {
  if(!strcmp("wxTextCtrl", className)) { return true; }
  
  if(!strcmp("wxTextCtrl", className)) { return true; }


  return false;
}

/*static*/ v8::Handle<v8::Value> wxNode_wxTextCtrl::_init(const v8::Arguments& args) {
  v8::HandleScope scope;

  
  
  /*
   * id: _18137
   */
  if(args.Length() == 0) {
    

    wxNode_wxTextCtrl *self = new wxNode_wxTextCtrl();
    NodeExEvtHandlerImpl* evtHandler = dynamic_cast<NodeExEvtHandlerImpl*>(self);
    self->wrap(args.This(), self, evtHandler);
    return args.This();
  }
  
  /*
   * id: _18138
   */
  if(args.Length() == 8 && (args[0]->IsNull() || (args[0]->IsObject() && wxNode_wxWindow::AssignableFrom(args[0]->ToObject()->GetConstructorName()))) && args[1]->IsNumber() && args[2]->IsString() && (args[3]->IsNull() || (args[3]->IsObject() && wxNode_wxPoint::AssignableFrom(args[3]->ToObject()->GetConstructorName()))) && (args[4]->IsNull() || (args[4]->IsObject() && wxNode_wxSize::AssignableFrom(args[4]->ToObject()->GetConstructorName()))) && args[5]->IsNumber() && (args[6]->IsNull() || (args[6]->IsObject() && wxNode_wxValidator::AssignableFrom(args[6]->ToObject()->GetConstructorName()))) && args[7]->IsString()) {
    wxNode_wxWindow* parent = args[0]->IsNull() ? NULL : wxNodeObject::unwrap<wxNode_wxWindow>(args[0]->ToObject()); /* type: _993 * */
    int id = (int)args[1]->ToInt32()->Value(); /* type: _8633  */
    v8::String::AsciiValue value(args[2]->ToString()); /* type: _14808  */
    wxNode_wxPoint* pos = args[3]->IsNull() ? NULL : wxNodeObject::unwrap<wxNode_wxPoint>(args[3]->ToObject()); /* type: _20412  */
    wxNode_wxSize* size = args[4]->IsNull() ? NULL : wxNodeObject::unwrap<wxNode_wxSize>(args[4]->ToObject()); /* type: _20522  */
    long int style = (long int)args[5]->ToInt32()->Value(); /* type: _586  */
    wxNode_wxValidator* validator = args[6]->IsNull() ? NULL : wxNodeObject::unwrap<wxNode_wxValidator>(args[6]->ToObject()); /* type: _59059  */
    v8::String::AsciiValue name(args[7]->ToString()); /* type: _14808  */
    

    wxNode_wxTextCtrl *self = new wxNode_wxTextCtrl(parent, id, *value, *pos, *size, style, *validator, *name);
    NodeExEvtHandlerImpl* evtHandler = dynamic_cast<NodeExEvtHandlerImpl*>(self);
    self->wrap(args.This(), self, evtHandler);
    return args.This();
  }
  
  /*
   * id: _18138
   */
  if(args.Length() == 7 && (args[0]->IsNull() || (args[0]->IsObject() && wxNode_wxWindow::AssignableFrom(args[0]->ToObject()->GetConstructorName()))) && args[1]->IsNumber() && args[2]->IsString() && (args[3]->IsNull() || (args[3]->IsObject() && wxNode_wxPoint::AssignableFrom(args[3]->ToObject()->GetConstructorName()))) && (args[4]->IsNull() || (args[4]->IsObject() && wxNode_wxSize::AssignableFrom(args[4]->ToObject()->GetConstructorName()))) && args[5]->IsNumber() && (args[6]->IsNull() || (args[6]->IsObject() && wxNode_wxValidator::AssignableFrom(args[6]->ToObject()->GetConstructorName())))) {
    wxNode_wxWindow* parent = args[0]->IsNull() ? NULL : wxNodeObject::unwrap<wxNode_wxWindow>(args[0]->ToObject()); /* type: _993 * */
    int id = (int)args[1]->ToInt32()->Value(); /* type: _8633  */
    v8::String::AsciiValue value(args[2]->ToString()); /* type: _14808  */
    wxNode_wxPoint* pos = args[3]->IsNull() ? NULL : wxNodeObject::unwrap<wxNode_wxPoint>(args[3]->ToObject()); /* type: _20412  */
    wxNode_wxSize* size = args[4]->IsNull() ? NULL : wxNodeObject::unwrap<wxNode_wxSize>(args[4]->ToObject()); /* type: _20522  */
    long int style = (long int)args[5]->ToInt32()->Value(); /* type: _586  */
    wxNode_wxValidator* validator = args[6]->IsNull() ? NULL : wxNodeObject::unwrap<wxNode_wxValidator>(args[6]->ToObject()); /* type: _59059  */
    

    wxNode_wxTextCtrl *self = new wxNode_wxTextCtrl(parent, id, *value, *pos, *size, style, *validator);
    NodeExEvtHandlerImpl* evtHandler = dynamic_cast<NodeExEvtHandlerImpl*>(self);
    self->wrap(args.This(), self, evtHandler);
    return args.This();
  }
  
  /*
   * id: _18138
   */
  if(args.Length() == 6 && (args[0]->IsNull() || (args[0]->IsObject() && wxNode_wxWindow::AssignableFrom(args[0]->ToObject()->GetConstructorName()))) && args[1]->IsNumber() && args[2]->IsString() && (args[3]->IsNull() || (args[3]->IsObject() && wxNode_wxPoint::AssignableFrom(args[3]->ToObject()->GetConstructorName()))) && (args[4]->IsNull() || (args[4]->IsObject() && wxNode_wxSize::AssignableFrom(args[4]->ToObject()->GetConstructorName()))) && args[5]->IsNumber()) {
    wxNode_wxWindow* parent = args[0]->IsNull() ? NULL : wxNodeObject::unwrap<wxNode_wxWindow>(args[0]->ToObject()); /* type: _993 * */
    int id = (int)args[1]->ToInt32()->Value(); /* type: _8633  */
    v8::String::AsciiValue value(args[2]->ToString()); /* type: _14808  */
    wxNode_wxPoint* pos = args[3]->IsNull() ? NULL : wxNodeObject::unwrap<wxNode_wxPoint>(args[3]->ToObject()); /* type: _20412  */
    wxNode_wxSize* size = args[4]->IsNull() ? NULL : wxNodeObject::unwrap<wxNode_wxSize>(args[4]->ToObject()); /* type: _20522  */
    long int style = (long int)args[5]->ToInt32()->Value(); /* type: _586  */
    

    wxNode_wxTextCtrl *self = new wxNode_wxTextCtrl(parent, id, *value, *pos, *size, style);
    NodeExEvtHandlerImpl* evtHandler = dynamic_cast<NodeExEvtHandlerImpl*>(self);
    self->wrap(args.This(), self, evtHandler);
    return args.This();
  }
  
  /*
   * id: _18138
   */
  if(args.Length() == 5 && (args[0]->IsNull() || (args[0]->IsObject() && wxNode_wxWindow::AssignableFrom(args[0]->ToObject()->GetConstructorName()))) && args[1]->IsNumber() && args[2]->IsString() && (args[3]->IsNull() || (args[3]->IsObject() && wxNode_wxPoint::AssignableFrom(args[3]->ToObject()->GetConstructorName()))) && (args[4]->IsNull() || (args[4]->IsObject() && wxNode_wxSize::AssignableFrom(args[4]->ToObject()->GetConstructorName())))) {
    wxNode_wxWindow* parent = args[0]->IsNull() ? NULL : wxNodeObject::unwrap<wxNode_wxWindow>(args[0]->ToObject()); /* type: _993 * */
    int id = (int)args[1]->ToInt32()->Value(); /* type: _8633  */
    v8::String::AsciiValue value(args[2]->ToString()); /* type: _14808  */
    wxNode_wxPoint* pos = args[3]->IsNull() ? NULL : wxNodeObject::unwrap<wxNode_wxPoint>(args[3]->ToObject()); /* type: _20412  */
    wxNode_wxSize* size = args[4]->IsNull() ? NULL : wxNodeObject::unwrap<wxNode_wxSize>(args[4]->ToObject()); /* type: _20522  */
    

    wxNode_wxTextCtrl *self = new wxNode_wxTextCtrl(parent, id, *value, *pos, *size);
    NodeExEvtHandlerImpl* evtHandler = dynamic_cast<NodeExEvtHandlerImpl*>(self);
    self->wrap(args.This(), self, evtHandler);
    return args.This();
  }
  
  /*
   * id: _18138
   */
  if(args.Length() == 4 && (args[0]->IsNull() || (args[0]->IsObject() && wxNode_wxWindow::AssignableFrom(args[0]->ToObject()->GetConstructorName()))) && args[1]->IsNumber() && args[2]->IsString() && (args[3]->IsNull() || (args[3]->IsObject() && wxNode_wxPoint::AssignableFrom(args[3]->ToObject()->GetConstructorName())))) {
    wxNode_wxWindow* parent = args[0]->IsNull() ? NULL : wxNodeObject::unwrap<wxNode_wxWindow>(args[0]->ToObject()); /* type: _993 * */
    int id = (int)args[1]->ToInt32()->Value(); /* type: _8633  */
    v8::String::AsciiValue value(args[2]->ToString()); /* type: _14808  */
    wxNode_wxPoint* pos = args[3]->IsNull() ? NULL : wxNodeObject::unwrap<wxNode_wxPoint>(args[3]->ToObject()); /* type: _20412  */
    

    wxNode_wxTextCtrl *self = new wxNode_wxTextCtrl(parent, id, *value, *pos);
    NodeExEvtHandlerImpl* evtHandler = dynamic_cast<NodeExEvtHandlerImpl*>(self);
    self->wrap(args.This(), self, evtHandler);
    return args.This();
  }
  
  /*
   * id: _18138
   */
  if(args.Length() == 3 && (args[0]->IsNull() || (args[0]->IsObject() && wxNode_wxWindow::AssignableFrom(args[0]->ToObject()->GetConstructorName()))) && args[1]->IsNumber() && args[2]->IsString()) {
    wxNode_wxWindow* parent = args[0]->IsNull() ? NULL : wxNodeObject::unwrap<wxNode_wxWindow>(args[0]->ToObject()); /* type: _993 * */
    int id = (int)args[1]->ToInt32()->Value(); /* type: _8633  */
    v8::String::AsciiValue value(args[2]->ToString()); /* type: _14808  */
    

    wxNode_wxTextCtrl *self = new wxNode_wxTextCtrl(parent, id, *value);
    NodeExEvtHandlerImpl* evtHandler = dynamic_cast<NodeExEvtHandlerImpl*>(self);
    self->wrap(args.This(), self, evtHandler);
    return args.This();
  }
  
  /*
   * id: _18138
   */
  if(args.Length() == 2 && (args[0]->IsNull() || (args[0]->IsObject() && wxNode_wxWindow::AssignableFrom(args[0]->ToObject()->GetConstructorName()))) && args[1]->IsNumber()) {
    wxNode_wxWindow* parent = args[0]->IsNull() ? NULL : wxNodeObject::unwrap<wxNode_wxWindow>(args[0]->ToObject()); /* type: _993 * */
    int id = (int)args[1]->ToInt32()->Value(); /* type: _8633  */
    

    wxNode_wxTextCtrl *self = new wxNode_wxTextCtrl(parent, id);
    NodeExEvtHandlerImpl* evtHandler = dynamic_cast<NodeExEvtHandlerImpl*>(self);
    self->wrap(args.This(), self, evtHandler);
    return args.This();
  }
  
  

  std::ostringstream errStr;
  errStr << "Could not find matching constructor for arguments (class name: wxTextCtrl).\n";                           \
  errStr << "  arg count: " << args.Length() << "\n";
  for(int i = 0; i < args.Length(); i++) {
    v8::String::AsciiValue argStr(args[i]);
    errStr << "  arg[" << i << "]: " << *argStr << "\n";
  }
  return v8::ThrowException(v8::Exception::TypeError(v8::String::New(errStr.str().c_str())));
}


/*static*/ v8::Handle<v8::Value> wxNode_wxTextCtrl::_IsSingleLine(const v8::Arguments& args) {
  v8::HandleScope scope;
  wxNode_wxTextCtrl* self = unwrap<wxNode_wxTextCtrl>(args.This());

  
  /*
   * id: _30739
   */
  if(args.Length() == 0) {
    

    bool returnVal = self->IsSingleLine();

    return scope.Close(v8::Boolean::New(returnVal));
  }
  

  std::ostringstream errStr;
  errStr << "Could not find matching method for arguments (method name: wxTextCtrl::IsSingleLine).\n";                           \
  errStr << "  arg count: " << args.Length() << "\n";
  for(int i = 0; i < args.Length(); i++) {
    v8::String::AsciiValue argStr(args[i]);
    errStr << "  arg[" << i << "]: " << *argStr << "\n";
  }
  return v8::ThrowException(v8::Exception::TypeError(v8::String::New(errStr.str().c_str())));
}

/*static*/ v8::Handle<v8::Value> wxNode_wxTextCtrl::_IsMultiLine(const v8::Arguments& args) {
  v8::HandleScope scope;
  wxNode_wxTextCtrl* self = unwrap<wxNode_wxTextCtrl>(args.This());

  
  /*
   * id: _30740
   */
  if(args.Length() == 0) {
    

    bool returnVal = self->IsMultiLine();

    return scope.Close(v8::Boolean::New(returnVal));
  }
  

  std::ostringstream errStr;
  errStr << "Could not find matching method for arguments (method name: wxTextCtrl::IsMultiLine).\n";                           \
  errStr << "  arg count: " << args.Length() << "\n";
  for(int i = 0; i < args.Length(); i++) {
    v8::String::AsciiValue argStr(args[i]);
    errStr << "  arg[" << i << "]: " << *argStr << "\n";
  }
  return v8::ThrowException(v8::Exception::TypeError(v8::String::New(errStr.str().c_str())));
}

/*static*/ v8::Handle<v8::Value> wxNode_wxTextCtrl::_EmulateKeyPress(const v8::Arguments& args) {
  v8::HandleScope scope;
  wxNode_wxTextCtrl* self = unwrap<wxNode_wxTextCtrl>(args.This());

  
  /*
   * id: _30748
   */
  if(args.Length() == 1 && (args[0]->IsNull() || (args[0]->IsObject() && wxNode_wxKeyEvent::AssignableFrom(args[0]->ToObject()->GetConstructorName())))) {
    wxNode_wxKeyEvent* event = args[0]->IsNull() ? NULL : wxNodeObject::unwrap<wxNode_wxKeyEvent>(args[0]->ToObject()); /* type: _61563  */
    

    bool returnVal = self->EmulateKeyPress(*event);

    return scope.Close(v8::Boolean::New(returnVal));
  }
  

  std::ostringstream errStr;
  errStr << "Could not find matching method for arguments (method name: wxTextCtrl::EmulateKeyPress).\n";                           \
  errStr << "  arg count: " << args.Length() << "\n";
  for(int i = 0; i < args.Length(); i++) {
    v8::String::AsciiValue argStr(args[i]);
    errStr << "  arg[" << i << "]: " << *argStr << "\n";
  }
  return v8::ThrowException(v8::Exception::TypeError(v8::String::New(errStr.str().c_str())));
}

/*static*/ v8::Handle<v8::Value> wxNode_wxTextCtrl::_DoUpdateWindowUI(const v8::Arguments& args) {
  v8::HandleScope scope;
  wxNode_wxTextCtrl* self = unwrap<wxNode_wxTextCtrl>(args.This());

  
  /*
   * id: _30749
   */
  if(args.Length() == 1 && (args[0]->IsNull() || (args[0]->IsObject() && wxNode_wxUpdateUIEvent::AssignableFrom(args[0]->ToObject()->GetConstructorName())))) {
    wxNode_wxUpdateUIEvent* event = args[0]->IsNull() ? NULL : wxNodeObject::unwrap<wxNode_wxUpdateUIEvent>(args[0]->ToObject()); /* type: _59566  */
    

    self->DoUpdateWindowUI(*event);

    return v8::Undefined();
  }
  

  std::ostringstream errStr;
  errStr << "Could not find matching method for arguments (method name: wxTextCtrl::DoUpdateWindowUI).\n";                           \
  errStr << "  arg count: " << args.Length() << "\n";
  for(int i = 0; i < args.Length(); i++) {
    v8::String::AsciiValue argStr(args[i]);
    errStr << "  arg[" << i << "]: " << *argStr << "\n";
  }
  return v8::ThrowException(v8::Exception::TypeError(v8::String::New(errStr.str().c_str())));
}

/*static*/ v8::Handle<v8::Value> wxNode_wxTextCtrl::_ShouldInheritColours(const v8::Arguments& args) {
  v8::HandleScope scope;
  wxNode_wxTextCtrl* self = unwrap<wxNode_wxTextCtrl>(args.This());

  
  /*
   * id: _30750
   */
  if(args.Length() == 0) {
    

    bool returnVal = self->ShouldInheritColours();

    return scope.Close(v8::Boolean::New(returnVal));
  }
  

  std::ostringstream errStr;
  errStr << "Could not find matching method for arguments (method name: wxTextCtrl::ShouldInheritColours).\n";                           \
  errStr << "  arg count: " << args.Length() << "\n";
  for(int i = 0; i < args.Length(); i++) {
    v8::String::AsciiValue argStr(args[i]);
    errStr << "  arg[" << i << "]: " << *argStr << "\n";
  }
  return v8::ThrowException(v8::Exception::TypeError(v8::String::New(errStr.str().c_str())));
}

/*static*/ v8::Handle<v8::Value> wxNode_wxTextCtrl::_HitTest(const v8::Arguments& args) {
  v8::HandleScope scope;
  wxNode_wxTextCtrl* self = unwrap<wxNode_wxTextCtrl>(args.This());

  
  /*
   * id: _30751
   */
  if(args.Length() == 2 && (args[0]->IsNull() || (args[0]->IsObject() && wxNode_wxPoint::AssignableFrom(args[0]->ToObject()->GetConstructorName()))) && false) {
    wxNode_wxPoint* pt = args[0]->IsNull() ? NULL : wxNodeObject::unwrap<wxNode_wxPoint>(args[0]->ToObject()); /* type: _20412  */
    long int pos; /* type: _20380 * */
    

    int returnVal = (int)self->HitTest(*pt, &pos);

    return scope.Close(v8::Number::New(returnVal));
  }
  
  /*
   * id: _30752
   */
  if(args.Length() == 3 && (args[0]->IsNull() || (args[0]->IsObject() && wxNode_wxPoint::AssignableFrom(args[0]->ToObject()->GetConstructorName()))) && false && false) {
    wxNode_wxPoint* pt = args[0]->IsNull() ? NULL : wxNodeObject::unwrap<wxNode_wxPoint>(args[0]->ToObject()); /* type: _20412  */
    long int col; /* type: _59564 * */
    long int row; /* type: _59564 * */
    

    int returnVal = (int)self->HitTest(*pt, &col, &row);

    return scope.Close(v8::Number::New(returnVal));
  }
  

  std::ostringstream errStr;
  errStr << "Could not find matching method for arguments (method name: wxTextCtrl::HitTest).\n";                           \
  errStr << "  arg count: " << args.Length() << "\n";
  for(int i = 0; i < args.Length(); i++) {
    v8::String::AsciiValue argStr(args[i]);
    errStr << "  arg[" << i << "]: " << *argStr << "\n";
  }
  return v8::ThrowException(v8::Exception::TypeError(v8::String::New(errStr.str().c_str())));
}

/*static*/ v8::Handle<v8::Value> wxNode_wxTextCtrl::_SetStyle(const v8::Arguments& args) {
  v8::HandleScope scope;
  wxNode_wxTextCtrl* self = unwrap<wxNode_wxTextCtrl>(args.This());

  
  /*
   * id: _30753
   */
  if(args.Length() == 3 && args[0]->IsNumber() && args[1]->IsNumber() && (args[2]->IsNull() || (args[2]->IsObject() && wxNode_wxTextAttr::AssignableFrom(args[2]->ToObject()->GetConstructorName())))) {
    long int start = (long int)args[0]->ToInt32()->Value(); /* type: _586  */
    long int end = (long int)args[1]->ToInt32()->Value(); /* type: _586  */
    wxNode_wxTextAttr* style = args[2]->IsNull() ? NULL : wxNodeObject::unwrap<wxNode_wxTextAttr>(args[2]->ToObject()); /* type: _51116  */
    

    bool returnVal = self->SetStyle(start, end, *style);

    return scope.Close(v8::Boolean::New(returnVal));
  }
  

  std::ostringstream errStr;
  errStr << "Could not find matching method for arguments (method name: wxTextCtrl::SetStyle).\n";                           \
  errStr << "  arg count: " << args.Length() << "\n";
  for(int i = 0; i < args.Length(); i++) {
    v8::String::AsciiValue argStr(args[i]);
    errStr << "  arg[" << i << "]: " << *argStr << "\n";
  }
  return v8::ThrowException(v8::Exception::TypeError(v8::String::New(errStr.str().c_str())));
}

/*static*/ v8::Handle<v8::Value> wxNode_wxTextCtrl::_GetStyle(const v8::Arguments& args) {
  v8::HandleScope scope;
  wxNode_wxTextCtrl* self = unwrap<wxNode_wxTextCtrl>(args.This());

  
  /*
   * id: _30754
   */
  if(args.Length() == 2 && args[0]->IsNumber() && (args[1]->IsNull() || (args[1]->IsObject() && wxNode_wxTextAttr::AssignableFrom(args[1]->ToObject()->GetConstructorName())))) {
    long int position = (long int)args[0]->ToInt32()->Value(); /* type: _586  */
    wxNode_wxTextAttr* style = args[1]->IsNull() ? NULL : wxNodeObject::unwrap<wxNode_wxTextAttr>(args[1]->ToObject()); /* type: _51115  */
    

    bool returnVal = self->GetStyle(position, *style);

    return scope.Close(v8::Boolean::New(returnVal));
  }
  

  std::ostringstream errStr;
  errStr << "Could not find matching method for arguments (method name: wxTextCtrl::GetStyle).\n";                           \
  errStr << "  arg count: " << args.Length() << "\n";
  for(int i = 0; i < args.Length(); i++) {
    v8::String::AsciiValue argStr(args[i]);
    errStr << "  arg[" << i << "]: " << *argStr << "\n";
  }
  return v8::ThrowException(v8::Exception::TypeError(v8::String::New(errStr.str().c_str())));
}

/*static*/ v8::Handle<v8::Value> wxNode_wxTextCtrl::_SetDefaultStyle(const v8::Arguments& args) {
  v8::HandleScope scope;
  wxNode_wxTextCtrl* self = unwrap<wxNode_wxTextCtrl>(args.This());

  
  /*
   * id: _30755
   */
  if(args.Length() == 1 && (args[0]->IsNull() || (args[0]->IsObject() && wxNode_wxTextAttr::AssignableFrom(args[0]->ToObject()->GetConstructorName())))) {
    wxNode_wxTextAttr* style = args[0]->IsNull() ? NULL : wxNodeObject::unwrap<wxNode_wxTextAttr>(args[0]->ToObject()); /* type: _51116  */
    

    bool returnVal = self->SetDefaultStyle(*style);

    return scope.Close(v8::Boolean::New(returnVal));
  }
  

  std::ostringstream errStr;
  errStr << "Could not find matching method for arguments (method name: wxTextCtrl::SetDefaultStyle).\n";                           \
  errStr << "  arg count: " << args.Length() << "\n";
  for(int i = 0; i < args.Length(); i++) {
    v8::String::AsciiValue argStr(args[i]);
    errStr << "  arg[" << i << "]: " << *argStr << "\n";
  }
  return v8::ThrowException(v8::Exception::TypeError(v8::String::New(errStr.str().c_str())));
}

/*static*/ v8::Handle<v8::Value> wxNode_wxTextCtrl::_GetValue(const v8::Arguments& args) {
  v8::HandleScope scope;
  wxNode_wxTextCtrl* self = unwrap<wxNode_wxTextCtrl>(args.This());

  
  /*
   * id: _30756
   */
  if(args.Length() == 0) {
    

    wxString returnVal = self->GetValue();

    return scope.Close(v8::String::New(returnVal));
  }
  

  std::ostringstream errStr;
  errStr << "Could not find matching method for arguments (method name: wxTextCtrl::GetValue).\n";                           \
  errStr << "  arg count: " << args.Length() << "\n";
  for(int i = 0; i < args.Length(); i++) {
    v8::String::AsciiValue argStr(args[i]);
    errStr << "  arg[" << i << "]: " << *argStr << "\n";
  }
  return v8::ThrowException(v8::Exception::TypeError(v8::String::New(errStr.str().c_str())));
}

/*static*/ v8::Handle<v8::Value> wxNode_wxTextCtrl::_SetValue(const v8::Arguments& args) {
  v8::HandleScope scope;
  wxNode_wxTextCtrl* self = unwrap<wxNode_wxTextCtrl>(args.This());

  
  /*
   * id: _30757
   */
  if(args.Length() == 1 && args[0]->IsString()) {
    v8::String::AsciiValue value(args[0]->ToString()); /* type: _14808  */
    

    self->SetValue(*value);

    return v8::Undefined();
  }
  

  std::ostringstream errStr;
  errStr << "Could not find matching method for arguments (method name: wxTextCtrl::SetValue).\n";                           \
  errStr << "  arg count: " << args.Length() << "\n";
  for(int i = 0; i < args.Length(); i++) {
    v8::String::AsciiValue argStr(args[i]);
    errStr << "  arg[" << i << "]: " << *argStr << "\n";
  }
  return v8::ThrowException(v8::Exception::TypeError(v8::String::New(errStr.str().c_str())));
}

/*static*/ v8::Handle<v8::Value> wxNode_wxTextCtrl::_GetDefaultAttributes(const v8::Arguments& args) {
  v8::HandleScope scope;
  wxNode_wxTextCtrl* self = unwrap<wxNode_wxTextCtrl>(args.This());

  
  /*
   * id: _30758
   */
  if(args.Length() == 0) {
    

    wxVisualAttributes returnValTemp = self->GetDefaultAttributes();

    wxNode_wxVisualAttributes* returnVal = new wxNode_wxVisualAttributes();
    memcpy(dynamic_cast<wxVisualAttributes*>(returnVal), &returnValTemp, sizeof(wxVisualAttributes));
    v8::Local<v8::FunctionTemplate> returnObjFt = v8::FunctionTemplate::New(wxNodeObject::NewFunc);
    returnObjFt->InstanceTemplate()->SetInternalFieldCount(2);
    returnObjFt->SetClassName(v8::String::NewSymbol("wxVisualAttributes"));
    wxNode_wxVisualAttributes::AddMethods(returnObjFt);
    v8::Local<v8::Function> returnObjFn = returnObjFt->GetFunction();
    v8::Handle<v8::Value> returnObjArgs[0];
    v8::Local<v8::Object> returnObj = returnObjFn->CallAsConstructor(0, returnObjArgs)->ToObject();
    returnObj->SetPointerInInternalField(0, returnVal);
    returnObj->SetPointerInInternalField(1, new NodeExEvtHandlerImplWrap(returnObj));
    return scope.Close(returnObj);
  }
  

  std::ostringstream errStr;
  errStr << "Could not find matching method for arguments (method name: wxTextCtrl::GetDefaultAttributes).\n";                           \
  errStr << "  arg count: " << args.Length() << "\n";
  for(int i = 0; i < args.Length(); i++) {
    v8::String::AsciiValue argStr(args[i]);
    errStr << "  arg[" << i << "]: " << *argStr << "\n";
  }
  return v8::ThrowException(v8::Exception::TypeError(v8::String::New(errStr.str().c_str())));
}

/*static*/ v8::Handle<v8::Value> wxNode_wxTextCtrl::_GetClassDefaultAttributes(const v8::Arguments& args) {
  v8::HandleScope scope;
  wxNode_wxTextCtrl* self = unwrap<wxNode_wxTextCtrl>(args.This());

  
  /*
   * id: _30759
   */
  if(args.Length() == 1 && args[0]->IsNumber()) {
    wxWindowVariant variant; /* type: _10472  */
    

    wxVisualAttributes returnValTemp = self->GetClassDefaultAttributes(variant);

    wxNode_wxVisualAttributes* returnVal = new wxNode_wxVisualAttributes();
    memcpy(dynamic_cast<wxVisualAttributes*>(returnVal), &returnValTemp, sizeof(wxVisualAttributes));
    v8::Local<v8::FunctionTemplate> returnObjFt = v8::FunctionTemplate::New(wxNodeObject::NewFunc);
    returnObjFt->InstanceTemplate()->SetInternalFieldCount(2);
    returnObjFt->SetClassName(v8::String::NewSymbol("wxVisualAttributes"));
    wxNode_wxVisualAttributes::AddMethods(returnObjFt);
    v8::Local<v8::Function> returnObjFn = returnObjFt->GetFunction();
    v8::Handle<v8::Value> returnObjArgs[0];
    v8::Local<v8::Object> returnObj = returnObjFn->CallAsConstructor(0, returnObjArgs)->ToObject();
    returnObj->SetPointerInInternalField(0, returnVal);
    returnObj->SetPointerInInternalField(1, new NodeExEvtHandlerImplWrap(returnObj));
    return scope.Close(returnObj);
  }
  
  /*
   * id: _30759
   */
  if(args.Length() == 0) {
    

    wxVisualAttributes returnValTemp = self->GetClassDefaultAttributes();

    wxNode_wxVisualAttributes* returnVal = new wxNode_wxVisualAttributes();
    memcpy(dynamic_cast<wxVisualAttributes*>(returnVal), &returnValTemp, sizeof(wxVisualAttributes));
    v8::Local<v8::FunctionTemplate> returnObjFt = v8::FunctionTemplate::New(wxNodeObject::NewFunc);
    returnObjFt->InstanceTemplate()->SetInternalFieldCount(2);
    returnObjFt->SetClassName(v8::String::NewSymbol("wxVisualAttributes"));
    wxNode_wxVisualAttributes::AddMethods(returnObjFt);
    v8::Local<v8::Function> returnObjFn = returnObjFt->GetFunction();
    v8::Handle<v8::Value> returnObjArgs[0];
    v8::Local<v8::Object> returnObj = returnObjFn->CallAsConstructor(0, returnObjArgs)->ToObject();
    returnObj->SetPointerInInternalField(0, returnVal);
    returnObj->SetPointerInInternalField(1, new NodeExEvtHandlerImplWrap(returnObj));
    return scope.Close(returnObj);
  }
  

  std::ostringstream errStr;
  errStr << "Could not find matching method for arguments (method name: wxTextCtrl::GetClassDefaultAttributes).\n";                           \
  errStr << "  arg count: " << args.Length() << "\n";
  for(int i = 0; i < args.Length(); i++) {
    v8::String::AsciiValue argStr(args[i]);
    errStr << "  arg[" << i << "]: " << *argStr << "\n";
  }
  return v8::ThrowException(v8::Exception::TypeError(v8::String::New(errStr.str().c_str())));
}

/*static*/ v8::Handle<v8::Value> wxNode_wxTextCtrl::_GetClassInfo(const v8::Arguments& args) {
  v8::HandleScope scope;
  wxNode_wxTextCtrl* self = unwrap<wxNode_wxTextCtrl>(args.This());

  
  /*
   * id: _30767
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
  errStr << "Could not find matching method for arguments (method name: wxTextCtrl::GetClassInfo).\n";                           \
  errStr << "  arg count: " << args.Length() << "\n";
  for(int i = 0; i < args.Length(); i++) {
    v8::String::AsciiValue argStr(args[i]);
    errStr << "  arg[" << i << "]: " << *argStr << "\n";
  }
  return v8::ThrowException(v8::Exception::TypeError(v8::String::New(errStr.str().c_str())));
}

