
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
  s_ct->SetClassName(v8::String::NewSymbol("Control"));

  NODE_SET_PROTOTYPE_METHOD(s_ct, "init", _init);
  AddMethods(s_ct);

  target->Set(v8::String::NewSymbol("Control"), s_ct->GetFunction());
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

/*static*/ v8::Handle<v8::Value> wxNode_wxControl::New(const wxNode_wxControl* obj) {
  v8::HandleScope scope;

  if(obj == NULL) {
    return scope.Close(v8::Null());
  }
  
  v8::Local<v8::FunctionTemplate> returnObjFt = v8::FunctionTemplate::New(wxNodeObject::NewFunc);
  returnObjFt->InstanceTemplate()->SetInternalFieldCount(2);
  returnObjFt->SetClassName(v8::String::NewSymbol("Control"));
  wxNode_wxControl::AddMethods(returnObjFt);

  v8::Local<v8::Function> returnObjFn = returnObjFt->GetFunction();

  v8::Local<v8::Object> returnObj = returnObjFn->CallAsConstructor(0, new v8::Local<v8::Value>[0])->ToObject();
  returnObj->SetPointerInInternalField(0, (void*)obj);
  NodeExEvtHandlerImpl* evtHandler = dynamic_cast<NodeExEvtHandlerImpl*>((wxNode_wxControl*)obj);
  returnObj->SetPointerInInternalField(1, evtHandler);

  return scope.Close(returnObj);
}

/*static*/ v8::Handle<v8::Value> wxNode_wxControl::New(const wxControl* obj) {
  v8::HandleScope scope;

  if(obj == NULL) {
    return scope.Close(v8::Null());
  }
  
  v8::Local<v8::FunctionTemplate> returnObjFt = v8::FunctionTemplate::New(wxNodeObject::NewFunc);
  returnObjFt->InstanceTemplate()->SetInternalFieldCount(2);
  returnObjFt->SetClassName(v8::String::NewSymbol("Control"));
  wxNode_wxControl::AddMethods(returnObjFt);

  v8::Local<v8::Function> returnObjFn = returnObjFt->GetFunction();
  v8::Local<v8::Object> returnObj = returnObjFn->CallAsConstructor(0, new v8::Local<v8::Value>[0])->ToObject();
  returnObj->SetPointerInInternalField(0, (void*)obj);
  NodeExEvtHandlerImplWrap* wrap = new NodeExEvtHandlerImplWrap(returnObj);
  NodeExEvtHandlerImpl* evtHandler = dynamic_cast<NodeExEvtHandlerImpl*>(wrap);
  returnObj->SetPointerInInternalField(1, evtHandler);

  return scope.Close(returnObj);
}

