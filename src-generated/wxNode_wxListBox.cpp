
#include <sstream>
#include "wxNode_wxListBox.h"
#include "wxNode_wxEvtHandler.h"
#include "wxNode_wxControlWithItems.h"
#include "wxNode_wxWindow.h"
#include "wxNode_wxPoint.h"
#include "wxNode_wxSize.h"
#include "wxNode_wxValidator.h"
#include "wxNode_wxArrayString.h"
#include "wxNode_wxArrayInt.h"
#include "wxNode_wxCommandEvent.h"


/* static */ v8::Persistent<v8::FunctionTemplate> wxNode_wxListBox::s_ct;



wxNode_wxListBox::wxNode_wxListBox()
  : wxListBox()
{

}

wxNode_wxListBox::wxNode_wxListBox(wxNode_wxWindow* parent, int id, wxNode_wxPoint& pos, wxNode_wxSize& size, int n, const wxString* choices, long int style, wxNode_wxValidator& validator, const wxString& name)
  : wxListBox(parent, id, pos, size, n, choices, style, validator, name)
{

}

wxNode_wxListBox::wxNode_wxListBox(wxNode_wxWindow* parent, int id, wxNode_wxPoint& pos, wxNode_wxSize& size, int n, const wxString* choices, long int style, wxNode_wxValidator& validator)
  : wxListBox(parent, id, pos, size, n, choices, style, validator)
{

}

wxNode_wxListBox::wxNode_wxListBox(wxNode_wxWindow* parent, int id, wxNode_wxPoint& pos, wxNode_wxSize& size, int n, const wxString* choices, long int style)
  : wxListBox(parent, id, pos, size, n, choices, style)
{

}

wxNode_wxListBox::wxNode_wxListBox(wxNode_wxWindow* parent, int id, wxNode_wxPoint& pos, wxNode_wxSize& size, int n, const wxString* choices)
  : wxListBox(parent, id, pos, size, n, choices)
{

}

wxNode_wxListBox::wxNode_wxListBox(wxNode_wxWindow* parent, int id, wxNode_wxPoint& pos, wxNode_wxSize& size, int n)
  : wxListBox(parent, id, pos, size, n)
{

}

wxNode_wxListBox::wxNode_wxListBox(wxNode_wxWindow* parent, int id, wxNode_wxPoint& pos, wxNode_wxSize& size)
  : wxListBox(parent, id, pos, size)
{

}

wxNode_wxListBox::wxNode_wxListBox(wxNode_wxWindow* parent, int id, wxNode_wxPoint& pos)
  : wxListBox(parent, id, pos)
{

}

wxNode_wxListBox::wxNode_wxListBox(wxNode_wxWindow* parent, int id)
  : wxListBox(parent, id)
{

}

wxNode_wxListBox::wxNode_wxListBox(wxNode_wxWindow* parent, int id, wxNode_wxPoint& pos, wxNode_wxSize& size, wxNode_wxArrayString& choices, long int style, wxNode_wxValidator& validator, const wxString& name)
  : wxListBox(parent, id, pos, size, choices, style, validator, name)
{

}

wxNode_wxListBox::wxNode_wxListBox(wxNode_wxWindow* parent, int id, wxNode_wxPoint& pos, wxNode_wxSize& size, wxNode_wxArrayString& choices, long int style, wxNode_wxValidator& validator)
  : wxListBox(parent, id, pos, size, choices, style, validator)
{

}

wxNode_wxListBox::wxNode_wxListBox(wxNode_wxWindow* parent, int id, wxNode_wxPoint& pos, wxNode_wxSize& size, wxNode_wxArrayString& choices, long int style)
  : wxListBox(parent, id, pos, size, choices, style)
{

}

wxNode_wxListBox::wxNode_wxListBox(wxNode_wxWindow* parent, int id, wxNode_wxPoint& pos, wxNode_wxSize& size, wxNode_wxArrayString& choices)
  : wxListBox(parent, id, pos, size, choices)
{

}




/*static*/ void wxNode_wxListBox::Init(v8::Handle<v8::Object> target) {
  v8::HandleScope scope;

  v8::Local<v8::FunctionTemplate> t = v8::FunctionTemplate::New(wxNodeObject::NewFunc);
  s_ct = v8::Persistent<v8::FunctionTemplate>::New(t);
  s_ct->InstanceTemplate()->SetInternalFieldCount(2);
  s_ct->SetClassName(v8::String::NewSymbol("wxListBox"));

  NODE_SET_PROTOTYPE_METHOD(s_ct, "init", _init);
  AddMethods(s_ct);

  target->Set(v8::String::NewSymbol("wxListBox"), s_ct->GetFunction());
}

/*static*/ void wxNode_wxListBox::AddMethods(v8::Handle<v8::FunctionTemplate> target) {
  wxNode_wxControlWithItems::AddMethods(target);
  NODE_SET_PROTOTYPE_METHOD(target, "insertItems", _InsertItems);
  NODE_SET_PROTOTYPE_METHOD(target, "isSelected", _IsSelected);
  NODE_SET_PROTOTYPE_METHOD(target, "setSelection", _SetSelection);
  NODE_SET_PROTOTYPE_METHOD(target, "deselect", _Deselect);
  NODE_SET_PROTOTYPE_METHOD(target, "deselectAll", _DeselectAll);
  NODE_SET_PROTOTYPE_METHOD(target, "setStringSelection", _SetStringSelection);
  NODE_SET_PROTOTYPE_METHOD(target, "getSelections", _GetSelections);
  NODE_SET_PROTOTYPE_METHOD(target, "setFirstItem", _SetFirstItem);
  NODE_SET_PROTOTYPE_METHOD(target, "ensureVisible", _EnsureVisible);
  NODE_SET_PROTOTYPE_METHOD(target, "appendAndEnsureVisible", _AppendAndEnsureVisible);
  NODE_SET_PROTOTYPE_METHOD(target, "hasMultipleSelection", _HasMultipleSelection);
  NODE_SET_PROTOTYPE_METHOD(target, "isSorted", _IsSorted);
  NODE_SET_PROTOTYPE_METHOD(target, "command", _Command);
  NODE_SET_PROTOTYPE_METHOD(target, "hitTest", _HitTest);
  
}

