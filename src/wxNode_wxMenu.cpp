
#include "wxNode_wxMenu.h"
#include "wxNode_wxItemKind.h"
#include "wxNode_wxMenuItem.h"
#include "wxNode_wxEvtHandler.h"
#include "wxNode_wxWindow.h"
#include "wxNode_wxMenuBar.h"


/* static */ v8::Persistent<v8::FunctionTemplate> wxNode_wxMenu::s_ct;

/*static*/ void wxNode_wxMenu::Init(v8::Handle<v8::Object> target) {
  v8::HandleScope scope;

  v8::Local<v8::FunctionTemplate> t = v8::FunctionTemplate::New(wxNodeObject::NewFunc);
  s_ct = v8::Persistent<v8::FunctionTemplate>::New(t);
  s_ct->InstanceTemplate()->SetInternalFieldCount(2);
  s_ct->SetClassName(v8::String::NewSymbol("wxMenu"));

  NODE_SET_PROTOTYPE_METHOD(s_ct, "init", _init);
  NODE_SET_PROTOTYPE_METHOD(s_ct, "new", _New);
  NODE_SET_PROTOTYPE_METHOD(s_ct, "append", _Append);
  NODE_SET_PROTOTYPE_METHOD(s_ct, "appendSeparator", _AppendSeparator);
  NODE_SET_PROTOTYPE_METHOD(s_ct, "appendCheckItem", _AppendCheckItem);
  NODE_SET_PROTOTYPE_METHOD(s_ct, "appendRadioItem", _AppendRadioItem);
  NODE_SET_PROTOTYPE_METHOD(s_ct, "appendSubMenu", _AppendSubMenu);
  NODE_SET_PROTOTYPE_METHOD(s_ct, "break", _Break);
  NODE_SET_PROTOTYPE_METHOD(s_ct, "insert", _Insert);
  NODE_SET_PROTOTYPE_METHOD(s_ct, "insertSeparator", _InsertSeparator);
  NODE_SET_PROTOTYPE_METHOD(s_ct, "insertCheckItem", _InsertCheckItem);
  NODE_SET_PROTOTYPE_METHOD(s_ct, "insertRadioItem", _InsertRadioItem);
  NODE_SET_PROTOTYPE_METHOD(s_ct, "prepend", _Prepend);
  NODE_SET_PROTOTYPE_METHOD(s_ct, "prependSeparator", _PrependSeparator);
  NODE_SET_PROTOTYPE_METHOD(s_ct, "prependCheckItem", _PrependCheckItem);
  NODE_SET_PROTOTYPE_METHOD(s_ct, "prependRadioItem", _PrependRadioItem);
  NODE_SET_PROTOTYPE_METHOD(s_ct, "remove", _Remove);
  NODE_SET_PROTOTYPE_METHOD(s_ct, "delete", _Delete);
  NODE_SET_PROTOTYPE_METHOD(s_ct, "destroy", _Destroy);
  NODE_SET_PROTOTYPE_METHOD(s_ct, "getMenuItemCount", _GetMenuItemCount);
  NODE_SET_PROTOTYPE_METHOD(s_ct, "getMenuItems", _GetMenuItems);
  NODE_SET_PROTOTYPE_METHOD(s_ct, "findItem", _FindItem);
  NODE_SET_PROTOTYPE_METHOD(s_ct, "findItemByPosition", _FindItemByPosition);
  NODE_SET_PROTOTYPE_METHOD(s_ct, "enable", _Enable);
  NODE_SET_PROTOTYPE_METHOD(s_ct, "isEnabled", _IsEnabled);
  NODE_SET_PROTOTYPE_METHOD(s_ct, "check", _Check);
  NODE_SET_PROTOTYPE_METHOD(s_ct, "isChecked", _IsChecked);
  NODE_SET_PROTOTYPE_METHOD(s_ct, "setLabel", _SetLabel);
  NODE_SET_PROTOTYPE_METHOD(s_ct, "getLabel", _GetLabel);
  NODE_SET_PROTOTYPE_METHOD(s_ct, "getLabelText", _GetLabelText);
  NODE_SET_PROTOTYPE_METHOD(s_ct, "setHelpString", _SetHelpString);
  NODE_SET_PROTOTYPE_METHOD(s_ct, "getHelpString", _GetHelpString);
  NODE_SET_PROTOTYPE_METHOD(s_ct, "setTitle", _SetTitle);
  NODE_SET_PROTOTYPE_METHOD(s_ct, "getTitle", _GetTitle);
  NODE_SET_PROTOTYPE_METHOD(s_ct, "setEventHandler", _SetEventHandler);
  NODE_SET_PROTOTYPE_METHOD(s_ct, "getEventHandler", _GetEventHandler);
  NODE_SET_PROTOTYPE_METHOD(s_ct, "setInvokingWindow", _SetInvokingWindow);
  NODE_SET_PROTOTYPE_METHOD(s_ct, "getInvokingWindow", _GetInvokingWindow);
  NODE_SET_PROTOTYPE_METHOD(s_ct, "getWindow", _GetWindow);
  NODE_SET_PROTOTYPE_METHOD(s_ct, "getStyle", _GetStyle);
  NODE_SET_PROTOTYPE_METHOD(s_ct, "updateUI", _UpdateUI);
  NODE_SET_PROTOTYPE_METHOD(s_ct, "getMenuBar", _GetMenuBar);
  NODE_SET_PROTOTYPE_METHOD(s_ct, "attach", _Attach);
  NODE_SET_PROTOTYPE_METHOD(s_ct, "detach", _Detach);
  NODE_SET_PROTOTYPE_METHOD(s_ct, "isAttached", _IsAttached);
  NODE_SET_PROTOTYPE_METHOD(s_ct, "setParent", _SetParent);
  NODE_SET_PROTOTYPE_METHOD(s_ct, "getParent", _GetParent);
  NODE_SET_PROTOTYPE_METHOD(s_ct, "findChildItem", _FindChildItem);
  NODE_SET_PROTOTYPE_METHOD(s_ct, "sendEvent", _SendEvent);
  NODE_SET_PROTOTYPE_METHOD(s_ct, "lockAccels", _LockAccels);
  
  wxNodeObject::Init(s_ct);

  target->Set(v8::String::NewSymbol("wxMenu"), s_ct->GetFunction());
}

/*static*/ v8::Handle<v8::Value> wxNode_wxMenu::_init(const v8::Arguments& args) {
  v8::HandleScope scope;

  // TODO: handle arguments

  wxNode_wxMenu *self = new wxNode_wxMenu();
  self->wrap(args.This(), self, NULL);
  return args.This();
}


