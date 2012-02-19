
#include <sstream>
#include "wxNode_wxToolBar.h"
#include "wxNode_wxEvtHandler.h"
#include "wxNode_wxControl.h"
#include "wxNode_wxWindow.h"
#include "wxNode_wxPoint.h"
#include "wxNode_wxSize.h"
#include "wxNode_wxToolBarToolBase.h"
#include "wxNode_wxBitmap.h"
#include "wxNode_wxObject.h"
#include "wxNode_wxToolBarTool.h"
#include "wxNode_wxMenu.h"


/* static */ v8::Persistent<v8::FunctionTemplate> wxNode_wxToolBar::s_ct;



wxNode_wxToolBar::wxNode_wxToolBar()
  : wxToolBar()
{

}

wxNode_wxToolBar::wxNode_wxToolBar(wxWindow* parent, int id, wxPoint& pos, wxSize& size, long int style, const wxString& name)
  : wxToolBar(parent, id, pos, size, style, name)
{

}

wxNode_wxToolBar::wxNode_wxToolBar(wxWindow* parent, int id, wxPoint& pos, wxSize& size, long int style)
  : wxToolBar(parent, id, pos, size, style)
{

}

wxNode_wxToolBar::wxNode_wxToolBar(wxWindow* parent, int id, wxPoint& pos, wxSize& size)
  : wxToolBar(parent, id, pos, size)
{

}

wxNode_wxToolBar::wxNode_wxToolBar(wxWindow* parent, int id, wxPoint& pos)
  : wxToolBar(parent, id, pos)
{

}

wxNode_wxToolBar::wxNode_wxToolBar(wxWindow* parent, int id)
  : wxToolBar(parent, id)
{

}




/*static*/ void wxNode_wxToolBar::Init(v8::Handle<v8::Object> target) {
  v8::HandleScope scope;

  v8::Local<v8::FunctionTemplate> t = v8::FunctionTemplate::New(wxNodeObject::NewFunc);
  s_ct = v8::Persistent<v8::FunctionTemplate>::New(t);
  s_ct->InstanceTemplate()->SetInternalFieldCount(2);
  s_ct->SetClassName(v8::String::NewSymbol("ToolBar"));

  NODE_SET_PROTOTYPE_METHOD(s_ct, "init", _init);
  AddMethods(s_ct);

  target->Set(v8::String::NewSymbol("ToolBar"), s_ct->GetFunction());
}

/*static*/ void wxNode_wxToolBar::AddMethods(v8::Handle<v8::FunctionTemplate> target) {
  wxNode_wxControl::AddMethods(target);
  NODE_SET_PROTOTYPE_METHOD(target, "addTool", _AddTool);
  NODE_SET_PROTOTYPE_METHOD(target, "addCheckTool", _AddCheckTool);
  NODE_SET_PROTOTYPE_METHOD(target, "addRadioTool", _AddRadioTool);
  NODE_SET_PROTOTYPE_METHOD(target, "insertTool", _InsertTool);
  NODE_SET_PROTOTYPE_METHOD(target, "addControl", _AddControl);
  NODE_SET_PROTOTYPE_METHOD(target, "insertControl", _InsertControl);
  NODE_SET_PROTOTYPE_METHOD(target, "findControl", _FindControl);
  NODE_SET_PROTOTYPE_METHOD(target, "addSeparator", _AddSeparator);
  NODE_SET_PROTOTYPE_METHOD(target, "insertSeparator", _InsertSeparator);
  NODE_SET_PROTOTYPE_METHOD(target, "addStretchableSpace", _AddStretchableSpace);
  NODE_SET_PROTOTYPE_METHOD(target, "insertStretchableSpace", _InsertStretchableSpace);
  NODE_SET_PROTOTYPE_METHOD(target, "removeTool", _RemoveTool);
  NODE_SET_PROTOTYPE_METHOD(target, "deleteToolByPos", _DeleteToolByPos);
  NODE_SET_PROTOTYPE_METHOD(target, "deleteTool", _DeleteTool);
  NODE_SET_PROTOTYPE_METHOD(target, "clearTools", _ClearTools);
  NODE_SET_PROTOTYPE_METHOD(target, "realize", _Realize);
  NODE_SET_PROTOTYPE_METHOD(target, "enableTool", _EnableTool);
  NODE_SET_PROTOTYPE_METHOD(target, "toggleTool", _ToggleTool);
  NODE_SET_PROTOTYPE_METHOD(target, "setToggle", _SetToggle);
  NODE_SET_PROTOTYPE_METHOD(target, "getToolClientData", _GetToolClientData);
  NODE_SET_PROTOTYPE_METHOD(target, "setToolClientData", _SetToolClientData);
  NODE_SET_PROTOTYPE_METHOD(target, "getToolPos", _GetToolPos);
  NODE_SET_PROTOTYPE_METHOD(target, "getToolState", _GetToolState);
  NODE_SET_PROTOTYPE_METHOD(target, "getToolEnabled", _GetToolEnabled);
  NODE_SET_PROTOTYPE_METHOD(target, "setToolShortHelp", _SetToolShortHelp);
  NODE_SET_PROTOTYPE_METHOD(target, "getToolShortHelp", _GetToolShortHelp);
  NODE_SET_PROTOTYPE_METHOD(target, "setToolLongHelp", _SetToolLongHelp);
  NODE_SET_PROTOTYPE_METHOD(target, "getToolLongHelp", _GetToolLongHelp);
  NODE_SET_PROTOTYPE_METHOD(target, "setToolNormalBitmap", _SetToolNormalBitmap);
  NODE_SET_PROTOTYPE_METHOD(target, "setToolDisabledBitmap", _SetToolDisabledBitmap);
  NODE_SET_PROTOTYPE_METHOD(target, "setMargins", _SetMargins);
  NODE_SET_PROTOTYPE_METHOD(target, "setToolPacking", _SetToolPacking);
  NODE_SET_PROTOTYPE_METHOD(target, "setToolSeparation", _SetToolSeparation);
  NODE_SET_PROTOTYPE_METHOD(target, "getToolMargins", _GetToolMargins);
  NODE_SET_PROTOTYPE_METHOD(target, "getToolPacking", _GetToolPacking);
  NODE_SET_PROTOTYPE_METHOD(target, "getToolSeparation", _GetToolSeparation);
  NODE_SET_PROTOTYPE_METHOD(target, "setRows", _SetRows);
  NODE_SET_PROTOTYPE_METHOD(target, "setMaxRowsCols", _SetMaxRowsCols);
  NODE_SET_PROTOTYPE_METHOD(target, "getMaxRows", _GetMaxRows);
  NODE_SET_PROTOTYPE_METHOD(target, "getMaxCols", _GetMaxCols);
  NODE_SET_PROTOTYPE_METHOD(target, "setToolBitmapSize", _SetToolBitmapSize);
  NODE_SET_PROTOTYPE_METHOD(target, "getToolBitmapSize", _GetToolBitmapSize);
  NODE_SET_PROTOTYPE_METHOD(target, "getToolSize", _GetToolSize);
  NODE_SET_PROTOTYPE_METHOD(target, "findToolForPosition", _FindToolForPosition);
  NODE_SET_PROTOTYPE_METHOD(target, "findById", _FindById);
  NODE_SET_PROTOTYPE_METHOD(target, "isVertical", _IsVertical);
  NODE_SET_PROTOTYPE_METHOD(target, "getToolsCount", _GetToolsCount);
  NODE_SET_PROTOTYPE_METHOD(target, "getToolByPos", _GetToolByPos);
  NODE_SET_PROTOTYPE_METHOD(target, "onLeftClick", _OnLeftClick);
  NODE_SET_PROTOTYPE_METHOD(target, "onRightClick", _OnRightClick);
  NODE_SET_PROTOTYPE_METHOD(target, "onMouseEnter", _OnMouseEnter);
  NODE_SET_PROTOTYPE_METHOD(target, "getMargins", _GetMargins);
  NODE_SET_PROTOTYPE_METHOD(target, "updateWindowUI", _UpdateWindowUI);
  NODE_SET_PROTOTYPE_METHOD(target, "acceptsFocus", _AcceptsFocus);
  NODE_SET_PROTOTYPE_METHOD(target, "setDropdownMenu", _SetDropdownMenu);
  
  
}

/*static*/ v8::Handle<v8::Value> wxNode_wxToolBar::New(const wxNode_wxToolBar* obj) {
  v8::HandleScope scope;

  if(obj == NULL) {
    return scope.Close(v8::Null());
  }
  
  v8::Local<v8::FunctionTemplate> returnObjFt = v8::FunctionTemplate::New(wxNodeObject::NewFunc);
  returnObjFt->InstanceTemplate()->SetInternalFieldCount(2);
  returnObjFt->SetClassName(v8::String::NewSymbol("ToolBar"));
  wxNode_wxToolBar::AddMethods(returnObjFt);

  v8::Local<v8::Function> returnObjFn = returnObjFt->GetFunction();

  v8::Local<v8::Object> returnObj = returnObjFn->CallAsConstructor(0, new v8::Local<v8::Value>[0])->ToObject();
  returnObj->SetPointerInInternalField(0, (void*)obj);
  NodeExEvtHandlerImpl* evtHandler = dynamic_cast<NodeExEvtHandlerImpl*>((wxNode_wxToolBar*)obj);
  returnObj->SetPointerInInternalField(1, evtHandler);

  return scope.Close(returnObj);
}

/*static*/ v8::Handle<v8::Value> wxNode_wxToolBar::New(const wxToolBar* obj) {
  v8::HandleScope scope;

  if(obj == NULL) {
    return scope.Close(v8::Null());
  }
  
  v8::Local<v8::FunctionTemplate> returnObjFt = v8::FunctionTemplate::New(wxNodeObject::NewFunc);
  returnObjFt->InstanceTemplate()->SetInternalFieldCount(2);
  returnObjFt->SetClassName(v8::String::NewSymbol("ToolBar"));
  wxNode_wxToolBar::AddMethods(returnObjFt);

  v8::Local<v8::Function> returnObjFn = returnObjFt->GetFunction();
  v8::Local<v8::Object> returnObj = returnObjFn->CallAsConstructor(0, new v8::Local<v8::Value>[0])->ToObject();
  returnObj->SetPointerInInternalField(0, (void*)obj);
  NodeExEvtHandlerImplWrap* wrap = new NodeExEvtHandlerImplWrap(returnObj);
  NodeExEvtHandlerImpl* evtHandler = dynamic_cast<NodeExEvtHandlerImpl*>(wrap);
  returnObj->SetPointerInInternalField(1, evtHandler);

  return scope.Close(returnObj);
}

/*static*/ v8::Handle<v8::Value> wxNode_wxToolBar::NewCopy(const wxToolBar& obj) {
  v8::HandleScope scope;
  wxNode_wxToolBar* returnVal = new wxNode_wxToolBar();
  memcpy(dynamic_cast<wxToolBar*>(returnVal), &obj, sizeof(wxToolBar));
  return scope.Close(New(returnVal));

}

/*static*/ bool wxNode_wxToolBar::AssignableFrom(const v8::Handle<v8::String>& className) {
  v8::String::AsciiValue classNameStr(className);
  return AssignableFrom(*classNameStr);
}

/*static*/ bool wxNode_wxToolBar::AssignableFrom(const char* className) {
  if(!strcmp("ToolBar", className)) { return true; }
  
  if(!strcmp("ToolBar", className)) { return true; }


  return false;
}