/*static*/ bool wxNode_wxListBox::AssignableFrom(const v8::Handle<v8::String>& className) {
  v8::String::AsciiValue classNameStr(className);
  return AssignableFrom(*classNameStr);
}

/*static*/ bool wxNode_wxListBox::AssignableFrom(const char* className) {
  if(!strcmp("wxListBox", className)) {
    return true;
  }
  if(wxNode_wxControlWithItems::AssignableFrom(className)) { return true; }

  printf("wxListBox ?== %s\n", className);
  return false;
}

/*static*/ v8::Handle<v8::Value> wxNode_wxListBox::_init(const v8::Arguments& args) {
  v8::HandleScope scope;

  
  
  /*
   * id: _36416
   */
  if(args.Length() == 0) {
    

    wxNode_wxListBox *self = new wxNode_wxListBox();
    NodeExEvtHandlerImpl* evtHandler = dynamic_cast<NodeExEvtHandlerImpl*>(self);
    self->wrap(args.This(), self, evtHandler);
    return args.This();
  }
  
  /*
   * id: _36417
   */
  if(args.Length() == 9 && (args[0]->IsNull() || (args[0]->IsObject() && wxNode_wxWindow::AssignableFrom(args[0]->ToObject()->GetConstructorName()))) && args[1]->IsNumber() && (args[2]->IsNull() || (args[2]->IsObject() && wxNode_wxPoint::AssignableFrom(args[2]->ToObject()->GetConstructorName()))) && (args[3]->IsNull() || (args[3]->IsObject() && wxNode_wxSize::AssignableFrom(args[3]->ToObject()->GetConstructorName()))) && args[4]->IsNumber() && args[5]->IsString() && args[6]->IsNumber() && (args[7]->IsNull() || (args[7]->IsObject() && wxNode_wxValidator::AssignableFrom(args[7]->ToObject()->GetConstructorName()))) && args[8]->IsString()) {
    wxNode_wxWindow* parent = args[0]->IsNull() ? NULL : wxNodeObject::unwrap<wxNode_wxWindow>(args[0]->ToObject()); /* type: _993 * */
    int id = (int)args[1]->ToInt32()->Value(); /* type: _8633  */
    wxNode_wxPoint* pos = args[2]->IsNull() ? NULL : wxNodeObject::unwrap<wxNode_wxPoint>(args[2]->ToObject()); /* type: _20412  */
    wxNode_wxSize* size = args[3]->IsNull() ? NULL : wxNodeObject::unwrap<wxNode_wxSize>(args[3]->ToObject()); /* type: _20522  */
    int n = (int)args[4]->ToInt32()->Value(); /* type: _162  */
    wxString* choices; /* type: _20525 * */
    long int style = (long int)args[6]->ToInt32()->Value(); /* type: _586  */
    wxNode_wxValidator* validator = args[7]->IsNull() ? NULL : wxNodeObject::unwrap<wxNode_wxValidator>(args[7]->ToObject()); /* type: _59059  */
    v8::String::AsciiValue name(args[8]->ToString()); /* type: _14808  */
    

    wxNode_wxListBox *self = new wxNode_wxListBox(parent, id, *pos, *size, n, choices, style, *validator, *name);
    NodeExEvtHandlerImpl* evtHandler = dynamic_cast<NodeExEvtHandlerImpl*>(self);
    self->wrap(args.This(), self, evtHandler);
    return args.This();
  }
  
  /*
   * id: _36417
   */
  if(args.Length() == 8 && (args[0]->IsNull() || (args[0]->IsObject() && wxNode_wxWindow::AssignableFrom(args[0]->ToObject()->GetConstructorName()))) && args[1]->IsNumber() && (args[2]->IsNull() || (args[2]->IsObject() && wxNode_wxPoint::AssignableFrom(args[2]->ToObject()->GetConstructorName()))) && (args[3]->IsNull() || (args[3]->IsObject() && wxNode_wxSize::AssignableFrom(args[3]->ToObject()->GetConstructorName()))) && args[4]->IsNumber() && args[5]->IsString() && args[6]->IsNumber() && (args[7]->IsNull() || (args[7]->IsObject() && wxNode_wxValidator::AssignableFrom(args[7]->ToObject()->GetConstructorName())))) {
    wxNode_wxWindow* parent = args[0]->IsNull() ? NULL : wxNodeObject::unwrap<wxNode_wxWindow>(args[0]->ToObject()); /* type: _993 * */
    int id = (int)args[1]->ToInt32()->Value(); /* type: _8633  */
    wxNode_wxPoint* pos = args[2]->IsNull() ? NULL : wxNodeObject::unwrap<wxNode_wxPoint>(args[2]->ToObject()); /* type: _20412  */
    wxNode_wxSize* size = args[3]->IsNull() ? NULL : wxNodeObject::unwrap<wxNode_wxSize>(args[3]->ToObject()); /* type: _20522  */
    int n = (int)args[4]->ToInt32()->Value(); /* type: _162  */
    wxString* choices; /* type: _20525 * */
    long int style = (long int)args[6]->ToInt32()->Value(); /* type: _586  */
    wxNode_wxValidator* validator = args[7]->IsNull() ? NULL : wxNodeObject::unwrap<wxNode_wxValidator>(args[7]->ToObject()); /* type: _59059  */
    

    wxNode_wxListBox *self = new wxNode_wxListBox(parent, id, *pos, *size, n, choices, style, *validator);
    NodeExEvtHandlerImpl* evtHandler = dynamic_cast<NodeExEvtHandlerImpl*>(self);
    self->wrap(args.This(), self, evtHandler);
    return args.This();
  }
  
  /*
   * id: _36417
   */
  if(args.Length() == 7 && (args[0]->IsNull() || (args[0]->IsObject() && wxNode_wxWindow::AssignableFrom(args[0]->ToObject()->GetConstructorName()))) && args[1]->IsNumber() && (args[2]->IsNull() || (args[2]->IsObject() && wxNode_wxPoint::AssignableFrom(args[2]->ToObject()->GetConstructorName()))) && (args[3]->IsNull() || (args[3]->IsObject() && wxNode_wxSize::AssignableFrom(args[3]->ToObject()->GetConstructorName()))) && args[4]->IsNumber() && args[5]->IsString() && args[6]->IsNumber()) {
    wxNode_wxWindow* parent = args[0]->IsNull() ? NULL : wxNodeObject::unwrap<wxNode_wxWindow>(args[0]->ToObject()); /* type: _993 * */
    int id = (int)args[1]->ToInt32()->Value(); /* type: _8633  */
    wxNode_wxPoint* pos = args[2]->IsNull() ? NULL : wxNodeObject::unwrap<wxNode_wxPoint>(args[2]->ToObject()); /* type: _20412  */
    wxNode_wxSize* size = args[3]->IsNull() ? NULL : wxNodeObject::unwrap<wxNode_wxSize>(args[3]->ToObject()); /* type: _20522  */
    int n = (int)args[4]->ToInt32()->Value(); /* type: _162  */
    wxString* choices; /* type: _20525 * */
    long int style = (long int)args[6]->ToInt32()->Value(); /* type: _586  */
    

    wxNode_wxListBox *self = new wxNode_wxListBox(parent, id, *pos, *size, n, choices, style);
    NodeExEvtHandlerImpl* evtHandler = dynamic_cast<NodeExEvtHandlerImpl*>(self);
    self->wrap(args.This(), self, evtHandler);
    return args.This();
  }
  
  /*
   * id: _36417
   */
  if(args.Length() == 6 && (args[0]->IsNull() || (args[0]->IsObject() && wxNode_wxWindow::AssignableFrom(args[0]->ToObject()->GetConstructorName()))) && args[1]->IsNumber() && (args[2]->IsNull() || (args[2]->IsObject() && wxNode_wxPoint::AssignableFrom(args[2]->ToObject()->GetConstructorName()))) && (args[3]->IsNull() || (args[3]->IsObject() && wxNode_wxSize::AssignableFrom(args[3]->ToObject()->GetConstructorName()))) && args[4]->IsNumber() && args[5]->IsString()) {
    wxNode_wxWindow* parent = args[0]->IsNull() ? NULL : wxNodeObject::unwrap<wxNode_wxWindow>(args[0]->ToObject()); /* type: _993 * */
    int id = (int)args[1]->ToInt32()->Value(); /* type: _8633  */
    wxNode_wxPoint* pos = args[2]->IsNull() ? NULL : wxNodeObject::unwrap<wxNode_wxPoint>(args[2]->ToObject()); /* type: _20412  */
    wxNode_wxSize* size = args[3]->IsNull() ? NULL : wxNodeObject::unwrap<wxNode_wxSize>(args[3]->ToObject()); /* type: _20522  */
    int n = (int)args[4]->ToInt32()->Value(); /* type: _162  */
    wxString* choices; /* type: _20525 * */
    

    wxNode_wxListBox *self = new wxNode_wxListBox(parent, id, *pos, *size, n, choices);
    NodeExEvtHandlerImpl* evtHandler = dynamic_cast<NodeExEvtHandlerImpl*>(self);
    self->wrap(args.This(), self, evtHandler);
    return args.This();
  }
  
  /*
   * id: _36417
   */
  if(args.Length() == 5 && (args[0]->IsNull() || (args[0]->IsObject() && wxNode_wxWindow::AssignableFrom(args[0]->ToObject()->GetConstructorName()))) && args[1]->IsNumber() && (args[2]->IsNull() || (args[2]->IsObject() && wxNode_wxPoint::AssignableFrom(args[2]->ToObject()->GetConstructorName()))) && (args[3]->IsNull() || (args[3]->IsObject() && wxNode_wxSize::AssignableFrom(args[3]->ToObject()->GetConstructorName()))) && args[4]->IsNumber()) {
    wxNode_wxWindow* parent = args[0]->IsNull() ? NULL : wxNodeObject::unwrap<wxNode_wxWindow>(args[0]->ToObject()); /* type: _993 * */
    int id = (int)args[1]->ToInt32()->Value(); /* type: _8633  */
    wxNode_wxPoint* pos = args[2]->IsNull() ? NULL : wxNodeObject::unwrap<wxNode_wxPoint>(args[2]->ToObject()); /* type: _20412  */
    wxNode_wxSize* size = args[3]->IsNull() ? NULL : wxNodeObject::unwrap<wxNode_wxSize>(args[3]->ToObject()); /* type: _20522  */
    int n = (int)args[4]->ToInt32()->Value(); /* type: _162  */
    

    wxNode_wxListBox *self = new wxNode_wxListBox(parent, id, *pos, *size, n);
    NodeExEvtHandlerImpl* evtHandler = dynamic_cast<NodeExEvtHandlerImpl*>(self);
    self->wrap(args.This(), self, evtHandler);
    return args.This();
  }
  
  /*
   * id: _36417
   */
  if(args.Length() == 4 && (args[0]->IsNull() || (args[0]->IsObject() && wxNode_wxWindow::AssignableFrom(args[0]->ToObject()->GetConstructorName()))) && args[1]->IsNumber() && (args[2]->IsNull() || (args[2]->IsObject() && wxNode_wxPoint::AssignableFrom(args[2]->ToObject()->GetConstructorName()))) && (args[3]->IsNull() || (args[3]->IsObject() && wxNode_wxSize::AssignableFrom(args[3]->ToObject()->GetConstructorName())))) {
    wxNode_wxWindow* parent = args[0]->IsNull() ? NULL : wxNodeObject::unwrap<wxNode_wxWindow>(args[0]->ToObject()); /* type: _993 * */
    int id = (int)args[1]->ToInt32()->Value(); /* type: _8633  */
    wxNode_wxPoint* pos = args[2]->IsNull() ? NULL : wxNodeObject::unwrap<wxNode_wxPoint>(args[2]->ToObject()); /* type: _20412  */
    wxNode_wxSize* size = args[3]->IsNull() ? NULL : wxNodeObject::unwrap<wxNode_wxSize>(args[3]->ToObject()); /* type: _20522  */
    

    wxNode_wxListBox *self = new wxNode_wxListBox(parent, id, *pos, *size);
    NodeExEvtHandlerImpl* evtHandler = dynamic_cast<NodeExEvtHandlerImpl*>(self);
    self->wrap(args.This(), self, evtHandler);
    return args.This();
  }
  
  /*
   * id: _36417
   */
  if(args.Length() == 3 && (args[0]->IsNull() || (args[0]->IsObject() && wxNode_wxWindow::AssignableFrom(args[0]->ToObject()->GetConstructorName()))) && args[1]->IsNumber() && (args[2]->IsNull() || (args[2]->IsObject() && wxNode_wxPoint::AssignableFrom(args[2]->ToObject()->GetConstructorName())))) {
    wxNode_wxWindow* parent = args[0]->IsNull() ? NULL : wxNodeObject::unwrap<wxNode_wxWindow>(args[0]->ToObject()); /* type: _993 * */
    int id = (int)args[1]->ToInt32()->Value(); /* type: _8633  */
    wxNode_wxPoint* pos = args[2]->IsNull() ? NULL : wxNodeObject::unwrap<wxNode_wxPoint>(args[2]->ToObject()); /* type: _20412  */
    

    wxNode_wxListBox *self = new wxNode_wxListBox(parent, id, *pos);
    NodeExEvtHandlerImpl* evtHandler = dynamic_cast<NodeExEvtHandlerImpl*>(self);
    self->wrap(args.This(), self, evtHandler);
    return args.This();
  }
  
  /*
   * id: _36417
   */
  if(args.Length() == 2 && (args[0]->IsNull() || (args[0]->IsObject() && wxNode_wxWindow::AssignableFrom(args[0]->ToObject()->GetConstructorName()))) && args[1]->IsNumber()) {
    wxNode_wxWindow* parent = args[0]->IsNull() ? NULL : wxNodeObject::unwrap<wxNode_wxWindow>(args[0]->ToObject()); /* type: _993 * */
    int id = (int)args[1]->ToInt32()->Value(); /* type: _8633  */
    

    wxNode_wxListBox *self = new wxNode_wxListBox(parent, id);
    NodeExEvtHandlerImpl* evtHandler = dynamic_cast<NodeExEvtHandlerImpl*>(self);
    self->wrap(args.This(), self, evtHandler);
    return args.This();
  }
  
  /*
   * id: _36418
   */
  if(args.Length() == 8 && (args[0]->IsNull() || (args[0]->IsObject() && wxNode_wxWindow::AssignableFrom(args[0]->ToObject()->GetConstructorName()))) && args[1]->IsNumber() && (args[2]->IsNull() || (args[2]->IsObject() && wxNode_wxPoint::AssignableFrom(args[2]->ToObject()->GetConstructorName()))) && (args[3]->IsNull() || (args[3]->IsObject() && wxNode_wxSize::AssignableFrom(args[3]->ToObject()->GetConstructorName()))) && (args[4]->IsNull() || (args[4]->IsObject() && wxNode_wxArrayString::AssignableFrom(args[4]->ToObject()->GetConstructorName()))) && args[5]->IsNumber() && (args[6]->IsNull() || (args[6]->IsObject() && wxNode_wxValidator::AssignableFrom(args[6]->ToObject()->GetConstructorName()))) && args[7]->IsString()) {
    wxNode_wxWindow* parent = args[0]->IsNull() ? NULL : wxNodeObject::unwrap<wxNode_wxWindow>(args[0]->ToObject()); /* type: _993 * */
    int id = (int)args[1]->ToInt32()->Value(); /* type: _8633  */
    wxNode_wxPoint* pos = args[2]->IsNull() ? NULL : wxNodeObject::unwrap<wxNode_wxPoint>(args[2]->ToObject()); /* type: _20412  */
    wxNode_wxSize* size = args[3]->IsNull() ? NULL : wxNodeObject::unwrap<wxNode_wxSize>(args[3]->ToObject()); /* type: _20522  */
    wxNode_wxArrayString* choices = args[4]->IsNull() ? NULL : wxNodeObject::unwrap<wxNode_wxArrayString>(args[4]->ToObject()); /* type: _20526  */
    long int style = (long int)args[5]->ToInt32()->Value(); /* type: _586  */
    wxNode_wxValidator* validator = args[6]->IsNull() ? NULL : wxNodeObject::unwrap<wxNode_wxValidator>(args[6]->ToObject()); /* type: _59059  */
    v8::String::AsciiValue name(args[7]->ToString()); /* type: _14808  */
    

    wxNode_wxListBox *self = new wxNode_wxListBox(parent, id, *pos, *size, *choices, style, *validator, *name);
    NodeExEvtHandlerImpl* evtHandler = dynamic_cast<NodeExEvtHandlerImpl*>(self);
    self->wrap(args.This(), self, evtHandler);
    return args.This();
  }
  
  /*
   * id: _36418
   */
  if(args.Length() == 7 && (args[0]->IsNull() || (args[0]->IsObject() && wxNode_wxWindow::AssignableFrom(args[0]->ToObject()->GetConstructorName()))) && args[1]->IsNumber() && (args[2]->IsNull() || (args[2]->IsObject() && wxNode_wxPoint::AssignableFrom(args[2]->ToObject()->GetConstructorName()))) && (args[3]->IsNull() || (args[3]->IsObject() && wxNode_wxSize::AssignableFrom(args[3]->ToObject()->GetConstructorName()))) && (args[4]->IsNull() || (args[4]->IsObject() && wxNode_wxArrayString::AssignableFrom(args[4]->ToObject()->GetConstructorName()))) && args[5]->IsNumber() && (args[6]->IsNull() || (args[6]->IsObject() && wxNode_wxValidator::AssignableFrom(args[6]->ToObject()->GetConstructorName())))) {
    wxNode_wxWindow* parent = args[0]->IsNull() ? NULL : wxNodeObject::unwrap<wxNode_wxWindow>(args[0]->ToObject()); /* type: _993 * */
    int id = (int)args[1]->ToInt32()->Value(); /* type: _8633  */
    wxNode_wxPoint* pos = args[2]->IsNull() ? NULL : wxNodeObject::unwrap<wxNode_wxPoint>(args[2]->ToObject()); /* type: _20412  */
    wxNode_wxSize* size = args[3]->IsNull() ? NULL : wxNodeObject::unwrap<wxNode_wxSize>(args[3]->ToObject()); /* type: _20522  */
    wxNode_wxArrayString* choices = args[4]->IsNull() ? NULL : wxNodeObject::unwrap<wxNode_wxArrayString>(args[4]->ToObject()); /* type: _20526  */
    long int style = (long int)args[5]->ToInt32()->Value(); /* type: _586  */
    wxNode_wxValidator* validator = args[6]->IsNull() ? NULL : wxNodeObject::unwrap<wxNode_wxValidator>(args[6]->ToObject()); /* type: _59059  */
    

    wxNode_wxListBox *self = new wxNode_wxListBox(parent, id, *pos, *size, *choices, style, *validator);
    NodeExEvtHandlerImpl* evtHandler = dynamic_cast<NodeExEvtHandlerImpl*>(self);
    self->wrap(args.This(), self, evtHandler);
    return args.This();
  }
  
  /*
   * id: _36418
   */
  if(args.Length() == 6 && (args[0]->IsNull() || (args[0]->IsObject() && wxNode_wxWindow::AssignableFrom(args[0]->ToObject()->GetConstructorName()))) && args[1]->IsNumber() && (args[2]->IsNull() || (args[2]->IsObject() && wxNode_wxPoint::AssignableFrom(args[2]->ToObject()->GetConstructorName()))) && (args[3]->IsNull() || (args[3]->IsObject() && wxNode_wxSize::AssignableFrom(args[3]->ToObject()->GetConstructorName()))) && (args[4]->IsNull() || (args[4]->IsObject() && wxNode_wxArrayString::AssignableFrom(args[4]->ToObject()->GetConstructorName()))) && args[5]->IsNumber()) {
    wxNode_wxWindow* parent = args[0]->IsNull() ? NULL : wxNodeObject::unwrap<wxNode_wxWindow>(args[0]->ToObject()); /* type: _993 * */
    int id = (int)args[1]->ToInt32()->Value(); /* type: _8633  */
    wxNode_wxPoint* pos = args[2]->IsNull() ? NULL : wxNodeObject::unwrap<wxNode_wxPoint>(args[2]->ToObject()); /* type: _20412  */
    wxNode_wxSize* size = args[3]->IsNull() ? NULL : wxNodeObject::unwrap<wxNode_wxSize>(args[3]->ToObject()); /* type: _20522  */
    wxNode_wxArrayString* choices = args[4]->IsNull() ? NULL : wxNodeObject::unwrap<wxNode_wxArrayString>(args[4]->ToObject()); /* type: _20526  */
    long int style = (long int)args[5]->ToInt32()->Value(); /* type: _586  */
    

    wxNode_wxListBox *self = new wxNode_wxListBox(parent, id, *pos, *size, *choices, style);
    NodeExEvtHandlerImpl* evtHandler = dynamic_cast<NodeExEvtHandlerImpl*>(self);
    self->wrap(args.This(), self, evtHandler);
    return args.This();
  }
  
  /*
   * id: _36418
   */
  if(args.Length() == 5 && (args[0]->IsNull() || (args[0]->IsObject() && wxNode_wxWindow::AssignableFrom(args[0]->ToObject()->GetConstructorName()))) && args[1]->IsNumber() && (args[2]->IsNull() || (args[2]->IsObject() && wxNode_wxPoint::AssignableFrom(args[2]->ToObject()->GetConstructorName()))) && (args[3]->IsNull() || (args[3]->IsObject() && wxNode_wxSize::AssignableFrom(args[3]->ToObject()->GetConstructorName()))) && (args[4]->IsNull() || (args[4]->IsObject() && wxNode_wxArrayString::AssignableFrom(args[4]->ToObject()->GetConstructorName())))) {
    wxNode_wxWindow* parent = args[0]->IsNull() ? NULL : wxNodeObject::unwrap<wxNode_wxWindow>(args[0]->ToObject()); /* type: _993 * */
    int id = (int)args[1]->ToInt32()->Value(); /* type: _8633  */
    wxNode_wxPoint* pos = args[2]->IsNull() ? NULL : wxNodeObject::unwrap<wxNode_wxPoint>(args[2]->ToObject()); /* type: _20412  */
    wxNode_wxSize* size = args[3]->IsNull() ? NULL : wxNodeObject::unwrap<wxNode_wxSize>(args[3]->ToObject()); /* type: _20522  */
    wxNode_wxArrayString* choices = args[4]->IsNull() ? NULL : wxNodeObject::unwrap<wxNode_wxArrayString>(args[4]->ToObject()); /* type: _20526  */
    

    wxNode_wxListBox *self = new wxNode_wxListBox(parent, id, *pos, *size, *choices);
    NodeExEvtHandlerImpl* evtHandler = dynamic_cast<NodeExEvtHandlerImpl*>(self);
    self->wrap(args.This(), self, evtHandler);
    return args.This();
  }
  
  

  std::ostringstream errStr;
  errStr << "Could not find matching constructor for arguments (class name: wxListBox).\n";                           \
  errStr << "  arg count: " << args.Length() << "\n";
  for(int i = 0; i < args.Length(); i++) {
    v8::String::AsciiValue argStr(args[i]);
    errStr << "  arg[" << i << "]: " << *argStr << "\n";
  }
  return v8::ThrowException(v8::Exception::TypeError(v8::String::New(errStr.str().c_str())));
}


