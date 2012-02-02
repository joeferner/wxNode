
#include "wxNode_wxFrame.h"
#include "wxNode_wxEvtHandler.h"
#include "wxNode_wxTopLevelWindow.h"
#include "wxNode_wxWindow.h"
#include "wxNode_wxPoint.h"
#include "wxNode_wxSize.h"
#include "wxNode_wxMenuBar.h"
#include "wxNode_wxMenuItem.h"
#include "wxNode_wxStatusBar.h"
#include "wxNode_wxToolBar.h"
#include "wxNode_wxMenu.h"


/* static */ v8::Persistent<v8::FunctionTemplate> wxNode_wxFrame::s_ct;



wxNode_wxFrame::wxNode_wxFrame()
  : wxFrame()
{

}

wxNode_wxFrame::wxNode_wxFrame(wxNode_wxWindow& parent, int id, const char* title, wxNode_wxPoint* pos, wxNode_wxSize* size, long int style, const char* name)
  : wxFrame(parent, id, title, pos, size, style, name)
{

}

wxNode_wxFrame::wxNode_wxFrame(wxNode_wxWindow& parent, int id, const char* title, wxNode_wxPoint* pos, wxNode_wxSize* size, long int style)
  : wxFrame(parent, id, title, pos, size, style)
{

}

wxNode_wxFrame::wxNode_wxFrame(wxNode_wxWindow& parent, int id, const char* title, wxNode_wxPoint* pos, wxNode_wxSize* size)
  : wxFrame(parent, id, title, pos, size)
{

}

wxNode_wxFrame::wxNode_wxFrame(wxNode_wxWindow& parent, int id, const char* title, wxNode_wxPoint* pos)
  : wxFrame(parent, id, title, pos)
{

}

wxNode_wxFrame::wxNode_wxFrame(wxNode_wxWindow& parent, int id, const char* title)
  : wxFrame(parent, id, title)
{

}




/*static*/ void wxNode_wxFrame::Init(v8::Handle<v8::Object> target) {
  v8::HandleScope scope;

  v8::Local<v8::FunctionTemplate> t = v8::FunctionTemplate::New(wxNodeObject::NewFunc);
  s_ct = v8::Persistent<v8::FunctionTemplate>::New(t);
  s_ct->InstanceTemplate()->SetInternalFieldCount(2);
  s_ct->SetClassName(v8::String::NewSymbol("wxFrame"));

  NODE_SET_PROTOTYPE_METHOD(s_ct, "init", _init);
  AddMethods(s_ct);

  target->Set(v8::String::NewSymbol("wxFrame"), s_ct->GetFunction());
}

/*static*/ void wxNode_wxFrame::AddMethods(v8::Handle<v8::FunctionTemplate> target) {
  wxNode_wxTopLevelWindow::AddMethods(target);
  NODE_SET_PROTOTYPE_METHOD(target, "new", _New);
  NODE_SET_PROTOTYPE_METHOD(target, "getClientAreaOrigin", _GetClientAreaOrigin);
  NODE_SET_PROTOTYPE_METHOD(target, "setMenuBar", _SetMenuBar);
  NODE_SET_PROTOTYPE_METHOD(target, "getMenuBar", _GetMenuBar);
  NODE_SET_PROTOTYPE_METHOD(target, "findItemInMenuBar", _FindItemInMenuBar);
  NODE_SET_PROTOTYPE_METHOD(target, "processCommand", _ProcessCommand);
  NODE_SET_PROTOTYPE_METHOD(target, "createStatusBar", _CreateStatusBar);
  NODE_SET_PROTOTYPE_METHOD(target, "onCreateStatusBar", _OnCreateStatusBar);
  NODE_SET_PROTOTYPE_METHOD(target, "getStatusBar", _GetStatusBar);
  NODE_SET_PROTOTYPE_METHOD(target, "setStatusBar", _SetStatusBar);
  NODE_SET_PROTOTYPE_METHOD(target, "setStatusText", _SetStatusText);
  NODE_SET_PROTOTYPE_METHOD(target, "setStatusWidths", _SetStatusWidths);
  NODE_SET_PROTOTYPE_METHOD(target, "pushStatusText", _PushStatusText);
  NODE_SET_PROTOTYPE_METHOD(target, "popStatusText", _PopStatusText);
  NODE_SET_PROTOTYPE_METHOD(target, "setStatusBarPane", _SetStatusBarPane);
  NODE_SET_PROTOTYPE_METHOD(target, "getStatusBarPane", _GetStatusBarPane);
  NODE_SET_PROTOTYPE_METHOD(target, "createToolBar", _CreateToolBar);
  NODE_SET_PROTOTYPE_METHOD(target, "onCreateToolBar", _OnCreateToolBar);
  NODE_SET_PROTOTYPE_METHOD(target, "getToolBar", _GetToolBar);
  NODE_SET_PROTOTYPE_METHOD(target, "setToolBar", _SetToolBar);
  NODE_SET_PROTOTYPE_METHOD(target, "onMenuOpen", _OnMenuOpen);
  NODE_SET_PROTOTYPE_METHOD(target, "onMenuClose", _OnMenuClose);
  NODE_SET_PROTOTYPE_METHOD(target, "onMenuHighlight", _OnMenuHighlight);
  NODE_SET_PROTOTYPE_METHOD(target, "doMenuUpdates", _DoMenuUpdates);
  NODE_SET_PROTOTYPE_METHOD(target, "updateWindowUI", _UpdateWindowUI);
  NODE_SET_PROTOTYPE_METHOD(target, "onInternalIdle", _OnInternalIdle);
  NODE_SET_PROTOTYPE_METHOD(target, "doGiveHelp", _DoGiveHelp);
  NODE_SET_PROTOTYPE_METHOD(target, "isClientAreaChild", _IsClientAreaChild);
  
}

