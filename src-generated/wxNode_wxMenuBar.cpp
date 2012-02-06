
#include <sstream>
#include "wxNode_wxMenuBar.h"
#include "wxNode_wxEvtHandler.h"
#include "wxNode_wxWindow.h"
#include "wxNode_wxMenu.h"
#include "wxNode_wxFrame.h"


/* static */ v8::Persistent<v8::FunctionTemplate> wxNode_wxMenuBar::s_ct;



wxNode_wxMenuBar::wxNode_wxMenuBar()
  : wxMenuBar()
{

}

wxNode_wxMenuBar::wxNode_wxMenuBar(long int style)
  : wxMenuBar(style)
{

}

wxNode_wxMenuBar::wxNode_wxMenuBar(unsigned int n, wxMenu** menus, const wxString* titles, long int style)
  : wxMenuBar(n, menus, titles, style)
{

}

wxNode_wxMenuBar::wxNode_wxMenuBar(unsigned int n, wxMenu** menus, const wxString* titles)
  : wxMenuBar(n, menus, titles)
{

}




/*static*/ void wxNode_wxMenuBar::Init(v8::Handle<v8::Object> target) {
  v8::HandleScope scope;

  v8::Local<v8::FunctionTemplate> t = v8::FunctionTemplate::New(wxNodeObject::NewFunc);
  s_ct = v8::Persistent<v8::FunctionTemplate>::New(t);
  s_ct->InstanceTemplate()->SetInternalFieldCount(2);
  s_ct->SetClassName(v8::String::NewSymbol("wxMenuBar"));

  NODE_SET_PROTOTYPE_METHOD(s_ct, "init", _init);
  AddMethods(s_ct);

  target->Set(v8::String::NewSymbol("wxMenuBar"), s_ct->GetFunction());
}

/*static*/ void wxNode_wxMenuBar::AddMethods(v8::Handle<v8::FunctionTemplate> target) {
  wxNode_wxWindow::AddMethods(target);
  NODE_SET_PROTOTYPE_METHOD(target, "append", _Append);
  NODE_SET_PROTOTYPE_METHOD(target, "insert", _Insert);
  NODE_SET_PROTOTYPE_METHOD(target, "getMenuCount", _GetMenuCount);
  NODE_SET_PROTOTYPE_METHOD(target, "getMenu", _GetMenu);
  NODE_SET_PROTOTYPE_METHOD(target, "replace", _Replace);
  NODE_SET_PROTOTYPE_METHOD(target, "remove", _Remove);
  NODE_SET_PROTOTYPE_METHOD(target, "enableTop", _EnableTop);
  NODE_SET_PROTOTYPE_METHOD(target, "isEnabledTop", _IsEnabledTop);
  NODE_SET_PROTOTYPE_METHOD(target, "setMenuLabel", _SetMenuLabel);
  NODE_SET_PROTOTYPE_METHOD(target, "getMenuLabel", _GetMenuLabel);
  NODE_SET_PROTOTYPE_METHOD(target, "getMenuLabelText", _GetMenuLabelText);
  NODE_SET_PROTOTYPE_METHOD(target, "findMenuItem", _FindMenuItem);
  NODE_SET_PROTOTYPE_METHOD(target, "findItem", _FindItem);
  NODE_SET_PROTOTYPE_METHOD(target, "findMenu", _FindMenu);
  NODE_SET_PROTOTYPE_METHOD(target, "enable", _Enable);
  NODE_SET_PROTOTYPE_METHOD(target, "check", _Check);
  NODE_SET_PROTOTYPE_METHOD(target, "isChecked", _IsChecked);
  NODE_SET_PROTOTYPE_METHOD(target, "isEnabled", _IsEnabled);
  NODE_SET_PROTOTYPE_METHOD(target, "setLabel", _SetLabel);
  NODE_SET_PROTOTYPE_METHOD(target, "getLabel", _GetLabel);
  NODE_SET_PROTOTYPE_METHOD(target, "setHelpString", _SetHelpString);
  NODE_SET_PROTOTYPE_METHOD(target, "getHelpString", _GetHelpString);
  NODE_SET_PROTOTYPE_METHOD(target, "getFrame", _GetFrame);
  NODE_SET_PROTOTYPE_METHOD(target, "isAttached", _IsAttached);
  NODE_SET_PROTOTYPE_METHOD(target, "attach", _Attach);
  NODE_SET_PROTOTYPE_METHOD(target, "detach", _Detach);
  NODE_SET_PROTOTYPE_METHOD(target, "acceptsFocusFromKeyboard", _AcceptsFocusFromKeyboard);
  NODE_SET_PROTOTYPE_METHOD(target, "updateMenus", _UpdateMenus);
  NODE_SET_PROTOTYPE_METHOD(target, "canBeOutsideClientArea", _CanBeOutsideClientArea);
  
}

