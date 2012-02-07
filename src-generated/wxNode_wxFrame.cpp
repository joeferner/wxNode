
#include <sstream>
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

wxNode_wxFrame::wxNode_wxFrame(wxNode_wxWindow* parent, int id, const wxString& title, wxNode_wxPoint& pos, wxNode_wxSize& size, long int style, const wxString& name)
  : wxFrame(parent, id, title, pos, size, style, name)
{

}

wxNode_wxFrame::wxNode_wxFrame(wxNode_wxWindow* parent, int id, const wxString& title, wxNode_wxPoint& pos, wxNode_wxSize& size, long int style)
  : wxFrame(parent, id, title, pos, size, style)
{

}

wxNode_wxFrame::wxNode_wxFrame(wxNode_wxWindow* parent, int id, const wxString& title, wxNode_wxPoint& pos, wxNode_wxSize& size)
  : wxFrame(parent, id, title, pos, size)
{

}

wxNode_wxFrame::wxNode_wxFrame(wxNode_wxWindow* parent, int id, const wxString& title, wxNode_wxPoint& pos)
  : wxFrame(parent, id, title, pos)
{

}

wxNode_wxFrame::wxNode_wxFrame(wxNode_wxWindow* parent, int id, const wxString& title)
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

/*static*/ bool wxNode_wxFrame::AssignableFrom(const v8::Handle<v8::String>& className) {
  v8::String::AsciiValue classNameStr(className);
  return AssignableFrom(*classNameStr);
}