/*static*/ v8::Handle<v8::Value> wxNode_wxToolBar::_init(const v8::Arguments& args) {
  v8::HandleScope scope;

  
  
  /*
   * id: _53558
   */
  if(args.Length() == 0) {
    

    wxNode_wxToolBar *self = new wxNode_wxToolBar();
    NodeExEvtHandlerImpl* evtHandler = dynamic_cast<NodeExEvtHandlerImpl*>(self);
    self->wrap(args.This(), self, evtHandler);
    return args.This();
  }
  
  /*
   * id: _53559
   */
  if(args.Length() == 6 && (args[0]->IsNull() || (args[0]->IsObject() && wxNode_wxWindow::AssignableFrom(args[0]->ToObject()->GetConstructorName()))) && args[1]->IsNumber() && (args[2]->IsNull() || (args[2]->IsObject() && wxNode_wxPoint::AssignableFrom(args[2]->ToObject()->GetConstructorName()))) && (args[3]->IsNull() || (args[3]->IsObject() && wxNode_wxSize::AssignableFrom(args[3]->ToObject()->GetConstructorName()))) && args[4]->IsNumber() && args[5]->IsString()) {
    wxNode_wxWindow* parent = args[0]->IsNull() ? NULL : wxNodeObject::unwrap<wxNode_wxWindow>(args[0]->ToObject()); /* type: _1000 * */
    int id = (int)args[1]->ToInt32()->Value(); /* type: _8725  */
    wxNode_wxPoint* pos = args[2]->IsNull() ? NULL : wxNodeObject::unwrap<wxNode_wxPoint>(args[2]->ToObject()); /* type: _20518  */
    wxNode_wxSize* size = args[3]->IsNull() ? NULL : wxNodeObject::unwrap<wxNode_wxSize>(args[3]->ToObject()); /* type: _20628  */
    long int style = (long int)args[4]->ToInt32()->Value(); /* type: _592  */
    v8::String::AsciiValue name(args[5]->ToString()); /* type: _14975  */
    

    wxNode_wxToolBar *self = new wxNode_wxToolBar(parent, id, *pos, *size, style, *name);
    NodeExEvtHandlerImpl* evtHandler = dynamic_cast<NodeExEvtHandlerImpl*>(self);
    self->wrap(args.This(), self, evtHandler);
    return args.This();
  }
  
  /*
   * id: _53559
   */
  if(args.Length() == 5 && (args[0]->IsNull() || (args[0]->IsObject() && wxNode_wxWindow::AssignableFrom(args[0]->ToObject()->GetConstructorName()))) && args[1]->IsNumber() && (args[2]->IsNull() || (args[2]->IsObject() && wxNode_wxPoint::AssignableFrom(args[2]->ToObject()->GetConstructorName()))) && (args[3]->IsNull() || (args[3]->IsObject() && wxNode_wxSize::AssignableFrom(args[3]->ToObject()->GetConstructorName()))) && args[4]->IsNumber()) {
    wxNode_wxWindow* parent = args[0]->IsNull() ? NULL : wxNodeObject::unwrap<wxNode_wxWindow>(args[0]->ToObject()); /* type: _1000 * */
    int id = (int)args[1]->ToInt32()->Value(); /* type: _8725  */
    wxNode_wxPoint* pos = args[2]->IsNull() ? NULL : wxNodeObject::unwrap<wxNode_wxPoint>(args[2]->ToObject()); /* type: _20518  */
    wxNode_wxSize* size = args[3]->IsNull() ? NULL : wxNodeObject::unwrap<wxNode_wxSize>(args[3]->ToObject()); /* type: _20628  */
    long int style = (long int)args[4]->ToInt32()->Value(); /* type: _592  */
    

    wxNode_wxToolBar *self = new wxNode_wxToolBar(parent, id, *pos, *size, style);
    NodeExEvtHandlerImpl* evtHandler = dynamic_cast<NodeExEvtHandlerImpl*>(self);
    self->wrap(args.This(), self, evtHandler);
    return args.This();
  }
  
  /*
   * id: _53559
   */
  if(args.Length() == 4 && (args[0]->IsNull() || (args[0]->IsObject() && wxNode_wxWindow::AssignableFrom(args[0]->ToObject()->GetConstructorName()))) && args[1]->IsNumber() && (args[2]->IsNull() || (args[2]->IsObject() && wxNode_wxPoint::AssignableFrom(args[2]->ToObject()->GetConstructorName()))) && (args[3]->IsNull() || (args[3]->IsObject() && wxNode_wxSize::AssignableFrom(args[3]->ToObject()->GetConstructorName())))) {
    wxNode_wxWindow* parent = args[0]->IsNull() ? NULL : wxNodeObject::unwrap<wxNode_wxWindow>(args[0]->ToObject()); /* type: _1000 * */
    int id = (int)args[1]->ToInt32()->Value(); /* type: _8725  */
    wxNode_wxPoint* pos = args[2]->IsNull() ? NULL : wxNodeObject::unwrap<wxNode_wxPoint>(args[2]->ToObject()); /* type: _20518  */
    wxNode_wxSize* size = args[3]->IsNull() ? NULL : wxNodeObject::unwrap<wxNode_wxSize>(args[3]->ToObject()); /* type: _20628  */
    

    wxNode_wxToolBar *self = new wxNode_wxToolBar(parent, id, *pos, *size);
    NodeExEvtHandlerImpl* evtHandler = dynamic_cast<NodeExEvtHandlerImpl*>(self);
    self->wrap(args.This(), self, evtHandler);
    return args.This();
  }
  
  /*
   * id: _53559
   */
  if(args.Length() == 3 && (args[0]->IsNull() || (args[0]->IsObject() && wxNode_wxWindow::AssignableFrom(args[0]->ToObject()->GetConstructorName()))) && args[1]->IsNumber() && (args[2]->IsNull() || (args[2]->IsObject() && wxNode_wxPoint::AssignableFrom(args[2]->ToObject()->GetConstructorName())))) {
    wxNode_wxWindow* parent = args[0]->IsNull() ? NULL : wxNodeObject::unwrap<wxNode_wxWindow>(args[0]->ToObject()); /* type: _1000 * */
    int id = (int)args[1]->ToInt32()->Value(); /* type: _8725  */
    wxNode_wxPoint* pos = args[2]->IsNull() ? NULL : wxNodeObject::unwrap<wxNode_wxPoint>(args[2]->ToObject()); /* type: _20518  */
    

    wxNode_wxToolBar *self = new wxNode_wxToolBar(parent, id, *pos);
    NodeExEvtHandlerImpl* evtHandler = dynamic_cast<NodeExEvtHandlerImpl*>(self);
    self->wrap(args.This(), self, evtHandler);
    return args.This();
  }
  
  /*
   * id: _53559
   */
  if(args.Length() == 2 && (args[0]->IsNull() || (args[0]->IsObject() && wxNode_wxWindow::AssignableFrom(args[0]->ToObject()->GetConstructorName()))) && args[1]->IsNumber()) {
    wxNode_wxWindow* parent = args[0]->IsNull() ? NULL : wxNodeObject::unwrap<wxNode_wxWindow>(args[0]->ToObject()); /* type: _1000 * */
    int id = (int)args[1]->ToInt32()->Value(); /* type: _8725  */
    

    wxNode_wxToolBar *self = new wxNode_wxToolBar(parent, id);
    NodeExEvtHandlerImpl* evtHandler = dynamic_cast<NodeExEvtHandlerImpl*>(self);
    self->wrap(args.This(), self, evtHandler);
    return args.This();
  }
  
  

  std::ostringstream errStr;
  errStr << "Could not find matching constructor for arguments (class name: wxToolBar).\n";
  errStr << "  arg count: " << args.Length() << "\n";
  for(int i = 0; i < args.Length(); i++) {
    v8::String::AsciiValue argStr(args[i]);
    errStr << "  arg[" << i << "]: " << *argStr << "\n";
  }
  return v8::ThrowException(v8::Exception::TypeError(v8::String::New(errStr.str().c_str())));
}


/*static*/ v8::Handle<v8::Value> wxNode_wxToolBar::_AddTool(const v8::Arguments& args) {
  v8::HandleScope scope;
  wxNode_wxToolBar* self = unwrap<wxNode_wxToolBar>(args.This());

  
  /*
   * id: _40060
   */
  if(args.Length() == 8 && args[0]->IsNumber() && args[1]->IsString() && (args[2]->IsNull() || (args[2]->IsObject() && wxNode_wxBitmap::AssignableFrom(args[2]->ToObject()->GetConstructorName()))) && (args[3]->IsNull() || (args[3]->IsObject() && wxNode_wxBitmap::AssignableFrom(args[3]->ToObject()->GetConstructorName()))) && args[4]->IsNumber() && args[5]->IsString() && args[6]->IsString() && (args[7]->IsNull() || (args[7]->IsObject() && wxNode_wxObject::AssignableFrom(args[7]->ToObject()->GetConstructorName())))) {
    int toolid = (int)args[0]->ToInt32()->Value(); /* type: _165  */
    v8::String::AsciiValue label(args[1]->ToString()); /* type: _14975  */
    wxNode_wxBitmap* bitmap = args[2]->IsNull() ? NULL : wxNodeObject::unwrap<wxNode_wxBitmap>(args[2]->ToObject()); /* type: _15645  */
    wxNode_wxBitmap* bmpDisabled = args[3]->IsNull() ? NULL : wxNodeObject::unwrap<wxNode_wxBitmap>(args[3]->ToObject()); /* type: _15645  */
    wxItemKind kind = (wxItemKind)args[4]->ToNumber()->Value(); /* type: _4680  */
    v8::String::AsciiValue shortHelp(args[5]->ToString()); /* type: _14975  */
    v8::String::AsciiValue longHelp(args[6]->ToString()); /* type: _14975  */
    wxNode_wxObject* data = args[7]->IsNull() ? NULL : wxNodeObject::unwrap<wxNode_wxObject>(args[7]->ToObject()); /* type: _15746 * */
    

    const wxToolBarToolBase* returnVal = self->AddTool(toolid, *label, *bitmap, *bmpDisabled, kind, *shortHelp, *longHelp, data);

    return scope.Close(wxNode_wxToolBarToolBase::New(returnVal));
  }
  
  /*
   * id: _40060
   */
  if(args.Length() == 7 && args[0]->IsNumber() && args[1]->IsString() && (args[2]->IsNull() || (args[2]->IsObject() && wxNode_wxBitmap::AssignableFrom(args[2]->ToObject()->GetConstructorName()))) && (args[3]->IsNull() || (args[3]->IsObject() && wxNode_wxBitmap::AssignableFrom(args[3]->ToObject()->GetConstructorName()))) && args[4]->IsNumber() && args[5]->IsString() && args[6]->IsString()) {
    int toolid = (int)args[0]->ToInt32()->Value(); /* type: _165  */
    v8::String::AsciiValue label(args[1]->ToString()); /* type: _14975  */
    wxNode_wxBitmap* bitmap = args[2]->IsNull() ? NULL : wxNodeObject::unwrap<wxNode_wxBitmap>(args[2]->ToObject()); /* type: _15645  */
    wxNode_wxBitmap* bmpDisabled = args[3]->IsNull() ? NULL : wxNodeObject::unwrap<wxNode_wxBitmap>(args[3]->ToObject()); /* type: _15645  */
    wxItemKind kind = (wxItemKind)args[4]->ToNumber()->Value(); /* type: _4680  */
    v8::String::AsciiValue shortHelp(args[5]->ToString()); /* type: _14975  */
    v8::String::AsciiValue longHelp(args[6]->ToString()); /* type: _14975  */
    

    const wxToolBarToolBase* returnVal = self->AddTool(toolid, *label, *bitmap, *bmpDisabled, kind, *shortHelp, *longHelp);

    return scope.Close(wxNode_wxToolBarToolBase::New(returnVal));
  }
  
  /*
   * id: _40060
   */
  if(args.Length() == 6 && args[0]->IsNumber() && args[1]->IsString() && (args[2]->IsNull() || (args[2]->IsObject() && wxNode_wxBitmap::AssignableFrom(args[2]->ToObject()->GetConstructorName()))) && (args[3]->IsNull() || (args[3]->IsObject() && wxNode_wxBitmap::AssignableFrom(args[3]->ToObject()->GetConstructorName()))) && args[4]->IsNumber() && args[5]->IsString()) {
    int toolid = (int)args[0]->ToInt32()->Value(); /* type: _165  */
    v8::String::AsciiValue label(args[1]->ToString()); /* type: _14975  */
    wxNode_wxBitmap* bitmap = args[2]->IsNull() ? NULL : wxNodeObject::unwrap<wxNode_wxBitmap>(args[2]->ToObject()); /* type: _15645  */
    wxNode_wxBitmap* bmpDisabled = args[3]->IsNull() ? NULL : wxNodeObject::unwrap<wxNode_wxBitmap>(args[3]->ToObject()); /* type: _15645  */
    wxItemKind kind = (wxItemKind)args[4]->ToNumber()->Value(); /* type: _4680  */
    v8::String::AsciiValue shortHelp(args[5]->ToString()); /* type: _14975  */
    

    const wxToolBarToolBase* returnVal = self->AddTool(toolid, *label, *bitmap, *bmpDisabled, kind, *shortHelp);

    return scope.Close(wxNode_wxToolBarToolBase::New(returnVal));
  }
  
  /*
   * id: _40060
   */
  if(args.Length() == 5 && args[0]->IsNumber() && args[1]->IsString() && (args[2]->IsNull() || (args[2]->IsObject() && wxNode_wxBitmap::AssignableFrom(args[2]->ToObject()->GetConstructorName()))) && (args[3]->IsNull() || (args[3]->IsObject() && wxNode_wxBitmap::AssignableFrom(args[3]->ToObject()->GetConstructorName()))) && args[4]->IsNumber()) {
    int toolid = (int)args[0]->ToInt32()->Value(); /* type: _165  */
    v8::String::AsciiValue label(args[1]->ToString()); /* type: _14975  */
    wxNode_wxBitmap* bitmap = args[2]->IsNull() ? NULL : wxNodeObject::unwrap<wxNode_wxBitmap>(args[2]->ToObject()); /* type: _15645  */
    wxNode_wxBitmap* bmpDisabled = args[3]->IsNull() ? NULL : wxNodeObject::unwrap<wxNode_wxBitmap>(args[3]->ToObject()); /* type: _15645  */
    wxItemKind kind = (wxItemKind)args[4]->ToNumber()->Value(); /* type: _4680  */
    

    const wxToolBarToolBase* returnVal = self->AddTool(toolid, *label, *bitmap, *bmpDisabled, kind);

    return scope.Close(wxNode_wxToolBarToolBase::New(returnVal));
  }
  
  /*
   * id: _40060
   */
  if(args.Length() == 4 && args[0]->IsNumber() && args[1]->IsString() && (args[2]->IsNull() || (args[2]->IsObject() && wxNode_wxBitmap::AssignableFrom(args[2]->ToObject()->GetConstructorName()))) && (args[3]->IsNull() || (args[3]->IsObject() && wxNode_wxBitmap::AssignableFrom(args[3]->ToObject()->GetConstructorName())))) {
    int toolid = (int)args[0]->ToInt32()->Value(); /* type: _165  */
    v8::String::AsciiValue label(args[1]->ToString()); /* type: _14975  */
    wxNode_wxBitmap* bitmap = args[2]->IsNull() ? NULL : wxNodeObject::unwrap<wxNode_wxBitmap>(args[2]->ToObject()); /* type: _15645  */
    wxNode_wxBitmap* bmpDisabled = args[3]->IsNull() ? NULL : wxNodeObject::unwrap<wxNode_wxBitmap>(args[3]->ToObject()); /* type: _15645  */
    

    const wxToolBarToolBase* returnVal = self->AddTool(toolid, *label, *bitmap, *bmpDisabled);

    return scope.Close(wxNode_wxToolBarToolBase::New(returnVal));
  }
  
  /*
   * id: _40061
   */
  if(args.Length() == 5 && args[0]->IsNumber() && args[1]->IsString() && (args[2]->IsNull() || (args[2]->IsObject() && wxNode_wxBitmap::AssignableFrom(args[2]->ToObject()->GetConstructorName()))) && args[3]->IsString() && args[4]->IsNumber()) {
    int toolid = (int)args[0]->ToInt32()->Value(); /* type: _165  */
    v8::String::AsciiValue label(args[1]->ToString()); /* type: _14975  */
    wxNode_wxBitmap* bitmap = args[2]->IsNull() ? NULL : wxNodeObject::unwrap<wxNode_wxBitmap>(args[2]->ToObject()); /* type: _15645  */
    v8::String::AsciiValue shortHelp(args[3]->ToString()); /* type: _14975  */
    wxItemKind kind = (wxItemKind)args[4]->ToNumber()->Value(); /* type: _4680  */
    

    const wxToolBarToolBase* returnVal = self->AddTool(toolid, *label, *bitmap, *shortHelp, kind);

    return scope.Close(wxNode_wxToolBarToolBase::New(returnVal));
  }
  
  /*
   * id: _40061
   */
  if(args.Length() == 4 && args[0]->IsNumber() && args[1]->IsString() && (args[2]->IsNull() || (args[2]->IsObject() && wxNode_wxBitmap::AssignableFrom(args[2]->ToObject()->GetConstructorName()))) && args[3]->IsString()) {
    int toolid = (int)args[0]->ToInt32()->Value(); /* type: _165  */
    v8::String::AsciiValue label(args[1]->ToString()); /* type: _14975  */
    wxNode_wxBitmap* bitmap = args[2]->IsNull() ? NULL : wxNodeObject::unwrap<wxNode_wxBitmap>(args[2]->ToObject()); /* type: _15645  */
    v8::String::AsciiValue shortHelp(args[3]->ToString()); /* type: _14975  */
    

    const wxToolBarToolBase* returnVal = self->AddTool(toolid, *label, *bitmap, *shortHelp);

    return scope.Close(wxNode_wxToolBarToolBase::New(returnVal));
  }
  
  /*
   * id: _40061
   */
  if(args.Length() == 3 && args[0]->IsNumber() && args[1]->IsString() && (args[2]->IsNull() || (args[2]->IsObject() && wxNode_wxBitmap::AssignableFrom(args[2]->ToObject()->GetConstructorName())))) {
    int toolid = (int)args[0]->ToInt32()->Value(); /* type: _165  */
    v8::String::AsciiValue label(args[1]->ToString()); /* type: _14975  */
    wxNode_wxBitmap* bitmap = args[2]->IsNull() ? NULL : wxNodeObject::unwrap<wxNode_wxBitmap>(args[2]->ToObject()); /* type: _15645  */
    

    const wxToolBarToolBase* returnVal = self->AddTool(toolid, *label, *bitmap);

    return scope.Close(wxNode_wxToolBarToolBase::New(returnVal));
  }
  
  /*
   * id: _40065
   */
  if(args.Length() == 1 && (args[0]->IsNull() || (args[0]->IsObject() && wxNode_wxToolBarTool::AssignableFrom(args[0]->ToObject()->GetConstructorName())))) {
    wxNode_wxToolBarTool* tool = args[0]->IsNull() ? NULL : wxNodeObject::unwrap<wxNode_wxToolBarTool>(args[0]->ToObject()); /* type: _24046 * */
    

    const wxToolBarToolBase* returnVal = self->AddTool(tool);

    return scope.Close(wxNode_wxToolBarToolBase::New(returnVal));
  }
  

  std::ostringstream errStr;
  errStr << "Could not find matching method for arguments (method name: wxToolBar::AddTool).\n";
  errStr << "  arg count: " << args.Length() << "\n";
  for(int i = 0; i < args.Length(); i++) {
    v8::String::AsciiValue argStr(args[i]);
    errStr << "  arg[" << i << "]: " << *argStr << "\n";
  }
  return v8::ThrowException(v8::Exception::TypeError(v8::String::New(errStr.str().c_str())));
}