/*static*/ v8::Handle<v8::Value> wxNode_wxListBox::_InsertItems(const v8::Arguments& args) {
  v8::HandleScope scope;
  wxNode_wxListBox* self = unwrap<wxNode_wxListBox>(args.This());

  
  /*
   * id: _47057
   */
  if(args.Length() == 3 && args[0]->IsNumber() && args[1]->IsString() && args[2]->IsNumber()) {
    unsigned int nItems = (unsigned int)args[0]->ToInt32()->Value(); /* type: _43  */
    wxString* items; /* type: _20525 * */
    unsigned int pos = (unsigned int)args[2]->ToInt32()->Value(); /* type: _43  */
    

    self->InsertItems(nItems, items, pos);

    return v8::Undefined();
  }
  
  /*
   * id: _47058
   */
  if(args.Length() == 2 && (args[0]->IsNull() || (args[0]->IsObject() && wxNode_wxArrayString::AssignableFrom(args[0]->ToObject()->GetConstructorName()))) && args[1]->IsNumber()) {
    wxNode_wxArrayString* items = args[0]->IsNull() ? NULL : wxNodeObject::unwrap<wxNode_wxArrayString>(args[0]->ToObject()); /* type: _20526  */
    unsigned int pos = (unsigned int)args[1]->ToInt32()->Value(); /* type: _43  */
    

    self->InsertItems(*items, pos);

    return v8::Undefined();
  }
  

  std::ostringstream errStr;
  errStr << "Could not find matching method for arguments (method name: wxListBox::InsertItems).\n";                           \
  errStr << "  arg count: " << args.Length() << "\n";
  for(int i = 0; i < args.Length(); i++) {
    v8::String::AsciiValue argStr(args[i]);
    errStr << "  arg[" << i << "]: " << *argStr << "\n";
  }
  return v8::ThrowException(v8::Exception::TypeError(v8::String::New(errStr.str().c_str())));
}