/*static*/ v8::Handle<v8::Value> wxNode_wxMenu::_New(const v8::Arguments& args) {
  wxNode_wxMenu* self = unwrap<wxNode_wxMenu>(args.This());

  
  /*
   * id: _44711
   */
  if(args.Length() == 2 && args[0]->IsString() && args[1]->IsNumber()) {
    v8::String::AsciiValue title(args[0]->ToString()); /* type: _14808  */
    long int style = (long int)args[1]->ToInt32()->Value(); /* type: _586  */
    

    self->New(*title, style);

    // TODO: handle return type
    return v8::Undefined();
  }
  
  /*
   * id: _44711
   */
  if(args.Length() == 1 && args[0]->IsString()) {
    v8::String::AsciiValue title(args[0]->ToString()); /* type: _14808  */
    

    self->New(*title);

    // TODO: handle return type
    return v8::Undefined();
  }
  

  // TODO: throw exception on no matches
  return v8::Undefined();
}

/*static*/ v8::Handle<v8::Value> wxNode_wxMenu::_Append(const v8::Arguments& args) {
  wxNode_wxMenu* self = unwrap<wxNode_wxMenu>(args.This());

  
  /*
   * id: _44715
   */
  if(args.Length() == 4 && args[0]->IsNumber() && args[1]->IsString() && args[2]->IsString() && args[3]->IsObject()) {
    int itemid = (int)args[0]->ToInt32()->Value(); /* type: _162  */
    v8::String::AsciiValue text(args[1]->ToString()); /* type: _14808  */
    v8::String::AsciiValue help(args[2]->ToString()); /* type: _14808  */
    wxNode_wxItemKind* kind = wxNodeObject::unwrap<wxNode_wxItemKind>(args[3]->ToObject()); /* type: _4625  */
    

    self->Append(itemid, *text, *help, kind);

    // TODO: handle return type
    return v8::Undefined();
  }
  
  /*
   * id: _44715
   */
  if(args.Length() == 3 && args[0]->IsNumber() && args[1]->IsString() && args[2]->IsString()) {
    int itemid = (int)args[0]->ToInt32()->Value(); /* type: _162  */
    v8::String::AsciiValue text(args[1]->ToString()); /* type: _14808  */
    v8::String::AsciiValue help(args[2]->ToString()); /* type: _14808  */
    

    self->Append(itemid, *text, *help);

    // TODO: handle return type
    return v8::Undefined();
  }
  
  /*
   * id: _44715
   */
  if(args.Length() == 2 && args[0]->IsNumber() && args[1]->IsString()) {
    int itemid = (int)args[0]->ToInt32()->Value(); /* type: _162  */
    v8::String::AsciiValue text(args[1]->ToString()); /* type: _14808  */
    

    self->Append(itemid, *text);

    // TODO: handle return type
    return v8::Undefined();
  }
  
  /*
   * id: _44715
   */
  if(args.Length() == 1 && args[0]->IsNumber()) {
    int itemid = (int)args[0]->ToInt32()->Value(); /* type: _162  */
    

    self->Append(itemid);

    // TODO: handle return type
    return v8::Undefined();
  }
  
  /*
   * id: _44720
   */
  if(args.Length() == 1 && args[0]->IsObject()) {
    wxNode_wxMenuItem* item = wxNodeObject::unwrap<wxNode_wxMenuItem>(args[0]->ToObject()); /* type: _51683 * */
    

    self->Append(item);

    // TODO: handle return type
    return v8::Undefined();
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

    // TODO: handle return type
    return v8::Undefined();
  }
  
  /*
   * id: _44773
   */
  if(args.Length() == 4 && args[0]->IsNumber() && args[1]->IsString() && args[2]->IsObject() && args[3]->IsString()) {
    int itemid = (int)args[0]->ToInt32()->Value(); /* type: _162  */
    v8::String::AsciiValue text(args[1]->ToString()); /* type: _14808  */
    wxNode_wxMenu* submenu = wxNodeObject::unwrap<wxNode_wxMenu>(args[2]->ToObject()); /* type: _52838 * */
    v8::String::AsciiValue help(args[3]->ToString()); /* type: _14808  */
    

    self->Append(itemid, *text, submenu, *help);

    // TODO: handle return type
    return v8::Undefined();
  }
  
  /*
   * id: _44773
   */
  if(args.Length() == 3 && args[0]->IsNumber() && args[1]->IsString() && args[2]->IsObject()) {
    int itemid = (int)args[0]->ToInt32()->Value(); /* type: _162  */
    v8::String::AsciiValue text(args[1]->ToString()); /* type: _14808  */
    wxNode_wxMenu* submenu = wxNodeObject::unwrap<wxNode_wxMenu>(args[2]->ToObject()); /* type: _52838 * */
    

    self->Append(itemid, *text, submenu);

    // TODO: handle return type
    return v8::Undefined();
  }
  

  // TODO: throw exception on no matches
  return v8::Undefined();
}

/*static*/ v8::Handle<v8::Value> wxNode_wxMenu::_AppendSeparator(const v8::Arguments& args) {
  wxNode_wxMenu* self = unwrap<wxNode_wxMenu>(args.This());

  
  /*
   * id: _44716
   */
  if(args.Length() == 0) {
    

    self->AppendSeparator();

    // TODO: handle return type
    return v8::Undefined();
  }
  

  // TODO: throw exception on no matches
  return v8::Undefined();
}

/*static*/ v8::Handle<v8::Value> wxNode_wxMenu::_AppendCheckItem(const v8::Arguments& args) {
  wxNode_wxMenu* self = unwrap<wxNode_wxMenu>(args.This());

  
  /*
   * id: _44717
   */
  if(args.Length() == 3 && args[0]->IsNumber() && args[1]->IsString() && args[2]->IsString()) {
    int itemid = (int)args[0]->ToInt32()->Value(); /* type: _162  */
    v8::String::AsciiValue text(args[1]->ToString()); /* type: _14808  */
    v8::String::AsciiValue help(args[2]->ToString()); /* type: _14808  */
    

    self->AppendCheckItem(itemid, *text, *help);

    // TODO: handle return type
    return v8::Undefined();
  }
  
  /*
   * id: _44717
   */
  if(args.Length() == 2 && args[0]->IsNumber() && args[1]->IsString()) {
    int itemid = (int)args[0]->ToInt32()->Value(); /* type: _162  */
    v8::String::AsciiValue text(args[1]->ToString()); /* type: _14808  */
    

    self->AppendCheckItem(itemid, *text);

    // TODO: handle return type
    return v8::Undefined();
  }
  

  // TODO: throw exception on no matches
  return v8::Undefined();
}

