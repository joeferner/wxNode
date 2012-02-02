
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

wxNode_wxTopLevelWindow::wxNode_wxTopLevelWindow(wxNode_wxWindow& parent, int winid, const char* title, wxNode_wxPoint* pos, wxNode_wxSize* size, long int style, const char* name)
  : wxTopLevelWindow(parent, winid, title, pos, size, style, name)
{

}

wxNode_wxTopLevelWindow::wxNode_wxTopLevelWindow(wxNode_wxWindow& parent, int winid, const char* title, wxNode_wxPoint* pos, wxNode_wxSize* size, long int style)
  : wxTopLevelWindow(parent, winid, title, pos, size, style)
{

}

wxNode_wxTopLevelWindow::wxNode_wxTopLevelWindow(wxNode_wxWindow& parent, int winid, const char* title, wxNode_wxPoint* pos, wxNode_wxSize* size)
  : wxTopLevelWindow(parent, winid, title, pos, size)
{

}

wxNode_wxTopLevelWindow::wxNode_wxTopLevelWindow(wxNode_wxWindow& parent, int winid, const char* title, wxNode_wxPoint* pos)
  : wxTopLevelWindow(parent, winid, title, pos)
{

}

wxNode_wxTopLevelWindow::wxNode_wxTopLevelWindow(wxNode_wxWindow& parent, int winid, const char* title)
  : wxTopLevelWindow(parent, winid, title)
{

}




/*static*/ void wxNode_wxTopLevelWindow::Init(v8::Handle<v8::Object> target) {
  v8::HandleScope scope;

  v8::Local<v8::FunctionTemplate> t = v8::FunctionTemplate::New(wxNodeObject::NewFunc);
  s_ct = v8::Persistent<v8::FunctionTemplate>::New(t);
  s_ct->InstanceTemplate()->SetInternalFieldCount(2);
  s_ct->SetClassName(v8::String::NewSymbol("wxTopLevelWindow"));

  NODE_SET_PROTOTYPE_METHOD(s_ct, "init", _init);
  AddMethods(s_ct);

  target->Set(v8::String::NewSymbol("wxTopLevelWindow"), s_ct->GetFunction());
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
  NODE_SET_PROTOTYPE_METHOD(target, "getDefaultSize", _GetDefaultSize);
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
  NODE_SET_PROTOTYPE_METHOD(target, "setRepresentedFilename", _SetRepresentedFilename);
  
}