/*static*/ v8::Handle<v8::Value> wxNode_wxFrame::_init(const v8::Arguments& args) {
  v8::HandleScope scope;

  
  
  /*
   * id: _35552
   */
  if(args.Length() == 0) {
    

    wxNode_wxFrame *self = new wxNode_wxFrame();
    NodeExEvtHandlerImpl* evtHandler = dynamic_cast<NodeExEvtHandlerImpl*>(self);
    self->wrap(args.This(), self, evtHandler);
    return args.This();
  }
  
  /*
   * id: _35553
   */
  if(args.Length() == 7 && args[0]->IsObject() && args[1]->IsNumber() && args[2]->IsString() && args[3]->IsObject() && args[4]->IsObject() && args[5]->IsNumber() && args[6]->IsString()) {
    wxNode_wxWindow* parent = wxNodeObject::unwrap<wxNode_wxWindow>(args[0]->ToObject()); /* type: _993 * */
    int id = (int)args[1]->ToInt32()->Value(); /* type: _8633  */
    v8::String::AsciiValue title(args[2]->ToString()); /* type: _14808  */
    wxNode_wxPoint* pos = wxNodeObject::unwrap<wxNode_wxPoint>(args[3]->ToObject()); /* type: _20412  */
    wxNode_wxSize* size = wxNodeObject::unwrap<wxNode_wxSize>(args[4]->ToObject()); /* type: _20522  */
    long int style = (long int)args[5]->ToInt32()->Value(); /* type: _586  */
    v8::String::AsciiValue name(args[6]->ToString()); /* type: _14808  */
    

    wxNode_wxFrame *self = new wxNode_wxFrame(parent, id, *title, *pos, *size, style, *name);
    NodeExEvtHandlerImpl* evtHandler = dynamic_cast<NodeExEvtHandlerImpl*>(self);
    self->wrap(args.This(), self, evtHandler);
    return args.This();
  }
  
  /*
   * id: _35553
   */
  if(args.Length() == 6 && args[0]->IsObject() && args[1]->IsNumber() && args[2]->IsString() && args[3]->IsObject() && args[4]->IsObject() && args[5]->IsNumber()) {
    wxNode_wxWindow* parent = wxNodeObject::unwrap<wxNode_wxWindow>(args[0]->ToObject()); /* type: _993 * */
    int id = (int)args[1]->ToInt32()->Value(); /* type: _8633  */
    v8::String::AsciiValue title(args[2]->ToString()); /* type: _14808  */
    wxNode_wxPoint* pos = wxNodeObject::unwrap<wxNode_wxPoint>(args[3]->ToObject()); /* type: _20412  */
    wxNode_wxSize* size = wxNodeObject::unwrap<wxNode_wxSize>(args[4]->ToObject()); /* type: _20522  */
    long int style = (long int)args[5]->ToInt32()->Value(); /* type: _586  */
    

    wxNode_wxFrame *self = new wxNode_wxFrame(parent, id, *title, *pos, *size, style);
    NodeExEvtHandlerImpl* evtHandler = dynamic_cast<NodeExEvtHandlerImpl*>(self);
    self->wrap(args.This(), self, evtHandler);
    return args.This();
  }
  
  /*
   * id: _35553
   */
  if(args.Length() == 5 && args[0]->IsObject() && args[1]->IsNumber() && args[2]->IsString() && args[3]->IsObject() && args[4]->IsObject()) {
    wxNode_wxWindow* parent = wxNodeObject::unwrap<wxNode_wxWindow>(args[0]->ToObject()); /* type: _993 * */
    int id = (int)args[1]->ToInt32()->Value(); /* type: _8633  */
    v8::String::AsciiValue title(args[2]->ToString()); /* type: _14808  */
    wxNode_wxPoint* pos = wxNodeObject::unwrap<wxNode_wxPoint>(args[3]->ToObject()); /* type: _20412  */
    wxNode_wxSize* size = wxNodeObject::unwrap<wxNode_wxSize>(args[4]->ToObject()); /* type: _20522  */
    

    wxNode_wxFrame *self = new wxNode_wxFrame(parent, id, *title, *pos, *size);
    NodeExEvtHandlerImpl* evtHandler = dynamic_cast<NodeExEvtHandlerImpl*>(self);
    self->wrap(args.This(), self, evtHandler);
    return args.This();
  }
  
  /*
   * id: _35553
   */
  if(args.Length() == 4 && args[0]->IsObject() && args[1]->IsNumber() && args[2]->IsString() && args[3]->IsObject()) {
    wxNode_wxWindow* parent = wxNodeObject::unwrap<wxNode_wxWindow>(args[0]->ToObject()); /* type: _993 * */
    int id = (int)args[1]->ToInt32()->Value(); /* type: _8633  */
    v8::String::AsciiValue title(args[2]->ToString()); /* type: _14808  */
    wxNode_wxPoint* pos = wxNodeObject::unwrap<wxNode_wxPoint>(args[3]->ToObject()); /* type: _20412  */
    

    wxNode_wxFrame *self = new wxNode_wxFrame(parent, id, *title, *pos);
    NodeExEvtHandlerImpl* evtHandler = dynamic_cast<NodeExEvtHandlerImpl*>(self);
    self->wrap(args.This(), self, evtHandler);
    return args.This();
  }
  
  /*
   * id: _35553
   */
  if(args.Length() == 3 && args[0]->IsObject() && args[1]->IsNumber() && args[2]->IsString()) {
    wxNode_wxWindow* parent = wxNodeObject::unwrap<wxNode_wxWindow>(args[0]->ToObject()); /* type: _993 * */
    int id = (int)args[1]->ToInt32()->Value(); /* type: _8633  */
    v8::String::AsciiValue title(args[2]->ToString()); /* type: _14808  */
    

    wxNode_wxFrame *self = new wxNode_wxFrame(parent, id, *title);
    NodeExEvtHandlerImpl* evtHandler = dynamic_cast<NodeExEvtHandlerImpl*>(self);
    self->wrap(args.This(), self, evtHandler);
    return args.This();
  }
  
  

  return v8::ThrowException(v8::String::New("Could not find matching constructor for arguments (class name: wxFrame)."));
}


