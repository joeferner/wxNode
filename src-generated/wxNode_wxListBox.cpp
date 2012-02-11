
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
#include "wxNode_wxClientData.h"


/* static */ v8::Persistent<v8::FunctionTemplate> wxNode_wxListBox::s_ct;



wxNode_wxListBox::wxNode_wxListBox()
  : wxListBox()
{

}

wxNode_wxListBox::wxNode_wxListBox(wxWindow* parent, int id, wxPoint& pos, wxSize& size, int n, const wxString* choices, long int style, wxValidator& validator, const wxString& name)
  : wxListBox(parent, id, pos, size, n, choices, style, validator, name)
{

}

wxNode_wxListBox::wxNode_wxListBox(wxWindow* parent, int id, wxPoint& pos, wxSize& size, int n, const wxString* choices, long int style, wxValidator& validator)
  : wxListBox(parent, id, pos, size, n, choices, style, validator)
{

}

wxNode_wxListBox::wxNode_wxListBox(wxWindow* parent, int id, wxPoint& pos, wxSize& size, int n, const wxString* choices, long int style)
  : wxListBox(parent, id, pos, size, n, choices, style)
{

}

wxNode_wxListBox::wxNode_wxListBox(wxWindow* parent, int id, wxPoint& pos, wxSize& size, int n, const wxString* choices)
  : wxListBox(parent, id, pos, size, n, choices)
{

}

wxNode_wxListBox::wxNode_wxListBox(wxWindow* parent, int id, wxPoint& pos, wxSize& size, int n)
  : wxListBox(parent, id, pos, size, n)
{

}

wxNode_wxListBox::wxNode_wxListBox(wxWindow* parent, int id, wxPoint& pos, wxSize& size)
  : wxListBox(parent, id, pos, size)
{

}

wxNode_wxListBox::wxNode_wxListBox(wxWindow* parent, int id, wxPoint& pos)
  : wxListBox(parent, id, pos)
{

}

wxNode_wxListBox::wxNode_wxListBox(wxWindow* parent, int id)
  : wxListBox(parent, id)
{

}

wxNode_wxListBox::wxNode_wxListBox(wxWindow* parent, int id, wxPoint& pos, wxSize& size, wxArrayString& choices, long int style, wxValidator& validator, const wxString& name)
  : wxListBox(parent, id, pos, size, choices, style, validator, name)
{

}

wxNode_wxListBox::wxNode_wxListBox(wxWindow* parent, int id, wxPoint& pos, wxSize& size, wxArrayString& choices, long int style, wxValidator& validator)
  : wxListBox(parent, id, pos, size, choices, style, validator)
{

}

wxNode_wxListBox::wxNode_wxListBox(wxWindow* parent, int id, wxPoint& pos, wxSize& size, wxArrayString& choices, long int style)
  : wxListBox(parent, id, pos, size, choices, style)
{

}

wxNode_wxListBox::wxNode_wxListBox(wxWindow* parent, int id, wxPoint& pos, wxSize& size, wxArrayString& choices)
  : wxListBox(parent, id, pos, size, choices)
{

}




/*static*/ void wxNode_wxListBox::Init(v8::Handle<v8::Object> target) {
  v8::HandleScope scope;

  v8::Local<v8::FunctionTemplate> t = v8::FunctionTemplate::New(wxNodeObject::NewFunc);
  s_ct = v8::Persistent<v8::FunctionTemplate>::New(t);
  s_ct->InstanceTemplate()->SetInternalFieldCount(2);
  s_ct->SetClassName(v8::String::NewSymbol("ListBox"));

  NODE_SET_PROTOTYPE_METHOD(s_ct, "init", _init);
  AddMethods(s_ct);

  target->Set(v8::String::NewSymbol("ListBox"), s_ct->GetFunction());
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
  NODE_SET_PROTOTYPE_METHOD(target, "append", _Append);
  NODE_SET_PROTOTYPE_METHOD(target, "appendString", _AppendString);
  NODE_SET_PROTOTYPE_METHOD(target, "insert", _Insert);
  NODE_SET_PROTOTYPE_METHOD(target, "set", _Set);
  NODE_SET_PROTOTYPE_METHOD(target, "clear", _Clear);
  NODE_SET_PROTOTYPE_METHOD(target, "delete", _Delete);
  NODE_SET_PROTOTYPE_METHOD(target, "setClientData", _SetClientData);
  NODE_SET_PROTOTYPE_METHOD(target, "getClientData", _GetClientData);
  NODE_SET_PROTOTYPE_METHOD(target, "setClientObject", _SetClientObject);
  NODE_SET_PROTOTYPE_METHOD(target, "getClientObject", _GetClientObject);
  NODE_SET_PROTOTYPE_METHOD(target, "detachClientObject", _DetachClientObject);
  NODE_SET_PROTOTYPE_METHOD(target, "getClientDataType", _GetClientDataType);
  NODE_SET_PROTOTYPE_METHOD(target, "hasClientData", _HasClientData);
  NODE_SET_PROTOTYPE_METHOD(target, "hasClientObjectData", _HasClientObjectData);
  NODE_SET_PROTOTYPE_METHOD(target, "hasClientUntypedData", _HasClientUntypedData);
  
}

/*static*/ v8::Handle<v8::Value> wxNode_wxListBox::New(const wxNode_wxListBox* obj) {
  v8::HandleScope scope;

  if(obj == NULL) {
    return scope.Close(v8::Null());
  }
  
  v8::Local<v8::FunctionTemplate> returnObjFt = v8::FunctionTemplate::New(wxNodeObject::NewFunc);
  returnObjFt->InstanceTemplate()->SetInternalFieldCount(2);
  returnObjFt->SetClassName(v8::String::NewSymbol("ListBox"));
  wxNode_wxListBox::AddMethods(returnObjFt);

  v8::Local<v8::Function> returnObjFn = returnObjFt->GetFunction();
  v8::Handle<v8::Value> returnObjArgs[0];
  v8::Local<v8::Object> returnObj = returnObjFn->CallAsConstructor(0, returnObjArgs)->ToObject();
  returnObj->SetPointerInInternalField(0, (void*)obj);
  NodeExEvtHandlerImpl* evtHandler = dynamic_cast<NodeExEvtHandlerImpl*>((wxNode_wxListBox*)obj);
  returnObj->SetPointerInInternalField(1, evtHandler);

  return scope.Close(returnObj);
}

/*static*/ v8::Handle<v8::Value> wxNode_wxListBox::New(const wxListBox* obj) {
  v8::HandleScope scope;

  if(obj == NULL) {
    return scope.Close(v8::Null());
  }
  
  v8::Local<v8::FunctionTemplate> returnObjFt = v8::FunctionTemplate::New(wxNodeObject::NewFunc);
  returnObjFt->InstanceTemplate()->SetInternalFieldCount(2);
  returnObjFt->SetClassName(v8::String::NewSymbol("ListBox"));
  wxNode_wxListBox::AddMethods(returnObjFt);

  v8::Local<v8::Function> returnObjFn = returnObjFt->GetFunction();
  v8::Handle<v8::Value> returnObjArgs[0];
  v8::Local<v8::Object> returnObj = returnObjFn->CallAsConstructor(0, returnObjArgs)->ToObject();
  returnObj->SetPointerInInternalField(0, (void*)obj);
  returnObj->SetPointerInInternalField(1, new NodeExEvtHandlerImplWrap(returnObj));

  return scope.Close(returnObj);
}

/*static*/ v8::Handle<v8::Value> wxNode_wxListBox::NewCopy(const wxListBox& obj) {
  v8::HandleScope scope;
  wxNode_wxListBox* returnVal = new wxNode_wxListBox();
  memcpy(dynamic_cast<wxListBox*>(returnVal), &obj, sizeof(wxListBox));
  return scope.Close(New(returnVal));

}