/*static*/ v8::Handle<v8::Value> wxNode_wxTopLevelWindow::_init(const v8::Arguments& args) {
  v8::HandleScope scope;

  
  
  /*
   * id: _21066
   */
  if(args.Length() == 0) {
    

    wxNode_wxTopLevelWindow *self = new wxNode_wxTopLevelWindow();
    NodeExEvtHandlerImpl* evtHandler = dynamic_cast<NodeExEvtHandlerImpl*>(self);
    self->wrap(args.This(), self, evtHandler);
    return args.This();
  }
  
  /*
   * id: _21067
   */
  if(args.Length() == 7 && args[0]->IsObject() && args[1]->IsNumber() && args[2]->IsString() && args[3]->IsObject() && args[4]->IsObject() && args[5]->IsNumber() && args[6]->IsString()) {
    wxNode_wxWindow* parent = wxNodeObject::unwrap<wxNode_wxWindow>(args[0]->ToObject()); /* type: _993 * */
    int winid = (int)args[1]->ToInt32()->Value(); /* type: _8633  */
    v8::String::AsciiValue title(args[2]->ToString()); /* type: _14808  */
    wxNode_wxPoint* pos = wxNodeObject::unwrap<wxNode_wxPoint>(args[3]->ToObject()); /* type: _20412  */
    wxNode_wxSize* size = wxNodeObject::unwrap<wxNode_wxSize>(args[4]->ToObject()); /* type: _20522  */
    long int style = (long int)args[5]->ToInt32()->Value(); /* type: _586  */
    v8::String::AsciiValue name(args[6]->ToString()); /* type: _14808  */
    

    wxNode_wxTopLevelWindow *self = new wxNode_wxTopLevelWindow(parent, winid, *title, *pos, *size, style, *name);
    NodeExEvtHandlerImpl* evtHandler = dynamic_cast<NodeExEvtHandlerImpl*>(self);
    self->wrap(args.This(), self, evtHandler);
    return args.This();
  }
  
  /*
   * id: _21067
   */
  if(args.Length() == 6 && args[0]->IsObject() && args[1]->IsNumber() && args[2]->IsString() && args[3]->IsObject() && args[4]->IsObject() && args[5]->IsNumber()) {
    wxNode_wxWindow* parent = wxNodeObject::unwrap<wxNode_wxWindow>(args[0]->ToObject()); /* type: _993 * */
    int winid = (int)args[1]->ToInt32()->Value(); /* type: _8633  */
    v8::String::AsciiValue title(args[2]->ToString()); /* type: _14808  */
    wxNode_wxPoint* pos = wxNodeObject::unwrap<wxNode_wxPoint>(args[3]->ToObject()); /* type: _20412  */
    wxNode_wxSize* size = wxNodeObject::unwrap<wxNode_wxSize>(args[4]->ToObject()); /* type: _20522  */
    long int style = (long int)args[5]->ToInt32()->Value(); /* type: _586  */
    

    wxNode_wxTopLevelWindow *self = new wxNode_wxTopLevelWindow(parent, winid, *title, *pos, *size, style);
    NodeExEvtHandlerImpl* evtHandler = dynamic_cast<NodeExEvtHandlerImpl*>(self);
    self->wrap(args.This(), self, evtHandler);
    return args.This();
  }
  
  /*
   * id: _21067
   */
  if(args.Length() == 5 && args[0]->IsObject() && args[1]->IsNumber() && args[2]->IsString() && args[3]->IsObject() && args[4]->IsObject()) {
    wxNode_wxWindow* parent = wxNodeObject::unwrap<wxNode_wxWindow>(args[0]->ToObject()); /* type: _993 * */
    int winid = (int)args[1]->ToInt32()->Value(); /* type: _8633  */
    v8::String::AsciiValue title(args[2]->ToString()); /* type: _14808  */
    wxNode_wxPoint* pos = wxNodeObject::unwrap<wxNode_wxPoint>(args[3]->ToObject()); /* type: _20412  */
    wxNode_wxSize* size = wxNodeObject::unwrap<wxNode_wxSize>(args[4]->ToObject()); /* type: _20522  */
    

    wxNode_wxTopLevelWindow *self = new wxNode_wxTopLevelWindow(parent, winid, *title, *pos, *size);
    NodeExEvtHandlerImpl* evtHandler = dynamic_cast<NodeExEvtHandlerImpl*>(self);
    self->wrap(args.This(), self, evtHandler);
    return args.This();
  }
  
  /*
   * id: _21067
   */
  if(args.Length() == 4 && args[0]->IsObject() && args[1]->IsNumber() && args[2]->IsString() && args[3]->IsObject()) {
    wxNode_wxWindow* parent = wxNodeObject::unwrap<wxNode_wxWindow>(args[0]->ToObject()); /* type: _993 * */
    int winid = (int)args[1]->ToInt32()->Value(); /* type: _8633  */
    v8::String::AsciiValue title(args[2]->ToString()); /* type: _14808  */
    wxNode_wxPoint* pos = wxNodeObject::unwrap<wxNode_wxPoint>(args[3]->ToObject()); /* type: _20412  */
    

    wxNode_wxTopLevelWindow *self = new wxNode_wxTopLevelWindow(parent, winid, *title, *pos);
    NodeExEvtHandlerImpl* evtHandler = dynamic_cast<NodeExEvtHandlerImpl*>(self);
    self->wrap(args.This(), self, evtHandler);
    return args.This();
  }
  
  /*
   * id: _21067
   */
  if(args.Length() == 3 && args[0]->IsObject() && args[1]->IsNumber() && args[2]->IsString()) {
    wxNode_wxWindow* parent = wxNodeObject::unwrap<wxNode_wxWindow>(args[0]->ToObject()); /* type: _993 * */
    int winid = (int)args[1]->ToInt32()->Value(); /* type: _8633  */
    v8::String::AsciiValue title(args[2]->ToString()); /* type: _14808  */
    

    wxNode_wxTopLevelWindow *self = new wxNode_wxTopLevelWindow(parent, winid, *title);
    NodeExEvtHandlerImpl* evtHandler = dynamic_cast<NodeExEvtHandlerImpl*>(self);
    self->wrap(args.This(), self, evtHandler);
    return args.This();
  }
  
  

  return v8::ThrowException(v8::String::New("Could not find matching constructor for arguments (class name: wxTopLevelWindow)."));
}


