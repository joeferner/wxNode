
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
  wxNode_wxWindow::AddMethods(s_ct);
  NODE_SET_PROTOTYPE_METHOD(s_ct, "append", _Append);
  NODE_SET_PROTOTYPE_METHOD(s_ct, "insert", _Insert);
  NODE_SET_PROTOTYPE_METHOD(s_ct, "getMenuCount", _GetMenuCount);
  NODE_SET_PROTOTYPE_METHOD(s_ct, "getMenu", _GetMenu);
  NODE_SET_PROTOTYPE_METHOD(s_ct, "replace", _Replace);
  NODE_SET_PROTOTYPE_METHOD(s_ct, "remove", _Remove);
  NODE_SET_PROTOTYPE_METHOD(s_ct, "enableTop", _EnableTop);
  NODE_SET_PROTOTYPE_METHOD(s_ct, "isEnabledTop", _IsEnabledTop);
  NODE_SET_PROTOTYPE_METHOD(s_ct, "setMenuLabel", _SetMenuLabel);
  NODE_SET_PROTOTYPE_METHOD(s_ct, "getMenuLabel", _GetMenuLabel);
  NODE_SET_PROTOTYPE_METHOD(s_ct, "getMenuLabelText", _GetMenuLabelText);
  NODE_SET_PROTOTYPE_METHOD(s_ct, "findMenuItem", _FindMenuItem);
  NODE_SET_PROTOTYPE_METHOD(s_ct, "findItem", _FindItem);
  NODE_SET_PROTOTYPE_METHOD(s_ct, "findMenu", _FindMenu);
  NODE_SET_PROTOTYPE_METHOD(s_ct, "enable", _Enable);
  NODE_SET_PROTOTYPE_METHOD(s_ct, "check", _Check);
  NODE_SET_PROTOTYPE_METHOD(s_ct, "isChecked", _IsChecked);
  NODE_SET_PROTOTYPE_METHOD(s_ct, "isEnabled", _IsEnabled);
  NODE_SET_PROTOTYPE_METHOD(s_ct, "setLabel", _SetLabel);
  NODE_SET_PROTOTYPE_METHOD(s_ct, "getLabel", _GetLabel);
  NODE_SET_PROTOTYPE_METHOD(s_ct, "setHelpString", _SetHelpString);
  NODE_SET_PROTOTYPE_METHOD(s_ct, "getHelpString", _GetHelpString);
  NODE_SET_PROTOTYPE_METHOD(s_ct, "getFrame", _GetFrame);
  NODE_SET_PROTOTYPE_METHOD(s_ct, "isAttached", _IsAttached);
  NODE_SET_PROTOTYPE_METHOD(s_ct, "attach", _Attach);
  NODE_SET_PROTOTYPE_METHOD(s_ct, "detach", _Detach);
  NODE_SET_PROTOTYPE_METHOD(s_ct, "acceptsFocusFromKeyboard", _AcceptsFocusFromKeyboard);
  NODE_SET_PROTOTYPE_METHOD(s_ct, "updateMenus", _UpdateMenus);
  NODE_SET_PROTOTYPE_METHOD(s_ct, "canBeOutsideClientArea", _CanBeOutsideClientArea);
  
}

/*static*/ v8::Handle<v8::Value> wxNode_wxMenuBar::_init(const v8::Arguments& args) {
  v8::HandleScope scope;

  
  
  /*
   * id: _39534
   */
  if(args.Length() == 0) {
    

    wxNode_wxMenuBar *self = new wxNode_wxMenuBar();
    NodeExEvtHandlerImpl* evtHandler = dynamic_cast<NodeExEvtHandlerImpl*>(self);
    self->wrap(args.This(), self, evtHandler);
    return args.This();
  }
  
  

  // TODO: throw exception on no matches
  return v8::Undefined();
}


/*static*/ v8::Handle<v8::Value> wxNode_wxMenuBar::_Append(const v8::Arguments& args) {
  wxNode_wxMenuBar* self = unwrap<wxNode_wxMenuBar>(args.This());

  
  /*
   * id: _39536
   */
  if(args.Length() == 2 && args[0]->IsObject() && args[1]->IsString()) {
    wxNode_wxMenu* menu = wxNodeObject::unwrap<wxNode_wxMenu>(args[0]->ToObject()); /* type: _52838 * */
    v8::String::AsciiValue title(args[1]->ToString()); /* type: _14808  */
    

    self->Append(menu, *title);

    // TODO: handle return type
    return v8::Undefined();
  }
  

  // TODO: throw exception on no matches
  return v8::Undefined();
}

