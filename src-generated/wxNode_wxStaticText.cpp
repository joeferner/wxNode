
#include <sstream>
#include "wxNode_wxStaticText.h"
#include "wxNode_wxEvtHandler.h"
#include "wxNode_wxControl.h"
#include "wxNode_wxWindow.h"
#include "wxNode_wxPoint.h"
#include "wxNode_wxSize.h"


/* static */ v8::Persistent<v8::FunctionTemplate> wxNode_wxStaticText::s_ct;



wxNode_wxStaticText::wxNode_wxStaticText()
  : wxStaticText()
{

}

wxNode_wxStaticText::wxNode_wxStaticText(wxNode_wxWindow* parent, int id, const wxString& label, wxNode_wxPoint& pos, wxNode_wxSize& size, long int style, const wxString& name)
  : wxStaticText(parent, id, label, pos, size, style, name)
{

}

wxNode_wxStaticText::wxNode_wxStaticText(wxNode_wxWindow* parent, int id, const wxString& label, wxNode_wxPoint& pos, wxNode_wxSize& size, long int style)
  : wxStaticText(parent, id, label, pos, size, style)
{

}

wxNode_wxStaticText::wxNode_wxStaticText(wxNode_wxWindow* parent, int id, const wxString& label, wxNode_wxPoint& pos, wxNode_wxSize& size)
  : wxStaticText(parent, id, label, pos, size)
{

}

wxNode_wxStaticText::wxNode_wxStaticText(wxNode_wxWindow* parent, int id, const wxString& label, wxNode_wxPoint& pos)
  : wxStaticText(parent, id, label, pos)
{

}

wxNode_wxStaticText::wxNode_wxStaticText(wxNode_wxWindow* parent, int id, const wxString& label)
  : wxStaticText(parent, id, label)
{

}




/*static*/ void wxNode_wxStaticText::Init(v8::Handle<v8::Object> target) {
  v8::HandleScope scope;

  v8::Local<v8::FunctionTemplate> t = v8::FunctionTemplate::New(wxNodeObject::NewFunc);
  s_ct = v8::Persistent<v8::FunctionTemplate>::New(t);
  s_ct->InstanceTemplate()->SetInternalFieldCount(2);
  s_ct->SetClassName(v8::String::NewSymbol("wxStaticText"));

  NODE_SET_PROTOTYPE_METHOD(s_ct, "init", _init);
  AddMethods(s_ct);

  target->Set(v8::String::NewSymbol("wxStaticText"), s_ct->GetFunction());
}

/*static*/ void wxNode_wxStaticText::AddMethods(v8::Handle<v8::FunctionTemplate> target) {
  wxNode_wxControl::AddMethods(target);
  NODE_SET_PROTOTYPE_METHOD(target, "wrap", _Wrap);
  NODE_SET_PROTOTYPE_METHOD(target, "acceptsFocus", _AcceptsFocus);
  NODE_SET_PROTOTYPE_METHOD(target, "hasTransparentBackground", _HasTransparentBackground);
  NODE_SET_PROTOTYPE_METHOD(target, "isEllipsized", _IsEllipsized);
  
}