/*static*/ bool wxNode_wxFrame::AssignableFrom(const char* className) {
  if(!strcmp("wxFrame", className)) { return true; }
  
  if(!strcmp("wxFrame", className)) { return true; }

  if(!strcmp("wxPreviewFrame", className)) { return true; }
  if(!strcmp("wxAuiMDIParentFrame", className)) { return true; }
  if(!strcmp("wxDocChildFrameAny<wxFrame,wxFrame>", className)) { return true; }

  if(!strcmp("wxDocChildFrame", className)) { return true; }
  if(!strcmp("wxSplashScreen", className)) { return true; }
  if(!strcmp("wxMDIChildFrameBase", className)) { return true; }

  if(!strcmp("wxTDIChildFrame", className)) { return true; }

  if(!strcmp("wxMDIChildFrame", className)) { return true; }

  if(!strcmp("wxDocChildFrameAny<wxMDIChildFrame,wxMDIParentFrame>", className)) { return true; }

  if(!strcmp("wxDocMDIChildFrame", className)) { return true; }
  if(!strcmp("wxDocParentFrameAny<wxFrame>", className)) { return true; }

  if(!strcmp("wxDocParentFrame", className)) { return true; }
  if(!strcmp("wxMiniFrame", className)) { return true; }

  if(!strcmp("wxAuiFloatingFrame", className)) { return true; }
  if(!strcmp("wxHtmlHelpFrame", className)) { return true; }
  if(!strcmp("wxMDIParentFrameBase", className)) { return true; }

  if(!strcmp("wxMDIParentFrame", className)) { return true; }

  if(!strcmp("wxDocParentFrameAny<wxMDIParentFrame>", className)) { return true; }

  if(!strcmp("wxDocMDIParentFrame", className)) { return true; }


  return false;
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
  if(args.Length() == 7 && (args[0]->IsNull() || (args[0]->IsObject() && wxNode_wxWindow::AssignableFrom(args[0]->ToObject()->GetConstructorName()))) && args[1]->IsNumber() && args[2]->IsString() && (args[3]->IsNull() || (args[3]->IsObject() && wxNode_wxPoint::AssignableFrom(args[3]->ToObject()->GetConstructorName()))) && (args[4]->IsNull() || (args[4]->IsObject() && wxNode_wxSize::AssignableFrom(args[4]->ToObject()->GetConstructorName()))) && args[5]->IsNumber() && args[6]->IsString()) {
    wxNode_wxWindow* parent = args[0]->IsNull() ? NULL : wxNodeObject::unwrap<wxNode_wxWindow>(args[0]->ToObject()); /* type: _993 * */
    int id = (int)args[1]->ToInt32()->Value(); /* type: _8633  */
    v8::String::AsciiValue title(args[2]->ToString()); /* type: _14808  */
    wxNode_wxPoint* pos = args[3]->IsNull() ? NULL : wxNodeObject::unwrap<wxNode_wxPoint>(args[3]->ToObject()); /* type: _20412  */
    wxNode_wxSize* size = args[4]->IsNull() ? NULL : wxNodeObject::unwrap<wxNode_wxSize>(args[4]->ToObject()); /* type: _20522  */
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
  if(args.Length() == 6 && (args[0]->IsNull() || (args[0]->IsObject() && wxNode_wxWindow::AssignableFrom(args[0]->ToObject()->GetConstructorName()))) && args[1]->IsNumber() && args[2]->IsString() && (args[3]->IsNull() || (args[3]->IsObject() && wxNode_wxPoint::AssignableFrom(args[3]->ToObject()->GetConstructorName()))) && (args[4]->IsNull() || (args[4]->IsObject() && wxNode_wxSize::AssignableFrom(args[4]->ToObject()->GetConstructorName()))) && args[5]->IsNumber()) {
    wxNode_wxWindow* parent = args[0]->IsNull() ? NULL : wxNodeObject::unwrap<wxNode_wxWindow>(args[0]->ToObject()); /* type: _993 * */
    int id = (int)args[1]->ToInt32()->Value(); /* type: _8633  */
    v8::String::AsciiValue title(args[2]->ToString()); /* type: _14808  */
    wxNode_wxPoint* pos = args[3]->IsNull() ? NULL : wxNodeObject::unwrap<wxNode_wxPoint>(args[3]->ToObject()); /* type: _20412  */
    wxNode_wxSize* size = args[4]->IsNull() ? NULL : wxNodeObject::unwrap<wxNode_wxSize>(args[4]->ToObject()); /* type: _20522  */
    long int style = (long int)args[5]->ToInt32()->Value(); /* type: _586  */
    

    wxNode_wxFrame *self = new wxNode_wxFrame(parent, id, *title, *pos, *size, style);
    NodeExEvtHandlerImpl* evtHandler = dynamic_cast<NodeExEvtHandlerImpl*>(self);
    self->wrap(args.This(), self, evtHandler);
    return args.This();
  }
  
  /*
   * id: _35553
   */
  if(args.Length() == 5 && (args[0]->IsNull() || (args[0]->IsObject() && wxNode_wxWindow::AssignableFrom(args[0]->ToObject()->GetConstructorName()))) && args[1]->IsNumber() && args[2]->IsString() && (args[3]->IsNull() || (args[3]->IsObject() && wxNode_wxPoint::AssignableFrom(args[3]->ToObject()->GetConstructorName()))) && (args[4]->IsNull() || (args[4]->IsObject() && wxNode_wxSize::AssignableFrom(args[4]->ToObject()->GetConstructorName())))) {
    wxNode_wxWindow* parent = args[0]->IsNull() ? NULL : wxNodeObject::unwrap<wxNode_wxWindow>(args[0]->ToObject()); /* type: _993 * */
    int id = (int)args[1]->ToInt32()->Value(); /* type: _8633  */
    v8::String::AsciiValue title(args[2]->ToString()); /* type: _14808  */
    wxNode_wxPoint* pos = args[3]->IsNull() ? NULL : wxNodeObject::unwrap<wxNode_wxPoint>(args[3]->ToObject()); /* type: _20412  */
    wxNode_wxSize* size = args[4]->IsNull() ? NULL : wxNodeObject::unwrap<wxNode_wxSize>(args[4]->ToObject()); /* type: _20522  */
    

    wxNode_wxFrame *self = new wxNode_wxFrame(parent, id, *title, *pos, *size);
    NodeExEvtHandlerImpl* evtHandler = dynamic_cast<NodeExEvtHandlerImpl*>(self);
    self->wrap(args.This(), self, evtHandler);
    return args.This();
  }
  
  /*
   * id: _35553
   */
  if(args.Length() == 4 && (args[0]->IsNull() || (args[0]->IsObject() && wxNode_wxWindow::AssignableFrom(args[0]->ToObject()->GetConstructorName()))) && args[1]->IsNumber() && args[2]->IsString() && (args[3]->IsNull() || (args[3]->IsObject() && wxNode_wxPoint::AssignableFrom(args[3]->ToObject()->GetConstructorName())))) {
    wxNode_wxWindow* parent = args[0]->IsNull() ? NULL : wxNodeObject::unwrap<wxNode_wxWindow>(args[0]->ToObject()); /* type: _993 * */
    int id = (int)args[1]->ToInt32()->Value(); /* type: _8633  */
    v8::String::AsciiValue title(args[2]->ToString()); /* type: _14808  */
    wxNode_wxPoint* pos = args[3]->IsNull() ? NULL : wxNodeObject::unwrap<wxNode_wxPoint>(args[3]->ToObject()); /* type: _20412  */
    

    wxNode_wxFrame *self = new wxNode_wxFrame(parent, id, *title, *pos);
    NodeExEvtHandlerImpl* evtHandler = dynamic_cast<NodeExEvtHandlerImpl*>(self);
    self->wrap(args.This(), self, evtHandler);
    return args.This();
  }
  
  /*
   * id: _35553
   */
  if(args.Length() == 3 && (args[0]->IsNull() || (args[0]->IsObject() && wxNode_wxWindow::AssignableFrom(args[0]->ToObject()->GetConstructorName()))) && args[1]->IsNumber() && args[2]->IsString()) {
    wxNode_wxWindow* parent = args[0]->IsNull() ? NULL : wxNodeObject::unwrap<wxNode_wxWindow>(args[0]->ToObject()); /* type: _993 * */
    int id = (int)args[1]->ToInt32()->Value(); /* type: _8633  */
    v8::String::AsciiValue title(args[2]->ToString()); /* type: _14808  */
    

    wxNode_wxFrame *self = new wxNode_wxFrame(parent, id, *title);
    NodeExEvtHandlerImpl* evtHandler = dynamic_cast<NodeExEvtHandlerImpl*>(self);
    self->wrap(args.This(), self, evtHandler);
    return args.This();
  }
  
  

  std::ostringstream errStr;
  errStr << "Could not find matching constructor for arguments (class name: wxFrame).\n";
  errStr << "  arg count: " << args.Length() << "\n";
  for(int i = 0; i < args.Length(); i++) {
    v8::String::AsciiValue argStr(args[i]);
    errStr << "  arg[" << i << "]: " << *argStr << "\n";
  }
  return v8::ThrowException(v8::Exception::TypeError(v8::String::New(errStr.str().c_str())));
}


/*static*/ v8::Handle<v8::Value> wxNode_wxFrame::_New(const v8::Arguments& args) {
  v8::HandleScope scope;
  wxNode_wxFrame* self = unwrap<wxNode_wxFrame>(args.This());

  
  /*
   * id: _29764
   */
  if(args.Length() == 7 && (args[0]->IsNull() || (args[0]->IsObject() && wxNode_wxWindow::AssignableFrom(args[0]->ToObject()->GetConstructorName()))) && args[1]->IsNumber() && args[2]->IsString() && (args[3]->IsNull() || (args[3]->IsObject() && wxNode_wxPoint::AssignableFrom(args[3]->ToObject()->GetConstructorName()))) && (args[4]->IsNull() || (args[4]->IsObject() && wxNode_wxSize::AssignableFrom(args[4]->ToObject()->GetConstructorName()))) && args[5]->IsNumber() && args[6]->IsString()) {
    wxNode_wxWindow* parent = args[0]->IsNull() ? NULL : wxNodeObject::unwrap<wxNode_wxWindow>(args[0]->ToObject()); /* type: _993 * */
    int winid = (int)args[1]->ToInt32()->Value(); /* type: _8633  */
    v8::String::AsciiValue title(args[2]->ToString()); /* type: _14808  */
    wxNode_wxPoint* pos = args[3]->IsNull() ? NULL : wxNodeObject::unwrap<wxNode_wxPoint>(args[3]->ToObject()); /* type: _20412  */
    wxNode_wxSize* size = args[4]->IsNull() ? NULL : wxNodeObject::unwrap<wxNode_wxSize>(args[4]->ToObject()); /* type: _20522  */
    long int style = (long int)args[5]->ToInt32()->Value(); /* type: _586  */
    v8::String::AsciiValue name(args[6]->ToString()); /* type: _14808  */
    

    wxFrame* returnVal = self->New(parent, winid, *title, *pos, *size, style, *name);

    
    if(returnVal) {
      v8::Local<v8::FunctionTemplate> returnObjFt = v8::FunctionTemplate::New(wxNodeObject::NewFunc);
      returnObjFt->InstanceTemplate()->SetInternalFieldCount(2);
      returnObjFt->SetClassName(v8::String::NewSymbol("wxFrame"));
      wxNode_wxFrame::AddMethods(returnObjFt);
      v8::Local<v8::Function> returnObjFn = returnObjFt->GetFunction();
      v8::Handle<v8::Value> returnObjArgs[0];
      v8::Local<v8::Object> returnObj = returnObjFn->CallAsConstructor(0, returnObjArgs)->ToObject();
      returnObj->SetPointerInInternalField(0, returnVal);
      returnObj->SetPointerInInternalField(1, new NodeExEvtHandlerImplWrap(returnObj));
      return scope.Close(returnObj);
    } else {
      return scope.Close(v8::Null());
    }

  }
  
  /*
   * id: _29764
   */
  if(args.Length() == 6 && (args[0]->IsNull() || (args[0]->IsObject() && wxNode_wxWindow::AssignableFrom(args[0]->ToObject()->GetConstructorName()))) && args[1]->IsNumber() && args[2]->IsString() && (args[3]->IsNull() || (args[3]->IsObject() && wxNode_wxPoint::AssignableFrom(args[3]->ToObject()->GetConstructorName()))) && (args[4]->IsNull() || (args[4]->IsObject() && wxNode_wxSize::AssignableFrom(args[4]->ToObject()->GetConstructorName()))) && args[5]->IsNumber()) {
    wxNode_wxWindow* parent = args[0]->IsNull() ? NULL : wxNodeObject::unwrap<wxNode_wxWindow>(args[0]->ToObject()); /* type: _993 * */
    int winid = (int)args[1]->ToInt32()->Value(); /* type: _8633  */
    v8::String::AsciiValue title(args[2]->ToString()); /* type: _14808  */
    wxNode_wxPoint* pos = args[3]->IsNull() ? NULL : wxNodeObject::unwrap<wxNode_wxPoint>(args[3]->ToObject()); /* type: _20412  */
    wxNode_wxSize* size = args[4]->IsNull() ? NULL : wxNodeObject::unwrap<wxNode_wxSize>(args[4]->ToObject()); /* type: _20522  */
    long int style = (long int)args[5]->ToInt32()->Value(); /* type: _586  */
    

    wxFrame* returnVal = self->New(parent, winid, *title, *pos, *size, style);

    
    if(returnVal) {
      v8::Local<v8::FunctionTemplate> returnObjFt = v8::FunctionTemplate::New(wxNodeObject::NewFunc);
      returnObjFt->InstanceTemplate()->SetInternalFieldCount(2);
      returnObjFt->SetClassName(v8::String::NewSymbol("wxFrame"));
      wxNode_wxFrame::AddMethods(returnObjFt);
      v8::Local<v8::Function> returnObjFn = returnObjFt->GetFunction();
      v8::Handle<v8::Value> returnObjArgs[0];
      v8::Local<v8::Object> returnObj = returnObjFn->CallAsConstructor(0, returnObjArgs)->ToObject();
      returnObj->SetPointerInInternalField(0, returnVal);
      returnObj->SetPointerInInternalField(1, new NodeExEvtHandlerImplWrap(returnObj));
      return scope.Close(returnObj);
    } else {
      return scope.Close(v8::Null());
    }

  }
  
  /*
   * id: _29764
   */
  if(args.Length() == 5 && (args[0]->IsNull() || (args[0]->IsObject() && wxNode_wxWindow::AssignableFrom(args[0]->ToObject()->GetConstructorName()))) && args[1]->IsNumber() && args[2]->IsString() && (args[3]->IsNull() || (args[3]->IsObject() && wxNode_wxPoint::AssignableFrom(args[3]->ToObject()->GetConstructorName()))) && (args[4]->IsNull() || (args[4]->IsObject() && wxNode_wxSize::AssignableFrom(args[4]->ToObject()->GetConstructorName())))) {
    wxNode_wxWindow* parent = args[0]->IsNull() ? NULL : wxNodeObject::unwrap<wxNode_wxWindow>(args[0]->ToObject()); /* type: _993 * */
    int winid = (int)args[1]->ToInt32()->Value(); /* type: _8633  */
    v8::String::AsciiValue title(args[2]->ToString()); /* type: _14808  */
    wxNode_wxPoint* pos = args[3]->IsNull() ? NULL : wxNodeObject::unwrap<wxNode_wxPoint>(args[3]->ToObject()); /* type: _20412  */
    wxNode_wxSize* size = args[4]->IsNull() ? NULL : wxNodeObject::unwrap<wxNode_wxSize>(args[4]->ToObject()); /* type: _20522  */
    

    wxFrame* returnVal = self->New(parent, winid, *title, *pos, *size);

    
    if(returnVal) {
      v8::Local<v8::FunctionTemplate> returnObjFt = v8::FunctionTemplate::New(wxNodeObject::NewFunc);
      returnObjFt->InstanceTemplate()->SetInternalFieldCount(2);
      returnObjFt->SetClassName(v8::String::NewSymbol("wxFrame"));
      wxNode_wxFrame::AddMethods(returnObjFt);
      v8::Local<v8::Function> returnObjFn = returnObjFt->GetFunction();
      v8::Handle<v8::Value> returnObjArgs[0];
      v8::Local<v8::Object> returnObj = returnObjFn->CallAsConstructor(0, returnObjArgs)->ToObject();
      returnObj->SetPointerInInternalField(0, returnVal);
      returnObj->SetPointerInInternalField(1, new NodeExEvtHandlerImplWrap(returnObj));
      return scope.Close(returnObj);
    } else {
      return scope.Close(v8::Null());
    }

  }
  
  /*
   * id: _29764
   */
  if(args.Length() == 4 && (args[0]->IsNull() || (args[0]->IsObject() && wxNode_wxWindow::AssignableFrom(args[0]->ToObject()->GetConstructorName()))) && args[1]->IsNumber() && args[2]->IsString() && (args[3]->IsNull() || (args[3]->IsObject() && wxNode_wxPoint::AssignableFrom(args[3]->ToObject()->GetConstructorName())))) {
    wxNode_wxWindow* parent = args[0]->IsNull() ? NULL : wxNodeObject::unwrap<wxNode_wxWindow>(args[0]->ToObject()); /* type: _993 * */
    int winid = (int)args[1]->ToInt32()->Value(); /* type: _8633  */
    v8::String::AsciiValue title(args[2]->ToString()); /* type: _14808  */
    wxNode_wxPoint* pos = args[3]->IsNull() ? NULL : wxNodeObject::unwrap<wxNode_wxPoint>(args[3]->ToObject()); /* type: _20412  */
    

    wxFrame* returnVal = self->New(parent, winid, *title, *pos);

    
    if(returnVal) {
      v8::Local<v8::FunctionTemplate> returnObjFt = v8::FunctionTemplate::New(wxNodeObject::NewFunc);
      returnObjFt->InstanceTemplate()->SetInternalFieldCount(2);
      returnObjFt->SetClassName(v8::String::NewSymbol("wxFrame"));
      wxNode_wxFrame::AddMethods(returnObjFt);
      v8::Local<v8::Function> returnObjFn = returnObjFt->GetFunction();
      v8::Handle<v8::Value> returnObjArgs[0];
      v8::Local<v8::Object> returnObj = returnObjFn->CallAsConstructor(0, returnObjArgs)->ToObject();
      returnObj->SetPointerInInternalField(0, returnVal);
      returnObj->SetPointerInInternalField(1, new NodeExEvtHandlerImplWrap(returnObj));
      return scope.Close(returnObj);
    } else {
      return scope.Close(v8::Null());
    }

  }
  
  /*
   * id: _29764
   */
  if(args.Length() == 3 && (args[0]->IsNull() || (args[0]->IsObject() && wxNode_wxWindow::AssignableFrom(args[0]->ToObject()->GetConstructorName()))) && args[1]->IsNumber() && args[2]->IsString()) {
    wxNode_wxWindow* parent = args[0]->IsNull() ? NULL : wxNodeObject::unwrap<wxNode_wxWindow>(args[0]->ToObject()); /* type: _993 * */
    int winid = (int)args[1]->ToInt32()->Value(); /* type: _8633  */
    v8::String::AsciiValue title(args[2]->ToString()); /* type: _14808  */
    

    wxFrame* returnVal = self->New(parent, winid, *title);

    
    if(returnVal) {
      v8::Local<v8::FunctionTemplate> returnObjFt = v8::FunctionTemplate::New(wxNodeObject::NewFunc);
      returnObjFt->InstanceTemplate()->SetInternalFieldCount(2);
      returnObjFt->SetClassName(v8::String::NewSymbol("wxFrame"));
      wxNode_wxFrame::AddMethods(returnObjFt);
      v8::Local<v8::Function> returnObjFn = returnObjFt->GetFunction();
      v8::Handle<v8::Value> returnObjArgs[0];
      v8::Local<v8::Object> returnObj = returnObjFn->CallAsConstructor(0, returnObjArgs)->ToObject();
      returnObj->SetPointerInInternalField(0, returnVal);
      returnObj->SetPointerInInternalField(1, new NodeExEvtHandlerImplWrap(returnObj));
      return scope.Close(returnObj);
    } else {
      return scope.Close(v8::Null());
    }

  }
  

  std::ostringstream errStr;
  errStr << "Could not find matching method for arguments (method name: wxFrame::New).\n";
  errStr << "  arg count: " << args.Length() << "\n";
  for(int i = 0; i < args.Length(); i++) {
    v8::String::AsciiValue argStr(args[i]);
    errStr << "  arg[" << i << "]: " << *argStr << "\n";
  }
  return v8::ThrowException(v8::Exception::TypeError(v8::String::New(errStr.str().c_str())));
}

/*static*/ v8::Handle<v8::Value> wxNode_wxFrame::_GetClientAreaOrigin(const v8::Arguments& args) {
  v8::HandleScope scope;
  wxNode_wxFrame* self = unwrap<wxNode_wxFrame>(args.This());

  
  /*
   * id: _29765
   */
  if(args.Length() == 0) {
    

    wxPoint returnValTemp = self->GetClientAreaOrigin();

    wxNode_wxPoint* returnVal = new wxNode_wxPoint();
    memcpy(dynamic_cast<wxPoint*>(returnVal), &returnValTemp, sizeof(wxPoint));
    v8::Local<v8::FunctionTemplate> returnObjFt = v8::FunctionTemplate::New(wxNodeObject::NewFunc);
    returnObjFt->InstanceTemplate()->SetInternalFieldCount(2);
    returnObjFt->SetClassName(v8::String::NewSymbol("wxPoint"));
    wxNode_wxPoint::AddMethods(returnObjFt);
    v8::Local<v8::Function> returnObjFn = returnObjFt->GetFunction();
    v8::Handle<v8::Value> returnObjArgs[0];
    v8::Local<v8::Object> returnObj = returnObjFn->CallAsConstructor(0, returnObjArgs)->ToObject();
    returnObj->SetPointerInInternalField(0, returnVal);
    returnObj->SetPointerInInternalField(1, new NodeExEvtHandlerImplWrap(returnObj));
    return scope.Close(returnObj);

  }
  

  std::ostringstream errStr;
  errStr << "Could not find matching method for arguments (method name: wxFrame::GetClientAreaOrigin).\n";
  errStr << "  arg count: " << args.Length() << "\n";
  for(int i = 0; i < args.Length(); i++) {
    v8::String::AsciiValue argStr(args[i]);
    errStr << "  arg[" << i << "]: " << *argStr << "\n";
  }
  return v8::ThrowException(v8::Exception::TypeError(v8::String::New(errStr.str().c_str())));
}

/*static*/ v8::Handle<v8::Value> wxNode_wxFrame::_SetMenuBar(const v8::Arguments& args) {
  v8::HandleScope scope;
  wxNode_wxFrame* self = unwrap<wxNode_wxFrame>(args.This());

  
  /*
   * id: _29766
   */
  if(args.Length() == 1 && (args[0]->IsNull() || (args[0]->IsObject() && wxNode_wxMenuBar::AssignableFrom(args[0]->ToObject()->GetConstructorName())))) {
    wxNode_wxMenuBar* menubar = args[0]->IsNull() ? NULL : wxNodeObject::unwrap<wxNode_wxMenuBar>(args[0]->ToObject()); /* type: _59425 * */
    

    self->SetMenuBar(menubar);

    return v8::Undefined();
  }
  

  std::ostringstream errStr;
  errStr << "Could not find matching method for arguments (method name: wxFrame::SetMenuBar).\n";
  errStr << "  arg count: " << args.Length() << "\n";
  for(int i = 0; i < args.Length(); i++) {
    v8::String::AsciiValue argStr(args[i]);
    errStr << "  arg[" << i << "]: " << *argStr << "\n";
  }
  return v8::ThrowException(v8::Exception::TypeError(v8::String::New(errStr.str().c_str())));
}

/*static*/ v8::Handle<v8::Value> wxNode_wxFrame::_GetMenuBar(const v8::Arguments& args) {
  v8::HandleScope scope;
  wxNode_wxFrame* self = unwrap<wxNode_wxFrame>(args.This());

  
  /*
   * id: _29767
   */
  if(args.Length() == 0) {
    

    wxMenuBar* returnVal = self->GetMenuBar();

    
    if(returnVal) {
      v8::Local<v8::FunctionTemplate> returnObjFt = v8::FunctionTemplate::New(wxNodeObject::NewFunc);
      returnObjFt->InstanceTemplate()->SetInternalFieldCount(2);
      returnObjFt->SetClassName(v8::String::NewSymbol("wxMenuBar"));
      wxNode_wxMenuBar::AddMethods(returnObjFt);
      v8::Local<v8::Function> returnObjFn = returnObjFt->GetFunction();
      v8::Handle<v8::Value> returnObjArgs[0];
      v8::Local<v8::Object> returnObj = returnObjFn->CallAsConstructor(0, returnObjArgs)->ToObject();
      returnObj->SetPointerInInternalField(0, returnVal);
      returnObj->SetPointerInInternalField(1, new NodeExEvtHandlerImplWrap(returnObj));
      return scope.Close(returnObj);
    } else {
      return scope.Close(v8::Null());
    }

  }
  

  std::ostringstream errStr;
  errStr << "Could not find matching method for arguments (method name: wxFrame::GetMenuBar).\n";
  errStr << "  arg count: " << args.Length() << "\n";
  for(int i = 0; i < args.Length(); i++) {
    v8::String::AsciiValue argStr(args[i]);
    errStr << "  arg[" << i << "]: " << *argStr << "\n";
  }
  return v8::ThrowException(v8::Exception::TypeError(v8::String::New(errStr.str().c_str())));
}

/*static*/ v8::Handle<v8::Value> wxNode_wxFrame::_FindItemInMenuBar(const v8::Arguments& args) {
  v8::HandleScope scope;
  wxNode_wxFrame* self = unwrap<wxNode_wxFrame>(args.This());

  
  /*
   * id: _29768
   */
  if(args.Length() == 1 && args[0]->IsNumber()) {
    int menuId = (int)args[0]->ToInt32()->Value(); /* type: _162  */
    

    wxMenuItem* returnVal = self->FindItemInMenuBar(menuId);

    
    if(returnVal) {
      v8::Local<v8::FunctionTemplate> returnObjFt = v8::FunctionTemplate::New(wxNodeObject::NewFunc);
      returnObjFt->InstanceTemplate()->SetInternalFieldCount(2);
      returnObjFt->SetClassName(v8::String::NewSymbol("wxMenuItem"));
      wxNode_wxMenuItem::AddMethods(returnObjFt);
      v8::Local<v8::Function> returnObjFn = returnObjFt->GetFunction();
      v8::Handle<v8::Value> returnObjArgs[0];
      v8::Local<v8::Object> returnObj = returnObjFn->CallAsConstructor(0, returnObjArgs)->ToObject();
      returnObj->SetPointerInInternalField(0, returnVal);
      returnObj->SetPointerInInternalField(1, new NodeExEvtHandlerImplWrap(returnObj));
      return scope.Close(returnObj);
    } else {
      return scope.Close(v8::Null());
    }

  }
  

  std::ostringstream errStr;
  errStr << "Could not find matching method for arguments (method name: wxFrame::FindItemInMenuBar).\n";
  errStr << "  arg count: " << args.Length() << "\n";
  for(int i = 0; i < args.Length(); i++) {
    v8::String::AsciiValue argStr(args[i]);
    errStr << "  arg[" << i << "]: " << *argStr << "\n";
  }
  return v8::ThrowException(v8::Exception::TypeError(v8::String::New(errStr.str().c_str())));
}

/*static*/ v8::Handle<v8::Value> wxNode_wxFrame::_ProcessCommand(const v8::Arguments& args) {
  v8::HandleScope scope;
  wxNode_wxFrame* self = unwrap<wxNode_wxFrame>(args.This());

  
  /*
   * id: _29769
   */
  if(args.Length() == 1 && (args[0]->IsNull() || (args[0]->IsObject() && wxNode_wxMenuItem::AssignableFrom(args[0]->ToObject()->GetConstructorName())))) {
    wxNode_wxMenuItem* item = args[0]->IsNull() ? NULL : wxNodeObject::unwrap<wxNode_wxMenuItem>(args[0]->ToObject()); /* type: _51683 * */
    

    bool returnVal = self->ProcessCommand(item);

    return scope.Close(v8::Boolean::New(returnVal));
  }
  
  /*
   * id: _29770
   */
  if(args.Length() == 1 && args[0]->IsNumber()) {
    int winid = (int)args[0]->ToInt32()->Value(); /* type: _162  */
    

    bool returnVal = self->ProcessCommand(winid);

    return scope.Close(v8::Boolean::New(returnVal));
  }
  

  std::ostringstream errStr;
  errStr << "Could not find matching method for arguments (method name: wxFrame::ProcessCommand).\n";
  errStr << "  arg count: " << args.Length() << "\n";
  for(int i = 0; i < args.Length(); i++) {
    v8::String::AsciiValue argStr(args[i]);
    errStr << "  arg[" << i << "]: " << *argStr << "\n";
  }
  return v8::ThrowException(v8::Exception::TypeError(v8::String::New(errStr.str().c_str())));
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
    

    wxStatusBar* returnVal = self->CreateStatusBar(number, style, winid, *name);

    
    if(returnVal) {
      v8::Local<v8::FunctionTemplate> returnObjFt = v8::FunctionTemplate::New(wxNodeObject::NewFunc);
      returnObjFt->InstanceTemplate()->SetInternalFieldCount(2);
      returnObjFt->SetClassName(v8::String::NewSymbol("wxStatusBar"));
      wxNode_wxStatusBar::AddMethods(returnObjFt);
      v8::Local<v8::Function> returnObjFn = returnObjFt->GetFunction();
      v8::Handle<v8::Value> returnObjArgs[0];
      v8::Local<v8::Object> returnObj = returnObjFn->CallAsConstructor(0, returnObjArgs)->ToObject();
      returnObj->SetPointerInInternalField(0, returnVal);
      returnObj->SetPointerInInternalField(1, new NodeExEvtHandlerImplWrap(returnObj));
      return scope.Close(returnObj);
    } else {
      return scope.Close(v8::Null());
    }

  }
  
  /*
   * id: _29771
   */
  if(args.Length() == 3 && args[0]->IsNumber() && args[1]->IsNumber() && args[2]->IsNumber()) {
    int number = (int)args[0]->ToInt32()->Value(); /* type: _162  */
    long int style = (long int)args[1]->ToInt32()->Value(); /* type: _586  */
    int winid = (int)args[2]->ToInt32()->Value(); /* type: _8633  */
    

    wxStatusBar* returnVal = self->CreateStatusBar(number, style, winid);

    
    if(returnVal) {
      v8::Local<v8::FunctionTemplate> returnObjFt = v8::FunctionTemplate::New(wxNodeObject::NewFunc);
      returnObjFt->InstanceTemplate()->SetInternalFieldCount(2);
      returnObjFt->SetClassName(v8::String::NewSymbol("wxStatusBar"));
      wxNode_wxStatusBar::AddMethods(returnObjFt);
      v8::Local<v8::Function> returnObjFn = returnObjFt->GetFunction();
      v8::Handle<v8::Value> returnObjArgs[0];
      v8::Local<v8::Object> returnObj = returnObjFn->CallAsConstructor(0, returnObjArgs)->ToObject();
      returnObj->SetPointerInInternalField(0, returnVal);
      returnObj->SetPointerInInternalField(1, new NodeExEvtHandlerImplWrap(returnObj));
      return scope.Close(returnObj);
    } else {
      return scope.Close(v8::Null());
    }

  }
  
  /*
   * id: _29771
   */
  if(args.Length() == 2 && args[0]->IsNumber() && args[1]->IsNumber()) {
    int number = (int)args[0]->ToInt32()->Value(); /* type: _162  */
    long int style = (long int)args[1]->ToInt32()->Value(); /* type: _586  */
    

    wxStatusBar* returnVal = self->CreateStatusBar(number, style);

    
    if(returnVal) {
      v8::Local<v8::FunctionTemplate> returnObjFt = v8::FunctionTemplate::New(wxNodeObject::NewFunc);
      returnObjFt->InstanceTemplate()->SetInternalFieldCount(2);
      returnObjFt->SetClassName(v8::String::NewSymbol("wxStatusBar"));
      wxNode_wxStatusBar::AddMethods(returnObjFt);
      v8::Local<v8::Function> returnObjFn = returnObjFt->GetFunction();
      v8::Handle<v8::Value> returnObjArgs[0];
      v8::Local<v8::Object> returnObj = returnObjFn->CallAsConstructor(0, returnObjArgs)->ToObject();
      returnObj->SetPointerInInternalField(0, returnVal);
      returnObj->SetPointerInInternalField(1, new NodeExEvtHandlerImplWrap(returnObj));
      return scope.Close(returnObj);
    } else {
      return scope.Close(v8::Null());
    }

  }
  
  /*
   * id: _29771
   */
  if(args.Length() == 1 && args[0]->IsNumber()) {
    int number = (int)args[0]->ToInt32()->Value(); /* type: _162  */
    

    wxStatusBar* returnVal = self->CreateStatusBar(number);

    
    if(returnVal) {
      v8::Local<v8::FunctionTemplate> returnObjFt = v8::FunctionTemplate::New(wxNodeObject::NewFunc);
      returnObjFt->InstanceTemplate()->SetInternalFieldCount(2);
      returnObjFt->SetClassName(v8::String::NewSymbol("wxStatusBar"));
      wxNode_wxStatusBar::AddMethods(returnObjFt);
      v8::Local<v8::Function> returnObjFn = returnObjFt->GetFunction();
      v8::Handle<v8::Value> returnObjArgs[0];
      v8::Local<v8::Object> returnObj = returnObjFn->CallAsConstructor(0, returnObjArgs)->ToObject();
      returnObj->SetPointerInInternalField(0, returnVal);
      returnObj->SetPointerInInternalField(1, new NodeExEvtHandlerImplWrap(returnObj));
      return scope.Close(returnObj);
    } else {
      return scope.Close(v8::Null());
    }

  }
  
  /*
   * id: _29771
   */
  if(args.Length() == 0) {
    

    wxStatusBar* returnVal = self->CreateStatusBar();

    
    if(returnVal) {
      v8::Local<v8::FunctionTemplate> returnObjFt = v8::FunctionTemplate::New(wxNodeObject::NewFunc);
      returnObjFt->InstanceTemplate()->SetInternalFieldCount(2);
      returnObjFt->SetClassName(v8::String::NewSymbol("wxStatusBar"));
      wxNode_wxStatusBar::AddMethods(returnObjFt);
      v8::Local<v8::Function> returnObjFn = returnObjFt->GetFunction();
      v8::Handle<v8::Value> returnObjArgs[0];
      v8::Local<v8::Object> returnObj = returnObjFn->CallAsConstructor(0, returnObjArgs)->ToObject();
      returnObj->SetPointerInInternalField(0, returnVal);
      returnObj->SetPointerInInternalField(1, new NodeExEvtHandlerImplWrap(returnObj));
      return scope.Close(returnObj);
    } else {
      return scope.Close(v8::Null());
    }

  }
  

  std::ostringstream errStr;
  errStr << "Could not find matching method for arguments (method name: wxFrame::CreateStatusBar).\n";
  errStr << "  arg count: " << args.Length() << "\n";
  for(int i = 0; i < args.Length(); i++) {
    v8::String::AsciiValue argStr(args[i]);
    errStr << "  arg[" << i << "]: " << *argStr << "\n";
  }
  return v8::ThrowException(v8::Exception::TypeError(v8::String::New(errStr.str().c_str())));
}

