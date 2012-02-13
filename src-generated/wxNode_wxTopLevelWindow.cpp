
#include <sstream>
#include "wxNode_wxTopLevelWindow.h"
#include "wxNode_wxEvtHandler.h"
#include "wxNode_wxNavigationEnabled.h"
#include "wxNode_wxWindow.h"
#include "wxNode_wxPoint.h"
#include "wxNode_wxSize.h"
#include "wxNode_wxIcon.h"
#include "wxNode_wxIconBundle.h"
#include "wxNode_wxUpdateUIEvent.h"


/* static */ v8::Persistent<v8::FunctionTemplate> wxNode_wxTopLevelWindow::s_ct;



wxNode_wxTopLevelWindow::wxNode_wxTopLevelWindow()
  : wxTopLevelWindow()
{

}

wxNode_wxTopLevelWindow::wxNode_wxTopLevelWindow(wxWindow* parent, int winid, const wxString& title, wxPoint& pos, wxSize& size, long int style, const wxString& name)
  : wxTopLevelWindow(parent, winid, title, pos, size, style, name)
{

}

wxNode_wxTopLevelWindow::wxNode_wxTopLevelWindow(wxWindow* parent, int winid, const wxString& title, wxPoint& pos, wxSize& size, long int style)
  : wxTopLevelWindow(parent, winid, title, pos, size, style)
{

}

wxNode_wxTopLevelWindow::wxNode_wxTopLevelWindow(wxWindow* parent, int winid, const wxString& title, wxPoint& pos, wxSize& size)
  : wxTopLevelWindow(parent, winid, title, pos, size)
{

}

wxNode_wxTopLevelWindow::wxNode_wxTopLevelWindow(wxWindow* parent, int winid, const wxString& title, wxPoint& pos)
  : wxTopLevelWindow(parent, winid, title, pos)
{

}

wxNode_wxTopLevelWindow::wxNode_wxTopLevelWindow(wxWindow* parent, int winid, const wxString& title)
  : wxTopLevelWindow(parent, winid, title)
{

}




/*static*/ void wxNode_wxTopLevelWindow::Init(v8::Handle<v8::Object> target) {
  v8::HandleScope scope;

  v8::Local<v8::FunctionTemplate> t = v8::FunctionTemplate::New(wxNodeObject::NewFunc);
  s_ct = v8::Persistent<v8::FunctionTemplate>::New(t);
  s_ct->InstanceTemplate()->SetInternalFieldCount(2);
  s_ct->SetClassName(v8::String::NewSymbol("TopLevelWindow"));

  NODE_SET_PROTOTYPE_METHOD(s_ct, "init", _init);
  AddMethods(s_ct);

  target->Set(v8::String::NewSymbol("TopLevelWindow"), s_ct->GetFunction());
}

/*static*/ void wxNode_wxTopLevelWindow::AddMethods(v8::Handle<v8::FunctionTemplate> target) {
  wxNode_wxNavigationEnabled::AddMethods(target);
  NODE_SET_PROTOTYPE_METHOD(target, "maximize", _Maximize);
  NODE_SET_PROTOTYPE_METHOD(target, "restore", _Restore);
  NODE_SET_PROTOTYPE_METHOD(target, "iconize", _Iconize);
  NODE_SET_PROTOTYPE_METHOD(target, "isMaximized", _IsMaximized);
  NODE_SET_PROTOTYPE_METHOD(target, "isAlwaysMaximized", _IsAlwaysMaximized);
  NODE_SET_PROTOTYPE_METHOD(target, "isIconized", _IsIconized);
  NODE_SET_PROTOTYPE_METHOD(target, "getIcon", _GetIcon);
  NODE_SET_PROTOTYPE_METHOD(target, "getIcons", _GetIcons);
  NODE_SET_PROTOTYPE_METHOD(target, "setIcon", _SetIcon);
  NODE_SET_PROTOTYPE_METHOD(target, "setIcons", _SetIcons);
  NODE_SET_PROTOTYPE_METHOD(target, "showFullScreen", _ShowFullScreen);
  NODE_SET_PROTOTYPE_METHOD(target, "showWithoutActivating", _ShowWithoutActivating);
  NODE_SET_PROTOTYPE_METHOD(target, "isFullScreen", _IsFullScreen);
  NODE_SET_PROTOTYPE_METHOD(target, "setTitle", _SetTitle);
  NODE_SET_PROTOTYPE_METHOD(target, "getTitle", _GetTitle);
  NODE_SET_PROTOTYPE_METHOD(target, "enableCloseButton", _EnableCloseButton);
  NODE_SET_PROTOTYPE_METHOD(target, "requestUserAttention", _RequestUserAttention);
  NODE_SET_PROTOTYPE_METHOD(target, "isActive", _IsActive);
  NODE_SET_PROTOTYPE_METHOD(target, "shouldPreventAppExit", _ShouldPreventAppExit);
  NODE_SET_PROTOTYPE_METHOD(target, "centreOnScreen", _CentreOnScreen);
  NODE_SET_PROTOTYPE_METHOD(target, "centerOnScreen", _CenterOnScreen);
  NODE_SET_METHOD(target, "getDefaultSize", _GetDefaultSize);
  NODE_SET_PROTOTYPE_METHOD(target, "getDefaultItem", _GetDefaultItem);
  NODE_SET_PROTOTYPE_METHOD(target, "setDefaultItem", _SetDefaultItem);
  NODE_SET_PROTOTYPE_METHOD(target, "getTmpDefaultItem", _GetTmpDefaultItem);
  NODE_SET_PROTOTYPE_METHOD(target, "setTmpDefaultItem", _SetTmpDefaultItem);
  NODE_SET_PROTOTYPE_METHOD(target, "destroy", _Destroy);
  NODE_SET_PROTOTYPE_METHOD(target, "isTopLevel", _IsTopLevel);
  NODE_SET_PROTOTYPE_METHOD(target, "isTopNavigationDomain", _IsTopNavigationDomain);
  NODE_SET_PROTOTYPE_METHOD(target, "isVisible", _IsVisible);
  NODE_SET_PROTOTYPE_METHOD(target, "onCloseWindow", _OnCloseWindow);
  NODE_SET_PROTOTYPE_METHOD(target, "onSize", _OnSize);
  NODE_SET_PROTOTYPE_METHOD(target, "getRectForTopLevelChildren", _GetRectForTopLevelChildren);
  NODE_SET_PROTOTYPE_METHOD(target, "onActivate", _OnActivate);
  NODE_SET_PROTOTYPE_METHOD(target, "doUpdateWindowUI", _DoUpdateWindowUI);
  NODE_SET_PROTOTYPE_METHOD(target, "setMinSize", _SetMinSize);
  NODE_SET_PROTOTYPE_METHOD(target, "setMaxSize", _SetMaxSize);
  NODE_SET_PROTOTYPE_METHOD(target, "oSXSetModified", _OSXSetModified);
  NODE_SET_PROTOTYPE_METHOD(target, "oSXIsModified", _OSXIsModified);
  
  
}

/*static*/ v8::Handle<v8::Value> wxNode_wxTopLevelWindow::New(const wxNode_wxTopLevelWindow* obj) {
  v8::HandleScope scope;

  if(obj == NULL) {
    return scope.Close(v8::Null());
  }
  
  v8::Local<v8::FunctionTemplate> returnObjFt = v8::FunctionTemplate::New(wxNodeObject::NewFunc);
  returnObjFt->InstanceTemplate()->SetInternalFieldCount(2);
  returnObjFt->SetClassName(v8::String::NewSymbol("TopLevelWindow"));
  wxNode_wxTopLevelWindow::AddMethods(returnObjFt);

  v8::Local<v8::Function> returnObjFn = returnObjFt->GetFunction();
  v8::Handle<v8::Value> returnObjArgs[0];
  v8::Local<v8::Object> returnObj = returnObjFn->CallAsConstructor(0, returnObjArgs)->ToObject();
  returnObj->SetPointerInInternalField(0, (void*)obj);
  NodeExEvtHandlerImpl* evtHandler = dynamic_cast<NodeExEvtHandlerImpl*>((wxNode_wxTopLevelWindow*)obj);
  returnObj->SetPointerInInternalField(1, evtHandler);

  return scope.Close(returnObj);
}