/*static*/ v8::Handle<v8::Value> wxNode_wxTopLevelWindow::_Maximize(const v8::Arguments& args) {
  v8::HandleScope scope;
  wxNode_wxTopLevelWindow* self = unwrap<wxNode_wxTopLevelWindow>(args.This());

  
  /*
   * id: _38894
   */
  if(args.Length() == 1 && args[0]->IsBoolean()) {
    bool maximize = args[0]->ToBoolean()->Value(); /* type: _14666  */
    

    self->Maximize(maximize);

    // TODO: handle return type
    return v8::Undefined();
  }
  
  /*
   * id: _38894
   */
  if(args.Length() == 0) {
    

    self->Maximize();

    // TODO: handle return type
    return v8::Undefined();
  }
  

  return v8::ThrowException(v8::String::New("Could not find matching method for arguments (method name: Maximize)."));
}

/*static*/ v8::Handle<v8::Value> wxNode_wxTopLevelWindow::_Restore(const v8::Arguments& args) {
  v8::HandleScope scope;
  wxNode_wxTopLevelWindow* self = unwrap<wxNode_wxTopLevelWindow>(args.This());

  
  /*
   * id: _38895
   */
  if(args.Length() == 0) {
    

    self->Restore();

    // TODO: handle return type
    return v8::Undefined();
  }
  

  return v8::ThrowException(v8::String::New("Could not find matching method for arguments (method name: Restore)."));
}

/*static*/ v8::Handle<v8::Value> wxNode_wxTopLevelWindow::_Iconize(const v8::Arguments& args) {
  v8::HandleScope scope;
  wxNode_wxTopLevelWindow* self = unwrap<wxNode_wxTopLevelWindow>(args.This());

  
  /*
   * id: _38896
   */
  if(args.Length() == 1 && args[0]->IsBoolean()) {
    bool iconize = args[0]->ToBoolean()->Value(); /* type: _14666  */
    

    self->Iconize(iconize);

    // TODO: handle return type
    return v8::Undefined();
  }
  
  /*
   * id: _38896
   */
  if(args.Length() == 0) {
    

    self->Iconize();

    // TODO: handle return type
    return v8::Undefined();
  }
  

  return v8::ThrowException(v8::String::New("Could not find matching method for arguments (method name: Iconize)."));
}

/*static*/ v8::Handle<v8::Value> wxNode_wxTopLevelWindow::_IsMaximized(const v8::Arguments& args) {
  v8::HandleScope scope;
  wxNode_wxTopLevelWindow* self = unwrap<wxNode_wxTopLevelWindow>(args.This());

  
  /*
   * id: _38897
   */
  if(args.Length() == 0) {
    

    self->IsMaximized();

    // TODO: handle return type
    return v8::Undefined();
  }
  

  return v8::ThrowException(v8::String::New("Could not find matching method for arguments (method name: IsMaximized)."));
}

/*static*/ v8::Handle<v8::Value> wxNode_wxTopLevelWindow::_IsAlwaysMaximized(const v8::Arguments& args) {
  v8::HandleScope scope;
  wxNode_wxTopLevelWindow* self = unwrap<wxNode_wxTopLevelWindow>(args.This());

  
  /*
   * id: _38898
   */
  if(args.Length() == 0) {
    

    self->IsAlwaysMaximized();

    // TODO: handle return type
    return v8::Undefined();
  }
  

  return v8::ThrowException(v8::String::New("Could not find matching method for arguments (method name: IsAlwaysMaximized)."));
}

/*static*/ v8::Handle<v8::Value> wxNode_wxTopLevelWindow::_IsIconized(const v8::Arguments& args) {
  v8::HandleScope scope;
  wxNode_wxTopLevelWindow* self = unwrap<wxNode_wxTopLevelWindow>(args.This());

  
  /*
   * id: _38899
   */
  if(args.Length() == 0) {
    

    self->IsIconized();

    // TODO: handle return type
    return v8::Undefined();
  }
  

  return v8::ThrowException(v8::String::New("Could not find matching method for arguments (method name: IsIconized)."));
}

/*static*/ v8::Handle<v8::Value> wxNode_wxTopLevelWindow::_GetIcon(const v8::Arguments& args) {
  v8::HandleScope scope;
  wxNode_wxTopLevelWindow* self = unwrap<wxNode_wxTopLevelWindow>(args.This());

  
  /*
   * id: _38900
   */
  if(args.Length() == 0) {
    

    self->GetIcon();

    // TODO: handle return type
    return v8::Undefined();
  }
  

  return v8::ThrowException(v8::String::New("Could not find matching method for arguments (method name: GetIcon)."));
}