/*static*/ v8::Handle<v8::Value> wxNode_wxMenu::_AppendRadioItem(const v8::Arguments& args) {
  wxNode_wxMenu* self = unwrap<wxNode_wxMenu>(args.This());

  
  /*
   * id: _44718
   */
  if(args.Length() == 3 && args[0]->IsNumber() && args[1]->IsString() && args[2]->IsString()) {
    int itemid = (int)args[0]->ToInt32()->Value(); /* type: _162  */
    v8::String::AsciiValue text(args[1]->ToString()); /* type: _14808  */
    v8::String::AsciiValue help(args[2]->ToString()); /* type: _14808  */
    

    self->AppendRadioItem(itemid, *text, *help);

    // TODO: handle return type
    return v8::Undefined();
  }
  
  /*
   * id: _44718
   */
  if(args.Length() == 2 && args[0]->IsNumber() && args[1]->IsString()) {
    int itemid = (int)args[0]->ToInt32()->Value(); /* type: _162  */
    v8::String::AsciiValue text(args[1]->ToString()); /* type: _14808  */
    

    self->AppendRadioItem(itemid, *text);

    // TODO: handle return type
    return v8::Undefined();
  }
  

  // TODO: throw exception on no matches
  return v8::Undefined();
}

/*static*/ v8::Handle<v8::Value> wxNode_wxMenu::_AppendSubMenu(const v8::Arguments& args) {
  wxNode_wxMenu* self = unwrap<wxNode_wxMenu>(args.This());

  
  /*
   * id: _44719
   */
  if(args.Length() == 3 && args[0]->IsObject() && args[1]->IsString() && args[2]->IsString()) {
    wxNode_wxMenu* submenu = wxNodeObject::unwrap<wxNode_wxMenu>(args[0]->ToObject()); /* type: _52838 * */
    v8::String::AsciiValue text(args[1]->ToString()); /* type: _14808  */
    v8::String::AsciiValue help(args[2]->ToString()); /* type: _14808  */
    

    self->AppendSubMenu(submenu, *text, *help);

    // TODO: handle return type
    return v8::Undefined();
  }
  
  /*
   * id: _44719
   */
  if(args.Length() == 2 && args[0]->IsObject() && args[1]->IsString()) {
    wxNode_wxMenu* submenu = wxNodeObject::unwrap<wxNode_wxMenu>(args[0]->ToObject()); /* type: _52838 * */
    v8::String::AsciiValue text(args[1]->ToString()); /* type: _14808  */
    

    self->AppendSubMenu(submenu, *text);

    // TODO: handle return type
    return v8::Undefined();
  }
  

  // TODO: throw exception on no matches
  return v8::Undefined();
}

/*static*/ v8::Handle<v8::Value> wxNode_wxMenu::_Break(const v8::Arguments& args) {
  wxNode_wxMenu* self = unwrap<wxNode_wxMenu>(args.This());

  
  /*
   * id: _44721
   */
  if(args.Length() == 0) {
    

    self->Break();

    // TODO: handle return type
    return v8::Undefined();
  }
  

  // TODO: throw exception on no matches
  return v8::Undefined();
}

/*static*/ v8::Handle<v8::Value> wxNode_wxMenu::_Insert(const v8::Arguments& args) {
  wxNode_wxMenu* self = unwrap<wxNode_wxMenu>(args.This());

  
  /*
   * id: _44722
   */
  if(args.Length() == 2 && args[0]->IsNumber() && args[1]->IsObject()) {
    size_t pos = (size_t)args[0]->ToInt32()->Value(); /* type: _8620  */
    wxNode_wxMenuItem* item = wxNodeObject::unwrap<wxNode_wxMenuItem>(args[1]->ToObject()); /* type: _51683 * */
    

    self->Insert(pos, item);

    // TODO: handle return type
    return v8::Undefined();
  }
  
  /*
   * id: _44723
   */
  if(args.Length() == 5 && args[0]->IsNumber() && args[1]->IsNumber() && args[2]->IsString() && args[3]->IsString() && args[4]->IsObject()) {
    size_t pos = (size_t)args[0]->ToInt32()->Value(); /* type: _8620  */
    int itemid = (int)args[1]->ToInt32()->Value(); /* type: _162  */
    v8::String::AsciiValue text(args[2]->ToString()); /* type: _14808  */
    v8::String::AsciiValue help(args[3]->ToString()); /* type: _14808  */
    wxNode_wxItemKind* kind = wxNodeObject::unwrap<wxNode_wxItemKind>(args[4]->ToObject()); /* type: _4625  */
    

    self->Insert(pos, itemid, *text, *help, kind);

    // TODO: handle return type
    return v8::Undefined();
  }
  
  /*
   * id: _44723
   */
  if(args.Length() == 4 && args[0]->IsNumber() && args[1]->IsNumber() && args[2]->IsString() && args[3]->IsString()) {
    size_t pos = (size_t)args[0]->ToInt32()->Value(); /* type: _8620  */
    int itemid = (int)args[1]->ToInt32()->Value(); /* type: _162  */
    v8::String::AsciiValue text(args[2]->ToString()); /* type: _14808  */
    v8::String::AsciiValue help(args[3]->ToString()); /* type: _14808  */
    

    self->Insert(pos, itemid, *text, *help);

    // TODO: handle return type
    return v8::Undefined();
  }
  
  /*
   * id: _44723
   */
  if(args.Length() == 3 && args[0]->IsNumber() && args[1]->IsNumber() && args[2]->IsString()) {
    size_t pos = (size_t)args[0]->ToInt32()->Value(); /* type: _8620  */
    int itemid = (int)args[1]->ToInt32()->Value(); /* type: _162  */
    v8::String::AsciiValue text(args[2]->ToString()); /* type: _14808  */
    

    self->Insert(pos, itemid, *text);

    // TODO: handle return type
    return v8::Undefined();
  }
  
  /*
   * id: _44723
   */
  if(args.Length() == 2 && args[0]->IsNumber() && args[1]->IsNumber()) {
    size_t pos = (size_t)args[0]->ToInt32()->Value(); /* type: _8620  */
    int itemid = (int)args[1]->ToInt32()->Value(); /* type: _162  */
    

    self->Insert(pos, itemid);

    // TODO: handle return type
    return v8::Undefined();
  }
  
  /*
   * id: _44727
   */
  if(args.Length() == 5 && args[0]->IsNumber() && args[1]->IsNumber() && args[2]->IsString() && args[3]->IsObject() && args[4]->IsString()) {
    size_t pos = (size_t)args[0]->ToInt32()->Value(); /* type: _8620  */
    int itemid = (int)args[1]->ToInt32()->Value(); /* type: _162  */
    v8::String::AsciiValue text(args[2]->ToString()); /* type: _14808  */
    wxNode_wxMenu* submenu = wxNodeObject::unwrap<wxNode_wxMenu>(args[3]->ToObject()); /* type: _52838 * */
    v8::String::AsciiValue help(args[4]->ToString()); /* type: _14808  */
    

    self->Insert(pos, itemid, *text, submenu, *help);

    // TODO: handle return type
    return v8::Undefined();
  }
  
  /*
   * id: _44727
   */
  if(args.Length() == 4 && args[0]->IsNumber() && args[1]->IsNumber() && args[2]->IsString() && args[3]->IsObject()) {
    size_t pos = (size_t)args[0]->ToInt32()->Value(); /* type: _8620  */
    int itemid = (int)args[1]->ToInt32()->Value(); /* type: _162  */
    v8::String::AsciiValue text(args[2]->ToString()); /* type: _14808  */
    wxNode_wxMenu* submenu = wxNodeObject::unwrap<wxNode_wxMenu>(args[3]->ToObject()); /* type: _52838 * */
    

    self->Insert(pos, itemid, *text, submenu);

    // TODO: handle return type
    return v8::Undefined();
  }
  
  /*
   * id: _44774
   */
  if(args.Length() == 5 && args[0]->IsNumber() && args[1]->IsNumber() && args[2]->IsString() && args[3]->IsString() && args[4]->IsBoolean()) {
    size_t pos = (size_t)args[0]->ToInt32()->Value(); /* type: _8620  */
    int itemid = (int)args[1]->ToInt32()->Value(); /* type: _162  */
    v8::String::AsciiValue text(args[2]->ToString()); /* type: _14808  */
    v8::String::AsciiValue help(args[3]->ToString()); /* type: _14808  */
    bool isCheckable = args[4]->ToBoolean()->Value(); /* type: _14666  */
    

    self->Insert(pos, itemid, *text, *help, isCheckable);

    // TODO: handle return type
    return v8::Undefined();
  }
  

  // TODO: throw exception on no matches
  return v8::Undefined();
}

