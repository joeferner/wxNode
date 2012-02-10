
#include <sstream>
#include "wxNode_wxInfoBar.h"
#include "wxNode_wxEvtHandler.h"
#include "wxNode_wxControl.h"
#include "wxNode_wxWindow.h"


/* static */ v8::Persistent<v8::FunctionTemplate> wxNode_wxInfoBar::s_ct;



wxNode_wxInfoBar::wxNode_wxInfoBar()
  : wxInfoBar()
{

}

wxNode_wxInfoBar::wxNode_wxInfoBar(wxWindow* parent, int winid)
  : wxInfoBar(parent, winid)
{

}

wxNode_wxInfoBar::wxNode_wxInfoBar(wxWindow* parent)
  : wxInfoBar(parent)
{

}




/*static*/ void wxNode_wxInfoBar::Init(v8::Handle<v8::Object> target) {
  v8::HandleScope scope;

  v8::Local<v8::FunctionTemplate> t = v8::FunctionTemplate::New(wxNodeObject::NewFunc);
  s_ct = v8::Persistent<v8::FunctionTemplate>::New(t);
  s_ct->InstanceTemplate()->SetInternalFieldCount(2);
  s_ct->SetClassName(v8::String::NewSymbol("InfoBar"));

  NODE_SET_PROTOTYPE_METHOD(s_ct, "init", _init);
  AddMethods(s_ct);

  target->Set(v8::String::NewSymbol("InfoBar"), s_ct->GetFunction());
}

/*static*/ void wxNode_wxInfoBar::AddMethods(v8::Handle<v8::FunctionTemplate> target) {
  wxNode_wxControl::AddMethods(target);
  NODE_SET_PROTOTYPE_METHOD(target, "showMessage", _ShowMessage);
  NODE_SET_PROTOTYPE_METHOD(target, "dismiss", _Dismiss);
  NODE_SET_PROTOTYPE_METHOD(target, "addButton", _AddButton);
  NODE_SET_PROTOTYPE_METHOD(target, "removeButton", _RemoveButton);
  
}

/*static*/ v8::Handle<v8::Value> wxNode_wxInfoBar::New(const wxNode_wxInfoBar* obj) {
  v8::HandleScope scope;

  if(obj == NULL) {
    return scope.Close(v8::Null());
  }
  
  v8::Local<v8::FunctionTemplate> returnObjFt = v8::FunctionTemplate::New(wxNodeObject::NewFunc);
  returnObjFt->InstanceTemplate()->SetInternalFieldCount(2);
  returnObjFt->SetClassName(v8::String::NewSymbol("InfoBar"));
  wxNode_wxInfoBar::AddMethods(returnObjFt);

  v8::Local<v8::Function> returnObjFn = returnObjFt->GetFunction();
  v8::Handle<v8::Value> returnObjArgs[0];
  v8::Local<v8::Object> returnObj = returnObjFn->CallAsConstructor(0, returnObjArgs)->ToObject();
  returnObj->SetPointerInInternalField(0, (void*)obj);
  NodeExEvtHandlerImpl* evtHandler = dynamic_cast<NodeExEvtHandlerImpl*>((wxNode_wxInfoBar*)obj);
  returnObj->SetPointerInInternalField(1, evtHandler);

  return scope.Close(returnObj);
}

/*static*/ v8::Handle<v8::Value> wxNode_wxInfoBar::New(const wxInfoBar* obj) {
  v8::HandleScope scope;

  if(obj == NULL) {
    return scope.Close(v8::Null());
  }
  
  v8::Local<v8::FunctionTemplate> returnObjFt = v8::FunctionTemplate::New(wxNodeObject::NewFunc);
  returnObjFt->InstanceTemplate()->SetInternalFieldCount(2);
  returnObjFt->SetClassName(v8::String::NewSymbol("InfoBar"));
  wxNode_wxInfoBar::AddMethods(returnObjFt);

  v8::Local<v8::Function> returnObjFn = returnObjFt->GetFunction();
  v8::Handle<v8::Value> returnObjArgs[0];
  v8::Local<v8::Object> returnObj = returnObjFn->CallAsConstructor(0, returnObjArgs)->ToObject();
  returnObj->SetPointerInInternalField(0, (void*)obj);
  returnObj->SetPointerInInternalField(1, new NodeExEvtHandlerImplWrap(returnObj));

  return scope.Close(returnObj);
}