/*static*/ v8::Handle<v8::Value> wxNode_wxListBox::_IsSelected(const v8::Arguments& args) {
  v8::HandleScope scope;
  wxNode_wxListBox* self = unwrap<wxNode_wxListBox>(args.This());

  
  /*
   * id: _47059
   */
  if(args.Length() == 1 && args[0]->IsNumber()) {
    int n = (int)args[0]->ToInt32()->Value(); /* type: _162  */
    

    bool returnVal = self->IsSelected(n);

    return scope.Close(v8::Boolean::New(returnVal));
  }
  

  std::ostringstream errStr;
  errStr << "Could not find matching method for arguments (method name: wxListBox::IsSelected).\n";                           \
  errStr << "  arg count: " << args.Length() << "\n";
  for(int i = 0; i < args.Length(); i++) {
    v8::String::AsciiValue argStr(args[i]);
    errStr << "  arg[" << i << "]: " << *argStr << "\n";
  }
  return v8::ThrowException(v8::Exception::TypeError(v8::String::New(errStr.str().c_str())));
}

/*static*/ v8::Handle<v8::Value> wxNode_wxListBox::_SetSelection(const v8::Arguments& args) {
  v8::HandleScope scope;
  wxNode_wxListBox* self = unwrap<wxNode_wxListBox>(args.This());

  
  /*
   * id: _47060
   */
  if(args.Length() == 1 && args[0]->IsNumber()) {
    int n = (int)args[0]->ToInt32()->Value(); /* type: _162  */
    

    self->SetSelection(n);

    return v8::Undefined();
  }
  
  /*
   * id: _47061
   */
  if(args.Length() == 2 && args[0]->IsNumber() && args[1]->IsBoolean()) {
    int n = (int)args[0]->ToInt32()->Value(); /* type: _162  */
    bool select = args[1]->ToBoolean()->Value(); /* type: _14666  */
    

    self->SetSelection(n, select);

    return v8::Undefined();
  }
  

  std::ostringstream errStr;
  errStr << "Could not find matching method for arguments (method name: wxListBox::SetSelection).\n";                           \
  errStr << "  arg count: " << args.Length() << "\n";
  for(int i = 0; i < args.Length(); i++) {
    v8::String::AsciiValue argStr(args[i]);
    errStr << "  arg[" << i << "]: " << *argStr << "\n";
  }
  return v8::ThrowException(v8::Exception::TypeError(v8::String::New(errStr.str().c_str())));
}