/*static*/ v8::Handle<v8::Value> wxNode_wxMenu::_InsertSeparator(const v8::Arguments& args) {
  wxNode_wxMenu* self = unwrap<wxNode_wxMenu>(args.This());

  
  /*
   * id: _44724
   */
  if(args.Length() == 1 && args[0]->IsNumber()) {
    size_t pos = (size_t)args[0]->ToInt32()->Value(); /* type: _8620  */
    

    self->InsertSeparator(pos);

    // TODO: handle return type
    return v8::Undefined();
  }
  

  // TODO: throw exception on no matches
  return v8::Undefined();
}

/*static*/ v8::Handle<v8::Value> wxNode_wxMenu::_InsertCheckItem(const v8::Arguments& args) {
  wxNode_wxMenu* self = unwrap<wxNode_wxMenu>(args.This());

  
  /*
   * id: _44725
   */
  if(args.Length() == 4 && args[0]->IsNumber() && args[1]->IsNumber() && args[2]->IsString() && args[3]->IsString()) {
    size_t pos = (size_t)args[0]->ToInt32()->Value(); /* type: _8620  */
    int itemid = (int)args[1]->ToInt32()->Value(); /* type: _162  */
    v8::String::AsciiValue text(args[2]->ToString()); /* type: _14808  */
    v8::String::AsciiValue help(args[3]->ToString()); /* type: _14808  */
    

    self->InsertCheckItem(pos, itemid, *text, *help);

    // TODO: handle return type
    return v8::Undefined();
  }
  
  /*
   * id: _44725
   */
  if(args.Length() == 3 && args[0]->IsNumber() && args[1]->IsNumber() && args[2]->IsString()) {
    size_t pos = (size_t)args[0]->ToInt32()->Value(); /* type: _8620  */
    int itemid = (int)args[1]->ToInt32()->Value(); /* type: _162  */
    v8::String::AsciiValue text(args[2]->ToString()); /* type: _14808  */
    

    self->InsertCheckItem(pos, itemid, *text);

    // TODO: handle return type
    return v8::Undefined();
  }
  

  // TODO: throw exception on no matches
  return v8::Undefined();
}

/*static*/ v8::Handle<v8::Value> wxNode_wxMenu::_InsertRadioItem(const v8::Arguments& args) {
  wxNode_wxMenu* self = unwrap<wxNode_wxMenu>(args.This());

  
  /*
   * id: _44726
   */
  if(args.Length() == 4 && args[0]->IsNumber() && args[1]->IsNumber() && args[2]->IsString() && args[3]->IsString()) {
    size_t pos = (size_t)args[0]->ToInt32()->Value(); /* type: _8620  */
    int itemid = (int)args[1]->ToInt32()->Value(); /* type: _162  */
    v8::String::AsciiValue text(args[2]->ToString()); /* type: _14808  */
    v8::String::AsciiValue help(args[3]->ToString()); /* type: _14808  */
    

    self->InsertRadioItem(pos, itemid, *text, *help);

    // TODO: handle return type
    return v8::Undefined();
  }
  
  /*
   * id: _44726
   */
  if(args.Length() == 3 && args[0]->IsNumber() && args[1]->IsNumber() && args[2]->IsString()) {
    size_t pos = (size_t)args[0]->ToInt32()->Value(); /* type: _8620  */
    int itemid = (int)args[1]->ToInt32()->Value(); /* type: _162  */
    v8::String::AsciiValue text(args[2]->ToString()); /* type: _14808  */
    

    self->InsertRadioItem(pos, itemid, *text);

    // TODO: handle return type
    return v8::Undefined();
  }
  

  // TODO: throw exception on no matches
  return v8::Undefined();
}