/*static*/ v8::Handle<v8::Value> wxNode_wxToolBar::_AddCheckTool(const v8::Arguments& args) {
  v8::HandleScope scope;
  wxNode_wxToolBar* self = unwrap<wxNode_wxToolBar>(args.This());

  
  /*
   * id: _40062
   */
  if(args.Length() == 7 && args[0]->IsNumber() && args[1]->IsString() && (args[2]->IsNull() || (args[2]->IsObject() && wxNode_wxBitmap::AssignableFrom(args[2]->ToObject()->GetConstructorName()))) && (args[3]->IsNull() || (args[3]->IsObject() && wxNode_wxBitmap::AssignableFrom(args[3]->ToObject()->GetConstructorName()))) && args[4]->IsString() && args[5]->IsString() && (args[6]->IsNull() || (args[6]->IsObject() && wxNode_wxObject::AssignableFrom(args[6]->ToObject()->GetConstructorName())))) {
    int toolid = (int)args[0]->ToInt32()->Value(); /* type: _165  */
    v8::String::AsciiValue label(args[1]->ToString()); /* type: _14975  */
    wxNode_wxBitmap* bitmap = args[2]->IsNull() ? NULL : wxNodeObject::unwrap<wxNode_wxBitmap>(args[2]->ToObject()); /* type: _15645  */
    wxNode_wxBitmap* bmpDisabled = args[3]->IsNull() ? NULL : wxNodeObject::unwrap<wxNode_wxBitmap>(args[3]->ToObject()); /* type: _15645  */
    v8::String::AsciiValue shortHelp(args[4]->ToString()); /* type: _14975  */
    v8::String::AsciiValue longHelp(args[5]->ToString()); /* type: _14975  */
    wxNode_wxObject* data = args[6]->IsNull() ? NULL : wxNodeObject::unwrap<wxNode_wxObject>(args[6]->ToObject()); /* type: _15746 * */
    

    const wxToolBarToolBase* returnVal = self->AddCheckTool(toolid, *label, *bitmap, *bmpDisabled, *shortHelp, *longHelp, data);

    return scope.Close(wxNode_wxToolBarToolBase::New(returnVal));
  }
  
  /*
   * id: _40062
   */
  if(args.Length() == 6 && args[0]->IsNumber() && args[1]->IsString() && (args[2]->IsNull() || (args[2]->IsObject() && wxNode_wxBitmap::AssignableFrom(args[2]->ToObject()->GetConstructorName()))) && (args[3]->IsNull() || (args[3]->IsObject() && wxNode_wxBitmap::AssignableFrom(args[3]->ToObject()->GetConstructorName()))) && args[4]->IsString() && args[5]->IsString()) {
    int toolid = (int)args[0]->ToInt32()->Value(); /* type: _165  */
    v8::String::AsciiValue label(args[1]->ToString()); /* type: _14975  */
    wxNode_wxBitmap* bitmap = args[2]->IsNull() ? NULL : wxNodeObject::unwrap<wxNode_wxBitmap>(args[2]->ToObject()); /* type: _15645  */
    wxNode_wxBitmap* bmpDisabled = args[3]->IsNull() ? NULL : wxNodeObject::unwrap<wxNode_wxBitmap>(args[3]->ToObject()); /* type: _15645  */
    v8::String::AsciiValue shortHelp(args[4]->ToString()); /* type: _14975  */
    v8::String::AsciiValue longHelp(args[5]->ToString()); /* type: _14975  */
    

    const wxToolBarToolBase* returnVal = self->AddCheckTool(toolid, *label, *bitmap, *bmpDisabled, *shortHelp, *longHelp);

    return scope.Close(wxNode_wxToolBarToolBase::New(returnVal));
  }
  
  /*
   * id: _40062
   */
  if(args.Length() == 5 && args[0]->IsNumber() && args[1]->IsString() && (args[2]->IsNull() || (args[2]->IsObject() && wxNode_wxBitmap::AssignableFrom(args[2]->ToObject()->GetConstructorName()))) && (args[3]->IsNull() || (args[3]->IsObject() && wxNode_wxBitmap::AssignableFrom(args[3]->ToObject()->GetConstructorName()))) && args[4]->IsString()) {
    int toolid = (int)args[0]->ToInt32()->Value(); /* type: _165  */
    v8::String::AsciiValue label(args[1]->ToString()); /* type: _14975  */
    wxNode_wxBitmap* bitmap = args[2]->IsNull() ? NULL : wxNodeObject::unwrap<wxNode_wxBitmap>(args[2]->ToObject()); /* type: _15645  */
    wxNode_wxBitmap* bmpDisabled = args[3]->IsNull() ? NULL : wxNodeObject::unwrap<wxNode_wxBitmap>(args[3]->ToObject()); /* type: _15645  */
    v8::String::AsciiValue shortHelp(args[4]->ToString()); /* type: _14975  */
    

    const wxToolBarToolBase* returnVal = self->AddCheckTool(toolid, *label, *bitmap, *bmpDisabled, *shortHelp);

    return scope.Close(wxNode_wxToolBarToolBase::New(returnVal));
  }
  
  /*
   * id: _40062
   */
  if(args.Length() == 4 && args[0]->IsNumber() && args[1]->IsString() && (args[2]->IsNull() || (args[2]->IsObject() && wxNode_wxBitmap::AssignableFrom(args[2]->ToObject()->GetConstructorName()))) && (args[3]->IsNull() || (args[3]->IsObject() && wxNode_wxBitmap::AssignableFrom(args[3]->ToObject()->GetConstructorName())))) {
    int toolid = (int)args[0]->ToInt32()->Value(); /* type: _165  */
    v8::String::AsciiValue label(args[1]->ToString()); /* type: _14975  */
    wxNode_wxBitmap* bitmap = args[2]->IsNull() ? NULL : wxNodeObject::unwrap<wxNode_wxBitmap>(args[2]->ToObject()); /* type: _15645  */
    wxNode_wxBitmap* bmpDisabled = args[3]->IsNull() ? NULL : wxNodeObject::unwrap<wxNode_wxBitmap>(args[3]->ToObject()); /* type: _15645  */
    

    const wxToolBarToolBase* returnVal = self->AddCheckTool(toolid, *label, *bitmap, *bmpDisabled);

    return scope.Close(wxNode_wxToolBarToolBase::New(returnVal));
  }
  
  /*
   * id: _40062
   */
  if(args.Length() == 3 && args[0]->IsNumber() && args[1]->IsString() && (args[2]->IsNull() || (args[2]->IsObject() && wxNode_wxBitmap::AssignableFrom(args[2]->ToObject()->GetConstructorName())))) {
    int toolid = (int)args[0]->ToInt32()->Value(); /* type: _165  */
    v8::String::AsciiValue label(args[1]->ToString()); /* type: _14975  */
    wxNode_wxBitmap* bitmap = args[2]->IsNull() ? NULL : wxNodeObject::unwrap<wxNode_wxBitmap>(args[2]->ToObject()); /* type: _15645  */
    

    const wxToolBarToolBase* returnVal = self->AddCheckTool(toolid, *label, *bitmap);

    return scope.Close(wxNode_wxToolBarToolBase::New(returnVal));
  }
  

  std::ostringstream errStr;
  errStr << "Could not find matching method for arguments (method name: wxToolBar::AddCheckTool).\n";
  errStr << "  arg count: " << args.Length() << "\n";
  for(int i = 0; i < args.Length(); i++) {
    v8::String::AsciiValue argStr(args[i]);
    errStr << "  arg[" << i << "]: " << *argStr << "\n";
  }
  return v8::ThrowException(v8::Exception::TypeError(v8::String::New(errStr.str().c_str())));
}

/*static*/ v8::Handle<v8::Value> wxNode_wxToolBar::_AddRadioTool(const v8::Arguments& args) {
  v8::HandleScope scope;
  wxNode_wxToolBar* self = unwrap<wxNode_wxToolBar>(args.This());

  
  /*
   * id: _40063
   */
  if(args.Length() == 7 && args[0]->IsNumber() && args[1]->IsString() && (args[2]->IsNull() || (args[2]->IsObject() && wxNode_wxBitmap::AssignableFrom(args[2]->ToObject()->GetConstructorName()))) && (args[3]->IsNull() || (args[3]->IsObject() && wxNode_wxBitmap::AssignableFrom(args[3]->ToObject()->GetConstructorName()))) && args[4]->IsString() && args[5]->IsString() && (args[6]->IsNull() || (args[6]->IsObject() && wxNode_wxObject::AssignableFrom(args[6]->ToObject()->GetConstructorName())))) {
    int toolid = (int)args[0]->ToInt32()->Value(); /* type: _165  */
    v8::String::AsciiValue label(args[1]->ToString()); /* type: _14975  */
    wxNode_wxBitmap* bitmap = args[2]->IsNull() ? NULL : wxNodeObject::unwrap<wxNode_wxBitmap>(args[2]->ToObject()); /* type: _15645  */
    wxNode_wxBitmap* bmpDisabled = args[3]->IsNull() ? NULL : wxNodeObject::unwrap<wxNode_wxBitmap>(args[3]->ToObject()); /* type: _15645  */
    v8::String::AsciiValue shortHelp(args[4]->ToString()); /* type: _14975  */
    v8::String::AsciiValue longHelp(args[5]->ToString()); /* type: _14975  */
    wxNode_wxObject* data = args[6]->IsNull() ? NULL : wxNodeObject::unwrap<wxNode_wxObject>(args[6]->ToObject()); /* type: _15746 * */
    

    const wxToolBarToolBase* returnVal = self->AddRadioTool(toolid, *label, *bitmap, *bmpDisabled, *shortHelp, *longHelp, data);

    return scope.Close(wxNode_wxToolBarToolBase::New(returnVal));
  }
  
  /*
   * id: _40063
   */
  if(args.Length() == 6 && args[0]->IsNumber() && args[1]->IsString() && (args[2]->IsNull() || (args[2]->IsObject() && wxNode_wxBitmap::AssignableFrom(args[2]->ToObject()->GetConstructorName()))) && (args[3]->IsNull() || (args[3]->IsObject() && wxNode_wxBitmap::AssignableFrom(args[3]->ToObject()->GetConstructorName()))) && args[4]->IsString() && args[5]->IsString()) {
    int toolid = (int)args[0]->ToInt32()->Value(); /* type: _165  */
    v8::String::AsciiValue label(args[1]->ToString()); /* type: _14975  */
    wxNode_wxBitmap* bitmap = args[2]->IsNull() ? NULL : wxNodeObject::unwrap<wxNode_wxBitmap>(args[2]->ToObject()); /* type: _15645  */
    wxNode_wxBitmap* bmpDisabled = args[3]->IsNull() ? NULL : wxNodeObject::unwrap<wxNode_wxBitmap>(args[3]->ToObject()); /* type: _15645  */
    v8::String::AsciiValue shortHelp(args[4]->ToString()); /* type: _14975  */
    v8::String::AsciiValue longHelp(args[5]->ToString()); /* type: _14975  */
    

    const wxToolBarToolBase* returnVal = self->AddRadioTool(toolid, *label, *bitmap, *bmpDisabled, *shortHelp, *longHelp);

    return scope.Close(wxNode_wxToolBarToolBase::New(returnVal));
  }
  
  /*
   * id: _40063
   */
  if(args.Length() == 5 && args[0]->IsNumber() && args[1]->IsString() && (args[2]->IsNull() || (args[2]->IsObject() && wxNode_wxBitmap::AssignableFrom(args[2]->ToObject()->GetConstructorName()))) && (args[3]->IsNull() || (args[3]->IsObject() && wxNode_wxBitmap::AssignableFrom(args[3]->ToObject()->GetConstructorName()))) && args[4]->IsString()) {
    int toolid = (int)args[0]->ToInt32()->Value(); /* type: _165  */
    v8::String::AsciiValue label(args[1]->ToString()); /* type: _14975  */
    wxNode_wxBitmap* bitmap = args[2]->IsNull() ? NULL : wxNodeObject::unwrap<wxNode_wxBitmap>(args[2]->ToObject()); /* type: _15645  */
    wxNode_wxBitmap* bmpDisabled = args[3]->IsNull() ? NULL : wxNodeObject::unwrap<wxNode_wxBitmap>(args[3]->ToObject()); /* type: _15645  */
    v8::String::AsciiValue shortHelp(args[4]->ToString()); /* type: _14975  */
    

    const wxToolBarToolBase* returnVal = self->AddRadioTool(toolid, *label, *bitmap, *bmpDisabled, *shortHelp);

    return scope.Close(wxNode_wxToolBarToolBase::New(returnVal));
  }
  
  /*
   * id: _40063
   */
  if(args.Length() == 4 && args[0]->IsNumber() && args[1]->IsString() && (args[2]->IsNull() || (args[2]->IsObject() && wxNode_wxBitmap::AssignableFrom(args[2]->ToObject()->GetConstructorName()))) && (args[3]->IsNull() || (args[3]->IsObject() && wxNode_wxBitmap::AssignableFrom(args[3]->ToObject()->GetConstructorName())))) {
    int toolid = (int)args[0]->ToInt32()->Value(); /* type: _165  */
    v8::String::AsciiValue label(args[1]->ToString()); /* type: _14975  */
    wxNode_wxBitmap* bitmap = args[2]->IsNull() ? NULL : wxNodeObject::unwrap<wxNode_wxBitmap>(args[2]->ToObject()); /* type: _15645  */
    wxNode_wxBitmap* bmpDisabled = args[3]->IsNull() ? NULL : wxNodeObject::unwrap<wxNode_wxBitmap>(args[3]->ToObject()); /* type: _15645  */
    

    const wxToolBarToolBase* returnVal = self->AddRadioTool(toolid, *label, *bitmap, *bmpDisabled);

    return scope.Close(wxNode_wxToolBarToolBase::New(returnVal));
  }
  
  /*
   * id: _40063
   */
  if(args.Length() == 3 && args[0]->IsNumber() && args[1]->IsString() && (args[2]->IsNull() || (args[2]->IsObject() && wxNode_wxBitmap::AssignableFrom(args[2]->ToObject()->GetConstructorName())))) {
    int toolid = (int)args[0]->ToInt32()->Value(); /* type: _165  */
    v8::String::AsciiValue label(args[1]->ToString()); /* type: _14975  */
    wxNode_wxBitmap* bitmap = args[2]->IsNull() ? NULL : wxNodeObject::unwrap<wxNode_wxBitmap>(args[2]->ToObject()); /* type: _15645  */
    

    const wxToolBarToolBase* returnVal = self->AddRadioTool(toolid, *label, *bitmap);

    return scope.Close(wxNode_wxToolBarToolBase::New(returnVal));
  }
  

  std::ostringstream errStr;
  errStr << "Could not find matching method for arguments (method name: wxToolBar::AddRadioTool).\n";
  errStr << "  arg count: " << args.Length() << "\n";
  for(int i = 0; i < args.Length(); i++) {
    v8::String::AsciiValue argStr(args[i]);
    errStr << "  arg[" << i << "]: " << *argStr << "\n";
  }
  return v8::ThrowException(v8::Exception::TypeError(v8::String::New(errStr.str().c_str())));
}

