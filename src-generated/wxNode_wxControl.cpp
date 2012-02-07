
#include <sstream>
#include "wxNode_wxControl.h"
#include "wxNode_wxEvtHandler.h"
#include "wxNode_wxWindow.h"
#include "wxNode_wxPoint.h"
#include "wxNode_wxSize.h"
#include "wxNode_wxValidator.h"
#include "wxNode_wxCommandEvent.h"
#include "wxNode_wxFont.h"
#include "wxNode_wxUpdateUIEvent.h"
#include "wxNode_wxDC.h"


/* static */ v8::Persistent<v8::FunctionTemplate> wxNode_wxControl::s_ct;



wxNode_wxControl::wxNode_wxControl()
  : wxControl()
{

}

wxNode_wxControl::wxNode_wxControl(wxNode_wxWindow* parent, int id, wxNode_wxPoint& pos, wxNode_wxSize& size, long int style, wxNode_wxValidator& validator, const wxString& name)
  : wxControl(parent, id, pos, size, style, validator, name)
{

}

wxNode_wxControl::wxNode_wxControl(wxNode_wxWindow* parent, int id, wxNode_wxPoint& pos, wxNode_wxSize& size, long int style, wxNode_wxValidator& validator)
  : wxControl(parent, id, pos, size, style, validator)
{

}

wxNode_wxControl::wxNode_wxControl(wxNode_wxWindow* parent, int id, wxNode_wxPoint& pos, wxNode_wxSize& size, long int style)
  : wxControl(parent, id, pos, size, style)
{

}

wxNode_wxControl::wxNode_wxControl(wxNode_wxWindow* parent, int id, wxNode_wxPoint& pos, wxNode_wxSize& size)
  : wxControl(parent, id, pos, size)
{

}

wxNode_wxControl::wxNode_wxControl(wxNode_wxWindow* parent, int id, wxNode_wxPoint& pos)
  : wxControl(parent, id, pos)
{

}

wxNode_wxControl::wxNode_wxControl(wxNode_wxWindow* parent, int id)
  : wxControl(parent, id)
{

}




/*static*/ void wxNode_wxControl::Init(v8::Handle<v8::Object> target) {
  v8::HandleScope scope;

  v8::Local<v8::FunctionTemplate> t = v8::FunctionTemplate::New(wxNodeObject::NewFunc);
  s_ct = v8::Persistent<v8::FunctionTemplate>::New(t);
  s_ct->InstanceTemplate()->SetInternalFieldCount(2);
  s_ct->SetClassName(v8::String::NewSymbol("wxControl"));

  NODE_SET_PROTOTYPE_METHOD(s_ct, "init", _init);
  AddMethods(s_ct);

  target->Set(v8::String::NewSymbol("wxControl"), s_ct->GetFunction());
}

/*static*/ void wxNode_wxControl::AddMethods(v8::Handle<v8::FunctionTemplate> target) {
  wxNode_wxWindow::AddMethods(target);
  NODE_SET_PROTOTYPE_METHOD(target, "create", _Create);
  NODE_SET_PROTOTYPE_METHOD(target, "getAlignment", _GetAlignment);
  NODE_SET_PROTOTYPE_METHOD(target, "setLabel", _SetLabel);
  NODE_SET_PROTOTYPE_METHOD(target, "getLabel", _GetLabel);
  NODE_SET_PROTOTYPE_METHOD(target, "setLabelText", _SetLabelText);
  NODE_SET_PROTOTYPE_METHOD(target, "getLabelText", _GetLabelText);
  NODE_SET_PROTOTYPE_METHOD(target, "setLabelMarkup", _SetLabelMarkup);
  NODE_SET_PROTOTYPE_METHOD(target, "shouldInheritColours", _ShouldInheritColours);
  NODE_SET_PROTOTYPE_METHOD(target, "command", _Command);
  NODE_SET_PROTOTYPE_METHOD(target, "setFont", _SetFont);
  NODE_SET_PROTOTYPE_METHOD(target, "doUpdateWindowUI", _DoUpdateWindowUI);
  NODE_SET_PROTOTYPE_METHOD(target, "removeMnemonics", _RemoveMnemonics);
  NODE_SET_PROTOTYPE_METHOD(target, "escapeMnemonics", _EscapeMnemonics);
  NODE_SET_PROTOTYPE_METHOD(target, "ellipsize", _Ellipsize);
  NODE_SET_PROTOTYPE_METHOD(target, "findAccelIndex", _FindAccelIndex);
  NODE_SET_PROTOTYPE_METHOD(target, "getCompositeControlsDefaultAttributes", _GetCompositeControlsDefaultAttributes);
  
}