/*static*/ v8::Handle<v8::Value> wxNode_wxTopLevelWindow::New(const wxTopLevelWindow* obj) {
  v8::HandleScope scope;

  if(obj == NULL) {
    return scope.Close(v8::Null());
  }
  
  v8::Local<v8::FunctionTemplate> returnObjFt = v8::FunctionTemplate::New(wxNodeObject::NewFunc);
  returnObjFt->InstanceTemplate()->SetInternalFieldCount(2);
  returnObjFt->SetClassName(v8::String::NewSymbol("TopLevelWindow"));
  wxNode_wxTopLevelWindow::AddMethods(returnObjFt);

  v8::Local<v8::Function> returnObjFn = returnObjFt->GetFunction();
  v8::Handle<v8::Value> returnObjArgs[0];
  v8::Local<v8::Object> returnObj = returnObjFn->CallAsConstructor(0, returnObjArgs)->ToObject();
  returnObj->SetPointerInInternalField(0, (void*)obj);
  NodeExEvtHandlerImplWrap* wrap = new NodeExEvtHandlerImplWrap(returnObj);
  NodeExEvtHandlerImpl* evtHandler = dynamic_cast<NodeExEvtHandlerImpl*>(wrap);
  returnObj->SetPointerInInternalField(1, evtHandler);

  return scope.Close(returnObj);
}

/*static*/ v8::Handle<v8::Value> wxNode_wxTopLevelWindow::NewCopy(const wxTopLevelWindow& obj) {
  v8::HandleScope scope;
  wxNode_wxTopLevelWindow* returnVal = new wxNode_wxTopLevelWindow();
  memcpy(dynamic_cast<wxTopLevelWindow*>(returnVal), &obj, sizeof(wxTopLevelWindow));
  return scope.Close(New(returnVal));

}

/*static*/ bool wxNode_wxTopLevelWindow::AssignableFrom(const v8::Handle<v8::String>& className) {
  v8::String::AsciiValue classNameStr(className);
  return AssignableFrom(*classNameStr);
}

/*static*/ bool wxNode_wxTopLevelWindow::AssignableFrom(const char* className) {
  if(!strcmp("TopLevelWindow", className)) { return true; }
  
  if(!strcmp("TopLevelWindowGTK", className)) { return true; }

  if(!strcmp("TopLevelWindow", className)) { return true; }

  if(!strcmp("NativeContainerWindow", className)) { return true; }
  if(!strcmp("FrameBase", className)) { return true; }

  if(!strcmp("Frame", className)) { return true; }

  if(!strcmp("PreviewFrame", className)) { return true; }
  if(!strcmp("AuiMDIParentFrame", className)) { return true; }
  if(!strcmp("DocChildFrameAny<wxFrame,wxFrame>", className)) { return true; }

  if(!strcmp("DocChildFrame", className)) { return true; }
  if(!strcmp("SplashScreen", className)) { return true; }
  if(!strcmp("HtmlHelpFrame", className)) { return true; }
  if(!strcmp("MDIChildFrameBase", className)) { return true; }

  if(!strcmp("TDIChildFrame", className)) { return true; }

  if(!strcmp("MDIChildFrame", className)) { return true; }

  if(!strcmp("DocChildFrameAny<wxMDIChildFrame,wxMDIParentFrame>", className)) { return true; }

  if(!strcmp("DocMDIChildFrame", className)) { return true; }
  if(!strcmp("DocParentFrameAny<wxFrame>", className)) { return true; }

  if(!strcmp("DocParentFrame", className)) { return true; }
  if(!strcmp("MiniFrame", className)) { return true; }

  if(!strcmp("AuiFloatingFrame", className)) { return true; }
  if(!strcmp("MDIParentFrameBase", className)) { return true; }

  if(!strcmp("MDIParentFrame", className)) { return true; }

  if(!strcmp("DocParentFrameAny<wxMDIParentFrame>", className)) { return true; }

  if(!strcmp("DocMDIParentFrame", className)) { return true; }
  if(!strcmp("DialogBase", className)) { return true; }

  if(!strcmp("Dialog", className)) { return true; }

  if(!strcmp("FontDialogBase", className)) { return true; }

  if(!strcmp("FontDialog", className)) { return true; }
  if(!strcmp("RearrangeDialog", className)) { return true; }
  if(!strcmp("DirDialogBase", className)) { return true; }

  if(!strcmp("DirDialog", className)) { return true; }
  if(!strcmp("WizardBase", className)) { return true; }

  if(!strcmp("Wizard", className)) { return true; }
  if(!strcmp("MessageDialogBase", className)) { return true; }

  if(!strcmp("MessageDialog", className)) { return true; }
  if(!strcmp("GenericMessageDialog", className)) { return true; }

  if(!strcmp("RichMessageDialogBase", className)) { return true; }

  if(!strcmp("GenericRichMessageDialog", className)) { return true; }

  if(!strcmp("RichMessageDialog", className)) { return true; }
  if(!strcmp("ColourDialog", className)) { return true; }
  if(!strcmp("HtmlHelpDialog", className)) { return true; }
  if(!strcmp("FindReplaceDialogBase", className)) { return true; }

  if(!strcmp("FindReplaceDialog", className)) { return true; }
  if(!strcmp("PrintAbortDialog", className)) { return true; }
  if(!strcmp("AnyChoiceDialog", className)) { return true; }

  if(!strcmp("SingleChoiceDialog", className)) { return true; }
  if(!strcmp("MultiChoiceDialog", className)) { return true; }
  if(!strcmp("TextEntryDialog", className)) { return true; }

  if(!strcmp("PasswordEntryDialog", className)) { return true; }
  if(!strcmp("RichTextStyleOrganiserDialog", className)) { return true; }
  if(!strcmp("PrintDialogBase", className)) { return true; }
  if(!strcmp("PageSetupDialogBase", className)) { return true; }
  if(!strcmp("SymbolPickerDialog", className)) { return true; }
  if(!strcmp("FileDialogBase", className)) { return true; }

  if(!strcmp("FileDialog", className)) { return true; }
  if(!strcmp("NumberEntryDialog", className)) { return true; }
  if(!strcmp("PropertySheetDialog", className)) { return true; }

  if(!strcmp("RichTextFormattingDialog", className)) { return true; }
  if(!strcmp("GenericProgressDialog", className)) { return true; }

  if(!strcmp("ProgressDialog", className)) { return true; }


  return false;
}