/*static*/ v8::Handle<v8::Value> wxNode_wxFrame::_OnCreateStatusBar(const v8::Arguments& args) {
  v8::HandleScope scope;
  wxNode_wxFrame* self = unwrap<wxNode_wxFrame>(args.This());

  

  std::ostringstream errStr;
  errStr << "Could not find matching method for arguments (method name: wxFrame::OnCreateStatusBar).\n";
  errStr << "  arg count: " << args.Length() << "\n";
  for(int i = 0; i < args.Length(); i++) {
    v8::String::AsciiValue argStr(args[i]);
    errStr << "  arg[" << i << "]: " << *argStr << "\n";
  }
  return v8::ThrowException(v8::Exception::TypeError(v8::String::New(errStr.str().c_str())));
}

/*static*/ v8::Handle<v8::Value> wxNode_wxFrame::_GetStatusBar(const v8::Arguments& args) {
  v8::HandleScope scope;
  wxNode_wxFrame* self = unwrap<wxNode_wxFrame>(args.This());

  
  /*
   * id: _29773
   */
  if(args.Length() == 0) {
    

    wxStatusBar* returnVal = self->GetStatusBar();

    
    if(returnVal) {
      v8::Local<v8::FunctionTemplate> returnObjFt = v8::FunctionTemplate::New(wxNodeObject::NewFunc);
      returnObjFt->InstanceTemplate()->SetInternalFieldCount(2);
      returnObjFt->SetClassName(v8::String::NewSymbol("wxStatusBar"));
      wxNode_wxStatusBar::AddMethods(returnObjFt);
      v8::Local<v8::Function> returnObjFn = returnObjFt->GetFunction();
      v8::Handle<v8::Value> returnObjArgs[0];
      v8::Local<v8::Object> returnObj = returnObjFn->CallAsConstructor(0, returnObjArgs)->ToObject();
      returnObj->SetPointerInInternalField(0, returnVal);
      returnObj->SetPointerInInternalField(1, new NodeExEvtHandlerImplWrap(returnObj));
      return scope.Close(returnObj);
    } else {
      return scope.Close(v8::Null());
    }

  }
  

  std::ostringstream errStr;
  errStr << "Could not find matching method for arguments (method name: wxFrame::GetStatusBar).\n";
  errStr << "  arg count: " << args.Length() << "\n";
  for(int i = 0; i < args.Length(); i++) {
    v8::String::AsciiValue argStr(args[i]);
    errStr << "  arg[" << i << "]: " << *argStr << "\n";
  }
  return v8::ThrowException(v8::Exception::TypeError(v8::String::New(errStr.str().c_str())));
}