/*static*/ v8::Handle<v8::Value> wxNode_wxControl::_init(const v8::Arguments& args) {
  v8::HandleScope scope;

  
  
  /*
   * id: _37273
   */
  if(args.Length() == 0) {
    

    wxNode_wxControl *self = new wxNode_wxControl();
    NodeExEvtHandlerImpl* evtHandler = dynamic_cast<NodeExEvtHandlerImpl*>(self);
    self->wrap(args.This(), self, evtHandler);
    return args.This();
  }
  
  /*
   * id: _37274
   */
  if(args.Length() == 7 && (args[0]->IsNull() || args[0]->IsObject()) && args[1]->IsNumber() && (args[2]->IsNull() || args[2]->IsObject()) && (args[3]->IsNull() || args[3]->IsObject()) && args[4]->IsNumber() && (args[5]->IsNull() || args[5]->IsObject()) && args[6]->IsString()) {
    wxNode_wxWindow* parent = args[0]->IsNull() ? NULL : wxNodeObject::unwrap<wxNode_wxWindow>(args[0]->ToObject()); /* type: _993 * */
    int id = (int)args[1]->ToInt32()->Value(); /* type: _8633  */
    wxNode_wxPoint* pos = args[2]->IsNull() ? NULL : wxNodeObject::unwrap<wxNode_wxPoint>(args[2]->ToObject()); /* type: _20412  */
    wxNode_wxSize* size = args[3]->IsNull() ? NULL : wxNodeObject::unwrap<wxNode_wxSize>(args[3]->ToObject()); /* type: _20522  */
    long int style = (long int)args[4]->ToInt32()->Value(); /* type: _586  */
    wxNode_wxValidator* validator = args[5]->IsNull() ? NULL : wxNodeObject::unwrap<wxNode_wxValidator>(args[5]->ToObject()); /* type: _59059  */
    v8::String::AsciiValue name(args[6]->ToString()); /* type: _14808  */
    

    wxNode_wxControl *self = new wxNode_wxControl(parent, id, *pos, *size, style, *validator, *name);
    NodeExEvtHandlerImpl* evtHandler = dynamic_cast<NodeExEvtHandlerImpl*>(self);
    self->wrap(args.This(), self, evtHandler);
    return args.This();
  }
  
  /*
   * id: _37274
   */
  if(args.Length() == 6 && (args[0]->IsNull() || args[0]->IsObject()) && args[1]->IsNumber() && (args[2]->IsNull() || args[2]->IsObject()) && (args[3]->IsNull() || args[3]->IsObject()) && args[4]->IsNumber() && (args[5]->IsNull() || args[5]->IsObject())) {
    wxNode_wxWindow* parent = args[0]->IsNull() ? NULL : wxNodeObject::unwrap<wxNode_wxWindow>(args[0]->ToObject()); /* type: _993 * */
    int id = (int)args[1]->ToInt32()->Value(); /* type: _8633  */
    wxNode_wxPoint* pos = args[2]->IsNull() ? NULL : wxNodeObject::unwrap<wxNode_wxPoint>(args[2]->ToObject()); /* type: _20412  */
    wxNode_wxSize* size = args[3]->IsNull() ? NULL : wxNodeObject::unwrap<wxNode_wxSize>(args[3]->ToObject()); /* type: _20522  */
    long int style = (long int)args[4]->ToInt32()->Value(); /* type: _586  */
    wxNode_wxValidator* validator = args[5]->IsNull() ? NULL : wxNodeObject::unwrap<wxNode_wxValidator>(args[5]->ToObject()); /* type: _59059  */
    

    wxNode_wxControl *self = new wxNode_wxControl(parent, id, *pos, *size, style, *validator);
    NodeExEvtHandlerImpl* evtHandler = dynamic_cast<NodeExEvtHandlerImpl*>(self);
    self->wrap(args.This(), self, evtHandler);
    return args.This();
  }
  
  /*
   * id: _37274
   */
  if(args.Length() == 5 && (args[0]->IsNull() || args[0]->IsObject()) && args[1]->IsNumber() && (args[2]->IsNull() || args[2]->IsObject()) && (args[3]->IsNull() || args[3]->IsObject()) && args[4]->IsNumber()) {
    wxNode_wxWindow* parent = args[0]->IsNull() ? NULL : wxNodeObject::unwrap<wxNode_wxWindow>(args[0]->ToObject()); /* type: _993 * */
    int id = (int)args[1]->ToInt32()->Value(); /* type: _8633  */
    wxNode_wxPoint* pos = args[2]->IsNull() ? NULL : wxNodeObject::unwrap<wxNode_wxPoint>(args[2]->ToObject()); /* type: _20412  */
    wxNode_wxSize* size = args[3]->IsNull() ? NULL : wxNodeObject::unwrap<wxNode_wxSize>(args[3]->ToObject()); /* type: _20522  */
    long int style = (long int)args[4]->ToInt32()->Value(); /* type: _586  */
    

    wxNode_wxControl *self = new wxNode_wxControl(parent, id, *pos, *size, style);
    NodeExEvtHandlerImpl* evtHandler = dynamic_cast<NodeExEvtHandlerImpl*>(self);
    self->wrap(args.This(), self, evtHandler);
    return args.This();
  }
  
  /*
   * id: _37274
   */
  if(args.Length() == 4 && (args[0]->IsNull() || args[0]->IsObject()) && args[1]->IsNumber() && (args[2]->IsNull() || args[2]->IsObject()) && (args[3]->IsNull() || args[3]->IsObject())) {
    wxNode_wxWindow* parent = args[0]->IsNull() ? NULL : wxNodeObject::unwrap<wxNode_wxWindow>(args[0]->ToObject()); /* type: _993 * */
    int id = (int)args[1]->ToInt32()->Value(); /* type: _8633  */
    wxNode_wxPoint* pos = args[2]->IsNull() ? NULL : wxNodeObject::unwrap<wxNode_wxPoint>(args[2]->ToObject()); /* type: _20412  */
    wxNode_wxSize* size = args[3]->IsNull() ? NULL : wxNodeObject::unwrap<wxNode_wxSize>(args[3]->ToObject()); /* type: _20522  */
    

    wxNode_wxControl *self = new wxNode_wxControl(parent, id, *pos, *size);
    NodeExEvtHandlerImpl* evtHandler = dynamic_cast<NodeExEvtHandlerImpl*>(self);
    self->wrap(args.This(), self, evtHandler);
    return args.This();
  }
  
  /*
   * id: _37274
   */
  if(args.Length() == 3 && (args[0]->IsNull() || args[0]->IsObject()) && args[1]->IsNumber() && (args[2]->IsNull() || args[2]->IsObject())) {
    wxNode_wxWindow* parent = args[0]->IsNull() ? NULL : wxNodeObject::unwrap<wxNode_wxWindow>(args[0]->ToObject()); /* type: _993 * */
    int id = (int)args[1]->ToInt32()->Value(); /* type: _8633  */
    wxNode_wxPoint* pos = args[2]->IsNull() ? NULL : wxNodeObject::unwrap<wxNode_wxPoint>(args[2]->ToObject()); /* type: _20412  */
    

    wxNode_wxControl *self = new wxNode_wxControl(parent, id, *pos);
    NodeExEvtHandlerImpl* evtHandler = dynamic_cast<NodeExEvtHandlerImpl*>(self);
    self->wrap(args.This(), self, evtHandler);
    return args.This();
  }
  
  /*
   * id: _37274
   */
  if(args.Length() == 2 && (args[0]->IsNull() || args[0]->IsObject()) && args[1]->IsNumber()) {
    wxNode_wxWindow* parent = args[0]->IsNull() ? NULL : wxNodeObject::unwrap<wxNode_wxWindow>(args[0]->ToObject()); /* type: _993 * */
    int id = (int)args[1]->ToInt32()->Value(); /* type: _8633  */
    

    wxNode_wxControl *self = new wxNode_wxControl(parent, id);
    NodeExEvtHandlerImpl* evtHandler = dynamic_cast<NodeExEvtHandlerImpl*>(self);
    self->wrap(args.This(), self, evtHandler);
    return args.This();
  }
  
  

  std::ostringstream errStr;
  errStr << "Could not find matching constructor for arguments (class name: wxControl).\n";                           \
  errStr << "  arg count: " << args.Length() << "\n";
  for(int i = 0; i < args.Length(); i++) {
    v8::String::AsciiValue argStr(args[i]);
    errStr << "  arg[" << i << "]: " << *argStr << "\n";
  }
  return v8::ThrowException(v8::Exception::TypeError(v8::String::New(errStr.str().c_str())));
}