/*static*/ v8::Handle<v8::Value> wxNode_wxListBox::_Deselect(const v8::Arguments& args) {
  v8::HandleScope scope;
  wxNode_wxListBox* self = unwrap<wxNode_wxListBox>(args.This());

  
  /*
   * id: _47062
   */
  if(args.Length() == 1 && args[0]->IsNumber()) {
    int n = (int)args[0]->ToInt32()->Value(); /* type: _162  */
    

    self->Deselect(n);

    return v8::Undefined();
  }
  

  std::ostringstream errStr;
  errStr << "Could not find matching method for arguments (method name: wxListBox::Deselect).\n";                           \
  errStr << "  arg count: " << args.Length() << "\n";
  for(int i = 0; i < args.Length(); i++) {
    v8::String::AsciiValue argStr(args[i]);
    errStr << "  arg[" << i << "]: " << *argStr << "\n";
  }
  return v8::ThrowException(v8::Exception::TypeError(v8::String::New(errStr.str().c_str())));
}

/*static*/ v8::Handle<v8::Value> wxNode_wxListBox::_DeselectAll(const v8::Arguments& args) {
  v8::HandleScope scope;
  wxNode_wxListBox* self = unwrap<wxNode_wxListBox>(args.This());

  
  /*
   * id: _47063
   */
  if(args.Length() == 1 && args[0]->IsNumber()) {
    int itemToLeaveSelected = (int)args[0]->ToInt32()->Value(); /* type: _162  */
    

    self->DeselectAll(itemToLeaveSelected);

    return v8::Undefined();
  }
  
  /*
   * id: _47063
   */
  if(args.Length() == 0) {
    

    self->DeselectAll();

    return v8::Undefined();
  }
  

  std::ostringstream errStr;
  errStr << "Could not find matching method for arguments (method name: wxListBox::DeselectAll).\n";                           \
  errStr << "  arg count: " << args.Length() << "\n";
  for(int i = 0; i < args.Length(); i++) {
    v8::String::AsciiValue argStr(args[i]);
    errStr << "  arg[" << i << "]: " << *argStr << "\n";
  }
  return v8::ThrowException(v8::Exception::TypeError(v8::String::New(errStr.str().c_str())));
}