/*static*/ v8::Handle<v8::Value> wxNode_wxToolBar::_InsertTool(const v8::Arguments& args) {
  v8::HandleScope scope;
  wxNode_wxToolBar* self = unwrap<wxNode_wxToolBar>(args.This());

  
  /*
   * id: _40064
   */
  if(args.Length() == 9 && args[0]->IsNumber() && args[1]->IsNumber() && args[2]->IsString() && (args[3]->IsNull() || (args[3]->IsObject() && wxNode_wxBitmap::AssignableFrom(args[3]->ToObject()->GetConstructorName()))) && (args[4]->IsNull() || (args[4]->IsObject() && wxNode_wxBitmap::AssignableFrom(args[4]->ToObject()->GetConstructorName()))) && args[5]->IsNumber() && args[6]->IsString() && args[7]->IsString() && (args[8]->IsNull() || (args[8]->IsObject() && wxNode_wxObject::AssignableFrom(args[8]->ToObject()->GetConstructorName())))) {
    unsigned int pos = (unsigned int)args[0]->ToInt32()->Value(); /* type: _8711  */
    int toolid = (int)args[1]->ToInt32()->Value(); /* type: _165  */
    v8::String::AsciiValue label(args[2]->ToString()); /* type: _14975  */
    wxNode_wxBitmap* bitmap = args[3]->IsNull() ? NULL : wxNodeObject::unwrap<wxNode_wxBitmap>(args[3]->ToObject()); /* type: _15645  */
    wxNode_wxBitmap* bmpDisabled = args[4]->IsNull() ? NULL : wxNodeObject::unwrap<wxNode_wxBitmap>(args[4]->ToObject()); /* type: _15645  */
    wxItemKind kind = (wxItemKind)args[5]->ToNumber()->Value(); /* type: _4680  */
    v8::String::AsciiValue shortHelp(args[6]->ToString()); /* type: _14975  */
    v8::String::AsciiValue longHelp(args[7]->ToString()); /* type: _14975  */
    wxNode_wxObject* clientData = args[8]->IsNull() ? NULL : wxNodeObject::unwrap<wxNode_wxObject>(args[8]->ToObject()); /* type: _15746 * */
    

    const wxToolBarToolBase* returnVal = self->InsertTool(pos, toolid, *label, *bitmap, *bmpDisabled, kind, *shortHelp, *longHelp, clientData);

    return scope.Close(wxNode_wxToolBarToolBase::New(returnVal));
  }
  
  /*
   * id: _40064
   */
  if(args.Length() == 8 && args[0]->IsNumber() && args[1]->IsNumber() && args[2]->IsString() && (args[3]->IsNull() || (args[3]->IsObject() && wxNode_wxBitmap::AssignableFrom(args[3]->ToObject()->GetConstructorName()))) && (args[4]->IsNull() || (args[4]->IsObject() && wxNode_wxBitmap::AssignableFrom(args[4]->ToObject()->GetConstructorName()))) && args[5]->IsNumber() && args[6]->IsString() && args[7]->IsString()) {
    unsigned int pos = (unsigned int)args[0]->ToInt32()->Value(); /* type: _8711  */
    int toolid = (int)args[1]->ToInt32()->Value(); /* type: _165  */
    v8::String::AsciiValue label(args[2]->ToString()); /* type: _14975  */
    wxNode_wxBitmap* bitmap = args[3]->IsNull() ? NULL : wxNodeObject::unwrap<wxNode_wxBitmap>(args[3]->ToObject()); /* type: _15645  */
    wxNode_wxBitmap* bmpDisabled = args[4]->IsNull() ? NULL : wxNodeObject::unwrap<wxNode_wxBitmap>(args[4]->ToObject()); /* type: _15645  */
    wxItemKind kind = (wxItemKind)args[5]->ToNumber()->Value(); /* type: _4680  */
    v8::String::AsciiValue shortHelp(args[6]->ToString()); /* type: _14975  */
    v8::String::AsciiValue longHelp(args[7]->ToString()); /* type: _14975  */
    

    const wxToolBarToolBase* returnVal = self->InsertTool(pos, toolid, *label, *bitmap, *bmpDisabled, kind, *shortHelp, *longHelp);

    return scope.Close(wxNode_wxToolBarToolBase::New(returnVal));
  }
  
  /*
   * id: _40064
   */
  if(args.Length() == 7 && args[0]->IsNumber() && args[1]->IsNumber() && args[2]->IsString() && (args[3]->IsNull() || (args[3]->IsObject() && wxNode_wxBitmap::AssignableFrom(args[3]->ToObject()->GetConstructorName()))) && (args[4]->IsNull() || (args[4]->IsObject() && wxNode_wxBitmap::AssignableFrom(args[4]->ToObject()->GetConstructorName()))) && args[5]->IsNumber() && args[6]->IsString()) {
    unsigned int pos = (unsigned int)args[0]->ToInt32()->Value(); /* type: _8711  */
    int toolid = (int)args[1]->ToInt32()->Value(); /* type: _165  */
    v8::String::AsciiValue label(args[2]->ToString()); /* type: _14975  */
    wxNode_wxBitmap* bitmap = args[3]->IsNull() ? NULL : wxNodeObject::unwrap<wxNode_wxBitmap>(args[3]->ToObject()); /* type: _15645  */
    wxNode_wxBitmap* bmpDisabled = args[4]->IsNull() ? NULL : wxNodeObject::unwrap<wxNode_wxBitmap>(args[4]->ToObject()); /* type: _15645  */
    wxItemKind kind = (wxItemKind)args[5]->ToNumber()->Value(); /* type: _4680  */
    v8::String::AsciiValue shortHelp(args[6]->ToString()); /* type: _14975  */
    

    const wxToolBarToolBase* returnVal = self->InsertTool(pos, toolid, *label, *bitmap, *bmpDisabled, kind, *shortHelp);

    return scope.Close(wxNode_wxToolBarToolBase::New(returnVal));
  }
  
  /*
   * id: _40064
   */
  if(args.Length() == 6 && args[0]->IsNumber() && args[1]->IsNumber() && args[2]->IsString() && (args[3]->IsNull() || (args[3]->IsObject() && wxNode_wxBitmap::AssignableFrom(args[3]->ToObject()->GetConstructorName()))) && (args[4]->IsNull() || (args[4]->IsObject() && wxNode_wxBitmap::AssignableFrom(args[4]->ToObject()->GetConstructorName()))) && args[5]->IsNumber()) {
    unsigned int pos = (unsigned int)args[0]->ToInt32()->Value(); /* type: _8711  */
    int toolid = (int)args[1]->ToInt32()->Value(); /* type: _165  */
    v8::String::AsciiValue label(args[2]->ToString()); /* type: _14975  */
    wxNode_wxBitmap* bitmap = args[3]->IsNull() ? NULL : wxNodeObject::unwrap<wxNode_wxBitmap>(args[3]->ToObject()); /* type: _15645  */
    wxNode_wxBitmap* bmpDisabled = args[4]->IsNull() ? NULL : wxNodeObject::unwrap<wxNode_wxBitmap>(args[4]->ToObject()); /* type: _15645  */
    wxItemKind kind = (wxItemKind)args[5]->ToNumber()->Value(); /* type: _4680  */
    

    const wxToolBarToolBase* returnVal = self->InsertTool(pos, toolid, *label, *bitmap, *bmpDisabled, kind);

    return scope.Close(wxNode_wxToolBarToolBase::New(returnVal));
  }
  
  /*
   * id: _40064
   */
  if(args.Length() == 5 && args[0]->IsNumber() && args[1]->IsNumber() && args[2]->IsString() && (args[3]->IsNull() || (args[3]->IsObject() && wxNode_wxBitmap::AssignableFrom(args[3]->ToObject()->GetConstructorName()))) && (args[4]->IsNull() || (args[4]->IsObject() && wxNode_wxBitmap::AssignableFrom(args[4]->ToObject()->GetConstructorName())))) {
    unsigned int pos = (unsigned int)args[0]->ToInt32()->Value(); /* type: _8711  */
    int toolid = (int)args[1]->ToInt32()->Value(); /* type: _165  */
    v8::String::AsciiValue label(args[2]->ToString()); /* type: _14975  */
    wxNode_wxBitmap* bitmap = args[3]->IsNull() ? NULL : wxNodeObject::unwrap<wxNode_wxBitmap>(args[3]->ToObject()); /* type: _15645  */
    wxNode_wxBitmap* bmpDisabled = args[4]->IsNull() ? NULL : wxNodeObject::unwrap<wxNode_wxBitmap>(args[4]->ToObject()); /* type: _15645  */
    

    const wxToolBarToolBase* returnVal = self->InsertTool(pos, toolid, *label, *bitmap, *bmpDisabled);

    return scope.Close(wxNode_wxToolBarToolBase::New(returnVal));
  }
  
  /*
   * id: _40064
   */
  if(args.Length() == 4 && args[0]->IsNumber() && args[1]->IsNumber() && args[2]->IsString() && (args[3]->IsNull() || (args[3]->IsObject() && wxNode_wxBitmap::AssignableFrom(args[3]->ToObject()->GetConstructorName())))) {
    unsigned int pos = (unsigned int)args[0]->ToInt32()->Value(); /* type: _8711  */
    int toolid = (int)args[1]->ToInt32()->Value(); /* type: _165  */
    v8::String::AsciiValue label(args[2]->ToString()); /* type: _14975  */
    wxNode_wxBitmap* bitmap = args[3]->IsNull() ? NULL : wxNodeObject::unwrap<wxNode_wxBitmap>(args[3]->ToObject()); /* type: _15645  */
    

    const wxToolBarToolBase* returnVal = self->InsertTool(pos, toolid, *label, *bitmap);

    return scope.Close(wxNode_wxToolBarToolBase::New(returnVal));
  }
  
  /*
   * id: _40066
   */
  if(args.Length() == 2 && args[0]->IsNumber() && (args[1]->IsNull() || (args[1]->IsObject() && wxNode_wxToolBarTool::AssignableFrom(args[1]->ToObject()->GetConstructorName())))) {
    unsigned int pos = (unsigned int)args[0]->ToInt32()->Value(); /* type: _8711  */
    wxNode_wxToolBarTool* tool = args[1]->IsNull() ? NULL : wxNodeObject::unwrap<wxNode_wxToolBarTool>(args[1]->ToObject()); /* type: _24046 * */
    

    const wxToolBarToolBase* returnVal = self->InsertTool(pos, tool);

    return scope.Close(wxNode_wxToolBarToolBase::New(returnVal));
  }
  

  std::ostringstream errStr;
  errStr << "Could not find matching method for arguments (method name: wxToolBar::InsertTool).\n";
  errStr << "  arg count: " << args.Length() << "\n";
  for(int i = 0; i < args.Length(); i++) {
    v8::String::AsciiValue argStr(args[i]);
    errStr << "  arg[" << i << "]: " << *argStr << "\n";
  }
  return v8::ThrowException(v8::Exception::TypeError(v8::String::New(errStr.str().c_str())));
}