/*static*/ v8::Handle<v8::Value> wxNode_wxTopLevelWindow::_init(const v8::Arguments& args) {
  v8::HandleScope scope;

  
  
  /*
   * id: _21172
   */
  if(args.Length() == 0) {
    

    wxNode_wxTopLevelWindow *self = new wxNode_wxTopLevelWindow();
    NodeExEvtHandlerImpl* evtHandler = dynamic_cast<NodeExEvtHandlerImpl*>(self);
    self->wrap(args.This(), self, evtHandler);
    return args.This();
  }
  
  /*
   * id: _21173
   */
  if(args.Length() == 7 && (args[0]->IsNull() || (args[0]->IsObject() && wxNode_wxWindow::AssignableFrom(args[0]->ToObject()->GetConstructorName()))) && args[1]->IsNumber() && args[2]->IsString() && (args[3]->IsNull() || (args[3]->IsObject() && wxNode_wxPoint::AssignableFrom(args[3]->ToObject()->GetConstructorName()))) && (args[4]->IsNull() || (args[4]->IsObject() && wxNode_wxSize::AssignableFrom(args[4]->ToObject()->GetConstructorName()))) && args[5]->IsNumber() && args[6]->IsString()) {
    wxNode_wxWindow* parent = args[0]->IsNull() ? NULL : wxNodeObject::unwrap<wxNode_wxWindow>(args[0]->ToObject()); /* type: _1000 * */
    int winid = (int)args[1]->ToInt32()->Value(); /* type: _8725  */
    v8::String::AsciiValue title(args[2]->ToString()); /* type: _14975  */
    wxNode_wxPoint* pos = args[3]->IsNull() ? NULL : wxNodeObject::unwrap<wxNode_wxPoint>(args[3]->ToObject()); /* type: _20518  */
    wxNode_wxSize* size = args[4]->IsNull() ? NULL : wxNodeObject::unwrap<wxNode_wxSize>(args[4]->ToObject()); /* type: _20628  */
    long int style = (long int)args[5]->ToInt32()->Value(); /* type: _592  */
    v8::String::AsciiValue name(args[6]->ToString()); /* type: _14975  */
    

    wxNode_wxTopLevelWindow *self = new wxNode_wxTopLevelWindow(parent, winid, *title, *pos, *size, style, *name);
    NodeExEvtHandlerImpl* evtHandler = dynamic_cast<NodeExEvtHandlerImpl*>(self);
    self->wrap(args.This(), self, evtHandler);
    return args.This();
  }
  
  /*
   * id: _21173
   */
  if(args.Length() == 6 && (args[0]->IsNull() || (args[0]->IsObject() && wxNode_wxWindow::AssignableFrom(args[0]->ToObject()->GetConstructorName()))) && args[1]->IsNumber() && args[2]->IsString() && (args[3]->IsNull() || (args[3]->IsObject() && wxNode_wxPoint::AssignableFrom(args[3]->ToObject()->GetConstructorName()))) && (args[4]->IsNull() || (args[4]->IsObject() && wxNode_wxSize::AssignableFrom(args[4]->ToObject()->GetConstructorName()))) && args[5]->IsNumber()) {
    wxNode_wxWindow* parent = args[0]->IsNull() ? NULL : wxNodeObject::unwrap<wxNode_wxWindow>(args[0]->ToObject()); /* type: _1000 * */
    int winid = (int)args[1]->ToInt32()->Value(); /* type: _8725  */
    v8::String::AsciiValue title(args[2]->ToString()); /* type: _14975  */
    wxNode_wxPoint* pos = args[3]->IsNull() ? NULL : wxNodeObject::unwrap<wxNode_wxPoint>(args[3]->ToObject()); /* type: _20518  */
    wxNode_wxSize* size = args[4]->IsNull() ? NULL : wxNodeObject::unwrap<wxNode_wxSize>(args[4]->ToObject()); /* type: _20628  */
    long int style = (long int)args[5]->ToInt32()->Value(); /* type: _592  */
    

    wxNode_wxTopLevelWindow *self = new wxNode_wxTopLevelWindow(parent, winid, *title, *pos, *size, style);
    NodeExEvtHandlerImpl* evtHandler = dynamic_cast<NodeExEvtHandlerImpl*>(self);
    self->wrap(args.This(), self, evtHandler);
    return args.This();
  }
  
  /*
   * id: _21173
   */
  if(args.Length() == 5 && (args[0]->IsNull() || (args[0]->IsObject() && wxNode_wxWindow::AssignableFrom(args[0]->ToObject()->GetConstructorName()))) && args[1]->IsNumber() && args[2]->IsString() && (args[3]->IsNull() || (args[3]->IsObject() && wxNode_wxPoint::AssignableFrom(args[3]->ToObject()->GetConstructorName()))) && (args[4]->IsNull() || (args[4]->IsObject() && wxNode_wxSize::AssignableFrom(args[4]->ToObject()->GetConstructorName())))) {
    wxNode_wxWindow* parent = args[0]->IsNull() ? NULL : wxNodeObject::unwrap<wxNode_wxWindow>(args[0]->ToObject()); /* type: _1000 * */
    int winid = (int)args[1]->ToInt32()->Value(); /* type: _8725  */
    v8::String::AsciiValue title(args[2]->ToString()); /* type: _14975  */
    wxNode_wxPoint* pos = args[3]->IsNull() ? NULL : wxNodeObject::unwrap<wxNode_wxPoint>(args[3]->ToObject()); /* type: _20518  */
    wxNode_wxSize* size = args[4]->IsNull() ? NULL : wxNodeObject::unwrap<wxNode_wxSize>(args[4]->ToObject()); /* type: _20628  */
    

    wxNode_wxTopLevelWindow *self = new wxNode_wxTopLevelWindow(parent, winid, *title, *pos, *size);
    NodeExEvtHandlerImpl* evtHandler = dynamic_cast<NodeExEvtHandlerImpl*>(self);
    self->wrap(args.This(), self, evtHandler);
    return args.This();
  }
  
  /*
   * id: _21173
   */
  if(args.Length() == 4 && (args[0]->IsNull() || (args[0]->IsObject() && wxNode_wxWindow::AssignableFrom(args[0]->ToObject()->GetConstructorName()))) && args[1]->IsNumber() && args[2]->IsString() && (args[3]->IsNull() || (args[3]->IsObject() && wxNode_wxPoint::AssignableFrom(args[3]->ToObject()->GetConstructorName())))) {
    wxNode_wxWindow* parent = args[0]->IsNull() ? NULL : wxNodeObject::unwrap<wxNode_wxWindow>(args[0]->ToObject()); /* type: _1000 * */
    int winid = (int)args[1]->ToInt32()->Value(); /* type: _8725  */
    v8::String::AsciiValue title(args[2]->ToString()); /* type: _14975  */
    wxNode_wxPoint* pos = args[3]->IsNull() ? NULL : wxNodeObject::unwrap<wxNode_wxPoint>(args[3]->ToObject()); /* type: _20518  */
    

    wxNode_wxTopLevelWindow *self = new wxNode_wxTopLevelWindow(parent, winid, *title, *pos);
    NodeExEvtHandlerImpl* evtHandler = dynamic_cast<NodeExEvtHandlerImpl*>(self);
    self->wrap(args.This(), self, evtHandler);
    return args.This();
  }
  
  /*
   * id: _21173
   */
  if(args.Length() == 3 && (args[0]->IsNull() || (args[0]->IsObject() && wxNode_wxWindow::AssignableFrom(args[0]->ToObject()->GetConstructorName()))) && args[1]->IsNumber() && args[2]->IsString()) {
    wxNode_wxWindow* parent = args[0]->IsNull() ? NULL : wxNodeObject::unwrap<wxNode_wxWindow>(args[0]->ToObject()); /* type: _1000 * */
    int winid = (int)args[1]->ToInt32()->Value(); /* type: _8725  */
    v8::String::AsciiValue title(args[2]->ToString()); /* type: _14975  */
    

    wxNode_wxTopLevelWindow *self = new wxNode_wxTopLevelWindow(parent, winid, *title);
    NodeExEvtHandlerImpl* evtHandler = dynamic_cast<NodeExEvtHandlerImpl*>(self);
    self->wrap(args.This(), self, evtHandler);
    return args.This();
  }
  
  

  std::ostringstream errStr;
  errStr << "Could not find matching constructor for arguments (class name: wxTopLevelWindow).\n";
  errStr << "  arg count: " << args.Length() << "\n";
  for(int i = 0; i < args.Length(); i++) {
    v8::String::AsciiValue argStr(args[i]);
    errStr << "  arg[" << i << "]: " << *argStr << "\n";
  }
  return v8::ThrowException(v8::Exception::TypeError(v8::String::New(errStr.str().c_str())));
}


/*static*/ v8::Handle<v8::Value> wxNode_wxTopLevelWindow::_Maximize(const v8::Arguments& args) {
  v8::HandleScope scope;
  wxNode_wxTopLevelWindow* self = unwrap<wxNode_wxTopLevelWindow>(args.This());

  
  /*
   * id: _39098
   */
  if(args.Length() == 1 && args[0]->IsBoolean()) {
    bool maximize = args[0]->ToBoolean()->Value(); /* type: _14830  */
    

    self->Maximize(maximize);

    return v8::Undefined();
  }
  
  /*
   * id: _39098
   */
  if(args.Length() == 0) {
    

    self->Maximize();

    return v8::Undefined();
  }
  

  std::ostringstream errStr;
  errStr << "Could not find matching method for arguments (method name: wxTopLevelWindow::Maximize).\n";
  errStr << "  arg count: " << args.Length() << "\n";
  for(int i = 0; i < args.Length(); i++) {
    v8::String::AsciiValue argStr(args[i]);
    errStr << "  arg[" << i << "]: " << *argStr << "\n";
  }
  return v8::ThrowException(v8::Exception::TypeError(v8::String::New(errStr.str().c_str())));
}