/*static*/ v8::Handle<v8::Value> wxNode_wxMenuBar::_init(const v8::Arguments& args) {
  v8::HandleScope scope;

  
  
  /*
   * id: _43397
   */
  if(args.Length() == 0) {
    

    wxNode_wxMenuBar *self = new wxNode_wxMenuBar();
    NodeExEvtHandlerImpl* evtHandler = dynamic_cast<NodeExEvtHandlerImpl*>(self);
    self->wrap(args.This(), self, evtHandler);
    return args.This();
  }
  
  /*
   * id: _43398
   */
  if(args.Length() == 1 && args[0]->IsNumber()) {
    long int style = (long int)args[0]->ToInt32()->Value(); /* type: _586  */
    

    wxNode_wxMenuBar *self = new wxNode_wxMenuBar(style);
    NodeExEvtHandlerImpl* evtHandler = dynamic_cast<NodeExEvtHandlerImpl*>(self);
    self->wrap(args.This(), self, evtHandler);
    return args.This();
  }
  
  /*
   * id: _43399
   */
  if(args.Length() == 4 && args[0]->IsNumber() && false && args[2]->IsString() && args[3]->IsNumber()) {
    unsigned int n = (unsigned int)args[0]->ToInt32()->Value(); /* type: _8620  */
    wxMenu* menus; /* type: _65194 ** */
    wxString* titles; /* type: _20525 * */
    long int style = (long int)args[3]->ToInt32()->Value(); /* type: _586  */
    

    wxNode_wxMenuBar *self = new wxNode_wxMenuBar(n, &menus, titles, style);
    NodeExEvtHandlerImpl* evtHandler = dynamic_cast<NodeExEvtHandlerImpl*>(self);
    self->wrap(args.This(), self, evtHandler);
    return args.This();
  }
  
  /*
   * id: _43399
   */
  if(args.Length() == 3 && args[0]->IsNumber() && false && args[2]->IsString()) {
    unsigned int n = (unsigned int)args[0]->ToInt32()->Value(); /* type: _8620  */
    wxMenu* menus; /* type: _65194 ** */
    wxString* titles; /* type: _20525 * */
    

    wxNode_wxMenuBar *self = new wxNode_wxMenuBar(n, &menus, titles);
    NodeExEvtHandlerImpl* evtHandler = dynamic_cast<NodeExEvtHandlerImpl*>(self);
    self->wrap(args.This(), self, evtHandler);
    return args.This();
  }
  
  

  std::ostringstream errStr;
  errStr << "Could not find matching constructor for arguments (class name: wxMenuBar).\n";                           \
  errStr << "  arg count: " << args.Length() << "\n";
  for(int i = 0; i < args.Length(); i++) {
    v8::String::AsciiValue argStr(args[i]);
    errStr << "  arg[" << i << "]: " << *argStr << "\n";
  }
  return v8::ThrowException(v8::Exception::TypeError(v8::String::New(errStr.str().c_str())));
}


/*static*/ v8::Handle<v8::Value> wxNode_wxMenuBar::_Append(const v8::Arguments& args) {
  v8::HandleScope scope;
  wxNode_wxMenuBar* self = unwrap<wxNode_wxMenuBar>(args.This());

  
  /*
   * id: _39536
   */
  if(args.Length() == 2 && (args[0]->IsNull() || args[0]->IsObject()) && args[1]->IsString()) {
    wxNode_wxMenu* menu = args[0]->IsNull() ? NULL : wxNodeObject::unwrap<wxNode_wxMenu>(args[0]->ToObject()); /* type: _52838 * */
    v8::String::AsciiValue title(args[1]->ToString()); /* type: _14808  */
    

    self->Append(menu, *title);

    // TODO: handle return type
    return v8::Undefined();
  }
  

  std::ostringstream errStr;
  errStr << "Could not find matching method for arguments (method name: Append).\n";                           \
  errStr << "  arg count: " << args.Length() << "\n";
  for(int i = 0; i < args.Length(); i++) {
    v8::String::AsciiValue argStr(args[i]);
    errStr << "  arg[" << i << "]: " << *argStr << "\n";
  }
  return v8::ThrowException(v8::Exception::TypeError(v8::String::New(errStr.str().c_str())));
}

/*static*/ v8::Handle<v8::Value> wxNode_wxMenuBar::_Insert(const v8::Arguments& args) {
  v8::HandleScope scope;
  wxNode_wxMenuBar* self = unwrap<wxNode_wxMenuBar>(args.This());

  
  /*
   * id: _39537
   */
  if(args.Length() == 3 && args[0]->IsNumber() && (args[1]->IsNull() || args[1]->IsObject()) && args[2]->IsString()) {
    unsigned int pos = (unsigned int)args[0]->ToInt32()->Value(); /* type: _8620  */
    wxNode_wxMenu* menu = args[1]->IsNull() ? NULL : wxNodeObject::unwrap<wxNode_wxMenu>(args[1]->ToObject()); /* type: _52838 * */
    v8::String::AsciiValue title(args[2]->ToString()); /* type: _14808  */
    

    self->Insert(pos, menu, *title);

    // TODO: handle return type
    return v8::Undefined();
  }
  

  std::ostringstream errStr;
  errStr << "Could not find matching method for arguments (method name: Insert).\n";                           \
  errStr << "  arg count: " << args.Length() << "\n";
  for(int i = 0; i < args.Length(); i++) {
    v8::String::AsciiValue argStr(args[i]);
    errStr << "  arg[" << i << "]: " << *argStr << "\n";
  }
  return v8::ThrowException(v8::Exception::TypeError(v8::String::New(errStr.str().c_str())));
}