/*static*/ v8::Handle<v8::Value> wxNode_wxToolBar::_AddControl(const v8::Arguments& args) {
  v8::HandleScope scope;
  wxNode_wxToolBar* self = unwrap<wxNode_wxToolBar>(args.This());

  
  /*
   * id: _40067
   */
  if(args.Length() == 2 && (args[0]->IsNull() || (args[0]->IsObject() && wxNode_wxControl::AssignableFrom(args[0]->ToObject()->GetConstructorName()))) && args[1]->IsString()) {
    wxNode_wxControl* control = args[0]->IsNull() ? NULL : wxNodeObject::unwrap<wxNode_wxControl>(args[0]->ToObject()); /* type: _59697 * */
    v8::String::AsciiValue label(args[1]->ToString()); /* type: _14975  */
    

    const wxToolBarToolBase* returnVal = self->AddControl(control, *label);

    return scope.Close(wxNode_wxToolBarToolBase::New(returnVal));
  }
  
  /*
   * id: _40067
   */
  if(args.Length() == 1 && (args[0]->IsNull() || (args[0]->IsObject() && wxNode_wxControl::AssignableFrom(args[0]->ToObject()->GetConstructorName())))) {
    wxNode_wxControl* control = args[0]->IsNull() ? NULL : wxNodeObject::unwrap<wxNode_wxControl>(args[0]->ToObject()); /* type: _59697 * */
    

    const wxToolBarToolBase* returnVal = self->AddControl(control);

    return scope.Close(wxNode_wxToolBarToolBase::New(returnVal));
  }
  

  std::ostringstream errStr;
  errStr << "Could not find matching method for arguments (method name: wxToolBar::AddControl).\n";
  errStr << "  arg count: " << args.Length() << "\n";
  for(int i = 0; i < args.Length(); i++) {
    v8::String::AsciiValue argStr(args[i]);
    errStr << "  arg[" << i << "]: " << *argStr << "\n";
  }
  return v8::ThrowException(v8::Exception::TypeError(v8::String::New(errStr.str().c_str())));
}

/*static*/ v8::Handle<v8::Value> wxNode_wxToolBar::_InsertControl(const v8::Arguments& args) {
  v8::HandleScope scope;
  wxNode_wxToolBar* self = unwrap<wxNode_wxToolBar>(args.This());

  
  /*
   * id: _40068
   */
  if(args.Length() == 3 && args[0]->IsNumber() && (args[1]->IsNull() || (args[1]->IsObject() && wxNode_wxControl::AssignableFrom(args[1]->ToObject()->GetConstructorName()))) && args[2]->IsString()) {
    unsigned int pos = (unsigned int)args[0]->ToInt32()->Value(); /* type: _8711  */
    wxNode_wxControl* control = args[1]->IsNull() ? NULL : wxNodeObject::unwrap<wxNode_wxControl>(args[1]->ToObject()); /* type: _59697 * */
    v8::String::AsciiValue label(args[2]->ToString()); /* type: _14975  */
    

    const wxToolBarToolBase* returnVal = self->InsertControl(pos, control, *label);

    return scope.Close(wxNode_wxToolBarToolBase::New(returnVal));
  }
  
  /*
   * id: _40068
   */
  if(args.Length() == 2 && args[0]->IsNumber() && (args[1]->IsNull() || (args[1]->IsObject() && wxNode_wxControl::AssignableFrom(args[1]->ToObject()->GetConstructorName())))) {
    unsigned int pos = (unsigned int)args[0]->ToInt32()->Value(); /* type: _8711  */
    wxNode_wxControl* control = args[1]->IsNull() ? NULL : wxNodeObject::unwrap<wxNode_wxControl>(args[1]->ToObject()); /* type: _59697 * */
    

    const wxToolBarToolBase* returnVal = self->InsertControl(pos, control);

    return scope.Close(wxNode_wxToolBarToolBase::New(returnVal));
  }
  

  std::ostringstream errStr;
  errStr << "Could not find matching method for arguments (method name: wxToolBar::InsertControl).\n";
  errStr << "  arg count: " << args.Length() << "\n";
  for(int i = 0; i < args.Length(); i++) {
    v8::String::AsciiValue argStr(args[i]);
    errStr << "  arg[" << i << "]: " << *argStr << "\n";
  }
  return v8::ThrowException(v8::Exception::TypeError(v8::String::New(errStr.str().c_str())));
}

/*static*/ v8::Handle<v8::Value> wxNode_wxToolBar::_FindControl(const v8::Arguments& args) {
  v8::HandleScope scope;
  wxNode_wxToolBar* self = unwrap<wxNode_wxToolBar>(args.This());

  
  /*
   * id: _40069
   */
  if(args.Length() == 1 && args[0]->IsNumber()) {
    int toolid = (int)args[0]->ToInt32()->Value(); /* type: _165  */
    

    wxControl* returnVal = self->FindControl(toolid);

    return scope.Close(wxNode_wxControl::New(returnVal));
  }
  

  std::ostringstream errStr;
  errStr << "Could not find matching method for arguments (method name: wxToolBar::FindControl).\n";
  errStr << "  arg count: " << args.Length() << "\n";
  for(int i = 0; i < args.Length(); i++) {
    v8::String::AsciiValue argStr(args[i]);
    errStr << "  arg[" << i << "]: " << *argStr << "\n";
  }
  return v8::ThrowException(v8::Exception::TypeError(v8::String::New(errStr.str().c_str())));
}

/*static*/ v8::Handle<v8::Value> wxNode_wxToolBar::_AddSeparator(const v8::Arguments& args) {
  v8::HandleScope scope;
  wxNode_wxToolBar* self = unwrap<wxNode_wxToolBar>(args.This());

  
  /*
   * id: _40070
   */
  if(args.Length() == 0) {
    

    const wxToolBarToolBase* returnVal = self->AddSeparator();

    return scope.Close(wxNode_wxToolBarToolBase::New(returnVal));
  }
  

  std::ostringstream errStr;
  errStr << "Could not find matching method for arguments (method name: wxToolBar::AddSeparator).\n";
  errStr << "  arg count: " << args.Length() << "\n";
  for(int i = 0; i < args.Length(); i++) {
    v8::String::AsciiValue argStr(args[i]);
    errStr << "  arg[" << i << "]: " << *argStr << "\n";
  }
  return v8::ThrowException(v8::Exception::TypeError(v8::String::New(errStr.str().c_str())));
}

/*static*/ v8::Handle<v8::Value> wxNode_wxToolBar::_InsertSeparator(const v8::Arguments& args) {
  v8::HandleScope scope;
  wxNode_wxToolBar* self = unwrap<wxNode_wxToolBar>(args.This());

  
  /*
   * id: _40071
   */
  if(args.Length() == 1 && args[0]->IsNumber()) {
    unsigned int pos = (unsigned int)args[0]->ToInt32()->Value(); /* type: _8711  */
    

    const wxToolBarToolBase* returnVal = self->InsertSeparator(pos);

    return scope.Close(wxNode_wxToolBarToolBase::New(returnVal));
  }
  

  std::ostringstream errStr;
  errStr << "Could not find matching method for arguments (method name: wxToolBar::InsertSeparator).\n";
  errStr << "  arg count: " << args.Length() << "\n";
  for(int i = 0; i < args.Length(); i++) {
    v8::String::AsciiValue argStr(args[i]);
    errStr << "  arg[" << i << "]: " << *argStr << "\n";
  }
  return v8::ThrowException(v8::Exception::TypeError(v8::String::New(errStr.str().c_str())));
}

/*static*/ v8::Handle<v8::Value> wxNode_wxToolBar::_AddStretchableSpace(const v8::Arguments& args) {
  v8::HandleScope scope;
  wxNode_wxToolBar* self = unwrap<wxNode_wxToolBar>(args.This());

  
  /*
   * id: _40072
   */
  if(args.Length() == 0) {
    

    const wxToolBarToolBase* returnVal = self->AddStretchableSpace();

    return scope.Close(wxNode_wxToolBarToolBase::New(returnVal));
  }
  

  std::ostringstream errStr;
  errStr << "Could not find matching method for arguments (method name: wxToolBar::AddStretchableSpace).\n";
  errStr << "  arg count: " << args.Length() << "\n";
  for(int i = 0; i < args.Length(); i++) {
    v8::String::AsciiValue argStr(args[i]);
    errStr << "  arg[" << i << "]: " << *argStr << "\n";
  }
  return v8::ThrowException(v8::Exception::TypeError(v8::String::New(errStr.str().c_str())));
}

/*static*/ v8::Handle<v8::Value> wxNode_wxToolBar::_InsertStretchableSpace(const v8::Arguments& args) {
  v8::HandleScope scope;
  wxNode_wxToolBar* self = unwrap<wxNode_wxToolBar>(args.This());

  
  /*
   * id: _40073
   */
  if(args.Length() == 1 && args[0]->IsNumber()) {
    unsigned int pos = (unsigned int)args[0]->ToInt32()->Value(); /* type: _8711  */
    

    const wxToolBarToolBase* returnVal = self->InsertStretchableSpace(pos);

    return scope.Close(wxNode_wxToolBarToolBase::New(returnVal));
  }
  

  std::ostringstream errStr;
  errStr << "Could not find matching method for arguments (method name: wxToolBar::InsertStretchableSpace).\n";
  errStr << "  arg count: " << args.Length() << "\n";
  for(int i = 0; i < args.Length(); i++) {
    v8::String::AsciiValue argStr(args[i]);
    errStr << "  arg[" << i << "]: " << *argStr << "\n";
  }
  return v8::ThrowException(v8::Exception::TypeError(v8::String::New(errStr.str().c_str())));
}

/*static*/ v8::Handle<v8::Value> wxNode_wxToolBar::_RemoveTool(const v8::Arguments& args) {
  v8::HandleScope scope;
  wxNode_wxToolBar* self = unwrap<wxNode_wxToolBar>(args.This());

  
  /*
   * id: _40074
   */
  if(args.Length() == 1 && args[0]->IsNumber()) {
    int toolid = (int)args[0]->ToInt32()->Value(); /* type: _165  */
    

    const wxToolBarToolBase* returnVal = self->RemoveTool(toolid);

    return scope.Close(wxNode_wxToolBarToolBase::New(returnVal));
  }
  

  std::ostringstream errStr;
  errStr << "Could not find matching method for arguments (method name: wxToolBar::RemoveTool).\n";
  errStr << "  arg count: " << args.Length() << "\n";
  for(int i = 0; i < args.Length(); i++) {
    v8::String::AsciiValue argStr(args[i]);
    errStr << "  arg[" << i << "]: " << *argStr << "\n";
  }
  return v8::ThrowException(v8::Exception::TypeError(v8::String::New(errStr.str().c_str())));
}

/*static*/ v8::Handle<v8::Value> wxNode_wxToolBar::_DeleteToolByPos(const v8::Arguments& args) {
  v8::HandleScope scope;
  wxNode_wxToolBar* self = unwrap<wxNode_wxToolBar>(args.This());

  
  /*
   * id: _40075
   */
  if(args.Length() == 1 && args[0]->IsNumber()) {
    unsigned int pos = (unsigned int)args[0]->ToInt32()->Value(); /* type: _8711  */
    

    bool returnVal = self->DeleteToolByPos(pos);

    return scope.Close(v8::Boolean::New(returnVal));
  }
  

  std::ostringstream errStr;
  errStr << "Could not find matching method for arguments (method name: wxToolBar::DeleteToolByPos).\n";
  errStr << "  arg count: " << args.Length() << "\n";
  for(int i = 0; i < args.Length(); i++) {
    v8::String::AsciiValue argStr(args[i]);
    errStr << "  arg[" << i << "]: " << *argStr << "\n";
  }
  return v8::ThrowException(v8::Exception::TypeError(v8::String::New(errStr.str().c_str())));
}

/*static*/ v8::Handle<v8::Value> wxNode_wxToolBar::_DeleteTool(const v8::Arguments& args) {
  v8::HandleScope scope;
  wxNode_wxToolBar* self = unwrap<wxNode_wxToolBar>(args.This());

  
  /*
   * id: _40076
   */
  if(args.Length() == 1 && args[0]->IsNumber()) {
    int toolid = (int)args[0]->ToInt32()->Value(); /* type: _165  */
    

    bool returnVal = self->DeleteTool(toolid);

    return scope.Close(v8::Boolean::New(returnVal));
  }
  

  std::ostringstream errStr;
  errStr << "Could not find matching method for arguments (method name: wxToolBar::DeleteTool).\n";
  errStr << "  arg count: " << args.Length() << "\n";
  for(int i = 0; i < args.Length(); i++) {
    v8::String::AsciiValue argStr(args[i]);
    errStr << "  arg[" << i << "]: " << *argStr << "\n";
  }
  return v8::ThrowException(v8::Exception::TypeError(v8::String::New(errStr.str().c_str())));
}

/*static*/ v8::Handle<v8::Value> wxNode_wxToolBar::_ClearTools(const v8::Arguments& args) {
  v8::HandleScope scope;
  wxNode_wxToolBar* self = unwrap<wxNode_wxToolBar>(args.This());

  
  /*
   * id: _40077
   */
  if(args.Length() == 0) {
    

    self->ClearTools();

    return v8::Undefined();
  }
  

  std::ostringstream errStr;
  errStr << "Could not find matching method for arguments (method name: wxToolBar::ClearTools).\n";
  errStr << "  arg count: " << args.Length() << "\n";
  for(int i = 0; i < args.Length(); i++) {
    v8::String::AsciiValue argStr(args[i]);
    errStr << "  arg[" << i << "]: " << *argStr << "\n";
  }
  return v8::ThrowException(v8::Exception::TypeError(v8::String::New(errStr.str().c_str())));
}

