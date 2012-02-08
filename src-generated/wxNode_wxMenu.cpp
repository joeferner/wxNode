
#include <sstream>
#include "wxNode_wxMenu.h"
#include "wxNode_wxEvtHandler.h"
#include "wxNode_wxMenuItem.h"
#include "wxNode_wxMenuItemList.h"
#include "wxNode_wxWindow.h"
#include "wxNode_wxMenuBar.h"


/* static */ v8::Persistent<v8::FunctionTemplate> wxNode_wxMenu::s_ct;



wxNode_wxMenu::wxNode_wxMenu(const wxString& title, long int style)
  : wxMenu(title, style)
{

}

wxNode_wxMenu::wxNode_wxMenu(const wxString& title)
  : wxMenu(title)
{

}

wxNode_wxMenu::wxNode_wxMenu(long int style)
  : wxMenu(style)
{

}

wxNode_wxMenu::wxNode_wxMenu()
  : wxMenu()
{

}




/*static*/ void wxNode_wxMenu::Init(v8::Handle<v8::Object> target) {
  v8::HandleScope scope;

  v8::Local<v8::FunctionTemplate> t = v8::FunctionTemplate::New(wxNodeObject::NewFunc);
  s_ct = v8::Persistent<v8::FunctionTemplate>::New(t);
  s_ct->InstanceTemplate()->SetInternalFieldCount(2);
  s_ct->SetClassName(v8::String::NewSymbol("wxMenu"));

  NODE_SET_PROTOTYPE_METHOD(s_ct, "init", _init);
  AddMethods(s_ct);

  target->Set(v8::String::NewSymbol("wxMenu"), s_ct->GetFunction());
}

/*static*/ void wxNode_wxMenu::AddMethods(v8::Handle<v8::FunctionTemplate> target) {
  wxNode_wxEvtHandler::AddMethods(target);
  NODE_SET_PROTOTYPE_METHOD(target, "append", _Append);
  NODE_SET_PROTOTYPE_METHOD(target, "appendSeparator", _AppendSeparator);
  NODE_SET_PROTOTYPE_METHOD(target, "appendCheckItem", _AppendCheckItem);
  NODE_SET_PROTOTYPE_METHOD(target, "appendRadioItem", _AppendRadioItem);
  NODE_SET_PROTOTYPE_METHOD(target, "appendSubMenu", _AppendSubMenu);
  NODE_SET_PROTOTYPE_METHOD(target, "break", _Break);
  NODE_SET_PROTOTYPE_METHOD(target, "insert", _Insert);
  NODE_SET_PROTOTYPE_METHOD(target, "insertSeparator", _InsertSeparator);
  NODE_SET_PROTOTYPE_METHOD(target, "insertCheckItem", _InsertCheckItem);
  NODE_SET_PROTOTYPE_METHOD(target, "insertRadioItem", _InsertRadioItem);
  NODE_SET_PROTOTYPE_METHOD(target, "prepend", _Prepend);
  NODE_SET_PROTOTYPE_METHOD(target, "prependSeparator", _PrependSeparator);
  NODE_SET_PROTOTYPE_METHOD(target, "prependCheckItem", _PrependCheckItem);
  NODE_SET_PROTOTYPE_METHOD(target, "prependRadioItem", _PrependRadioItem);
  NODE_SET_PROTOTYPE_METHOD(target, "remove", _Remove);
  NODE_SET_PROTOTYPE_METHOD(target, "delete", _Delete);
  NODE_SET_PROTOTYPE_METHOD(target, "destroy", _Destroy);
  NODE_SET_PROTOTYPE_METHOD(target, "getMenuItemCount", _GetMenuItemCount);
  NODE_SET_PROTOTYPE_METHOD(target, "getMenuItems", _GetMenuItems);
  NODE_SET_PROTOTYPE_METHOD(target, "findItem", _FindItem);
  NODE_SET_PROTOTYPE_METHOD(target, "findItemByPosition", _FindItemByPosition);
  NODE_SET_PROTOTYPE_METHOD(target, "enable", _Enable);
  NODE_SET_PROTOTYPE_METHOD(target, "isEnabled", _IsEnabled);
  NODE_SET_PROTOTYPE_METHOD(target, "check", _Check);
  NODE_SET_PROTOTYPE_METHOD(target, "isChecked", _IsChecked);
  NODE_SET_PROTOTYPE_METHOD(target, "setLabel", _SetLabel);
  NODE_SET_PROTOTYPE_METHOD(target, "getLabel", _GetLabel);
  NODE_SET_PROTOTYPE_METHOD(target, "getLabelText", _GetLabelText);
  NODE_SET_PROTOTYPE_METHOD(target, "setHelpString", _SetHelpString);
  NODE_SET_PROTOTYPE_METHOD(target, "getHelpString", _GetHelpString);
  NODE_SET_PROTOTYPE_METHOD(target, "setTitle", _SetTitle);
  NODE_SET_PROTOTYPE_METHOD(target, "getTitle", _GetTitle);
  NODE_SET_PROTOTYPE_METHOD(target, "setEventHandler", _SetEventHandler);
  NODE_SET_PROTOTYPE_METHOD(target, "getEventHandler", _GetEventHandler);
  NODE_SET_PROTOTYPE_METHOD(target, "setInvokingWindow", _SetInvokingWindow);
  NODE_SET_PROTOTYPE_METHOD(target, "getInvokingWindow", _GetInvokingWindow);
  NODE_SET_PROTOTYPE_METHOD(target, "getWindow", _GetWindow);
  NODE_SET_PROTOTYPE_METHOD(target, "getStyle", _GetStyle);
  NODE_SET_PROTOTYPE_METHOD(target, "updateUI", _UpdateUI);
  NODE_SET_PROTOTYPE_METHOD(target, "getMenuBar", _GetMenuBar);
  NODE_SET_PROTOTYPE_METHOD(target, "attach", _Attach);
  NODE_SET_PROTOTYPE_METHOD(target, "detach", _Detach);
  NODE_SET_PROTOTYPE_METHOD(target, "isAttached", _IsAttached);
  NODE_SET_PROTOTYPE_METHOD(target, "setParent", _SetParent);
  NODE_SET_PROTOTYPE_METHOD(target, "getParent", _GetParent);
  NODE_SET_PROTOTYPE_METHOD(target, "findChildItem", _FindChildItem);
  NODE_SET_PROTOTYPE_METHOD(target, "sendEvent", _SendEvent);
  NODE_SET_METHOD(target, "lockAccels", _LockAccels);
  
}

/*static*/ v8::Handle<v8::Value> wxNode_wxMenu::New(wxNode_wxMenu* obj) {
  v8::HandleScope scope;

  if(obj == NULL) {
    return scope.Close(v8::Null());
  }
  
  v8::Local<v8::FunctionTemplate> returnObjFt = v8::FunctionTemplate::New(wxNodeObject::NewFunc);
  returnObjFt->InstanceTemplate()->SetInternalFieldCount(2);
  returnObjFt->SetClassName(v8::String::NewSymbol("wxMenu"));
  wxNode_wxMenu::AddMethods(returnObjFt);

  v8::Local<v8::Function> returnObjFn = returnObjFt->GetFunction();
  v8::Handle<v8::Value> returnObjArgs[0];
  v8::Local<v8::Object> returnObj = returnObjFn->CallAsConstructor(0, returnObjArgs)->ToObject();
  returnObj->SetPointerInInternalField(0, obj);
  NodeExEvtHandlerImpl* evtHandler = dynamic_cast<NodeExEvtHandlerImpl*>(obj);
  returnObj->SetPointerInInternalField(1, evtHandler);

  return scope.Close(returnObj);
}

/*static*/ v8::Handle<v8::Value> wxNode_wxMenu::New(wxMenu* obj) {
  v8::HandleScope scope;

  if(obj == NULL) {
    return scope.Close(v8::Null());
  }
  
  v8::Local<v8::FunctionTemplate> returnObjFt = v8::FunctionTemplate::New(wxNodeObject::NewFunc);
  returnObjFt->InstanceTemplate()->SetInternalFieldCount(2);
  returnObjFt->SetClassName(v8::String::NewSymbol("wxMenu"));
  wxNode_wxMenu::AddMethods(returnObjFt);

  v8::Local<v8::Function> returnObjFn = returnObjFt->GetFunction();
  v8::Handle<v8::Value> returnObjArgs[0];
  v8::Local<v8::Object> returnObj = returnObjFn->CallAsConstructor(0, returnObjArgs)->ToObject();
  returnObj->SetPointerInInternalField(0, obj);
  returnObj->SetPointerInInternalField(1, new NodeExEvtHandlerImplWrap(returnObj));

  return scope.Close(returnObj);
}

/*static*/ v8::Handle<v8::Value> wxNode_wxMenu::NewCopy(wxMenu& obj) {
  v8::HandleScope scope;
  wxNode_wxMenu* returnVal = new wxNode_wxMenu();
  memcpy(dynamic_cast<wxMenu*>(returnVal), &obj, sizeof(wxMenu));
  return scope.Close(New(returnVal));

}

/*static*/ bool wxNode_wxMenu::AssignableFrom(const v8::Handle<v8::String>& className) {
  v8::String::AsciiValue classNameStr(className);
  return AssignableFrom(*classNameStr);
}

/*static*/ bool wxNode_wxMenu::AssignableFrom(const char* className) {
  if(!strcmp("wxMenu", className)) { return true; }
  
  if(!strcmp("wxMenu", className)) { return true; }


  return false;
}

/*static*/ v8::Handle<v8::Value> wxNode_wxMenu::_init(const v8::Arguments& args) {
  v8::HandleScope scope;

  
  
  /*
   * id: _17680
   */
  if(args.Length() == 2 && args[0]->IsString() && args[1]->IsNumber()) {
    v8::String::AsciiValue title(args[0]->ToString()); /* type: _14808  */
    long int style = (long int)args[1]->ToInt32()->Value(); /* type: _586  */
    

    wxNode_wxMenu *self = new wxNode_wxMenu(*title, style);
    NodeExEvtHandlerImpl* evtHandler = dynamic_cast<NodeExEvtHandlerImpl*>(self);
    self->wrap(args.This(), self, evtHandler);
    return args.This();
  }
  
  /*
   * id: _17680
   */
  if(args.Length() == 1 && args[0]->IsString()) {
    v8::String::AsciiValue title(args[0]->ToString()); /* type: _14808  */
    

    wxNode_wxMenu *self = new wxNode_wxMenu(*title);
    NodeExEvtHandlerImpl* evtHandler = dynamic_cast<NodeExEvtHandlerImpl*>(self);
    self->wrap(args.This(), self, evtHandler);
    return args.This();
  }
  
  /*
   * id: _17681
   */
  if(args.Length() == 1 && args[0]->IsNumber()) {
    long int style = (long int)args[0]->ToInt32()->Value(); /* type: _586  */
    

    wxNode_wxMenu *self = new wxNode_wxMenu(style);
    NodeExEvtHandlerImpl* evtHandler = dynamic_cast<NodeExEvtHandlerImpl*>(self);
    self->wrap(args.This(), self, evtHandler);
    return args.This();
  }
  
  /*
   * id: _17681
   */
  if(args.Length() == 0) {
    

    wxNode_wxMenu *self = new wxNode_wxMenu();
    NodeExEvtHandlerImpl* evtHandler = dynamic_cast<NodeExEvtHandlerImpl*>(self);
    self->wrap(args.This(), self, evtHandler);
    return args.This();
  }
  
  

  std::ostringstream errStr;
  errStr << "Could not find matching constructor for arguments (class name: wxMenu).\n";
  errStr << "  arg count: " << args.Length() << "\n";
  for(int i = 0; i < args.Length(); i++) {
    v8::String::AsciiValue argStr(args[i]);
    errStr << "  arg[" << i << "]: " << *argStr << "\n";
  }
  return v8::ThrowException(v8::Exception::TypeError(v8::String::New(errStr.str().c_str())));
}