/*static*/ v8::Handle<v8::Value> wxNode_wxFrame::_New(const v8::Arguments& args) {
  v8::HandleScope scope;
  wxNode_wxFrame* self = unwrap<wxNode_wxFrame>(args.This());

  
  /*
   * id: _29764
   */
  if(args.Length() == 7 && args[0]->IsObject() && args[1]->IsNumber() && args[2]->IsString() && args[3]->IsObject() && args[4]->IsObject() && args[5]->IsNumber() && args[6]->IsString()) {
    wxNode_wxWindow* parent = wxNodeObject::unwrap<wxNode_wxWindow>(args[0]->ToObject()); /* type: _993 * */
    int winid = (int)args[1]->ToInt32()->Value(); /* type: _8633  */
    v8::String::AsciiValue title(args[2]->ToString()); /* type: _14808  */
    wxNode_wxPoint* pos = wxNodeObject::unwrap<wxNode_wxPoint>(args[3]->ToObject()); /* type: _20412  */
    wxNode_wxSize* size = wxNodeObject::unwrap<wxNode_wxSize>(args[4]->ToObject()); /* type: _20522  */
    long int style = (long int)args[5]->ToInt32()->Value(); /* type: _586  */
    v8::String::AsciiValue name(args[6]->ToString()); /* type: _14808  */
    

    self->New(parent, winid, *title, *pos, *size, style, *name);

    // TODO: handle return type
    return v8::Undefined();
  }
  
  /*
   * id: _29764
   */
  if(args.Length() == 6 && args[0]->IsObject() && args[1]->IsNumber() && args[2]->IsString() && args[3]->IsObject() && args[4]->IsObject() && args[5]->IsNumber()) {
    wxNode_wxWindow* parent = wxNodeObject::unwrap<wxNode_wxWindow>(args[0]->ToObject()); /* type: _993 * */
    int winid = (int)args[1]->ToInt32()->Value(); /* type: _8633  */
    v8::String::AsciiValue title(args[2]->ToString()); /* type: _14808  */
    wxNode_wxPoint* pos = wxNodeObject::unwrap<wxNode_wxPoint>(args[3]->ToObject()); /* type: _20412  */
    wxNode_wxSize* size = wxNodeObject::unwrap<wxNode_wxSize>(args[4]->ToObject()); /* type: _20522  */
    long int style = (long int)args[5]->ToInt32()->Value(); /* type: _586  */
    

    self->New(parent, winid, *title, *pos, *size, style);

    // TODO: handle return type
    return v8::Undefined();
  }
  
  /*
   * id: _29764
   */
  if(args.Length() == 5 && args[0]->IsObject() && args[1]->IsNumber() && args[2]->IsString() && args[3]->IsObject() && args[4]->IsObject()) {
    wxNode_wxWindow* parent = wxNodeObject::unwrap<wxNode_wxWindow>(args[0]->ToObject()); /* type: _993 * */
    int winid = (int)args[1]->ToInt32()->Value(); /* type: _8633  */
    v8::String::AsciiValue title(args[2]->ToString()); /* type: _14808  */
    wxNode_wxPoint* pos = wxNodeObject::unwrap<wxNode_wxPoint>(args[3]->ToObject()); /* type: _20412  */
    wxNode_wxSize* size = wxNodeObject::unwrap<wxNode_wxSize>(args[4]->ToObject()); /* type: _20522  */
    

    self->New(parent, winid, *title, *pos, *size);

    // TODO: handle return type
    return v8::Undefined();
  }
  
  /*
   * id: _29764
   */
  if(args.Length() == 4 && args[0]->IsObject() && args[1]->IsNumber() && args[2]->IsString() && args[3]->IsObject()) {
    wxNode_wxWindow* parent = wxNodeObject::unwrap<wxNode_wxWindow>(args[0]->ToObject()); /* type: _993 * */
    int winid = (int)args[1]->ToInt32()->Value(); /* type: _8633  */
    v8::String::AsciiValue title(args[2]->ToString()); /* type: _14808  */
    wxNode_wxPoint* pos = wxNodeObject::unwrap<wxNode_wxPoint>(args[3]->ToObject()); /* type: _20412  */
    

    self->New(parent, winid, *title, *pos);

    // TODO: handle return type
    return v8::Undefined();
  }
  
  /*
   * id: _29764
   */
  if(args.Length() == 3 && args[0]->IsObject() && args[1]->IsNumber() && args[2]->IsString()) {
    wxNode_wxWindow* parent = wxNodeObject::unwrap<wxNode_wxWindow>(args[0]->ToObject()); /* type: _993 * */
    int winid = (int)args[1]->ToInt32()->Value(); /* type: _8633  */
    v8::String::AsciiValue title(args[2]->ToString()); /* type: _14808  */
    

    self->New(parent, winid, *title);

    // TODO: handle return type
    return v8::Undefined();
  }
  

  return v8::ThrowException(v8::String::New("Could not find matching method for arguments (method name: New)."));
}