/*static*/ v8::Handle<v8::Value> wxNode_wxControl::_Create(const v8::Arguments& args) {
  v8::HandleScope scope;
  wxNode_wxControl* self = unwrap<wxNode_wxControl>(args.This());

  
  /*
   * id: _54385
   */
  if(args.Length() == 7 && (args[0]->IsNull() || args[0]->IsObject()) && args[1]->IsNumber() && (args[2]->IsNull() || args[2]->IsObject()) && (args[3]->IsNull() || args[3]->IsObject()) && args[4]->IsNumber() && (args[5]->IsNull() || args[5]->IsObject()) && args[6]->IsString()) {
    wxNode_wxWindow* parent = args[0]->IsNull() ? NULL : wxNodeObject::unwrap<wxNode_wxWindow>(args[0]->ToObject()); /* type: _993 * */
    int id = (int)args[1]->ToInt32()->Value(); /* type: _8633  */
    wxNode_wxPoint* pos = args[2]->IsNull() ? NULL : wxNodeObject::unwrap<wxNode_wxPoint>(args[2]->ToObject()); /* type: _20412  */
    wxNode_wxSize* size = args[3]->IsNull() ? NULL : wxNodeObject::unwrap<wxNode_wxSize>(args[3]->ToObject()); /* type: _20522  */
    long int style = (long int)args[4]->ToInt32()->Value(); /* type: _586  */
    wxNode_wxValidator* validator = args[5]->IsNull() ? NULL : wxNodeObject::unwrap<wxNode_wxValidator>(args[5]->ToObject()); /* type: _59059  */
    v8::String::AsciiValue name(args[6]->ToString()); /* type: _14808  */
    

    self->Create(parent, id, *pos, *size, style, *validator, *name);

    return v8::Undefined();
  }
  
  /*
   * id: _54385
   */
  if(args.Length() == 6 && (args[0]->IsNull() || args[0]->IsObject()) && args[1]->IsNumber() && (args[2]->IsNull() || args[2]->IsObject()) && (args[3]->IsNull() || args[3]->IsObject()) && args[4]->IsNumber() && (args[5]->IsNull() || args[5]->IsObject())) {
    wxNode_wxWindow* parent = args[0]->IsNull() ? NULL : wxNodeObject::unwrap<wxNode_wxWindow>(args[0]->ToObject()); /* type: _993 * */
    int id = (int)args[1]->ToInt32()->Value(); /* type: _8633  */
    wxNode_wxPoint* pos = args[2]->IsNull() ? NULL : wxNodeObject::unwrap<wxNode_wxPoint>(args[2]->ToObject()); /* type: _20412  */
    wxNode_wxSize* size = args[3]->IsNull() ? NULL : wxNodeObject::unwrap<wxNode_wxSize>(args[3]->ToObject()); /* type: _20522  */
    long int style = (long int)args[4]->ToInt32()->Value(); /* type: _586  */
    wxNode_wxValidator* validator = args[5]->IsNull() ? NULL : wxNodeObject::unwrap<wxNode_wxValidator>(args[5]->ToObject()); /* type: _59059  */
    

    self->Create(parent, id, *pos, *size, style, *validator);

    return v8::Undefined();
  }
  
  /*
   * id: _54385
   */
  if(args.Length() == 5 && (args[0]->IsNull() || args[0]->IsObject()) && args[1]->IsNumber() && (args[2]->IsNull() || args[2]->IsObject()) && (args[3]->IsNull() || args[3]->IsObject()) && args[4]->IsNumber()) {
    wxNode_wxWindow* parent = args[0]->IsNull() ? NULL : wxNodeObject::unwrap<wxNode_wxWindow>(args[0]->ToObject()); /* type: _993 * */
    int id = (int)args[1]->ToInt32()->Value(); /* type: _8633  */
    wxNode_wxPoint* pos = args[2]->IsNull() ? NULL : wxNodeObject::unwrap<wxNode_wxPoint>(args[2]->ToObject()); /* type: _20412  */
    wxNode_wxSize* size = args[3]->IsNull() ? NULL : wxNodeObject::unwrap<wxNode_wxSize>(args[3]->ToObject()); /* type: _20522  */
    long int style = (long int)args[4]->ToInt32()->Value(); /* type: _586  */
    

    self->Create(parent, id, *pos, *size, style);

    return v8::Undefined();
  }
  
  /*
   * id: _54385
   */
  if(args.Length() == 4 && (args[0]->IsNull() || args[0]->IsObject()) && args[1]->IsNumber() && (args[2]->IsNull() || args[2]->IsObject()) && (args[3]->IsNull() || args[3]->IsObject())) {
    wxNode_wxWindow* parent = args[0]->IsNull() ? NULL : wxNodeObject::unwrap<wxNode_wxWindow>(args[0]->ToObject()); /* type: _993 * */
    int id = (int)args[1]->ToInt32()->Value(); /* type: _8633  */
    wxNode_wxPoint* pos = args[2]->IsNull() ? NULL : wxNodeObject::unwrap<wxNode_wxPoint>(args[2]->ToObject()); /* type: _20412  */
    wxNode_wxSize* size = args[3]->IsNull() ? NULL : wxNodeObject::unwrap<wxNode_wxSize>(args[3]->ToObject()); /* type: _20522  */
    

    self->Create(parent, id, *pos, *size);

    return v8::Undefined();
  }
  
  /*
   * id: _54385
   */
  if(args.Length() == 3 && (args[0]->IsNull() || args[0]->IsObject()) && args[1]->IsNumber() && (args[2]->IsNull() || args[2]->IsObject())) {
    wxNode_wxWindow* parent = args[0]->IsNull() ? NULL : wxNodeObject::unwrap<wxNode_wxWindow>(args[0]->ToObject()); /* type: _993 * */
    int id = (int)args[1]->ToInt32()->Value(); /* type: _8633  */
    wxNode_wxPoint* pos = args[2]->IsNull() ? NULL : wxNodeObject::unwrap<wxNode_wxPoint>(args[2]->ToObject()); /* type: _20412  */
    

    self->Create(parent, id, *pos);

    return v8::Undefined();
  }
  
  /*
   * id: _54385
   */
  if(args.Length() == 2 && (args[0]->IsNull() || args[0]->IsObject()) && args[1]->IsNumber()) {
    wxNode_wxWindow* parent = args[0]->IsNull() ? NULL : wxNodeObject::unwrap<wxNode_wxWindow>(args[0]->ToObject()); /* type: _993 * */
    int id = (int)args[1]->ToInt32()->Value(); /* type: _8633  */
    

    self->Create(parent, id);

    return v8::Undefined();
  }
  

  std::ostringstream errStr;
  errStr << "Could not find matching method for arguments (method name: Create).\n";                           \
  errStr << "  arg count: " << args.Length() << "\n";
  for(int i = 0; i < args.Length(); i++) {
    v8::String::AsciiValue argStr(args[i]);
    errStr << "  arg[" << i << "]: " << *argStr << "\n";
  }
  return v8::ThrowException(v8::Exception::TypeError(v8::String::New(errStr.str().c_str())));
}