/*static*/ v8::Handle<v8::Value> wxNode_wxTopLevelWindow::_Restore(const v8::Arguments& args) {
  v8::HandleScope scope;
  wxNode_wxTopLevelWindow* self = unwrap<wxNode_wxTopLevelWindow>(args.This());

  
  /*
   * id: _39099
   */
  if(args.Length() == 0) {
    

    self->Restore();

    return v8::Undefined();
  }
  

  std::ostringstream errStr;
  errStr << "Could not find matching method for arguments (method name: wxTopLevelWindow::Restore).\n";
  errStr << "  arg count: " << args.Length() << "\n";
  for(int i = 0; i < args.Length(); i++) {
    v8::String::AsciiValue argStr(args[i]);
    errStr << "  arg[" << i << "]: " << *argStr << "\n";
  }
  return v8::ThrowException(v8::Exception::TypeError(v8::String::New(errStr.str().c_str())));
}

/*static*/ v8::Handle<v8::Value> wxNode_wxTopLevelWindow::_Iconize(const v8::Arguments& args) {
  v8::HandleScope scope;
  wxNode_wxTopLevelWindow* self = unwrap<wxNode_wxTopLevelWindow>(args.This());

  
  /*
   * id: _39100
   */
  if(args.Length() == 1 && args[0]->IsBoolean()) {
    bool iconize = args[0]->ToBoolean()->Value(); /* type: _14830  */
    

    self->Iconize(iconize);

    return v8::Undefined();
  }
  
  /*
   * id: _39100
   */
  if(args.Length() == 0) {
    

    self->Iconize();

    return v8::Undefined();
  }
  

  std::ostringstream errStr;
  errStr << "Could not find matching method for arguments (method name: wxTopLevelWindow::Iconize).\n";
  errStr << "  arg count: " << args.Length() << "\n";
  for(int i = 0; i < args.Length(); i++) {
    v8::String::AsciiValue argStr(args[i]);
    errStr << "  arg[" << i << "]: " << *argStr << "\n";
  }
  return v8::ThrowException(v8::Exception::TypeError(v8::String::New(errStr.str().c_str())));
}

/*static*/ v8::Handle<v8::Value> wxNode_wxTopLevelWindow::_IsMaximized(const v8::Arguments& args) {
  v8::HandleScope scope;
  wxNode_wxTopLevelWindow* self = unwrap<wxNode_wxTopLevelWindow>(args.This());

  
  /*
   * id: _39101
   */
  if(args.Length() == 0) {
    

    bool returnVal = self->IsMaximized();

    return scope.Close(v8::Boolean::New(returnVal));
  }
  

  std::ostringstream errStr;
  errStr << "Could not find matching method for arguments (method name: wxTopLevelWindow::IsMaximized).\n";
  errStr << "  arg count: " << args.Length() << "\n";
  for(int i = 0; i < args.Length(); i++) {
    v8::String::AsciiValue argStr(args[i]);
    errStr << "  arg[" << i << "]: " << *argStr << "\n";
  }
  return v8::ThrowException(v8::Exception::TypeError(v8::String::New(errStr.str().c_str())));
}

/*static*/ v8::Handle<v8::Value> wxNode_wxTopLevelWindow::_IsAlwaysMaximized(const v8::Arguments& args) {
  v8::HandleScope scope;
  wxNode_wxTopLevelWindow* self = unwrap<wxNode_wxTopLevelWindow>(args.This());

  
  /*
   * id: _39102
   */
  if(args.Length() == 0) {
    

    bool returnVal = self->IsAlwaysMaximized();

    return scope.Close(v8::Boolean::New(returnVal));
  }
  

  std::ostringstream errStr;
  errStr << "Could not find matching method for arguments (method name: wxTopLevelWindow::IsAlwaysMaximized).\n";
  errStr << "  arg count: " << args.Length() << "\n";
  for(int i = 0; i < args.Length(); i++) {
    v8::String::AsciiValue argStr(args[i]);
    errStr << "  arg[" << i << "]: " << *argStr << "\n";
  }
  return v8::ThrowException(v8::Exception::TypeError(v8::String::New(errStr.str().c_str())));
}

/*static*/ v8::Handle<v8::Value> wxNode_wxTopLevelWindow::_IsIconized(const v8::Arguments& args) {
  v8::HandleScope scope;
  wxNode_wxTopLevelWindow* self = unwrap<wxNode_wxTopLevelWindow>(args.This());

  
  /*
   * id: _39103
   */
  if(args.Length() == 0) {
    

    bool returnVal = self->IsIconized();

    return scope.Close(v8::Boolean::New(returnVal));
  }
  

  std::ostringstream errStr;
  errStr << "Could not find matching method for arguments (method name: wxTopLevelWindow::IsIconized).\n";
  errStr << "  arg count: " << args.Length() << "\n";
  for(int i = 0; i < args.Length(); i++) {
    v8::String::AsciiValue argStr(args[i]);
    errStr << "  arg[" << i << "]: " << *argStr << "\n";
  }
  return v8::ThrowException(v8::Exception::TypeError(v8::String::New(errStr.str().c_str())));
}

/*static*/ v8::Handle<v8::Value> wxNode_wxTopLevelWindow::_GetIcon(const v8::Arguments& args) {
  v8::HandleScope scope;
  wxNode_wxTopLevelWindow* self = unwrap<wxNode_wxTopLevelWindow>(args.This());

  
  /*
   * id: _39104
   */
  if(args.Length() == 0) {
    

    wxIcon returnVal = self->GetIcon();

    return scope.Close(wxNode_wxIcon::NewCopy(returnVal));
  }
  

  std::ostringstream errStr;
  errStr << "Could not find matching method for arguments (method name: wxTopLevelWindow::GetIcon).\n";
  errStr << "  arg count: " << args.Length() << "\n";
  for(int i = 0; i < args.Length(); i++) {
    v8::String::AsciiValue argStr(args[i]);
    errStr << "  arg[" << i << "]: " << *argStr << "\n";
  }
  return v8::ThrowException(v8::Exception::TypeError(v8::String::New(errStr.str().c_str())));
}

/*static*/ v8::Handle<v8::Value> wxNode_wxTopLevelWindow::_GetIcons(const v8::Arguments& args) {
  v8::HandleScope scope;
  wxNode_wxTopLevelWindow* self = unwrap<wxNode_wxTopLevelWindow>(args.This());

  
  /*
   * id: _39105
   */
  if(args.Length() == 0) {
    

    wxIconBundle returnVal = self->GetIcons();

    return scope.Close(wxNode_wxIconBundle::NewCopy(returnVal));
  }
  

  std::ostringstream errStr;
  errStr << "Could not find matching method for arguments (method name: wxTopLevelWindow::GetIcons).\n";
  errStr << "  arg count: " << args.Length() << "\n";
  for(int i = 0; i < args.Length(); i++) {
    v8::String::AsciiValue argStr(args[i]);
    errStr << "  arg[" << i << "]: " << *argStr << "\n";
  }
  return v8::ThrowException(v8::Exception::TypeError(v8::String::New(errStr.str().c_str())));
}

/*static*/ v8::Handle<v8::Value> wxNode_wxTopLevelWindow::_SetIcon(const v8::Arguments& args) {
  v8::HandleScope scope;
  wxNode_wxTopLevelWindow* self = unwrap<wxNode_wxTopLevelWindow>(args.This());

  
  /*
   * id: _39106
   */
  if(args.Length() == 1 && (args[0]->IsNull() || (args[0]->IsObject() && wxNode_wxIcon::AssignableFrom(args[0]->ToObject()->GetConstructorName())))) {
    wxNode_wxIcon* icon = args[0]->IsNull() ? NULL : wxNodeObject::unwrap<wxNode_wxIcon>(args[0]->ToObject()); /* type: _15643  */
    

    self->SetIcon(*icon);

    return v8::Undefined();
  }
  

  std::ostringstream errStr;
  errStr << "Could not find matching method for arguments (method name: wxTopLevelWindow::SetIcon).\n";
  errStr << "  arg count: " << args.Length() << "\n";
  for(int i = 0; i < args.Length(); i++) {
    v8::String::AsciiValue argStr(args[i]);
    errStr << "  arg[" << i << "]: " << *argStr << "\n";
  }
  return v8::ThrowException(v8::Exception::TypeError(v8::String::New(errStr.str().c_str())));
}