/*static*/ v8::Handle<v8::Value> wxNode_wxMenuBar::_Insert(const v8::Arguments& args) {
  wxNode_wxMenuBar* self = unwrap<wxNode_wxMenuBar>(args.This());

  
  /*
   * id: _39537
   */
  if(args.Length() == 3 && args[0]->IsNumber() && args[1]->IsObject() && args[2]->IsString()) {
    size_t pos = (size_t)args[0]->ToInt32()->Value(); /* type: _8620  */
    wxNode_wxMenu* menu = wxNodeObject::unwrap<wxNode_wxMenu>(args[1]->ToObject()); /* type: _52838 * */
    v8::String::AsciiValue title(args[2]->ToString()); /* type: _14808  */
    

    self->Insert(pos, menu, *title);

    // TODO: handle return type
    return v8::Undefined();
  }
  

  // TODO: throw exception on no matches
  return v8::Undefined();
}

/*static*/ v8::Handle<v8::Value> wxNode_wxMenuBar::_GetMenuCount(const v8::Arguments& args) {
  wxNode_wxMenuBar* self = unwrap<wxNode_wxMenuBar>(args.This());

  
  /*
   * id: _39538
   */
  if(args.Length() == 0) {
    

    self->GetMenuCount();

    // TODO: handle return type
    return v8::Undefined();
  }
  

  // TODO: throw exception on no matches
  return v8::Undefined();
}

/*static*/ v8::Handle<v8::Value> wxNode_wxMenuBar::_GetMenu(const v8::Arguments& args) {
  wxNode_wxMenuBar* self = unwrap<wxNode_wxMenuBar>(args.This());

  
  /*
   * id: _39539
   */
  if(args.Length() == 1 && args[0]->IsNumber()) {
    size_t pos = (size_t)args[0]->ToInt32()->Value(); /* type: _8620  */
    

    self->GetMenu(pos);

    // TODO: handle return type
    return v8::Undefined();
  }
  

  // TODO: throw exception on no matches
  return v8::Undefined();
}

/*static*/ v8::Handle<v8::Value> wxNode_wxMenuBar::_Replace(const v8::Arguments& args) {
  wxNode_wxMenuBar* self = unwrap<wxNode_wxMenuBar>(args.This());

  
  /*
   * id: _39540
   */
  if(args.Length() == 3 && args[0]->IsNumber() && args[1]->IsObject() && args[2]->IsString()) {
    size_t pos = (size_t)args[0]->ToInt32()->Value(); /* type: _8620  */
    wxNode_wxMenu* menu = wxNodeObject::unwrap<wxNode_wxMenu>(args[1]->ToObject()); /* type: _52838 * */
    v8::String::AsciiValue title(args[2]->ToString()); /* type: _14808  */
    

    self->Replace(pos, menu, *title);

    // TODO: handle return type
    return v8::Undefined();
  }
  

  // TODO: throw exception on no matches
  return v8::Undefined();
}

/*static*/ v8::Handle<v8::Value> wxNode_wxMenuBar::_Remove(const v8::Arguments& args) {
  wxNode_wxMenuBar* self = unwrap<wxNode_wxMenuBar>(args.This());

  
  /*
   * id: _39541
   */
  if(args.Length() == 1 && args[0]->IsNumber()) {
    size_t pos = (size_t)args[0]->ToInt32()->Value(); /* type: _8620  */
    

    self->Remove(pos);

    // TODO: handle return type
    return v8::Undefined();
  }
  

  // TODO: throw exception on no matches
  return v8::Undefined();
}

/*static*/ v8::Handle<v8::Value> wxNode_wxMenuBar::_EnableTop(const v8::Arguments& args) {
  wxNode_wxMenuBar* self = unwrap<wxNode_wxMenuBar>(args.This());

  
  /*
   * id: _39542
   */
  if(args.Length() == 2 && args[0]->IsNumber() && args[1]->IsBoolean()) {
    size_t pos = (size_t)args[0]->ToInt32()->Value(); /* type: _8620  */
    bool enable = args[1]->ToBoolean()->Value(); /* type: _14666  */
    

    self->EnableTop(pos, enable);

    // TODO: handle return type
    return v8::Undefined();
  }
  

  // TODO: throw exception on no matches
  return v8::Undefined();
}