/*static*/ v8::Handle<v8::Value> wxNode_wxFrame::_GetClientAreaOrigin(const v8::Arguments& args) {
  v8::HandleScope scope;
  wxNode_wxFrame* self = unwrap<wxNode_wxFrame>(args.This());

  
  /*
   * id: _29765
   */
  if(args.Length() == 0) {
    

    self->GetClientAreaOrigin();

    // TODO: handle return type
    return v8::Undefined();
  }
  

  return v8::ThrowException(v8::String::New("Could not find matching method for arguments (method name: GetClientAreaOrigin)."));
}

/*static*/ v8::Handle<v8::Value> wxNode_wxFrame::_SetMenuBar(const v8::Arguments& args) {
  v8::HandleScope scope;
  wxNode_wxFrame* self = unwrap<wxNode_wxFrame>(args.This());

  
  /*
   * id: _29766
   */
  if(args.Length() == 1 && args[0]->IsObject()) {
    wxNode_wxMenuBar* menubar = wxNodeObject::unwrap<wxNode_wxMenuBar>(args[0]->ToObject()); /* type: _59425 * */
    

    self->SetMenuBar(menubar);

    // TODO: handle return type
    return v8::Undefined();
  }
  

  return v8::ThrowException(v8::String::New("Could not find matching method for arguments (method name: SetMenuBar)."));
}

/*static*/ v8::Handle<v8::Value> wxNode_wxFrame::_GetMenuBar(const v8::Arguments& args) {
  v8::HandleScope scope;
  wxNode_wxFrame* self = unwrap<wxNode_wxFrame>(args.This());

  
  /*
   * id: _29767
   */
  if(args.Length() == 0) {
    

    self->GetMenuBar();

    // TODO: handle return type
    return v8::Undefined();
  }
  

  return v8::ThrowException(v8::String::New("Could not find matching method for arguments (method name: GetMenuBar)."));
}