/*static*/ bool wxNode_wxListBox::AssignableFrom(const v8::Handle<v8::String>& className) {
  v8::String::AsciiValue classNameStr(className);
  return AssignableFrom(*classNameStr);
}

/*static*/ bool wxNode_wxListBox::AssignableFrom(const char* className) {
  if(!strcmp("ListBox", className)) { return true; }
  
  if(!strcmp("ListBox", className)) { return true; }

  if(!strcmp("CheckListBoxBase", className)) { return true; }
  if(!strcmp("CheckListBox", className)) { return true; }

  if(!strcmp("RearrangeList", className)) { return true; }


  return false;
}

/*static*/ v8::Handle<v8::Value> wxNode_wxListBox::_init(const v8::Arguments& args) {
  v8::HandleScope scope;

  
  
  /*
   * id: _36634
   */
  if(args.Length() == 0) {
    

    wxNode_wxListBox *self = new wxNode_wxListBox();
    NodeExEvtHandlerImpl* evtHandler = dynamic_cast<NodeExEvtHandlerImpl*>(self);
    self->wrap(args.This(), self, evtHandler);
    return args.This();
  }
  
  /*
   * id: _36635
   */
  if(args.Length() == 9 && (args[0]->IsNull() || (args[0]->IsObject() && wxNode_wxWindow::AssignableFrom(args[0]->ToObject()->GetConstructorName()))) && args[1]->IsNumber() && (args[2]->IsNull() || (args[2]->IsObject() && wxNode_wxPoint::AssignableFrom(args[2]->ToObject()->GetConstructorName()))) && (args[3]->IsNull() || (args[3]->IsObject() && wxNode_wxSize::AssignableFrom(args[3]->ToObject()->GetConstructorName()))) && args[4]->IsNumber() && args[5]->IsString() && args[6]->IsNumber() && (args[7]->IsNull() || (args[7]->IsObject() && wxNode_wxValidator::AssignableFrom(args[7]->ToObject()->GetConstructorName()))) && args[8]->IsString()) {
    wxNode_wxWindow* parent = args[0]->IsNull() ? NULL : wxNodeObject::unwrap<wxNode_wxWindow>(args[0]->ToObject()); /* type: _1000 * */
    int id = (int)args[1]->ToInt32()->Value(); /* type: _8725  */
    wxNode_wxPoint* pos = args[2]->IsNull() ? NULL : wxNodeObject::unwrap<wxNode_wxPoint>(args[2]->ToObject()); /* type: _20518  */
    wxNode_wxSize* size = args[3]->IsNull() ? NULL : wxNodeObject::unwrap<wxNode_wxSize>(args[3]->ToObject()); /* type: _20628  */
    int n = (int)args[4]->ToInt32()->Value(); /* type: _165  */
    wxString* choices; /* type: _20631 * */
    long int style = (long int)args[6]->ToInt32()->Value(); /* type: _592  */
    wxNode_wxValidator* validator = args[7]->IsNull() ? NULL : wxNodeObject::unwrap<wxNode_wxValidator>(args[7]->ToObject()); /* type: _59247  */
    v8::String::AsciiValue name(args[8]->ToString()); /* type: _14975  */
    

    wxNode_wxListBox *self = new wxNode_wxListBox(parent, id, *pos, *size, n, choices, style, *validator, *name);
    NodeExEvtHandlerImpl* evtHandler = dynamic_cast<NodeExEvtHandlerImpl*>(self);
    self->wrap(args.This(), self, evtHandler);
    return args.This();
  }
  
  /*
   * id: _36635
   */
  if(args.Length() == 8 && (args[0]->IsNull() || (args[0]->IsObject() && wxNode_wxWindow::AssignableFrom(args[0]->ToObject()->GetConstructorName()))) && args[1]->IsNumber() && (args[2]->IsNull() || (args[2]->IsObject() && wxNode_wxPoint::AssignableFrom(args[2]->ToObject()->GetConstructorName()))) && (args[3]->IsNull() || (args[3]->IsObject() && wxNode_wxSize::AssignableFrom(args[3]->ToObject()->GetConstructorName()))) && args[4]->IsNumber() && args[5]->IsString() && args[6]->IsNumber() && (args[7]->IsNull() || (args[7]->IsObject() && wxNode_wxValidator::AssignableFrom(args[7]->ToObject()->GetConstructorName())))) {
    wxNode_wxWindow* parent = args[0]->IsNull() ? NULL : wxNodeObject::unwrap<wxNode_wxWindow>(args[0]->ToObject()); /* type: _1000 * */
    int id = (int)args[1]->ToInt32()->Value(); /* type: _8725  */
    wxNode_wxPoint* pos = args[2]->IsNull() ? NULL : wxNodeObject::unwrap<wxNode_wxPoint>(args[2]->ToObject()); /* type: _20518  */
    wxNode_wxSize* size = args[3]->IsNull() ? NULL : wxNodeObject::unwrap<wxNode_wxSize>(args[3]->ToObject()); /* type: _20628  */
    int n = (int)args[4]->ToInt32()->Value(); /* type: _165  */
    wxString* choices; /* type: _20631 * */
    long int style = (long int)args[6]->ToInt32()->Value(); /* type: _592  */
    wxNode_wxValidator* validator = args[7]->IsNull() ? NULL : wxNodeObject::unwrap<wxNode_wxValidator>(args[7]->ToObject()); /* type: _59247  */
    

    wxNode_wxListBox *self = new wxNode_wxListBox(parent, id, *pos, *size, n, choices, style, *validator);
    NodeExEvtHandlerImpl* evtHandler = dynamic_cast<NodeExEvtHandlerImpl*>(self);
    self->wrap(args.This(), self, evtHandler);
    return args.This();
  }
  
  /*
   * id: _36635
   */
  if(args.Length() == 7 && (args[0]->IsNull() || (args[0]->IsObject() && wxNode_wxWindow::AssignableFrom(args[0]->ToObject()->GetConstructorName()))) && args[1]->IsNumber() && (args[2]->IsNull() || (args[2]->IsObject() && wxNode_wxPoint::AssignableFrom(args[2]->ToObject()->GetConstructorName()))) && (args[3]->IsNull() || (args[3]->IsObject() && wxNode_wxSize::AssignableFrom(args[3]->ToObject()->GetConstructorName()))) && args[4]->IsNumber() && args[5]->IsString() && args[6]->IsNumber()) {
    wxNode_wxWindow* parent = args[0]->IsNull() ? NULL : wxNodeObject::unwrap<wxNode_wxWindow>(args[0]->ToObject()); /* type: _1000 * */
    int id = (int)args[1]->ToInt32()->Value(); /* type: _8725  */
    wxNode_wxPoint* pos = args[2]->IsNull() ? NULL : wxNodeObject::unwrap<wxNode_wxPoint>(args[2]->ToObject()); /* type: _20518  */
    wxNode_wxSize* size = args[3]->IsNull() ? NULL : wxNodeObject::unwrap<wxNode_wxSize>(args[3]->ToObject()); /* type: _20628  */
    int n = (int)args[4]->ToInt32()->Value(); /* type: _165  */
    wxString* choices; /* type: _20631 * */
    long int style = (long int)args[6]->ToInt32()->Value(); /* type: _592  */
    

    wxNode_wxListBox *self = new wxNode_wxListBox(parent, id, *pos, *size, n, choices, style);
    NodeExEvtHandlerImpl* evtHandler = dynamic_cast<NodeExEvtHandlerImpl*>(self);
    self->wrap(args.This(), self, evtHandler);
    return args.This();
  }
  
  /*
   * id: _36635
   */
  if(args.Length() == 6 && (args[0]->IsNull() || (args[0]->IsObject() && wxNode_wxWindow::AssignableFrom(args[0]->ToObject()->GetConstructorName()))) && args[1]->IsNumber() && (args[2]->IsNull() || (args[2]->IsObject() && wxNode_wxPoint::AssignableFrom(args[2]->ToObject()->GetConstructorName()))) && (args[3]->IsNull() || (args[3]->IsObject() && wxNode_wxSize::AssignableFrom(args[3]->ToObject()->GetConstructorName()))) && args[4]->IsNumber() && args[5]->IsString()) {
    wxNode_wxWindow* parent = args[0]->IsNull() ? NULL : wxNodeObject::unwrap<wxNode_wxWindow>(args[0]->ToObject()); /* type: _1000 * */
    int id = (int)args[1]->ToInt32()->Value(); /* type: _8725  */
    wxNode_wxPoint* pos = args[2]->IsNull() ? NULL : wxNodeObject::unwrap<wxNode_wxPoint>(args[2]->ToObject()); /* type: _20518  */
    wxNode_wxSize* size = args[3]->IsNull() ? NULL : wxNodeObject::unwrap<wxNode_wxSize>(args[3]->ToObject()); /* type: _20628  */
    int n = (int)args[4]->ToInt32()->Value(); /* type: _165  */
    wxString* choices; /* type: _20631 * */
    

    wxNode_wxListBox *self = new wxNode_wxListBox(parent, id, *pos, *size, n, choices);
    NodeExEvtHandlerImpl* evtHandler = dynamic_cast<NodeExEvtHandlerImpl*>(self);
    self->wrap(args.This(), self, evtHandler);
    return args.This();
  }
  
  /*
   * id: _36635
   */
  if(args.Length() == 5 && (args[0]->IsNull() || (args[0]->IsObject() && wxNode_wxWindow::AssignableFrom(args[0]->ToObject()->GetConstructorName()))) && args[1]->IsNumber() && (args[2]->IsNull() || (args[2]->IsObject() && wxNode_wxPoint::AssignableFrom(args[2]->ToObject()->GetConstructorName()))) && (args[3]->IsNull() || (args[3]->IsObject() && wxNode_wxSize::AssignableFrom(args[3]->ToObject()->GetConstructorName()))) && args[4]->IsNumber()) {
    wxNode_wxWindow* parent = args[0]->IsNull() ? NULL : wxNodeObject::unwrap<wxNode_wxWindow>(args[0]->ToObject()); /* type: _1000 * */
    int id = (int)args[1]->ToInt32()->Value(); /* type: _8725  */
    wxNode_wxPoint* pos = args[2]->IsNull() ? NULL : wxNodeObject::unwrap<wxNode_wxPoint>(args[2]->ToObject()); /* type: _20518  */
    wxNode_wxSize* size = args[3]->IsNull() ? NULL : wxNodeObject::unwrap<wxNode_wxSize>(args[3]->ToObject()); /* type: _20628  */
    int n = (int)args[4]->ToInt32()->Value(); /* type: _165  */
    

    wxNode_wxListBox *self = new wxNode_wxListBox(parent, id, *pos, *size, n);
    NodeExEvtHandlerImpl* evtHandler = dynamic_cast<NodeExEvtHandlerImpl*>(self);
    self->wrap(args.This(), self, evtHandler);
    return args.This();
  }
  
  /*
   * id: _36635
   */
  if(args.Length() == 4 && (args[0]->IsNull() || (args[0]->IsObject() && wxNode_wxWindow::AssignableFrom(args[0]->ToObject()->GetConstructorName()))) && args[1]->IsNumber() && (args[2]->IsNull() || (args[2]->IsObject() && wxNode_wxPoint::AssignableFrom(args[2]->ToObject()->GetConstructorName()))) && (args[3]->IsNull() || (args[3]->IsObject() && wxNode_wxSize::AssignableFrom(args[3]->ToObject()->GetConstructorName())))) {
    wxNode_wxWindow* parent = args[0]->IsNull() ? NULL : wxNodeObject::unwrap<wxNode_wxWindow>(args[0]->ToObject()); /* type: _1000 * */
    int id = (int)args[1]->ToInt32()->Value(); /* type: _8725  */
    wxNode_wxPoint* pos = args[2]->IsNull() ? NULL : wxNodeObject::unwrap<wxNode_wxPoint>(args[2]->ToObject()); /* type: _20518  */
    wxNode_wxSize* size = args[3]->IsNull() ? NULL : wxNodeObject::unwrap<wxNode_wxSize>(args[3]->ToObject()); /* type: _20628  */
    

    wxNode_wxListBox *self = new wxNode_wxListBox(parent, id, *pos, *size);
    NodeExEvtHandlerImpl* evtHandler = dynamic_cast<NodeExEvtHandlerImpl*>(self);
    self->wrap(args.This(), self, evtHandler);
    return args.This();
  }
  
  /*
   * id: _36635
   */
  if(args.Length() == 3 && (args[0]->IsNull() || (args[0]->IsObject() && wxNode_wxWindow::AssignableFrom(args[0]->ToObject()->GetConstructorName()))) && args[1]->IsNumber() && (args[2]->IsNull() || (args[2]->IsObject() && wxNode_wxPoint::AssignableFrom(args[2]->ToObject()->GetConstructorName())))) {
    wxNode_wxWindow* parent = args[0]->IsNull() ? NULL : wxNodeObject::unwrap<wxNode_wxWindow>(args[0]->ToObject()); /* type: _1000 * */
    int id = (int)args[1]->ToInt32()->Value(); /* type: _8725  */
    wxNode_wxPoint* pos = args[2]->IsNull() ? NULL : wxNodeObject::unwrap<wxNode_wxPoint>(args[2]->ToObject()); /* type: _20518  */
    

    wxNode_wxListBox *self = new wxNode_wxListBox(parent, id, *pos);
    NodeExEvtHandlerImpl* evtHandler = dynamic_cast<NodeExEvtHandlerImpl*>(self);
    self->wrap(args.This(), self, evtHandler);
    return args.This();
  }
  
  /*
   * id: _36635
   */
  if(args.Length() == 2 && (args[0]->IsNull() || (args[0]->IsObject() && wxNode_wxWindow::AssignableFrom(args[0]->ToObject()->GetConstructorName()))) && args[1]->IsNumber()) {
    wxNode_wxWindow* parent = args[0]->IsNull() ? NULL : wxNodeObject::unwrap<wxNode_wxWindow>(args[0]->ToObject()); /* type: _1000 * */
    int id = (int)args[1]->ToInt32()->Value(); /* type: _8725  */
    

    wxNode_wxListBox *self = new wxNode_wxListBox(parent, id);
    NodeExEvtHandlerImpl* evtHandler = dynamic_cast<NodeExEvtHandlerImpl*>(self);
    self->wrap(args.This(), self, evtHandler);
    return args.This();
  }
  
  /*
   * id: _36636
   */
  if(args.Length() == 8 && (args[0]->IsNull() || (args[0]->IsObject() && wxNode_wxWindow::AssignableFrom(args[0]->ToObject()->GetConstructorName()))) && args[1]->IsNumber() && (args[2]->IsNull() || (args[2]->IsObject() && wxNode_wxPoint::AssignableFrom(args[2]->ToObject()->GetConstructorName()))) && (args[3]->IsNull() || (args[3]->IsObject() && wxNode_wxSize::AssignableFrom(args[3]->ToObject()->GetConstructorName()))) && (args[4]->IsNull() || (args[4]->IsObject() && wxNode_wxArrayString::AssignableFrom(args[4]->ToObject()->GetConstructorName()))) && args[5]->IsNumber() && (args[6]->IsNull() || (args[6]->IsObject() && wxNode_wxValidator::AssignableFrom(args[6]->ToObject()->GetConstructorName()))) && args[7]->IsString()) {
    wxNode_wxWindow* parent = args[0]->IsNull() ? NULL : wxNodeObject::unwrap<wxNode_wxWindow>(args[0]->ToObject()); /* type: _1000 * */
    int id = (int)args[1]->ToInt32()->Value(); /* type: _8725  */
    wxNode_wxPoint* pos = args[2]->IsNull() ? NULL : wxNodeObject::unwrap<wxNode_wxPoint>(args[2]->ToObject()); /* type: _20518  */
    wxNode_wxSize* size = args[3]->IsNull() ? NULL : wxNodeObject::unwrap<wxNode_wxSize>(args[3]->ToObject()); /* type: _20628  */
    wxNode_wxArrayString* choices = args[4]->IsNull() ? NULL : wxNodeObject::unwrap<wxNode_wxArrayString>(args[4]->ToObject()); /* type: _20632  */
    long int style = (long int)args[5]->ToInt32()->Value(); /* type: _592  */
    wxNode_wxValidator* validator = args[6]->IsNull() ? NULL : wxNodeObject::unwrap<wxNode_wxValidator>(args[6]->ToObject()); /* type: _59247  */
    v8::String::AsciiValue name(args[7]->ToString()); /* type: _14975  */
    

    wxNode_wxListBox *self = new wxNode_wxListBox(parent, id, *pos, *size, *choices, style, *validator, *name);
    NodeExEvtHandlerImpl* evtHandler = dynamic_cast<NodeExEvtHandlerImpl*>(self);
    self->wrap(args.This(), self, evtHandler);
    return args.This();
  }
  
  /*
   * id: _36636
   */
  if(args.Length() == 7 && (args[0]->IsNull() || (args[0]->IsObject() && wxNode_wxWindow::AssignableFrom(args[0]->ToObject()->GetConstructorName()))) && args[1]->IsNumber() && (args[2]->IsNull() || (args[2]->IsObject() && wxNode_wxPoint::AssignableFrom(args[2]->ToObject()->GetConstructorName()))) && (args[3]->IsNull() || (args[3]->IsObject() && wxNode_wxSize::AssignableFrom(args[3]->ToObject()->GetConstructorName()))) && (args[4]->IsNull() || (args[4]->IsObject() && wxNode_wxArrayString::AssignableFrom(args[4]->ToObject()->GetConstructorName()))) && args[5]->IsNumber() && (args[6]->IsNull() || (args[6]->IsObject() && wxNode_wxValidator::AssignableFrom(args[6]->ToObject()->GetConstructorName())))) {
    wxNode_wxWindow* parent = args[0]->IsNull() ? NULL : wxNodeObject::unwrap<wxNode_wxWindow>(args[0]->ToObject()); /* type: _1000 * */
    int id = (int)args[1]->ToInt32()->Value(); /* type: _8725  */
    wxNode_wxPoint* pos = args[2]->IsNull() ? NULL : wxNodeObject::unwrap<wxNode_wxPoint>(args[2]->ToObject()); /* type: _20518  */
    wxNode_wxSize* size = args[3]->IsNull() ? NULL : wxNodeObject::unwrap<wxNode_wxSize>(args[3]->ToObject()); /* type: _20628  */
    wxNode_wxArrayString* choices = args[4]->IsNull() ? NULL : wxNodeObject::unwrap<wxNode_wxArrayString>(args[4]->ToObject()); /* type: _20632  */
    long int style = (long int)args[5]->ToInt32()->Value(); /* type: _592  */
    wxNode_wxValidator* validator = args[6]->IsNull() ? NULL : wxNodeObject::unwrap<wxNode_wxValidator>(args[6]->ToObject()); /* type: _59247  */
    

    wxNode_wxListBox *self = new wxNode_wxListBox(parent, id, *pos, *size, *choices, style, *validator);
    NodeExEvtHandlerImpl* evtHandler = dynamic_cast<NodeExEvtHandlerImpl*>(self);
    self->wrap(args.This(), self, evtHandler);
    return args.This();
  }
  
  /*
   * id: _36636
   */
  if(args.Length() == 6 && (args[0]->IsNull() || (args[0]->IsObject() && wxNode_wxWindow::AssignableFrom(args[0]->ToObject()->GetConstructorName()))) && args[1]->IsNumber() && (args[2]->IsNull() || (args[2]->IsObject() && wxNode_wxPoint::AssignableFrom(args[2]->ToObject()->GetConstructorName()))) && (args[3]->IsNull() || (args[3]->IsObject() && wxNode_wxSize::AssignableFrom(args[3]->ToObject()->GetConstructorName()))) && (args[4]->IsNull() || (args[4]->IsObject() && wxNode_wxArrayString::AssignableFrom(args[4]->ToObject()->GetConstructorName()))) && args[5]->IsNumber()) {
    wxNode_wxWindow* parent = args[0]->IsNull() ? NULL : wxNodeObject::unwrap<wxNode_wxWindow>(args[0]->ToObject()); /* type: _1000 * */
    int id = (int)args[1]->ToInt32()->Value(); /* type: _8725  */
    wxNode_wxPoint* pos = args[2]->IsNull() ? NULL : wxNodeObject::unwrap<wxNode_wxPoint>(args[2]->ToObject()); /* type: _20518  */
    wxNode_wxSize* size = args[3]->IsNull() ? NULL : wxNodeObject::unwrap<wxNode_wxSize>(args[3]->ToObject()); /* type: _20628  */
    wxNode_wxArrayString* choices = args[4]->IsNull() ? NULL : wxNodeObject::unwrap<wxNode_wxArrayString>(args[4]->ToObject()); /* type: _20632  */
    long int style = (long int)args[5]->ToInt32()->Value(); /* type: _592  */
    

    wxNode_wxListBox *self = new wxNode_wxListBox(parent, id, *pos, *size, *choices, style);
    NodeExEvtHandlerImpl* evtHandler = dynamic_cast<NodeExEvtHandlerImpl*>(self);
    self->wrap(args.This(), self, evtHandler);
    return args.This();
  }
  
  /*
   * id: _36636
   */
  if(args.Length() == 5 && (args[0]->IsNull() || (args[0]->IsObject() && wxNode_wxWindow::AssignableFrom(args[0]->ToObject()->GetConstructorName()))) && args[1]->IsNumber() && (args[2]->IsNull() || (args[2]->IsObject() && wxNode_wxPoint::AssignableFrom(args[2]->ToObject()->GetConstructorName()))) && (args[3]->IsNull() || (args[3]->IsObject() && wxNode_wxSize::AssignableFrom(args[3]->ToObject()->GetConstructorName()))) && (args[4]->IsNull() || (args[4]->IsObject() && wxNode_wxArrayString::AssignableFrom(args[4]->ToObject()->GetConstructorName())))) {
    wxNode_wxWindow* parent = args[0]->IsNull() ? NULL : wxNodeObject::unwrap<wxNode_wxWindow>(args[0]->ToObject()); /* type: _1000 * */
    int id = (int)args[1]->ToInt32()->Value(); /* type: _8725  */
    wxNode_wxPoint* pos = args[2]->IsNull() ? NULL : wxNodeObject::unwrap<wxNode_wxPoint>(args[2]->ToObject()); /* type: _20518  */
    wxNode_wxSize* size = args[3]->IsNull() ? NULL : wxNodeObject::unwrap<wxNode_wxSize>(args[3]->ToObject()); /* type: _20628  */
    wxNode_wxArrayString* choices = args[4]->IsNull() ? NULL : wxNodeObject::unwrap<wxNode_wxArrayString>(args[4]->ToObject()); /* type: _20632  */
    

    wxNode_wxListBox *self = new wxNode_wxListBox(parent, id, *pos, *size, *choices);
    NodeExEvtHandlerImpl* evtHandler = dynamic_cast<NodeExEvtHandlerImpl*>(self);
    self->wrap(args.This(), self, evtHandler);
    return args.This();
  }
  
  

  std::ostringstream errStr;
  errStr << "Could not find matching constructor for arguments (class name: wxListBox).\n";
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
   * id: _47289
   */
  if(args.Length() == 3 && args[0]->IsNumber() && args[1]->IsString() && args[2]->IsNumber()) {
    unsigned int nItems = (unsigned int)args[0]->ToInt32()->Value(); /* type: _44  */
    wxString* items; /* type: _20631 * */
    unsigned int pos = (unsigned int)args[2]->ToInt32()->Value(); /* type: _44  */
    

    self->InsertItems(nItems, items, pos);

    return v8::Undefined();
  }
  
  /*
   * id: _47290
   */
  if(args.Length() == 2 && (args[0]->IsNull() || (args[0]->IsObject() && wxNode_wxArrayString::AssignableFrom(args[0]->ToObject()->GetConstructorName()))) && args[1]->IsNumber()) {
    wxNode_wxArrayString* items = args[0]->IsNull() ? NULL : wxNodeObject::unwrap<wxNode_wxArrayString>(args[0]->ToObject()); /* type: _20632  */
    unsigned int pos = (unsigned int)args[1]->ToInt32()->Value(); /* type: _44  */
    

    self->InsertItems(*items, pos);

    return v8::Undefined();
  }
  

  std::ostringstream errStr;
  errStr << "Could not find matching method for arguments (method name: wxListBox::InsertItems).\n";
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
   * id: _47291
   */
  if(args.Length() == 1 && args[0]->IsNumber()) {
    int n = (int)args[0]->ToInt32()->Value(); /* type: _165  */
    

    bool returnVal = self->IsSelected(n);

    return scope.Close(v8::Boolean::New(returnVal));
  }
  

  std::ostringstream errStr;
  errStr << "Could not find matching method for arguments (method name: wxListBox::IsSelected).\n";
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
   * id: _47292
   */
  if(args.Length() == 1 && args[0]->IsNumber()) {
    int n = (int)args[0]->ToInt32()->Value(); /* type: _165  */
    

    self->SetSelection(n);

    return v8::Undefined();
  }
  
  /*
   * id: _47293
   */
  if(args.Length() == 2 && args[0]->IsNumber() && args[1]->IsBoolean()) {
    int n = (int)args[0]->ToInt32()->Value(); /* type: _165  */
    bool select = args[1]->ToBoolean()->Value(); /* type: _14830  */
    

    self->SetSelection(n, select);

    return v8::Undefined();
  }
  

  std::ostringstream errStr;
  errStr << "Could not find matching method for arguments (method name: wxListBox::SetSelection).\n";
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
   * id: _47294
   */
  if(args.Length() == 1 && args[0]->IsNumber()) {
    int n = (int)args[0]->ToInt32()->Value(); /* type: _165  */
    

    self->Deselect(n);

    return v8::Undefined();
  }
  

  std::ostringstream errStr;
  errStr << "Could not find matching method for arguments (method name: wxListBox::Deselect).\n";
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
   * id: _47295
   */
  if(args.Length() == 1 && args[0]->IsNumber()) {
    int itemToLeaveSelected = (int)args[0]->ToInt32()->Value(); /* type: _165  */
    

    self->DeselectAll(itemToLeaveSelected);

    return v8::Undefined();
  }
  
  /*
   * id: _47295
   */
  if(args.Length() == 0) {
    

    self->DeselectAll();

    return v8::Undefined();
  }
  

  std::ostringstream errStr;
  errStr << "Could not find matching method for arguments (method name: wxListBox::DeselectAll).\n";
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
   * id: _47296
   */
  if(args.Length() == 2 && args[0]->IsString() && args[1]->IsBoolean()) {
    v8::String::AsciiValue s(args[0]->ToString()); /* type: _14975  */
    bool select = args[1]->ToBoolean()->Value(); /* type: _14830  */
    

    bool returnVal = self->SetStringSelection(*s, select);

    return scope.Close(v8::Boolean::New(returnVal));
  }
  
  /*
   * id: _47297
   */
  if(args.Length() == 1 && args[0]->IsString()) {
    v8::String::AsciiValue s(args[0]->ToString()); /* type: _14975  */
    

    bool returnVal = self->SetStringSelection(*s);

    return scope.Close(v8::Boolean::New(returnVal));
  }
  

  std::ostringstream errStr;
  errStr << "Could not find matching method for arguments (method name: wxListBox::SetStringSelection).\n";
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
   * id: _47298
   */
  if(args.Length() == 1 && (args[0]->IsNull() || (args[0]->IsObject() && wxNode_wxArrayInt::AssignableFrom(args[0]->ToObject()->GetConstructorName())))) {
    wxNode_wxArrayInt* aSelections = args[0]->IsNull() ? NULL : wxNodeObject::unwrap<wxNode_wxArrayInt>(args[0]->ToObject()); /* type: _22614  */
    

    int returnVal = self->GetSelections(*aSelections);

    return scope.Close(v8::Number::New(returnVal));
  }
  

  std::ostringstream errStr;
  errStr << "Could not find matching method for arguments (method name: wxListBox::GetSelections).\n";
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
   * id: _47299
   */
  if(args.Length() == 1 && args[0]->IsNumber()) {
    int n = (int)args[0]->ToInt32()->Value(); /* type: _165  */
    

    self->SetFirstItem(n);

    return v8::Undefined();
  }
  
  /*
   * id: _47300
   */
  if(args.Length() == 1 && args[0]->IsString()) {
    v8::String::AsciiValue s(args[0]->ToString()); /* type: _14975  */
    

    self->SetFirstItem(*s);

    return v8::Undefined();
  }
  

  std::ostringstream errStr;
  errStr << "Could not find matching method for arguments (method name: wxListBox::SetFirstItem).\n";
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
   * id: _47301
   */
  if(args.Length() == 1 && args[0]->IsNumber()) {
    int n = (int)args[0]->ToInt32()->Value(); /* type: _165  */
    

    self->EnsureVisible(n);

    return v8::Undefined();
  }
  

  std::ostringstream errStr;
  errStr << "Could not find matching method for arguments (method name: wxListBox::EnsureVisible).\n";
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
   * id: _47302
   */
  if(args.Length() == 1 && args[0]->IsString()) {
    v8::String::AsciiValue s(args[0]->ToString()); /* type: _14975  */
    

    self->AppendAndEnsureVisible(*s);

    return v8::Undefined();
  }
  

  std::ostringstream errStr;
  errStr << "Could not find matching method for arguments (method name: wxListBox::AppendAndEnsureVisible).\n";
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
   * id: _47303
   */
  if(args.Length() == 0) {
    

    bool returnVal = self->HasMultipleSelection();

    return scope.Close(v8::Boolean::New(returnVal));
  }
  

  std::ostringstream errStr;
  errStr << "Could not find matching method for arguments (method name: wxListBox::HasMultipleSelection).\n";
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
   * id: _47304
   */
  if(args.Length() == 0) {
    

    bool returnVal = self->IsSorted();

    return scope.Close(v8::Boolean::New(returnVal));
  }
  
  /*
   * id: _30676
   */
  if(args.Length() == 0) {
    

    bool returnVal = self->IsSorted();

    return scope.Close(v8::Boolean::New(returnVal));
  }
  

  std::ostringstream errStr;
  errStr << "Could not find matching method for arguments (method name: wxListBox::IsSorted).\n";
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
   * id: _47305
   */
  if(args.Length() == 1 && (args[0]->IsNull() || (args[0]->IsObject() && wxNode_wxCommandEvent::AssignableFrom(args[0]->ToObject()->GetConstructorName())))) {
    wxNode_wxCommandEvent* event = args[0]->IsNull() ? NULL : wxNodeObject::unwrap<wxNode_wxCommandEvent>(args[0]->ToObject()); /* type: _58930  */
    

    self->Command(*event);

    return v8::Undefined();
  }
  

  std::ostringstream errStr;
  errStr << "Could not find matching method for arguments (method name: wxListBox::Command).\n";
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
   * id: _47306
   */
  if(args.Length() == 1 && (args[0]->IsNull() || (args[0]->IsObject() && wxNode_wxPoint::AssignableFrom(args[0]->ToObject()->GetConstructorName())))) {
    wxNode_wxPoint* point = args[0]->IsNull() ? NULL : wxNodeObject::unwrap<wxNode_wxPoint>(args[0]->ToObject()); /* type: _20518  */
    

    int returnVal = self->HitTest(*point);

    return scope.Close(v8::Number::New(returnVal));
  }
  
  /*
   * id: _47307
   */
  if(args.Length() == 2 && args[0]->IsNumber() && args[1]->IsNumber()) {
    int x = (int)args[0]->ToInt32()->Value(); /* type: _165  */
    int y = (int)args[1]->ToInt32()->Value(); /* type: _165  */
    

    int returnVal = self->HitTest(x, y);

    return scope.Close(v8::Number::New(returnVal));
  }
  

  std::ostringstream errStr;
  errStr << "Could not find matching method for arguments (method name: wxListBox::HitTest).\n";
  errStr << "  arg count: " << args.Length() << "\n";
  for(int i = 0; i < args.Length(); i++) {
    v8::String::AsciiValue argStr(args[i]);
    errStr << "  arg[" << i << "]: " << *argStr << "\n";
  }
  return v8::ThrowException(v8::Exception::TypeError(v8::String::New(errStr.str().c_str())));
}