/*static*/ v8::Handle<v8::Value> wxNode_wxListBox::_SetStringSelection(const v8::Arguments& args) {
  v8::HandleScope scope;
  wxNode_wxListBox* self = unwrap<wxNode_wxListBox>(args.This());

  
  /*
   * id: _47064
   */
  if(args.Length() == 2 && args[0]->IsString() && args[1]->IsBoolean()) {
    v8::String::AsciiValue s(args[0]->ToString()); /* type: _14808  */
    bool select = args[1]->ToBoolean()->Value(); /* type: _14666  */
    

    bool returnVal = self->SetStringSelection(*s, select);

    return scope.Close(v8::Boolean::New(returnVal));
  }
  
  /*
   * id: _47065
   */
  if(args.Length() == 1 && args[0]->IsString()) {
    v8::String::AsciiValue s(args[0]->ToString()); /* type: _14808  */
    

    bool returnVal = self->SetStringSelection(*s);

    return scope.Close(v8::Boolean::New(returnVal));
  }
  

  std::ostringstream errStr;
  errStr << "Could not find matching method for arguments (method name: wxListBox::SetStringSelection).\n";                           \
  errStr << "  arg count: " << args.Length() << "\n";
  for(int i = 0; i < args.Length(); i++) {
    v8::String::AsciiValue argStr(args[i]);
    errStr << "  arg[" << i << "]: " << *argStr << "\n";
  }
  return v8::ThrowException(v8::Exception::TypeError(v8::String::New(errStr.str().c_str())));
}