/*static*/ v8::Handle<v8::Value> wxNode_wxMenu::_Append(const v8::Arguments& args) {
  v8::HandleScope scope;
  wxNode_wxMenu* self = unwrap<wxNode_wxMenu>(args.This());

  
  /*
   * id: _44715
   */
  if(args.Length() == 4 && args[0]->IsNumber() && args[1]->IsString() && args[2]->IsString() && args[3]->IsNumber()) {
    int itemid = (int)args[0]->ToInt32()->Value(); /* type: _162  */
    v8::String::AsciiValue text(args[1]->ToString()); /* type: _14808  */
    v8::String::AsciiValue help(args[2]->ToString()); /* type: _14808  */
    wxItemKind kind = (wxItemKind)args[3]->ToNumber()->Value(); /* type: _4625  */
    

    wxMenuItem* returnVal = self->Append(itemid, *text, *help, kind);

    return scope.Close(wxNode_wxMenuItem::New(returnVal));
  }
  
  /*
   * id: _44715
   */
  if(args.Length() == 3 && args[0]->IsNumber() && args[1]->IsString() && args[2]->IsString()) {
    int itemid = (int)args[0]->ToInt32()->Value(); /* type: _162  */
    v8::String::AsciiValue text(args[1]->ToString()); /* type: _14808  */
    v8::String::AsciiValue help(args[2]->ToString()); /* type: _14808  */
    

    wxMenuItem* returnVal = self->Append(itemid, *text, *help);

    return scope.Close(wxNode_wxMenuItem::New(returnVal));
  }
  
  /*
   * id: _44715
   */
  if(args.Length() == 2 && args[0]->IsNumber() && args[1]->IsString()) {
    int itemid = (int)args[0]->ToInt32()->Value(); /* type: _162  */
    v8::String::AsciiValue text(args[1]->ToString()); /* type: _14808  */
    

    wxMenuItem* returnVal = self->Append(itemid, *text);

    return scope.Close(wxNode_wxMenuItem::New(returnVal));
  }
  
  /*
   * id: _44715
   */
  if(args.Length() == 1 && args[0]->IsNumber()) {
    int itemid = (int)args[0]->ToInt32()->Value(); /* type: _162  */
    

    wxMenuItem* returnVal = self->Append(itemid);

    return scope.Close(wxNode_wxMenuItem::New(returnVal));
  }
  
  /*
   * id: _44720
   */
  if(args.Length() == 1 && (args[0]->IsNull() || (args[0]->IsObject() && wxNode_wxMenuItem::AssignableFrom(args[0]->ToObject()->GetConstructorName())))) {
    wxNode_wxMenuItem* item = args[0]->IsNull() ? NULL : wxNodeObject::unwrap<wxNode_wxMenuItem>(args[0]->ToObject()); /* type: _51683 * */
    

    wxMenuItem* returnVal = self->Append(item);

    return scope.Close(wxNode_wxMenuItem::New(returnVal));
  }
  
  /*
   * id: _44772
   */
  if(args.Length() == 4 && args[0]->IsNumber() && args[1]->IsString() && args[2]->IsString() && args[3]->IsBoolean()) {
    int itemid = (int)args[0]->ToInt32()->Value(); /* type: _162  */
    v8::String::AsciiValue text(args[1]->ToString()); /* type: _14808  */
    v8::String::AsciiValue help(args[2]->ToString()); /* type: _14808  */
    bool isCheckable = args[3]->ToBoolean()->Value(); /* type: _14666  */
    

    self->Append(itemid, *text, *help, isCheckable);

    return v8::Undefined();
  }
  
  /*
   * id: _44773
   */
  if(args.Length() == 4 && args[0]->IsNumber() && args[1]->IsString() && (args[2]->IsNull() || (args[2]->IsObject() && wxNode_wxMenu::AssignableFrom(args[2]->ToObject()->GetConstructorName()))) && args[3]->IsString()) {
    int itemid = (int)args[0]->ToInt32()->Value(); /* type: _162  */
    v8::String::AsciiValue text(args[1]->ToString()); /* type: _14808  */
    wxNode_wxMenu* submenu = args[2]->IsNull() ? NULL : wxNodeObject::unwrap<wxNode_wxMenu>(args[2]->ToObject()); /* type: _52838 * */
    v8::String::AsciiValue help(args[3]->ToString()); /* type: _14808  */
    

    wxMenuItem* returnVal = self->Append(itemid, *text, submenu, *help);

    return scope.Close(wxNode_wxMenuItem::New(returnVal));
  }
  
  /*
   * id: _44773
   */
  if(args.Length() == 3 && args[0]->IsNumber() && args[1]->IsString() && (args[2]->IsNull() || (args[2]->IsObject() && wxNode_wxMenu::AssignableFrom(args[2]->ToObject()->GetConstructorName())))) {
    int itemid = (int)args[0]->ToInt32()->Value(); /* type: _162  */
    v8::String::AsciiValue text(args[1]->ToString()); /* type: _14808  */
    wxNode_wxMenu* submenu = args[2]->IsNull() ? NULL : wxNodeObject::unwrap<wxNode_wxMenu>(args[2]->ToObject()); /* type: _52838 * */
    

    wxMenuItem* returnVal = self->Append(itemid, *text, submenu);

    return scope.Close(wxNode_wxMenuItem::New(returnVal));
  }
  

  std::ostringstream errStr;
  errStr << "Could not find matching method for arguments (method name: wxMenu::Append).\n";
  errStr << "  arg count: " << args.Length() << "\n";
  for(int i = 0; i < args.Length(); i++) {
    v8::String::AsciiValue argStr(args[i]);
    errStr << "  arg[" << i << "]: " << *argStr << "\n";
  }
  return v8::ThrowException(v8::Exception::TypeError(v8::String::New(errStr.str().c_str())));
}

/*static*/ v8::Handle<v8::Value> wxNode_wxMenu::_AppendSeparator(const v8::Arguments& args) {
  v8::HandleScope scope;
  wxNode_wxMenu* self = unwrap<wxNode_wxMenu>(args.This());

  
  /*
   * id: _44716
   */
  if(args.Length() == 0) {
    

    wxMenuItem* returnVal = self->AppendSeparator();

    return scope.Close(wxNode_wxMenuItem::New(returnVal));
  }
  

  std::ostringstream errStr;
  errStr << "Could not find matching method for arguments (method name: wxMenu::AppendSeparator).\n";
  errStr << "  arg count: " << args.Length() << "\n";
  for(int i = 0; i < args.Length(); i++) {
    v8::String::AsciiValue argStr(args[i]);
    errStr << "  arg[" << i << "]: " << *argStr << "\n";
  }
  return v8::ThrowException(v8::Exception::TypeError(v8::String::New(errStr.str().c_str())));
}

/*static*/ v8::Handle<v8::Value> wxNode_wxMenu::_AppendCheckItem(const v8::Arguments& args) {
  v8::HandleScope scope;
  wxNode_wxMenu* self = unwrap<wxNode_wxMenu>(args.This());

  
  /*
   * id: _44717
   */
  if(args.Length() == 3 && args[0]->IsNumber() && args[1]->IsString() && args[2]->IsString()) {
    int itemid = (int)args[0]->ToInt32()->Value(); /* type: _162  */
    v8::String::AsciiValue text(args[1]->ToString()); /* type: _14808  */
    v8::String::AsciiValue help(args[2]->ToString()); /* type: _14808  */
    

    wxMenuItem* returnVal = self->AppendCheckItem(itemid, *text, *help);

    return scope.Close(wxNode_wxMenuItem::New(returnVal));
  }
  
  /*
   * id: _44717
   */
  if(args.Length() == 2 && args[0]->IsNumber() && args[1]->IsString()) {
    int itemid = (int)args[0]->ToInt32()->Value(); /* type: _162  */
    v8::String::AsciiValue text(args[1]->ToString()); /* type: _14808  */
    

    wxMenuItem* returnVal = self->AppendCheckItem(itemid, *text);

    return scope.Close(wxNode_wxMenuItem::New(returnVal));
  }
  

  std::ostringstream errStr;
  errStr << "Could not find matching method for arguments (method name: wxMenu::AppendCheckItem).\n";
  errStr << "  arg count: " << args.Length() << "\n";
  for(int i = 0; i < args.Length(); i++) {
    v8::String::AsciiValue argStr(args[i]);
    errStr << "  arg[" << i << "]: " << *argStr << "\n";
  }
  return v8::ThrowException(v8::Exception::TypeError(v8::String::New(errStr.str().c_str())));
}

/*static*/ v8::Handle<v8::Value> wxNode_wxMenu::_AppendRadioItem(const v8::Arguments& args) {
  v8::HandleScope scope;
  wxNode_wxMenu* self = unwrap<wxNode_wxMenu>(args.This());

  
  /*
   * id: _44718
   */
  if(args.Length() == 3 && args[0]->IsNumber() && args[1]->IsString() && args[2]->IsString()) {
    int itemid = (int)args[0]->ToInt32()->Value(); /* type: _162  */
    v8::String::AsciiValue text(args[1]->ToString()); /* type: _14808  */
    v8::String::AsciiValue help(args[2]->ToString()); /* type: _14808  */
    

    wxMenuItem* returnVal = self->AppendRadioItem(itemid, *text, *help);

    return scope.Close(wxNode_wxMenuItem::New(returnVal));
  }
  
  /*
   * id: _44718
   */
  if(args.Length() == 2 && args[0]->IsNumber() && args[1]->IsString()) {
    int itemid = (int)args[0]->ToInt32()->Value(); /* type: _162  */
    v8::String::AsciiValue text(args[1]->ToString()); /* type: _14808  */
    

    wxMenuItem* returnVal = self->AppendRadioItem(itemid, *text);

    return scope.Close(wxNode_wxMenuItem::New(returnVal));
  }
  

  std::ostringstream errStr;
  errStr << "Could not find matching method for arguments (method name: wxMenu::AppendRadioItem).\n";
  errStr << "  arg count: " << args.Length() << "\n";
  for(int i = 0; i < args.Length(); i++) {
    v8::String::AsciiValue argStr(args[i]);
    errStr << "  arg[" << i << "]: " << *argStr << "\n";
  }
  return v8::ThrowException(v8::Exception::TypeError(v8::String::New(errStr.str().c_str())));
}