/*static*/ v8::Handle<v8::Value> wxNode_wxControl::_GetAlignment(const v8::Arguments& args) {
  v8::HandleScope scope;
  wxNode_wxControl* self = unwrap<wxNode_wxControl>(args.This());

  
  /*
   * id: _54386
   */
  if(args.Length() == 0) {
    

    self->GetAlignment();

    return v8::Undefined();
  }
  

  std::ostringstream errStr;
  errStr << "Could not find matching method for arguments (method name: GetAlignment).\n";                           \
  errStr << "  arg count: " << args.Length() << "\n";
  for(int i = 0; i < args.Length(); i++) {
    v8::String::AsciiValue argStr(args[i]);
    errStr << "  arg[" << i << "]: " << *argStr << "\n";
  }
  return v8::ThrowException(v8::Exception::TypeError(v8::String::New(errStr.str().c_str())));
}

/*static*/ v8::Handle<v8::Value> wxNode_wxControl::_SetLabel(const v8::Arguments& args) {
  v8::HandleScope scope;
  wxNode_wxControl* self = unwrap<wxNode_wxControl>(args.This());

  
  /*
   * id: _54387
   */
  if(args.Length() == 1 && args[0]->IsString()) {
    v8::String::AsciiValue label(args[0]->ToString()); /* type: _14808  */
    

    self->SetLabel(*label);

    return v8::Undefined();
  }
  

  std::ostringstream errStr;
  errStr << "Could not find matching method for arguments (method name: SetLabel).\n";                           \
  errStr << "  arg count: " << args.Length() << "\n";
  for(int i = 0; i < args.Length(); i++) {
    v8::String::AsciiValue argStr(args[i]);
    errStr << "  arg[" << i << "]: " << *argStr << "\n";
  }
  return v8::ThrowException(v8::Exception::TypeError(v8::String::New(errStr.str().c_str())));
}