/*static*/ v8::Handle<v8::Value> wxNode_wxFrame::_FindItemInMenuBar(const v8::Arguments& args) {
  v8::HandleScope scope;
  wxNode_wxFrame* self = unwrap<wxNode_wxFrame>(args.This());

  
  /*
   * id: _29768
   */
  if(args.Length() == 1 && args[0]->IsNumber()) {
    int menuId = (int)args[0]->ToInt32()->Value(); /* type: _162  */
    

    self->FindItemInMenuBar(menuId);

    // TODO: handle return type
    return v8::Undefined();
  }
  

  return v8::ThrowException(v8::String::New("Could not find matching method for arguments (method name: FindItemInMenuBar)."));
}

/*static*/ v8::Handle<v8::Value> wxNode_wxFrame::_ProcessCommand(const v8::Arguments& args) {
  v8::HandleScope scope;
  wxNode_wxFrame* self = unwrap<wxNode_wxFrame>(args.This());

  
  /*
   * id: _29769
   */
  if(args.Length() == 1 && args[0]->IsObject()) {
    wxNode_wxMenuItem* item = wxNodeObject::unwrap<wxNode_wxMenuItem>(args[0]->ToObject()); /* type: _51683 * */
    

    self->ProcessCommand(item);

    // TODO: handle return type
    return v8::Undefined();
  }
  
  /*
   * id: _29770
   */
  if(args.Length() == 1 && args[0]->IsNumber()) {
    int winid = (int)args[0]->ToInt32()->Value(); /* type: _162  */
    

    self->ProcessCommand(winid);

    // TODO: handle return type
    return v8::Undefined();
  }
  

  return v8::ThrowException(v8::String::New("Could not find matching method for arguments (method name: ProcessCommand)."));
}

/*static*/ v8::Handle<v8::Value> wxNode_wxFrame::_CreateStatusBar(const v8::Arguments& args) {
  v8::HandleScope scope;
  wxNode_wxFrame* self = unwrap<wxNode_wxFrame>(args.This());

  
  /*
   * id: _29771
   */
  if(args.Length() == 4 && args[0]->IsNumber() && args[1]->IsNumber() && args[2]->IsNumber() && args[3]->IsString()) {
    int number = (int)args[0]->ToInt32()->Value(); /* type: _162  */
    long int style = (long int)args[1]->ToInt32()->Value(); /* type: _586  */
    int winid = (int)args[2]->ToInt32()->Value(); /* type: _8633  */
    v8::String::AsciiValue name(args[3]->ToString()); /* type: _14808  */
    

    self->CreateStatusBar(number, style, winid, *name);

    // TODO: handle return type
    return v8::Undefined();
  }
  
  /*
   * id: _29771
   */
  if(args.Length() == 3 && args[0]->IsNumber() && args[1]->IsNumber() && args[2]->IsNumber()) {
    int number = (int)args[0]->ToInt32()->Value(); /* type: _162  */
    long int style = (long int)args[1]->ToInt32()->Value(); /* type: _586  */
    int winid = (int)args[2]->ToInt32()->Value(); /* type: _8633  */
    

    self->CreateStatusBar(number, style, winid);

    // TODO: handle return type
    return v8::Undefined();
  }
  
  /*
   * id: _29771
   */
  if(args.Length() == 2 && args[0]->IsNumber() && args[1]->IsNumber()) {
    int number = (int)args[0]->ToInt32()->Value(); /* type: _162  */
    long int style = (long int)args[1]->ToInt32()->Value(); /* type: _586  */
    

    self->CreateStatusBar(number, style);

    // TODO: handle return type
    return v8::Undefined();
  }
  
  /*
   * id: _29771
   */
  if(args.Length() == 1 && args[0]->IsNumber()) {
    int number = (int)args[0]->ToInt32()->Value(); /* type: _162  */
    

    self->CreateStatusBar(number);

    // TODO: handle return type
    return v8::Undefined();
  }
  
  /*
   * id: _29771
   */
  if(args.Length() == 0) {
    

    self->CreateStatusBar();

    // TODO: handle return type
    return v8::Undefined();
  }
  

  return v8::ThrowException(v8::String::New("Could not find matching method for arguments (method name: CreateStatusBar)."));
}

/*static*/ v8::Handle<v8::Value> wxNode_wxFrame::_OnCreateStatusBar(const v8::Arguments& args) {
  v8::HandleScope scope;
  wxNode_wxFrame* self = unwrap<wxNode_wxFrame>(args.This());

  

  return v8::ThrowException(v8::String::New("Could not find matching method for arguments (method name: OnCreateStatusBar)."));
}

/*static*/ v8::Handle<v8::Value> wxNode_wxFrame::_GetStatusBar(const v8::Arguments& args) {
  v8::HandleScope scope;
  wxNode_wxFrame* self = unwrap<wxNode_wxFrame>(args.This());

  
  /*
   * id: _29773
   */
  if(args.Length() == 0) {
    

    self->GetStatusBar();

    // TODO: handle return type
    return v8::Undefined();
  }
  

  return v8::ThrowException(v8::String::New("Could not find matching method for arguments (method name: GetStatusBar)."));
}