/*static*/ v8::Handle<v8::Value> wxNode_wxMenuBar::_GetMenuCount(const v8::Arguments& args) {
  v8::HandleScope scope;
  wxNode_wxMenuBar* self = unwrap<wxNode_wxMenuBar>(args.This());

  
  /*
   * id: _39538
   */
  if(args.Length() == 0) {
    

    self->GetMenuCount();

    // TODO: handle return type
    return v8::Undefined();
  }
  

  std::ostringstream errStr;
  errStr << "Could not find matching method for arguments (method name: GetMenuCount).\n";                           \
  errStr << "  arg count: " << args.Length() << "\n";
  for(int i = 0; i < args.Length(); i++) {
    v8::String::AsciiValue argStr(args[i]);
    errStr << "  arg[" << i << "]: " << *argStr << "\n";
  }
  return v8::ThrowException(v8::Exception::TypeError(v8::String::New(errStr.str().c_str())));
}

/*static*/ v8::Handle<v8::Value> wxNode_wxMenuBar::_GetMenu(const v8::Arguments& args) {
  v8::HandleScope scope;
  wxNode_wxMenuBar* self = unwrap<wxNode_wxMenuBar>(args.This());

  
  /*
   * id: _39539
   */
  if(args.Length() == 1 && args[0]->IsNumber()) {
    unsigned int pos = (unsigned int)args[0]->ToInt32()->Value(); /* type: _8620  */
    

    self->GetMenu(pos);

    // TODO: handle return type
    return v8::Undefined();
  }
  

  std::ostringstream errStr;
  errStr << "Could not find matching method for arguments (method name: GetMenu).\n";                           \
  errStr << "  arg count: " << args.Length() << "\n";
  for(int i = 0; i < args.Length(); i++) {
    v8::String::AsciiValue argStr(args[i]);
    errStr << "  arg[" << i << "]: " << *argStr << "\n";
  }
  return v8::ThrowException(v8::Exception::TypeError(v8::String::New(errStr.str().c_str())));
}

/*static*/ v8::Handle<v8::Value> wxNode_wxMenuBar::_Replace(const v8::Arguments& args) {
  v8::HandleScope scope;
  wxNode_wxMenuBar* self = unwrap<wxNode_wxMenuBar>(args.This());

  
  /*
   * id: _39540
   */
  if(args.Length() == 3 && args[0]->IsNumber() && (args[1]->IsNull() || args[1]->IsObject()) && args[2]->IsString()) {
    unsigned int pos = (unsigned int)args[0]->ToInt32()->Value(); /* type: _8620  */
    wxNode_wxMenu* menu = args[1]->IsNull() ? NULL : wxNodeObject::unwrap<wxNode_wxMenu>(args[1]->ToObject()); /* type: _52838 * */
    v8::String::AsciiValue title(args[2]->ToString()); /* type: _14808  */
    

    self->Replace(pos, menu, *title);

    // TODO: handle return type
    return v8::Undefined();
  }
  

  std::ostringstream errStr;
  errStr << "Could not find matching method for arguments (method name: Replace).\n";                           \
  errStr << "  arg count: " << args.Length() << "\n";
  for(int i = 0; i < args.Length(); i++) {
    v8::String::AsciiValue argStr(args[i]);
    errStr << "  arg[" << i << "]: " << *argStr << "\n";
  }
  return v8::ThrowException(v8::Exception::TypeError(v8::String::New(errStr.str().c_str())));
}

/*static*/ v8::Handle<v8::Value> wxNode_wxMenuBar::_Remove(const v8::Arguments& args) {
  v8::HandleScope scope;
  wxNode_wxMenuBar* self = unwrap<wxNode_wxMenuBar>(args.This());

  
  /*
   * id: _39541
   */
  if(args.Length() == 1 && args[0]->IsNumber()) {
    unsigned int pos = (unsigned int)args[0]->ToInt32()->Value(); /* type: _8620  */
    

    self->Remove(pos);

    // TODO: handle return type
    return v8::Undefined();
  }
  

  std::ostringstream errStr;
  errStr << "Could not find matching method for arguments (method name: Remove).\n";                           \
  errStr << "  arg count: " << args.Length() << "\n";
  for(int i = 0; i < args.Length(); i++) {
    v8::String::AsciiValue argStr(args[i]);
    errStr << "  arg[" << i << "]: " << *argStr << "\n";
  }
  return v8::ThrowException(v8::Exception::TypeError(v8::String::New(errStr.str().c_str())));
}