/*static*/ v8::Handle<v8::Value> wxNode_wxMenu::_Prepend(const v8::Arguments& args) {
  wxNode_wxMenu* self = unwrap<wxNode_wxMenu>(args.This());

  
  /*
   * id: _44728
   */
  if(args.Length() == 1 && args[0]->IsObject()) {
    wxNode_wxMenuItem* item = wxNodeObject::unwrap<wxNode_wxMenuItem>(args[0]->ToObject()); /* type: _51683 * */
    

    self->Prepend(item);

    // TODO: handle return type
    return v8::Undefined();
  }
  
  /*
   * id: _44729
   */
  if(args.Length() == 4 && args[0]->IsNumber() && args[1]->IsString() && args[2]->IsString() && args[3]->IsObject()) {
    int itemid = (int)args[0]->ToInt32()->Value(); /* type: _162  */
    v8::String::AsciiValue text(args[1]->ToString()); /* type: _14808  */
    v8::String::AsciiValue help(args[2]->ToString()); /* type: _14808  */
    wxNode_wxItemKind* kind = wxNodeObject::unwrap<wxNode_wxItemKind>(args[3]->ToObject()); /* type: _4625  */
    

    self->Prepend(itemid, *text, *help, kind);

    // TODO: handle return type
    return v8::Undefined();
  }
  
  /*
   * id: _44729
   */
  if(args.Length() == 3 && args[0]->IsNumber() && args[1]->IsString() && args[2]->IsString()) {
    int itemid = (int)args[0]->ToInt32()->Value(); /* type: _162  */
    v8::String::AsciiValue text(args[1]->ToString()); /* type: _14808  */
    v8::String::AsciiValue help(args[2]->ToString()); /* type: _14808  */
    

    self->Prepend(itemid, *text, *help);

    // TODO: handle return type
    return v8::Undefined();
  }
  
  /*
   * id: _44729
   */
  if(args.Length() == 2 && args[0]->IsNumber() && args[1]->IsString()) {
    int itemid = (int)args[0]->ToInt32()->Value(); /* type: _162  */
    v8::String::AsciiValue text(args[1]->ToString()); /* type: _14808  */
    

    self->Prepend(itemid, *text);

    // TODO: handle return type
    return v8::Undefined();
  }
  
  /*
   * id: _44729
   */
  if(args.Length() == 1 && args[0]->IsNumber()) {
    int itemid = (int)args[0]->ToInt32()->Value(); /* type: _162  */
    

    self->Prepend(itemid);

    // TODO: handle return type
    return v8::Undefined();
  }
  
  /*
   * id: _44733
   */
  if(args.Length() == 4 && args[0]->IsNumber() && args[1]->IsString() && args[2]->IsObject() && args[3]->IsString()) {
    int itemid = (int)args[0]->ToInt32()->Value(); /* type: _162  */
    v8::String::AsciiValue text(args[1]->ToString()); /* type: _14808  */
    wxNode_wxMenu* submenu = wxNodeObject::unwrap<wxNode_wxMenu>(args[2]->ToObject()); /* type: _52838 * */
    v8::String::AsciiValue help(args[3]->ToString()); /* type: _14808  */
    

    self->Prepend(itemid, *text, submenu, *help);

    // TODO: handle return type
    return v8::Undefined();
  }
  
  /*
   * id: _44733
   */
  if(args.Length() == 3 && args[0]->IsNumber() && args[1]->IsString() && args[2]->IsObject()) {
    int itemid = (int)args[0]->ToInt32()->Value(); /* type: _162  */
    v8::String::AsciiValue text(args[1]->ToString()); /* type: _14808  */
    wxNode_wxMenu* submenu = wxNodeObject::unwrap<wxNode_wxMenu>(args[2]->ToObject()); /* type: _52838 * */
    

    self->Prepend(itemid, *text, submenu);

    // TODO: handle return type
    return v8::Undefined();
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

    // TODO: handle return type
    return v8::Undefined();
  }
  

  // TODO: throw exception on no matches
  return v8::Undefined();
}

/*static*/ v8::Handle<v8::Value> wxNode_wxMenu::_PrependSeparator(const v8::Arguments& args) {
  wxNode_wxMenu* self = unwrap<wxNode_wxMenu>(args.This());

  
  /*
   * id: _44730
   */
  if(args.Length() == 0) {
    

    self->PrependSeparator();

    // TODO: handle return type
    return v8::Undefined();
  }
  

  // TODO: throw exception on no matches
  return v8::Undefined();
}

/*static*/ v8::Handle<v8::Value> wxNode_wxMenu::_PrependCheckItem(const v8::Arguments& args) {
  wxNode_wxMenu* self = unwrap<wxNode_wxMenu>(args.This());

  
  /*
   * id: _44731
   */
  if(args.Length() == 3 && args[0]->IsNumber() && args[1]->IsString() && args[2]->IsString()) {
    int itemid = (int)args[0]->ToInt32()->Value(); /* type: _162  */
    v8::String::AsciiValue text(args[1]->ToString()); /* type: _14808  */
    v8::String::AsciiValue help(args[2]->ToString()); /* type: _14808  */
    

    self->PrependCheckItem(itemid, *text, *help);

    // TODO: handle return type
    return v8::Undefined();
  }
  
  /*
   * id: _44731
   */
  if(args.Length() == 2 && args[0]->IsNumber() && args[1]->IsString()) {
    int itemid = (int)args[0]->ToInt32()->Value(); /* type: _162  */
    v8::String::AsciiValue text(args[1]->ToString()); /* type: _14808  */
    

    self->PrependCheckItem(itemid, *text);

    // TODO: handle return type
    return v8::Undefined();
  }
  

  // TODO: throw exception on no matches
  return v8::Undefined();
}

/*static*/ v8::Handle<v8::Value> wxNode_wxMenu::_PrependRadioItem(const v8::Arguments& args) {
  wxNode_wxMenu* self = unwrap<wxNode_wxMenu>(args.This());

  
  /*
   * id: _44732
   */
  if(args.Length() == 3 && args[0]->IsNumber() && args[1]->IsString() && args[2]->IsString()) {
    int itemid = (int)args[0]->ToInt32()->Value(); /* type: _162  */
    v8::String::AsciiValue text(args[1]->ToString()); /* type: _14808  */
    v8::String::AsciiValue help(args[2]->ToString()); /* type: _14808  */
    

    self->PrependRadioItem(itemid, *text, *help);

    // TODO: handle return type
    return v8::Undefined();
  }
  
  /*
   * id: _44732
   */
  if(args.Length() == 2 && args[0]->IsNumber() && args[1]->IsString()) {
    int itemid = (int)args[0]->ToInt32()->Value(); /* type: _162  */
    v8::String::AsciiValue text(args[1]->ToString()); /* type: _14808  */
    

    self->PrependRadioItem(itemid, *text);

    // TODO: handle return type
    return v8::Undefined();
  }
  

  // TODO: throw exception on no matches
  return v8::Undefined();
}

/*static*/ v8::Handle<v8::Value> wxNode_wxMenu::_Remove(const v8::Arguments& args) {
  wxNode_wxMenu* self = unwrap<wxNode_wxMenu>(args.This());

  
  /*
   * id: _44734
   */
  if(args.Length() == 1 && args[0]->IsNumber()) {
    int itemid = (int)args[0]->ToInt32()->Value(); /* type: _162  */
    

    self->Remove(itemid);

    // TODO: handle return type
    return v8::Undefined();
  }
  
  /*
   * id: _44735
   */
  if(args.Length() == 1 && args[0]->IsObject()) {
    wxNode_wxMenuItem* item = wxNodeObject::unwrap<wxNode_wxMenuItem>(args[0]->ToObject()); /* type: _51683 * */
    

    self->Remove(item);

    // TODO: handle return type
    return v8::Undefined();
  }
  

  // TODO: throw exception on no matches
  return v8::Undefined();
}

/*static*/ v8::Handle<v8::Value> wxNode_wxMenu::_Delete(const v8::Arguments& args) {
  wxNode_wxMenu* self = unwrap<wxNode_wxMenu>(args.This());

  
  /*
   * id: _44736
   */
  if(args.Length() == 1 && args[0]->IsNumber()) {
    int itemid = (int)args[0]->ToInt32()->Value(); /* type: _162  */
    

    self->Delete(itemid);

    // TODO: handle return type
    return v8::Undefined();
  }
  
  /*
   * id: _44737
   */
  if(args.Length() == 1 && args[0]->IsObject()) {
    wxNode_wxMenuItem* item = wxNodeObject::unwrap<wxNode_wxMenuItem>(args[0]->ToObject()); /* type: _51683 * */
    

    self->Delete(item);

    // TODO: handle return type
    return v8::Undefined();
  }
  

  // TODO: throw exception on no matches
  return v8::Undefined();
}