/*static*/ v8::Handle<v8::Value> wxNode_wxControl::NewCopy(const wxControl& obj) {
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
  if(!strcmp("Control", className)) { return true; }
  
  if(!strcmp("Control", className)) { return true; }

  if(!strcmp("DateTimePickerCtrlBase", className)) { return true; }

  if(!strcmp("DatePickerCtrlBase", className)) { return true; }

  if(!strcmp("CompositeWindow<wxDatePickerCtrlBase>", className)) { return true; }

  if(!strcmp("DatePickerCtrlGeneric", className)) { return true; }

  if(!strcmp("DatePickerCtrl", className)) { return true; }
  if(!strcmp("TimePickerCtrlBase", className)) { return true; }

  if(!strcmp("NavigationEnabled<wxTimePickerCtrlBase>", className)) { return true; }

  if(!strcmp("CompositeWindow<wxNavigationEnabled<wxTimePickerCtrlBase> >", className)) { return true; }

  if(!strcmp("TimePickerCtrlGeneric", className)) { return true; }

  if(!strcmp("TimePickerCtrl", className)) { return true; }
  if(!strcmp("GaugeBase", className)) { return true; }
  if(!strcmp("ComboCtrlBase", className)) { return true; }

  if(!strcmp("GenericComboCtrl", className)) { return true; }

  if(!strcmp("ComboCtrl", className)) { return true; }

  if(!strcmp("RichTextStyleComboCtrl", className)) { return true; }
  if(!strcmp("WindowWithItems<wxComboCtrl,wxItemContainer>", className)) { return true; }

  if(!strcmp("OwnerDrawnComboBox", className)) { return true; }
  if(!strcmp("NavigationEnabled<wxControl>", className)) { return true; }

  if(!strcmp("PickerBase", className)) { return true; }

  if(!strcmp("ColourPickerCtrl", className)) { return true; }
  if(!strcmp("FontPickerCtrl", className)) { return true; }
  if(!strcmp("FileDirPickerCtrlBase", className)) { return true; }

  if(!strcmp("DirPickerCtrl", className)) { return true; }
  if(!strcmp("FilePickerCtrl", className)) { return true; }
  if(!strcmp("CompositeWindow<wxNavigationEnabled<wxControl> >", className)) { return true; }

  if(!strcmp("SearchCtrlBaseBaseClass", className)) { return true; }

  if(!strcmp("SearchCtrlBase", className)) { return true; }

  if(!strcmp("SearchCtrl", className)) { return true; }
  if(!strcmp("InfoBarBase", className)) { return true; }

  if(!strcmp("InfoBarGeneric", className)) { return true; }

  if(!strcmp("InfoBar", className)) { return true; }
  if(!strcmp("BookCtrlBase", className)) { return true; }

  if(!strcmp("Toolbook", className)) { return true; }
  if(!strcmp("NavigationEnabled<wxBookCtrlBase>", className)) { return true; }

  if(!strcmp("AuiNotebook", className)) { return true; }

  if(!strcmp("AuiMDIClientWindow", className)) { return true; }
  if(!strcmp("Choicebook", className)) { return true; }
  if(!strcmp("NotebookBase", className)) { return true; }

  if(!strcmp("Notebook", className)) { return true; }
  if(!strcmp("Treebook", className)) { return true; }
  if(!strcmp("Listbook", className)) { return true; }
  if(!strcmp("TextCtrlBase", className)) { return true; }

  if(!strcmp("TextCtrl", className)) { return true; }
  if(!strcmp("RadioBox", className)) { return true; }
  if(!strcmp("AnimationCtrlBase", className)) { return true; }

  if(!strcmp("AnimationCtrl", className)) { return true; }
  if(!strcmp("StaticBitmapBase", className)) { return true; }

  if(!strcmp("StaticBitmap", className)) { return true; }
  if(!strcmp("RichTextCtrl", className)) { return true; }
  if(!strcmp("AnyButtonBase", className)) { return true; }

  if(!strcmp("AnyButton", className)) { return true; }

  if(!strcmp("ToggleButtonBase", className)) { return true; }

  if(!strcmp("ToggleButton", className)) { return true; }

  if(!strcmp("BitmapToggleButton", className)) { return true; }
  if(!strcmp("ButtonBase", className)) { return true; }

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
  if(!strcmp("StatusBarBase", className)) { return true; }

  if(!strcmp("StatusBar", className)) { return true; }
  if(!strcmp("WindowWithItems<wxControl,wxItemContainer>", className)) { return true; }

  if(!strcmp("ControlWithItemsBase", className)) { return true; }

  if(!strcmp("ControlWithItems", className)) { return true; }

  if(!strcmp("ChoiceBase", className)) { return true; }

  if(!strcmp("Choice", className)) { return true; }

  if(!strcmp("ComboBox", className)) { return true; }

  if(!strcmp("BitmapComboBox", className)) { return true; }
  if(!strcmp("DirFilterListCtrl", className)) { return true; }
  if(!strcmp("ListBoxBase", className)) { return true; }

  if(!strcmp("ListBox", className)) { return true; }

  if(!strcmp("CheckListBoxBase", className)) { return true; }
  if(!strcmp("CheckListBox", className)) { return true; }

  if(!strcmp("RearrangeList", className)) { return true; }
  if(!strcmp("ToolBarBase", className)) { return true; }

  if(!strcmp("ToolBar", className)) { return true; }
  if(!strcmp("SpinButtonBase", className)) { return true; }

  if(!strcmp("SpinButton", className)) { return true; }
  if(!strcmp("DataViewCtrlBase", className)) { return true; }

  if(!strcmp("DataViewCtrl", className)) { return true; }

  if(!strcmp("DataViewListCtrl", className)) { return true; }
  if(!strcmp("DataViewTreeCtrl", className)) { return true; }
  if(!strcmp("HeaderCtrlBase", className)) { return true; }

  if(!strcmp("HeaderCtrl", className)) { return true; }

  if(!strcmp("HeaderCtrlSimple", className)) { return true; }
  if(!strcmp("WebView", className)) { return true; }
  if(!strcmp("SliderBase", className)) { return true; }

  if(!strcmp("Slider", className)) { return true; }
  if(!strcmp("CheckBoxBase", className)) { return true; }

  if(!strcmp("CheckBox", className)) { return true; }
  if(!strcmp("CollapsiblePaneBase", className)) { return true; }

  if(!strcmp("CollapsiblePane", className)) { return true; }
  if(!strcmp("HyperlinkCtrlBase", className)) { return true; }

  if(!strcmp("GenericHyperlinkCtrl", className)) { return true; }

  if(!strcmp("HyperlinkCtrl", className)) { return true; }
  if(!strcmp("StyledTextCtrl", className)) { return true; }
  if(!strcmp("RichTextStyleListCtrl", className)) { return true; }
  if(!strcmp("StaticTextBase", className)) { return true; }

  if(!strcmp("StaticText", className)) { return true; }
  if(!strcmp("ScrollBarBase", className)) { return true; }

  if(!strcmp("ScrollBar", className)) { return true; }
  if(!strcmp("TreeCtrlBase", className)) { return true; }

  if(!strcmp("GenericTreeCtrl", className)) { return true; }

  if(!strcmp("TreeCtrl", className)) { return true; }
  if(!strcmp("GenericListCtrl", className)) { return true; }

  if(!strcmp("ListCtrl", className)) { return true; }

  if(!strcmp("ListView", className)) { return true; }
  if(!strcmp("SpinCtrlBase", className)) { return true; }

  if(!strcmp("SpinCtrlGTKBase", className)) { return true; }

  if(!strcmp("SpinCtrlDouble", className)) { return true; }
  if(!strcmp("SpinCtrl", className)) { return true; }
  if(!strcmp("Gauge", className)) { return true; }
  if(!strcmp("GtkFileCtrl", className)) { return true; }
  if(!strcmp("AuiToolBar", className)) { return true; }
  if(!strcmp("RadioButton", className)) { return true; }
  if(!strcmp("CalendarCtrlBase", className)) { return true; }

  if(!strcmp("GtkCalendarCtrl", className)) { return true; }
  if(!strcmp("GenericDirCtrl", className)) { return true; }
  if(!strcmp("StaticBoxBase", className)) { return true; }

  if(!strcmp("StaticBox", className)) { return true; }
  if(!strcmp("AuiTabCtrl", className)) { return true; }
  if(!strcmp("StaticLineBase", className)) { return true; }

  if(!strcmp("StaticLine", className)) { return true; }
  if(!strcmp("RichTextColourSwatchCtrl", className)) { return true; }


  return false;
}