/*static*/ v8::Handle<v8::Value> wxNode_wxFrame::_SetStatusBar(const v8::Arguments& args) {
  v8::HandleScope scope;
  wxNode_wxFrame* self = unwrap<wxNode_wxFrame>(args.This());

  
  /*
   * id: _29774
   */
  if(args.Length() == 1 && (args[0]->IsNull() || (args[0]->IsObject() && wxNode_wxStatusBar::AssignableFrom(args[0]->ToObject()->GetConstructorName())))) {
    wxNode_wxStatusBar* statBar = args[0]->IsNull() ? NULL : wxNodeObject::unwrap<wxNode_wxStatusBar>(args[0]->ToObject()); /* type: _62859 * */
    

    self->SetStatusBar(statBar);

    return v8::Undefined();
  }
  

  std::ostringstream errStr;
  errStr << "Could not find matching method for arguments (method name: wxFrame::SetStatusBar).\n";
  errStr << "  arg count: " << args.Length() << "\n";
  for(int i = 0; i < args.Length(); i++) {
    v8::String::AsciiValue argStr(args[i]);
    errStr << "  arg[" << i << "]: " << *argStr << "\n";
  }
  return v8::ThrowException(v8::Exception::TypeError(v8::String::New(errStr.str().c_str())));
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

    return v8::Undefined();
  }
  
  /*
   * id: _29775
   */
  if(args.Length() == 1 && args[0]->IsString()) {
    v8::String::AsciiValue text(args[0]->ToString()); /* type: _14808  */
    

    self->SetStatusText(*text);

    return v8::Undefined();
  }
  

  std::ostringstream errStr;
  errStr << "Could not find matching method for arguments (method name: wxFrame::SetStatusText).\n";
  errStr << "  arg count: " << args.Length() << "\n";
  for(int i = 0; i < args.Length(); i++) {
    v8::String::AsciiValue argStr(args[i]);
    errStr << "  arg[" << i << "]: " << *argStr << "\n";
  }
  return v8::ThrowException(v8::Exception::TypeError(v8::String::New(errStr.str().c_str())));
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

    return v8::Undefined();
  }
  

  std::ostringstream errStr;
  errStr << "Could not find matching method for arguments (method name: wxFrame::SetStatusWidths).\n";
  errStr << "  arg count: " << args.Length() << "\n";
  for(int i = 0; i < args.Length(); i++) {
    v8::String::AsciiValue argStr(args[i]);
    errStr << "  arg[" << i << "]: " << *argStr << "\n";
  }
  return v8::ThrowException(v8::Exception::TypeError(v8::String::New(errStr.str().c_str())));
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

    return v8::Undefined();
  }
  
  /*
   * id: _29777
   */
  if(args.Length() == 1 && args[0]->IsString()) {
    v8::String::AsciiValue text(args[0]->ToString()); /* type: _14808  */
    

    self->PushStatusText(*text);

    return v8::Undefined();
  }
  

  std::ostringstream errStr;
  errStr << "Could not find matching method for arguments (method name: wxFrame::PushStatusText).\n";
  errStr << "  arg count: " << args.Length() << "\n";
  for(int i = 0; i < args.Length(); i++) {
    v8::String::AsciiValue argStr(args[i]);
    errStr << "  arg[" << i << "]: " << *argStr << "\n";
  }
  return v8::ThrowException(v8::Exception::TypeError(v8::String::New(errStr.str().c_str())));
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

    return v8::Undefined();
  }
  
  /*
   * id: _29778
   */
  if(args.Length() == 0) {
    

    self->PopStatusText();

    return v8::Undefined();
  }
  

  std::ostringstream errStr;
  errStr << "Could not find matching method for arguments (method name: wxFrame::PopStatusText).\n";
  errStr << "  arg count: " << args.Length() << "\n";
  for(int i = 0; i < args.Length(); i++) {
    v8::String::AsciiValue argStr(args[i]);
    errStr << "  arg[" << i << "]: " << *argStr << "\n";
  }
  return v8::ThrowException(v8::Exception::TypeError(v8::String::New(errStr.str().c_str())));
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

    return v8::Undefined();
  }
  

  std::ostringstream errStr;
  errStr << "Could not find matching method for arguments (method name: wxFrame::SetStatusBarPane).\n";
  errStr << "  arg count: " << args.Length() << "\n";
  for(int i = 0; i < args.Length(); i++) {
    v8::String::AsciiValue argStr(args[i]);
    errStr << "  arg[" << i << "]: " << *argStr << "\n";
  }
  return v8::ThrowException(v8::Exception::TypeError(v8::String::New(errStr.str().c_str())));
}