/*static*/ v8::Handle<v8::Value> wxNode_wxTopLevelWindow::_GetIcons(const v8::Arguments& args) {
  v8::HandleScope scope;
  wxNode_wxTopLevelWindow* self = unwrap<wxNode_wxTopLevelWindow>(args.This());

  
  /*
   * id: _38901
   */
  if(args.Length() == 0) {
    

    self->GetIcons();

    // TODO: handle return type
    return v8::Undefined();
  }
  

  return v8::ThrowException(v8::String::New("Could not find matching method for arguments (method name: GetIcons)."));
}

/*static*/ v8::Handle<v8::Value> wxNode_wxTopLevelWindow::_SetIcon(const v8::Arguments& args) {
  v8::HandleScope scope;
  wxNode_wxTopLevelWindow* self = unwrap<wxNode_wxTopLevelWindow>(args.This());

  
  /*
   * id: _38902
   */
  if(args.Length() == 1 && args[0]->IsObject()) {
    wxNode_wxIcon* icon = wxNodeObject::unwrap<wxNode_wxIcon>(args[0]->ToObject()); /* type: _15506  */
    

    self->SetIcon(*icon);

    // TODO: handle return type
    return v8::Undefined();
  }
  

  return v8::ThrowException(v8::String::New("Could not find matching method for arguments (method name: SetIcon)."));
}

/*static*/ v8::Handle<v8::Value> wxNode_wxTopLevelWindow::_SetIcons(const v8::Arguments& args) {
  v8::HandleScope scope;
  wxNode_wxTopLevelWindow* self = unwrap<wxNode_wxTopLevelWindow>(args.This());

  
  /*
   * id: _38903
   */
  if(args.Length() == 1 && args[0]->IsObject()) {
    wxNode_wxIconBundle* icons = wxNodeObject::unwrap<wxNode_wxIconBundle>(args[0]->ToObject()); /* type: _59912  */
    

    self->SetIcons(*icons);

    // TODO: handle return type
    return v8::Undefined();
  }
  

  return v8::ThrowException(v8::String::New("Could not find matching method for arguments (method name: SetIcons)."));
}

/*static*/ v8::Handle<v8::Value> wxNode_wxTopLevelWindow::_ShowFullScreen(const v8::Arguments& args) {
  v8::HandleScope scope;
  wxNode_wxTopLevelWindow* self = unwrap<wxNode_wxTopLevelWindow>(args.This());

  
  /*
   * id: _38904
   */
  if(args.Length() == 2 && args[0]->IsBoolean() && args[1]->IsNumber()) {
    bool show = args[0]->ToBoolean()->Value(); /* type: _14666  */
    long int style = (long int)args[1]->ToInt32()->Value(); /* type: _586  */
    

    self->ShowFullScreen(show, style);

    // TODO: handle return type
    return v8::Undefined();
  }
  
  /*
   * id: _38904
   */
  if(args.Length() == 1 && args[0]->IsBoolean()) {
    bool show = args[0]->ToBoolean()->Value(); /* type: _14666  */
    

    self->ShowFullScreen(show);

    // TODO: handle return type
    return v8::Undefined();
  }
  

  return v8::ThrowException(v8::String::New("Could not find matching method for arguments (method name: ShowFullScreen)."));
}

/*static*/ v8::Handle<v8::Value> wxNode_wxTopLevelWindow::_ShowWithoutActivating(const v8::Arguments& args) {
  v8::HandleScope scope;
  wxNode_wxTopLevelWindow* self = unwrap<wxNode_wxTopLevelWindow>(args.This());

  
  /*
   * id: _38905
   */
  if(args.Length() == 0) {
    

    self->ShowWithoutActivating();

    // TODO: handle return type
    return v8::Undefined();
  }
  

  return v8::ThrowException(v8::String::New("Could not find matching method for arguments (method name: ShowWithoutActivating)."));
}

/*static*/ v8::Handle<v8::Value> wxNode_wxTopLevelWindow::_IsFullScreen(const v8::Arguments& args) {
  v8::HandleScope scope;
  wxNode_wxTopLevelWindow* self = unwrap<wxNode_wxTopLevelWindow>(args.This());

  
  /*
   * id: _38906
   */
  if(args.Length() == 0) {
    

    self->IsFullScreen();

    // TODO: handle return type
    return v8::Undefined();
  }
  

  return v8::ThrowException(v8::String::New("Could not find matching method for arguments (method name: IsFullScreen)."));
}