/*static*/ v8::Handle<v8::Value> wxNode_wxControl::_init(const v8::Arguments& args) {
  v8::HandleScope scope;

  
  
  /*
   * id: _37482
   */
  if(args.Length() == 0) {
    

    wxNode_wxControl *self = new wxNode_wxControl();
    NodeExEvtHandlerImpl* evtHandler = dynamic_cast<NodeExEvtHandlerImpl*>(self);
    self->wrap(args.This(), self, evtHandler);
    return args.This();
  }
  
  /*
   * id: _37483
   */
  if(args.Length() == 7 && (args[0]->IsNull() || (args[0]->IsObject() && wxNode_wxWindow::AssignableFrom(args[0]->ToObject()->GetConstructorName()))) && args[1]->IsNumber() && (args[2]->IsNull() || (args[2]->IsObject() && wxNode_wxPoint::AssignableFrom(args[2]->ToObject()->GetConstructorName()))) && (args[3]->IsNull() || (args[3]->IsObject() && wxNode_wxSize::AssignableFrom(args[3]->ToObject()->GetConstructorName()))) && args[4]->IsNumber() && (args[5]->IsNull() || (args[5]->IsObject() && wxNode_wxValidator::AssignableFrom(args[5]->ToObject()->GetConstructorName()))) && args[6]->IsString()) {
    wxNode_wxWindow* parent = args[0]->IsNull() ? NULL : wxNodeObject::unwrap<wxNode_wxWindow>(args[0]->ToObject()); /* type: _1000 * */
    int id = (int)args[1]->ToInt32()->Value(); /* type: _8725  */
    wxNode_wxPoint* pos = args[2]->IsNull() ? NULL : wxNodeObject::unwrap<wxNode_wxPoint>(args[2]->ToObject()); /* type: _20518  */
    wxNode_wxSize* size = args[3]->IsNull() ? NULL : wxNodeObject::unwrap<wxNode_wxSize>(args[3]->ToObject()); /* type: _20628  */
    long int style = (long int)args[4]->ToInt32()->Value(); /* type: _592  */
    wxNode_wxValidator* validator = args[5]->IsNull() ? NULL : wxNodeObject::unwrap<wxNode_wxValidator>(args[5]->ToObject()); /* type: _59247  */
    v8::String::AsciiValue name(args[6]->ToString()); /* type: _14975  */
    

    wxNode_wxControl *self = new wxNode_wxControl(parent, id, *pos, *size, style, *validator, *name);
    NodeExEvtHandlerImpl* evtHandler = dynamic_cast<NodeExEvtHandlerImpl*>(self);
    self->wrap(args.This(), self, evtHandler);
    return args.This();
  }
  
  /*
   * id: _37483
   */
  if(args.Length() == 6 && (args[0]->IsNull() || (args[0]->IsObject() && wxNode_wxWindow::AssignableFrom(args[0]->ToObject()->GetConstructorName()))) && args[1]->IsNumber() && (args[2]->IsNull() || (args[2]->IsObject() && wxNode_wxPoint::AssignableFrom(args[2]->ToObject()->GetConstructorName()))) && (args[3]->IsNull() || (args[3]->IsObject() && wxNode_wxSize::AssignableFrom(args[3]->ToObject()->GetConstructorName()))) && args[4]->IsNumber() && (args[5]->IsNull() || (args[5]->IsObject() && wxNode_wxValidator::AssignableFrom(args[5]->ToObject()->GetConstructorName())))) {
    wxNode_wxWindow* parent = args[0]->IsNull() ? NULL : wxNodeObject::unwrap<wxNode_wxWindow>(args[0]->ToObject()); /* type: _1000 * */
    int id = (int)args[1]->ToInt32()->Value(); /* type: _8725  */
    wxNode_wxPoint* pos = args[2]->IsNull() ? NULL : wxNodeObject::unwrap<wxNode_wxPoint>(args[2]->ToObject()); /* type: _20518  */
    wxNode_wxSize* size = args[3]->IsNull() ? NULL : wxNodeObject::unwrap<wxNode_wxSize>(args[3]->ToObject()); /* type: _20628  */
    long int style = (long int)args[4]->ToInt32()->Value(); /* type: _592  */
    wxNode_wxValidator* validator = args[5]->IsNull() ? NULL : wxNodeObject::unwrap<wxNode_wxValidator>(args[5]->ToObject()); /* type: _59247  */
    

    wxNode_wxControl *self = new wxNode_wxControl(parent, id, *pos, *size, style, *validator);
    NodeExEvtHandlerImpl* evtHandler = dynamic_cast<NodeExEvtHandlerImpl*>(self);
    self->wrap(args.This(), self, evtHandler);
    return args.This();
  }
  
  /*
   * id: _37483
   */
  if(args.Length() == 5 && (args[0]->IsNull() || (args[0]->IsObject() && wxNode_wxWindow::AssignableFrom(args[0]->ToObject()->GetConstructorName()))) && args[1]->IsNumber() && (args[2]->IsNull() || (args[2]->IsObject() && wxNode_wxPoint::AssignableFrom(args[2]->ToObject()->GetConstructorName()))) && (args[3]->IsNull() || (args[3]->IsObject() && wxNode_wxSize::AssignableFrom(args[3]->ToObject()->GetConstructorName()))) && args[4]->IsNumber()) {
    wxNode_wxWindow* parent = args[0]->IsNull() ? NULL : wxNodeObject::unwrap<wxNode_wxWindow>(args[0]->ToObject()); /* type: _1000 * */
    int id = (int)args[1]->ToInt32()->Value(); /* type: _8725  */
    wxNode_wxPoint* pos = args[2]->IsNull() ? NULL : wxNodeObject::unwrap<wxNode_wxPoint>(args[2]->ToObject()); /* type: _20518  */
    wxNode_wxSize* size = args[3]->IsNull() ? NULL : wxNodeObject::unwrap<wxNode_wxSize>(args[3]->ToObject()); /* type: _20628  */
    long int style = (long int)args[4]->ToInt32()->Value(); /* type: _592  */
    

    wxNode_wxControl *self = new wxNode_wxControl(parent, id, *pos, *size, style);
    NodeExEvtHandlerImpl* evtHandler = dynamic_cast<NodeExEvtHandlerImpl*>(self);
    self->wrap(args.This(), self, evtHandler);
    return args.This();
  }
  
  /*
   * id: _37483
   */
  if(args.Length() == 4 && (args[0]->IsNull() || (args[0]->IsObject() && wxNode_wxWindow::AssignableFrom(args[0]->ToObject()->GetConstructorName()))) && args[1]->IsNumber() && (args[2]->IsNull() || (args[2]->IsObject() && wxNode_wxPoint::AssignableFrom(args[2]->ToObject()->GetConstructorName()))) && (args[3]->IsNull() || (args[3]->IsObject() && wxNode_wxSize::AssignableFrom(args[3]->ToObject()->GetConstructorName())))) {
    wxNode_wxWindow* parent = args[0]->IsNull() ? NULL : wxNodeObject::unwrap<wxNode_wxWindow>(args[0]->ToObject()); /* type: _1000 * */
    int id = (int)args[1]->ToInt32()->Value(); /* type: _8725  */
    wxNode_wxPoint* pos = args[2]->IsNull() ? NULL : wxNodeObject::unwrap<wxNode_wxPoint>(args[2]->ToObject()); /* type: _20518  */
    wxNode_wxSize* size = args[3]->IsNull() ? NULL : wxNodeObject::unwrap<wxNode_wxSize>(args[3]->ToObject()); /* type: _20628  */
    

    wxNode_wxControl *self = new wxNode_wxControl(parent, id, *pos, *size);
    NodeExEvtHandlerImpl* evtHandler = dynamic_cast<NodeExEvtHandlerImpl*>(self);
    self->wrap(args.This(), self, evtHandler);
    return args.This();
  }
  
  /*
   * id: _37483
   */
  if(args.Length() == 3 && (args[0]->IsNull() || (args[0]->IsObject() && wxNode_wxWindow::AssignableFrom(args[0]->ToObject()->GetConstructorName()))) && args[1]->IsNumber() && (args[2]->IsNull() || (args[2]->IsObject() && wxNode_wxPoint::AssignableFrom(args[2]->ToObject()->GetConstructorName())))) {
    wxNode_wxWindow* parent = args[0]->IsNull() ? NULL : wxNodeObject::unwrap<wxNode_wxWindow>(args[0]->ToObject()); /* type: _1000 * */
    int id = (int)args[1]->ToInt32()->Value(); /* type: _8725  */
    wxNode_wxPoint* pos = args[2]->IsNull() ? NULL : wxNodeObject::unwrap<wxNode_wxPoint>(args[2]->ToObject()); /* type: _20518  */
    

    wxNode_wxControl *self = new wxNode_wxControl(parent, id, *pos);
    NodeExEvtHandlerImpl* evtHandler = dynamic_cast<NodeExEvtHandlerImpl*>(self);
    self->wrap(args.This(), self, evtHandler);
    return args.This();
  }
  
  /*
   * id: _37483
   */
  if(args.Length() == 2 && (args[0]->IsNull() || (args[0]->IsObject() && wxNode_wxWindow::AssignableFrom(args[0]->ToObject()->GetConstructorName()))) && args[1]->IsNumber()) {
    wxNode_wxWindow* parent = args[0]->IsNull() ? NULL : wxNodeObject::unwrap<wxNode_wxWindow>(args[0]->ToObject()); /* type: _1000 * */
    int id = (int)args[1]->ToInt32()->Value(); /* type: _8725  */
    

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
   * id: _54578
   */
  if(args.Length() == 7 && (args[0]->IsNull() || (args[0]->IsObject() && wxNode_wxWindow::AssignableFrom(args[0]->ToObject()->GetConstructorName()))) && args[1]->IsNumber() && (args[2]->IsNull() || (args[2]->IsObject() && wxNode_wxPoint::AssignableFrom(args[2]->ToObject()->GetConstructorName()))) && (args[3]->IsNull() || (args[3]->IsObject() && wxNode_wxSize::AssignableFrom(args[3]->ToObject()->GetConstructorName()))) && args[4]->IsNumber() && (args[5]->IsNull() || (args[5]->IsObject() && wxNode_wxValidator::AssignableFrom(args[5]->ToObject()->GetConstructorName()))) && args[6]->IsString()) {
    wxNode_wxWindow* parent = args[0]->IsNull() ? NULL : wxNodeObject::unwrap<wxNode_wxWindow>(args[0]->ToObject()); /* type: _1000 * */
    int id = (int)args[1]->ToInt32()->Value(); /* type: _8725  */
    wxNode_wxPoint* pos = args[2]->IsNull() ? NULL : wxNodeObject::unwrap<wxNode_wxPoint>(args[2]->ToObject()); /* type: _20518  */
    wxNode_wxSize* size = args[3]->IsNull() ? NULL : wxNodeObject::unwrap<wxNode_wxSize>(args[3]->ToObject()); /* type: _20628  */
    long int style = (long int)args[4]->ToInt32()->Value(); /* type: _592  */
    wxNode_wxValidator* validator = args[5]->IsNull() ? NULL : wxNodeObject::unwrap<wxNode_wxValidator>(args[5]->ToObject()); /* type: _59247  */
    v8::String::AsciiValue name(args[6]->ToString()); /* type: _14975  */
    

    bool returnVal = self->Create(parent, id, *pos, *size, style, *validator, *name);

    return scope.Close(v8::Boolean::New(returnVal));
  }
  
  /*
   * id: _54578
   */
  if(args.Length() == 6 && (args[0]->IsNull() || (args[0]->IsObject() && wxNode_wxWindow::AssignableFrom(args[0]->ToObject()->GetConstructorName()))) && args[1]->IsNumber() && (args[2]->IsNull() || (args[2]->IsObject() && wxNode_wxPoint::AssignableFrom(args[2]->ToObject()->GetConstructorName()))) && (args[3]->IsNull() || (args[3]->IsObject() && wxNode_wxSize::AssignableFrom(args[3]->ToObject()->GetConstructorName()))) && args[4]->IsNumber() && (args[5]->IsNull() || (args[5]->IsObject() && wxNode_wxValidator::AssignableFrom(args[5]->ToObject()->GetConstructorName())))) {
    wxNode_wxWindow* parent = args[0]->IsNull() ? NULL : wxNodeObject::unwrap<wxNode_wxWindow>(args[0]->ToObject()); /* type: _1000 * */
    int id = (int)args[1]->ToInt32()->Value(); /* type: _8725  */
    wxNode_wxPoint* pos = args[2]->IsNull() ? NULL : wxNodeObject::unwrap<wxNode_wxPoint>(args[2]->ToObject()); /* type: _20518  */
    wxNode_wxSize* size = args[3]->IsNull() ? NULL : wxNodeObject::unwrap<wxNode_wxSize>(args[3]->ToObject()); /* type: _20628  */
    long int style = (long int)args[4]->ToInt32()->Value(); /* type: _592  */
    wxNode_wxValidator* validator = args[5]->IsNull() ? NULL : wxNodeObject::unwrap<wxNode_wxValidator>(args[5]->ToObject()); /* type: _59247  */
    

    bool returnVal = self->Create(parent, id, *pos, *size, style, *validator);

    return scope.Close(v8::Boolean::New(returnVal));
  }
  
  /*
   * id: _54578
   */
  if(args.Length() == 5 && (args[0]->IsNull() || (args[0]->IsObject() && wxNode_wxWindow::AssignableFrom(args[0]->ToObject()->GetConstructorName()))) && args[1]->IsNumber() && (args[2]->IsNull() || (args[2]->IsObject() && wxNode_wxPoint::AssignableFrom(args[2]->ToObject()->GetConstructorName()))) && (args[3]->IsNull() || (args[3]->IsObject() && wxNode_wxSize::AssignableFrom(args[3]->ToObject()->GetConstructorName()))) && args[4]->IsNumber()) {
    wxNode_wxWindow* parent = args[0]->IsNull() ? NULL : wxNodeObject::unwrap<wxNode_wxWindow>(args[0]->ToObject()); /* type: _1000 * */
    int id = (int)args[1]->ToInt32()->Value(); /* type: _8725  */
    wxNode_wxPoint* pos = args[2]->IsNull() ? NULL : wxNodeObject::unwrap<wxNode_wxPoint>(args[2]->ToObject()); /* type: _20518  */
    wxNode_wxSize* size = args[3]->IsNull() ? NULL : wxNodeObject::unwrap<wxNode_wxSize>(args[3]->ToObject()); /* type: _20628  */
    long int style = (long int)args[4]->ToInt32()->Value(); /* type: _592  */
    

    bool returnVal = self->Create(parent, id, *pos, *size, style);

    return scope.Close(v8::Boolean::New(returnVal));
  }
  
  /*
   * id: _54578
   */
  if(args.Length() == 4 && (args[0]->IsNull() || (args[0]->IsObject() && wxNode_wxWindow::AssignableFrom(args[0]->ToObject()->GetConstructorName()))) && args[1]->IsNumber() && (args[2]->IsNull() || (args[2]->IsObject() && wxNode_wxPoint::AssignableFrom(args[2]->ToObject()->GetConstructorName()))) && (args[3]->IsNull() || (args[3]->IsObject() && wxNode_wxSize::AssignableFrom(args[3]->ToObject()->GetConstructorName())))) {
    wxNode_wxWindow* parent = args[0]->IsNull() ? NULL : wxNodeObject::unwrap<wxNode_wxWindow>(args[0]->ToObject()); /* type: _1000 * */
    int id = (int)args[1]->ToInt32()->Value(); /* type: _8725  */
    wxNode_wxPoint* pos = args[2]->IsNull() ? NULL : wxNodeObject::unwrap<wxNode_wxPoint>(args[2]->ToObject()); /* type: _20518  */
    wxNode_wxSize* size = args[3]->IsNull() ? NULL : wxNodeObject::unwrap<wxNode_wxSize>(args[3]->ToObject()); /* type: _20628  */
    

    bool returnVal = self->Create(parent, id, *pos, *size);

    return scope.Close(v8::Boolean::New(returnVal));
  }
  
  /*
   * id: _54578
   */
  if(args.Length() == 3 && (args[0]->IsNull() || (args[0]->IsObject() && wxNode_wxWindow::AssignableFrom(args[0]->ToObject()->GetConstructorName()))) && args[1]->IsNumber() && (args[2]->IsNull() || (args[2]->IsObject() && wxNode_wxPoint::AssignableFrom(args[2]->ToObject()->GetConstructorName())))) {
    wxNode_wxWindow* parent = args[0]->IsNull() ? NULL : wxNodeObject::unwrap<wxNode_wxWindow>(args[0]->ToObject()); /* type: _1000 * */
    int id = (int)args[1]->ToInt32()->Value(); /* type: _8725  */
    wxNode_wxPoint* pos = args[2]->IsNull() ? NULL : wxNodeObject::unwrap<wxNode_wxPoint>(args[2]->ToObject()); /* type: _20518  */
    

    bool returnVal = self->Create(parent, id, *pos);

    return scope.Close(v8::Boolean::New(returnVal));
  }
  
  /*
   * id: _54578
   */
  if(args.Length() == 2 && (args[0]->IsNull() || (args[0]->IsObject() && wxNode_wxWindow::AssignableFrom(args[0]->ToObject()->GetConstructorName()))) && args[1]->IsNumber()) {
    wxNode_wxWindow* parent = args[0]->IsNull() ? NULL : wxNodeObject::unwrap<wxNode_wxWindow>(args[0]->ToObject()); /* type: _1000 * */
    int id = (int)args[1]->ToInt32()->Value(); /* type: _8725  */
    

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
   * id: _54579
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
   * id: _54580
   */
  if(args.Length() == 1 && args[0]->IsString()) {
    v8::String::AsciiValue label(args[0]->ToString()); /* type: _14975  */
    

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
   * id: _54581
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
   * id: _54582
   */
  if(args.Length() == 1 && args[0]->IsString()) {
    v8::String::AsciiValue text(args[0]->ToString()); /* type: _14975  */
    

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
   * id: _54583
   */
  if(args.Length() == 0) {
    

    wxString returnVal = self->GetLabelText();

    return scope.Close(v8::String::New(returnVal.mb_str()));
  }
  
  /*
   * id: _54589
   */
  if(args.Length() == 1 && args[0]->IsString()) {
    v8::String::AsciiValue label(args[0]->ToString()); /* type: _14975  */
    

    wxString returnVal = wxControl::GetLabelText(*label);

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
   * id: _54584
   */
  if(args.Length() == 1 && args[0]->IsString()) {
    v8::String::AsciiValue markup(args[0]->ToString()); /* type: _14975  */
    

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
   * id: _54585
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
   * id: _54586
   */
  if(args.Length() == 1 && (args[0]->IsNull() || (args[0]->IsObject() && wxNode_wxCommandEvent::AssignableFrom(args[0]->ToObject()->GetConstructorName())))) {
    wxNode_wxCommandEvent* event = args[0]->IsNull() ? NULL : wxNodeObject::unwrap<wxNode_wxCommandEvent>(args[0]->ToObject()); /* type: _58930  */
    

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
   * id: _54587
   */
  if(args.Length() == 1 && (args[0]->IsNull() || (args[0]->IsObject() && wxNode_wxFont::AssignableFrom(args[0]->ToObject()->GetConstructorName())))) {
    wxNode_wxFont* font = args[0]->IsNull() ? NULL : wxNodeObject::unwrap<wxNode_wxFont>(args[0]->ToObject()); /* type: _33186  */
    

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
   * id: _54588
   */
  if(args.Length() == 1 && (args[0]->IsNull() || (args[0]->IsObject() && wxNode_wxUpdateUIEvent::AssignableFrom(args[0]->ToObject()->GetConstructorName())))) {
    wxNode_wxUpdateUIEvent* event = args[0]->IsNull() ? NULL : wxNodeObject::unwrap<wxNode_wxUpdateUIEvent>(args[0]->ToObject()); /* type: _59754  */
    

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
   * id: _54590
   */
  if(args.Length() == 1 && args[0]->IsString()) {
    v8::String::AsciiValue str(args[0]->ToString()); /* type: _14975  */
    

    wxString returnVal = wxControl::RemoveMnemonics(*str);

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
   * id: _54591
   */
  if(args.Length() == 1 && args[0]->IsString()) {
    v8::String::AsciiValue str(args[0]->ToString()); /* type: _14975  */
    

    wxString returnVal = wxControl::EscapeMnemonics(*str);

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
   * id: _54592
   */
  if(args.Length() == 5 && args[0]->IsString() && (args[1]->IsNull() || (args[1]->IsObject() && wxNode_wxDC::AssignableFrom(args[1]->ToObject()->GetConstructorName()))) && args[2]->IsNumber() && args[3]->IsNumber() && args[4]->IsNumber()) {
    v8::String::AsciiValue label(args[0]->ToString()); /* type: _14975  */
    wxNode_wxDC* dc = args[1]->IsNull() ? NULL : wxNodeObject::unwrap<wxNode_wxDC>(args[1]->ToObject()); /* type: _59108  */
    wxEllipsizeMode mode = (wxEllipsizeMode)args[2]->ToNumber()->Value(); /* type: _180  */
    int maxWidth = (int)args[3]->ToInt32()->Value(); /* type: _165  */
    int flags = (int)args[4]->ToInt32()->Value(); /* type: _165  */
    

    wxString returnVal = wxControl::Ellipsize(*label, *dc, mode, maxWidth, flags);

    return scope.Close(v8::String::New(returnVal.mb_str()));
  }
  
  /*
   * id: _54592
   */
  if(args.Length() == 4 && args[0]->IsString() && (args[1]->IsNull() || (args[1]->IsObject() && wxNode_wxDC::AssignableFrom(args[1]->ToObject()->GetConstructorName()))) && args[2]->IsNumber() && args[3]->IsNumber()) {
    v8::String::AsciiValue label(args[0]->ToString()); /* type: _14975  */
    wxNode_wxDC* dc = args[1]->IsNull() ? NULL : wxNodeObject::unwrap<wxNode_wxDC>(args[1]->ToObject()); /* type: _59108  */
    wxEllipsizeMode mode = (wxEllipsizeMode)args[2]->ToNumber()->Value(); /* type: _180  */
    int maxWidth = (int)args[3]->ToInt32()->Value(); /* type: _165  */
    

    wxString returnVal = wxControl::Ellipsize(*label, *dc, mode, maxWidth);

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
   * id: _54593
   */
  if(args.Length() == 2 && args[0]->IsString() && args[1]->IsString()) {
    v8::String::AsciiValue label(args[0]->ToString()); /* type: _14975  */
    wxString* labelOnly; /* type: _24013 * */
    

    int returnVal = wxControl::FindAccelIndex(*label, labelOnly);

    return scope.Close(v8::Number::New(returnVal));
  }
  
  /*
   * id: _54593
   */
  if(args.Length() == 1 && args[0]->IsString()) {
    v8::String::AsciiValue label(args[0]->ToString()); /* type: _14975  */
    

    int returnVal = wxControl::FindAccelIndex(*label);

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
   * id: _54594
   */
  if(args.Length() == 1 && args[0]->IsNumber()) {
    wxWindowVariant variant = (wxWindowVariant)args[0]->ToNumber()->Value(); /* type: _10583  */
    

    wxVisualAttributes returnVal = wxControl::GetCompositeControlsDefaultAttributes(variant);

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



