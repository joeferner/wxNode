
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
#include "wxNode_wxVisualAttributes.h"


/* static */ v8::Persistent<v8::FunctionTemplate> wxNode_wxControl::s_ct;



wxNode_wxControl::wxNode_wxControl()
  : wxControl()
{

}

wxNode_wxControl::wxNode_wxControl(wxWindow* parent, int id, wxPoint& pos, wxSize& size, long int style, wxValidator& validator, const wxString& name)
  : wxControl(parent, id, pos, size, style, validator, name)
{

}

wxNode_wxControl::wxNode_wxControl(wxWindow* parent, int id, wxPoint& pos, wxSize& size, long int style, wxValidator& validator)
  : wxControl(parent, id, pos, size, style, validator)
{

}

wxNode_wxControl::wxNode_wxControl(wxWindow* parent, int id, wxPoint& pos, wxSize& size, long int style)
  : wxControl(parent, id, pos, size, style)
{

}

wxNode_wxControl::wxNode_wxControl(wxWindow* parent, int id, wxPoint& pos, wxSize& size)
  : wxControl(parent, id, pos, size)
{

}

wxNode_wxControl::wxNode_wxControl(wxWindow* parent, int id, wxPoint& pos)
  : wxControl(parent, id, pos)
{

}

wxNode_wxControl::wxNode_wxControl(wxWindow* parent, int id)
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
  NODE_SET_METHOD(target, "removeMnemonics", _RemoveMnemonics);
  NODE_SET_METHOD(target, "escapeMnemonics", _EscapeMnemonics);
  NODE_SET_METHOD(target, "ellipsize", _Ellipsize);
  NODE_SET_METHOD(target, "findAccelIndex", _FindAccelIndex);
  NODE_SET_METHOD(target, "getCompositeControlsDefaultAttributes", _GetCompositeControlsDefaultAttributes);
  
}

/*static*/ v8::Handle<v8::Value> wxNode_wxControl::New(wxNode_wxControl* obj) {
  v8::HandleScope scope;

  if(obj == NULL) {
    return scope.Close(v8::Null());
  }
  
  v8::Local<v8::FunctionTemplate> returnObjFt = v8::FunctionTemplate::New(wxNodeObject::NewFunc);
  returnObjFt->InstanceTemplate()->SetInternalFieldCount(2);
  returnObjFt->SetClassName(v8::String::NewSymbol("wxControl"));
  wxNode_wxControl::AddMethods(returnObjFt);

  v8::Local<v8::Function> returnObjFn = returnObjFt->GetFunction();
  v8::Handle<v8::Value> returnObjArgs[0];
  v8::Local<v8::Object> returnObj = returnObjFn->CallAsConstructor(0, returnObjArgs)->ToObject();
  returnObj->SetPointerInInternalField(0, obj);
  NodeExEvtHandlerImpl* evtHandler = dynamic_cast<NodeExEvtHandlerImpl*>(obj);
  returnObj->SetPointerInInternalField(1, evtHandler);

  return scope.Close(returnObj);
}

/*static*/ v8::Handle<v8::Value> wxNode_wxControl::New(wxControl* obj) {
  v8::HandleScope scope;

  if(obj == NULL) {
    return scope.Close(v8::Null());
  }
  
  v8::Local<v8::FunctionTemplate> returnObjFt = v8::FunctionTemplate::New(wxNodeObject::NewFunc);
  returnObjFt->InstanceTemplate()->SetInternalFieldCount(2);
  returnObjFt->SetClassName(v8::String::NewSymbol("wxControl"));
  wxNode_wxControl::AddMethods(returnObjFt);

  v8::Local<v8::Function> returnObjFn = returnObjFt->GetFunction();
  v8::Handle<v8::Value> returnObjArgs[0];
  v8::Local<v8::Object> returnObj = returnObjFn->CallAsConstructor(0, returnObjArgs)->ToObject();
  returnObj->SetPointerInInternalField(0, obj);
  returnObj->SetPointerInInternalField(1, new NodeExEvtHandlerImplWrap(returnObj));

  return scope.Close(returnObj);
}

/*static*/ v8::Handle<v8::Value> wxNode_wxControl::NewCopy(wxControl& obj) {
  v8::HandleScope scope;
  wxNode_wxControl* returnVal = new wxNode_wxControl();
  memcpy(dynamic_cast<wxControl*>(returnVal), &obj, sizeof(wxControl));
  return scope.Close(New(returnVal));

}