/*static*/ v8::Handle<v8::Value> wxNode_wxFrame::_GetStatusBarPane(const v8::Arguments& args) {
  v8::HandleScope scope;
  wxNode_wxFrame* self = unwrap<wxNode_wxFrame>(args.This());

  
  /*
   * id: _29780
   */
  if(args.Length() == 0) {
    

    int returnVal = self->GetStatusBarPane();

    return scope.Close(v8::Number::New(returnVal));
  }
  

  std::ostringstream errStr;
  errStr << "Could not find matching method for arguments (method name: wxFrame::GetStatusBarPane).\n";
  errStr << "  arg count: " << args.Length() << "\n";
  for(int i = 0; i < args.Length(); i++) {
    v8::String::AsciiValue argStr(args[i]);
    errStr << "  arg[" << i << "]: " << *argStr << "\n";
  }
  return v8::ThrowException(v8::Exception::TypeError(v8::String::New(errStr.str().c_str())));
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
    

    wxToolBar* returnVal = self->CreateToolBar(style, winid, *name);

    
    if(returnVal) {
      v8::Local<v8::FunctionTemplate> returnObjFt = v8::FunctionTemplate::New(wxNodeObject::NewFunc);
      returnObjFt->InstanceTemplate()->SetInternalFieldCount(2);
      returnObjFt->SetClassName(v8::String::NewSymbol("wxToolBar"));
      wxNode_wxToolBar::AddMethods(returnObjFt);
      v8::Local<v8::Function> returnObjFn = returnObjFt->GetFunction();
      v8::Handle<v8::Value> returnObjArgs[0];
      v8::Local<v8::Object> returnObj = returnObjFn->CallAsConstructor(0, returnObjArgs)->ToObject();
      returnObj->SetPointerInInternalField(0, returnVal);
      returnObj->SetPointerInInternalField(1, new NodeExEvtHandlerImplWrap(returnObj));
      return scope.Close(returnObj);
    } else {
      return scope.Close(v8::Null());
    }

  }
  
  /*
   * id: _29781
   */
  if(args.Length() == 2 && args[0]->IsNumber() && args[1]->IsNumber()) {
    long int style = (long int)args[0]->ToInt32()->Value(); /* type: _586  */
    int winid = (int)args[1]->ToInt32()->Value(); /* type: _8633  */
    

    wxToolBar* returnVal = self->CreateToolBar(style, winid);

    
    if(returnVal) {
      v8::Local<v8::FunctionTemplate> returnObjFt = v8::FunctionTemplate::New(wxNodeObject::NewFunc);
      returnObjFt->InstanceTemplate()->SetInternalFieldCount(2);
      returnObjFt->SetClassName(v8::String::NewSymbol("wxToolBar"));
      wxNode_wxToolBar::AddMethods(returnObjFt);
      v8::Local<v8::Function> returnObjFn = returnObjFt->GetFunction();
      v8::Handle<v8::Value> returnObjArgs[0];
      v8::Local<v8::Object> returnObj = returnObjFn->CallAsConstructor(0, returnObjArgs)->ToObject();
      returnObj->SetPointerInInternalField(0, returnVal);
      returnObj->SetPointerInInternalField(1, new NodeExEvtHandlerImplWrap(returnObj));
      return scope.Close(returnObj);
    } else {
      return scope.Close(v8::Null());
    }

  }
  
  /*
   * id: _29781
   */
  if(args.Length() == 1 && args[0]->IsNumber()) {
    long int style = (long int)args[0]->ToInt32()->Value(); /* type: _586  */
    

    wxToolBar* returnVal = self->CreateToolBar(style);

    
    if(returnVal) {
      v8::Local<v8::FunctionTemplate> returnObjFt = v8::FunctionTemplate::New(wxNodeObject::NewFunc);
      returnObjFt->InstanceTemplate()->SetInternalFieldCount(2);
      returnObjFt->SetClassName(v8::String::NewSymbol("wxToolBar"));
      wxNode_wxToolBar::AddMethods(returnObjFt);
      v8::Local<v8::Function> returnObjFn = returnObjFt->GetFunction();
      v8::Handle<v8::Value> returnObjArgs[0];
      v8::Local<v8::Object> returnObj = returnObjFn->CallAsConstructor(0, returnObjArgs)->ToObject();
      returnObj->SetPointerInInternalField(0, returnVal);
      returnObj->SetPointerInInternalField(1, new NodeExEvtHandlerImplWrap(returnObj));
      return scope.Close(returnObj);
    } else {
      return scope.Close(v8::Null());
    }

  }
  
  /*
   * id: _29781
   */
  if(args.Length() == 0) {
    

    wxToolBar* returnVal = self->CreateToolBar();

    
    if(returnVal) {
      v8::Local<v8::FunctionTemplate> returnObjFt = v8::FunctionTemplate::New(wxNodeObject::NewFunc);
      returnObjFt->InstanceTemplate()->SetInternalFieldCount(2);
      returnObjFt->SetClassName(v8::String::NewSymbol("wxToolBar"));
      wxNode_wxToolBar::AddMethods(returnObjFt);
      v8::Local<v8::Function> returnObjFn = returnObjFt->GetFunction();
      v8::Handle<v8::Value> returnObjArgs[0];
      v8::Local<v8::Object> returnObj = returnObjFn->CallAsConstructor(0, returnObjArgs)->ToObject();
      returnObj->SetPointerInInternalField(0, returnVal);
      returnObj->SetPointerInInternalField(1, new NodeExEvtHandlerImplWrap(returnObj));
      return scope.Close(returnObj);
    } else {
      return scope.Close(v8::Null());
    }

  }
  

  std::ostringstream errStr;
  errStr << "Could not find matching method for arguments (method name: wxFrame::CreateToolBar).\n";
  errStr << "  arg count: " << args.Length() << "\n";
  for(int i = 0; i < args.Length(); i++) {
    v8::String::AsciiValue argStr(args[i]);
    errStr << "  arg[" << i << "]: " << *argStr << "\n";
  }
  return v8::ThrowException(v8::Exception::TypeError(v8::String::New(errStr.str().c_str())));
}