/*static*/ v8::Handle<v8::Value> wxNode_wxTopLevelWindow::_SetIcons(const v8::Arguments& args) {
  v8::HandleScope scope;
  wxNode_wxTopLevelWindow* self = unwrap<wxNode_wxTopLevelWindow>(args.This());

  
  /*
   * id: _39107
   */
  if(args.Length() == 1 && (args[0]->IsNull() || (args[0]->IsObject() && wxNode_wxIconBundle::AssignableFrom(args[0]->ToObject()->GetConstructorName())))) {
    wxNode_wxIconBundle* icons = args[0]->IsNull() ? NULL : wxNodeObject::unwrap<wxNode_wxIconBundle>(args[0]->ToObject()); /* type: _60094  */
    

    self->SetIcons(*icons);

    return v8::Undefined();
  }
  

  std::ostringstream errStr;
  errStr << "Could not find matching method for arguments (method name: wxTopLevelWindow::SetIcons).\n";
  errStr << "  arg count: " << args.Length() << "\n";
  for(int i = 0; i < args.Length(); i++) {
    v8::String::AsciiValue argStr(args[i]);
    errStr << "  arg[" << i << "]: " << *argStr << "\n";
  }
  return v8::ThrowException(v8::Exception::TypeError(v8::String::New(errStr.str().c_str())));
}

/*static*/ v8::Handle<v8::Value> wxNode_wxTopLevelWindow::_ShowFullScreen(const v8::Arguments& args) {
  v8::HandleScope scope;
  wxNode_wxTopLevelWindow* self = unwrap<wxNode_wxTopLevelWindow>(args.This());

  
  /*
   * id: _39108
   */
  if(args.Length() == 2 && args[0]->IsBoolean() && args[1]->IsNumber()) {
    bool show = args[0]->ToBoolean()->Value(); /* type: _14830  */
    long int style = (long int)args[1]->ToInt32()->Value(); /* type: _592  */
    

    bool returnVal = self->ShowFullScreen(show, style);

    return scope.Close(v8::Boolean::New(returnVal));
  }
  
  /*
   * id: _39108
   */
  if(args.Length() == 1 && args[0]->IsBoolean()) {
    bool show = args[0]->ToBoolean()->Value(); /* type: _14830  */
    

    bool returnVal = self->ShowFullScreen(show);

    return scope.Close(v8::Boolean::New(returnVal));
  }
  

  std::ostringstream errStr;
  errStr << "Could not find matching method for arguments (method name: wxTopLevelWindow::ShowFullScreen).\n";
  errStr << "  arg count: " << args.Length() << "\n";
  for(int i = 0; i < args.Length(); i++) {
    v8::String::AsciiValue argStr(args[i]);
    errStr << "  arg[" << i << "]: " << *argStr << "\n";
  }
  return v8::ThrowException(v8::Exception::TypeError(v8::String::New(errStr.str().c_str())));
}

/*static*/ v8::Handle<v8::Value> wxNode_wxTopLevelWindow::_ShowWithoutActivating(const v8::Arguments& args) {
  v8::HandleScope scope;
  wxNode_wxTopLevelWindow* self = unwrap<wxNode_wxTopLevelWindow>(args.This());

  
  /*
   * id: _39109
   */
  if(args.Length() == 0) {
    

    self->ShowWithoutActivating();

    return v8::Undefined();
  }
  

  std::ostringstream errStr;
  errStr << "Could not find matching method for arguments (method name: wxTopLevelWindow::ShowWithoutActivating).\n";
  errStr << "  arg count: " << args.Length() << "\n";
  for(int i = 0; i < args.Length(); i++) {
    v8::String::AsciiValue argStr(args[i]);
    errStr << "  arg[" << i << "]: " << *argStr << "\n";
  }
  return v8::ThrowException(v8::Exception::TypeError(v8::String::New(errStr.str().c_str())));
}

/*static*/ v8::Handle<v8::Value> wxNode_wxTopLevelWindow::_IsFullScreen(const v8::Arguments& args) {
  v8::HandleScope scope;
  wxNode_wxTopLevelWindow* self = unwrap<wxNode_wxTopLevelWindow>(args.This());

  
  /*
   * id: _39110
   */
  if(args.Length() == 0) {
    

    bool returnVal = self->IsFullScreen();

    return scope.Close(v8::Boolean::New(returnVal));
  }
  

  std::ostringstream errStr;
  errStr << "Could not find matching method for arguments (method name: wxTopLevelWindow::IsFullScreen).\n";
  errStr << "  arg count: " << args.Length() << "\n";
  for(int i = 0; i < args.Length(); i++) {
    v8::String::AsciiValue argStr(args[i]);
    errStr << "  arg[" << i << "]: " << *argStr << "\n";
  }
  return v8::ThrowException(v8::Exception::TypeError(v8::String::New(errStr.str().c_str())));
}

/*static*/ v8::Handle<v8::Value> wxNode_wxTopLevelWindow::_SetTitle(const v8::Arguments& args) {
  v8::HandleScope scope;
  wxNode_wxTopLevelWindow* self = unwrap<wxNode_wxTopLevelWindow>(args.This());

  
  /*
   * id: _39111
   */
  if(args.Length() == 1 && args[0]->IsString()) {
    v8::String::AsciiValue title(args[0]->ToString()); /* type: _14975  */
    

    self->SetTitle(*title);

    return v8::Undefined();
  }
  

  std::ostringstream errStr;
  errStr << "Could not find matching method for arguments (method name: wxTopLevelWindow::SetTitle).\n";
  errStr << "  arg count: " << args.Length() << "\n";
  for(int i = 0; i < args.Length(); i++) {
    v8::String::AsciiValue argStr(args[i]);
    errStr << "  arg[" << i << "]: " << *argStr << "\n";
  }
  return v8::ThrowException(v8::Exception::TypeError(v8::String::New(errStr.str().c_str())));
}

/*static*/ v8::Handle<v8::Value> wxNode_wxTopLevelWindow::_GetTitle(const v8::Arguments& args) {
  v8::HandleScope scope;
  wxNode_wxTopLevelWindow* self = unwrap<wxNode_wxTopLevelWindow>(args.This());

  
  /*
   * id: _39112
   */
  if(args.Length() == 0) {
    

    wxString returnVal = self->GetTitle();

    return scope.Close(v8::String::New(returnVal.mb_str()));
  }
  

  std::ostringstream errStr;
  errStr << "Could not find matching method for arguments (method name: wxTopLevelWindow::GetTitle).\n";
  errStr << "  arg count: " << args.Length() << "\n";
  for(int i = 0; i < args.Length(); i++) {
    v8::String::AsciiValue argStr(args[i]);
    errStr << "  arg[" << i << "]: " << *argStr << "\n";
  }
  return v8::ThrowException(v8::Exception::TypeError(v8::String::New(errStr.str().c_str())));
}

/*static*/ v8::Handle<v8::Value> wxNode_wxTopLevelWindow::_EnableCloseButton(const v8::Arguments& args) {
  v8::HandleScope scope;
  wxNode_wxTopLevelWindow* self = unwrap<wxNode_wxTopLevelWindow>(args.This());

  
  /*
   * id: _39113
   */
  if(args.Length() == 1 && args[0]->IsBoolean()) {
    bool arg0 = args[0]->ToBoolean()->Value(); /* type: _14830  */
    

    bool returnVal = self->EnableCloseButton(arg0);

    return scope.Close(v8::Boolean::New(returnVal));
  }
  

  std::ostringstream errStr;
  errStr << "Could not find matching method for arguments (method name: wxTopLevelWindow::EnableCloseButton).\n";
  errStr << "  arg count: " << args.Length() << "\n";
  for(int i = 0; i < args.Length(); i++) {
    v8::String::AsciiValue argStr(args[i]);
    errStr << "  arg[" << i << "]: " << *argStr << "\n";
  }
  return v8::ThrowException(v8::Exception::TypeError(v8::String::New(errStr.str().c_str())));
}