/*static*/ v8::Handle<v8::Value> wxNode_wxMenu::_Destroy(const v8::Arguments& args) {
  wxNode_wxMenu* self = unwrap<wxNode_wxMenu>(args.This());

  
  /*
   * id: _44738
   */
  if(args.Length() == 1 && args[0]->IsNumber()) {
    int itemid = (int)args[0]->ToInt32()->Value(); /* type: _162  */
    

    self->Destroy(itemid);

    // TODO: handle return type
    return v8::Undefined();
  }
  
  /*
   * id: _44739
   */
  if(args.Length() == 1 && args[0]->IsObject()) {
    wxNode_wxMenuItem* item = wxNodeObject::unwrap<wxNode_wxMenuItem>(args[0]->ToObject()); /* type: _51683 * */
    

    self->Destroy(item);

    // TODO: handle return type
    return v8::Undefined();
  }
  

  // TODO: throw exception on no matches
  return v8::Undefined();
}

/*static*/ v8::Handle<v8::Value> wxNode_wxMenu::_GetMenuItemCount(const v8::Arguments& args) {
  wxNode_wxMenu* self = unwrap<wxNode_wxMenu>(args.This());

  
  /*
   * id: _44740
   */
  if(args.Length() == 0) {
    

    self->GetMenuItemCount();

    // TODO: handle return type
    return v8::Undefined();
  }
  

  // TODO: throw exception on no matches
  return v8::Undefined();
}

/*static*/ v8::Handle<v8::Value> wxNode_wxMenu::_GetMenuItems(const v8::Arguments& args) {
  wxNode_wxMenu* self = unwrap<wxNode_wxMenu>(args.This());

  
  /*
   * id: _44741
   */
  if(args.Length() == 0) {
    

    self->GetMenuItems();

    // TODO: handle return type
    return v8::Undefined();
  }
  
  /*
   * id: _44742
   */
  if(args.Length() == 0) {
    

    self->GetMenuItems();

    // TODO: handle return type
    return v8::Undefined();
  }
  

  // TODO: throw exception on no matches
  return v8::Undefined();
}

/*static*/ v8::Handle<v8::Value> wxNode_wxMenu::_FindItem(const v8::Arguments& args) {
  wxNode_wxMenu* self = unwrap<wxNode_wxMenu>(args.This());

  
  /*
   * id: _44743
   */
  if(args.Length() == 1 && args[0]->IsString()) {
    v8::String::AsciiValue item(args[0]->ToString()); /* type: _14808  */
    

    self->FindItem(*item);

    // TODO: handle return type
    return v8::Undefined();
  }
  
  /*
   * id: _44744
   */
  if(args.Length() == 2 && args[0]->IsNumber() && false) {
    int itemid = (int)args[0]->ToInt32()->Value(); /* type: _162  */
    wxMenu* menu; /* type: _65194 ** */
    

    self->FindItem(itemid, &menu);

    // TODO: handle return type
    return v8::Undefined();
  }
  
  /*
   * id: _44744
   */
  if(args.Length() == 1 && args[0]->IsNumber()) {
    int itemid = (int)args[0]->ToInt32()->Value(); /* type: _162  */
    

    self->FindItem(itemid);

    // TODO: handle return type
    return v8::Undefined();
  }
  

  // TODO: throw exception on no matches
  return v8::Undefined();
}

/*static*/ v8::Handle<v8::Value> wxNode_wxMenu::_FindItemByPosition(const v8::Arguments& args) {
  wxNode_wxMenu* self = unwrap<wxNode_wxMenu>(args.This());

  
  /*
   * id: _44745
   */
  if(args.Length() == 1 && args[0]->IsNumber()) {
    size_t position = (size_t)args[0]->ToInt32()->Value(); /* type: _8620  */
    

    self->FindItemByPosition(position);

    // TODO: handle return type
    return v8::Undefined();
  }
  

  // TODO: throw exception on no matches
  return v8::Undefined();
}

/*static*/ v8::Handle<v8::Value> wxNode_wxMenu::_Enable(const v8::Arguments& args) {
  wxNode_wxMenu* self = unwrap<wxNode_wxMenu>(args.This());

  
  /*
   * id: _44746
   */
  if(args.Length() == 2 && args[0]->IsNumber() && args[1]->IsBoolean()) {
    int itemid = (int)args[0]->ToInt32()->Value(); /* type: _162  */
    bool enable = args[1]->ToBoolean()->Value(); /* type: _14666  */
    

    self->Enable(itemid, enable);

    // TODO: handle return type
    return v8::Undefined();
  }
  

  // TODO: throw exception on no matches
  return v8::Undefined();
}

/*static*/ v8::Handle<v8::Value> wxNode_wxMenu::_IsEnabled(const v8::Arguments& args) {
  wxNode_wxMenu* self = unwrap<wxNode_wxMenu>(args.This());

  
  /*
   * id: _44747
   */
  if(args.Length() == 1 && args[0]->IsNumber()) {
    int itemid = (int)args[0]->ToInt32()->Value(); /* type: _162  */
    

    self->IsEnabled(itemid);

    // TODO: handle return type
    return v8::Undefined();
  }
  

  // TODO: throw exception on no matches
  return v8::Undefined();
}

/*static*/ v8::Handle<v8::Value> wxNode_wxMenu::_Check(const v8::Arguments& args) {
  wxNode_wxMenu* self = unwrap<wxNode_wxMenu>(args.This());

  
  /*
   * id: _44748
   */
  if(args.Length() == 2 && args[0]->IsNumber() && args[1]->IsBoolean()) {
    int itemid = (int)args[0]->ToInt32()->Value(); /* type: _162  */
    bool check = args[1]->ToBoolean()->Value(); /* type: _14666  */
    

    self->Check(itemid, check);

    // TODO: handle return type
    return v8::Undefined();
  }
  

  // TODO: throw exception on no matches
  return v8::Undefined();
}

/*static*/ v8::Handle<v8::Value> wxNode_wxMenu::_IsChecked(const v8::Arguments& args) {
  wxNode_wxMenu* self = unwrap<wxNode_wxMenu>(args.This());

  
  /*
   * id: _44749
   */
  if(args.Length() == 1 && args[0]->IsNumber()) {
    int itemid = (int)args[0]->ToInt32()->Value(); /* type: _162  */
    

    self->IsChecked(itemid);

    // TODO: handle return type
    return v8::Undefined();
  }
  

  // TODO: throw exception on no matches
  return v8::Undefined();
}