/*static*/ v8::Handle<v8::Value> wxNode_wxTopLevelWindow::_SetTitle(const v8::Arguments& args) {
  v8::HandleScope scope;
  wxNode_wxTopLevelWindow* self = unwrap<wxNode_wxTopLevelWindow>(args.This());

  
  /*
   * id: _38907
   */
  if(args.Length() == 1 && args[0]->IsString()) {
    v8::String::AsciiValue title(args[0]->ToString()); /* type: _14808  */
    

    self->SetTitle(*title);

    // TODO: handle return type
    return v8::Undefined();
  }
  

  return v8::ThrowException(v8::String::New("Could not find matching method for arguments (method name: SetTitle)."));
}

/*static*/ v8::Handle<v8::Value> wxNode_wxTopLevelWindow::_GetTitle(const v8::Arguments& args) {
  v8::HandleScope scope;
  wxNode_wxTopLevelWindow* self = unwrap<wxNode_wxTopLevelWindow>(args.This());

  
  /*
   * id: _38908
   */
  if(args.Length() == 0) {
    

    self->GetTitle();

    // TODO: handle return type
    return v8::Undefined();
  }
  

  return v8::ThrowException(v8::String::New("Could not find matching method for arguments (method name: GetTitle)."));
}

/*static*/ v8::Handle<v8::Value> wxNode_wxTopLevelWindow::_EnableCloseButton(const v8::Arguments& args) {
  v8::HandleScope scope;
  wxNode_wxTopLevelWindow* self = unwrap<wxNode_wxTopLevelWindow>(args.This());

  
  /*
   * id: _38909
   */
  if(args.Length() == 1 && args[0]->IsBoolean()) {
    bool undefined = args[0]->ToBoolean()->Value(); /* type: _14666  */
    

    self->EnableCloseButton(undefined);

    // TODO: handle return type
    return v8::Undefined();
  }
  

  return v8::ThrowException(v8::String::New("Could not find matching method for arguments (method name: EnableCloseButton)."));
}

/*static*/ v8::Handle<v8::Value> wxNode_wxTopLevelWindow::_RequestUserAttention(const v8::Arguments& args) {
  v8::HandleScope scope;
  wxNode_wxTopLevelWindow* self = unwrap<wxNode_wxTopLevelWindow>(args.This());

  
  /*
   * id: _38910
   */
  if(args.Length() == 1 && args[0]->IsNumber()) {
    int flags = (int)args[0]->ToInt32()->Value(); /* type: _162  */
    

    self->RequestUserAttention(flags);

    // TODO: handle return type
    return v8::Undefined();
  }
  
  /*
   * id: _38910
   */
  if(args.Length() == 0) {
    

    self->RequestUserAttention();

    // TODO: handle return type
    return v8::Undefined();
  }
  

  return v8::ThrowException(v8::String::New("Could not find matching method for arguments (method name: RequestUserAttention)."));
}

/*static*/ v8::Handle<v8::Value> wxNode_wxTopLevelWindow::_IsActive(const v8::Arguments& args) {
  v8::HandleScope scope;
  wxNode_wxTopLevelWindow* self = unwrap<wxNode_wxTopLevelWindow>(args.This());

  
  /*
   * id: _38911
   */
  if(args.Length() == 0) {
    

    self->IsActive();

    // TODO: handle return type
    return v8::Undefined();
  }
  

  return v8::ThrowException(v8::String::New("Could not find matching method for arguments (method name: IsActive)."));
}

/*static*/ v8::Handle<v8::Value> wxNode_wxTopLevelWindow::_ShouldPreventAppExit(const v8::Arguments& args) {
  v8::HandleScope scope;
  wxNode_wxTopLevelWindow* self = unwrap<wxNode_wxTopLevelWindow>(args.This());

  
  /*
   * id: _38912
   */
  if(args.Length() == 0) {
    

    self->ShouldPreventAppExit();

    // TODO: handle return type
    return v8::Undefined();
  }
  

  return v8::ThrowException(v8::String::New("Could not find matching method for arguments (method name: ShouldPreventAppExit)."));
}

/*static*/ v8::Handle<v8::Value> wxNode_wxTopLevelWindow::_CentreOnScreen(const v8::Arguments& args) {
  v8::HandleScope scope;
  wxNode_wxTopLevelWindow* self = unwrap<wxNode_wxTopLevelWindow>(args.This());

  
  /*
   * id: _38913
   */
  if(args.Length() == 1 && args[0]->IsNumber()) {
    int dir = (int)args[0]->ToInt32()->Value(); /* type: _162  */
    

    self->CentreOnScreen(dir);

    // TODO: handle return type
    return v8::Undefined();
  }
  
  /*
   * id: _38913
   */
  if(args.Length() == 0) {
    

    self->CentreOnScreen();

    // TODO: handle return type
    return v8::Undefined();
  }
  

  return v8::ThrowException(v8::String::New("Could not find matching method for arguments (method name: CentreOnScreen)."));
}