/*static*/ v8::Handle<v8::Value> wxNode_wxMenu::_AppendSubMenu(const v8::Arguments& args) {
  v8::HandleScope scope;
  wxNode_wxMenu* self = unwrap<wxNode_wxMenu>(args.This());

  
  /*
   * id: _44719
   */
  if(args.Length() == 3 && (args[0]->IsNull() || (args[0]->IsObject() && wxNode_wxMenu::AssignableFrom(args[0]->ToObject()->GetConstructorName()))) && args[1]->IsString() && args[2]->IsString()) {
    wxNode_wxMenu* submenu = args[0]->IsNull() ? NULL : wxNodeObject::unwrap<wxNode_wxMenu>(args[0]->ToObject()); /* type: _52838 * */
    v8::String::AsciiValue text(args[1]->ToString()); /* type: _14808  */
    v8::String::AsciiValue help(args[2]->ToString()); /* type: _14808  */
    

    wxMenuItem* returnVal = self->AppendSubMenu(submenu, *text, *help);

    return scope.Close(wxNode_wxMenuItem::New(returnVal));
  }
  
  /*
   * id: _44719
   */
  if(args.Length() == 2 && (args[0]->IsNull() || (args[0]->IsObject() && wxNode_wxMenu::AssignableFrom(args[0]->ToObject()->GetConstructorName()))) && args[1]->IsString()) {
    wxNode_wxMenu* submenu = args[0]->IsNull() ? NULL : wxNodeObject::unwrap<wxNode_wxMenu>(args[0]->ToObject()); /* type: _52838 * */
    v8::String::AsciiValue text(args[1]->ToString()); /* type: _14808  */
    

    wxMenuItem* returnVal = self->AppendSubMenu(submenu, *text);

    return scope.Close(wxNode_wxMenuItem::New(returnVal));
  }
  

  std::ostringstream errStr;
  errStr << "Could not find matching method for arguments (method name: wxMenu::AppendSubMenu).\n";
  errStr << "  arg count: " << args.Length() << "\n";
  for(int i = 0; i < args.Length(); i++) {
    v8::String::AsciiValue argStr(args[i]);
    errStr << "  arg[" << i << "]: " << *argStr << "\n";
  }
  return v8::ThrowException(v8::Exception::TypeError(v8::String::New(errStr.str().c_str())));
}

/*static*/ v8::Handle<v8::Value> wxNode_wxMenu::_Break(const v8::Arguments& args) {
  v8::HandleScope scope;
  wxNode_wxMenu* self = unwrap<wxNode_wxMenu>(args.This());

  
  /*
   * id: _44721
   */
  if(args.Length() == 0) {
    

    self->Break();

    return v8::Undefined();
  }
  

  std::ostringstream errStr;
  errStr << "Could not find matching method for arguments (method name: wxMenu::Break).\n";
  errStr << "  arg count: " << args.Length() << "\n";
  for(int i = 0; i < args.Length(); i++) {
    v8::String::AsciiValue argStr(args[i]);
    errStr << "  arg[" << i << "]: " << *argStr << "\n";
  }
  return v8::ThrowException(v8::Exception::TypeError(v8::String::New(errStr.str().c_str())));
}

/*static*/ v8::Handle<v8::Value> wxNode_wxMenu::_Insert(const v8::Arguments& args) {
  v8::HandleScope scope;
  wxNode_wxMenu* self = unwrap<wxNode_wxMenu>(args.This());

  
  /*
   * id: _44722
   */
  if(args.Length() == 2 && args[0]->IsNumber() && (args[1]->IsNull() || (args[1]->IsObject() && wxNode_wxMenuItem::AssignableFrom(args[1]->ToObject()->GetConstructorName())))) {
    unsigned int pos = (unsigned int)args[0]->ToInt32()->Value(); /* type: _8620  */
    wxNode_wxMenuItem* item = args[1]->IsNull() ? NULL : wxNodeObject::unwrap<wxNode_wxMenuItem>(args[1]->ToObject()); /* type: _51683 * */
    

    wxMenuItem* returnVal = self->Insert(pos, item);

    return scope.Close(wxNode_wxMenuItem::New(returnVal));
  }
  
  /*
   * id: _44723
   */
  if(args.Length() == 5 && args[0]->IsNumber() && args[1]->IsNumber() && args[2]->IsString() && args[3]->IsString() && args[4]->IsNumber()) {
    unsigned int pos = (unsigned int)args[0]->ToInt32()->Value(); /* type: _8620  */
    int itemid = (int)args[1]->ToInt32()->Value(); /* type: _162  */
    v8::String::AsciiValue text(args[2]->ToString()); /* type: _14808  */
    v8::String::AsciiValue help(args[3]->ToString()); /* type: _14808  */
    wxItemKind kind = (wxItemKind)args[4]->ToNumber()->Value(); /* type: _4625  */
    

    wxMenuItem* returnVal = self->Insert(pos, itemid, *text, *help, kind);

    return scope.Close(wxNode_wxMenuItem::New(returnVal));
  }
  
  /*
   * id: _44723
   */
  if(args.Length() == 4 && args[0]->IsNumber() && args[1]->IsNumber() && args[2]->IsString() && args[3]->IsString()) {
    unsigned int pos = (unsigned int)args[0]->ToInt32()->Value(); /* type: _8620  */
    int itemid = (int)args[1]->ToInt32()->Value(); /* type: _162  */
    v8::String::AsciiValue text(args[2]->ToString()); /* type: _14808  */
    v8::String::AsciiValue help(args[3]->ToString()); /* type: _14808  */
    

    wxMenuItem* returnVal = self->Insert(pos, itemid, *text, *help);

    return scope.Close(wxNode_wxMenuItem::New(returnVal));
  }
  
  /*
   * id: _44723
   */
  if(args.Length() == 3 && args[0]->IsNumber() && args[1]->IsNumber() && args[2]->IsString()) {
    unsigned int pos = (unsigned int)args[0]->ToInt32()->Value(); /* type: _8620  */
    int itemid = (int)args[1]->ToInt32()->Value(); /* type: _162  */
    v8::String::AsciiValue text(args[2]->ToString()); /* type: _14808  */
    

    wxMenuItem* returnVal = self->Insert(pos, itemid, *text);

    return scope.Close(wxNode_wxMenuItem::New(returnVal));
  }
  
  /*
   * id: _44723
   */
  if(args.Length() == 2 && args[0]->IsNumber() && args[1]->IsNumber()) {
    unsigned int pos = (unsigned int)args[0]->ToInt32()->Value(); /* type: _8620  */
    int itemid = (int)args[1]->ToInt32()->Value(); /* type: _162  */
    

    wxMenuItem* returnVal = self->Insert(pos, itemid);

    return scope.Close(wxNode_wxMenuItem::New(returnVal));
  }
  
  /*
   * id: _44727
   */
  if(args.Length() == 5 && args[0]->IsNumber() && args[1]->IsNumber() && args[2]->IsString() && (args[3]->IsNull() || (args[3]->IsObject() && wxNode_wxMenu::AssignableFrom(args[3]->ToObject()->GetConstructorName()))) && args[4]->IsString()) {
    unsigned int pos = (unsigned int)args[0]->ToInt32()->Value(); /* type: _8620  */
    int itemid = (int)args[1]->ToInt32()->Value(); /* type: _162  */
    v8::String::AsciiValue text(args[2]->ToString()); /* type: _14808  */
    wxNode_wxMenu* submenu = args[3]->IsNull() ? NULL : wxNodeObject::unwrap<wxNode_wxMenu>(args[3]->ToObject()); /* type: _52838 * */
    v8::String::AsciiValue help(args[4]->ToString()); /* type: _14808  */
    

    wxMenuItem* returnVal = self->Insert(pos, itemid, *text, submenu, *help);

    return scope.Close(wxNode_wxMenuItem::New(returnVal));
  }
  
  /*
   * id: _44727
   */
  if(args.Length() == 4 && args[0]->IsNumber() && args[1]->IsNumber() && args[2]->IsString() && (args[3]->IsNull() || (args[3]->IsObject() && wxNode_wxMenu::AssignableFrom(args[3]->ToObject()->GetConstructorName())))) {
    unsigned int pos = (unsigned int)args[0]->ToInt32()->Value(); /* type: _8620  */
    int itemid = (int)args[1]->ToInt32()->Value(); /* type: _162  */
    v8::String::AsciiValue text(args[2]->ToString()); /* type: _14808  */
    wxNode_wxMenu* submenu = args[3]->IsNull() ? NULL : wxNodeObject::unwrap<wxNode_wxMenu>(args[3]->ToObject()); /* type: _52838 * */
    

    wxMenuItem* returnVal = self->Insert(pos, itemid, *text, submenu);

    return scope.Close(wxNode_wxMenuItem::New(returnVal));
  }
  
  /*
   * id: _44774
   */
  if(args.Length() == 5 && args[0]->IsNumber() && args[1]->IsNumber() && args[2]->IsString() && args[3]->IsString() && args[4]->IsBoolean()) {
    unsigned int pos = (unsigned int)args[0]->ToInt32()->Value(); /* type: _8620  */
    int itemid = (int)args[1]->ToInt32()->Value(); /* type: _162  */
    v8::String::AsciiValue text(args[2]->ToString()); /* type: _14808  */
    v8::String::AsciiValue help(args[3]->ToString()); /* type: _14808  */
    bool isCheckable = args[4]->ToBoolean()->Value(); /* type: _14666  */
    

    self->Insert(pos, itemid, *text, *help, isCheckable);

    return v8::Undefined();
  }
  

  std::ostringstream errStr;
  errStr << "Could not find matching method for arguments (method name: wxMenu::Insert).\n";
  errStr << "  arg count: " << args.Length() << "\n";
  for(int i = 0; i < args.Length(); i++) {
    v8::String::AsciiValue argStr(args[i]);
    errStr << "  arg[" << i << "]: " << *argStr << "\n";
  }
  return v8::ThrowException(v8::Exception::TypeError(v8::String::New(errStr.str().c_str())));
}