/*static*/ v8::Handle<v8::Value> wxNode_wxControl::_GetLabel(const v8::Arguments& args) {
  v8::HandleScope scope;
  wxNode_wxControl* self = unwrap<wxNode_wxControl>(args.This());

  
  /*
   * id: _54388
   */
  if(args.Length() == 0) {
    

    self->GetLabel();

    return v8::Undefined();
  }
  

  std::ostringstream errStr;
  errStr << "Could not find matching method for arguments (method name: GetLabel).\n";                           \
  errStr << "  arg count: " << args.Length() << "\n";
  for(int i = 0; i < args.Length(); i++) {
    v8::String::AsciiValue argStr(args[i]);
    errStr << "  arg[" << i << "]: " << *argStr << "\n";
  }
  return v8::ThrowException(v8::Exception::TypeError(v8::String::New(errStr.str().c_str())));
}

/*static*/ v8::Handle<v8::Value> wxNode_wxControl::_SetLabelText(const v8::Arguments& args) {
  v8::HandleScope scope;
  wxNode_wxControl* self = unwrap<wxNode_wxControl>(args.This());

  
  /*
   * id: _54389
   */
  if(args.Length() == 1 && args[0]->IsString()) {
    v8::String::AsciiValue text(args[0]->ToString()); /* type: _14808  */
    

    self->SetLabelText(*text);

    return v8::Undefined();
  }
  

  std::ostringstream errStr;
  errStr << "Could not find matching method for arguments (method name: SetLabelText).\n";                           \
  errStr << "  arg count: " << args.Length() << "\n";
  for(int i = 0; i < args.Length(); i++) {
    v8::String::AsciiValue argStr(args[i]);
    errStr << "  arg[" << i << "]: " << *argStr << "\n";
  }
  return v8::ThrowException(v8::Exception::TypeError(v8::String::New(errStr.str().c_str())));
}