/*static*/ v8::Handle<v8::Value> wxNode_wxMenu::_SetLabel(const v8::Arguments& args) {
  wxNode_wxMenu* self = unwrap<wxNode_wxMenu>(args.This());

  
  /*
   * id: _44750
   */
  if(args.Length() == 2 && args[0]->IsNumber() && args[1]->IsString()) {
    int itemid = (int)args[0]->ToInt32()->Value(); /* type: _162  */
    v8::String::AsciiValue label(args[1]->ToString()); /* type: _14808  */
    

    self->SetLabel(itemid, *label);

    // TODO: handle return type
    return v8::Undefined();
  }
  

  // TODO: throw exception on no matches
  return v8::Undefined();
}

/*static*/ v8::Handle<v8::Value> wxNode_wxMenu::_GetLabel(const v8::Arguments& args) {
  wxNode_wxMenu* self = unwrap<wxNode_wxMenu>(args.This());

  
  /*
   * id: _44751
   */
  if(args.Length() == 1 && args[0]->IsNumber()) {
    int itemid = (int)args[0]->ToInt32()->Value(); /* type: _162  */
    

    self->GetLabel(itemid);

    // TODO: handle return type
    return v8::Undefined();
  }
  

  // TODO: throw exception on no matches
  return v8::Undefined();
}

/*static*/ v8::Handle<v8::Value> wxNode_wxMenu::_GetLabelText(const v8::Arguments& args) {
  wxNode_wxMenu* self = unwrap<wxNode_wxMenu>(args.This());

  
  /*
   * id: _44752
   */
  if(args.Length() == 1 && args[0]->IsNumber()) {
    int itemid = (int)args[0]->ToInt32()->Value(); /* type: _162  */
    

    self->GetLabelText(itemid);

    // TODO: handle return type
    return v8::Undefined();
  }
  

  // TODO: throw exception on no matches
  return v8::Undefined();
}

/*static*/ v8::Handle<v8::Value> wxNode_wxMenu::_SetHelpString(const v8::Arguments& args) {
  wxNode_wxMenu* self = unwrap<wxNode_wxMenu>(args.This());

  
  /*
   * id: _44753
   */
  if(args.Length() == 2 && args[0]->IsNumber() && args[1]->IsString()) {
    int itemid = (int)args[0]->ToInt32()->Value(); /* type: _162  */
    v8::String::AsciiValue helpString(args[1]->ToString()); /* type: _14808  */
    

    self->SetHelpString(itemid, *helpString);

    // TODO: handle return type
    return v8::Undefined();
  }
  

  // TODO: throw exception on no matches
  return v8::Undefined();
}

/*static*/ v8::Handle<v8::Value> wxNode_wxMenu::_GetHelpString(const v8::Arguments& args) {
  wxNode_wxMenu* self = unwrap<wxNode_wxMenu>(args.This());

  
  /*
   * id: _44754
   */
  if(args.Length() == 1 && args[0]->IsNumber()) {
    int itemid = (int)args[0]->ToInt32()->Value(); /* type: _162  */
    

    self->GetHelpString(itemid);

    // TODO: handle return type
    return v8::Undefined();
  }
  

  // TODO: throw exception on no matches
  return v8::Undefined();
}

/*static*/ v8::Handle<v8::Value> wxNode_wxMenu::_SetTitle(const v8::Arguments& args) {
  wxNode_wxMenu* self = unwrap<wxNode_wxMenu>(args.This());

  
  /*
   * id: _44755
   */
  if(args.Length() == 1 && args[0]->IsString()) {
    v8::String::AsciiValue title(args[0]->ToString()); /* type: _14808  */
    

    self->SetTitle(*title);

    // TODO: handle return type
    return v8::Undefined();
  }
  

  // TODO: throw exception on no matches
  return v8::Undefined();
}

/*static*/ v8::Handle<v8::Value> wxNode_wxMenu::_GetTitle(const v8::Arguments& args) {
  wxNode_wxMenu* self = unwrap<wxNode_wxMenu>(args.This());

  
  /*
   * id: _44756
   */
  if(args.Length() == 0) {
    

    self->GetTitle();

    // TODO: handle return type
    return v8::Undefined();
  }
  

  // TODO: throw exception on no matches
  return v8::Undefined();
}

/*static*/ v8::Handle<v8::Value> wxNode_wxMenu::_SetEventHandler(const v8::Arguments& args) {
  wxNode_wxMenu* self = unwrap<wxNode_wxMenu>(args.This());

  
  /*
   * id: _44757
   */
  if(args.Length() == 1 && args[0]->IsObject()) {
    wxNode_wxEvtHandler* handler = wxNodeObject::unwrap<wxNode_wxEvtHandler>(args[0]->ToObject()); /* type: _1665 * */
    

    self->SetEventHandler(handler);

    // TODO: handle return type
    return v8::Undefined();
  }
  

  // TODO: throw exception on no matches
  return v8::Undefined();
}

/*static*/ v8::Handle<v8::Value> wxNode_wxMenu::_GetEventHandler(const v8::Arguments& args) {
  wxNode_wxMenu* self = unwrap<wxNode_wxMenu>(args.This());

  
  /*
   * id: _44758
   */
  if(args.Length() == 0) {
    

    self->GetEventHandler();

    // TODO: handle return type
    return v8::Undefined();
  }
  

  // TODO: throw exception on no matches
  return v8::Undefined();
}

/*static*/ v8::Handle<v8::Value> wxNode_wxMenu::_SetInvokingWindow(const v8::Arguments& args) {
  wxNode_wxMenu* self = unwrap<wxNode_wxMenu>(args.This());

  
  /*
   * id: _44759
   */
  if(args.Length() == 1 && args[0]->IsObject()) {
    wxNode_wxWindow* win = wxNodeObject::unwrap<wxNode_wxWindow>(args[0]->ToObject()); /* type: _993 * */
    

    self->SetInvokingWindow(win);

    // TODO: handle return type
    return v8::Undefined();
  }
  

  // TODO: throw exception on no matches
  return v8::Undefined();
}

/*static*/ v8::Handle<v8::Value> wxNode_wxMenu::_GetInvokingWindow(const v8::Arguments& args) {
  wxNode_wxMenu* self = unwrap<wxNode_wxMenu>(args.This());

  
  /*
   * id: _44760
   */
  if(args.Length() == 0) {
    

    self->GetInvokingWindow();

    // TODO: handle return type
    return v8::Undefined();
  }
  

  // TODO: throw exception on no matches
  return v8::Undefined();
}

/*static*/ v8::Handle<v8::Value> wxNode_wxMenu::_GetWindow(const v8::Arguments& args) {
  wxNode_wxMenu* self = unwrap<wxNode_wxMenu>(args.This());

  
  /*
   * id: _44761
   */
  if(args.Length() == 0) {
    

    self->GetWindow();

    // TODO: handle return type
    return v8::Undefined();
  }
  

  // TODO: throw exception on no matches
  return v8::Undefined();
}