/*static*/ v8::Handle<v8::Value> wxNode_wxMenuBar::_IsEnabledTop(const v8::Arguments& args) {
  wxNode_wxMenuBar* self = unwrap<wxNode_wxMenuBar>(args.This());

  
  /*
   * id: _39543
   */
  if(args.Length() == 1 && args[0]->IsNumber()) {
    size_t undefined = (size_t)args[0]->ToInt32()->Value(); /* type: _8620  */
    

    self->IsEnabledTop(undefined);

    // TODO: handle return type
    return v8::Undefined();
  }
  

  // TODO: throw exception on no matches
  return v8::Undefined();
}

/*static*/ v8::Handle<v8::Value> wxNode_wxMenuBar::_SetMenuLabel(const v8::Arguments& args) {
  wxNode_wxMenuBar* self = unwrap<wxNode_wxMenuBar>(args.This());

  
  /*
   * id: _39544
   */
  if(args.Length() == 2 && args[0]->IsNumber() && args[1]->IsString()) {
    size_t pos = (size_t)args[0]->ToInt32()->Value(); /* type: _8620  */
    v8::String::AsciiValue label(args[1]->ToString()); /* type: _14808  */
    

    self->SetMenuLabel(pos, *label);

    // TODO: handle return type
    return v8::Undefined();
  }
  

  // TODO: throw exception on no matches
  return v8::Undefined();
}

/*static*/ v8::Handle<v8::Value> wxNode_wxMenuBar::_GetMenuLabel(const v8::Arguments& args) {
  wxNode_wxMenuBar* self = unwrap<wxNode_wxMenuBar>(args.This());

  
  /*
   * id: _39545
   */
  if(args.Length() == 1 && args[0]->IsNumber()) {
    size_t pos = (size_t)args[0]->ToInt32()->Value(); /* type: _8620  */
    

    self->GetMenuLabel(pos);

    // TODO: handle return type
    return v8::Undefined();
  }
  

  // TODO: throw exception on no matches
  return v8::Undefined();
}

/*static*/ v8::Handle<v8::Value> wxNode_wxMenuBar::_GetMenuLabelText(const v8::Arguments& args) {
  wxNode_wxMenuBar* self = unwrap<wxNode_wxMenuBar>(args.This());

  
  /*
   * id: _39546
   */
  if(args.Length() == 1 && args[0]->IsNumber()) {
    size_t pos = (size_t)args[0]->ToInt32()->Value(); /* type: _8620  */
    

    self->GetMenuLabelText(pos);

    // TODO: handle return type
    return v8::Undefined();
  }
  

  // TODO: throw exception on no matches
  return v8::Undefined();
}

/*static*/ v8::Handle<v8::Value> wxNode_wxMenuBar::_FindMenuItem(const v8::Arguments& args) {
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
  

  // TODO: throw exception on no matches
  return v8::Undefined();
}

/*static*/ v8::Handle<v8::Value> wxNode_wxMenuBar::_FindItem(const v8::Arguments& args) {
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
  

  // TODO: throw exception on no matches
  return v8::Undefined();
}

/*static*/ v8::Handle<v8::Value> wxNode_wxMenuBar::_FindMenu(const v8::Arguments& args) {
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
  

  // TODO: throw exception on no matches
  return v8::Undefined();
}

/*static*/ v8::Handle<v8::Value> wxNode_wxMenuBar::_Enable(const v8::Arguments& args) {
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
  

  // TODO: throw exception on no matches
  return v8::Undefined();
}

/*static*/ v8::Handle<v8::Value> wxNode_wxMenuBar::_Check(const v8::Arguments& args) {
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
  

  // TODO: throw exception on no matches
  return v8::Undefined();
}

/*static*/ v8::Handle<v8::Value> wxNode_wxMenuBar::_IsChecked(const v8::Arguments& args) {
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
  

  // TODO: throw exception on no matches
  return v8::Undefined();
}

/*static*/ v8::Handle<v8::Value> wxNode_wxMenuBar::_IsEnabled(const v8::Arguments& args) {
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
  

  // TODO: throw exception on no matches
  return v8::Undefined();
}

/*static*/ v8::Handle<v8::Value> wxNode_wxMenuBar::_SetLabel(const v8::Arguments& args) {
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
  

  // TODO: throw exception on no matches
  return v8::Undefined();
}