/*static*/ v8::Handle<v8::Value> wxNode_wxMenuBar::_EnableTop(const v8::Arguments& args) {
  v8::HandleScope scope;
  wxNode_wxMenuBar* self = unwrap<wxNode_wxMenuBar>(args.This());

  
  /*
   * id: _39542
   */
  if(args.Length() == 2 && args[0]->IsNumber() && args[1]->IsBoolean()) {
    unsigned int pos = (unsigned int)args[0]->ToInt32()->Value(); /* type: _8620  */
    bool enable = args[1]->ToBoolean()->Value(); /* type: _14666  */
    

    self->EnableTop(pos, enable);

    // TODO: handle return type
    return v8::Undefined();
  }
  

  std::ostringstream errStr;
  errStr << "Could not find matching method for arguments (method name: EnableTop).\n";                           \
  errStr << "  arg count: " << args.Length() << "\n";
  for(int i = 0; i < args.Length(); i++) {
    v8::String::AsciiValue argStr(args[i]);
    errStr << "  arg[" << i << "]: " << *argStr << "\n";
  }
  return v8::ThrowException(v8::Exception::TypeError(v8::String::New(errStr.str().c_str())));
}

/*static*/ v8::Handle<v8::Value> wxNode_wxMenuBar::_IsEnabledTop(const v8::Arguments& args) {
  v8::HandleScope scope;
  wxNode_wxMenuBar* self = unwrap<wxNode_wxMenuBar>(args.This());

  
  /*
   * id: _39543
   */
  if(args.Length() == 1 && args[0]->IsNumber()) {
    unsigned int arg0 = (unsigned int)args[0]->ToInt32()->Value(); /* type: _8620  */
    

    self->IsEnabledTop(arg0);

    // TODO: handle return type
    return v8::Undefined();
  }
  

  std::ostringstream errStr;
  errStr << "Could not find matching method for arguments (method name: IsEnabledTop).\n";                           \
  errStr << "  arg count: " << args.Length() << "\n";
  for(int i = 0; i < args.Length(); i++) {
    v8::String::AsciiValue argStr(args[i]);
    errStr << "  arg[" << i << "]: " << *argStr << "\n";
  }
  return v8::ThrowException(v8::Exception::TypeError(v8::String::New(errStr.str().c_str())));
}

/*static*/ v8::Handle<v8::Value> wxNode_wxMenuBar::_SetMenuLabel(const v8::Arguments& args) {
  v8::HandleScope scope;
  wxNode_wxMenuBar* self = unwrap<wxNode_wxMenuBar>(args.This());

  
  /*
   * id: _39544
   */
  if(args.Length() == 2 && args[0]->IsNumber() && args[1]->IsString()) {
    unsigned int pos = (unsigned int)args[0]->ToInt32()->Value(); /* type: _8620  */
    v8::String::AsciiValue label(args[1]->ToString()); /* type: _14808  */
    

    self->SetMenuLabel(pos, *label);

    // TODO: handle return type
    return v8::Undefined();
  }
  

  std::ostringstream errStr;
  errStr << "Could not find matching method for arguments (method name: SetMenuLabel).\n";                           \
  errStr << "  arg count: " << args.Length() << "\n";
  for(int i = 0; i < args.Length(); i++) {
    v8::String::AsciiValue argStr(args[i]);
    errStr << "  arg[" << i << "]: " << *argStr << "\n";
  }
  return v8::ThrowException(v8::Exception::TypeError(v8::String::New(errStr.str().c_str())));
}

/*static*/ v8::Handle<v8::Value> wxNode_wxMenuBar::_GetMenuLabel(const v8::Arguments& args) {
  v8::HandleScope scope;
  wxNode_wxMenuBar* self = unwrap<wxNode_wxMenuBar>(args.This());

  
  /*
   * id: _39545
   */
  if(args.Length() == 1 && args[0]->IsNumber()) {
    unsigned int pos = (unsigned int)args[0]->ToInt32()->Value(); /* type: _8620  */
    

    self->GetMenuLabel(pos);

    // TODO: handle return type
    return v8::Undefined();
  }
  

  std::ostringstream errStr;
  errStr << "Could not find matching method for arguments (method name: GetMenuLabel).\n";                           \
  errStr << "  arg count: " << args.Length() << "\n";
  for(int i = 0; i < args.Length(); i++) {
    v8::String::AsciiValue argStr(args[i]);
    errStr << "  arg[" << i << "]: " << *argStr << "\n";
  }
  return v8::ThrowException(v8::Exception::TypeError(v8::String::New(errStr.str().c_str())));
}