/*static*/ v8::Handle<v8::Value> wxNode_wxMenu::_InsertSeparator(const v8::Arguments& args) {
  v8::HandleScope scope;
  wxNode_wxMenu* self = unwrap<wxNode_wxMenu>(args.This());

  
  /*
   * id: _44724
   */
  if(args.Length() == 1 && args[0]->IsNumber()) {
    unsigned int pos = (unsigned int)args[0]->ToInt32()->Value(); /* type: _8620  */
    

    wxMenuItem* returnVal = self->InsertSeparator(pos);

    return scope.Close(wxNode_wxMenuItem::New(returnVal));
  }
  

  std::ostringstream errStr;
  errStr << "Could not find matching method for arguments (method name: wxMenu::InsertSeparator).\n";
  errStr << "  arg count: " << args.Length() << "\n";
  for(int i = 0; i < args.Length(); i++) {
    v8::String::AsciiValue argStr(args[i]);
    errStr << "  arg[" << i << "]: " << *argStr << "\n";
  }
  return v8::ThrowException(v8::Exception::TypeError(v8::String::New(errStr.str().c_str())));
}

/*static*/ v8::Handle<v8::Value> wxNode_wxMenu::_InsertCheckItem(const v8::Arguments& args) {
  v8::HandleScope scope;
  wxNode_wxMenu* self = unwrap<wxNode_wxMenu>(args.This());

  
  /*
   * id: _44725
   */
  if(args.Length() == 4 && args[0]->IsNumber() && args[1]->IsNumber() && args[2]->IsString() && args[3]->IsString()) {
    unsigned int pos = (unsigned int)args[0]->ToInt32()->Value(); /* type: _8620  */
    int itemid = (int)args[1]->ToInt32()->Value(); /* type: _162  */
    v8::String::AsciiValue text(args[2]->ToString()); /* type: _14808  */
    v8::String::AsciiValue help(args[3]->ToString()); /* type: _14808  */
    

    wxMenuItem* returnVal = self->InsertCheckItem(pos, itemid, *text, *help);

    return scope.Close(wxNode_wxMenuItem::New(returnVal));
  }
  
  /*
   * id: _44725
   */
  if(args.Length() == 3 && args[0]->IsNumber() && args[1]->IsNumber() && args[2]->IsString()) {
    unsigned int pos = (unsigned int)args[0]->ToInt32()->Value(); /* type: _8620  */
    int itemid = (int)args[1]->ToInt32()->Value(); /* type: _162  */
    v8::String::AsciiValue text(args[2]->ToString()); /* type: _14808  */
    

    wxMenuItem* returnVal = self->InsertCheckItem(pos, itemid, *text);

    return scope.Close(wxNode_wxMenuItem::New(returnVal));
  }
  

  std::ostringstream errStr;
  errStr << "Could not find matching method for arguments (method name: wxMenu::InsertCheckItem).\n";
  errStr << "  arg count: " << args.Length() << "\n";
  for(int i = 0; i < args.Length(); i++) {
    v8::String::AsciiValue argStr(args[i]);
    errStr << "  arg[" << i << "]: " << *argStr << "\n";
  }
  return v8::ThrowException(v8::Exception::TypeError(v8::String::New(errStr.str().c_str())));
}

/*static*/ v8::Handle<v8::Value> wxNode_wxMenu::_InsertRadioItem(const v8::Arguments& args) {
  v8::HandleScope scope;
  wxNode_wxMenu* self = unwrap<wxNode_wxMenu>(args.This());

  
  /*
   * id: _44726
   */
  if(args.Length() == 4 && args[0]->IsNumber() && args[1]->IsNumber() && args[2]->IsString() && args[3]->IsString()) {
    unsigned int pos = (unsigned int)args[0]->ToInt32()->Value(); /* type: _8620  */
    int itemid = (int)args[1]->ToInt32()->Value(); /* type: _162  */
    v8::String::AsciiValue text(args[2]->ToString()); /* type: _14808  */
    v8::String::AsciiValue help(args[3]->ToString()); /* type: _14808  */
    

    wxMenuItem* returnVal = self->InsertRadioItem(pos, itemid, *text, *help);

    return scope.Close(wxNode_wxMenuItem::New(returnVal));
  }
  
  /*
   * id: _44726
   */
  if(args.Length() == 3 && args[0]->IsNumber() && args[1]->IsNumber() && args[2]->IsString()) {
    unsigned int pos = (unsigned int)args[0]->ToInt32()->Value(); /* type: _8620  */
    int itemid = (int)args[1]->ToInt32()->Value(); /* type: _162  */
    v8::String::AsciiValue text(args[2]->ToString()); /* type: _14808  */
    

    wxMenuItem* returnVal = self->InsertRadioItem(pos, itemid, *text);

    return scope.Close(wxNode_wxMenuItem::New(returnVal));
  }
  

  std::ostringstream errStr;
  errStr << "Could not find matching method for arguments (method name: wxMenu::InsertRadioItem).\n";
  errStr << "  arg count: " << args.Length() << "\n";
  for(int i = 0; i < args.Length(); i++) {
    v8::String::AsciiValue argStr(args[i]);
    errStr << "  arg[" << i << "]: " << *argStr << "\n";
  }
  return v8::ThrowException(v8::Exception::TypeError(v8::String::New(errStr.str().c_str())));
}

/*static*/ v8::Handle<v8::Value> wxNode_wxMenu::_Prepend(const v8::Arguments& args) {
  v8::HandleScope scope;
  wxNode_wxMenu* self = unwrap<wxNode_wxMenu>(args.This());

  
  /*
   * id: _44728
   */
  if(args.Length() == 1 && (args[0]->IsNull() || (args[0]->IsObject() && wxNode_wxMenuItem::AssignableFrom(args[0]->ToObject()->GetConstructorName())))) {
    wxNode_wxMenuItem* item = args[0]->IsNull() ? NULL : wxNodeObject::unwrap<wxNode_wxMenuItem>(args[0]->ToObject()); /* type: _51683 * */
    

    wxMenuItem* returnVal = self->Prepend(item);

    return scope.Close(wxNode_wxMenuItem::New(returnVal));
  }
  
  /*
   * id: _44729
   */
  if(args.Length() == 4 && args[0]->IsNumber() && args[1]->IsString() && args[2]->IsString() && args[3]->IsNumber()) {
    int itemid = (int)args[0]->ToInt32()->Value(); /* type: _162  */
    v8::String::AsciiValue text(args[1]->ToString()); /* type: _14808  */
    v8::String::AsciiValue help(args[2]->ToString()); /* type: _14808  */
    wxItemKind kind = (wxItemKind)args[3]->ToNumber()->Value(); /* type: _4625  */
    

    wxMenuItem* returnVal = self->Prepend(itemid, *text, *help, kind);

    return scope.Close(wxNode_wxMenuItem::New(returnVal));
  }
  
  /*
   * id: _44729
   */
  if(args.Length() == 3 && args[0]->IsNumber() && args[1]->IsString() && args[2]->IsString()) {
    int itemid = (int)args[0]->ToInt32()->Value(); /* type: _162  */
    v8::String::AsciiValue text(args[1]->ToString()); /* type: _14808  */
    v8::String::AsciiValue help(args[2]->ToString()); /* type: _14808  */
    

    wxMenuItem* returnVal = self->Prepend(itemid, *text, *help);

    return scope.Close(wxNode_wxMenuItem::New(returnVal));
  }
  
  /*
   * id: _44729
   */
  if(args.Length() == 2 && args[0]->IsNumber() && args[1]->IsString()) {
    int itemid = (int)args[0]->ToInt32()->Value(); /* type: _162  */
    v8::String::AsciiValue text(args[1]->ToString()); /* type: _14808  */
    

    wxMenuItem* returnVal = self->Prepend(itemid, *text);

    return scope.Close(wxNode_wxMenuItem::New(returnVal));
  }
  
  /*
   * id: _44729
   */
  if(args.Length() == 1 && args[0]->IsNumber()) {
    int itemid = (int)args[0]->ToInt32()->Value(); /* type: _162  */
    

    wxMenuItem* returnVal = self->Prepend(itemid);

    return scope.Close(wxNode_wxMenuItem::New(returnVal));
  }
  
  /*
   * id: _44733
   */
  if(args.Length() == 4 && args[0]->IsNumber() && args[1]->IsString() && (args[2]->IsNull() || (args[2]->IsObject() && wxNode_wxMenu::AssignableFrom(args[2]->ToObject()->GetConstructorName()))) && args[3]->IsString()) {
    int itemid = (int)args[0]->ToInt32()->Value(); /* type: _162  */
    v8::String::AsciiValue text(args[1]->ToString()); /* type: _14808  */
    wxNode_wxMenu* submenu = args[2]->IsNull() ? NULL : wxNodeObject::unwrap<wxNode_wxMenu>(args[2]->ToObject()); /* type: _52838 * */
    v8::String::AsciiValue help(args[3]->ToString()); /* type: _14808  */
    

    wxMenuItem* returnVal = self->Prepend(itemid, *text, submenu, *help);

    return scope.Close(wxNode_wxMenuItem::New(returnVal));
  }
  
  /*
   * id: _44733
   */
  if(args.Length() == 3 && args[0]->IsNumber() && args[1]->IsString() && (args[2]->IsNull() || (args[2]->IsObject() && wxNode_wxMenu::AssignableFrom(args[2]->ToObject()->GetConstructorName())))) {
    int itemid = (int)args[0]->ToInt32()->Value(); /* type: _162  */
    v8::String::AsciiValue text(args[1]->ToString()); /* type: _14808  */
    wxNode_wxMenu* submenu = args[2]->IsNull() ? NULL : wxNodeObject::unwrap<wxNode_wxMenu>(args[2]->ToObject()); /* type: _52838 * */
    

    wxMenuItem* returnVal = self->Prepend(itemid, *text, submenu);

    return scope.Close(wxNode_wxMenuItem::New(returnVal));
  }
  
  /*
   * id: _44775
   */
  if(args.Length() == 4 && args[0]->IsNumber() && args[1]->IsString() && args[2]->IsString() && args[3]->IsBoolean()) {
    int itemid = (int)args[0]->ToInt32()->Value(); /* type: _162  */
    v8::String::AsciiValue text(args[1]->ToString()); /* type: _14808  */
    v8::String::AsciiValue help(args[2]->ToString()); /* type: _14808  */
    bool isCheckable = args[3]->ToBoolean()->Value(); /* type: _14666  */
    

    self->Prepend(itemid, *text, *help, isCheckable);

    return v8::Undefined();
  }
  

  std::ostringstream errStr;
  errStr << "Could not find matching method for arguments (method name: wxMenu::Prepend).\n";
  errStr << "  arg count: " << args.Length() << "\n";
  for(int i = 0; i < args.Length(); i++) {
    v8::String::AsciiValue argStr(args[i]);
    errStr << "  arg[" << i << "]: " << *argStr << "\n";
  }
  return v8::ThrowException(v8::Exception::TypeError(v8::String::New(errStr.str().c_str())));
}