/*static*/ v8::Handle<v8::Value> wxNode_wxToolBar::_Realize(const v8::Arguments& args) {
  v8::HandleScope scope;
  wxNode_wxToolBar* self = unwrap<wxNode_wxToolBar>(args.This());

  
  /*
   * id: _40078
   */
  if(args.Length() == 0) {
    

    bool returnVal = self->Realize();

    return scope.Close(v8::Boolean::New(returnVal));
  }
  

  std::ostringstream errStr;
  errStr << "Could not find matching method for arguments (method name: wxToolBar::Realize).\n";
  errStr << "  arg count: " << args.Length() << "\n";
  for(int i = 0; i < args.Length(); i++) {
    v8::String::AsciiValue argStr(args[i]);
    errStr << "  arg[" << i << "]: " << *argStr << "\n";
  }
  return v8::ThrowException(v8::Exception::TypeError(v8::String::New(errStr.str().c_str())));
}

/*static*/ v8::Handle<v8::Value> wxNode_wxToolBar::_EnableTool(const v8::Arguments& args) {
  v8::HandleScope scope;
  wxNode_wxToolBar* self = unwrap<wxNode_wxToolBar>(args.This());

  
  /*
   * id: _40079
   */
  if(args.Length() == 2 && args[0]->IsNumber() && args[1]->IsBoolean()) {
    int toolid = (int)args[0]->ToInt32()->Value(); /* type: _165  */
    bool enable = args[1]->ToBoolean()->Value(); /* type: _14830  */
    

    self->EnableTool(toolid, enable);

    return v8::Undefined();
  }
  

  std::ostringstream errStr;
  errStr << "Could not find matching method for arguments (method name: wxToolBar::EnableTool).\n";
  errStr << "  arg count: " << args.Length() << "\n";
  for(int i = 0; i < args.Length(); i++) {
    v8::String::AsciiValue argStr(args[i]);
    errStr << "  arg[" << i << "]: " << *argStr << "\n";
  }
  return v8::ThrowException(v8::Exception::TypeError(v8::String::New(errStr.str().c_str())));
}

/*static*/ v8::Handle<v8::Value> wxNode_wxToolBar::_ToggleTool(const v8::Arguments& args) {
  v8::HandleScope scope;
  wxNode_wxToolBar* self = unwrap<wxNode_wxToolBar>(args.This());

  
  /*
   * id: _40080
   */
  if(args.Length() == 2 && args[0]->IsNumber() && args[1]->IsBoolean()) {
    int toolid = (int)args[0]->ToInt32()->Value(); /* type: _165  */
    bool toggle = args[1]->ToBoolean()->Value(); /* type: _14830  */
    

    self->ToggleTool(toolid, toggle);

    return v8::Undefined();
  }
  

  std::ostringstream errStr;
  errStr << "Could not find matching method for arguments (method name: wxToolBar::ToggleTool).\n";
  errStr << "  arg count: " << args.Length() << "\n";
  for(int i = 0; i < args.Length(); i++) {
    v8::String::AsciiValue argStr(args[i]);
    errStr << "  arg[" << i << "]: " << *argStr << "\n";
  }
  return v8::ThrowException(v8::Exception::TypeError(v8::String::New(errStr.str().c_str())));
}

/*static*/ v8::Handle<v8::Value> wxNode_wxToolBar::_SetToggle(const v8::Arguments& args) {
  v8::HandleScope scope;
  wxNode_wxToolBar* self = unwrap<wxNode_wxToolBar>(args.This());

  
  /*
   * id: _40081
   */
  if(args.Length() == 2 && args[0]->IsNumber() && args[1]->IsBoolean()) {
    int toolid = (int)args[0]->ToInt32()->Value(); /* type: _165  */
    bool toggle = args[1]->ToBoolean()->Value(); /* type: _14830  */
    

    self->SetToggle(toolid, toggle);

    return v8::Undefined();
  }
  

  std::ostringstream errStr;
  errStr << "Could not find matching method for arguments (method name: wxToolBar::SetToggle).\n";
  errStr << "  arg count: " << args.Length() << "\n";
  for(int i = 0; i < args.Length(); i++) {
    v8::String::AsciiValue argStr(args[i]);
    errStr << "  arg[" << i << "]: " << *argStr << "\n";
  }
  return v8::ThrowException(v8::Exception::TypeError(v8::String::New(errStr.str().c_str())));
}

/*static*/ v8::Handle<v8::Value> wxNode_wxToolBar::_GetToolClientData(const v8::Arguments& args) {
  v8::HandleScope scope;
  wxNode_wxToolBar* self = unwrap<wxNode_wxToolBar>(args.This());

  
  /*
   * id: _40082
   */
  if(args.Length() == 1 && args[0]->IsNumber()) {
    int toolid = (int)args[0]->ToInt32()->Value(); /* type: _165  */
    

    wxObject* returnVal = self->GetToolClientData(toolid);

    return scope.Close(wxNode_wxObject::New(returnVal));
  }
  

  std::ostringstream errStr;
  errStr << "Could not find matching method for arguments (method name: wxToolBar::GetToolClientData).\n";
  errStr << "  arg count: " << args.Length() << "\n";
  for(int i = 0; i < args.Length(); i++) {
    v8::String::AsciiValue argStr(args[i]);
    errStr << "  arg[" << i << "]: " << *argStr << "\n";
  }
  return v8::ThrowException(v8::Exception::TypeError(v8::String::New(errStr.str().c_str())));
}

/*static*/ v8::Handle<v8::Value> wxNode_wxToolBar::_SetToolClientData(const v8::Arguments& args) {
  v8::HandleScope scope;
  wxNode_wxToolBar* self = unwrap<wxNode_wxToolBar>(args.This());

  
  /*
   * id: _40083
   */
  if(args.Length() == 2 && args[0]->IsNumber() && (args[1]->IsNull() || (args[1]->IsObject() && wxNode_wxObject::AssignableFrom(args[1]->ToObject()->GetConstructorName())))) {
    int toolid = (int)args[0]->ToInt32()->Value(); /* type: _165  */
    wxNode_wxObject* clientData = args[1]->IsNull() ? NULL : wxNodeObject::unwrap<wxNode_wxObject>(args[1]->ToObject()); /* type: _15746 * */
    

    self->SetToolClientData(toolid, clientData);

    return v8::Undefined();
  }
  

  std::ostringstream errStr;
  errStr << "Could not find matching method for arguments (method name: wxToolBar::SetToolClientData).\n";
  errStr << "  arg count: " << args.Length() << "\n";
  for(int i = 0; i < args.Length(); i++) {
    v8::String::AsciiValue argStr(args[i]);
    errStr << "  arg[" << i << "]: " << *argStr << "\n";
  }
  return v8::ThrowException(v8::Exception::TypeError(v8::String::New(errStr.str().c_str())));
}

/*static*/ v8::Handle<v8::Value> wxNode_wxToolBar::_GetToolPos(const v8::Arguments& args) {
  v8::HandleScope scope;
  wxNode_wxToolBar* self = unwrap<wxNode_wxToolBar>(args.This());

  
  /*
   * id: _40084
   */
  if(args.Length() == 1 && args[0]->IsNumber()) {
    int id = (int)args[0]->ToInt32()->Value(); /* type: _165  */
    

    int returnVal = self->GetToolPos(id);

    return scope.Close(v8::Number::New(returnVal));
  }
  

  std::ostringstream errStr;
  errStr << "Could not find matching method for arguments (method name: wxToolBar::GetToolPos).\n";
  errStr << "  arg count: " << args.Length() << "\n";
  for(int i = 0; i < args.Length(); i++) {
    v8::String::AsciiValue argStr(args[i]);
    errStr << "  arg[" << i << "]: " << *argStr << "\n";
  }
  return v8::ThrowException(v8::Exception::TypeError(v8::String::New(errStr.str().c_str())));
}

/*static*/ v8::Handle<v8::Value> wxNode_wxToolBar::_GetToolState(const v8::Arguments& args) {
  v8::HandleScope scope;
  wxNode_wxToolBar* self = unwrap<wxNode_wxToolBar>(args.This());

  
  /*
   * id: _40085
   */
  if(args.Length() == 1 && args[0]->IsNumber()) {
    int toolid = (int)args[0]->ToInt32()->Value(); /* type: _165  */
    

    bool returnVal = self->GetToolState(toolid);

    return scope.Close(v8::Boolean::New(returnVal));
  }
  

  std::ostringstream errStr;
  errStr << "Could not find matching method for arguments (method name: wxToolBar::GetToolState).\n";
  errStr << "  arg count: " << args.Length() << "\n";
  for(int i = 0; i < args.Length(); i++) {
    v8::String::AsciiValue argStr(args[i]);
    errStr << "  arg[" << i << "]: " << *argStr << "\n";
  }
  return v8::ThrowException(v8::Exception::TypeError(v8::String::New(errStr.str().c_str())));
}

/*static*/ v8::Handle<v8::Value> wxNode_wxToolBar::_GetToolEnabled(const v8::Arguments& args) {
  v8::HandleScope scope;
  wxNode_wxToolBar* self = unwrap<wxNode_wxToolBar>(args.This());

  
  /*
   * id: _40086
   */
  if(args.Length() == 1 && args[0]->IsNumber()) {
    int toolid = (int)args[0]->ToInt32()->Value(); /* type: _165  */
    

    bool returnVal = self->GetToolEnabled(toolid);

    return scope.Close(v8::Boolean::New(returnVal));
  }
  

  std::ostringstream errStr;
  errStr << "Could not find matching method for arguments (method name: wxToolBar::GetToolEnabled).\n";
  errStr << "  arg count: " << args.Length() << "\n";
  for(int i = 0; i < args.Length(); i++) {
    v8::String::AsciiValue argStr(args[i]);
    errStr << "  arg[" << i << "]: " << *argStr << "\n";
  }
  return v8::ThrowException(v8::Exception::TypeError(v8::String::New(errStr.str().c_str())));
}

/*static*/ v8::Handle<v8::Value> wxNode_wxToolBar::_SetToolShortHelp(const v8::Arguments& args) {
  v8::HandleScope scope;
  wxNode_wxToolBar* self = unwrap<wxNode_wxToolBar>(args.This());

  
  /*
   * id: _40087
   */
  if(args.Length() == 2 && args[0]->IsNumber() && args[1]->IsString()) {
    int toolid = (int)args[0]->ToInt32()->Value(); /* type: _165  */
    v8::String::AsciiValue helpString(args[1]->ToString()); /* type: _14975  */
    

    self->SetToolShortHelp(toolid, *helpString);

    return v8::Undefined();
  }
  

  std::ostringstream errStr;
  errStr << "Could not find matching method for arguments (method name: wxToolBar::SetToolShortHelp).\n";
  errStr << "  arg count: " << args.Length() << "\n";
  for(int i = 0; i < args.Length(); i++) {
    v8::String::AsciiValue argStr(args[i]);
    errStr << "  arg[" << i << "]: " << *argStr << "\n";
  }
  return v8::ThrowException(v8::Exception::TypeError(v8::String::New(errStr.str().c_str())));
}

/*static*/ v8::Handle<v8::Value> wxNode_wxToolBar::_GetToolShortHelp(const v8::Arguments& args) {
  v8::HandleScope scope;
  wxNode_wxToolBar* self = unwrap<wxNode_wxToolBar>(args.This());

  
  /*
   * id: _40088
   */
  if(args.Length() == 1 && args[0]->IsNumber()) {
    int toolid = (int)args[0]->ToInt32()->Value(); /* type: _165  */
    

    wxString returnVal = self->GetToolShortHelp(toolid);

    return scope.Close(v8::String::New(returnVal.mb_str()));
  }
  

  std::ostringstream errStr;
  errStr << "Could not find matching method for arguments (method name: wxToolBar::GetToolShortHelp).\n";
  errStr << "  arg count: " << args.Length() << "\n";
  for(int i = 0; i < args.Length(); i++) {
    v8::String::AsciiValue argStr(args[i]);
    errStr << "  arg[" << i << "]: " << *argStr << "\n";
  }
  return v8::ThrowException(v8::Exception::TypeError(v8::String::New(errStr.str().c_str())));
}

/*static*/ v8::Handle<v8::Value> wxNode_wxToolBar::_SetToolLongHelp(const v8::Arguments& args) {
  v8::HandleScope scope;
  wxNode_wxToolBar* self = unwrap<wxNode_wxToolBar>(args.This());

  
  /*
   * id: _40089
   */
  if(args.Length() == 2 && args[0]->IsNumber() && args[1]->IsString()) {
    int toolid = (int)args[0]->ToInt32()->Value(); /* type: _165  */
    v8::String::AsciiValue helpString(args[1]->ToString()); /* type: _14975  */
    

    self->SetToolLongHelp(toolid, *helpString);

    return v8::Undefined();
  }
  

  std::ostringstream errStr;
  errStr << "Could not find matching method for arguments (method name: wxToolBar::SetToolLongHelp).\n";
  errStr << "  arg count: " << args.Length() << "\n";
  for(int i = 0; i < args.Length(); i++) {
    v8::String::AsciiValue argStr(args[i]);
    errStr << "  arg[" << i << "]: " << *argStr << "\n";
  }
  return v8::ThrowException(v8::Exception::TypeError(v8::String::New(errStr.str().c_str())));
}

/*static*/ v8::Handle<v8::Value> wxNode_wxToolBar::_GetToolLongHelp(const v8::Arguments& args) {
  v8::HandleScope scope;
  wxNode_wxToolBar* self = unwrap<wxNode_wxToolBar>(args.This());

  
  /*
   * id: _40090
   */
  if(args.Length() == 1 && args[0]->IsNumber()) {
    int toolid = (int)args[0]->ToInt32()->Value(); /* type: _165  */
    

    wxString returnVal = self->GetToolLongHelp(toolid);

    return scope.Close(v8::String::New(returnVal.mb_str()));
  }
  

  std::ostringstream errStr;
  errStr << "Could not find matching method for arguments (method name: wxToolBar::GetToolLongHelp).\n";
  errStr << "  arg count: " << args.Length() << "\n";
  for(int i = 0; i < args.Length(); i++) {
    v8::String::AsciiValue argStr(args[i]);
    errStr << "  arg[" << i << "]: " << *argStr << "\n";
  }
  return v8::ThrowException(v8::Exception::TypeError(v8::String::New(errStr.str().c_str())));
}