/*static*/ v8::Handle<v8::Value> wxNode_wxInfoBar::NewCopy(const wxInfoBar& obj) {
  v8::HandleScope scope;
  wxNode_wxInfoBar* returnVal = new wxNode_wxInfoBar();
  memcpy(dynamic_cast<wxInfoBar*>(returnVal), &obj, sizeof(wxInfoBar));
  return scope.Close(New(returnVal));

}

/*static*/ bool wxNode_wxInfoBar::AssignableFrom(const v8::Handle<v8::String>& className) {
  v8::String::AsciiValue classNameStr(className);
  return AssignableFrom(*classNameStr);
}

/*static*/ bool wxNode_wxInfoBar::AssignableFrom(const char* className) {
  if(!strcmp("InfoBar", className)) { return true; }
  
  if(!strcmp("InfoBarGeneric", className)) { return true; }

  if(!strcmp("InfoBar", className)) { return true; }


  return false;
}

/*static*/ v8::Handle<v8::Value> wxNode_wxInfoBar::_init(const v8::Arguments& args) {
  v8::HandleScope scope;

  
  
  /*
   * id: _60183
   */
  if(args.Length() == 0) {
    

    wxNode_wxInfoBar *self = new wxNode_wxInfoBar();
    NodeExEvtHandlerImpl* evtHandler = dynamic_cast<NodeExEvtHandlerImpl*>(self);
    self->wrap(args.This(), self, evtHandler);
    return args.This();
  }
  
  /*
   * id: _60184
   */
  if(args.Length() == 2 && (args[0]->IsNull() || (args[0]->IsObject() && wxNode_wxWindow::AssignableFrom(args[0]->ToObject()->GetConstructorName()))) && args[1]->IsNumber()) {
    wxNode_wxWindow* parent = args[0]->IsNull() ? NULL : wxNodeObject::unwrap<wxNode_wxWindow>(args[0]->ToObject()); /* type: _1326 * */
    int winid = (int)args[1]->ToInt32()->Value(); /* type: _11168  */
    

    wxNode_wxInfoBar *self = new wxNode_wxInfoBar(parent, winid);
    NodeExEvtHandlerImpl* evtHandler = dynamic_cast<NodeExEvtHandlerImpl*>(self);
    self->wrap(args.This(), self, evtHandler);
    return args.This();
  }
  
  /*
   * id: _60184
   */
  if(args.Length() == 1 && (args[0]->IsNull() || (args[0]->IsObject() && wxNode_wxWindow::AssignableFrom(args[0]->ToObject()->GetConstructorName())))) {
    wxNode_wxWindow* parent = args[0]->IsNull() ? NULL : wxNodeObject::unwrap<wxNode_wxWindow>(args[0]->ToObject()); /* type: _1326 * */
    

    wxNode_wxInfoBar *self = new wxNode_wxInfoBar(parent);
    NodeExEvtHandlerImpl* evtHandler = dynamic_cast<NodeExEvtHandlerImpl*>(self);
    self->wrap(args.This(), self, evtHandler);
    return args.This();
  }
  
  

  std::ostringstream errStr;
  errStr << "Could not find matching constructor for arguments (class name: wxInfoBar).\n";
  errStr << "  arg count: " << args.Length() << "\n";
  for(int i = 0; i < args.Length(); i++) {
    v8::String::AsciiValue argStr(args[i]);
    errStr << "  arg[" << i << "]: " << *argStr << "\n";
  }
  return v8::ThrowException(v8::Exception::TypeError(v8::String::New(errStr.str().c_str())));
}