/*static*/ v8::Handle<v8::Value> wxNode_wxListBox::_Append(const v8::Arguments& args) {
  v8::HandleScope scope;
  wxNode_wxListBox* self = unwrap<wxNode_wxListBox>(args.This());

  
  /*
   * id: _30649
   */
  if(args.Length() == 1 && args[0]->IsString()) {
    v8::String::AsciiValue item(args[0]->ToString()); /* type: _14975  */
    

    int returnVal = self->Append(*item);

    return scope.Close(v8::Number::New(returnVal));
  }
  
  /*
   * id: _30651
   */
  if(args.Length() == 2 && args[0]->IsString() && (args[1]->IsNull() || (args[1]->IsObject() && wxNode_wxClientData::AssignableFrom(args[1]->ToObject()->GetConstructorName())))) {
    v8::String::AsciiValue item(args[0]->ToString()); /* type: _14975  */
    wxNode_wxClientData* clientData = args[1]->IsNull() ? NULL : wxNodeObject::unwrap<wxNode_wxClientData>(args[1]->ToObject()); /* type: _59309 * */
    

    int returnVal = self->Append(*item, clientData);

    return scope.Close(v8::Number::New(returnVal));
  }
  
  /*
   * id: _30652
   */
  if(args.Length() == 1 && (args[0]->IsNull() || (args[0]->IsObject() && wxNode_wxArrayString::AssignableFrom(args[0]->ToObject()->GetConstructorName())))) {
    wxNode_wxArrayString* items = args[0]->IsNull() ? NULL : wxNodeObject::unwrap<wxNode_wxArrayString>(args[0]->ToObject()); /* type: _20632  */
    

    int returnVal = self->Append(*items);

    return scope.Close(v8::Number::New(returnVal));
  }
  
  /*
   * id: _30654
   */
  if(args.Length() == 2 && (args[0]->IsNull() || (args[0]->IsObject() && wxNode_wxArrayString::AssignableFrom(args[0]->ToObject()->GetConstructorName()))) && false) {
    wxNode_wxArrayString* items = args[0]->IsNull() ? NULL : wxNodeObject::unwrap<wxNode_wxArrayString>(args[0]->ToObject()); /* type: _20632  */
    wxClientData* clientData; /* type: _63378 ** */
    

    int returnVal = self->Append(*items, &clientData);

    return scope.Close(v8::Number::New(returnVal));
  }
  
  /*
   * id: _30655
   */
  if(args.Length() == 2 && args[0]->IsNumber() && args[1]->IsString()) {
    unsigned int n = (unsigned int)args[0]->ToInt32()->Value(); /* type: _44  */
    wxString* items; /* type: _20631 * */
    

    int returnVal = self->Append(n, items);

    return scope.Close(v8::Number::New(returnVal));
  }
  
  /*
   * id: _30657
   */
  if(args.Length() == 3 && args[0]->IsNumber() && args[1]->IsString() && false) {
    unsigned int n = (unsigned int)args[0]->ToInt32()->Value(); /* type: _44  */
    wxString* items; /* type: _20631 * */
    wxClientData* clientData; /* type: _63378 ** */
    

    int returnVal = self->Append(n, items, &clientData);

    return scope.Close(v8::Number::New(returnVal));
  }
  

  std::ostringstream errStr;
  errStr << "Could not find matching method for arguments (method name: wxListBox::Append).\n";
  errStr << "  arg count: " << args.Length() << "\n";
  for(int i = 0; i < args.Length(); i++) {
    v8::String::AsciiValue argStr(args[i]);
    errStr << "  arg[" << i << "]: " << *argStr << "\n";
  }
  return v8::ThrowException(v8::Exception::TypeError(v8::String::New(errStr.str().c_str())));
}