/*static*/ bool wxNode_wxControl::AssignableFrom(const v8::Handle<v8::String>& className) {
  v8::String::AsciiValue classNameStr(className);
  return AssignableFrom(*classNameStr);
}

/*static*/ bool wxNode_wxControl::AssignableFrom(const char* className) {
  if(!strcmp("wxControl", className)) { return true; }
  
  if(!strcmp("wxControl", className)) { return true; }

  if(!strcmp("wxDateTimePickerCtrlBase", className)) { return true; }

  if(!strcmp("wxDatePickerCtrlBase", className)) { return true; }

  if(!strcmp("wxCompositeWindow<wxDatePickerCtrlBase>", className)) { return true; }

  if(!strcmp("wxDatePickerCtrlGeneric", className)) { return true; }

  if(!strcmp("wxDatePickerCtrl", className)) { return true; }
  if(!strcmp("wxTimePickerCtrlBase", className)) { return true; }

  if(!strcmp("wxNavigationEnabled<wxTimePickerCtrlBase>", className)) { return true; }

  if(!strcmp("wxCompositeWindow<wxNavigationEnabled<wxTimePickerCtrlBase> >", className)) { return true; }

  if(!strcmp("wxTimePickerCtrlGeneric", className)) { return true; }

  if(!strcmp("wxTimePickerCtrl", className)) { return true; }
  if(!strcmp("wxGaugeBase", className)) { return true; }
  if(!strcmp("wxComboCtrlBase", className)) { return true; }

  if(!strcmp("wxGenericComboCtrl", className)) { return true; }

  if(!strcmp("wxComboCtrl", className)) { return true; }

  if(!strcmp("wxRichTextStyleComboCtrl", className)) { return true; }
  if(!strcmp("wxWindowWithItems<wxComboCtrl,wxItemContainer>", className)) { return true; }

  if(!strcmp("wxOwnerDrawnComboBox", className)) { return true; }
  if(!strcmp("wxNavigationEnabled<wxControl>", className)) { return true; }

  if(!strcmp("wxPickerBase", className)) { return true; }

  if(!strcmp("wxColourPickerCtrl", className)) { return true; }
  if(!strcmp("wxFontPickerCtrl", className)) { return true; }
  if(!strcmp("wxFileDirPickerCtrlBase", className)) { return true; }

  if(!strcmp("wxDirPickerCtrl", className)) { return true; }
  if(!strcmp("wxFilePickerCtrl", className)) { return true; }
  if(!strcmp("wxCompositeWindow<wxNavigationEnabled<wxControl> >", className)) { return true; }

  if(!strcmp("wxSearchCtrlBaseBaseClass", className)) { return true; }

  if(!strcmp("wxSearchCtrlBase", className)) { return true; }

  if(!strcmp("wxSearchCtrl", className)) { return true; }
  if(!strcmp("wxInfoBarBase", className)) { return true; }

  if(!strcmp("wxInfoBarGeneric", className)) { return true; }

  if(!strcmp("wxInfoBar", className)) { return true; }
  if(!strcmp("wxBookCtrlBase", className)) { return true; }

  if(!strcmp("wxToolbook", className)) { return true; }
  if(!strcmp("wxNavigationEnabled<wxBookCtrlBase>", className)) { return true; }

  if(!strcmp("wxAuiNotebook", className)) { return true; }

  if(!strcmp("wxAuiMDIClientWindow", className)) { return true; }
  if(!strcmp("wxChoicebook", className)) { return true; }
  if(!strcmp("wxNotebookBase", className)) { return true; }

  if(!strcmp("wxNotebook", className)) { return true; }
  if(!strcmp("wxTreebook", className)) { return true; }
  if(!strcmp("wxListbook", className)) { return true; }
  if(!strcmp("wxTextCtrlBase", className)) { return true; }

  if(!strcmp("wxTextCtrl", className)) { return true; }
  if(!strcmp("wxRadioBox", className)) { return true; }
  if(!strcmp("wxAnimationCtrlBase", className)) { return true; }

  if(!strcmp("wxAnimationCtrl", className)) { return true; }
  if(!strcmp("wxStaticBitmapBase", className)) { return true; }

  if(!strcmp("wxStaticBitmap", className)) { return true; }
  if(!strcmp("wxRichTextCtrl", className)) { return true; }
  if(!strcmp("wxAnyButtonBase", className)) { return true; }

  if(!strcmp("wxAnyButton", className)) { return true; }

  if(!strcmp("wxToggleButtonBase", className)) { return true; }

  if(!strcmp("wxToggleButton", className)) { return true; }

  if(!strcmp("wxBitmapToggleButton", className)) { return true; }
  if(!strcmp("wxButtonBase", className)) { return true; }

  if(!strcmp("wxButton", className)) { return true; }

  if(!strcmp("wxBitmapButtonBase", className)) { return true; }

  if(!strcmp("wxBitmapButton", className)) { return true; }

  if(!strcmp("wxContextHelpButton", className)) { return true; }
  if(!strcmp("wxGenericFileDirButton", className)) { return true; }

  if(!strcmp("wxGenericFileButton", className)) { return true; }

  if(!strcmp("wxFileButton", className)) { return true; }
  if(!strcmp("wxGenericDirButton", className)) { return true; }

  if(!strcmp("wxDirButton", className)) { return true; }
  if(!strcmp("wxCommandLinkButtonBase", className)) { return true; }

  if(!strcmp("wxGenericCommandLinkButton", className)) { return true; }

  if(!strcmp("wxCommandLinkButton", className)) { return true; }
  if(!strcmp("wxFontButton", className)) { return true; }
  if(!strcmp("wxColourButton", className)) { return true; }
  if(!strcmp("wxStatusBarBase", className)) { return true; }

  if(!strcmp("wxStatusBar", className)) { return true; }
  if(!strcmp("wxWindowWithItems<wxControl,wxItemContainer>", className)) { return true; }

  if(!strcmp("wxControlWithItemsBase", className)) { return true; }

  if(!strcmp("wxControlWithItems", className)) { return true; }

  if(!strcmp("wxChoiceBase", className)) { return true; }

  if(!strcmp("wxChoice", className)) { return true; }

  if(!strcmp("wxComboBox", className)) { return true; }

  if(!strcmp("wxBitmapComboBox", className)) { return true; }
  if(!strcmp("wxDirFilterListCtrl", className)) { return true; }
  if(!strcmp("wxListBoxBase", className)) { return true; }

  if(!strcmp("wxListBox", className)) { return true; }

  if(!strcmp("wxCheckListBoxBase", className)) { return true; }
  if(!strcmp("wxCheckListBox", className)) { return true; }

  if(!strcmp("wxRearrangeList", className)) { return true; }
  if(!strcmp("wxToolBarBase", className)) { return true; }

  if(!strcmp("wxToolBar", className)) { return true; }
  if(!strcmp("wxSpinButtonBase", className)) { return true; }

  if(!strcmp("wxSpinButton", className)) { return true; }
  if(!strcmp("wxDataViewCtrlBase", className)) { return true; }

  if(!strcmp("wxDataViewCtrl", className)) { return true; }

  if(!strcmp("wxDataViewListCtrl", className)) { return true; }
  if(!strcmp("wxDataViewTreeCtrl", className)) { return true; }
  if(!strcmp("wxHeaderCtrlBase", className)) { return true; }

  if(!strcmp("wxHeaderCtrl", className)) { return true; }

  if(!strcmp("wxHeaderCtrlSimple", className)) { return true; }
  if(!strcmp("wxSliderBase", className)) { return true; }

  if(!strcmp("wxSlider", className)) { return true; }
  if(!strcmp("wxCheckBoxBase", className)) { return true; }

  if(!strcmp("wxCheckBox", className)) { return true; }
  if(!strcmp("wxCollapsiblePaneBase", className)) { return true; }

  if(!strcmp("wxCollapsiblePane", className)) { return true; }
  if(!strcmp("wxHyperlinkCtrlBase", className)) { return true; }

  if(!strcmp("wxGenericHyperlinkCtrl", className)) { return true; }

  if(!strcmp("wxHyperlinkCtrl", className)) { return true; }
  if(!strcmp("wxStyledTextCtrl", className)) { return true; }
  if(!strcmp("wxRichTextStyleListCtrl", className)) { return true; }
  if(!strcmp("wxStaticTextBase", className)) { return true; }

  if(!strcmp("wxStaticText", className)) { return true; }
  if(!strcmp("wxScrollBarBase", className)) { return true; }

  if(!strcmp("wxScrollBar", className)) { return true; }
  if(!strcmp("wxTreeCtrlBase", className)) { return true; }

  if(!strcmp("wxGenericTreeCtrl", className)) { return true; }

  if(!strcmp("wxTreeCtrl", className)) { return true; }
  if(!strcmp("wxListCtrlBase", className)) { return true; }

  if(!strcmp("wxGenericListCtrl", className)) { return true; }

  if(!strcmp("wxListCtrl", className)) { return true; }

  if(!strcmp("wxListView", className)) { return true; }
  if(!strcmp("wxSpinCtrlBase", className)) { return true; }

  if(!strcmp("wxSpinCtrlGTKBase", className)) { return true; }

  if(!strcmp("wxSpinCtrlDouble", className)) { return true; }
  if(!strcmp("wxSpinCtrl", className)) { return true; }
  if(!strcmp("wxGauge", className)) { return true; }
  if(!strcmp("wxGtkFileCtrl", className)) { return true; }
  if(!strcmp("wxAuiToolBar", className)) { return true; }
  if(!strcmp("wxRadioButton", className)) { return true; }
  if(!strcmp("wxCalendarCtrlBase", className)) { return true; }

  if(!strcmp("wxGtkCalendarCtrl", className)) { return true; }
  if(!strcmp("wxGenericDirCtrl", className)) { return true; }
  if(!strcmp("wxStaticBoxBase", className)) { return true; }

  if(!strcmp("wxStaticBox", className)) { return true; }
  if(!strcmp("wxAuiTabCtrl", className)) { return true; }
  if(!strcmp("wxStaticLineBase", className)) { return true; }

  if(!strcmp("wxStaticLine", className)) { return true; }
  if(!strcmp("wxRichTextColourSwatchCtrl", className)) { return true; }


  return false;
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
  if(args.Length() == 7 && (args[0]->IsNull() || (args[0]->IsObject() && wxNode_wxWindow::AssignableFrom(args[0]->ToObject()->GetConstructorName()))) && args[1]->IsNumber() && (args[2]->IsNull() || (args[2]->IsObject() && wxNode_wxPoint::AssignableFrom(args[2]->ToObject()->GetConstructorName()))) && (args[3]->IsNull() || (args[3]->IsObject() && wxNode_wxSize::AssignableFrom(args[3]->ToObject()->GetConstructorName()))) && args[4]->IsNumber() && (args[5]->IsNull() || (args[5]->IsObject() && wxNode_wxValidator::AssignableFrom(args[5]->ToObject()->GetConstructorName()))) && args[6]->IsString()) {
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
  if(args.Length() == 6 && (args[0]->IsNull() || (args[0]->IsObject() && wxNode_wxWindow::AssignableFrom(args[0]->ToObject()->GetConstructorName()))) && args[1]->IsNumber() && (args[2]->IsNull() || (args[2]->IsObject() && wxNode_wxPoint::AssignableFrom(args[2]->ToObject()->GetConstructorName()))) && (args[3]->IsNull() || (args[3]->IsObject() && wxNode_wxSize::AssignableFrom(args[3]->ToObject()->GetConstructorName()))) && args[4]->IsNumber() && (args[5]->IsNull() || (args[5]->IsObject() && wxNode_wxValidator::AssignableFrom(args[5]->ToObject()->GetConstructorName())))) {
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
  if(args.Length() == 5 && (args[0]->IsNull() || (args[0]->IsObject() && wxNode_wxWindow::AssignableFrom(args[0]->ToObject()->GetConstructorName()))) && args[1]->IsNumber() && (args[2]->IsNull() || (args[2]->IsObject() && wxNode_wxPoint::AssignableFrom(args[2]->ToObject()->GetConstructorName()))) && (args[3]->IsNull() || (args[3]->IsObject() && wxNode_wxSize::AssignableFrom(args[3]->ToObject()->GetConstructorName()))) && args[4]->IsNumber()) {
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
  if(args.Length() == 4 && (args[0]->IsNull() || (args[0]->IsObject() && wxNode_wxWindow::AssignableFrom(args[0]->ToObject()->GetConstructorName()))) && args[1]->IsNumber() && (args[2]->IsNull() || (args[2]->IsObject() && wxNode_wxPoint::AssignableFrom(args[2]->ToObject()->GetConstructorName()))) && (args[3]->IsNull() || (args[3]->IsObject() && wxNode_wxSize::AssignableFrom(args[3]->ToObject()->GetConstructorName())))) {
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
  if(args.Length() == 3 && (args[0]->IsNull() || (args[0]->IsObject() && wxNode_wxWindow::AssignableFrom(args[0]->ToObject()->GetConstructorName()))) && args[1]->IsNumber() && (args[2]->IsNull() || (args[2]->IsObject() && wxNode_wxPoint::AssignableFrom(args[2]->ToObject()->GetConstructorName())))) {
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
  if(args.Length() == 2 && (args[0]->IsNull() || (args[0]->IsObject() && wxNode_wxWindow::AssignableFrom(args[0]->ToObject()->GetConstructorName()))) && args[1]->IsNumber()) {
    wxNode_wxWindow* parent = args[0]->IsNull() ? NULL : wxNodeObject::unwrap<wxNode_wxWindow>(args[0]->ToObject()); /* type: _993 * */
    int id = (int)args[1]->ToInt32()->Value(); /* type: _8633  */
    

    wxNode_wxControl *self = new wxNode_wxControl(parent, id);
    NodeExEvtHandlerImpl* evtHandler = dynamic_cast<NodeExEvtHandlerImpl*>(self);
    self->wrap(args.This(), self, evtHandler);
    return args.This();
  }
  
  

  std::ostringstream errStr;
  errStr << "Could not find matching constructor for arguments (class name: wxControl).\n";
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
  if(args.Length() == 7 && (args[0]->IsNull() || (args[0]->IsObject() && wxNode_wxWindow::AssignableFrom(args[0]->ToObject()->GetConstructorName()))) && args[1]->IsNumber() && (args[2]->IsNull() || (args[2]->IsObject() && wxNode_wxPoint::AssignableFrom(args[2]->ToObject()->GetConstructorName()))) && (args[3]->IsNull() || (args[3]->IsObject() && wxNode_wxSize::AssignableFrom(args[3]->ToObject()->GetConstructorName()))) && args[4]->IsNumber() && (args[5]->IsNull() || (args[5]->IsObject() && wxNode_wxValidator::AssignableFrom(args[5]->ToObject()->GetConstructorName()))) && args[6]->IsString()) {
    wxNode_wxWindow* parent = args[0]->IsNull() ? NULL : wxNodeObject::unwrap<wxNode_wxWindow>(args[0]->ToObject()); /* type: _993 * */
    int id = (int)args[1]->ToInt32()->Value(); /* type: _8633  */
    wxNode_wxPoint* pos = args[2]->IsNull() ? NULL : wxNodeObject::unwrap<wxNode_wxPoint>(args[2]->ToObject()); /* type: _20412  */
    wxNode_wxSize* size = args[3]->IsNull() ? NULL : wxNodeObject::unwrap<wxNode_wxSize>(args[3]->ToObject()); /* type: _20522  */
    long int style = (long int)args[4]->ToInt32()->Value(); /* type: _586  */
    wxNode_wxValidator* validator = args[5]->IsNull() ? NULL : wxNodeObject::unwrap<wxNode_wxValidator>(args[5]->ToObject()); /* type: _59059  */
    v8::String::AsciiValue name(args[6]->ToString()); /* type: _14808  */
    

    bool returnVal = self->Create(parent, id, *pos, *size, style, *validator, *name);

    return scope.Close(v8::Boolean::New(returnVal));
  }
  
  /*
   * id: _54385
   */
  if(args.Length() == 6 && (args[0]->IsNull() || (args[0]->IsObject() && wxNode_wxWindow::AssignableFrom(args[0]->ToObject()->GetConstructorName()))) && args[1]->IsNumber() && (args[2]->IsNull() || (args[2]->IsObject() && wxNode_wxPoint::AssignableFrom(args[2]->ToObject()->GetConstructorName()))) && (args[3]->IsNull() || (args[3]->IsObject() && wxNode_wxSize::AssignableFrom(args[3]->ToObject()->GetConstructorName()))) && args[4]->IsNumber() && (args[5]->IsNull() || (args[5]->IsObject() && wxNode_wxValidator::AssignableFrom(args[5]->ToObject()->GetConstructorName())))) {
    wxNode_wxWindow* parent = args[0]->IsNull() ? NULL : wxNodeObject::unwrap<wxNode_wxWindow>(args[0]->ToObject()); /* type: _993 * */
    int id = (int)args[1]->ToInt32()->Value(); /* type: _8633  */
    wxNode_wxPoint* pos = args[2]->IsNull() ? NULL : wxNodeObject::unwrap<wxNode_wxPoint>(args[2]->ToObject()); /* type: _20412  */
    wxNode_wxSize* size = args[3]->IsNull() ? NULL : wxNodeObject::unwrap<wxNode_wxSize>(args[3]->ToObject()); /* type: _20522  */
    long int style = (long int)args[4]->ToInt32()->Value(); /* type: _586  */
    wxNode_wxValidator* validator = args[5]->IsNull() ? NULL : wxNodeObject::unwrap<wxNode_wxValidator>(args[5]->ToObject()); /* type: _59059  */
    

    bool returnVal = self->Create(parent, id, *pos, *size, style, *validator);

    return scope.Close(v8::Boolean::New(returnVal));
  }
  
  /*
   * id: _54385
   */
  if(args.Length() == 5 && (args[0]->IsNull() || (args[0]->IsObject() && wxNode_wxWindow::AssignableFrom(args[0]->ToObject()->GetConstructorName()))) && args[1]->IsNumber() && (args[2]->IsNull() || (args[2]->IsObject() && wxNode_wxPoint::AssignableFrom(args[2]->ToObject()->GetConstructorName()))) && (args[3]->IsNull() || (args[3]->IsObject() && wxNode_wxSize::AssignableFrom(args[3]->ToObject()->GetConstructorName()))) && args[4]->IsNumber()) {
    wxNode_wxWindow* parent = args[0]->IsNull() ? NULL : wxNodeObject::unwrap<wxNode_wxWindow>(args[0]->ToObject()); /* type: _993 * */
    int id = (int)args[1]->ToInt32()->Value(); /* type: _8633  */
    wxNode_wxPoint* pos = args[2]->IsNull() ? NULL : wxNodeObject::unwrap<wxNode_wxPoint>(args[2]->ToObject()); /* type: _20412  */
    wxNode_wxSize* size = args[3]->IsNull() ? NULL : wxNodeObject::unwrap<wxNode_wxSize>(args[3]->ToObject()); /* type: _20522  */
    long int style = (long int)args[4]->ToInt32()->Value(); /* type: _586  */
    

    bool returnVal = self->Create(parent, id, *pos, *size, style);

    return scope.Close(v8::Boolean::New(returnVal));
  }
  
  /*
   * id: _54385
   */
  if(args.Length() == 4 && (args[0]->IsNull() || (args[0]->IsObject() && wxNode_wxWindow::AssignableFrom(args[0]->ToObject()->GetConstructorName()))) && args[1]->IsNumber() && (args[2]->IsNull() || (args[2]->IsObject() && wxNode_wxPoint::AssignableFrom(args[2]->ToObject()->GetConstructorName()))) && (args[3]->IsNull() || (args[3]->IsObject() && wxNode_wxSize::AssignableFrom(args[3]->ToObject()->GetConstructorName())))) {
    wxNode_wxWindow* parent = args[0]->IsNull() ? NULL : wxNodeObject::unwrap<wxNode_wxWindow>(args[0]->ToObject()); /* type: _993 * */
    int id = (int)args[1]->ToInt32()->Value(); /* type: _8633  */
    wxNode_wxPoint* pos = args[2]->IsNull() ? NULL : wxNodeObject::unwrap<wxNode_wxPoint>(args[2]->ToObject()); /* type: _20412  */
    wxNode_wxSize* size = args[3]->IsNull() ? NULL : wxNodeObject::unwrap<wxNode_wxSize>(args[3]->ToObject()); /* type: _20522  */
    

    bool returnVal = self->Create(parent, id, *pos, *size);

    return scope.Close(v8::Boolean::New(returnVal));
  }
  
  /*
   * id: _54385
   */
  if(args.Length() == 3 && (args[0]->IsNull() || (args[0]->IsObject() && wxNode_wxWindow::AssignableFrom(args[0]->ToObject()->GetConstructorName()))) && args[1]->IsNumber() && (args[2]->IsNull() || (args[2]->IsObject() && wxNode_wxPoint::AssignableFrom(args[2]->ToObject()->GetConstructorName())))) {
    wxNode_wxWindow* parent = args[0]->IsNull() ? NULL : wxNodeObject::unwrap<wxNode_wxWindow>(args[0]->ToObject()); /* type: _993 * */
    int id = (int)args[1]->ToInt32()->Value(); /* type: _8633  */
    wxNode_wxPoint* pos = args[2]->IsNull() ? NULL : wxNodeObject::unwrap<wxNode_wxPoint>(args[2]->ToObject()); /* type: _20412  */
    

    bool returnVal = self->Create(parent, id, *pos);

    return scope.Close(v8::Boolean::New(returnVal));
  }
  
  /*
   * id: _54385
   */
  if(args.Length() == 2 && (args[0]->IsNull() || (args[0]->IsObject() && wxNode_wxWindow::AssignableFrom(args[0]->ToObject()->GetConstructorName()))) && args[1]->IsNumber()) {
    wxNode_wxWindow* parent = args[0]->IsNull() ? NULL : wxNodeObject::unwrap<wxNode_wxWindow>(args[0]->ToObject()); /* type: _993 * */
    int id = (int)args[1]->ToInt32()->Value(); /* type: _8633  */
    

    bool returnVal = self->Create(parent, id);

    return scope.Close(v8::Boolean::New(returnVal));
  }
  

  std::ostringstream errStr;
  errStr << "Could not find matching method for arguments (method name: wxControl::Create).\n";
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
    

    int returnVal = self->GetAlignment();

    return scope.Close(v8::Number::New(returnVal));
  }
  

  std::ostringstream errStr;
  errStr << "Could not find matching method for arguments (method name: wxControl::GetAlignment).\n";
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
  errStr << "Could not find matching method for arguments (method name: wxControl::SetLabel).\n";
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
    

    wxString returnVal = self->GetLabel();

    return scope.Close(v8::String::New(returnVal.mb_str()));
  }
  

  std::ostringstream errStr;
  errStr << "Could not find matching method for arguments (method name: wxControl::GetLabel).\n";
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
  errStr << "Could not find matching method for arguments (method name: wxControl::SetLabelText).\n";
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
    

    wxString returnVal = self->GetLabelText();

    return scope.Close(v8::String::New(returnVal.mb_str()));
  }
  
  /*
   * id: _54396
   */
  if(args.Length() == 1 && args[0]->IsString()) {
    v8::String::AsciiValue label(args[0]->ToString()); /* type: _14808  */
    

    wxString returnVal = self->GetLabelText(*label);

    return scope.Close(v8::String::New(returnVal.mb_str()));
  }
  

  std::ostringstream errStr;
  errStr << "Could not find matching method for arguments (method name: wxControl::GetLabelText).\n";
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
    

    bool returnVal = self->SetLabelMarkup(*markup);

    return scope.Close(v8::Boolean::New(returnVal));
  }
  

  std::ostringstream errStr;
  errStr << "Could not find matching method for arguments (method name: wxControl::SetLabelMarkup).\n";
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
    

    bool returnVal = self->ShouldInheritColours();

    return scope.Close(v8::Boolean::New(returnVal));
  }
  

  std::ostringstream errStr;
  errStr << "Could not find matching method for arguments (method name: wxControl::ShouldInheritColours).\n";
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
  if(args.Length() == 1 && (args[0]->IsNull() || (args[0]->IsObject() && wxNode_wxCommandEvent::AssignableFrom(args[0]->ToObject()->GetConstructorName())))) {
    wxNode_wxCommandEvent* event = args[0]->IsNull() ? NULL : wxNodeObject::unwrap<wxNode_wxCommandEvent>(args[0]->ToObject()); /* type: _58740  */
    

    self->Command(*event);

    return v8::Undefined();
  }
  

  std::ostringstream errStr;
  errStr << "Could not find matching method for arguments (method name: wxControl::Command).\n";
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
  if(args.Length() == 1 && (args[0]->IsNull() || (args[0]->IsObject() && wxNode_wxFont::AssignableFrom(args[0]->ToObject()->GetConstructorName())))) {
    wxNode_wxFont* font = args[0]->IsNull() ? NULL : wxNodeObject::unwrap<wxNode_wxFont>(args[0]->ToObject()); /* type: _33020  */
    

    bool returnVal = self->SetFont(*font);

    return scope.Close(v8::Boolean::New(returnVal));
  }
  

  std::ostringstream errStr;
  errStr << "Could not find matching method for arguments (method name: wxControl::SetFont).\n";
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
  if(args.Length() == 1 && (args[0]->IsNull() || (args[0]->IsObject() && wxNode_wxUpdateUIEvent::AssignableFrom(args[0]->ToObject()->GetConstructorName())))) {
    wxNode_wxUpdateUIEvent* event = args[0]->IsNull() ? NULL : wxNodeObject::unwrap<wxNode_wxUpdateUIEvent>(args[0]->ToObject()); /* type: _59566  */
    

    self->DoUpdateWindowUI(*event);

    return v8::Undefined();
  }
  

  std::ostringstream errStr;
  errStr << "Could not find matching method for arguments (method name: wxControl::DoUpdateWindowUI).\n";
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
    

    wxString returnVal = self->RemoveMnemonics(*str);

    return scope.Close(v8::String::New(returnVal.mb_str()));
  }
  

  std::ostringstream errStr;
  errStr << "Could not find matching method for arguments (method name: wxControl::RemoveMnemonics).\n";
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
    

    wxString returnVal = self->EscapeMnemonics(*str);

    return scope.Close(v8::String::New(returnVal.mb_str()));
  }
  

  std::ostringstream errStr;
  errStr << "Could not find matching method for arguments (method name: wxControl::EscapeMnemonics).\n";
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
  if(args.Length() == 5 && args[0]->IsString() && (args[1]->IsNull() || (args[1]->IsObject() && wxNode_wxDC::AssignableFrom(args[1]->ToObject()->GetConstructorName()))) && args[2]->IsNumber() && args[3]->IsNumber() && args[4]->IsNumber()) {
    v8::String::AsciiValue label(args[0]->ToString()); /* type: _14808  */
    wxNode_wxDC* dc = args[1]->IsNull() ? NULL : wxNodeObject::unwrap<wxNode_wxDC>(args[1]->ToObject()); /* type: _58921  */
    wxEllipsizeMode mode = (wxEllipsizeMode)args[2]->ToNumber()->Value(); /* type: _178  */
    int maxWidth = (int)args[3]->ToInt32()->Value(); /* type: _162  */
    int flags = (int)args[4]->ToInt32()->Value(); /* type: _162  */
    

    wxString returnVal = self->Ellipsize(*label, *dc, mode, maxWidth, flags);

    return scope.Close(v8::String::New(returnVal.mb_str()));
  }
  
  /*
   * id: _54399
   */
  if(args.Length() == 4 && args[0]->IsString() && (args[1]->IsNull() || (args[1]->IsObject() && wxNode_wxDC::AssignableFrom(args[1]->ToObject()->GetConstructorName()))) && args[2]->IsNumber() && args[3]->IsNumber()) {
    v8::String::AsciiValue label(args[0]->ToString()); /* type: _14808  */
    wxNode_wxDC* dc = args[1]->IsNull() ? NULL : wxNodeObject::unwrap<wxNode_wxDC>(args[1]->ToObject()); /* type: _58921  */
    wxEllipsizeMode mode = (wxEllipsizeMode)args[2]->ToNumber()->Value(); /* type: _178  */
    int maxWidth = (int)args[3]->ToInt32()->Value(); /* type: _162  */
    

    wxString returnVal = self->Ellipsize(*label, *dc, mode, maxWidth);

    return scope.Close(v8::String::New(returnVal.mb_str()));
  }
  

  std::ostringstream errStr;
  errStr << "Could not find matching method for arguments (method name: wxControl::Ellipsize).\n";
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
    

    int returnVal = self->FindAccelIndex(*label, labelOnly);

    return scope.Close(v8::Number::New(returnVal));
  }
  
  /*
   * id: _54400
   */
  if(args.Length() == 1 && args[0]->IsString()) {
    v8::String::AsciiValue label(args[0]->ToString()); /* type: _14808  */
    

    int returnVal = self->FindAccelIndex(*label);

    return scope.Close(v8::Number::New(returnVal));
  }
  

  std::ostringstream errStr;
  errStr << "Could not find matching method for arguments (method name: wxControl::FindAccelIndex).\n";
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
    wxWindowVariant variant = (wxWindowVariant)args[0]->ToNumber()->Value(); /* type: _10472  */
    

    wxVisualAttributes returnVal = self->GetCompositeControlsDefaultAttributes(variant);

    return scope.Close(wxNode_wxVisualAttributes::NewCopy(returnVal));
  }
  

  std::ostringstream errStr;
  errStr << "Could not find matching method for arguments (method name: wxControl::GetCompositeControlsDefaultAttributes).\n";
  errStr << "  arg count: " << args.Length() << "\n";
  for(int i = 0; i < args.Length(); i++) {
    v8::String::AsciiValue argStr(args[i]);
    errStr << "  arg[" << i << "]: " << *argStr << "\n";
  }
  return v8::ThrowException(v8::Exception::TypeError(v8::String::New(errStr.str().c_str())));
}