/*static*/ v8::Handle<v8::Value> wxNode_wxMenuBar::_GetMenuLabelText(const v8::Arguments& args) {
  v8::HandleScope scope;
  wxNode_wxMenuBar* self = unwrap<wxNode_wxMenuBar>(args.This());

  
  /*
   * id: _39546
   */
  if(args.Length() == 1 && args[0]->IsNumber()) {
    unsigned int pos = (unsigned int)args[0]->ToInt32()->Value(); /* type: _8620  */
    

    self->GetMenuLabelText(pos);

    // TODO: handle return type
    return v8::Undefined();
  }
  

  std::ostringstream errStr;
  errStr << "Could not find matching method for arguments (method name: GetMenuLabelText).\n";                           \
  errStr << "  arg count: " << args.Length() << "\n";
  for(int i = 0; i < args.Length(); i++) {
    v8::String::AsciiValue argStr(args[i]);
    errStr << "  arg[" << i << "]: " << *argStr << "\n";
  }
  return v8::ThrowException(v8::Exception::TypeError(v8::String::New(errStr.str().c_str())));
}

/*static*/ v8::Handle<v8::Value> wxNode_wxMenuBar::_FindMenuItem(const v8::Arguments& args) {
  v8::HandleScope scope;
  wxNode_wxMenuBar* self = unwrap<wxNode_wxMenuBar>(args.This());

  
  /*
   * id: _39547
   */
  if(args.Length() == 2 && args[0]->IsString() && args[1]->IsString()) {
    v8::String::AsciiValue menu(args[0]->ToString()); /* type: _14808  */
    v8::String::AsciiValue item(args[1]->ToString()); /* type: _14808  */
    

    self->FindMenuItem(*menu, *item);

    // TODO: handle return type
    return v8::Undefined();
  }
  

  std::ostringstream errStr;
  errStr << "Could not find matching method for arguments (method name: FindMenuItem).\n";                           \
  errStr << "  arg count: " << args.Length() << "\n";
  for(int i = 0; i < args.Length(); i++) {
    v8::String::AsciiValue argStr(args[i]);
    errStr << "  arg[" << i << "]: " << *argStr << "\n";
  }
  return v8::ThrowException(v8::Exception::TypeError(v8::String::New(errStr.str().c_str())));
}

/*static*/ v8::Handle<v8::Value> wxNode_wxMenuBar::_FindItem(const v8::Arguments& args) {
  v8::HandleScope scope;
  wxNode_wxMenuBar* self = unwrap<wxNode_wxMenuBar>(args.This());

  
  /*
   * id: _39548
   */
  if(args.Length() == 2 && args[0]->IsNumber() && false) {
    int itemid = (int)args[0]->ToInt32()->Value(); /* type: _162  */
    wxMenu* menu; /* type: _65194 ** */
    

    self->FindItem(itemid, &menu);

    // TODO: handle return type
    return v8::Undefined();
  }
  
  /*
   * id: _39548
   */
  if(args.Length() == 1 && args[0]->IsNumber()) {
    int itemid = (int)args[0]->ToInt32()->Value(); /* type: _162  */
    

    self->FindItem(itemid);

    // TODO: handle return type
    return v8::Undefined();
  }
  

  std::ostringstream errStr;
  errStr << "Could not find matching method for arguments (method name: FindItem).\n";                           \
  errStr << "  arg count: " << args.Length() << "\n";
  for(int i = 0; i < args.Length(); i++) {
    v8::String::AsciiValue argStr(args[i]);
    errStr << "  arg[" << i << "]: " << *argStr << "\n";
  }
  return v8::ThrowException(v8::Exception::TypeError(v8::String::New(errStr.str().c_str())));
}

/*static*/ v8::Handle<v8::Value> wxNode_wxMenuBar::_FindMenu(const v8::Arguments& args) {
  v8::HandleScope scope;
  wxNode_wxMenuBar* self = unwrap<wxNode_wxMenuBar>(args.This());

  
  /*
   * id: _39549
   */
  if(args.Length() == 1 && args[0]->IsString()) {
    v8::String::AsciiValue title(args[0]->ToString()); /* type: _14808  */
    

    self->FindMenu(*title);

    // TODO: handle return type
    return v8::Undefined();
  }
  

  std::ostringstream errStr;
  errStr << "Could not find matching method for arguments (method name: FindMenu).\n";                           \
  errStr << "  arg count: " << args.Length() << "\n";
  for(int i = 0; i < args.Length(); i++) {
    v8::String::AsciiValue argStr(args[i]);
    errStr << "  arg[" << i << "]: " << *argStr << "\n";
  }
  return v8::ThrowException(v8::Exception::TypeError(v8::String::New(errStr.str().c_str())));
}