/*static*/ v8::Handle<v8::Value> wxNode_wxFrame::_OnCreateToolBar(const v8::Arguments& args) {
  v8::HandleScope scope;
  wxNode_wxFrame* self = unwrap<wxNode_wxFrame>(args.This());

  

  std::ostringstream errStr;
  errStr << "Could not find matching method for arguments (method name: wxFrame::OnCreateToolBar).\n";
  errStr << "  arg count: " << args.Length() << "\n";
  for(int i = 0; i < args.Length(); i++) {
    v8::String::AsciiValue argStr(args[i]);
    errStr << "  arg[" << i << "]: " << *argStr << "\n";
  }
  return v8::ThrowException(v8::Exception::TypeError(v8::String::New(errStr.str().c_str())));
}

/*static*/ v8::Handle<v8::Value> wxNode_wxFrame::_GetToolBar(const v8::Arguments& args) {
  v8::HandleScope scope;
  wxNode_wxFrame* self = unwrap<wxNode_wxFrame>(args.This());

  
  /*
   * id: _29783
   */
  if(args.Length() == 0) {
    

    wxToolBar* returnVal = self->GetToolBar();

    
    if(returnVal) {
      v8::Local<v8::FunctionTemplate> returnObjFt = v8::FunctionTemplate::New(wxNodeObject::NewFunc);
      returnObjFt->InstanceTemplate()->SetInternalFieldCount(2);
      returnObjFt->SetClassName(v8::String::NewSymbol("wxToolBar"));
      wxNode_wxToolBar::AddMethods(returnObjFt);
      v8::Local<v8::Function> returnObjFn = returnObjFt->GetFunction();
      v8::Handle<v8::Value> returnObjArgs[0];
      v8::Local<v8::Object> returnObj = returnObjFn->CallAsConstructor(0, returnObjArgs)->ToObject();
      returnObj->SetPointerInInternalField(0, returnVal);
      returnObj->SetPointerInInternalField(1, new NodeExEvtHandlerImplWrap(returnObj));
      return scope.Close(returnObj);
    } else {
      return scope.Close(v8::Null());
    }

  }
  

  std::ostringstream errStr;
  errStr << "Could not find matching method for arguments (method name: wxFrame::GetToolBar).\n";
  errStr << "  arg count: " << args.Length() << "\n";
  for(int i = 0; i < args.Length(); i++) {
    v8::String::AsciiValue argStr(args[i]);
    errStr << "  arg[" << i << "]: " << *argStr << "\n";
  }
  return v8::ThrowException(v8::Exception::TypeError(v8::String::New(errStr.str().c_str())));
}