/*static*/ v8::Handle<v8::Value> wxNode_wxListBox::_AppendString(const v8::Arguments& args) {
  v8::HandleScope scope;
  wxNode_wxListBox* self = unwrap<wxNode_wxListBox>(args.This());

  
  /*
   * id: _30658
   */
  if(args.Length() == 1 && args[0]->IsString()) {
    v8::String::AsciiValue item(args[0]->ToString()); /* type: _14975  */
    

    self->AppendString(*item);

    return v8::Undefined();
  }
  

  std::ostringstream errStr;
  errStr << "Could not find matching method for arguments (method name: wxListBox::AppendString).\n";
  errStr << "  arg count: " << args.Length() << "\n";
  for(int i = 0; i < args.Length(); i++) {
    v8::String::AsciiValue argStr(args[i]);
    errStr << "  arg[" << i << "]: " << *argStr << "\n";
  }
  return v8::ThrowException(v8::Exception::TypeError(v8::String::New(errStr.str().c_str())));
}

/*static*/ v8::Handle<v8::Value> wxNode_wxListBox::_Insert(const v8::Arguments& args) {
  v8::HandleScope scope;
  wxNode_wxListBox* self = unwrap<wxNode_wxListBox>(args.This());

  
  /*
   * id: _30659
   */
  if(args.Length() == 2 && args[0]->IsString() && args[1]->IsNumber()) {
    v8::String::AsciiValue item(args[0]->ToString()); /* type: _14975  */
    unsigned int pos = (unsigned int)args[1]->ToInt32()->Value(); /* type: _44  */
    

    int returnVal = self->Insert(*item, pos);

    return scope.Close(v8::Number::New(returnVal));
  }
  
  /*
   * id: _30661
   */
  if(args.Length() == 3 && args[0]->IsString() && args[1]->IsNumber() && (args[2]->IsNull() || (args[2]->IsObject() && wxNode_wxClientData::AssignableFrom(args[2]->ToObject()->GetConstructorName())))) {
    v8::String::AsciiValue item(args[0]->ToString()); /* type: _14975  */
    unsigned int pos = (unsigned int)args[1]->ToInt32()->Value(); /* type: _44  */
    wxNode_wxClientData* clientData = args[2]->IsNull() ? NULL : wxNodeObject::unwrap<wxNode_wxClientData>(args[2]->ToObject()); /* type: _59309 * */
    

    int returnVal = self->Insert(*item, pos, clientData);

    return scope.Close(v8::Number::New(returnVal));
  }
  
  /*
   * id: _30662
   */
  if(args.Length() == 2 && (args[0]->IsNull() || (args[0]->IsObject() && wxNode_wxArrayString::AssignableFrom(args[0]->ToObject()->GetConstructorName()))) && args[1]->IsNumber()) {
    wxNode_wxArrayString* items = args[0]->IsNull() ? NULL : wxNodeObject::unwrap<wxNode_wxArrayString>(args[0]->ToObject()); /* type: _20632  */
    unsigned int pos = (unsigned int)args[1]->ToInt32()->Value(); /* type: _44  */
    

    int returnVal = self->Insert(*items, pos);

    return scope.Close(v8::Number::New(returnVal));
  }
  
  /*
   * id: _30664
   */
  if(args.Length() == 3 && (args[0]->IsNull() || (args[0]->IsObject() && wxNode_wxArrayString::AssignableFrom(args[0]->ToObject()->GetConstructorName()))) && args[1]->IsNumber() && false) {
    wxNode_wxArrayString* items = args[0]->IsNull() ? NULL : wxNodeObject::unwrap<wxNode_wxArrayString>(args[0]->ToObject()); /* type: _20632  */
    unsigned int pos = (unsigned int)args[1]->ToInt32()->Value(); /* type: _44  */
    wxClientData* clientData; /* type: _63378 ** */
    

    int returnVal = self->Insert(*items, pos, &clientData);

    return scope.Close(v8::Number::New(returnVal));
  }
  
  /*
   * id: _30665
   */
  if(args.Length() == 3 && args[0]->IsNumber() && args[1]->IsString() && args[2]->IsNumber()) {
    unsigned int n = (unsigned int)args[0]->ToInt32()->Value(); /* type: _44  */
    wxString* items; /* type: _20631 * */
    unsigned int pos = (unsigned int)args[2]->ToInt32()->Value(); /* type: _44  */
    

    int returnVal = self->Insert(n, items, pos);

    return scope.Close(v8::Number::New(returnVal));
  }
  
  /*
   * id: _30667
   */
  if(args.Length() == 4 && args[0]->IsNumber() && args[1]->IsString() && args[2]->IsNumber() && false) {
    unsigned int n = (unsigned int)args[0]->ToInt32()->Value(); /* type: _44  */
    wxString* items; /* type: _20631 * */
    unsigned int pos = (unsigned int)args[2]->ToInt32()->Value(); /* type: _44  */
    wxClientData* clientData; /* type: _63378 ** */
    

    int returnVal = self->Insert(n, items, pos, &clientData);

    return scope.Close(v8::Number::New(returnVal));
  }
  

  std::ostringstream errStr;
  errStr << "Could not find matching method for arguments (method name: wxListBox::Insert).\n";
  errStr << "  arg count: " << args.Length() << "\n";
  for(int i = 0; i < args.Length(); i++) {
    v8::String::AsciiValue argStr(args[i]);
    errStr << "  arg[" << i << "]: " << *argStr << "\n";
  }
  return v8::ThrowException(v8::Exception::TypeError(v8::String::New(errStr.str().c_str())));
}