/*static*/ v8::Handle<v8::Value> wxNode_wxMenuBar::_GetLabel(const v8::Arguments& args) {
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
  

  // TODO: throw exception on no matches
  return v8::Undefined();
}

/*static*/ v8::Handle<v8::Value> wxNode_wxMenuBar::_SetHelpString(const v8::Arguments& args) {
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
  

  // TODO: throw exception on no matches
  return v8::Undefined();
}

/*static*/ v8::Handle<v8::Value> wxNode_wxMenuBar::_GetHelpString(const v8::Arguments& args) {
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
  

  // TODO: throw exception on no matches
  return v8::Undefined();
}

/*static*/ v8::Handle<v8::Value> wxNode_wxMenuBar::_GetFrame(const v8::Arguments& args) {
  wxNode_wxMenuBar* self = unwrap<wxNode_wxMenuBar>(args.This());

  
  /*
   * id: _39559
   */
  if(args.Length() == 0) {
    

    self->GetFrame();

    // TODO: handle return type
    return v8::Undefined();
  }
  

  // TODO: throw exception on no matches
  return v8::Undefined();
}

/*static*/ v8::Handle<v8::Value> wxNode_wxMenuBar::_IsAttached(const v8::Arguments& args) {
  wxNode_wxMenuBar* self = unwrap<wxNode_wxMenuBar>(args.This());

  
  /*
   * id: _39560
   */
  if(args.Length() == 0) {
    

    self->IsAttached();

    // TODO: handle return type
    return v8::Undefined();
  }
  

  // TODO: throw exception on no matches
  return v8::Undefined();
}

/*static*/ v8::Handle<v8::Value> wxNode_wxMenuBar::_Attach(const v8::Arguments& args) {
  wxNode_wxMenuBar* self = unwrap<wxNode_wxMenuBar>(args.This());

  
  /*
   * id: _39561
   */
  if(args.Length() == 1 && args[0]->IsObject()) {
    wxNode_wxFrame* frame = wxNodeObject::unwrap<wxNode_wxFrame>(args[0]->ToObject()); /* type: _32629 * */
    

    self->Attach(frame);

    // TODO: handle return type
    return v8::Undefined();
  }
  

  // TODO: throw exception on no matches
  return v8::Undefined();
}

/*static*/ v8::Handle<v8::Value> wxNode_wxMenuBar::_Detach(const v8::Arguments& args) {
  wxNode_wxMenuBar* self = unwrap<wxNode_wxMenuBar>(args.This());

  
  /*
   * id: _39562
   */
  if(args.Length() == 0) {
    

    self->Detach();

    // TODO: handle return type
    return v8::Undefined();
  }
  

  // TODO: throw exception on no matches
  return v8::Undefined();
}

/*static*/ v8::Handle<v8::Value> wxNode_wxMenuBar::_AcceptsFocusFromKeyboard(const v8::Arguments& args) {
  wxNode_wxMenuBar* self = unwrap<wxNode_wxMenuBar>(args.This());

  
  /*
   * id: _39566
   */
  if(args.Length() == 0) {
    

    self->AcceptsFocusFromKeyboard();

    // TODO: handle return type
    return v8::Undefined();
  }
  

  // TODO: throw exception on no matches
  return v8::Undefined();
}

/*static*/ v8::Handle<v8::Value> wxNode_wxMenuBar::_UpdateMenus(const v8::Arguments& args) {
  wxNode_wxMenuBar* self = unwrap<wxNode_wxMenuBar>(args.This());

  
  /*
   * id: _39567
   */
  if(args.Length() == 0) {
    

    self->UpdateMenus();

    // TODO: handle return type
    return v8::Undefined();
  }
  

  // TODO: throw exception on no matches
  return v8::Undefined();
}

/*static*/ v8::Handle<v8::Value> wxNode_wxMenuBar::_CanBeOutsideClientArea(const v8::Arguments& args) {
  wxNode_wxMenuBar* self = unwrap<wxNode_wxMenuBar>(args.This());

  
  /*
   * id: _39568
   */
  if(args.Length() == 0) {
    

    self->CanBeOutsideClientArea();

    // TODO: handle return type
    return v8::Undefined();
  }
  

  // TODO: throw exception on no matches
  return v8::Undefined();
}