/*static*/ v8::Handle<v8::Value> wxNode_wxMenu::_PrependSeparator(const v8::Arguments& args) {
  v8::HandleScope scope;
  wxNode_wxMenu* self = unwrap<wxNode_wxMenu>(args.This());

  
  /*
   * id: _44730
   */
  if(args.Length() == 0) {
    

    wxMenuItem* returnVal = self->PrependSeparator();

    return scope.Close(wxNode_wxMenuItem::New(returnVal));
  }
  

  std::ostringstream errStr;
  errStr << "Could not find matching method for arguments (method name: wxMenu::PrependSeparator).\n";
  errStr << "  arg count: " << args.Length() << "\n";
  for(int i = 0; i < args.Length(); i++) {
    v8::String::AsciiValue argStr(args[i]);
    errStr << "  arg[" << i << "]: " << *argStr << "\n";
  }
  return v8::ThrowException(v8::Exception::TypeError(v8::String::New(errStr.str().c_str())));
}

/*static*/ v8::Handle<v8::Value> wxNode_wxMenu::_PrependCheckItem(const v8::Arguments& args) {
  v8::HandleScope scope;
  wxNode_wxMenu* self = unwrap<wxNode_wxMenu>(args.This());

  
  /*
   * id: _44731
   */
  if(args.Length() == 3 && args[0]->IsNumber() && args[1]->IsString() && args[2]->IsString()) {
    int itemid = (int)args[0]->ToInt32()->Value(); /* type: _162  */
    v8::String::AsciiValue text(args[1]->ToString()); /* type: _14808  */
    v8::String::AsciiValue help(args[2]->ToString()); /* type: _14808  */
    

    wxMenuItem* returnVal = self->PrependCheckItem(itemid, *text, *help);

    return scope.Close(wxNode_wxMenuItem::New(returnVal));
  }
  
  /*
   * id: _44731
   */
  if(args.Length() == 2 && args[0]->IsNumber() && args[1]->IsString()) {
    int itemid = (int)args[0]->ToInt32()->Value(); /* type: _162  */
    v8::String::AsciiValue text(args[1]->ToString()); /* type: _14808  */
    

    wxMenuItem* returnVal = self->PrependCheckItem(itemid, *text);

    return scope.Close(wxNode_wxMenuItem::New(returnVal));
  }
  

  std::ostringstream errStr;
  errStr << "Could not find matching method for arguments (method name: wxMenu::PrependCheckItem).\n";
  errStr << "  arg count: " << args.Length() << "\n";
  for(int i = 0; i < args.Length(); i++) {
    v8::String::AsciiValue argStr(args[i]);
    errStr << "  arg[" << i << "]: " << *argStr << "\n";
  }
  return v8::ThrowException(v8::Exception::TypeError(v8::String::New(errStr.str().c_str())));
}

/*static*/ v8::Handle<v8::Value> wxNode_wxMenu::_PrependRadioItem(const v8::Arguments& args) {
  v8::HandleScope scope;
  wxNode_wxMenu* self = unwrap<wxNode_wxMenu>(args.This());

  
  /*
   * id: _44732
   */
  if(args.Length() == 3 && args[0]->IsNumber() && args[1]->IsString() && args[2]->IsString()) {
    int itemid = (int)args[0]->ToInt32()->Value(); /* type: _162  */
    v8::String::AsciiValue text(args[1]->ToString()); /* type: _14808  */
    v8::String::AsciiValue help(args[2]->ToString()); /* type: _14808  */
    

    wxMenuItem* returnVal = self->PrependRadioItem(itemid, *text, *help);

    return scope.Close(wxNode_wxMenuItem::New(returnVal));
  }
  
  /*
   * id: _44732
   */
  if(args.Length() == 2 && args[0]->IsNumber() && args[1]->IsString()) {
    int itemid = (int)args[0]->ToInt32()->Value(); /* type: _162  */
    v8::String::AsciiValue text(args[1]->ToString()); /* type: _14808  */
    

    wxMenuItem* returnVal = self->PrependRadioItem(itemid, *text);

    return scope.Close(wxNode_wxMenuItem::New(returnVal));
  }
  

  std::ostringstream errStr;
  errStr << "Could not find matching method for arguments (method name: wxMenu::PrependRadioItem).\n";
  errStr << "  arg count: " << args.Length() << "\n";
  for(int i = 0; i < args.Length(); i++) {
    v8::String::AsciiValue argStr(args[i]);
    errStr << "  arg[" << i << "]: " << *argStr << "\n";
  }
  return v8::ThrowException(v8::Exception::TypeError(v8::String::New(errStr.str().c_str())));
}

/*static*/ v8::Handle<v8::Value> wxNode_wxMenu::_Remove(const v8::Arguments& args) {
  v8::HandleScope scope;
  wxNode_wxMenu* self = unwrap<wxNode_wxMenu>(args.This());

  
  /*
   * id: _44734
   */
  if(args.Length() == 1 && args[0]->IsNumber()) {
    int itemid = (int)args[0]->ToInt32()->Value(); /* type: _162  */
    

    wxMenuItem* returnVal = self->Remove(itemid);

    return scope.Close(wxNode_wxMenuItem::New(returnVal));
  }
  
  /*
   * id: _44735
   */
  if(args.Length() == 1 && (args[0]->IsNull() || (args[0]->IsObject() && wxNode_wxMenuItem::AssignableFrom(args[0]->ToObject()->GetConstructorName())))) {
    wxNode_wxMenuItem* item = args[0]->IsNull() ? NULL : wxNodeObject::unwrap<wxNode_wxMenuItem>(args[0]->ToObject()); /* type: _51683 * */
    

    wxMenuItem* returnVal = self->Remove(item);

    return scope.Close(wxNode_wxMenuItem::New(returnVal));
  }
  

  std::ostringstream errStr;
  errStr << "Could not find matching method for arguments (method name: wxMenu::Remove).\n";
  errStr << "  arg count: " << args.Length() << "\n";
  for(int i = 0; i < args.Length(); i++) {
    v8::String::AsciiValue argStr(args[i]);
    errStr << "  arg[" << i << "]: " << *argStr << "\n";
  }
  return v8::ThrowException(v8::Exception::TypeError(v8::String::New(errStr.str().c_str())));
}

/*static*/ v8::Handle<v8::Value> wxNode_wxMenu::_Delete(const v8::Arguments& args) {
  v8::HandleScope scope;
  wxNode_wxMenu* self = unwrap<wxNode_wxMenu>(args.This());

  
  /*
   * id: _44736
   */
  if(args.Length() == 1 && args[0]->IsNumber()) {
    int itemid = (int)args[0]->ToInt32()->Value(); /* type: _162  */
    

    bool returnVal = self->Delete(itemid);

    return scope.Close(v8::Boolean::New(returnVal));
  }
  
  /*
   * id: _44737
   */
  if(args.Length() == 1 && (args[0]->IsNull() || (args[0]->IsObject() && wxNode_wxMenuItem::AssignableFrom(args[0]->ToObject()->GetConstructorName())))) {
    wxNode_wxMenuItem* item = args[0]->IsNull() ? NULL : wxNodeObject::unwrap<wxNode_wxMenuItem>(args[0]->ToObject()); /* type: _51683 * */
    

    bool returnVal = self->Delete(item);

    return scope.Close(v8::Boolean::New(returnVal));
  }
  

  std::ostringstream errStr;
  errStr << "Could not find matching method for arguments (method name: wxMenu::Delete).\n";
  errStr << "  arg count: " << args.Length() << "\n";
  for(int i = 0; i < args.Length(); i++) {
    v8::String::AsciiValue argStr(args[i]);
    errStr << "  arg[" << i << "]: " << *argStr << "\n";
  }
  return v8::ThrowException(v8::Exception::TypeError(v8::String::New(errStr.str().c_str())));
}

/*static*/ v8::Handle<v8::Value> wxNode_wxMenu::_Destroy(const v8::Arguments& args) {
  v8::HandleScope scope;
  wxNode_wxMenu* self = unwrap<wxNode_wxMenu>(args.This());

  
  /*
   * id: _44738
   */
  if(args.Length() == 1 && args[0]->IsNumber()) {
    int itemid = (int)args[0]->ToInt32()->Value(); /* type: _162  */
    

    bool returnVal = self->Destroy(itemid);

    return scope.Close(v8::Boolean::New(returnVal));
  }
  
  /*
   * id: _44739
   */
  if(args.Length() == 1 && (args[0]->IsNull() || (args[0]->IsObject() && wxNode_wxMenuItem::AssignableFrom(args[0]->ToObject()->GetConstructorName())))) {
    wxNode_wxMenuItem* item = args[0]->IsNull() ? NULL : wxNodeObject::unwrap<wxNode_wxMenuItem>(args[0]->ToObject()); /* type: _51683 * */
    

    bool returnVal = self->Destroy(item);

    return scope.Close(v8::Boolean::New(returnVal));
  }
  

  std::ostringstream errStr;
  errStr << "Could not find matching method for arguments (method name: wxMenu::Destroy).\n";
  errStr << "  arg count: " << args.Length() << "\n";
  for(int i = 0; i < args.Length(); i++) {
    v8::String::AsciiValue argStr(args[i]);
    errStr << "  arg[" << i << "]: " << *argStr << "\n";
  }
  return v8::ThrowException(v8::Exception::TypeError(v8::String::New(errStr.str().c_str())));
}

/*static*/ v8::Handle<v8::Value> wxNode_wxMenu::_GetMenuItemCount(const v8::Arguments& args) {
  v8::HandleScope scope;
  wxNode_wxMenu* self = unwrap<wxNode_wxMenu>(args.This());

  
  /*
   * id: _44740
   */
  if(args.Length() == 0) {
    

    int returnVal = self->GetMenuItemCount();

    return scope.Close(v8::Number::New(returnVal));
  }
  

  std::ostringstream errStr;
  errStr << "Could not find matching method for arguments (method name: wxMenu::GetMenuItemCount).\n";
  errStr << "  arg count: " << args.Length() << "\n";
  for(int i = 0; i < args.Length(); i++) {
    v8::String::AsciiValue argStr(args[i]);
    errStr << "  arg[" << i << "]: " << *argStr << "\n";
  }
  return v8::ThrowException(v8::Exception::TypeError(v8::String::New(errStr.str().c_str())));
}

/*static*/ v8::Handle<v8::Value> wxNode_wxMenu::_GetMenuItems(const v8::Arguments& args) {
  v8::HandleScope scope;
  wxNode_wxMenu* self = unwrap<wxNode_wxMenu>(args.This());

  
  /*
   * id: _44741
   */
  if(args.Length() == 0) {
    

    wxMenuItemList returnVal = self->GetMenuItems();

    return scope.Close(wxNode_wxMenuItemList::NewCopy(returnVal));
  }
  
  /*
   * id: _44742
   */
  if(args.Length() == 0) {
    

    wxMenuItemList returnVal = self->GetMenuItems();

    return scope.Close(wxNode_wxMenuItemList::NewCopy(returnVal));
  }
  

  std::ostringstream errStr;
  errStr << "Could not find matching method for arguments (method name: wxMenu::GetMenuItems).\n";
  errStr << "  arg count: " << args.Length() << "\n";
  for(int i = 0; i < args.Length(); i++) {
    v8::String::AsciiValue argStr(args[i]);
    errStr << "  arg[" << i << "]: " << *argStr << "\n";
  }
  return v8::ThrowException(v8::Exception::TypeError(v8::String::New(errStr.str().c_str())));
}