/*static*/ v8::Handle<v8::Value> wxNode_wxMenuBar::_Enable(const v8::Arguments& args) {
  v8::HandleScope scope;
  wxNode_wxMenuBar* self = unwrap<wxNode_wxMenuBar>(args.This());

  
  /*
   * id: _39550
   */
  if(args.Length() == 2 && args[0]->IsNumber() && args[1]->IsBoolean()) {
    int itemid = (int)args[0]->ToInt32()->Value(); /* type: _162  */
    bool enable = args[1]->ToBoolean()->Value(); /* type: _14666  */
    

    self->Enable(itemid, enable);

    // TODO: handle return type
    return v8::Undefined();
  }
  
  /*
   * id: _39563
   */
  if(args.Length() == 1 && args[0]->IsBoolean()) {
    bool enable = args[0]->ToBoolean()->Value(); /* type: _14666  */
    

    self->Enable(enable);

    // TODO: handle return type
    return v8::Undefined();
  }
  
  /*
   * id: _39563
   */
  if(args.Length() == 0) {
    

    self->Enable();

    // TODO: handle return type
    return v8::Undefined();
  }
  

  std::ostringstream errStr;
  errStr << "Could not find matching method for arguments (method name: Enable).\n";                           \
  errStr << "  arg count: " << args.Length() << "\n";
  for(int i = 0; i < args.Length(); i++) {
    v8::String::AsciiValue argStr(args[i]);
    errStr << "  arg[" << i << "]: " << *argStr << "\n";
  }
  return v8::ThrowException(v8::Exception::TypeError(v8::String::New(errStr.str().c_str())));
}

/*static*/ v8::Handle<v8::Value> wxNode_wxMenuBar::_Check(const v8::Arguments& args) {
  v8::HandleScope scope;
  wxNode_wxMenuBar* self = unwrap<wxNode_wxMenuBar>(args.This());

  
  /*
   * id: _39551
   */
  if(args.Length() == 2 && args[0]->IsNumber() && args[1]->IsBoolean()) {
    int itemid = (int)args[0]->ToInt32()->Value(); /* type: _162  */
    bool check = args[1]->ToBoolean()->Value(); /* type: _14666  */
    

    self->Check(itemid, check);

    // TODO: handle return type
    return v8::Undefined();
  }
  

  std::ostringstream errStr;
  errStr << "Could not find matching method for arguments (method name: Check).\n";                           \
  errStr << "  arg count: " << args.Length() << "\n";
  for(int i = 0; i < args.Length(); i++) {
    v8::String::AsciiValue argStr(args[i]);
    errStr << "  arg[" << i << "]: " << *argStr << "\n";
  }
  return v8::ThrowException(v8::Exception::TypeError(v8::String::New(errStr.str().c_str())));
}

/*static*/ v8::Handle<v8::Value> wxNode_wxMenuBar::_IsChecked(const v8::Arguments& args) {
  v8::HandleScope scope;
  wxNode_wxMenuBar* self = unwrap<wxNode_wxMenuBar>(args.This());

  
  /*
   * id: _39552
   */
  if(args.Length() == 1 && args[0]->IsNumber()) {
    int itemid = (int)args[0]->ToInt32()->Value(); /* type: _162  */
    

    self->IsChecked(itemid);

    // TODO: handle return type
    return v8::Undefined();
  }
  

  std::ostringstream errStr;
  errStr << "Could not find matching method for arguments (method name: IsChecked).\n";                           \
  errStr << "  arg count: " << args.Length() << "\n";
  for(int i = 0; i < args.Length(); i++) {
    v8::String::AsciiValue argStr(args[i]);
    errStr << "  arg[" << i << "]: " << *argStr << "\n";
  }
  return v8::ThrowException(v8::Exception::TypeError(v8::String::New(errStr.str().c_str())));
}

/*static*/ v8::Handle<v8::Value> wxNode_wxMenuBar::_IsEnabled(const v8::Arguments& args) {
  v8::HandleScope scope;
  wxNode_wxMenuBar* self = unwrap<wxNode_wxMenuBar>(args.This());

  
  /*
   * id: _39553
   */
  if(args.Length() == 1 && args[0]->IsNumber()) {
    int itemid = (int)args[0]->ToInt32()->Value(); /* type: _162  */
    

    self->IsEnabled(itemid);

    // TODO: handle return type
    return v8::Undefined();
  }
  
  /*
   * id: _39554
   */
  if(args.Length() == 0) {
    

    self->IsEnabled();

    // TODO: handle return type
    return v8::Undefined();
  }
  

  std::ostringstream errStr;
  errStr << "Could not find matching method for arguments (method name: IsEnabled).\n";                           \
  errStr << "  arg count: " << args.Length() << "\n";
  for(int i = 0; i < args.Length(); i++) {
    v8::String::AsciiValue argStr(args[i]);
    errStr << "  arg[" << i << "]: " << *argStr << "\n";
  }
  return v8::ThrowException(v8::Exception::TypeError(v8::String::New(errStr.str().c_str())));
}