/*static*/ v8::Handle<v8::Value> wxNode_wxListBox::_Set(const v8::Arguments& args) {
  v8::HandleScope scope;
  wxNode_wxListBox* self = unwrap<wxNode_wxListBox>(args.This());

  
  /*
   * id: _30668
   */
  if(args.Length() == 1 && (args[0]->IsNull() || (args[0]->IsObject() && wxNode_wxArrayString::AssignableFrom(args[0]->ToObject()->GetConstructorName())))) {
    wxNode_wxArrayString* items = args[0]->IsNull() ? NULL : wxNodeObject::unwrap<wxNode_wxArrayString>(args[0]->ToObject()); /* type: _20632  */
    

    self->Set(*items);

    return v8::Undefined();
  }
  
  /*
   * id: _30670
   */
  if(args.Length() == 2 && (args[0]->IsNull() || (args[0]->IsObject() && wxNode_wxArrayString::AssignableFrom(args[0]->ToObject()->GetConstructorName()))) && false) {
    wxNode_wxArrayString* items = args[0]->IsNull() ? NULL : wxNodeObject::unwrap<wxNode_wxArrayString>(args[0]->ToObject()); /* type: _20632  */
    wxClientData* clientData; /* type: _63378 ** */
    

    self->Set(*items, &clientData);

    return v8::Undefined();
  }
  
  /*
   * id: _30671
   */
  if(args.Length() == 2 && args[0]->IsNumber() && args[1]->IsString()) {
    unsigned int n = (unsigned int)args[0]->ToInt32()->Value(); /* type: _44  */
    wxString* items; /* type: _20631 * */
    

    self->Set(n, items);

    return v8::Undefined();
  }
  
  /*
   * id: _30673
   */
  if(args.Length() == 3 && args[0]->IsNumber() && args[1]->IsString() && false) {
    unsigned int n = (unsigned int)args[0]->ToInt32()->Value(); /* type: _44  */
    wxString* items; /* type: _20631 * */
    wxClientData* clientData; /* type: _63378 ** */
    

    self->Set(n, items, &clientData);

    return v8::Undefined();
  }
  

  std::ostringstream errStr;
  errStr << "Could not find matching method for arguments (method name: wxListBox::Set).\n";
  errStr << "  arg count: " << args.Length() << "\n";
  for(int i = 0; i < args.Length(); i++) {
    v8::String::AsciiValue argStr(args[i]);
    errStr << "  arg[" << i << "]: " << *argStr << "\n";
  }
  return v8::ThrowException(v8::Exception::TypeError(v8::String::New(errStr.str().c_str())));
}