/*static*/ v8::Handle<v8::Value> wxNode_wxMenu::_FindItem(const v8::Arguments& args) {
  v8::HandleScope scope;
  wxNode_wxMenu* self = unwrap<wxNode_wxMenu>(args.This());

  
  /*
   * id: _44743
   */
  if(args.Length() == 1 && args[0]->IsString()) {
    v8::String::AsciiValue item(args[0]->ToString()); /* type: _14808  */
    

    int returnVal = self->FindItem(*item);

    return scope.Close(v8::Number::New(returnVal));
  }
  
  /*
   * id: _44744
   */
  if(args.Length() == 2 && args[0]->IsNumber() && false) {
    int itemid = (int)args[0]->ToInt32()->Value(); /* type: _162  */
    wxMenu* menu; /* type: _65194 ** */
    

    wxMenuItem* returnVal = self->FindItem(itemid, &menu);

    return scope.Close(wxNode_wxMenuItem::New(returnVal));
  }
  
  /*
   * id: _44744
   */
  if(args.Length() == 1 && args[0]->IsNumber()) {
    int itemid = (int)args[0]->ToInt32()->Value(); /* type: _162  */
    

    wxMenuItem* returnVal = self->FindItem(itemid);

    return scope.Close(wxNode_wxMenuItem::New(returnVal));
  }
  

  std::ostringstream errStr;
  errStr << "Could not find matching method for arguments (method name: wxMenu::FindItem).\n";
  errStr << "  arg count: " << args.Length() << "\n";
  for(int i = 0; i < args.Length(); i++) {
    v8::String::AsciiValue argStr(args[i]);
    errStr << "  arg[" << i << "]: " << *argStr << "\n";
  }
  return v8::ThrowException(v8::Exception::TypeError(v8::String::New(errStr.str().c_str())));
}

/*static*/ v8::Handle<v8::Value> wxNode_wxMenu::_FindItemByPosition(const v8::Arguments& args) {
  v8::HandleScope scope;
  wxNode_wxMenu* self = unwrap<wxNode_wxMenu>(args.This());

  
  /*
   * id: _44745
   */
  if(args.Length() == 1 && args[0]->IsNumber()) {
    unsigned int position = (unsigned int)args[0]->ToInt32()->Value(); /* type: _8620  */
    

    wxMenuItem* returnVal = self->FindItemByPosition(position);

    return scope.Close(wxNode_wxMenuItem::New(returnVal));
  }
  

  std::ostringstream errStr;
  errStr << "Could not find matching method for arguments (method name: wxMenu::FindItemByPosition).\n";
  errStr << "  arg count: " << args.Length() << "\n";
  for(int i = 0; i < args.Length(); i++) {
    v8::String::AsciiValue argStr(args[i]);
    errStr << "  arg[" << i << "]: " << *argStr << "\n";
  }
  return v8::ThrowException(v8::Exception::TypeError(v8::String::New(errStr.str().c_str())));
}

/*static*/ v8::Handle<v8::Value> wxNode_wxMenu::_Enable(const v8::Arguments& args) {
  v8::HandleScope scope;
  wxNode_wxMenu* self = unwrap<wxNode_wxMenu>(args.This());

  
  /*
   * id: _44746
   */
  if(args.Length() == 2 && args[0]->IsNumber() && args[1]->IsBoolean()) {
    int itemid = (int)args[0]->ToInt32()->Value(); /* type: _162  */
    bool enable = args[1]->ToBoolean()->Value(); /* type: _14666  */
    

    self->Enable(itemid, enable);

    return v8::Undefined();
  }
  

  std::ostringstream errStr;
  errStr << "Could not find matching method for arguments (method name: wxMenu::Enable).\n";
  errStr << "  arg count: " << args.Length() << "\n";
  for(int i = 0; i < args.Length(); i++) {
    v8::String::AsciiValue argStr(args[i]);
    errStr << "  arg[" << i << "]: " << *argStr << "\n";
  }
  return v8::ThrowException(v8::Exception::TypeError(v8::String::New(errStr.str().c_str())));
}

/*static*/ v8::Handle<v8::Value> wxNode_wxMenu::_IsEnabled(const v8::Arguments& args) {
  v8::HandleScope scope;
  wxNode_wxMenu* self = unwrap<wxNode_wxMenu>(args.This());

  
  /*
   * id: _44747
   */
  if(args.Length() == 1 && args[0]->IsNumber()) {
    int itemid = (int)args[0]->ToInt32()->Value(); /* type: _162  */
    

    bool returnVal = self->IsEnabled(itemid);

    return scope.Close(v8::Boolean::New(returnVal));
  }
  

  std::ostringstream errStr;
  errStr << "Could not find matching method for arguments (method name: wxMenu::IsEnabled).\n";
  errStr << "  arg count: " << args.Length() << "\n";
  for(int i = 0; i < args.Length(); i++) {
    v8::String::AsciiValue argStr(args[i]);
    errStr << "  arg[" << i << "]: " << *argStr << "\n";
  }
  return v8::ThrowException(v8::Exception::TypeError(v8::String::New(errStr.str().c_str())));
}

/*static*/ v8::Handle<v8::Value> wxNode_wxMenu::_Check(const v8::Arguments& args) {
  v8::HandleScope scope;
  wxNode_wxMenu* self = unwrap<wxNode_wxMenu>(args.This());

  
  /*
   * id: _44748
   */
  if(args.Length() == 2 && args[0]->IsNumber() && args[1]->IsBoolean()) {
    int itemid = (int)args[0]->ToInt32()->Value(); /* type: _162  */
    bool check = args[1]->ToBoolean()->Value(); /* type: _14666  */
    

    self->Check(itemid, check);

    return v8::Undefined();
  }
  

  std::ostringstream errStr;
  errStr << "Could not find matching method for arguments (method name: wxMenu::Check).\n";
  errStr << "  arg count: " << args.Length() << "\n";
  for(int i = 0; i < args.Length(); i++) {
    v8::String::AsciiValue argStr(args[i]);
    errStr << "  arg[" << i << "]: " << *argStr << "\n";
  }
  return v8::ThrowException(v8::Exception::TypeError(v8::String::New(errStr.str().c_str())));
}

/*static*/ v8::Handle<v8::Value> wxNode_wxMenu::_IsChecked(const v8::Arguments& args) {
  v8::HandleScope scope;
  wxNode_wxMenu* self = unwrap<wxNode_wxMenu>(args.This());

  
  /*
   * id: _44749
   */
  if(args.Length() == 1 && args[0]->IsNumber()) {
    int itemid = (int)args[0]->ToInt32()->Value(); /* type: _162  */
    

    bool returnVal = self->IsChecked(itemid);

    return scope.Close(v8::Boolean::New(returnVal));
  }
  

  std::ostringstream errStr;
  errStr << "Could not find matching method for arguments (method name: wxMenu::IsChecked).\n";
  errStr << "  arg count: " << args.Length() << "\n";
  for(int i = 0; i < args.Length(); i++) {
    v8::String::AsciiValue argStr(args[i]);
    errStr << "  arg[" << i << "]: " << *argStr << "\n";
  }
  return v8::ThrowException(v8::Exception::TypeError(v8::String::New(errStr.str().c_str())));
}

/*static*/ v8::Handle<v8::Value> wxNode_wxMenu::_SetLabel(const v8::Arguments& args) {
  v8::HandleScope scope;
  wxNode_wxMenu* self = unwrap<wxNode_wxMenu>(args.This());

  
  /*
   * id: _44750
   */
  if(args.Length() == 2 && args[0]->IsNumber() && args[1]->IsString()) {
    int itemid = (int)args[0]->ToInt32()->Value(); /* type: _162  */
    v8::String::AsciiValue label(args[1]->ToString()); /* type: _14808  */
    

    self->SetLabel(itemid, *label);

    return v8::Undefined();
  }
  

  std::ostringstream errStr;
  errStr << "Could not find matching method for arguments (method name: wxMenu::SetLabel).\n";
  errStr << "  arg count: " << args.Length() << "\n";
  for(int i = 0; i < args.Length(); i++) {
    v8::String::AsciiValue argStr(args[i]);
    errStr << "  arg[" << i << "]: " << *argStr << "\n";
  }
  return v8::ThrowException(v8::Exception::TypeError(v8::String::New(errStr.str().c_str())));
}

/*static*/ v8::Handle<v8::Value> wxNode_wxMenu::_GetLabel(const v8::Arguments& args) {
  v8::HandleScope scope;
  wxNode_wxMenu* self = unwrap<wxNode_wxMenu>(args.This());

  
  /*
   * id: _44751
   */
  if(args.Length() == 1 && args[0]->IsNumber()) {
    int itemid = (int)args[0]->ToInt32()->Value(); /* type: _162  */
    

    wxString returnVal = self->GetLabel(itemid);

    return scope.Close(v8::String::New(returnVal.mb_str()));
  }
  

  std::ostringstream errStr;
  errStr << "Could not find matching method for arguments (method name: wxMenu::GetLabel).\n";
  errStr << "  arg count: " << args.Length() << "\n";
  for(int i = 0; i < args.Length(); i++) {
    v8::String::AsciiValue argStr(args[i]);
    errStr << "  arg[" << i << "]: " << *argStr << "\n";
  }
  return v8::ThrowException(v8::Exception::TypeError(v8::String::New(errStr.str().c_str())));
}

/*static*/ v8::Handle<v8::Value> wxNode_wxMenu::_GetLabelText(const v8::Arguments& args) {
  v8::HandleScope scope;
  wxNode_wxMenu* self = unwrap<wxNode_wxMenu>(args.This());

  
  /*
   * id: _44752
   */
  if(args.Length() == 1 && args[0]->IsNumber()) {
    int itemid = (int)args[0]->ToInt32()->Value(); /* type: _162  */
    

    wxString returnVal = self->GetLabelText(itemid);

    return scope.Close(v8::String::New(returnVal.mb_str()));
  }
  

  std::ostringstream errStr;
  errStr << "Could not find matching method for arguments (method name: wxMenu::GetLabelText).\n";
  errStr << "  arg count: " << args.Length() << "\n";
  for(int i = 0; i < args.Length(); i++) {
    v8::String::AsciiValue argStr(args[i]);
    errStr << "  arg[" << i << "]: " << *argStr << "\n";
  }
  return v8::ThrowException(v8::Exception::TypeError(v8::String::New(errStr.str().c_str())));
}