/*static*/ v8::Handle<v8::Value> wxNode_wxControl::_GetLabelText(const v8::Arguments& args) {
  v8::HandleScope scope;
  wxNode_wxControl* self = unwrap<wxNode_wxControl>(args.This());

  
  /*
   * id: _54390
   */
  if(args.Length() == 0) {
    

    self->GetLabelText();

    return v8::Undefined();
  }
  
  /*
   * id: _54396
   */
  if(args.Length() == 1 && args[0]->IsString()) {
    v8::String::AsciiValue label(args[0]->ToString()); /* type: _14808  */
    

    self->GetLabelText(*label);

    return v8::Undefined();
  }
  

  std::ostringstream errStr;
  errStr << "Could not find matching method for arguments (method name: GetLabelText).\n";                           \
  errStr << "  arg count: " << args.Length() << "\n";
  for(int i = 0; i < args.Length(); i++) {
    v8::String::AsciiValue argStr(args[i]);
    errStr << "  arg[" << i << "]: " << *argStr << "\n";
  }
  return v8::ThrowException(v8::Exception::TypeError(v8::String::New(errStr.str().c_str())));
}

/*static*/ v8::Handle<v8::Value> wxNode_wxControl::_SetLabelMarkup(const v8::Arguments& args) {
  v8::HandleScope scope;
  wxNode_wxControl* self = unwrap<wxNode_wxControl>(args.This());

  
  /*
   * id: _54391
   */
  if(args.Length() == 1 && args[0]->IsString()) {
    v8::String::AsciiValue markup(args[0]->ToString()); /* type: _14808  */
    

    self->SetLabelMarkup(*markup);

    return v8::Undefined();
  }
  

  std::ostringstream errStr;
  errStr << "Could not find matching method for arguments (method name: SetLabelMarkup).\n";                           \
  errStr << "  arg count: " << args.Length() << "\n";
  for(int i = 0; i < args.Length(); i++) {
    v8::String::AsciiValue argStr(args[i]);
    errStr << "  arg[" << i << "]: " << *argStr << "\n";
  }
  return v8::ThrowException(v8::Exception::TypeError(v8::String::New(errStr.str().c_str())));
}

/*static*/ v8::Handle<v8::Value> wxNode_wxControl::_ShouldInheritColours(const v8::Arguments& args) {
  v8::HandleScope scope;
  wxNode_wxControl* self = unwrap<wxNode_wxControl>(args.This());

  
  /*
   * id: _54392
   */
  if(args.Length() == 0) {
    

    self->ShouldInheritColours();

    return v8::Undefined();
  }
  

  std::ostringstream errStr;
  errStr << "Could not find matching method for arguments (method name: ShouldInheritColours).\n";                           \
  errStr << "  arg count: " << args.Length() << "\n";
  for(int i = 0; i < args.Length(); i++) {
    v8::String::AsciiValue argStr(args[i]);
    errStr << "  arg[" << i << "]: " << *argStr << "\n";
  }
  return v8::ThrowException(v8::Exception::TypeError(v8::String::New(errStr.str().c_str())));
}

/*static*/ v8::Handle<v8::Value> wxNode_wxControl::_Command(const v8::Arguments& args) {
  v8::HandleScope scope;
  wxNode_wxControl* self = unwrap<wxNode_wxControl>(args.This());

  
  /*
   * id: _54393
   */
  if(args.Length() == 1 && (args[0]->IsNull() || args[0]->IsObject())) {
    wxNode_wxCommandEvent* event = args[0]->IsNull() ? NULL : wxNodeObject::unwrap<wxNode_wxCommandEvent>(args[0]->ToObject()); /* type: _58740  */
    

    self->Command(*event);

    return v8::Undefined();
  }
  

  std::ostringstream errStr;
  errStr << "Could not find matching method for arguments (method name: Command).\n";                           \
  errStr << "  arg count: " << args.Length() << "\n";
  for(int i = 0; i < args.Length(); i++) {
    v8::String::AsciiValue argStr(args[i]);
    errStr << "  arg[" << i << "]: " << *argStr << "\n";
  }
  return v8::ThrowException(v8::Exception::TypeError(v8::String::New(errStr.str().c_str())));
}