/*static*/ v8::Handle<v8::Value> wxNode_wxToolBar::_SetToolNormalBitmap(const v8::Arguments& args) {
  v8::HandleScope scope;
  wxNode_wxToolBar* self = unwrap<wxNode_wxToolBar>(args.This());

  
  /*
   * id: _40091
   */
  if(args.Length() == 2 && args[0]->IsNumber() && (args[1]->IsNull() || (args[1]->IsObject() && wxNode_wxBitmap::AssignableFrom(args[1]->ToObject()->GetConstructorName())))) {
    int arg0 = (int)args[0]->ToInt32()->Value(); /* type: _165  */
    wxNode_wxBitmap* arg1 = args[1]->IsNull() ? NULL : wxNodeObject::unwrap<wxNode_wxBitmap>(args[1]->ToObject()); /* type: _15645  */
    

    self->SetToolNormalBitmap(arg0, *arg1);

    return v8::Undefined();
  }
  

  std::ostringstream errStr;
  errStr << "Could not find matching method for arguments (method name: wxToolBar::SetToolNormalBitmap).\n";
  errStr << "  arg count: " << args.Length() << "\n";
  for(int i = 0; i < args.Length(); i++) {
    v8::String::AsciiValue argStr(args[i]);
    errStr << "  arg[" << i << "]: " << *argStr << "\n";
  }
  return v8::ThrowException(v8::Exception::TypeError(v8::String::New(errStr.str().c_str())));
}

/*static*/ v8::Handle<v8::Value> wxNode_wxToolBar::_SetToolDisabledBitmap(const v8::Arguments& args) {
  v8::HandleScope scope;
  wxNode_wxToolBar* self = unwrap<wxNode_wxToolBar>(args.This());

  
  /*
   * id: _40092
   */
  if(args.Length() == 2 && args[0]->IsNumber() && (args[1]->IsNull() || (args[1]->IsObject() && wxNode_wxBitmap::AssignableFrom(args[1]->ToObject()->GetConstructorName())))) {
    int arg0 = (int)args[0]->ToInt32()->Value(); /* type: _165  */
    wxNode_wxBitmap* arg1 = args[1]->IsNull() ? NULL : wxNodeObject::unwrap<wxNode_wxBitmap>(args[1]->ToObject()); /* type: _15645  */
    

    self->SetToolDisabledBitmap(arg0, *arg1);

    return v8::Undefined();
  }
  

  std::ostringstream errStr;
  errStr << "Could not find matching method for arguments (method name: wxToolBar::SetToolDisabledBitmap).\n";
  errStr << "  arg count: " << args.Length() << "\n";
  for(int i = 0; i < args.Length(); i++) {
    v8::String::AsciiValue argStr(args[i]);
    errStr << "  arg[" << i << "]: " << *argStr << "\n";
  }
  return v8::ThrowException(v8::Exception::TypeError(v8::String::New(errStr.str().c_str())));
}

/*static*/ v8::Handle<v8::Value> wxNode_wxToolBar::_SetMargins(const v8::Arguments& args) {
  v8::HandleScope scope;
  wxNode_wxToolBar* self = unwrap<wxNode_wxToolBar>(args.This());

  
  /*
   * id: _40093
   */
  if(args.Length() == 2 && args[0]->IsNumber() && args[1]->IsNumber()) {
    int x = (int)args[0]->ToInt32()->Value(); /* type: _165  */
    int y = (int)args[1]->ToInt32()->Value(); /* type: _165  */
    

    self->SetMargins(x, y);

    return v8::Undefined();
  }
  
  /*
   * id: _40094
   */
  if(args.Length() == 1 && (args[0]->IsNull() || (args[0]->IsObject() && wxNode_wxSize::AssignableFrom(args[0]->ToObject()->GetConstructorName())))) {
    wxNode_wxSize* size = args[0]->IsNull() ? NULL : wxNodeObject::unwrap<wxNode_wxSize>(args[0]->ToObject()); /* type: _20628  */
    

    self->SetMargins(*size);

    return v8::Undefined();
  }
  

  std::ostringstream errStr;
  errStr << "Could not find matching method for arguments (method name: wxToolBar::SetMargins).\n";
  errStr << "  arg count: " << args.Length() << "\n";
  for(int i = 0; i < args.Length(); i++) {
    v8::String::AsciiValue argStr(args[i]);
    errStr << "  arg[" << i << "]: " << *argStr << "\n";
  }
  return v8::ThrowException(v8::Exception::TypeError(v8::String::New(errStr.str().c_str())));
}

/*static*/ v8::Handle<v8::Value> wxNode_wxToolBar::_SetToolPacking(const v8::Arguments& args) {
  v8::HandleScope scope;
  wxNode_wxToolBar* self = unwrap<wxNode_wxToolBar>(args.This());

  
  /*
   * id: _40095
   */
  if(args.Length() == 1 && args[0]->IsNumber()) {
    int packing = (int)args[0]->ToInt32()->Value(); /* type: _165  */
    

    self->SetToolPacking(packing);

    return v8::Undefined();
  }
  

  std::ostringstream errStr;
  errStr << "Could not find matching method for arguments (method name: wxToolBar::SetToolPacking).\n";
  errStr << "  arg count: " << args.Length() << "\n";
  for(int i = 0; i < args.Length(); i++) {
    v8::String::AsciiValue argStr(args[i]);
    errStr << "  arg[" << i << "]: " << *argStr << "\n";
  }
  return v8::ThrowException(v8::Exception::TypeError(v8::String::New(errStr.str().c_str())));
}

/*static*/ v8::Handle<v8::Value> wxNode_wxToolBar::_SetToolSeparation(const v8::Arguments& args) {
  v8::HandleScope scope;
  wxNode_wxToolBar* self = unwrap<wxNode_wxToolBar>(args.This());

  
  /*
   * id: _40096
   */
  if(args.Length() == 1 && args[0]->IsNumber()) {
    int separation = (int)args[0]->ToInt32()->Value(); /* type: _165  */
    

    self->SetToolSeparation(separation);

    return v8::Undefined();
  }
  

  std::ostringstream errStr;
  errStr << "Could not find matching method for arguments (method name: wxToolBar::SetToolSeparation).\n";
  errStr << "  arg count: " << args.Length() << "\n";
  for(int i = 0; i < args.Length(); i++) {
    v8::String::AsciiValue argStr(args[i]);
    errStr << "  arg[" << i << "]: " << *argStr << "\n";
  }
  return v8::ThrowException(v8::Exception::TypeError(v8::String::New(errStr.str().c_str())));
}

/*static*/ v8::Handle<v8::Value> wxNode_wxToolBar::_GetToolMargins(const v8::Arguments& args) {
  v8::HandleScope scope;
  wxNode_wxToolBar* self = unwrap<wxNode_wxToolBar>(args.This());

  
  /*
   * id: _40097
   */
  if(args.Length() == 0) {
    

    wxSize returnVal = self->GetToolMargins();

    return scope.Close(wxNode_wxSize::NewCopy(returnVal));
  }
  

  std::ostringstream errStr;
  errStr << "Could not find matching method for arguments (method name: wxToolBar::GetToolMargins).\n";
  errStr << "  arg count: " << args.Length() << "\n";
  for(int i = 0; i < args.Length(); i++) {
    v8::String::AsciiValue argStr(args[i]);
    errStr << "  arg[" << i << "]: " << *argStr << "\n";
  }
  return v8::ThrowException(v8::Exception::TypeError(v8::String::New(errStr.str().c_str())));
}

/*static*/ v8::Handle<v8::Value> wxNode_wxToolBar::_GetToolPacking(const v8::Arguments& args) {
  v8::HandleScope scope;
  wxNode_wxToolBar* self = unwrap<wxNode_wxToolBar>(args.This());

  
  /*
   * id: _40098
   */
  if(args.Length() == 0) {
    

    int returnVal = self->GetToolPacking();

    return scope.Close(v8::Number::New(returnVal));
  }
  

  std::ostringstream errStr;
  errStr << "Could not find matching method for arguments (method name: wxToolBar::GetToolPacking).\n";
  errStr << "  arg count: " << args.Length() << "\n";
  for(int i = 0; i < args.Length(); i++) {
    v8::String::AsciiValue argStr(args[i]);
    errStr << "  arg[" << i << "]: " << *argStr << "\n";
  }
  return v8::ThrowException(v8::Exception::TypeError(v8::String::New(errStr.str().c_str())));
}

/*static*/ v8::Handle<v8::Value> wxNode_wxToolBar::_GetToolSeparation(const v8::Arguments& args) {
  v8::HandleScope scope;
  wxNode_wxToolBar* self = unwrap<wxNode_wxToolBar>(args.This());

  
  /*
   * id: _40099
   */
  if(args.Length() == 0) {
    

    int returnVal = self->GetToolSeparation();

    return scope.Close(v8::Number::New(returnVal));
  }
  

  std::ostringstream errStr;
  errStr << "Could not find matching method for arguments (method name: wxToolBar::GetToolSeparation).\n";
  errStr << "  arg count: " << args.Length() << "\n";
  for(int i = 0; i < args.Length(); i++) {
    v8::String::AsciiValue argStr(args[i]);
    errStr << "  arg[" << i << "]: " << *argStr << "\n";
  }
  return v8::ThrowException(v8::Exception::TypeError(v8::String::New(errStr.str().c_str())));
}

/*static*/ v8::Handle<v8::Value> wxNode_wxToolBar::_SetRows(const v8::Arguments& args) {
  v8::HandleScope scope;
  wxNode_wxToolBar* self = unwrap<wxNode_wxToolBar>(args.This());

  
  /*
   * id: _40100
   */
  if(args.Length() == 1 && args[0]->IsNumber()) {
    int nRows = (int)args[0]->ToInt32()->Value(); /* type: _165  */
    

    self->SetRows(nRows);

    return v8::Undefined();
  }
  

  std::ostringstream errStr;
  errStr << "Could not find matching method for arguments (method name: wxToolBar::SetRows).\n";
  errStr << "  arg count: " << args.Length() << "\n";
  for(int i = 0; i < args.Length(); i++) {
    v8::String::AsciiValue argStr(args[i]);
    errStr << "  arg[" << i << "]: " << *argStr << "\n";
  }
  return v8::ThrowException(v8::Exception::TypeError(v8::String::New(errStr.str().c_str())));
}

/*static*/ v8::Handle<v8::Value> wxNode_wxToolBar::_SetMaxRowsCols(const v8::Arguments& args) {
  v8::HandleScope scope;
  wxNode_wxToolBar* self = unwrap<wxNode_wxToolBar>(args.This());

  
  /*
   * id: _40101
   */
  if(args.Length() == 2 && args[0]->IsNumber() && args[1]->IsNumber()) {
    int rows = (int)args[0]->ToInt32()->Value(); /* type: _165  */
    int cols = (int)args[1]->ToInt32()->Value(); /* type: _165  */
    

    self->SetMaxRowsCols(rows, cols);

    return v8::Undefined();
  }
  

  std::ostringstream errStr;
  errStr << "Could not find matching method for arguments (method name: wxToolBar::SetMaxRowsCols).\n";
  errStr << "  arg count: " << args.Length() << "\n";
  for(int i = 0; i < args.Length(); i++) {
    v8::String::AsciiValue argStr(args[i]);
    errStr << "  arg[" << i << "]: " << *argStr << "\n";
  }
  return v8::ThrowException(v8::Exception::TypeError(v8::String::New(errStr.str().c_str())));
}

/*static*/ v8::Handle<v8::Value> wxNode_wxToolBar::_GetMaxRows(const v8::Arguments& args) {
  v8::HandleScope scope;
  wxNode_wxToolBar* self = unwrap<wxNode_wxToolBar>(args.This());

  
  /*
   * id: _40102
   */
  if(args.Length() == 0) {
    

    int returnVal = self->GetMaxRows();

    return scope.Close(v8::Number::New(returnVal));
  }
  

  std::ostringstream errStr;
  errStr << "Could not find matching method for arguments (method name: wxToolBar::GetMaxRows).\n";
  errStr << "  arg count: " << args.Length() << "\n";
  for(int i = 0; i < args.Length(); i++) {
    v8::String::AsciiValue argStr(args[i]);
    errStr << "  arg[" << i << "]: " << *argStr << "\n";
  }
  return v8::ThrowException(v8::Exception::TypeError(v8::String::New(errStr.str().c_str())));
}

/*static*/ v8::Handle<v8::Value> wxNode_wxToolBar::_GetMaxCols(const v8::Arguments& args) {
  v8::HandleScope scope;
  wxNode_wxToolBar* self = unwrap<wxNode_wxToolBar>(args.This());

  
  /*
   * id: _40103
   */
  if(args.Length() == 0) {
    

    int returnVal = self->GetMaxCols();

    return scope.Close(v8::Number::New(returnVal));
  }
  

  std::ostringstream errStr;
  errStr << "Could not find matching method for arguments (method name: wxToolBar::GetMaxCols).\n";
  errStr << "  arg count: " << args.Length() << "\n";
  for(int i = 0; i < args.Length(); i++) {
    v8::String::AsciiValue argStr(args[i]);
    errStr << "  arg[" << i << "]: " << *argStr << "\n";
  }
  return v8::ThrowException(v8::Exception::TypeError(v8::String::New(errStr.str().c_str())));
}

/*static*/ v8::Handle<v8::Value> wxNode_wxToolBar::_SetToolBitmapSize(const v8::Arguments& args) {
  v8::HandleScope scope;
  wxNode_wxToolBar* self = unwrap<wxNode_wxToolBar>(args.This());

  
  /*
   * id: _40104
   */
  if(args.Length() == 1 && (args[0]->IsNull() || (args[0]->IsObject() && wxNode_wxSize::AssignableFrom(args[0]->ToObject()->GetConstructorName())))) {
    wxNode_wxSize* size = args[0]->IsNull() ? NULL : wxNodeObject::unwrap<wxNode_wxSize>(args[0]->ToObject()); /* type: _20628  */
    

    self->SetToolBitmapSize(*size);

    return v8::Undefined();
  }
  

  std::ostringstream errStr;
  errStr << "Could not find matching method for arguments (method name: wxToolBar::SetToolBitmapSize).\n";
  errStr << "  arg count: " << args.Length() << "\n";
  for(int i = 0; i < args.Length(); i++) {
    v8::String::AsciiValue argStr(args[i]);
    errStr << "  arg[" << i << "]: " << *argStr << "\n";
  }
  return v8::ThrowException(v8::Exception::TypeError(v8::String::New(errStr.str().c_str())));
}