/*static*/ v8::Handle<v8::Value> wxNode_wxStaticText::_init(const v8::Arguments& args) {
  v8::HandleScope scope;

  
  
  /*
   * id: _33770
   */
  if(args.Length() == 0) {
    

    wxNode_wxStaticText *self = new wxNode_wxStaticText();
    NodeExEvtHandlerImpl* evtHandler = dynamic_cast<NodeExEvtHandlerImpl*>(self);
    self->wrap(args.This(), self, evtHandler);
    return args.This();
  }
  
  /*
   * id: _33771
   */
  if(args.Length() == 7 && (args[0]->IsNull() || args[0]->IsObject()) && args[1]->IsNumber() && args[2]->IsString() && (args[3]->IsNull() || args[3]->IsObject()) && (args[4]->IsNull() || args[4]->IsObject()) && args[5]->IsNumber() && args[6]->IsString()) {
    wxNode_wxWindow* parent = args[0]->IsNull() ? NULL : wxNodeObject::unwrap<wxNode_wxWindow>(args[0]->ToObject()); /* type: _993 * */
    int id = (int)args[1]->ToInt32()->Value(); /* type: _8633  */
    v8::String::AsciiValue label(args[2]->ToString()); /* type: _14808  */
    wxNode_wxPoint* pos = args[3]->IsNull() ? NULL : wxNodeObject::unwrap<wxNode_wxPoint>(args[3]->ToObject()); /* type: _20412  */
    wxNode_wxSize* size = args[4]->IsNull() ? NULL : wxNodeObject::unwrap<wxNode_wxSize>(args[4]->ToObject()); /* type: _20522  */
    long int style = (long int)args[5]->ToInt32()->Value(); /* type: _586  */
    v8::String::AsciiValue name(args[6]->ToString()); /* type: _14808  */
    

    wxNode_wxStaticText *self = new wxNode_wxStaticText(parent, id, *label, *pos, *size, style, *name);
    NodeExEvtHandlerImpl* evtHandler = dynamic_cast<NodeExEvtHandlerImpl*>(self);
    self->wrap(args.This(), self, evtHandler);
    return args.This();
  }
  
  /*
   * id: _33771
   */
  if(args.Length() == 6 && (args[0]->IsNull() || args[0]->IsObject()) && args[1]->IsNumber() && args[2]->IsString() && (args[3]->IsNull() || args[3]->IsObject()) && (args[4]->IsNull() || args[4]->IsObject()) && args[5]->IsNumber()) {
    wxNode_wxWindow* parent = args[0]->IsNull() ? NULL : wxNodeObject::unwrap<wxNode_wxWindow>(args[0]->ToObject()); /* type: _993 * */
    int id = (int)args[1]->ToInt32()->Value(); /* type: _8633  */
    v8::String::AsciiValue label(args[2]->ToString()); /* type: _14808  */
    wxNode_wxPoint* pos = args[3]->IsNull() ? NULL : wxNodeObject::unwrap<wxNode_wxPoint>(args[3]->ToObject()); /* type: _20412  */
    wxNode_wxSize* size = args[4]->IsNull() ? NULL : wxNodeObject::unwrap<wxNode_wxSize>(args[4]->ToObject()); /* type: _20522  */
    long int style = (long int)args[5]->ToInt32()->Value(); /* type: _586  */
    

    wxNode_wxStaticText *self = new wxNode_wxStaticText(parent, id, *label, *pos, *size, style);
    NodeExEvtHandlerImpl* evtHandler = dynamic_cast<NodeExEvtHandlerImpl*>(self);
    self->wrap(args.This(), self, evtHandler);
    return args.This();
  }
  
  /*
   * id: _33771
   */
  if(args.Length() == 5 && (args[0]->IsNull() || args[0]->IsObject()) && args[1]->IsNumber() && args[2]->IsString() && (args[3]->IsNull() || args[3]->IsObject()) && (args[4]->IsNull() || args[4]->IsObject())) {
    wxNode_wxWindow* parent = args[0]->IsNull() ? NULL : wxNodeObject::unwrap<wxNode_wxWindow>(args[0]->ToObject()); /* type: _993 * */
    int id = (int)args[1]->ToInt32()->Value(); /* type: _8633  */
    v8::String::AsciiValue label(args[2]->ToString()); /* type: _14808  */
    wxNode_wxPoint* pos = args[3]->IsNull() ? NULL : wxNodeObject::unwrap<wxNode_wxPoint>(args[3]->ToObject()); /* type: _20412  */
    wxNode_wxSize* size = args[4]->IsNull() ? NULL : wxNodeObject::unwrap<wxNode_wxSize>(args[4]->ToObject()); /* type: _20522  */
    

    wxNode_wxStaticText *self = new wxNode_wxStaticText(parent, id, *label, *pos, *size);
    NodeExEvtHandlerImpl* evtHandler = dynamic_cast<NodeExEvtHandlerImpl*>(self);
    self->wrap(args.This(), self, evtHandler);
    return args.This();
  }
  
  /*
   * id: _33771
   */
  if(args.Length() == 4 && (args[0]->IsNull() || args[0]->IsObject()) && args[1]->IsNumber() && args[2]->IsString() && (args[3]->IsNull() || args[3]->IsObject())) {
    wxNode_wxWindow* parent = args[0]->IsNull() ? NULL : wxNodeObject::unwrap<wxNode_wxWindow>(args[0]->ToObject()); /* type: _993 * */
    int id = (int)args[1]->ToInt32()->Value(); /* type: _8633  */
    v8::String::AsciiValue label(args[2]->ToString()); /* type: _14808  */
    wxNode_wxPoint* pos = args[3]->IsNull() ? NULL : wxNodeObject::unwrap<wxNode_wxPoint>(args[3]->ToObject()); /* type: _20412  */
    

    wxNode_wxStaticText *self = new wxNode_wxStaticText(parent, id, *label, *pos);
    NodeExEvtHandlerImpl* evtHandler = dynamic_cast<NodeExEvtHandlerImpl*>(self);
    self->wrap(args.This(), self, evtHandler);
    return args.This();
  }
  
  /*
   * id: _33771
   */
  if(args.Length() == 3 && (args[0]->IsNull() || args[0]->IsObject()) && args[1]->IsNumber() && args[2]->IsString()) {
    wxNode_wxWindow* parent = args[0]->IsNull() ? NULL : wxNodeObject::unwrap<wxNode_wxWindow>(args[0]->ToObject()); /* type: _993 * */
    int id = (int)args[1]->ToInt32()->Value(); /* type: _8633  */
    v8::String::AsciiValue label(args[2]->ToString()); /* type: _14808  */
    

    wxNode_wxStaticText *self = new wxNode_wxStaticText(parent, id, *label);
    NodeExEvtHandlerImpl* evtHandler = dynamic_cast<NodeExEvtHandlerImpl*>(self);
    self->wrap(args.This(), self, evtHandler);
    return args.This();
  }
  
  

  std::ostringstream errStr;
  errStr << "Could not find matching constructor for arguments (class name: wxStaticText).\n";                           \
  errStr << "  arg count: " << args.Length() << "\n";
  for(int i = 0; i < args.Length(); i++) {
    v8::String::AsciiValue argStr(args[i]);
    errStr << "  arg[" << i << "]: " << *argStr << "\n";
  }
  return v8::ThrowException(v8::Exception::TypeError(v8::String::New(errStr.str().c_str())));
}