/*static*/ v8::Handle<v8::Value> wxNode_wxControl::_SetFont(const v8::Arguments& args) {
  v8::HandleScope scope;
  wxNode_wxControl* self = unwrap<wxNode_wxControl>(args.This());

  
  /*
   * id: _54394
   */
  if(args.Length() == 1 && (args[0]->IsNull() || args[0]->IsObject())) {
    wxNode_wxFont* font = args[0]->IsNull() ? NULL : wxNodeObject::unwrap<wxNode_wxFont>(args[0]->ToObject()); /* type: _33020  */
    

    self->SetFont(*font);

    return v8::Undefined();
  }
  

  std::ostringstream errStr;
  errStr << "Could not find matching method for arguments (method name: SetFont).\n";                           \
  errStr << "  arg count: " << args.Length() << "\n";
  for(int i = 0; i < args.Length(); i++) {
    v8::String::AsciiValue argStr(args[i]);
    errStr << "  arg[" << i << "]: " << *argStr << "\n";
  }
  return v8::ThrowException(v8::Exception::TypeError(v8::String::New(errStr.str().c_str())));
}

/*static*/ v8::Handle<v8::Value> wxNode_wxControl::_DoUpdateWindowUI(const v8::Arguments& args) {
  v8::HandleScope scope;
  wxNode_wxControl* self = unwrap<wxNode_wxControl>(args.This());

  
  /*
   * id: _54395
   */
  if(args.Length() == 1 && (args[0]->IsNull() || args[0]->IsObject())) {
    wxNode_wxUpdateUIEvent* event = args[0]->IsNull() ? NULL : wxNodeObject::unwrap<wxNode_wxUpdateUIEvent>(args[0]->ToObject()); /* type: _59566  */
    

    self->DoUpdateWindowUI(*event);

    return v8::Undefined();
  }
  

  std::ostringstream errStr;
  errStr << "Could not find matching method for arguments (method name: DoUpdateWindowUI).\n";                           \
  errStr << "  arg count: " << args.Length() << "\n";
  for(int i = 0; i < args.Length(); i++) {
    v8::String::AsciiValue argStr(args[i]);
    errStr << "  arg[" << i << "]: " << *argStr << "\n";
  }
  return v8::ThrowException(v8::Exception::TypeError(v8::String::New(errStr.str().c_str())));
}

/*static*/ v8::Handle<v8::Value> wxNode_wxControl::_RemoveMnemonics(const v8::Arguments& args) {
  v8::HandleScope scope;
  wxNode_wxControl* self = unwrap<wxNode_wxControl>(args.This());

  
  /*
   * id: _54397
   */
  if(args.Length() == 1 && args[0]->IsString()) {
    v8::String::AsciiValue str(args[0]->ToString()); /* type: _14808  */
    

    self->RemoveMnemonics(*str);

    return v8::Undefined();
  }
  

  std::ostringstream errStr;
  errStr << "Could not find matching method for arguments (method name: RemoveMnemonics).\n";                           \
  errStr << "  arg count: " << args.Length() << "\n";
  for(int i = 0; i < args.Length(); i++) {
    v8::String::AsciiValue argStr(args[i]);
    errStr << "  arg[" << i << "]: " << *argStr << "\n";
  }
  return v8::ThrowException(v8::Exception::TypeError(v8::String::New(errStr.str().c_str())));
}

/*static*/ v8::Handle<v8::Value> wxNode_wxControl::_EscapeMnemonics(const v8::Arguments& args) {
  v8::HandleScope scope;
  wxNode_wxControl* self = unwrap<wxNode_wxControl>(args.This());

  
  /*
   * id: _54398
   */
  if(args.Length() == 1 && args[0]->IsString()) {
    v8::String::AsciiValue str(args[0]->ToString()); /* type: _14808  */
    

    self->EscapeMnemonics(*str);

    return v8::Undefined();
  }
  

  std::ostringstream errStr;
  errStr << "Could not find matching method for arguments (method name: EscapeMnemonics).\n";                           \
  errStr << "  arg count: " << args.Length() << "\n";
  for(int i = 0; i < args.Length(); i++) {
    v8::String::AsciiValue argStr(args[i]);
    errStr << "  arg[" << i << "]: " << *argStr << "\n";
  }
  return v8::ThrowException(v8::Exception::TypeError(v8::String::New(errStr.str().c_str())));
}