/*static*/ v8::Handle<v8::Value> wxNode_wxListBox::_GetSelections(const v8::Arguments& args) {
  v8::HandleScope scope;
  wxNode_wxListBox* self = unwrap<wxNode_wxListBox>(args.This());

  
  /*
   * id: _47066
   */
  if(args.Length() == 1 && (args[0]->IsNull() || (args[0]->IsObject() && wxNode_wxArrayInt::AssignableFrom(args[0]->ToObject()->GetConstructorName())))) {
    wxNode_wxArrayInt* aSelections = args[0]->IsNull() ? NULL : wxNodeObject::unwrap<wxNode_wxArrayInt>(args[0]->ToObject()); /* type: _22498  */
    

    int returnVal = self->GetSelections(*aSelections);

    return scope.Close(v8::Number::New(returnVal));
  }
  

  std::ostringstream errStr;
  errStr << "Could not find matching method for arguments (method name: wxListBox::GetSelections).\n";                           \
  errStr << "  arg count: " << args.Length() << "\n";
  for(int i = 0; i < args.Length(); i++) {
    v8::String::AsciiValue argStr(args[i]);
    errStr << "  arg[" << i << "]: " << *argStr << "\n";
  }
  return v8::ThrowException(v8::Exception::TypeError(v8::String::New(errStr.str().c_str())));
}

/*static*/ v8::Handle<v8::Value> wxNode_wxListBox::_SetFirstItem(const v8::Arguments& args) {
  v8::HandleScope scope;
  wxNode_wxListBox* self = unwrap<wxNode_wxListBox>(args.This());

  
  /*
   * id: _47067
   */
  if(args.Length() == 1 && args[0]->IsNumber()) {
    int n = (int)args[0]->ToInt32()->Value(); /* type: _162  */
    

    self->SetFirstItem(n);

    return v8::Undefined();
  }
  
  /*
   * id: _47068
   */
  if(args.Length() == 1 && args[0]->IsString()) {
    v8::String::AsciiValue s(args[0]->ToString()); /* type: _14808  */
    

    self->SetFirstItem(*s);

    return v8::Undefined();
  }
  

  std::ostringstream errStr;
  errStr << "Could not find matching method for arguments (method name: wxListBox::SetFirstItem).\n";                           \
  errStr << "  arg count: " << args.Length() << "\n";
  for(int i = 0; i < args.Length(); i++) {
    v8::String::AsciiValue argStr(args[i]);
    errStr << "  arg[" << i << "]: " << *argStr << "\n";
  }
  return v8::ThrowException(v8::Exception::TypeError(v8::String::New(errStr.str().c_str())));
}

/*static*/ v8::Handle<v8::Value> wxNode_wxListBox::_EnsureVisible(const v8::Arguments& args) {
  v8::HandleScope scope;
  wxNode_wxListBox* self = unwrap<wxNode_wxListBox>(args.This());

  
  /*
   * id: _47069
   */
  if(args.Length() == 1 && args[0]->IsNumber()) {
    int n = (int)args[0]->ToInt32()->Value(); /* type: _162  */
    

    self->EnsureVisible(n);

    return v8::Undefined();
  }
  

  std::ostringstream errStr;
  errStr << "Could not find matching method for arguments (method name: wxListBox::EnsureVisible).\n";                           \
  errStr << "  arg count: " << args.Length() << "\n";
  for(int i = 0; i < args.Length(); i++) {
    v8::String::AsciiValue argStr(args[i]);
    errStr << "  arg[" << i << "]: " << *argStr << "\n";
  }
  return v8::ThrowException(v8::Exception::TypeError(v8::String::New(errStr.str().c_str())));
}