/*static*/ v8::Handle<v8::Value> wxNode_wxStaticText::_Wrap(const v8::Arguments& args) {
  v8::HandleScope scope;
  wxNode_wxStaticText* self = unwrap<wxNode_wxStaticText>(args.This());

  
  /*
   * id: _50012
   */
  if(args.Length() == 1 && args[0]->IsNumber()) {
    int width = (int)args[0]->ToInt32()->Value(); /* type: _162  */
    

    self->Wrap(width);

    return v8::Undefined();
  }
  

  std::ostringstream errStr;
  errStr << "Could not find matching method for arguments (method name: Wrap).\n";                           \
  errStr << "  arg count: " << args.Length() << "\n";
  for(int i = 0; i < args.Length(); i++) {
    v8::String::AsciiValue argStr(args[i]);
    errStr << "  arg[" << i << "]: " << *argStr << "\n";
  }
  return v8::ThrowException(v8::Exception::TypeError(v8::String::New(errStr.str().c_str())));
}

/*static*/ v8::Handle<v8::Value> wxNode_wxStaticText::_AcceptsFocus(const v8::Arguments& args) {
  v8::HandleScope scope;
  wxNode_wxStaticText* self = unwrap<wxNode_wxStaticText>(args.This());

  
  /*
   * id: _50013
   */
  if(args.Length() == 0) {
    

    bool returnVal = self->AcceptsFocus();

    return scope.Close(v8::Boolean::New(returnVal));
  }
  

  std::ostringstream errStr;
  errStr << "Could not find matching method for arguments (method name: AcceptsFocus).\n";                           \
  errStr << "  arg count: " << args.Length() << "\n";
  for(int i = 0; i < args.Length(); i++) {
    v8::String::AsciiValue argStr(args[i]);
    errStr << "  arg[" << i << "]: " << *argStr << "\n";
  }
  return v8::ThrowException(v8::Exception::TypeError(v8::String::New(errStr.str().c_str())));
}

/*static*/ v8::Handle<v8::Value> wxNode_wxStaticText::_HasTransparentBackground(const v8::Arguments& args) {
  v8::HandleScope scope;
  wxNode_wxStaticText* self = unwrap<wxNode_wxStaticText>(args.This());

  
  /*
   * id: _50014
   */
  if(args.Length() == 0) {
    

    bool returnVal = self->HasTransparentBackground();

    return scope.Close(v8::Boolean::New(returnVal));
  }
  

  std::ostringstream errStr;
  errStr << "Could not find matching method for arguments (method name: HasTransparentBackground).\n";                           \
  errStr << "  arg count: " << args.Length() << "\n";
  for(int i = 0; i < args.Length(); i++) {
    v8::String::AsciiValue argStr(args[i]);
    errStr << "  arg[" << i << "]: " << *argStr << "\n";
  }
  return v8::ThrowException(v8::Exception::TypeError(v8::String::New(errStr.str().c_str())));
}

/*static*/ v8::Handle<v8::Value> wxNode_wxStaticText::_IsEllipsized(const v8::Arguments& args) {
  v8::HandleScope scope;
  wxNode_wxStaticText* self = unwrap<wxNode_wxStaticText>(args.This());

  
  /*
   * id: _50015
   */
  if(args.Length() == 0) {
    

    bool returnVal = self->IsEllipsized();

    return scope.Close(v8::Boolean::New(returnVal));
  }
  

  std::ostringstream errStr;
  errStr << "Could not find matching method for arguments (method name: IsEllipsized).\n";                           \
  errStr << "  arg count: " << args.Length() << "\n";
  for(int i = 0; i < args.Length(); i++) {
    v8::String::AsciiValue argStr(args[i]);
    errStr << "  arg[" << i << "]: " << *argStr << "\n";
  }
  return v8::ThrowException(v8::Exception::TypeError(v8::String::New(errStr.str().c_str())));
}