/*static*/ v8::Handle<v8::Value> wxNode_wxTopLevelWindow::_RequestUserAttention(const v8::Arguments& args) {
  v8::HandleScope scope;
  wxNode_wxTopLevelWindow* self = unwrap<wxNode_wxTopLevelWindow>(args.This());

  
  /*
   * id: _39114
   */
  if(args.Length() == 1 && args[0]->IsNumber()) {
    int flags = (int)args[0]->ToInt32()->Value(); /* type: _165  */
    

    self->RequestUserAttention(flags);

    return v8::Undefined();
  }
  
  /*
   * id: _39114
   */
  if(args.Length() == 0) {
    

    self->RequestUserAttention();

    return v8::Undefined();
  }
  

  std::ostringstream errStr;
  errStr << "Could not find matching method for arguments (method name: wxTopLevelWindow::RequestUserAttention).\n";
  errStr << "  arg count: " << args.Length() << "\n";
  for(int i = 0; i < args.Length(); i++) {
    v8::String::AsciiValue argStr(args[i]);
    errStr << "  arg[" << i << "]: " << *argStr << "\n";
  }
  return v8::ThrowException(v8::Exception::TypeError(v8::String::New(errStr.str().c_str())));
}

/*static*/ v8::Handle<v8::Value> wxNode_wxTopLevelWindow::_IsActive(const v8::Arguments& args) {
  v8::HandleScope scope;
  wxNode_wxTopLevelWindow* self = unwrap<wxNode_wxTopLevelWindow>(args.This());

  
  /*
   * id: _39115
   */
  if(args.Length() == 0) {
    

    bool returnVal = self->IsActive();

    return scope.Close(v8::Boolean::New(returnVal));
  }
  

  std::ostringstream errStr;
  errStr << "Could not find matching method for arguments (method name: wxTopLevelWindow::IsActive).\n";
  errStr << "  arg count: " << args.Length() << "\n";
  for(int i = 0; i < args.Length(); i++) {
    v8::String::AsciiValue argStr(args[i]);
    errStr << "  arg[" << i << "]: " << *argStr << "\n";
  }
  return v8::ThrowException(v8::Exception::TypeError(v8::String::New(errStr.str().c_str())));
}

/*static*/ v8::Handle<v8::Value> wxNode_wxTopLevelWindow::_ShouldPreventAppExit(const v8::Arguments& args) {
  v8::HandleScope scope;
  wxNode_wxTopLevelWindow* self = unwrap<wxNode_wxTopLevelWindow>(args.This());

  
  /*
   * id: _39116
   */
  if(args.Length() == 0) {
    

    bool returnVal = self->ShouldPreventAppExit();

    return scope.Close(v8::Boolean::New(returnVal));
  }
  

  std::ostringstream errStr;
  errStr << "Could not find matching method for arguments (method name: wxTopLevelWindow::ShouldPreventAppExit).\n";
  errStr << "  arg count: " << args.Length() << "\n";
  for(int i = 0; i < args.Length(); i++) {
    v8::String::AsciiValue argStr(args[i]);
    errStr << "  arg[" << i << "]: " << *argStr << "\n";
  }
  return v8::ThrowException(v8::Exception::TypeError(v8::String::New(errStr.str().c_str())));
}

/*static*/ v8::Handle<v8::Value> wxNode_wxTopLevelWindow::_CentreOnScreen(const v8::Arguments& args) {
  v8::HandleScope scope;
  wxNode_wxTopLevelWindow* self = unwrap<wxNode_wxTopLevelWindow>(args.This());

  
  /*
   * id: _39117
   */
  if(args.Length() == 1 && args[0]->IsNumber()) {
    int dir = (int)args[0]->ToInt32()->Value(); /* type: _165  */
    

    self->CentreOnScreen(dir);

    return v8::Undefined();
  }
  
  /*
   * id: _39117
   */
  if(args.Length() == 0) {
    

    self->CentreOnScreen();

    return v8::Undefined();
  }
  

  std::ostringstream errStr;
  errStr << "Could not find matching method for arguments (method name: wxTopLevelWindow::CentreOnScreen).\n";
  errStr << "  arg count: " << args.Length() << "\n";
  for(int i = 0; i < args.Length(); i++) {
    v8::String::AsciiValue argStr(args[i]);
    errStr << "  arg[" << i << "]: " << *argStr << "\n";
  }
  return v8::ThrowException(v8::Exception::TypeError(v8::String::New(errStr.str().c_str())));
}

/*static*/ v8::Handle<v8::Value> wxNode_wxTopLevelWindow::_CenterOnScreen(const v8::Arguments& args) {
  v8::HandleScope scope;
  wxNode_wxTopLevelWindow* self = unwrap<wxNode_wxTopLevelWindow>(args.This());

  
  /*
   * id: _39118
   */
  if(args.Length() == 1 && args[0]->IsNumber()) {
    int dir = (int)args[0]->ToInt32()->Value(); /* type: _165  */
    

    self->CenterOnScreen(dir);

    return v8::Undefined();
  }
  
  /*
   * id: _39118
   */
  if(args.Length() == 0) {
    

    self->CenterOnScreen();

    return v8::Undefined();
  }
  

  std::ostringstream errStr;
  errStr << "Could not find matching method for arguments (method name: wxTopLevelWindow::CenterOnScreen).\n";
  errStr << "  arg count: " << args.Length() << "\n";
  for(int i = 0; i < args.Length(); i++) {
    v8::String::AsciiValue argStr(args[i]);
    errStr << "  arg[" << i << "]: " << *argStr << "\n";
  }
  return v8::ThrowException(v8::Exception::TypeError(v8::String::New(errStr.str().c_str())));
}

/*static*/ v8::Handle<v8::Value> wxNode_wxTopLevelWindow::_GetDefaultSize(const v8::Arguments& args) {
  v8::HandleScope scope;
  wxNode_wxTopLevelWindow* self = unwrap<wxNode_wxTopLevelWindow>(args.This());

  
  /*
   * id: _39119
   */
  if(args.Length() == 0) {
    

    wxSize returnVal = wxTopLevelWindow::GetDefaultSize();

    return scope.Close(wxNode_wxSize::NewCopy(returnVal));
  }
  

  std::ostringstream errStr;
  errStr << "Could not find matching method for arguments (method name: wxTopLevelWindow::GetDefaultSize).\n";
  errStr << "  arg count: " << args.Length() << "\n";
  for(int i = 0; i < args.Length(); i++) {
    v8::String::AsciiValue argStr(args[i]);
    errStr << "  arg[" << i << "]: " << *argStr << "\n";
  }
  return v8::ThrowException(v8::Exception::TypeError(v8::String::New(errStr.str().c_str())));
}

/*static*/ v8::Handle<v8::Value> wxNode_wxTopLevelWindow::_GetDefaultItem(const v8::Arguments& args) {
  v8::HandleScope scope;
  wxNode_wxTopLevelWindow* self = unwrap<wxNode_wxTopLevelWindow>(args.This());

  
  /*
   * id: _39120
   */
  if(args.Length() == 0) {
    

    const wxWindow* returnVal = self->GetDefaultItem();

    return scope.Close(wxNode_wxWindow::New(returnVal));
  }
  

  std::ostringstream errStr;
  errStr << "Could not find matching method for arguments (method name: wxTopLevelWindow::GetDefaultItem).\n";
  errStr << "  arg count: " << args.Length() << "\n";
  for(int i = 0; i < args.Length(); i++) {
    v8::String::AsciiValue argStr(args[i]);
    errStr << "  arg[" << i << "]: " << *argStr << "\n";
  }
  return v8::ThrowException(v8::Exception::TypeError(v8::String::New(errStr.str().c_str())));
}

/*static*/ v8::Handle<v8::Value> wxNode_wxTopLevelWindow::_SetDefaultItem(const v8::Arguments& args) {
  v8::HandleScope scope;
  wxNode_wxTopLevelWindow* self = unwrap<wxNode_wxTopLevelWindow>(args.This());

  
  /*
   * id: _39121
   */
  if(args.Length() == 1 && (args[0]->IsNull() || (args[0]->IsObject() && wxNode_wxWindow::AssignableFrom(args[0]->ToObject()->GetConstructorName())))) {
    wxNode_wxWindow* win = args[0]->IsNull() ? NULL : wxNodeObject::unwrap<wxNode_wxWindow>(args[0]->ToObject()); /* type: _1000 * */
    

    const wxWindow* returnVal = self->SetDefaultItem(win);

    return scope.Close(wxNode_wxWindow::New(returnVal));
  }
  

  std::ostringstream errStr;
  errStr << "Could not find matching method for arguments (method name: wxTopLevelWindow::SetDefaultItem).\n";
  errStr << "  arg count: " << args.Length() << "\n";
  for(int i = 0; i < args.Length(); i++) {
    v8::String::AsciiValue argStr(args[i]);
    errStr << "  arg[" << i << "]: " << *argStr << "\n";
  }
  return v8::ThrowException(v8::Exception::TypeError(v8::String::New(errStr.str().c_str())));
}