/*static*/ v8::Handle<v8::Value> wxNode_wxFrame::_SetStatusBar(const v8::Arguments& args) {
  v8::HandleScope scope;
  wxNode_wxFrame* self = unwrap<wxNode_wxFrame>(args.This());

  
  /*
   * id: _29774
   */
  if(args.Length() == 1 && args[0]->IsObject()) {
    wxNode_wxStatusBar* statBar = wxNodeObject::unwrap<wxNode_wxStatusBar>(args[0]->ToObject()); /* type: _62859 * */
    

    self->SetStatusBar(statBar);

    // TODO: handle return type
    return v8::Undefined();
  }
  

  return v8::ThrowException(v8::String::New("Could not find matching method for arguments (method name: SetStatusBar)."));
}

/*static*/ v8::Handle<v8::Value> wxNode_wxFrame::_SetStatusText(const v8::Arguments& args) {
  v8::HandleScope scope;
  wxNode_wxFrame* self = unwrap<wxNode_wxFrame>(args.This());

  
  /*
   * id: _29775
   */
  if(args.Length() == 2 && args[0]->IsString() && args[1]->IsNumber()) {
    v8::String::AsciiValue text(args[0]->ToString()); /* type: _14808  */
    int number = (int)args[1]->ToInt32()->Value(); /* type: _162  */
    

    self->SetStatusText(*text, number);

    // TODO: handle return type
    return v8::Undefined();
  }
  
  /*
   * id: _29775
   */
  if(args.Length() == 1 && args[0]->IsString()) {
    v8::String::AsciiValue text(args[0]->ToString()); /* type: _14808  */
    

    self->SetStatusText(*text);

    // TODO: handle return type
    return v8::Undefined();
  }
  

  return v8::ThrowException(v8::String::New("Could not find matching method for arguments (method name: SetStatusText)."));
}

/*static*/ v8::Handle<v8::Value> wxNode_wxFrame::_SetStatusWidths(const v8::Arguments& args) {
  v8::HandleScope scope;
  wxNode_wxFrame* self = unwrap<wxNode_wxFrame>(args.This());

  
  /*
   * id: _29776
   */
  if(args.Length() == 2 && args[0]->IsNumber() && false) {
    int n = (int)args[0]->ToInt32()->Value(); /* type: _162  */
    int widths_field; /* type: _57431 * */
    

    self->SetStatusWidths(n, &widths_field);

    // TODO: handle return type
    return v8::Undefined();
  }
  

  return v8::ThrowException(v8::String::New("Could not find matching method for arguments (method name: SetStatusWidths)."));
}

/*static*/ v8::Handle<v8::Value> wxNode_wxFrame::_PushStatusText(const v8::Arguments& args) {
  v8::HandleScope scope;
  wxNode_wxFrame* self = unwrap<wxNode_wxFrame>(args.This());

  
  /*
   * id: _29777
   */
  if(args.Length() == 2 && args[0]->IsString() && args[1]->IsNumber()) {
    v8::String::AsciiValue text(args[0]->ToString()); /* type: _14808  */
    int number = (int)args[1]->ToInt32()->Value(); /* type: _162  */
    

    self->PushStatusText(*text, number);

    // TODO: handle return type
    return v8::Undefined();
  }
  
  /*
   * id: _29777
   */
  if(args.Length() == 1 && args[0]->IsString()) {
    v8::String::AsciiValue text(args[0]->ToString()); /* type: _14808  */
    

    self->PushStatusText(*text);

    // TODO: handle return type
    return v8::Undefined();
  }
  

  return v8::ThrowException(v8::String::New("Could not find matching method for arguments (method name: PushStatusText)."));
}

/*static*/ v8::Handle<v8::Value> wxNode_wxFrame::_PopStatusText(const v8::Arguments& args) {
  v8::HandleScope scope;
  wxNode_wxFrame* self = unwrap<wxNode_wxFrame>(args.This());

  
  /*
   * id: _29778
   */
  if(args.Length() == 1 && args[0]->IsNumber()) {
    int number = (int)args[0]->ToInt32()->Value(); /* type: _162  */
    

    self->PopStatusText(number);

    // TODO: handle return type
    return v8::Undefined();
  }
  
  /*
   * id: _29778
   */
  if(args.Length() == 0) {
    

    self->PopStatusText();

    // TODO: handle return type
    return v8::Undefined();
  }
  

  return v8::ThrowException(v8::String::New("Could not find matching method for arguments (method name: PopStatusText)."));
}