/*static*/ v8::Handle<v8::Value> wxNode_wxMenu::_SetHelpString(const v8::Arguments& args) {
  v8::HandleScope scope;
  wxNode_wxMenu* self = unwrap<wxNode_wxMenu>(args.This());

  
  /*
   * id: _44753
   */
  if(args.Length() == 2 && args[0]->IsNumber() && args[1]->IsString()) {
    int itemid = (int)args[0]->ToInt32()->Value(); /* type: _162  */
    v8::String::AsciiValue helpString(args[1]->ToString()); /* type: _14808  */
    

    self->SetHelpString(itemid, *helpString);

    return v8::Undefined();
  }
  

  std::ostringstream errStr;
  errStr << "Could not find matching method for arguments (method name: wxMenu::SetHelpString).\n";
  errStr << "  arg count: " << args.Length() << "\n";
  for(int i = 0; i < args.Length(); i++) {
    v8::String::AsciiValue argStr(args[i]);
    errStr << "  arg[" << i << "]: " << *argStr << "\n";
  }
  return v8::ThrowException(v8::Exception::TypeError(v8::String::New(errStr.str().c_str())));
}

/*static*/ v8::Handle<v8::Value> wxNode_wxMenu::_GetHelpString(const v8::Arguments& args) {
  v8::HandleScope scope;
  wxNode_wxMenu* self = unwrap<wxNode_wxMenu>(args.This());

  
  /*
   * id: _44754
   */
  if(args.Length() == 1 && args[0]->IsNumber()) {
    int itemid = (int)args[0]->ToInt32()->Value(); /* type: _162  */
    

    wxString returnVal = self->GetHelpString(itemid);

    return scope.Close(v8::String::New(returnVal.mb_str()));
  }
  

  std::ostringstream errStr;
  errStr << "Could not find matching method for arguments (method name: wxMenu::GetHelpString).\n";
  errStr << "  arg count: " << args.Length() << "\n";
  for(int i = 0; i < args.Length(); i++) {
    v8::String::AsciiValue argStr(args[i]);
    errStr << "  arg[" << i << "]: " << *argStr << "\n";
  }
  return v8::ThrowException(v8::Exception::TypeError(v8::String::New(errStr.str().c_str())));
}

/*static*/ v8::Handle<v8::Value> wxNode_wxMenu::_SetTitle(const v8::Arguments& args) {
  v8::HandleScope scope;
  wxNode_wxMenu* self = unwrap<wxNode_wxMenu>(args.This());

  
  /*
   * id: _44755
   */
  if(args.Length() == 1 && args[0]->IsString()) {
    v8::String::AsciiValue title(args[0]->ToString()); /* type: _14808  */
    

    self->SetTitle(*title);

    return v8::Undefined();
  }
  

  std::ostringstream errStr;
  errStr << "Could not find matching method for arguments (method name: wxMenu::SetTitle).\n";
  errStr << "  arg count: " << args.Length() << "\n";
  for(int i = 0; i < args.Length(); i++) {
    v8::String::AsciiValue argStr(args[i]);
    errStr << "  arg[" << i << "]: " << *argStr << "\n";
  }
  return v8::ThrowException(v8::Exception::TypeError(v8::String::New(errStr.str().c_str())));
}

/*static*/ v8::Handle<v8::Value> wxNode_wxMenu::_GetTitle(const v8::Arguments& args) {
  v8::HandleScope scope;
  wxNode_wxMenu* self = unwrap<wxNode_wxMenu>(args.This());

  
  /*
   * id: _44756
   */
  if(args.Length() == 0) {
    

    wxString returnVal = self->GetTitle();

    return scope.Close(v8::String::New(returnVal.mb_str()));
  }
  

  std::ostringstream errStr;
  errStr << "Could not find matching method for arguments (method name: wxMenu::GetTitle).\n";
  errStr << "  arg count: " << args.Length() << "\n";
  for(int i = 0; i < args.Length(); i++) {
    v8::String::AsciiValue argStr(args[i]);
    errStr << "  arg[" << i << "]: " << *argStr << "\n";
  }
  return v8::ThrowException(v8::Exception::TypeError(v8::String::New(errStr.str().c_str())));
}

/*static*/ v8::Handle<v8::Value> wxNode_wxMenu::_SetEventHandler(const v8::Arguments& args) {
  v8::HandleScope scope;
  wxNode_wxMenu* self = unwrap<wxNode_wxMenu>(args.This());

  
  /*
   * id: _44757
   */
  if(args.Length() == 1 && (args[0]->IsNull() || (args[0]->IsObject() && wxNode_wxEvtHandler::AssignableFrom(args[0]->ToObject()->GetConstructorName())))) {
    wxNode_wxEvtHandler* handler = args[0]->IsNull() ? NULL : wxNodeObject::unwrap<wxNode_wxEvtHandler>(args[0]->ToObject()); /* type: _1665 * */
    

    self->SetEventHandler(handler);

    return v8::Undefined();
  }
  

  std::ostringstream errStr;
  errStr << "Could not find matching method for arguments (method name: wxMenu::SetEventHandler).\n";
  errStr << "  arg count: " << args.Length() << "\n";
  for(int i = 0; i < args.Length(); i++) {
    v8::String::AsciiValue argStr(args[i]);
    errStr << "  arg[" << i << "]: " << *argStr << "\n";
  }
  return v8::ThrowException(v8::Exception::TypeError(v8::String::New(errStr.str().c_str())));
}

/*static*/ v8::Handle<v8::Value> wxNode_wxMenu::_GetEventHandler(const v8::Arguments& args) {
  v8::HandleScope scope;
  wxNode_wxMenu* self = unwrap<wxNode_wxMenu>(args.This());

  
  /*
   * id: _44758
   */
  if(args.Length() == 0) {
    

    wxEvtHandler* returnVal = self->GetEventHandler();

    return scope.Close(wxNode_wxEvtHandler::New(returnVal));
  }
  

  std::ostringstream errStr;
  errStr << "Could not find matching method for arguments (method name: wxMenu::GetEventHandler).\n";
  errStr << "  arg count: " << args.Length() << "\n";
  for(int i = 0; i < args.Length(); i++) {
    v8::String::AsciiValue argStr(args[i]);
    errStr << "  arg[" << i << "]: " << *argStr << "\n";
  }
  return v8::ThrowException(v8::Exception::TypeError(v8::String::New(errStr.str().c_str())));
}

/*static*/ v8::Handle<v8::Value> wxNode_wxMenu::_SetInvokingWindow(const v8::Arguments& args) {
  v8::HandleScope scope;
  wxNode_wxMenu* self = unwrap<wxNode_wxMenu>(args.This());

  
  /*
   * id: _44759
   */
  if(args.Length() == 1 && (args[0]->IsNull() || (args[0]->IsObject() && wxNode_wxWindow::AssignableFrom(args[0]->ToObject()->GetConstructorName())))) {
    wxNode_wxWindow* win = args[0]->IsNull() ? NULL : wxNodeObject::unwrap<wxNode_wxWindow>(args[0]->ToObject()); /* type: _993 * */
    

    self->SetInvokingWindow(win);

    return v8::Undefined();
  }
  

  std::ostringstream errStr;
  errStr << "Could not find matching method for arguments (method name: wxMenu::SetInvokingWindow).\n";
  errStr << "  arg count: " << args.Length() << "\n";
  for(int i = 0; i < args.Length(); i++) {
    v8::String::AsciiValue argStr(args[i]);
    errStr << "  arg[" << i << "]: " << *argStr << "\n";
  }
  return v8::ThrowException(v8::Exception::TypeError(v8::String::New(errStr.str().c_str())));
}

/*static*/ v8::Handle<v8::Value> wxNode_wxMenu::_GetInvokingWindow(const v8::Arguments& args) {
  v8::HandleScope scope;
  wxNode_wxMenu* self = unwrap<wxNode_wxMenu>(args.This());

  
  /*
   * id: _44760
   */
  if(args.Length() == 0) {
    

    wxWindow* returnVal = self->GetInvokingWindow();

    return scope.Close(wxNode_wxWindow::New(returnVal));
  }
  

  std::ostringstream errStr;
  errStr << "Could not find matching method for arguments (method name: wxMenu::GetInvokingWindow).\n";
  errStr << "  arg count: " << args.Length() << "\n";
  for(int i = 0; i < args.Length(); i++) {
    v8::String::AsciiValue argStr(args[i]);
    errStr << "  arg[" << i << "]: " << *argStr << "\n";
  }
  return v8::ThrowException(v8::Exception::TypeError(v8::String::New(errStr.str().c_str())));
}

/*static*/ v8::Handle<v8::Value> wxNode_wxMenu::_GetWindow(const v8::Arguments& args) {
  v8::HandleScope scope;
  wxNode_wxMenu* self = unwrap<wxNode_wxMenu>(args.This());

  
  /*
   * id: _44761
   */
  if(args.Length() == 0) {
    

    wxWindow* returnVal = self->GetWindow();

    return scope.Close(wxNode_wxWindow::New(returnVal));
  }
  

  std::ostringstream errStr;
  errStr << "Could not find matching method for arguments (method name: wxMenu::GetWindow).\n";
  errStr << "  arg count: " << args.Length() << "\n";
  for(int i = 0; i < args.Length(); i++) {
    v8::String::AsciiValue argStr(args[i]);
    errStr << "  arg[" << i << "]: " << *argStr << "\n";
  }
  return v8::ThrowException(v8::Exception::TypeError(v8::String::New(errStr.str().c_str())));
}

/*static*/ v8::Handle<v8::Value> wxNode_wxMenu::_GetStyle(const v8::Arguments& args) {
  v8::HandleScope scope;
  wxNode_wxMenu* self = unwrap<wxNode_wxMenu>(args.This());

  
  /*
   * id: _44762
   */
  if(args.Length() == 0) {
    

    int returnVal = self->GetStyle();

    return scope.Close(v8::Number::New(returnVal));
  }
  

  std::ostringstream errStr;
  errStr << "Could not find matching method for arguments (method name: wxMenu::GetStyle).\n";
  errStr << "  arg count: " << args.Length() << "\n";
  for(int i = 0; i < args.Length(); i++) {
    v8::String::AsciiValue argStr(args[i]);
    errStr << "  arg[" << i << "]: " << *argStr << "\n";
  }
  return v8::ThrowException(v8::Exception::TypeError(v8::String::New(errStr.str().c_str())));
}