/*static*/ v8::Handle<v8::Value> wxNode_wxMenu::_GetStyle(const v8::Arguments& args) {
  wxNode_wxMenu* self = unwrap<wxNode_wxMenu>(args.This());

  
  /*
   * id: _44762
   */
  if(args.Length() == 0) {
    

    self->GetStyle();

    // TODO: handle return type
    return v8::Undefined();
  }
  

  // TODO: throw exception on no matches
  return v8::Undefined();
}

/*static*/ v8::Handle<v8::Value> wxNode_wxMenu::_UpdateUI(const v8::Arguments& args) {
  wxNode_wxMenu* self = unwrap<wxNode_wxMenu>(args.This());

  
  /*
   * id: _44763
   */
  if(args.Length() == 1 && args[0]->IsObject()) {
    wxNode_wxEvtHandler* source = wxNodeObject::unwrap<wxNode_wxEvtHandler>(args[0]->ToObject()); /* type: _1665 * */
    

    self->UpdateUI(source);

    // TODO: handle return type
    return v8::Undefined();
  }
  

  // TODO: throw exception on no matches
  return v8::Undefined();
}

/*static*/ v8::Handle<v8::Value> wxNode_wxMenu::_GetMenuBar(const v8::Arguments& args) {
  wxNode_wxMenu* self = unwrap<wxNode_wxMenu>(args.This());

  
  /*
   * id: _44764
   */
  if(args.Length() == 0) {
    

    self->GetMenuBar();

    // TODO: handle return type
    return v8::Undefined();
  }
  

  // TODO: throw exception on no matches
  return v8::Undefined();
}

/*static*/ v8::Handle<v8::Value> wxNode_wxMenu::_Attach(const v8::Arguments& args) {
  wxNode_wxMenu* self = unwrap<wxNode_wxMenu>(args.This());

  
  /*
   * id: _44765
   */
  if(args.Length() == 1 && args[0]->IsObject()) {
    wxNode_wxMenuBar* menubar = wxNodeObject::unwrap<wxNode_wxMenuBar>(args[0]->ToObject()); /* type: _59442 * */
    

    self->Attach(menubar);

    // TODO: handle return type
    return v8::Undefined();
  }
  

  // TODO: throw exception on no matches
  return v8::Undefined();
}

/*static*/ v8::Handle<v8::Value> wxNode_wxMenu::_Detach(const v8::Arguments& args) {
  wxNode_wxMenu* self = unwrap<wxNode_wxMenu>(args.This());

  
  /*
   * id: _44766
   */
  if(args.Length() == 0) {
    

    self->Detach();

    // TODO: handle return type
    return v8::Undefined();
  }
  

  // TODO: throw exception on no matches
  return v8::Undefined();
}

/*static*/ v8::Handle<v8::Value> wxNode_wxMenu::_IsAttached(const v8::Arguments& args) {
  wxNode_wxMenu* self = unwrap<wxNode_wxMenu>(args.This());

  
  /*
   * id: _44767
   */
  if(args.Length() == 0) {
    

    self->IsAttached();

    // TODO: handle return type
    return v8::Undefined();
  }
  

  // TODO: throw exception on no matches
  return v8::Undefined();
}

/*static*/ v8::Handle<v8::Value> wxNode_wxMenu::_SetParent(const v8::Arguments& args) {
  wxNode_wxMenu* self = unwrap<wxNode_wxMenu>(args.This());

  
  /*
   * id: _44768
   */
  if(args.Length() == 1 && args[0]->IsObject()) {
    wxNode_wxMenu* parent = wxNodeObject::unwrap<wxNode_wxMenu>(args[0]->ToObject()); /* type: _52838 * */
    

    self->SetParent(parent);

    // TODO: handle return type
    return v8::Undefined();
  }
  

  // TODO: throw exception on no matches
  return v8::Undefined();
}

/*static*/ v8::Handle<v8::Value> wxNode_wxMenu::_GetParent(const v8::Arguments& args) {
  wxNode_wxMenu* self = unwrap<wxNode_wxMenu>(args.This());

  
  /*
   * id: _44769
   */
  if(args.Length() == 0) {
    

    self->GetParent();

    // TODO: handle return type
    return v8::Undefined();
  }
  

  // TODO: throw exception on no matches
  return v8::Undefined();
}

/*static*/ v8::Handle<v8::Value> wxNode_wxMenu::_FindChildItem(const v8::Arguments& args) {
  wxNode_wxMenu* self = unwrap<wxNode_wxMenu>(args.This());

  
  /*
   * id: _44770
   */
  if(args.Length() == 2 && args[0]->IsNumber() && false) {
    int itemid = (int)args[0]->ToInt32()->Value(); /* type: _162  */
    size_t pos; /* type: _28691 * */
    

    self->FindChildItem(itemid, &pos);

    // TODO: handle return type
    return v8::Undefined();
  }
  
  /*
   * id: _44770
   */
  if(args.Length() == 1 && args[0]->IsNumber()) {
    int itemid = (int)args[0]->ToInt32()->Value(); /* type: _162  */
    

    self->FindChildItem(itemid);

    // TODO: handle return type
    return v8::Undefined();
  }
  

  // TODO: throw exception on no matches
  return v8::Undefined();
}

/*static*/ v8::Handle<v8::Value> wxNode_wxMenu::_SendEvent(const v8::Arguments& args) {
  wxNode_wxMenu* self = unwrap<wxNode_wxMenu>(args.This());

  
  /*
   * id: _44771
   */
  if(args.Length() == 2 && args[0]->IsNumber() && args[1]->IsNumber()) {
    int itemid = (int)args[0]->ToInt32()->Value(); /* type: _162  */
    int checked = (int)args[1]->ToInt32()->Value(); /* type: _162  */
    

    self->SendEvent(itemid, checked);

    // TODO: handle return type
    return v8::Undefined();
  }
  
  /*
   * id: _44771
   */
  if(args.Length() == 1 && args[0]->IsNumber()) {
    int itemid = (int)args[0]->ToInt32()->Value(); /* type: _162  */
    

    self->SendEvent(itemid);

    // TODO: handle return type
    return v8::Undefined();
  }
  

  // TODO: throw exception on no matches
  return v8::Undefined();
}

/*static*/ v8::Handle<v8::Value> wxNode_wxMenu::_LockAccels(const v8::Arguments& args) {
  wxNode_wxMenu* self = unwrap<wxNode_wxMenu>(args.This());

  
  /*
   * id: _44776
   */
  if(args.Length() == 1 && args[0]->IsBoolean()) {
    bool locked = args[0]->ToBoolean()->Value(); /* type: _14666  */
    

    self->LockAccels(locked);

    // TODO: handle return type
    return v8::Undefined();
  }
  

  // TODO: throw exception on no matches
  return v8::Undefined();
}