/*static*/ v8::Handle<v8::Value> wxNode_wxListBox::_Clear(const v8::Arguments& args) {
  v8::HandleScope scope;
  wxNode_wxListBox* self = unwrap<wxNode_wxListBox>(args.This());

  
  /*
   * id: _30674
   */
  if(args.Length() == 0) {
    

    self->Clear();

    return v8::Undefined();
  }
  

  std::ostringstream errStr;
  errStr << "Could not find matching method for arguments (method name: wxListBox::Clear).\n";
  errStr << "  arg count: " << args.Length() << "\n";
  for(int i = 0; i < args.Length(); i++) {
    v8::String::AsciiValue argStr(args[i]);
    errStr << "  arg[" << i << "]: " << *argStr << "\n";
  }
  return v8::ThrowException(v8::Exception::TypeError(v8::String::New(errStr.str().c_str())));
}

/*static*/ v8::Handle<v8::Value> wxNode_wxListBox::_Delete(const v8::Arguments& args) {
  v8::HandleScope scope;
  wxNode_wxListBox* self = unwrap<wxNode_wxListBox>(args.This());

  
  /*
   * id: _30675
   */
  if(args.Length() == 1 && args[0]->IsNumber()) {
    unsigned int pos = (unsigned int)args[0]->ToInt32()->Value(); /* type: _44  */
    

    self->Delete(pos);

    return v8::Undefined();
  }
  

  std::ostringstream errStr;
  errStr << "Could not find matching method for arguments (method name: wxListBox::Delete).\n";
  errStr << "  arg count: " << args.Length() << "\n";
  for(int i = 0; i < args.Length(); i++) {
    v8::String::AsciiValue argStr(args[i]);
    errStr << "  arg[" << i << "]: " << *argStr << "\n";
  }
  return v8::ThrowException(v8::Exception::TypeError(v8::String::New(errStr.str().c_str())));
}