/*static*/ v8::Handle<v8::Value> wxNode_wxFrame::_SetToolBar(const v8::Arguments& args) {
  v8::HandleScope scope;
  wxNode_wxFrame* self = unwrap<wxNode_wxFrame>(args.This());

  
  /*
   * id: _29784
   */
  if(args.Length() == 1 && (args[0]->IsNull() || (args[0]->IsObject() && wxNode_wxToolBar::AssignableFrom(args[0]->ToObject()->GetConstructorName())))) {
    wxNode_wxToolBar* toolbar = args[0]->IsNull() ? NULL : wxNodeObject::unwrap<wxNode_wxToolBar>(args[0]->ToObject()); /* type: _61119 * */
    

    self->SetToolBar(toolbar);

    return v8::Undefined();
  }
  

  std::ostringstream errStr;
  errStr << "Could not find matching method for arguments (method name: wxFrame::SetToolBar).\n";
  errStr << "  arg count: " << args.Length() << "\n";
  for(int i = 0; i < args.Length(); i++) {
    v8::String::AsciiValue argStr(args[i]);
    errStr << "  arg[" << i << "]: " << *argStr << "\n";
  }
  return v8::ThrowException(v8::Exception::TypeError(v8::String::New(errStr.str().c_str())));
}

/*static*/ v8::Handle<v8::Value> wxNode_wxFrame::_OnMenuOpen(const v8::Arguments& args) {
  v8::HandleScope scope;
  wxNode_wxFrame* self = unwrap<wxNode_wxFrame>(args.This());

  

  std::ostringstream errStr;
  errStr << "Could not find matching method for arguments (method name: wxFrame::OnMenuOpen).\n";
  errStr << "  arg count: " << args.Length() << "\n";
  for(int i = 0; i < args.Length(); i++) {
    v8::String::AsciiValue argStr(args[i]);
    errStr << "  arg[" << i << "]: " << *argStr << "\n";
  }
  return v8::ThrowException(v8::Exception::TypeError(v8::String::New(errStr.str().c_str())));
}