/*static*/ v8::Handle<v8::Value> wxNode_wxListBox::_AppendAndEnsureVisible(const v8::Arguments& args) {
  v8::HandleScope scope;
  wxNode_wxListBox* self = unwrap<wxNode_wxListBox>(args.This());

  
  /*
   * id: _47070
   */
  if(args.Length() == 1 && args[0]->IsString()) {
    v8::String::AsciiValue s(args[0]->ToString()); /* type: _14808  */
    

    self->AppendAndEnsureVisible(*s);

    return v8::Undefined();
  }
  

  std::ostringstream errStr;
  errStr << "Could not find matching method for arguments (method name: wxListBox::AppendAndEnsureVisible).\n";                           \
  errStr << "  arg count: " << args.Length() << "\n";
  for(int i = 0; i < args.Length(); i++) {
    v8::String::AsciiValue argStr(args[i]);
    errStr << "  arg[" << i << "]: " << *argStr << "\n";
  }
  return v8::ThrowException(v8::Exception::TypeError(v8::String::New(errStr.str().c_str())));
}

/*static*/ v8::Handle<v8::Value> wxNode_wxListBox::_HasMultipleSelection(const v8::Arguments& args) {
  v8::HandleScope scope;
  wxNode_wxListBox* self = unwrap<wxNode_wxListBox>(args.This());

  
  /*
   * id: _47071
   */
  if(args.Length() == 0) {
    

    bool returnVal = self->HasMultipleSelection();

    return scope.Close(v8::Boolean::New(returnVal));
  }
  

  std::ostringstream errStr;
  errStr << "Could not find matching method for arguments (method name: wxListBox::HasMultipleSelection).\n";                           \
  errStr << "  arg count: " << args.Length() << "\n";
  for(int i = 0; i < args.Length(); i++) {
    v8::String::AsciiValue argStr(args[i]);
    errStr << "  arg[" << i << "]: " << *argStr << "\n";
  }
  return v8::ThrowException(v8::Exception::TypeError(v8::String::New(errStr.str().c_str())));
}

/*static*/ v8::Handle<v8::Value> wxNode_wxListBox::_IsSorted(const v8::Arguments& args) {
  v8::HandleScope scope;
  wxNode_wxListBox* self = unwrap<wxNode_wxListBox>(args.This());

  
  /*
   * id: _47072
   */
  if(args.Length() == 0) {
    

    bool returnVal = self->IsSorted();

    return scope.Close(v8::Boolean::New(returnVal));
  }
  

  std::ostringstream errStr;
  errStr << "Could not find matching method for arguments (method name: wxListBox::IsSorted).\n";                           \
  errStr << "  arg count: " << args.Length() << "\n";
  for(int i = 0; i < args.Length(); i++) {
    v8::String::AsciiValue argStr(args[i]);
    errStr << "  arg[" << i << "]: " << *argStr << "\n";
  }
  return v8::ThrowException(v8::Exception::TypeError(v8::String::New(errStr.str().c_str())));
}

/*static*/ v8::Handle<v8::Value> wxNode_wxListBox::_Command(const v8::Arguments& args) {
  v8::HandleScope scope;
  wxNode_wxListBox* self = unwrap<wxNode_wxListBox>(args.This());

  
  /*
   * id: _47073
   */
  if(args.Length() == 1 && (args[0]->IsNull() || (args[0]->IsObject() && wxNode_wxCommandEvent::AssignableFrom(args[0]->ToObject()->GetConstructorName())))) {
    wxNode_wxCommandEvent* event = args[0]->IsNull() ? NULL : wxNodeObject::unwrap<wxNode_wxCommandEvent>(args[0]->ToObject()); /* type: _58740  */
    

    self->Command(*event);

    return v8::Undefined();
  }
  

  std::ostringstream errStr;
  errStr << "Could not find matching method for arguments (method name: wxListBox::Command).\n";                           \
  errStr << "  arg count: " << args.Length() << "\n";
  for(int i = 0; i < args.Length(); i++) {
    v8::String::AsciiValue argStr(args[i]);
    errStr << "  arg[" << i << "]: " << *argStr << "\n";
  }
  return v8::ThrowException(v8::Exception::TypeError(v8::String::New(errStr.str().c_str())));
}

/*static*/ v8::Handle<v8::Value> wxNode_wxListBox::_HitTest(const v8::Arguments& args) {
  v8::HandleScope scope;
  wxNode_wxListBox* self = unwrap<wxNode_wxListBox>(args.This());

  
  /*
   * id: _47074
   */
  if(args.Length() == 1 && (args[0]->IsNull() || (args[0]->IsObject() && wxNode_wxPoint::AssignableFrom(args[0]->ToObject()->GetConstructorName())))) {
    wxNode_wxPoint* point = args[0]->IsNull() ? NULL : wxNodeObject::unwrap<wxNode_wxPoint>(args[0]->ToObject()); /* type: _20412  */
    

    int returnVal = self->HitTest(*point);

    return scope.Close(v8::Number::New(returnVal));
  }
  
  /*
   * id: _47075
   */
  if(args.Length() == 2 && args[0]->IsNumber() && args[1]->IsNumber()) {
    int x = (int)args[0]->ToInt32()->Value(); /* type: _162  */
    int y = (int)args[1]->ToInt32()->Value(); /* type: _162  */
    

    int returnVal = self->HitTest(x, y);

    return scope.Close(v8::Number::New(returnVal));
  }
  

  std::ostringstream errStr;
  errStr << "Could not find matching method for arguments (method name: wxListBox::HitTest).\n";                           \
  errStr << "  arg count: " << args.Length() << "\n";
  for(int i = 0; i < args.Length(); i++) {
    v8::String::AsciiValue argStr(args[i]);
    errStr << "  arg[" << i << "]: " << *argStr << "\n";
  }
  return v8::ThrowException(v8::Exception::TypeError(v8::String::New(errStr.str().c_str())));
}