/*static*/ v8::Handle<v8::Value> wxNode_wxTopLevelWindow::_GetTmpDefaultItem(const v8::Arguments& args) {
  v8::HandleScope scope;
  wxNode_wxTopLevelWindow* self = unwrap<wxNode_wxTopLevelWindow>(args.This());

  
  /*
   * id: _39122
   */
  if(args.Length() == 0) {
    

    const wxWindow* returnVal = self->GetTmpDefaultItem();

    return scope.Close(wxNode_wxWindow::New(returnVal));
  }
  

  std::ostringstream errStr;
  errStr << "Could not find matching method for arguments (method name: wxTopLevelWindow::GetTmpDefaultItem).\n";
  errStr << "  arg count: " << args.Length() << "\n";
  for(int i = 0; i < args.Length(); i++) {
    v8::String::AsciiValue argStr(args[i]);
    errStr << "  arg[" << i << "]: " << *argStr << "\n";
  }
  return v8::ThrowException(v8::Exception::TypeError(v8::String::New(errStr.str().c_str())));
}

/*static*/ v8::Handle<v8::Value> wxNode_wxTopLevelWindow::_SetTmpDefaultItem(const v8::Arguments& args) {
  v8::HandleScope scope;
  wxNode_wxTopLevelWindow* self = unwrap<wxNode_wxTopLevelWindow>(args.This());

  
  /*
   * id: _39123
   */
  if(args.Length() == 1 && (args[0]->IsNull() || (args[0]->IsObject() && wxNode_wxWindow::AssignableFrom(args[0]->ToObject()->GetConstructorName())))) {
    wxNode_wxWindow* win = args[0]->IsNull() ? NULL : wxNodeObject::unwrap<wxNode_wxWindow>(args[0]->ToObject()); /* type: _1000 * */
    

    const wxWindow* returnVal = self->SetTmpDefaultItem(win);

    return scope.Close(wxNode_wxWindow::New(returnVal));
  }
  

  std::ostringstream errStr;
  errStr << "Could not find matching method for arguments (method name: wxTopLevelWindow::SetTmpDefaultItem).\n";
  errStr << "  arg count: " << args.Length() << "\n";
  for(int i = 0; i < args.Length(); i++) {
    v8::String::AsciiValue argStr(args[i]);
    errStr << "  arg[" << i << "]: " << *argStr << "\n";
  }
  return v8::ThrowException(v8::Exception::TypeError(v8::String::New(errStr.str().c_str())));
}

/*static*/ v8::Handle<v8::Value> wxNode_wxTopLevelWindow::_Destroy(const v8::Arguments& args) {
  v8::HandleScope scope;
  wxNode_wxTopLevelWindow* self = unwrap<wxNode_wxTopLevelWindow>(args.This());

  
  /*
   * id: _39124
   */
  if(args.Length() == 0) {
    

    bool returnVal = self->Destroy();

    return scope.Close(v8::Boolean::New(returnVal));
  }
  

  std::ostringstream errStr;
  errStr << "Could not find matching method for arguments (method name: wxTopLevelWindow::Destroy).\n";
  errStr << "  arg count: " << args.Length() << "\n";
  for(int i = 0; i < args.Length(); i++) {
    v8::String::AsciiValue argStr(args[i]);
    errStr << "  arg[" << i << "]: " << *argStr << "\n";
  }
  return v8::ThrowException(v8::Exception::TypeError(v8::String::New(errStr.str().c_str())));
}

/*static*/ v8::Handle<v8::Value> wxNode_wxTopLevelWindow::_IsTopLevel(const v8::Arguments& args) {
  v8::HandleScope scope;
  wxNode_wxTopLevelWindow* self = unwrap<wxNode_wxTopLevelWindow>(args.This());

  
  /*
   * id: _39125
   */
  if(args.Length() == 0) {
    

    bool returnVal = self->IsTopLevel();

    return scope.Close(v8::Boolean::New(returnVal));
  }
  

  std::ostringstream errStr;
  errStr << "Could not find matching method for arguments (method name: wxTopLevelWindow::IsTopLevel).\n";
  errStr << "  arg count: " << args.Length() << "\n";
  for(int i = 0; i < args.Length(); i++) {
    v8::String::AsciiValue argStr(args[i]);
    errStr << "  arg[" << i << "]: " << *argStr << "\n";
  }
  return v8::ThrowException(v8::Exception::TypeError(v8::String::New(errStr.str().c_str())));
}

/*static*/ v8::Handle<v8::Value> wxNode_wxTopLevelWindow::_IsTopNavigationDomain(const v8::Arguments& args) {
  v8::HandleScope scope;
  wxNode_wxTopLevelWindow* self = unwrap<wxNode_wxTopLevelWindow>(args.This());

  
  /*
   * id: _39126
   */
  if(args.Length() == 0) {
    

    bool returnVal = self->IsTopNavigationDomain();

    return scope.Close(v8::Boolean::New(returnVal));
  }
  

  std::ostringstream errStr;
  errStr << "Could not find matching method for arguments (method name: wxTopLevelWindow::IsTopNavigationDomain).\n";
  errStr << "  arg count: " << args.Length() << "\n";
  for(int i = 0; i < args.Length(); i++) {
    v8::String::AsciiValue argStr(args[i]);
    errStr << "  arg[" << i << "]: " << *argStr << "\n";
  }
  return v8::ThrowException(v8::Exception::TypeError(v8::String::New(errStr.str().c_str())));
}

/*static*/ v8::Handle<v8::Value> wxNode_wxTopLevelWindow::_IsVisible(const v8::Arguments& args) {
  v8::HandleScope scope;
  wxNode_wxTopLevelWindow* self = unwrap<wxNode_wxTopLevelWindow>(args.This());

  
  /*
   * id: _39127
   */
  if(args.Length() == 0) {
    

    bool returnVal = self->IsVisible();

    return scope.Close(v8::Boolean::New(returnVal));
  }
  

  std::ostringstream errStr;
  errStr << "Could not find matching method for arguments (method name: wxTopLevelWindow::IsVisible).\n";
  errStr << "  arg count: " << args.Length() << "\n";
  for(int i = 0; i < args.Length(); i++) {
    v8::String::AsciiValue argStr(args[i]);
    errStr << "  arg[" << i << "]: " << *argStr << "\n";
  }
  return v8::ThrowException(v8::Exception::TypeError(v8::String::New(errStr.str().c_str())));
}

/*static*/ v8::Handle<v8::Value> wxNode_wxTopLevelWindow::_OnCloseWindow(const v8::Arguments& args) {
  v8::HandleScope scope;
  wxNode_wxTopLevelWindow* self = unwrap<wxNode_wxTopLevelWindow>(args.This());

  

  std::ostringstream errStr;
  errStr << "Could not find matching method for arguments (method name: wxTopLevelWindow::OnCloseWindow).\n";
  errStr << "  arg count: " << args.Length() << "\n";
  for(int i = 0; i < args.Length(); i++) {
    v8::String::AsciiValue argStr(args[i]);
    errStr << "  arg[" << i << "]: " << *argStr << "\n";
  }
  return v8::ThrowException(v8::Exception::TypeError(v8::String::New(errStr.str().c_str())));
}

/*static*/ v8::Handle<v8::Value> wxNode_wxTopLevelWindow::_OnSize(const v8::Arguments& args) {
  v8::HandleScope scope;
  wxNode_wxTopLevelWindow* self = unwrap<wxNode_wxTopLevelWindow>(args.This());

  

  std::ostringstream errStr;
  errStr << "Could not find matching method for arguments (method name: wxTopLevelWindow::OnSize).\n";
  errStr << "  arg count: " << args.Length() << "\n";
  for(int i = 0; i < args.Length(); i++) {
    v8::String::AsciiValue argStr(args[i]);
    errStr << "  arg[" << i << "]: " << *argStr << "\n";
  }
  return v8::ThrowException(v8::Exception::TypeError(v8::String::New(errStr.str().c_str())));
}