/*static*/ v8::Handle<v8::Value> wxNode_wxFrame::_OnMenuClose(const v8::Arguments& args) {
  v8::HandleScope scope;
  wxNode_wxFrame* self = unwrap<wxNode_wxFrame>(args.This());

  

  std::ostringstream errStr;
  errStr << "Could not find matching method for arguments (method name: wxFrame::OnMenuClose).\n";
  errStr << "  arg count: " << args.Length() << "\n";
  for(int i = 0; i < args.Length(); i++) {
    v8::String::AsciiValue argStr(args[i]);
    errStr << "  arg[" << i << "]: " << *argStr << "\n";
  }
  return v8::ThrowException(v8::Exception::TypeError(v8::String::New(errStr.str().c_str())));
}

/*static*/ v8::Handle<v8::Value> wxNode_wxFrame::_OnMenuHighlight(const v8::Arguments& args) {
  v8::HandleScope scope;
  wxNode_wxFrame* self = unwrap<wxNode_wxFrame>(args.This());

  

  std::ostringstream errStr;
  errStr << "Could not find matching method for arguments (method name: wxFrame::OnMenuHighlight).\n";
  errStr << "  arg count: " << args.Length() << "\n";
  for(int i = 0; i < args.Length(); i++) {
    v8::String::AsciiValue argStr(args[i]);
    errStr << "  arg[" << i << "]: " << *argStr << "\n";
  }
  return v8::ThrowException(v8::Exception::TypeError(v8::String::New(errStr.str().c_str())));
}

/*static*/ v8::Handle<v8::Value> wxNode_wxFrame::_DoMenuUpdates(const v8::Arguments& args) {
  v8::HandleScope scope;
  wxNode_wxFrame* self = unwrap<wxNode_wxFrame>(args.This());

  
  /*
   * id: _29788
   */
  if(args.Length() == 1 && (args[0]->IsNull() || (args[0]->IsObject() && wxNode_wxMenu::AssignableFrom(args[0]->ToObject()->GetConstructorName())))) {
    wxNode_wxMenu* menu = args[0]->IsNull() ? NULL : wxNodeObject::unwrap<wxNode_wxMenu>(args[0]->ToObject()); /* type: _52838 * */
    

    self->DoMenuUpdates(menu);

    return v8::Undefined();
  }
  
  /*
   * id: _29788
   */
  if(args.Length() == 0) {
    

    self->DoMenuUpdates();

    return v8::Undefined();
  }
  

  std::ostringstream errStr;
  errStr << "Could not find matching method for arguments (method name: wxFrame::DoMenuUpdates).\n";
  errStr << "  arg count: " << args.Length() << "\n";
  for(int i = 0; i < args.Length(); i++) {
    v8::String::AsciiValue argStr(args[i]);
    errStr << "  arg[" << i << "]: " << *argStr << "\n";
  }
  return v8::ThrowException(v8::Exception::TypeError(v8::String::New(errStr.str().c_str())));
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

    return v8::Undefined();
  }
  
  /*
   * id: _29789
   */
  if(args.Length() == 0) {
    

    self->UpdateWindowUI();

    return v8::Undefined();
  }
  

  std::ostringstream errStr;
  errStr << "Could not find matching method for arguments (method name: wxFrame::UpdateWindowUI).\n";
  errStr << "  arg count: " << args.Length() << "\n";
  for(int i = 0; i < args.Length(); i++) {
    v8::String::AsciiValue argStr(args[i]);
    errStr << "  arg[" << i << "]: " << *argStr << "\n";
  }
  return v8::ThrowException(v8::Exception::TypeError(v8::String::New(errStr.str().c_str())));
}

/*static*/ v8::Handle<v8::Value> wxNode_wxFrame::_OnInternalIdle(const v8::Arguments& args) {
  v8::HandleScope scope;
  wxNode_wxFrame* self = unwrap<wxNode_wxFrame>(args.This());

  

  std::ostringstream errStr;
  errStr << "Could not find matching method for arguments (method name: wxFrame::OnInternalIdle).\n";
  errStr << "  arg count: " << args.Length() << "\n";
  for(int i = 0; i < args.Length(); i++) {
    v8::String::AsciiValue argStr(args[i]);
    errStr << "  arg[" << i << "]: " << *argStr << "\n";
  }
  return v8::ThrowException(v8::Exception::TypeError(v8::String::New(errStr.str().c_str())));
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

    return v8::Undefined();
  }
  

  std::ostringstream errStr;
  errStr << "Could not find matching method for arguments (method name: wxFrame::DoGiveHelp).\n";
  errStr << "  arg count: " << args.Length() << "\n";
  for(int i = 0; i < args.Length(); i++) {
    v8::String::AsciiValue argStr(args[i]);
    errStr << "  arg[" << i << "]: " << *argStr << "\n";
  }
  return v8::ThrowException(v8::Exception::TypeError(v8::String::New(errStr.str().c_str())));
}

/*static*/ v8::Handle<v8::Value> wxNode_wxFrame::_IsClientAreaChild(const v8::Arguments& args) {
  v8::HandleScope scope;
  wxNode_wxFrame* self = unwrap<wxNode_wxFrame>(args.This());

  
  /*
   * id: _29792
   */
  if(args.Length() == 1 && (args[0]->IsNull() || (args[0]->IsObject() && wxNode_wxWindow::AssignableFrom(args[0]->ToObject()->GetConstructorName())))) {
    wxNode_wxWindow* child = args[0]->IsNull() ? NULL : wxNodeObject::unwrap<wxNode_wxWindow>(args[0]->ToObject()); /* type: _62099 * */
    

    bool returnVal = self->IsClientAreaChild(child);

    return scope.Close(v8::Boolean::New(returnVal));
  }
  

  std::ostringstream errStr;
  errStr << "Could not find matching method for arguments (method name: wxFrame::IsClientAreaChild).\n";
  errStr << "  arg count: " << args.Length() << "\n";
  for(int i = 0; i < args.Length(); i++) {
    v8::String::AsciiValue argStr(args[i]);
    errStr << "  arg[" << i << "]: " << *argStr << "\n";
  }
  return v8::ThrowException(v8::Exception::TypeError(v8::String::New(errStr.str().c_str())));
}