/*static*/ v8::Handle<v8::Value> wxNode_wxTopLevelWindow::_CenterOnScreen(const v8::Arguments& args) {
  v8::HandleScope scope;
  wxNode_wxTopLevelWindow* self = unwrap<wxNode_wxTopLevelWindow>(args.This());

  
  /*
   * id: _38914
   */
  if(args.Length() == 1 && args[0]->IsNumber()) {
    int dir = (int)args[0]->ToInt32()->Value(); /* type: _162  */
    

    self->CenterOnScreen(dir);

    // TODO: handle return type
    return v8::Undefined();
  }
  
  /*
   * id: _38914
   */
  if(args.Length() == 0) {
    

    self->CenterOnScreen();

    // TODO: handle return type
    return v8::Undefined();
  }
  

  return v8::ThrowException(v8::String::New("Could not find matching method for arguments (method name: CenterOnScreen)."));
}

/*static*/ v8::Handle<v8::Value> wxNode_wxTopLevelWindow::_GetDefaultSize(const v8::Arguments& args) {
  v8::HandleScope scope;
  wxNode_wxTopLevelWindow* self = unwrap<wxNode_wxTopLevelWindow>(args.This());

  
  /*
   * id: _38915
   */
  if(args.Length() == 0) {
    

    self->GetDefaultSize();

    // TODO: handle return type
    return v8::Undefined();
  }
  

  return v8::ThrowException(v8::String::New("Could not find matching method for arguments (method name: GetDefaultSize)."));
}

/*static*/ v8::Handle<v8::Value> wxNode_wxTopLevelWindow::_GetDefaultItem(const v8::Arguments& args) {
  v8::HandleScope scope;
  wxNode_wxTopLevelWindow* self = unwrap<wxNode_wxTopLevelWindow>(args.This());

  
  /*
   * id: _38916
   */
  if(args.Length() == 0) {
    

    self->GetDefaultItem();

    // TODO: handle return type
    return v8::Undefined();
  }
  

  return v8::ThrowException(v8::String::New("Could not find matching method for arguments (method name: GetDefaultItem)."));
}

/*static*/ v8::Handle<v8::Value> wxNode_wxTopLevelWindow::_SetDefaultItem(const v8::Arguments& args) {
  v8::HandleScope scope;
  wxNode_wxTopLevelWindow* self = unwrap<wxNode_wxTopLevelWindow>(args.This());

  
  /*
   * id: _38917
   */
  if(args.Length() == 1 && args[0]->IsObject()) {
    wxNode_wxWindow* win = wxNodeObject::unwrap<wxNode_wxWindow>(args[0]->ToObject()); /* type: _993 * */
    

    self->SetDefaultItem(win);

    // TODO: handle return type
    return v8::Undefined();
  }
  

  return v8::ThrowException(v8::String::New("Could not find matching method for arguments (method name: SetDefaultItem)."));
}

/*static*/ v8::Handle<v8::Value> wxNode_wxTopLevelWindow::_GetTmpDefaultItem(const v8::Arguments& args) {
  v8::HandleScope scope;
  wxNode_wxTopLevelWindow* self = unwrap<wxNode_wxTopLevelWindow>(args.This());

  
  /*
   * id: _38918
   */
  if(args.Length() == 0) {
    

    self->GetTmpDefaultItem();

    // TODO: handle return type
    return v8::Undefined();
  }
  

  return v8::ThrowException(v8::String::New("Could not find matching method for arguments (method name: GetTmpDefaultItem)."));
}

/*static*/ v8::Handle<v8::Value> wxNode_wxTopLevelWindow::_SetTmpDefaultItem(const v8::Arguments& args) {
  v8::HandleScope scope;
  wxNode_wxTopLevelWindow* self = unwrap<wxNode_wxTopLevelWindow>(args.This());

  
  /*
   * id: _38919
   */
  if(args.Length() == 1 && args[0]->IsObject()) {
    wxNode_wxWindow* win = wxNodeObject::unwrap<wxNode_wxWindow>(args[0]->ToObject()); /* type: _993 * */
    

    self->SetTmpDefaultItem(win);

    // TODO: handle return type
    return v8::Undefined();
  }
  

  return v8::ThrowException(v8::String::New("Could not find matching method for arguments (method name: SetTmpDefaultItem)."));
}