/*static*/ v8::Handle<v8::Value> wxNode_wxMenuBar::_SetLabel(const v8::Arguments& args) {
  v8::HandleScope scope;
  wxNode_wxMenuBar* self = unwrap<wxNode_wxMenuBar>(args.This());

  
  /*
   * id: _39555
   */
  if(args.Length() == 2 && args[0]->IsNumber() && args[1]->IsString()) {
    int itemid = (int)args[0]->ToInt32()->Value(); /* type: _162  */
    v8::String::AsciiValue label(args[1]->ToString()); /* type: _14808  */
    

    self->SetLabel(itemid, *label);

    // TODO: handle return type
    return v8::Undefined();
  }
  
  /*
   * id: _39564
   */
  if(args.Length() == 1 && args[0]->IsString()) {
    v8::String::AsciiValue s(args[0]->ToString()); /* type: _14808  */
    

    self->SetLabel(*s);

    // TODO: handle return type
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

/*static*/ v8::Handle<v8::Value> wxNode_wxMenuBar::_GetLabel(const v8::Arguments& args) {
  v8::HandleScope scope;
  wxNode_wxMenuBar* self = unwrap<wxNode_wxMenuBar>(args.This());

  
  /*
   * id: _39556
   */
  if(args.Length() == 1 && args[0]->IsNumber()) {
    int itemid = (int)args[0]->ToInt32()->Value(); /* type: _162  */
    

    self->GetLabel(itemid);

    // TODO: handle return type
    return v8::Undefined();
  }
  
  /*
   * id: _39565
   */
  if(args.Length() == 0) {
    

    self->GetLabel();

    // TODO: handle return type
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

/*static*/ v8::Handle<v8::Value> wxNode_wxMenuBar::_SetHelpString(const v8::Arguments& args) {
  v8::HandleScope scope;
  wxNode_wxMenuBar* self = unwrap<wxNode_wxMenuBar>(args.This());

  
  /*
   * id: _39557
   */
  if(args.Length() == 2 && args[0]->IsNumber() && args[1]->IsString()) {
    int itemid = (int)args[0]->ToInt32()->Value(); /* type: _162  */
    v8::String::AsciiValue helpString(args[1]->ToString()); /* type: _14808  */
    

    self->SetHelpString(itemid, *helpString);

    // TODO: handle return type
    return v8::Undefined();
  }
  

  std::ostringstream errStr;
  errStr << "Could not find matching method for arguments (method name: SetHelpString).\n";                           \
  errStr << "  arg count: " << args.Length() << "\n";
  for(int i = 0; i < args.Length(); i++) {
    v8::String::AsciiValue argStr(args[i]);
    errStr << "  arg[" << i << "]: " << *argStr << "\n";
  }
  return v8::ThrowException(v8::Exception::TypeError(v8::String::New(errStr.str().c_str())));
}

/*static*/ v8::Handle<v8::Value> wxNode_wxMenuBar::_GetHelpString(const v8::Arguments& args) {
  v8::HandleScope scope;
  wxNode_wxMenuBar* self = unwrap<wxNode_wxMenuBar>(args.This());

  
  /*
   * id: _39558
   */
  if(args.Length() == 1 && args[0]->IsNumber()) {
    int itemid = (int)args[0]->ToInt32()->Value(); /* type: _162  */
    

    self->GetHelpString(itemid);

    // TODO: handle return type
    return v8::Undefined();
  }
  

  std::ostringstream errStr;
  errStr << "Could not find matching method for arguments (method name: GetHelpString).\n";                           \
  errStr << "  arg count: " << args.Length() << "\n";
  for(int i = 0; i < args.Length(); i++) {
    v8::String::AsciiValue argStr(args[i]);
    errStr << "  arg[" << i << "]: " << *argStr << "\n";
  }
  return v8::ThrowException(v8::Exception::TypeError(v8::String::New(errStr.str().c_str())));
}

/*static*/ v8::Handle<v8::Value> wxNode_wxMenuBar::_GetFrame(const v8::Arguments& args) {
  v8::HandleScope scope;
  wxNode_wxMenuBar* self = unwrap<wxNode_wxMenuBar>(args.This());

  
  /*
   * id: _39559
   */
  if(args.Length() == 0) {
    

    self->GetFrame();

    // TODO: handle return type
    return v8::Undefined();
  }
  

  std::ostringstream errStr;
  errStr << "Could not find matching method for arguments (method name: GetFrame).\n";                           \
  errStr << "  arg count: " << args.Length() << "\n";
  for(int i = 0; i < args.Length(); i++) {
    v8::String::AsciiValue argStr(args[i]);
    errStr << "  arg[" << i << "]: " << *argStr << "\n";
  }
  return v8::ThrowException(v8::Exception::TypeError(v8::String::New(errStr.str().c_str())));
}

/*static*/ v8::Handle<v8::Value> wxNode_wxMenuBar::_IsAttached(const v8::Arguments& args) {
  v8::HandleScope scope;
  wxNode_wxMenuBar* self = unwrap<wxNode_wxMenuBar>(args.This());

  
  /*
   * id: _39560
   */
  if(args.Length() == 0) {
    

    self->IsAttached();

    // TODO: handle return type
    return v8::Undefined();
  }
  

  std::ostringstream errStr;
  errStr << "Could not find matching method for arguments (method name: IsAttached).\n";                           \
  errStr << "  arg count: " << args.Length() << "\n";
  for(int i = 0; i < args.Length(); i++) {
    v8::String::AsciiValue argStr(args[i]);
    errStr << "  arg[" << i << "]: " << *argStr << "\n";
  }
  return v8::ThrowException(v8::Exception::TypeError(v8::String::New(errStr.str().c_str())));
}

/*static*/ v8::Handle<v8::Value> wxNode_wxMenuBar::_Attach(const v8::Arguments& args) {
  v8::HandleScope scope;
  wxNode_wxMenuBar* self = unwrap<wxNode_wxMenuBar>(args.This());

  
  /*
   * id: _39561
   */
  if(args.Length() == 1 && (args[0]->IsNull() || args[0]->IsObject())) {
    wxNode_wxFrame* frame = args[0]->IsNull() ? NULL : wxNodeObject::unwrap<wxNode_wxFrame>(args[0]->ToObject()); /* type: _32629 * */
    

    self->Attach(frame);

    // TODO: handle return type
    return v8::Undefined();
  }
  

  std::ostringstream errStr;
  errStr << "Could not find matching method for arguments (method name: Attach).\n";                           \
  errStr << "  arg count: " << args.Length() << "\n";
  for(int i = 0; i < args.Length(); i++) {
    v8::String::AsciiValue argStr(args[i]);
    errStr << "  arg[" << i << "]: " << *argStr << "\n";
  }
  return v8::ThrowException(v8::Exception::TypeError(v8::String::New(errStr.str().c_str())));
}

/*static*/ v8::Handle<v8::Value> wxNode_wxMenuBar::_Detach(const v8::Arguments& args) {
  v8::HandleScope scope;
  wxNode_wxMenuBar* self = unwrap<wxNode_wxMenuBar>(args.This());

  
  /*
   * id: _39562
   */
  if(args.Length() == 0) {
    

    self->Detach();

    // TODO: handle return type
    return v8::Undefined();
  }
  

  std::ostringstream errStr;
  errStr << "Could not find matching method for arguments (method name: Detach).\n";                           \
  errStr << "  arg count: " << args.Length() << "\n";
  for(int i = 0; i < args.Length(); i++) {
    v8::String::AsciiValue argStr(args[i]);
    errStr << "  arg[" << i << "]: " << *argStr << "\n";
  }
  return v8::ThrowException(v8::Exception::TypeError(v8::String::New(errStr.str().c_str())));
}

/*static*/ v8::Handle<v8::Value> wxNode_wxMenuBar::_AcceptsFocusFromKeyboard(const v8::Arguments& args) {
  v8::HandleScope scope;
  wxNode_wxMenuBar* self = unwrap<wxNode_wxMenuBar>(args.This());

  
  /*
   * id: _39566
   */
  if(args.Length() == 0) {
    

    self->AcceptsFocusFromKeyboard();

    // TODO: handle return type
    return v8::Undefined();
  }
  

  std::ostringstream errStr;
  errStr << "Could not find matching method for arguments (method name: AcceptsFocusFromKeyboard).\n";                           \
  errStr << "  arg count: " << args.Length() << "\n";
  for(int i = 0; i < args.Length(); i++) {
    v8::String::AsciiValue argStr(args[i]);
    errStr << "  arg[" << i << "]: " << *argStr << "\n";
  }
  return v8::ThrowException(v8::Exception::TypeError(v8::String::New(errStr.str().c_str())));
}

/*static*/ v8::Handle<v8::Value> wxNode_wxMenuBar::_UpdateMenus(const v8::Arguments& args) {
  v8::HandleScope scope;
  wxNode_wxMenuBar* self = unwrap<wxNode_wxMenuBar>(args.This());

  
  /*
   * id: _39567
   */
  if(args.Length() == 0) {
    

    self->UpdateMenus();

    // TODO: handle return type
    return v8::Undefined();
  }
  

  std::ostringstream errStr;
  errStr << "Could not find matching method for arguments (method name: UpdateMenus).\n";                           \
  errStr << "  arg count: " << args.Length() << "\n";
  for(int i = 0; i < args.Length(); i++) {
    v8::String::AsciiValue argStr(args[i]);
    errStr << "  arg[" << i << "]: " << *argStr << "\n";
  }
  return v8::ThrowException(v8::Exception::TypeError(v8::String::New(errStr.str().c_str())));
}

/*static*/ v8::Handle<v8::Value> wxNode_wxMenuBar::_CanBeOutsideClientArea(const v8::Arguments& args) {
  v8::HandleScope scope;
  wxNode_wxMenuBar* self = unwrap<wxNode_wxMenuBar>(args.This());

  
  /*
   * id: _39568
   */
  if(args.Length() == 0) {
    

    self->CanBeOutsideClientArea();

    // TODO: handle return type
    return v8::Undefined();
  }
  

  std::ostringstream errStr;
  errStr << "Could not find matching method for arguments (method name: CanBeOutsideClientArea).\n";                           \
  errStr << "  arg count: " << args.Length() << "\n";
  for(int i = 0; i < args.Length(); i++) {
    v8::String::AsciiValue argStr(args[i]);
    errStr << "  arg[" << i << "]: " << *argStr << "\n";
  }
  return v8::ThrowException(v8::Exception::TypeError(v8::String::New(errStr.str().c_str())));
}