/*static*/ v8::Handle<v8::Value> wxNode_wxMenu::_UpdateUI(const v8::Arguments& args) {
  v8::HandleScope scope;
  wxNode_wxMenu* self = unwrap<wxNode_wxMenu>(args.This());

  
  /*
   * id: _44763
   */
  if(args.Length() == 1 && (args[0]->IsNull() || (args[0]->IsObject() && wxNode_wxEvtHandler::AssignableFrom(args[0]->ToObject()->GetConstructorName())))) {
    wxNode_wxEvtHandler* source = args[0]->IsNull() ? NULL : wxNodeObject::unwrap<wxNode_wxEvtHandler>(args[0]->ToObject()); /* type: _1665 * */
    

    self->UpdateUI(source);

    return v8::Undefined();
  }
  
  /*
   * id: _44763
   */
  if(args.Length() == 0) {
    

    self->UpdateUI();

    return v8::Undefined();
  }
  

  std::ostringstream errStr;
  errStr << "Could not find matching method for arguments (method name: wxMenu::UpdateUI).\n";
  errStr << "  arg count: " << args.Length() << "\n";
  for(int i = 0; i < args.Length(); i++) {
    v8::String::AsciiValue argStr(args[i]);
    errStr << "  arg[" << i << "]: " << *argStr << "\n";
  }
  return v8::ThrowException(v8::Exception::TypeError(v8::String::New(errStr.str().c_str())));
}

/*static*/ v8::Handle<v8::Value> wxNode_wxMenu::_GetMenuBar(const v8::Arguments& args) {
  v8::HandleScope scope;
  wxNode_wxMenu* self = unwrap<wxNode_wxMenu>(args.This());

  
  /*
   * id: _44764
   */
  if(args.Length() == 0) {
    

    wxMenuBar* returnVal = self->GetMenuBar();

    return scope.Close(wxNode_wxMenuBar::New(returnVal));
  }
  

  std::ostringstream errStr;
  errStr << "Could not find matching method for arguments (method name: wxMenu::GetMenuBar).\n";
  errStr << "  arg count: " << args.Length() << "\n";
  for(int i = 0; i < args.Length(); i++) {
    v8::String::AsciiValue argStr(args[i]);
    errStr << "  arg[" << i << "]: " << *argStr << "\n";
  }
  return v8::ThrowException(v8::Exception::TypeError(v8::String::New(errStr.str().c_str())));
}

/*static*/ v8::Handle<v8::Value> wxNode_wxMenu::_Attach(const v8::Arguments& args) {
  v8::HandleScope scope;
  wxNode_wxMenu* self = unwrap<wxNode_wxMenu>(args.This());

  
  /*
   * id: _44765
   */
  if(args.Length() == 1 && (args[0]->IsNull() || (args[0]->IsObject() && wxNode_wxMenuBar::AssignableFrom(args[0]->ToObject()->GetConstructorName())))) {
    wxNode_wxMenuBar* menubar = args[0]->IsNull() ? NULL : wxNodeObject::unwrap<wxNode_wxMenuBar>(args[0]->ToObject()); /* type: _59442 * */
    

    self->Attach(menubar);

    return v8::Undefined();
  }
  

  std::ostringstream errStr;
  errStr << "Could not find matching method for arguments (method name: wxMenu::Attach).\n";
  errStr << "  arg count: " << args.Length() << "\n";
  for(int i = 0; i < args.Length(); i++) {
    v8::String::AsciiValue argStr(args[i]);
    errStr << "  arg[" << i << "]: " << *argStr << "\n";
  }
  return v8::ThrowException(v8::Exception::TypeError(v8::String::New(errStr.str().c_str())));
}

/*static*/ v8::Handle<v8::Value> wxNode_wxMenu::_Detach(const v8::Arguments& args) {
  v8::HandleScope scope;
  wxNode_wxMenu* self = unwrap<wxNode_wxMenu>(args.This());

  
  /*
   * id: _44766
   */
  if(args.Length() == 0) {
    

    self->Detach();

    return v8::Undefined();
  }
  

  std::ostringstream errStr;
  errStr << "Could not find matching method for arguments (method name: wxMenu::Detach).\n";
  errStr << "  arg count: " << args.Length() << "\n";
  for(int i = 0; i < args.Length(); i++) {
    v8::String::AsciiValue argStr(args[i]);
    errStr << "  arg[" << i << "]: " << *argStr << "\n";
  }
  return v8::ThrowException(v8::Exception::TypeError(v8::String::New(errStr.str().c_str())));
}

/*static*/ v8::Handle<v8::Value> wxNode_wxMenu::_IsAttached(const v8::Arguments& args) {
  v8::HandleScope scope;
  wxNode_wxMenu* self = unwrap<wxNode_wxMenu>(args.This());

  
  /*
   * id: _44767
   */
  if(args.Length() == 0) {
    

    bool returnVal = self->IsAttached();

    return scope.Close(v8::Boolean::New(returnVal));
  }
  

  std::ostringstream errStr;
  errStr << "Could not find matching method for arguments (method name: wxMenu::IsAttached).\n";
  errStr << "  arg count: " << args.Length() << "\n";
  for(int i = 0; i < args.Length(); i++) {
    v8::String::AsciiValue argStr(args[i]);
    errStr << "  arg[" << i << "]: " << *argStr << "\n";
  }
  return v8::ThrowException(v8::Exception::TypeError(v8::String::New(errStr.str().c_str())));
}

/*static*/ v8::Handle<v8::Value> wxNode_wxMenu::_SetParent(const v8::Arguments& args) {
  v8::HandleScope scope;
  wxNode_wxMenu* self = unwrap<wxNode_wxMenu>(args.This());

  
  /*
   * id: _44768
   */
  if(args.Length() == 1 && (args[0]->IsNull() || (args[0]->IsObject() && wxNode_wxMenu::AssignableFrom(args[0]->ToObject()->GetConstructorName())))) {
    wxNode_wxMenu* parent = args[0]->IsNull() ? NULL : wxNodeObject::unwrap<wxNode_wxMenu>(args[0]->ToObject()); /* type: _52838 * */
    

    self->SetParent(parent);

    return v8::Undefined();
  }
  

  std::ostringstream errStr;
  errStr << "Could not find matching method for arguments (method name: wxMenu::SetParent).\n";
  errStr << "  arg count: " << args.Length() << "\n";
  for(int i = 0; i < args.Length(); i++) {
    v8::String::AsciiValue argStr(args[i]);
    errStr << "  arg[" << i << "]: " << *argStr << "\n";
  }
  return v8::ThrowException(v8::Exception::TypeError(v8::String::New(errStr.str().c_str())));
}

/*static*/ v8::Handle<v8::Value> wxNode_wxMenu::_GetParent(const v8::Arguments& args) {
  v8::HandleScope scope;
  wxNode_wxMenu* self = unwrap<wxNode_wxMenu>(args.This());

  
  /*
   * id: _44769
   */
  if(args.Length() == 0) {
    

    wxMenu* returnVal = self->GetParent();

    return scope.Close(wxNode_wxMenu::New(returnVal));
  }
  

  std::ostringstream errStr;
  errStr << "Could not find matching method for arguments (method name: wxMenu::GetParent).\n";
  errStr << "  arg count: " << args.Length() << "\n";
  for(int i = 0; i < args.Length(); i++) {
    v8::String::AsciiValue argStr(args[i]);
    errStr << "  arg[" << i << "]: " << *argStr << "\n";
  }
  return v8::ThrowException(v8::Exception::TypeError(v8::String::New(errStr.str().c_str())));
}

/*static*/ v8::Handle<v8::Value> wxNode_wxMenu::_FindChildItem(const v8::Arguments& args) {
  v8::HandleScope scope;
  wxNode_wxMenu* self = unwrap<wxNode_wxMenu>(args.This());

  
  /*
   * id: _44770
   */
  if(args.Length() == 2 && args[0]->IsNumber() && false) {
    int itemid = (int)args[0]->ToInt32()->Value(); /* type: _162  */
    unsigned int pos; /* type: _28691 * */
    

    wxMenuItem* returnVal = self->FindChildItem(itemid, &pos);

    return scope.Close(wxNode_wxMenuItem::New(returnVal));
  }
  
  /*
   * id: _44770
   */
  if(args.Length() == 1 && args[0]->IsNumber()) {
    int itemid = (int)args[0]->ToInt32()->Value(); /* type: _162  */
    

    wxMenuItem* returnVal = self->FindChildItem(itemid);

    return scope.Close(wxNode_wxMenuItem::New(returnVal));
  }
  

  std::ostringstream errStr;
  errStr << "Could not find matching method for arguments (method name: wxMenu::FindChildItem).\n";
  errStr << "  arg count: " << args.Length() << "\n";
  for(int i = 0; i < args.Length(); i++) {
    v8::String::AsciiValue argStr(args[i]);
    errStr << "  arg[" << i << "]: " << *argStr << "\n";
  }
  return v8::ThrowException(v8::Exception::TypeError(v8::String::New(errStr.str().c_str())));
}

/*static*/ v8::Handle<v8::Value> wxNode_wxMenu::_SendEvent(const v8::Arguments& args) {
  v8::HandleScope scope;
  wxNode_wxMenu* self = unwrap<wxNode_wxMenu>(args.This());

  
  /*
   * id: _44771
   */
  if(args.Length() == 2 && args[0]->IsNumber() && args[1]->IsNumber()) {
    int itemid = (int)args[0]->ToInt32()->Value(); /* type: _162  */
    int checked = (int)args[1]->ToInt32()->Value(); /* type: _162  */
    

    bool returnVal = self->SendEvent(itemid, checked);

    return scope.Close(v8::Boolean::New(returnVal));
  }
  
  /*
   * id: _44771
   */
  if(args.Length() == 1 && args[0]->IsNumber()) {
    int itemid = (int)args[0]->ToInt32()->Value(); /* type: _162  */
    

    bool returnVal = self->SendEvent(itemid);

    return scope.Close(v8::Boolean::New(returnVal));
  }
  

  std::ostringstream errStr;
  errStr << "Could not find matching method for arguments (method name: wxMenu::SendEvent).\n";
  errStr << "  arg count: " << args.Length() << "\n";
  for(int i = 0; i < args.Length(); i++) {
    v8::String::AsciiValue argStr(args[i]);
    errStr << "  arg[" << i << "]: " << *argStr << "\n";
  }
  return v8::ThrowException(v8::Exception::TypeError(v8::String::New(errStr.str().c_str())));
}

/*static*/ v8::Handle<v8::Value> wxNode_wxMenu::_LockAccels(const v8::Arguments& args) {
  v8::HandleScope scope;
  wxNode_wxMenu* self = unwrap<wxNode_wxMenu>(args.This());

  
  /*
   * id: _44776
   */
  if(args.Length() == 1 && args[0]->IsBoolean()) {
    bool locked = args[0]->ToBoolean()->Value(); /* type: _14666  */
    

    self->LockAccels(locked);

    return v8::Undefined();
  }
  

  std::ostringstream errStr;
  errStr << "Could not find matching method for arguments (method name: wxMenu::LockAccels).\n";
  errStr << "  arg count: " << args.Length() << "\n";
  for(int i = 0; i < args.Length(); i++) {
    v8::String::AsciiValue argStr(args[i]);
    errStr << "  arg[" << i << "]: " << *argStr << "\n";
  }
  return v8::ThrowException(v8::Exception::TypeError(v8::String::New(errStr.str().c_str())));
}