/*static*/ v8::Handle<v8::Value> wxNode_wxTopLevelWindow::_Destroy(const v8::Arguments& args) {
  v8::HandleScope scope;
  wxNode_wxTopLevelWindow* self = unwrap<wxNode_wxTopLevelWindow>(args.This());

  
  /*
   * id: _38920
   */
  if(args.Length() == 0) {
    

    self->Destroy();

    // TODO: handle return type
    return v8::Undefined();
  }
  

  return v8::ThrowException(v8::String::New("Could not find matching method for arguments (method name: Destroy)."));
}

/*static*/ v8::Handle<v8::Value> wxNode_wxTopLevelWindow::_IsTopLevel(const v8::Arguments& args) {
  v8::HandleScope scope;
  wxNode_wxTopLevelWindow* self = unwrap<wxNode_wxTopLevelWindow>(args.This());

  
  /*
   * id: _38921
   */
  if(args.Length() == 0) {
    

    self->IsTopLevel();

    // TODO: handle return type
    return v8::Undefined();
  }
  

  return v8::ThrowException(v8::String::New("Could not find matching method for arguments (method name: IsTopLevel)."));
}

/*static*/ v8::Handle<v8::Value> wxNode_wxTopLevelWindow::_IsTopNavigationDomain(const v8::Arguments& args) {
  v8::HandleScope scope;
  wxNode_wxTopLevelWindow* self = unwrap<wxNode_wxTopLevelWindow>(args.This());

  
  /*
   * id: _38922
   */
  if(args.Length() == 0) {
    

    self->IsTopNavigationDomain();

    // TODO: handle return type
    return v8::Undefined();
  }
  

  return v8::ThrowException(v8::String::New("Could not find matching method for arguments (method name: IsTopNavigationDomain)."));
}

/*static*/ v8::Handle<v8::Value> wxNode_wxTopLevelWindow::_IsVisible(const v8::Arguments& args) {
  v8::HandleScope scope;
  wxNode_wxTopLevelWindow* self = unwrap<wxNode_wxTopLevelWindow>(args.This());

  
  /*
   * id: _38923
   */
  if(args.Length() == 0) {
    

    self->IsVisible();

    // TODO: handle return type
    return v8::Undefined();
  }
  

  return v8::ThrowException(v8::String::New("Could not find matching method for arguments (method name: IsVisible)."));
}

/*static*/ v8::Handle<v8::Value> wxNode_wxTopLevelWindow::_OnCloseWindow(const v8::Arguments& args) {
  v8::HandleScope scope;
  wxNode_wxTopLevelWindow* self = unwrap<wxNode_wxTopLevelWindow>(args.This());

  

  return v8::ThrowException(v8::String::New("Could not find matching method for arguments (method name: OnCloseWindow)."));
}

/*static*/ v8::Handle<v8::Value> wxNode_wxTopLevelWindow::_OnSize(const v8::Arguments& args) {
  v8::HandleScope scope;
  wxNode_wxTopLevelWindow* self = unwrap<wxNode_wxTopLevelWindow>(args.This());

  

  return v8::ThrowException(v8::String::New("Could not find matching method for arguments (method name: OnSize)."));
}

/*static*/ v8::Handle<v8::Value> wxNode_wxTopLevelWindow::_GetRectForTopLevelChildren(const v8::Arguments& args) {
  v8::HandleScope scope;
  wxNode_wxTopLevelWindow* self = unwrap<wxNode_wxTopLevelWindow>(args.This());

  
  /*
   * id: _38926
   */
  if(args.Length() == 4 && false && false && false && false) {
    int x; /* type: _16500 * */
    int y; /* type: _16500 * */
    int w; /* type: _16500 * */
    int h; /* type: _16500 * */
    

    self->GetRectForTopLevelChildren(&x, &y, &w, &h);

    // TODO: handle return type
    return v8::Undefined();
  }
  

  return v8::ThrowException(v8::String::New("Could not find matching method for arguments (method name: GetRectForTopLevelChildren)."));
}

/*static*/ v8::Handle<v8::Value> wxNode_wxTopLevelWindow::_OnActivate(const v8::Arguments& args) {
  v8::HandleScope scope;
  wxNode_wxTopLevelWindow* self = unwrap<wxNode_wxTopLevelWindow>(args.This());

  

  return v8::ThrowException(v8::String::New("Could not find matching method for arguments (method name: OnActivate)."));
}