/*static*/ v8::Handle<v8::Value> wxNode_wxListBox::_SetClientData(const v8::Arguments& args) {
  v8::HandleScope scope;
  wxNode_wxListBox* self = unwrap<wxNode_wxListBox>(args.This());

  

  std::ostringstream errStr;
  errStr << "Could not find matching method for arguments (method name: wxListBox::SetClientData).\n";
  errStr << "  arg count: " << args.Length() << "\n";
  for(int i = 0; i < args.Length(); i++) {
    v8::String::AsciiValue argStr(args[i]);
    errStr << "  arg[" << i << "]: " << *argStr << "\n";
  }
  return v8::ThrowException(v8::Exception::TypeError(v8::String::New(errStr.str().c_str())));
}

/*static*/ v8::Handle<v8::Value> wxNode_wxListBox::_GetClientData(const v8::Arguments& args) {
  v8::HandleScope scope;
  wxNode_wxListBox* self = unwrap<wxNode_wxListBox>(args.This());

  
  /*
   * id: _30678
   */
  if(args.Length() == 1 && args[0]->IsNumber()) {
    unsigned int n = (unsigned int)args[0]->ToInt32()->Value(); /* type: _44  */
    

    self->GetClientData(n);

    return v8::Undefined();
  }
  

  std::ostringstream errStr;
  errStr << "Could not find matching method for arguments (method name: wxListBox::GetClientData).\n";
  errStr << "  arg count: " << args.Length() << "\n";
  for(int i = 0; i < args.Length(); i++) {
    v8::String::AsciiValue argStr(args[i]);
    errStr << "  arg[" << i << "]: " << *argStr << "\n";
  }
  return v8::ThrowException(v8::Exception::TypeError(v8::String::New(errStr.str().c_str())));
}