/*static*/ v8::Handle<v8::Value> wxNode_wxFrame::_SetStatusBarPane(const v8::Arguments& args) {
  v8::HandleScope scope;
  wxNode_wxFrame* self = unwrap<wxNode_wxFrame>(args.This());

  
  /*
   * id: _29779
   */
  if(args.Length() == 1 && args[0]->IsNumber()) {
    int n = (int)args[0]->ToInt32()->Value(); /* type: _162  */
    

    self->SetStatusBarPane(n);

    // TODO: handle return type
    return v8::Undefined();
  }
  

  return v8::ThrowException(v8::String::New("Could not find matching method for arguments (method name: SetStatusBarPane)."));
}

/*static*/ v8::Handle<v8::Value> wxNode_wxFrame::_GetStatusBarPane(const v8::Arguments& args) {
  v8::HandleScope scope;
  wxNode_wxFrame* self = unwrap<wxNode_wxFrame>(args.This());

  
  /*
   * id: _29780
   */
  if(args.Length() == 0) {
    

    self->GetStatusBarPane();

    // TODO: handle return type
    return v8::Undefined();
  }
  

  return v8::ThrowException(v8::String::New("Could not find matching method for arguments (method name: GetStatusBarPane)."));
}

/*static*/ v8::Handle<v8::Value> wxNode_wxFrame::_CreateToolBar(const v8::Arguments& args) {
  v8::HandleScope scope;
  wxNode_wxFrame* self = unwrap<wxNode_wxFrame>(args.This());

  
  /*
   * id: _29781
   */
  if(args.Length() == 3 && args[0]->IsNumber() && args[1]->IsNumber() && args[2]->IsString()) {
    long int style = (long int)args[0]->ToInt32()->Value(); /* type: _586  */
    int winid = (int)args[1]->ToInt32()->Value(); /* type: _8633  */
    v8::String::AsciiValue name(args[2]->ToString()); /* type: _14808  */
    

    self->CreateToolBar(style, winid, *name);

    // TODO: handle return type
    return v8::Undefined();
  }
  
  /*
   * id: _29781
   */
  if(args.Length() == 2 && args[0]->IsNumber() && args[1]->IsNumber()) {
    long int style = (long int)args[0]->ToInt32()->Value(); /* type: _586  */
    int winid = (int)args[1]->ToInt32()->Value(); /* type: _8633  */
    

    self->CreateToolBar(style, winid);

    // TODO: handle return type
    return v8::Undefined();
  }
  
  /*
   * id: _29781
   */
  if(args.Length() == 1 && args[0]->IsNumber()) {
    long int style = (long int)args[0]->ToInt32()->Value(); /* type: _586  */
    

    self->CreateToolBar(style);

    // TODO: handle return type
    return v8::Undefined();
  }
  
  /*
   * id: _29781
   */
  if(args.Length() == 0) {
    

    self->CreateToolBar();

    // TODO: handle return type
    return v8::Undefined();
  }
  

  return v8::ThrowException(v8::String::New("Could not find matching method for arguments (method name: CreateToolBar)."));
}

/*static*/ v8::Handle<v8::Value> wxNode_wxFrame::_OnCreateToolBar(const v8::Arguments& args) {
  v8::HandleScope scope;
  wxNode_wxFrame* self = unwrap<wxNode_wxFrame>(args.This());

  

  return v8::ThrowException(v8::String::New("Could not find matching method for arguments (method name: OnCreateToolBar)."));
}

/*static*/ v8::Handle<v8::Value> wxNode_wxFrame::_GetToolBar(const v8::Arguments& args) {
  v8::HandleScope scope;
  wxNode_wxFrame* self = unwrap<wxNode_wxFrame>(args.This());

  
  /*
   * id: _29783
   */
  if(args.Length() == 0) {
    

    self->GetToolBar();

    // TODO: handle return type
    return v8::Undefined();
  }
  

  return v8::ThrowException(v8::String::New("Could not find matching method for arguments (method name: GetToolBar)."));
}

/*static*/ v8::Handle<v8::Value> wxNode_wxFrame::_SetToolBar(const v8::Arguments& args) {
  v8::HandleScope scope;
  wxNode_wxFrame* self = unwrap<wxNode_wxFrame>(args.This());

  
  /*
   * id: _29784
   */
  if(args.Length() == 1 && args[0]->IsObject()) {
    wxNode_wxToolBar* toolbar = wxNodeObject::unwrap<wxNode_wxToolBar>(args[0]->ToObject()); /* type: _61119 * */
    

    self->SetToolBar(toolbar);

    // TODO: handle return type
    return v8::Undefined();
  }
  

  return v8::ThrowException(v8::String::New("Could not find matching method for arguments (method name: SetToolBar)."));
}