/*static*/ v8::Handle<v8::Value> wxNode_wxTopLevelWindow::_DoUpdateWindowUI(const v8::Arguments& args) {
  v8::HandleScope scope;
  wxNode_wxTopLevelWindow* self = unwrap<wxNode_wxTopLevelWindow>(args.This());

  
  /*
   * id: _38928
   */
  if(args.Length() == 1 && args[0]->IsObject()) {
    wxNode_wxUpdateUIEvent* event = wxNodeObject::unwrap<wxNode_wxUpdateUIEvent>(args[0]->ToObject()); /* type: _59566  */
    

    self->DoUpdateWindowUI(*event);

    // TODO: handle return type
    return v8::Undefined();
  }
  

  return v8::ThrowException(v8::String::New("Could not find matching method for arguments (method name: DoUpdateWindowUI)."));
}

/*static*/ v8::Handle<v8::Value> wxNode_wxTopLevelWindow::_SetMinSize(const v8::Arguments& args) {
  v8::HandleScope scope;
  wxNode_wxTopLevelWindow* self = unwrap<wxNode_wxTopLevelWindow>(args.This());

  
  /*
   * id: _38929
   */
  if(args.Length() == 1 && args[0]->IsObject()) {
    wxNode_wxSize* minSize = wxNodeObject::unwrap<wxNode_wxSize>(args[0]->ToObject()); /* type: _20522  */
    

    self->SetMinSize(*minSize);

    // TODO: handle return type
    return v8::Undefined();
  }
  

  return v8::ThrowException(v8::String::New("Could not find matching method for arguments (method name: SetMinSize)."));
}

/*static*/ v8::Handle<v8::Value> wxNode_wxTopLevelWindow::_SetMaxSize(const v8::Arguments& args) {
  v8::HandleScope scope;
  wxNode_wxTopLevelWindow* self = unwrap<wxNode_wxTopLevelWindow>(args.This());

  
  /*
   * id: _38930
   */
  if(args.Length() == 1 && args[0]->IsObject()) {
    wxNode_wxSize* maxSize = wxNodeObject::unwrap<wxNode_wxSize>(args[0]->ToObject()); /* type: _20522  */
    

    self->SetMaxSize(*maxSize);

    // TODO: handle return type
    return v8::Undefined();
  }
  

  return v8::ThrowException(v8::String::New("Could not find matching method for arguments (method name: SetMaxSize)."));
}

/*static*/ v8::Handle<v8::Value> wxNode_wxTopLevelWindow::_OSXSetModified(const v8::Arguments& args) {
  v8::HandleScope scope;
  wxNode_wxTopLevelWindow* self = unwrap<wxNode_wxTopLevelWindow>(args.This());

  
  /*
   * id: _38931
   */
  if(args.Length() == 1 && args[0]->IsBoolean()) {
    bool modified = args[0]->ToBoolean()->Value(); /* type: _14666  */
    

    self->OSXSetModified(modified);

    // TODO: handle return type
    return v8::Undefined();
  }
  

  return v8::ThrowException(v8::String::New("Could not find matching method for arguments (method name: OSXSetModified)."));
}

/*static*/ v8::Handle<v8::Value> wxNode_wxTopLevelWindow::_OSXIsModified(const v8::Arguments& args) {
  v8::HandleScope scope;
  wxNode_wxTopLevelWindow* self = unwrap<wxNode_wxTopLevelWindow>(args.This());

  
  /*
   * id: _38932
   */
  if(args.Length() == 0) {
    

    self->OSXIsModified();

    // TODO: handle return type
    return v8::Undefined();
  }
  

  return v8::ThrowException(v8::String::New("Could not find matching method for arguments (method name: OSXIsModified)."));
}

/*static*/ v8::Handle<v8::Value> wxNode_wxTopLevelWindow::_SetRepresentedFilename(const v8::Arguments& args) {
  v8::HandleScope scope;
  wxNode_wxTopLevelWindow* self = unwrap<wxNode_wxTopLevelWindow>(args.This());

  
  /*
   * id: _38933
   */
  if(args.Length() == 1 && args[0]->IsString()) {
    v8::String::AsciiValue undefined(args[0]->ToString()); /* type: _14808  */
    

    self->SetRepresentedFilename(*undefined);

    // TODO: handle return type
    return v8::Undefined();
  }
  

  return v8::ThrowException(v8::String::New("Could not find matching method for arguments (method name: SetRepresentedFilename)."));
}