/*static*/ v8::Handle<v8::Value> wxNode_wxControl::_Ellipsize(const v8::Arguments& args) {
  v8::HandleScope scope;
  wxNode_wxControl* self = unwrap<wxNode_wxControl>(args.This());

  
  /*
   * id: _54399
   */
  if(args.Length() == 5 && args[0]->IsString() && (args[1]->IsNull() || args[1]->IsObject()) && args[2]->IsNumber() && args[3]->IsNumber() && args[4]->IsNumber()) {
    v8::String::AsciiValue label(args[0]->ToString()); /* type: _14808  */
    wxNode_wxDC* dc = args[1]->IsNull() ? NULL : wxNodeObject::unwrap<wxNode_wxDC>(args[1]->ToObject()); /* type: _58921  */
    wxEllipsizeMode mode; /* type: _178  */
    int maxWidth = (int)args[3]->ToInt32()->Value(); /* type: _162  */
    int flags = (int)args[4]->ToInt32()->Value(); /* type: _162  */
    

    self->Ellipsize(*label, *dc, mode, maxWidth, flags);

    return v8::Undefined();
  }
  
  /*
   * id: _54399
   */
  if(args.Length() == 4 && args[0]->IsString() && (args[1]->IsNull() || args[1]->IsObject()) && args[2]->IsNumber() && args[3]->IsNumber()) {
    v8::String::AsciiValue label(args[0]->ToString()); /* type: _14808  */
    wxNode_wxDC* dc = args[1]->IsNull() ? NULL : wxNodeObject::unwrap<wxNode_wxDC>(args[1]->ToObject()); /* type: _58921  */
    wxEllipsizeMode mode; /* type: _178  */
    int maxWidth = (int)args[3]->ToInt32()->Value(); /* type: _162  */
    

    self->Ellipsize(*label, *dc, mode, maxWidth);

    return v8::Undefined();
  }
  

  std::ostringstream errStr;
  errStr << "Could not find matching method for arguments (method name: Ellipsize).\n";                           \
  errStr << "  arg count: " << args.Length() << "\n";
  for(int i = 0; i < args.Length(); i++) {
    v8::String::AsciiValue argStr(args[i]);
    errStr << "  arg[" << i << "]: " << *argStr << "\n";
  }
  return v8::ThrowException(v8::Exception::TypeError(v8::String::New(errStr.str().c_str())));
}

/*static*/ v8::Handle<v8::Value> wxNode_wxControl::_FindAccelIndex(const v8::Arguments& args) {
  v8::HandleScope scope;
  wxNode_wxControl* self = unwrap<wxNode_wxControl>(args.This());

  
  /*
   * id: _54400
   */
  if(args.Length() == 2 && args[0]->IsString() && args[1]->IsString()) {
    v8::String::AsciiValue label(args[0]->ToString()); /* type: _14808  */
    wxString* labelOnly; /* type: _23919 * */
    

    self->FindAccelIndex(*label, labelOnly);

    return v8::Undefined();
  }
  
  /*
   * id: _54400
   */
  if(args.Length() == 1 && args[0]->IsString()) {
    v8::String::AsciiValue label(args[0]->ToString()); /* type: _14808  */
    

    self->FindAccelIndex(*label);

    return v8::Undefined();
  }
  

  std::ostringstream errStr;
  errStr << "Could not find matching method for arguments (method name: FindAccelIndex).\n";                           \
  errStr << "  arg count: " << args.Length() << "\n";
  for(int i = 0; i < args.Length(); i++) {
    v8::String::AsciiValue argStr(args[i]);
    errStr << "  arg[" << i << "]: " << *argStr << "\n";
  }
  return v8::ThrowException(v8::Exception::TypeError(v8::String::New(errStr.str().c_str())));
}

/*static*/ v8::Handle<v8::Value> wxNode_wxControl::_GetCompositeControlsDefaultAttributes(const v8::Arguments& args) {
  v8::HandleScope scope;
  wxNode_wxControl* self = unwrap<wxNode_wxControl>(args.This());

  
  /*
   * id: _54401
   */
  if(args.Length() == 1 && args[0]->IsNumber()) {
    wxWindowVariant variant; /* type: _10472  */
    

    self->GetCompositeControlsDefaultAttributes(variant);

    return v8::Undefined();
  }
  

  std::ostringstream errStr;
  errStr << "Could not find matching method for arguments (method name: GetCompositeControlsDefaultAttributes).\n";                           \
  errStr << "  arg count: " << args.Length() << "\n";
  for(int i = 0; i < args.Length(); i++) {
    v8::String::AsciiValue argStr(args[i]);
    errStr << "  arg[" << i << "]: " << *argStr << "\n";
  }
  return v8::ThrowException(v8::Exception::TypeError(v8::String::New(errStr.str().c_str())));
}