/*static*/ v8::Handle<v8::Value> wxNode_wxListBox::_SetClientObject(const v8::Arguments& args) {
  v8::HandleScope scope;
  wxNode_wxListBox* self = unwrap<wxNode_wxListBox>(args.This());

  
  /*
   * id: _30679
   */
  if(args.Length() == 2 && args[0]->IsNumber() && (args[1]->IsNull() || (args[1]->IsObject() && wxNode_wxClientData::AssignableFrom(args[1]->ToObject()->GetConstructorName())))) {
    unsigned int n = (unsigned int)args[0]->ToInt32()->Value(); /* type: _44  */
    wxNode_wxClientData* clientData = args[1]->IsNull() ? NULL : wxNodeObject::unwrap<wxNode_wxClientData>(args[1]->ToObject()); /* type: _59309 * */
    

    self->SetClientObject(n, clientData);

    return v8::Undefined();
  }
  

  std::ostringstream errStr;
  errStr << "Could not find matching method for arguments (method name: wxListBox::SetClientObject).\n";
  errStr << "  arg count: " << args.Length() << "\n";
  for(int i = 0; i < args.Length(); i++) {
    v8::String::AsciiValue argStr(args[i]);
    errStr << "  arg[" << i << "]: " << *argStr << "\n";
  }
  return v8::ThrowException(v8::Exception::TypeError(v8::String::New(errStr.str().c_str())));
}

/*static*/ v8::Handle<v8::Value> wxNode_wxListBox::_GetClientObject(const v8::Arguments& args) {
  v8::HandleScope scope;
  wxNode_wxListBox* self = unwrap<wxNode_wxListBox>(args.This());

  
  /*
   * id: _30680
   */
  if(args.Length() == 1 && args[0]->IsNumber()) {
    unsigned int n = (unsigned int)args[0]->ToInt32()->Value(); /* type: _44  */
    

    wxClientData* returnVal = self->GetClientObject(n);

    return scope.Close(wxNode_wxClientData::New(returnVal));
  }
  

  std::ostringstream errStr;
  errStr << "Could not find matching method for arguments (method name: wxListBox::GetClientObject).\n";
  errStr << "  arg count: " << args.Length() << "\n";
  for(int i = 0; i < args.Length(); i++) {
    v8::String::AsciiValue argStr(args[i]);
    errStr << "  arg[" << i << "]: " << *argStr << "\n";
  }
  return v8::ThrowException(v8::Exception::TypeError(v8::String::New(errStr.str().c_str())));
}

/*static*/ v8::Handle<v8::Value> wxNode_wxListBox::_DetachClientObject(const v8::Arguments& args) {
  v8::HandleScope scope;
  wxNode_wxListBox* self = unwrap<wxNode_wxListBox>(args.This());

  
  /*
   * id: _30681
   */
  if(args.Length() == 1 && args[0]->IsNumber()) {
    unsigned int n = (unsigned int)args[0]->ToInt32()->Value(); /* type: _44  */
    

    wxClientData* returnVal = self->DetachClientObject(n);

    return scope.Close(wxNode_wxClientData::New(returnVal));
  }
  

  std::ostringstream errStr;
  errStr << "Could not find matching method for arguments (method name: wxListBox::DetachClientObject).\n";
  errStr << "  arg count: " << args.Length() << "\n";
  for(int i = 0; i < args.Length(); i++) {
    v8::String::AsciiValue argStr(args[i]);
    errStr << "  arg[" << i << "]: " << *argStr << "\n";
  }
  return v8::ThrowException(v8::Exception::TypeError(v8::String::New(errStr.str().c_str())));
}

/*static*/ v8::Handle<v8::Value> wxNode_wxListBox::_GetClientDataType(const v8::Arguments& args) {
  v8::HandleScope scope;
  wxNode_wxListBox* self = unwrap<wxNode_wxListBox>(args.This());

  
  /*
   * id: _30682
   */
  if(args.Length() == 0) {
    

    int returnVal = (int)self->GetClientDataType();

    return scope.Close(v8::Number::New(returnVal));
  }
  

  std::ostringstream errStr;
  errStr << "Could not find matching method for arguments (method name: wxListBox::GetClientDataType).\n";
  errStr << "  arg count: " << args.Length() << "\n";
  for(int i = 0; i < args.Length(); i++) {
    v8::String::AsciiValue argStr(args[i]);
    errStr << "  arg[" << i << "]: " << *argStr << "\n";
  }
  return v8::ThrowException(v8::Exception::TypeError(v8::String::New(errStr.str().c_str())));
}

/*static*/ v8::Handle<v8::Value> wxNode_wxListBox::_HasClientData(const v8::Arguments& args) {
  v8::HandleScope scope;
  wxNode_wxListBox* self = unwrap<wxNode_wxListBox>(args.This());

  
  /*
   * id: _30683
   */
  if(args.Length() == 0) {
    

    bool returnVal = self->HasClientData();

    return scope.Close(v8::Boolean::New(returnVal));
  }
  

  std::ostringstream errStr;
  errStr << "Could not find matching method for arguments (method name: wxListBox::HasClientData).\n";
  errStr << "  arg count: " << args.Length() << "\n";
  for(int i = 0; i < args.Length(); i++) {
    v8::String::AsciiValue argStr(args[i]);
    errStr << "  arg[" << i << "]: " << *argStr << "\n";
  }
  return v8::ThrowException(v8::Exception::TypeError(v8::String::New(errStr.str().c_str())));
}

/*static*/ v8::Handle<v8::Value> wxNode_wxListBox::_HasClientObjectData(const v8::Arguments& args) {
  v8::HandleScope scope;
  wxNode_wxListBox* self = unwrap<wxNode_wxListBox>(args.This());

  
  /*
   * id: _30684
   */
  if(args.Length() == 0) {
    

    bool returnVal = self->HasClientObjectData();

    return scope.Close(v8::Boolean::New(returnVal));
  }
  

  std::ostringstream errStr;
  errStr << "Could not find matching method for arguments (method name: wxListBox::HasClientObjectData).\n";
  errStr << "  arg count: " << args.Length() << "\n";
  for(int i = 0; i < args.Length(); i++) {
    v8::String::AsciiValue argStr(args[i]);
    errStr << "  arg[" << i << "]: " << *argStr << "\n";
  }
  return v8::ThrowException(v8::Exception::TypeError(v8::String::New(errStr.str().c_str())));
}

/*static*/ v8::Handle<v8::Value> wxNode_wxListBox::_HasClientUntypedData(const v8::Arguments& args) {
  v8::HandleScope scope;
  wxNode_wxListBox* self = unwrap<wxNode_wxListBox>(args.This());

  
  /*
   * id: _30685
   */
  if(args.Length() == 0) {
    

    bool returnVal = self->HasClientUntypedData();

    return scope.Close(v8::Boolean::New(returnVal));
  }
  

  std::ostringstream errStr;
  errStr << "Could not find matching method for arguments (method name: wxListBox::HasClientUntypedData).\n";
  errStr << "  arg count: " << args.Length() << "\n";
  for(int i = 0; i < args.Length(); i++) {
    v8::String::AsciiValue argStr(args[i]);
    errStr << "  arg[" << i << "]: " << *argStr << "\n";
  }
  return v8::ThrowException(v8::Exception::TypeError(v8::String::New(errStr.str().c_str())));
}