/*static*/ v8::Handle<v8::Value> wxNode_wxToolBar::_GetToolBitmapSize(const v8::Arguments& args) {
  v8::HandleScope scope;
  wxNode_wxToolBar* self = unwrap<wxNode_wxToolBar>(args.This());

  
  /*
   * id: _40105
   */
  if(args.Length() == 0) {
    

    wxSize returnVal = self->GetToolBitmapSize();

    return scope.Close(wxNode_wxSize::NewCopy(returnVal));
  }
  

  std::ostringstream errStr;
  errStr << "Could not find matching method for arguments (method name: wxToolBar::GetToolBitmapSize).\n";
  errStr << "  arg count: " << args.Length() << "\n";
  for(int i = 0; i < args.Length(); i++) {
    v8::String::AsciiValue argStr(args[i]);
    errStr << "  arg[" << i << "]: " << *argStr << "\n";
  }
  return v8::ThrowException(v8::Exception::TypeError(v8::String::New(errStr.str().c_str())));
}

/*static*/ v8::Handle<v8::Value> wxNode_wxToolBar::_GetToolSize(const v8::Arguments& args) {
  v8::HandleScope scope;
  wxNode_wxToolBar* self = unwrap<wxNode_wxToolBar>(args.This());

  
  /*
   * id: _40106
   */
  if(args.Length() == 0) {
    

    wxSize returnVal = self->GetToolSize();

    return scope.Close(wxNode_wxSize::NewCopy(returnVal));
  }
  

  std::ostringstream errStr;
  errStr << "Could not find matching method for arguments (method name: wxToolBar::GetToolSize).\n";
  errStr << "  arg count: " << args.Length() << "\n";
  for(int i = 0; i < args.Length(); i++) {
    v8::String::AsciiValue argStr(args[i]);
    errStr << "  arg[" << i << "]: " << *argStr << "\n";
  }
  return v8::ThrowException(v8::Exception::TypeError(v8::String::New(errStr.str().c_str())));
}

/*static*/ v8::Handle<v8::Value> wxNode_wxToolBar::_FindToolForPosition(const v8::Arguments& args) {
  v8::HandleScope scope;
  wxNode_wxToolBar* self = unwrap<wxNode_wxToolBar>(args.This());

  
  /*
   * id: _40107
   */
  if(args.Length() == 2 && args[0]->IsNumber() && args[1]->IsNumber()) {
    int x = (int)args[0]->ToInt32()->Value(); /* type: _12231  */
    int y = (int)args[1]->ToInt32()->Value(); /* type: _12231  */
    

    const wxToolBarToolBase* returnVal = self->FindToolForPosition(x, y);

    return scope.Close(wxNode_wxToolBarToolBase::New(returnVal));
  }
  

  std::ostringstream errStr;
  errStr << "Could not find matching method for arguments (method name: wxToolBar::FindToolForPosition).\n";
  errStr << "  arg count: " << args.Length() << "\n";
  for(int i = 0; i < args.Length(); i++) {
    v8::String::AsciiValue argStr(args[i]);
    errStr << "  arg[" << i << "]: " << *argStr << "\n";
  }
  return v8::ThrowException(v8::Exception::TypeError(v8::String::New(errStr.str().c_str())));
}

/*static*/ v8::Handle<v8::Value> wxNode_wxToolBar::_FindById(const v8::Arguments& args) {
  v8::HandleScope scope;
  wxNode_wxToolBar* self = unwrap<wxNode_wxToolBar>(args.This());

  
  /*
   * id: _40108
   */
  if(args.Length() == 1 && args[0]->IsNumber()) {
    int toolid = (int)args[0]->ToInt32()->Value(); /* type: _165  */
    

    const wxToolBarToolBase* returnVal = self->FindById(toolid);

    return scope.Close(wxNode_wxToolBarToolBase::New(returnVal));
  }
  

  std::ostringstream errStr;
  errStr << "Could not find matching method for arguments (method name: wxToolBar::FindById).\n";
  errStr << "  arg count: " << args.Length() << "\n";
  for(int i = 0; i < args.Length(); i++) {
    v8::String::AsciiValue argStr(args[i]);
    errStr << "  arg[" << i << "]: " << *argStr << "\n";
  }
  return v8::ThrowException(v8::Exception::TypeError(v8::String::New(errStr.str().c_str())));
}

/*static*/ v8::Handle<v8::Value> wxNode_wxToolBar::_IsVertical(const v8::Arguments& args) {
  v8::HandleScope scope;
  wxNode_wxToolBar* self = unwrap<wxNode_wxToolBar>(args.This());

  
  /*
   * id: _40109
   */
  if(args.Length() == 0) {
    

    bool returnVal = self->IsVertical();

    return scope.Close(v8::Boolean::New(returnVal));
  }
  

  std::ostringstream errStr;
  errStr << "Could not find matching method for arguments (method name: wxToolBar::IsVertical).\n";
  errStr << "  arg count: " << args.Length() << "\n";
  for(int i = 0; i < args.Length(); i++) {
    v8::String::AsciiValue argStr(args[i]);
    errStr << "  arg[" << i << "]: " << *argStr << "\n";
  }
  return v8::ThrowException(v8::Exception::TypeError(v8::String::New(errStr.str().c_str())));
}

/*static*/ v8::Handle<v8::Value> wxNode_wxToolBar::_GetToolsCount(const v8::Arguments& args) {
  v8::HandleScope scope;
  wxNode_wxToolBar* self = unwrap<wxNode_wxToolBar>(args.This());

  
  /*
   * id: _40110
   */
  if(args.Length() == 0) {
    

    int returnVal = self->GetToolsCount();

    return scope.Close(v8::Number::New(returnVal));
  }
  

  std::ostringstream errStr;
  errStr << "Could not find matching method for arguments (method name: wxToolBar::GetToolsCount).\n";
  errStr << "  arg count: " << args.Length() << "\n";
  for(int i = 0; i < args.Length(); i++) {
    v8::String::AsciiValue argStr(args[i]);
    errStr << "  arg[" << i << "]: " << *argStr << "\n";
  }
  return v8::ThrowException(v8::Exception::TypeError(v8::String::New(errStr.str().c_str())));
}

/*static*/ v8::Handle<v8::Value> wxNode_wxToolBar::_GetToolByPos(const v8::Arguments& args) {
  v8::HandleScope scope;
  wxNode_wxToolBar* self = unwrap<wxNode_wxToolBar>(args.This());

  
  /*
   * id: _40111
   */
  if(args.Length() == 1 && args[0]->IsNumber()) {
    int pos = (int)args[0]->ToInt32()->Value(); /* type: _165  */
    

    const wxToolBarToolBase* returnVal = self->GetToolByPos(pos);

    return scope.Close(wxNode_wxToolBarToolBase::New(returnVal));
  }
  

  std::ostringstream errStr;
  errStr << "Could not find matching method for arguments (method name: wxToolBar::GetToolByPos).\n";
  errStr << "  arg count: " << args.Length() << "\n";
  for(int i = 0; i < args.Length(); i++) {
    v8::String::AsciiValue argStr(args[i]);
    errStr << "  arg[" << i << "]: " << *argStr << "\n";
  }
  return v8::ThrowException(v8::Exception::TypeError(v8::String::New(errStr.str().c_str())));
}

/*static*/ v8::Handle<v8::Value> wxNode_wxToolBar::_OnLeftClick(const v8::Arguments& args) {
  v8::HandleScope scope;
  wxNode_wxToolBar* self = unwrap<wxNode_wxToolBar>(args.This());

  

  std::ostringstream errStr;
  errStr << "Could not find matching method for arguments (method name: wxToolBar::OnLeftClick).\n";
  errStr << "  arg count: " << args.Length() << "\n";
  for(int i = 0; i < args.Length(); i++) {
    v8::String::AsciiValue argStr(args[i]);
    errStr << "  arg[" << i << "]: " << *argStr << "\n";
  }
  return v8::ThrowException(v8::Exception::TypeError(v8::String::New(errStr.str().c_str())));
}

/*static*/ v8::Handle<v8::Value> wxNode_wxToolBar::_OnRightClick(const v8::Arguments& args) {
  v8::HandleScope scope;
  wxNode_wxToolBar* self = unwrap<wxNode_wxToolBar>(args.This());

  

  std::ostringstream errStr;
  errStr << "Could not find matching method for arguments (method name: wxToolBar::OnRightClick).\n";
  errStr << "  arg count: " << args.Length() << "\n";
  for(int i = 0; i < args.Length(); i++) {
    v8::String::AsciiValue argStr(args[i]);
    errStr << "  arg[" << i << "]: " << *argStr << "\n";
  }
  return v8::ThrowException(v8::Exception::TypeError(v8::String::New(errStr.str().c_str())));
}

/*static*/ v8::Handle<v8::Value> wxNode_wxToolBar::_OnMouseEnter(const v8::Arguments& args) {
  v8::HandleScope scope;
  wxNode_wxToolBar* self = unwrap<wxNode_wxToolBar>(args.This());

  

  std::ostringstream errStr;
  errStr << "Could not find matching method for arguments (method name: wxToolBar::OnMouseEnter).\n";
  errStr << "  arg count: " << args.Length() << "\n";
  for(int i = 0; i < args.Length(); i++) {
    v8::String::AsciiValue argStr(args[i]);
    errStr << "  arg[" << i << "]: " << *argStr << "\n";
  }
  return v8::ThrowException(v8::Exception::TypeError(v8::String::New(errStr.str().c_str())));
}

/*static*/ v8::Handle<v8::Value> wxNode_wxToolBar::_GetMargins(const v8::Arguments& args) {
  v8::HandleScope scope;
  wxNode_wxToolBar* self = unwrap<wxNode_wxToolBar>(args.This());

  
  /*
   * id: _40119
   */
  if(args.Length() == 0) {
    

    wxSize returnVal = self->GetMargins();

    return scope.Close(wxNode_wxSize::NewCopy(returnVal));
  }
  

  std::ostringstream errStr;
  errStr << "Could not find matching method for arguments (method name: wxToolBar::GetMargins).\n";
  errStr << "  arg count: " << args.Length() << "\n";
  for(int i = 0; i < args.Length(); i++) {
    v8::String::AsciiValue argStr(args[i]);
    errStr << "  arg[" << i << "]: " << *argStr << "\n";
  }
  return v8::ThrowException(v8::Exception::TypeError(v8::String::New(errStr.str().c_str())));
}

/*static*/ v8::Handle<v8::Value> wxNode_wxToolBar::_UpdateWindowUI(const v8::Arguments& args) {
  v8::HandleScope scope;
  wxNode_wxToolBar* self = unwrap<wxNode_wxToolBar>(args.This());

  
  /*
   * id: _40120
   */
  if(args.Length() == 1 && args[0]->IsNumber()) {
    long int flags = (long int)args[0]->ToInt32()->Value(); /* type: _592  */
    

    self->UpdateWindowUI(flags);

    return v8::Undefined();
  }
  
  /*
   * id: _40120
   */
  if(args.Length() == 0) {
    

    self->UpdateWindowUI();

    return v8::Undefined();
  }
  

  std::ostringstream errStr;
  errStr << "Could not find matching method for arguments (method name: wxToolBar::UpdateWindowUI).\n";
  errStr << "  arg count: " << args.Length() << "\n";
  for(int i = 0; i < args.Length(); i++) {
    v8::String::AsciiValue argStr(args[i]);
    errStr << "  arg[" << i << "]: " << *argStr << "\n";
  }
  return v8::ThrowException(v8::Exception::TypeError(v8::String::New(errStr.str().c_str())));
}

/*static*/ v8::Handle<v8::Value> wxNode_wxToolBar::_AcceptsFocus(const v8::Arguments& args) {
  v8::HandleScope scope;
  wxNode_wxToolBar* self = unwrap<wxNode_wxToolBar>(args.This());

  
  /*
   * id: _40121
   */
  if(args.Length() == 0) {
    

    bool returnVal = self->AcceptsFocus();

    return scope.Close(v8::Boolean::New(returnVal));
  }
  

  std::ostringstream errStr;
  errStr << "Could not find matching method for arguments (method name: wxToolBar::AcceptsFocus).\n";
  errStr << "  arg count: " << args.Length() << "\n";
  for(int i = 0; i < args.Length(); i++) {
    v8::String::AsciiValue argStr(args[i]);
    errStr << "  arg[" << i << "]: " << *argStr << "\n";
  }
  return v8::ThrowException(v8::Exception::TypeError(v8::String::New(errStr.str().c_str())));
}

/*static*/ v8::Handle<v8::Value> wxNode_wxToolBar::_SetDropdownMenu(const v8::Arguments& args) {
  v8::HandleScope scope;
  wxNode_wxToolBar* self = unwrap<wxNode_wxToolBar>(args.This());

  
  /*
   * id: _40122
   */
  if(args.Length() == 2 && args[0]->IsNumber() && (args[1]->IsNull() || (args[1]->IsObject() && wxNode_wxMenu::AssignableFrom(args[1]->ToObject()->GetConstructorName())))) {
    int toolid = (int)args[0]->ToInt32()->Value(); /* type: _165  */
    wxNode_wxMenu* menu = args[1]->IsNull() ? NULL : wxNodeObject::unwrap<wxNode_wxMenu>(args[1]->ToObject()); /* type: _53132 * */
    

    bool returnVal = self->SetDropdownMenu(toolid, menu);

    return scope.Close(v8::Boolean::New(returnVal));
  }
  

  std::ostringstream errStr;
  errStr << "Could not find matching method for arguments (method name: wxToolBar::SetDropdownMenu).\n";
  errStr << "  arg count: " << args.Length() << "\n";
  for(int i = 0; i < args.Length(); i++) {
    v8::String::AsciiValue argStr(args[i]);
    errStr << "  arg[" << i << "]: " << *argStr << "\n";
  }
  return v8::ThrowException(v8::Exception::TypeError(v8::String::New(errStr.str().c_str())));
}