/*static*/ v8::Handle<v8::Value> wxNode_wxTopLevelWindow::_GetRectForTopLevelChildren(const v8::Arguments& args) {
  v8::HandleScope scope;
  wxNode_wxTopLevelWindow* self = unwrap<wxNode_wxTopLevelWindow>(args.This());

  
  /*
   * id: _39130
   */
  if(args.Length() == 4 && false && false && false && false) {
    int x; /* type: _16655 * */
    int y; /* type: _16655 * */
    int w; /* type: _16655 * */
    int h; /* type: _16655 * */
    

    self->GetRectForTopLevelChildren(&x, &y, &w, &h);

    return v8::Undefined();
  }
  

  std::ostringstream errStr;
  errStr << "Could not find matching method for arguments (method name: wxTopLevelWindow::GetRectForTopLevelChildren).\n";
  errStr << "  arg count: " << args.Length() << "\n";
  for(int i = 0; i < args.Length(); i++) {
    v8::String::AsciiValue argStr(args[i]);
    errStr << "  arg[" << i << "]: " << *argStr << "\n";
  }
  return v8::ThrowException(v8::Exception::TypeError(v8::String::New(errStr.str().c_str())));
}

/*static*/ v8::Handle<v8::Value> wxNode_wxTopLevelWindow::_OnActivate(const v8::Arguments& args) {
  v8::HandleScope scope;
  wxNode_wxTopLevelWindow* self = unwrap<wxNode_wxTopLevelWindow>(args.This());

  

  std::ostringstream errStr;
  errStr << "Could not find matching method for arguments (method name: wxTopLevelWindow::OnActivate).\n";
  errStr << "  arg count: " << args.Length() << "\n";
  for(int i = 0; i < args.Length(); i++) {
    v8::String::AsciiValue argStr(args[i]);
    errStr << "  arg[" << i << "]: " << *argStr << "\n";
  }
  return v8::ThrowException(v8::Exception::TypeError(v8::String::New(errStr.str().c_str())));
}

/*static*/ v8::Handle<v8::Value> wxNode_wxTopLevelWindow::_DoUpdateWindowUI(const v8::Arguments& args) {
  v8::HandleScope scope;
  wxNode_wxTopLevelWindow* self = unwrap<wxNode_wxTopLevelWindow>(args.This());

  
  /*
   * id: _39132
   */
  if(args.Length() == 1 && (args[0]->IsNull() || (args[0]->IsObject() && wxNode_wxUpdateUIEvent::AssignableFrom(args[0]->ToObject()->GetConstructorName())))) {
    wxNode_wxUpdateUIEvent* event = args[0]->IsNull() ? NULL : wxNodeObject::unwrap<wxNode_wxUpdateUIEvent>(args[0]->ToObject()); /* type: _59754  */
    

    self->DoUpdateWindowUI(*event);

    return v8::Undefined();
  }
  

  std::ostringstream errStr;
  errStr << "Could not find matching method for arguments (method name: wxTopLevelWindow::DoUpdateWindowUI).\n";
  errStr << "  arg count: " << args.Length() << "\n";
  for(int i = 0; i < args.Length(); i++) {
    v8::String::AsciiValue argStr(args[i]);
    errStr << "  arg[" << i << "]: " << *argStr << "\n";
  }
  return v8::ThrowException(v8::Exception::TypeError(v8::String::New(errStr.str().c_str())));
}

/*static*/ v8::Handle<v8::Value> wxNode_wxTopLevelWindow::_SetMinSize(const v8::Arguments& args) {
  v8::HandleScope scope;
  wxNode_wxTopLevelWindow* self = unwrap<wxNode_wxTopLevelWindow>(args.This());

  
  /*
   * id: _39133
   */
  if(args.Length() == 1 && (args[0]->IsNull() || (args[0]->IsObject() && wxNode_wxSize::AssignableFrom(args[0]->ToObject()->GetConstructorName())))) {
    wxNode_wxSize* minSize = args[0]->IsNull() ? NULL : wxNodeObject::unwrap<wxNode_wxSize>(args[0]->ToObject()); /* type: _20628  */
    

    self->SetMinSize(*minSize);

    return v8::Undefined();
  }
  

  std::ostringstream errStr;
  errStr << "Could not find matching method for arguments (method name: wxTopLevelWindow::SetMinSize).\n";
  errStr << "  arg count: " << args.Length() << "\n";
  for(int i = 0; i < args.Length(); i++) {
    v8::String::AsciiValue argStr(args[i]);
    errStr << "  arg[" << i << "]: " << *argStr << "\n";
  }
  return v8::ThrowException(v8::Exception::TypeError(v8::String::New(errStr.str().c_str())));
}

/*static*/ v8::Handle<v8::Value> wxNode_wxTopLevelWindow::_SetMaxSize(const v8::Arguments& args) {
  v8::HandleScope scope;
  wxNode_wxTopLevelWindow* self = unwrap<wxNode_wxTopLevelWindow>(args.This());

  
  /*
   * id: _39134
   */
  if(args.Length() == 1 && (args[0]->IsNull() || (args[0]->IsObject() && wxNode_wxSize::AssignableFrom(args[0]->ToObject()->GetConstructorName())))) {
    wxNode_wxSize* maxSize = args[0]->IsNull() ? NULL : wxNodeObject::unwrap<wxNode_wxSize>(args[0]->ToObject()); /* type: _20628  */
    

    self->SetMaxSize(*maxSize);

    return v8::Undefined();
  }
  

  std::ostringstream errStr;
  errStr << "Could not find matching method for arguments (method name: wxTopLevelWindow::SetMaxSize).\n";
  errStr << "  arg count: " << args.Length() << "\n";
  for(int i = 0; i < args.Length(); i++) {
    v8::String::AsciiValue argStr(args[i]);
    errStr << "  arg[" << i << "]: " << *argStr << "\n";
  }
  return v8::ThrowException(v8::Exception::TypeError(v8::String::New(errStr.str().c_str())));
}

/*static*/ v8::Handle<v8::Value> wxNode_wxTopLevelWindow::_OSXSetModified(const v8::Arguments& args) {
  v8::HandleScope scope;
  wxNode_wxTopLevelWindow* self = unwrap<wxNode_wxTopLevelWindow>(args.This());

  
  /*
   * id: _39135
   */
  if(args.Length() == 1 && args[0]->IsBoolean()) {
    bool modified = args[0]->ToBoolean()->Value(); /* type: _14830  */
    

    self->OSXSetModified(modified);

    return v8::Undefined();
  }
  

  std::ostringstream errStr;
  errStr << "Could not find matching method for arguments (method name: wxTopLevelWindow::OSXSetModified).\n";
  errStr << "  arg count: " << args.Length() << "\n";
  for(int i = 0; i < args.Length(); i++) {
    v8::String::AsciiValue argStr(args[i]);
    errStr << "  arg[" << i << "]: " << *argStr << "\n";
  }
  return v8::ThrowException(v8::Exception::TypeError(v8::String::New(errStr.str().c_str())));
}

/*static*/ v8::Handle<v8::Value> wxNode_wxTopLevelWindow::_OSXIsModified(const v8::Arguments& args) {
  v8::HandleScope scope;
  wxNode_wxTopLevelWindow* self = unwrap<wxNode_wxTopLevelWindow>(args.This());

  
  /*
   * id: _39136
   */
  if(args.Length() == 0) {
    

    bool returnVal = self->OSXIsModified();

    return scope.Close(v8::Boolean::New(returnVal));
  }
  

  std::ostringstream errStr;
  errStr << "Could not find matching method for arguments (method name: wxTopLevelWindow::OSXIsModified).\n";
  errStr << "  arg count: " << args.Length() << "\n";
  for(int i = 0; i < args.Length(); i++) {
    v8::String::AsciiValue argStr(args[i]);
    errStr << "  arg[" << i << "]: " << *argStr << "\n";
  }
  return v8::ThrowException(v8::Exception::TypeError(v8::String::New(errStr.str().c_str())));
}