/*static*/ v8::Handle<v8::Value> wxNode_wxInfoBar::_ShowMessage(const v8::Arguments& args) {
  v8::HandleScope scope;
  wxNode_wxInfoBar* self = unwrap<wxNode_wxInfoBar>(args.This());

  
  /*
   * id: _33469
   */
  if(args.Length() == 2 && args[0]->IsString() && args[1]->IsNumber()) {
    v8::String::AsciiValue msg(args[0]->ToString()); /* type: _18997  */
    int flags = (int)args[1]->ToInt32()->Value(); /* type: _233  */
    

    self->ShowMessage(*msg, flags);

    return v8::Undefined();
  }
  
  /*
   * id: _33469
   */
  if(args.Length() == 1 && args[0]->IsString()) {
    v8::String::AsciiValue msg(args[0]->ToString()); /* type: _18997  */
    

    self->ShowMessage(*msg);

    return v8::Undefined();
  }
  

  std::ostringstream errStr;
  errStr << "Could not find matching method for arguments (method name: wxInfoBar::ShowMessage).\n";
  errStr << "  arg count: " << args.Length() << "\n";
  for(int i = 0; i < args.Length(); i++) {
    v8::String::AsciiValue argStr(args[i]);
    errStr << "  arg[" << i << "]: " << *argStr << "\n";
  }
  return v8::ThrowException(v8::Exception::TypeError(v8::String::New(errStr.str().c_str())));
}

/*static*/ v8::Handle<v8::Value> wxNode_wxInfoBar::_Dismiss(const v8::Arguments& args) {
  v8::HandleScope scope;
  wxNode_wxInfoBar* self = unwrap<wxNode_wxInfoBar>(args.This());

  
  /*
   * id: _33470
   */
  if(args.Length() == 0) {
    

    self->Dismiss();

    return v8::Undefined();
  }
  

  std::ostringstream errStr;
  errStr << "Could not find matching method for arguments (method name: wxInfoBar::Dismiss).\n";
  errStr << "  arg count: " << args.Length() << "\n";
  for(int i = 0; i < args.Length(); i++) {
    v8::String::AsciiValue argStr(args[i]);
    errStr << "  arg[" << i << "]: " << *argStr << "\n";
  }
  return v8::ThrowException(v8::Exception::TypeError(v8::String::New(errStr.str().c_str())));
}

/*static*/ v8::Handle<v8::Value> wxNode_wxInfoBar::_AddButton(const v8::Arguments& args) {
  v8::HandleScope scope;
  wxNode_wxInfoBar* self = unwrap<wxNode_wxInfoBar>(args.This());

  
  /*
   * id: _33471
   */
  if(args.Length() == 2 && args[0]->IsNumber() && args[1]->IsString()) {
    int btnid = (int)args[0]->ToInt32()->Value(); /* type: _11168  */
    v8::String::AsciiValue label(args[1]->ToString()); /* type: _18997  */
    

    self->AddButton(btnid, *label);

    return v8::Undefined();
  }
  
  /*
   * id: _33471
   */
  if(args.Length() == 1 && args[0]->IsNumber()) {
    int btnid = (int)args[0]->ToInt32()->Value(); /* type: _11168  */
    

    self->AddButton(btnid);

    return v8::Undefined();
  }
  

  std::ostringstream errStr;
  errStr << "Could not find matching method for arguments (method name: wxInfoBar::AddButton).\n";
  errStr << "  arg count: " << args.Length() << "\n";
  for(int i = 0; i < args.Length(); i++) {
    v8::String::AsciiValue argStr(args[i]);
    errStr << "  arg[" << i << "]: " << *argStr << "\n";
  }
  return v8::ThrowException(v8::Exception::TypeError(v8::String::New(errStr.str().c_str())));
}

/*static*/ v8::Handle<v8::Value> wxNode_wxInfoBar::_RemoveButton(const v8::Arguments& args) {
  v8::HandleScope scope;
  wxNode_wxInfoBar* self = unwrap<wxNode_wxInfoBar>(args.This());

  
  /*
   * id: _33472
   */
  if(args.Length() == 1 && args[0]->IsNumber()) {
    int btnid = (int)args[0]->ToInt32()->Value(); /* type: _11168  */
    

    self->RemoveButton(btnid);

    return v8::Undefined();
  }
  

  std::ostringstream errStr;
  errStr << "Could not find matching method for arguments (method name: wxInfoBar::RemoveButton).\n";
  errStr << "  arg count: " << args.Length() << "\n";
  for(int i = 0; i < args.Length(); i++) {
    v8::String::AsciiValue argStr(args[i]);
    errStr << "  arg[" << i << "]: " << *argStr << "\n";
  }
  return v8::ThrowException(v8::Exception::TypeError(v8::String::New(errStr.str().c_str())));
}