/*static*/ v8::Handle<v8::Value> wxNode_wxFrame::_OnMenuOpen(const v8::Arguments& args) {
  v8::HandleScope scope;
  wxNode_wxFrame* self = unwrap<wxNode_wxFrame>(args.This());

  

  return v8::ThrowException(v8::String::New("Could not find matching method for arguments (method name: OnMenuOpen)."));
}

/*static*/ v8::Handle<v8::Value> wxNode_wxFrame::_OnMenuClose(const v8::Arguments& args) {
  v8::HandleScope scope;
  wxNode_wxFrame* self = unwrap<wxNode_wxFrame>(args.This());

  

  return v8::ThrowException(v8::String::New("Could not find matching method for arguments (method name: OnMenuClose)."));
}

/*static*/ v8::Handle<v8::Value> wxNode_wxFrame::_OnMenuHighlight(const v8::Arguments& args) {
  v8::HandleScope scope;
  wxNode_wxFrame* self = unwrap<wxNode_wxFrame>(args.This());

  

  return v8::ThrowException(v8::String::New("Could not find matching method for arguments (method name: OnMenuHighlight)."));
}

/*static*/ v8::Handle<v8::Value> wxNode_wxFrame::_DoMenuUpdates(const v8::Arguments& args) {
  v8::HandleScope scope;
  wxNode_wxFrame* self = unwrap<wxNode_wxFrame>(args.This());

  
  /*
   * id: _29788
   */
  if(args.Length() == 1 && args[0]->IsObject()) {
    wxNode_wxMenu* menu = wxNodeObject::unwrap<wxNode_wxMenu>(args[0]->ToObject()); /* type: _52838 * */
    

    self->DoMenuUpdates(menu);

    // TODO: handle return type
    return v8::Undefined();
  }
  
  /*
   * id: _29788
   */
  if(args.Length() == 0) {
    

    self->DoMenuUpdates();

    // TODO: handle return type
    return v8::Undefined();
  }
  

  return v8::ThrowException(v8::String::New("Could not find matching method for arguments (method name: DoMenuUpdates)."));
}

/*static*/ v8::Handle<v8::Value> wxNode_wxFrame::_UpdateWindowUI(const v8::Arguments& args) {
  v8::HandleScope scope;
  wxNode_wxFrame* self = unwrap<wxNode_wxFrame>(args.This());

  
  /*
   * id: _29789
   */
  if(args.Length() == 1 && args[0]->IsNumber()) {
    long int flags = (long int)args[0]->ToInt32()->Value(); /* type: _586  */
    

    self->UpdateWindowUI(flags);

    // TODO: handle return type
    return v8::Undefined();
  }
  
  /*
   * id: _29789
   */
  if(args.Length() == 0) {
    

    self->UpdateWindowUI();

    // TODO: handle return type
    return v8::Undefined();
  }
  

  return v8::ThrowException(v8::String::New("Could not find matching method for arguments (method name: UpdateWindowUI)."));
}

/*static*/ v8::Handle<v8::Value> wxNode_wxFrame::_OnInternalIdle(const v8::Arguments& args) {
  v8::HandleScope scope;
  wxNode_wxFrame* self = unwrap<wxNode_wxFrame>(args.This());

  

  return v8::ThrowException(v8::String::New("Could not find matching method for arguments (method name: OnInternalIdle)."));
}

/*static*/ v8::Handle<v8::Value> wxNode_wxFrame::_DoGiveHelp(const v8::Arguments& args) {
  v8::HandleScope scope;
  wxNode_wxFrame* self = unwrap<wxNode_wxFrame>(args.This());

  
  /*
   * id: _29791
   */
  if(args.Length() == 2 && args[0]->IsString() && args[1]->IsBoolean()) {
    v8::String::AsciiValue text(args[0]->ToString()); /* type: _14808  */
    bool show = args[1]->ToBoolean()->Value(); /* type: _14666  */
    

    self->DoGiveHelp(*text, show);

    // TODO: handle return type
    return v8::Undefined();
  }
  

  return v8::ThrowException(v8::String::New("Could not find matching method for arguments (method name: DoGiveHelp)."));
}

/*static*/ v8::Handle<v8::Value> wxNode_wxFrame::_IsClientAreaChild(const v8::Arguments& args) {
  v8::HandleScope scope;
  wxNode_wxFrame* self = unwrap<wxNode_wxFrame>(args.This());

  
  /*
   * id: _29792
   */
  if(args.Length() == 1 && args[0]->IsObject()) {
    wxNode_wxWindow* child = wxNodeObject::unwrap<wxNode_wxWindow>(args[0]->ToObject()); /* type: _62099 * */
    

    self->IsClientAreaChild(child);

    // TODO: handle return type
    return v8::Undefined();
  }
  

  return v8::ThrowException(v8::String::New("Could not find matching method for arguments (method name: IsClientAreaChild)."));
}

