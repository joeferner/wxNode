
#include <sstream>
#include "wxNode_wxLogWindow.h"
#include "wxNode_wxEvtHandler.h"
#include "wxNode_wxLogInterposer.h"
#include "wxNode_wxWindow.h"
#include "wxNode_wxFrame.h"


/* static */ v8::Persistent<v8::FunctionTemplate> wxNode_wxLogWindow::s_ct;



wxNode_wxLogWindow::wxNode_wxLogWindow(wxWindow* pParent, const wxString& szTitle, bool bShow, bool bPassToOld)
  : wxLogWindow(pParent, szTitle, bShow, bPassToOld)
{

}

wxNode_wxLogWindow::wxNode_wxLogWindow(wxWindow* pParent, const wxString& szTitle, bool bShow)
  : wxLogWindow(pParent, szTitle, bShow)
{

}

wxNode_wxLogWindow::wxNode_wxLogWindow(wxWindow* pParent, const wxString& szTitle)
  : wxLogWindow(pParent, szTitle)
{

}




/*static*/ void wxNode_wxLogWindow::Init(v8::Handle<v8::Object> target) {
  v8::HandleScope scope;

  v8::Local<v8::FunctionTemplate> t = v8::FunctionTemplate::New(wxNodeObject::NewFunc);
  s_ct = v8::Persistent<v8::FunctionTemplate>::New(t);
  s_ct->InstanceTemplate()->SetInternalFieldCount(2);
  s_ct->SetClassName(v8::String::NewSymbol("LogWindow"));

  NODE_SET_PROTOTYPE_METHOD(s_ct, "init", _init);
  AddMethods(s_ct);

  target->Set(v8::String::NewSymbol("LogWindow"), s_ct->GetFunction());
}

/*static*/ void wxNode_wxLogWindow::AddMethods(v8::Handle<v8::FunctionTemplate> target) {
  wxNode_wxLogInterposer::AddMethods(target);
  NODE_SET_PROTOTYPE_METHOD(target, "show", _Show);
  NODE_SET_PROTOTYPE_METHOD(target, "getFrame", _GetFrame);
  NODE_SET_PROTOTYPE_METHOD(target, "onFrameCreate", _OnFrameCreate);
  NODE_SET_PROTOTYPE_METHOD(target, "onFrameClose", _OnFrameClose);
  NODE_SET_PROTOTYPE_METHOD(target, "onFrameDelete", _OnFrameDelete);
  
  
}

/*static*/ v8::Handle<v8::Value> wxNode_wxLogWindow::New(const wxNode_wxLogWindow* obj) {
  v8::HandleScope scope;

  if(obj == NULL) {
    return scope.Close(v8::Null());
  }
  
  v8::Local<v8::FunctionTemplate> returnObjFt = v8::FunctionTemplate::New(wxNodeObject::NewFunc);
  returnObjFt->InstanceTemplate()->SetInternalFieldCount(2);
  returnObjFt->SetClassName(v8::String::NewSymbol("LogWindow"));
  wxNode_wxLogWindow::AddMethods(returnObjFt);

  v8::Local<v8::Function> returnObjFn = returnObjFt->GetFunction();
  v8::Handle<v8::Value> returnObjArgs[0];
  v8::Local<v8::Object> returnObj = returnObjFn->CallAsConstructor(0, returnObjArgs)->ToObject();
  returnObj->SetPointerInInternalField(0, (void*)obj);
  NodeExEvtHandlerImpl* evtHandler = dynamic_cast<NodeExEvtHandlerImpl*>((wxNode_wxLogWindow*)obj);
  returnObj->SetPointerInInternalField(1, evtHandler);

  return scope.Close(returnObj);
}

/*static*/ v8::Handle<v8::Value> wxNode_wxLogWindow::New(const wxLogWindow* obj) {
  v8::HandleScope scope;

  if(obj == NULL) {
    return scope.Close(v8::Null());
  }
  
  v8::Local<v8::FunctionTemplate> returnObjFt = v8::FunctionTemplate::New(wxNodeObject::NewFunc);
  returnObjFt->InstanceTemplate()->SetInternalFieldCount(2);
  returnObjFt->SetClassName(v8::String::NewSymbol("LogWindow"));
  wxNode_wxLogWindow::AddMethods(returnObjFt);

  v8::Local<v8::Function> returnObjFn = returnObjFt->GetFunction();
  v8::Handle<v8::Value> returnObjArgs[0];
  v8::Local<v8::Object> returnObj = returnObjFn->CallAsConstructor(0, returnObjArgs)->ToObject();
  returnObj->SetPointerInInternalField(0, (void*)obj);
  NodeExEvtHandlerImplWrap* wrap = new NodeExEvtHandlerImplWrap(returnObj);
  NodeExEvtHandlerImpl* evtHandler = dynamic_cast<NodeExEvtHandlerImpl*>(wrap);
  returnObj->SetPointerInInternalField(1, evtHandler);

  return scope.Close(returnObj);
}

/*static*/ v8::Handle<v8::Value> wxNode_wxLogWindow::NewCopy(const wxLogWindow& obj) {
  return v8::Undefined();
}

/*static*/ bool wxNode_wxLogWindow::AssignableFrom(const v8::Handle<v8::String>& className) {
  v8::String::AsciiValue classNameStr(className);
  return AssignableFrom(*classNameStr);
}

/*static*/ bool wxNode_wxLogWindow::AssignableFrom(const char* className) {
  if(!strcmp("LogWindow", className)) { return true; }
  

  return false;
}

/*static*/ v8::Handle<v8::Value> wxNode_wxLogWindow::_init(const v8::Arguments& args) {
  v8::HandleScope scope;

  
  
  /*
   * id: _52979
   */
  if(args.Length() == 4 && (args[0]->IsNull() || (args[0]->IsObject() && wxNode_wxWindow::AssignableFrom(args[0]->ToObject()->GetConstructorName()))) && args[1]->IsString() && args[2]->IsBoolean() && args[3]->IsBoolean()) {
    wxNode_wxWindow* pParent = args[0]->IsNull() ? NULL : wxNodeObject::unwrap<wxNode_wxWindow>(args[0]->ToObject()); /* type: _1000 * */
    v8::String::AsciiValue szTitle(args[1]->ToString()); /* type: _14975  */
    bool bShow = args[2]->ToBoolean()->Value(); /* type: _14830  */
    bool bPassToOld = args[3]->ToBoolean()->Value(); /* type: _14830  */
    

    wxNode_wxLogWindow *self = new wxNode_wxLogWindow(pParent, *szTitle, bShow, bPassToOld);
    NodeExEvtHandlerImpl* evtHandler = dynamic_cast<NodeExEvtHandlerImpl*>(self);
    self->wrap(args.This(), self, evtHandler);
    return args.This();
  }
  
  /*
   * id: _52979
   */
  if(args.Length() == 3 && (args[0]->IsNull() || (args[0]->IsObject() && wxNode_wxWindow::AssignableFrom(args[0]->ToObject()->GetConstructorName()))) && args[1]->IsString() && args[2]->IsBoolean()) {
    wxNode_wxWindow* pParent = args[0]->IsNull() ? NULL : wxNodeObject::unwrap<wxNode_wxWindow>(args[0]->ToObject()); /* type: _1000 * */
    v8::String::AsciiValue szTitle(args[1]->ToString()); /* type: _14975  */
    bool bShow = args[2]->ToBoolean()->Value(); /* type: _14830  */
    

    wxNode_wxLogWindow *self = new wxNode_wxLogWindow(pParent, *szTitle, bShow);
    NodeExEvtHandlerImpl* evtHandler = dynamic_cast<NodeExEvtHandlerImpl*>(self);
    self->wrap(args.This(), self, evtHandler);
    return args.This();
  }
  
  /*
   * id: _52979
   */
  if(args.Length() == 2 && (args[0]->IsNull() || (args[0]->IsObject() && wxNode_wxWindow::AssignableFrom(args[0]->ToObject()->GetConstructorName()))) && args[1]->IsString()) {
    wxNode_wxWindow* pParent = args[0]->IsNull() ? NULL : wxNodeObject::unwrap<wxNode_wxWindow>(args[0]->ToObject()); /* type: _1000 * */
    v8::String::AsciiValue szTitle(args[1]->ToString()); /* type: _14975  */
    

    wxNode_wxLogWindow *self = new wxNode_wxLogWindow(pParent, *szTitle);
    NodeExEvtHandlerImpl* evtHandler = dynamic_cast<NodeExEvtHandlerImpl*>(self);
    self->wrap(args.This(), self, evtHandler);
    return args.This();
  }
  
  

  std::ostringstream errStr;
  errStr << "Could not find matching constructor for arguments (class name: wxLogWindow).\n";
  errStr << "  arg count: " << args.Length() << "\n";
  for(int i = 0; i < args.Length(); i++) {
    v8::String::AsciiValue argStr(args[i]);
    errStr << "  arg[" << i << "]: " << *argStr << "\n";
  }
  return v8::ThrowException(v8::Exception::TypeError(v8::String::New(errStr.str().c_str())));
}


/*static*/ v8::Handle<v8::Value> wxNode_wxLogWindow::_Show(const v8::Arguments& args) {
  v8::HandleScope scope;
  wxNode_wxLogWindow* self = unwrap<wxNode_wxLogWindow>(args.This());

  
  /*
   * id: _52981
   */
  if(args.Length() == 1 && args[0]->IsBoolean()) {
    bool bShow = args[0]->ToBoolean()->Value(); /* type: _14830  */
    

    self->Show(bShow);

    return v8::Undefined();
  }
  
  /*
   * id: _52981
   */
  if(args.Length() == 0) {
    

    self->Show();

    return v8::Undefined();
  }
  

  std::ostringstream errStr;
  errStr << "Could not find matching method for arguments (method name: wxLogWindow::Show).\n";
  errStr << "  arg count: " << args.Length() << "\n";
  for(int i = 0; i < args.Length(); i++) {
    v8::String::AsciiValue argStr(args[i]);
    errStr << "  arg[" << i << "]: " << *argStr << "\n";
  }
  return v8::ThrowException(v8::Exception::TypeError(v8::String::New(errStr.str().c_str())));
}

/*static*/ v8::Handle<v8::Value> wxNode_wxLogWindow::_GetFrame(const v8::Arguments& args) {
  v8::HandleScope scope;
  wxNode_wxLogWindow* self = unwrap<wxNode_wxLogWindow>(args.This());

  
  /*
   * id: _52982
   */
  if(args.Length() == 0) {
    

    wxFrame* returnVal = self->GetFrame();

    return scope.Close(wxNode_wxFrame::New(returnVal));
  }
  

  std::ostringstream errStr;
  errStr << "Could not find matching method for arguments (method name: wxLogWindow::GetFrame).\n";
  errStr << "  arg count: " << args.Length() << "\n";
  for(int i = 0; i < args.Length(); i++) {
    v8::String::AsciiValue argStr(args[i]);
    errStr << "  arg[" << i << "]: " << *argStr << "\n";
  }
  return v8::ThrowException(v8::Exception::TypeError(v8::String::New(errStr.str().c_str())));
}

/*static*/ v8::Handle<v8::Value> wxNode_wxLogWindow::_OnFrameCreate(const v8::Arguments& args) {
  v8::HandleScope scope;
  wxNode_wxLogWindow* self = unwrap<wxNode_wxLogWindow>(args.This());

  

  std::ostringstream errStr;
  errStr << "Could not find matching method for arguments (method name: wxLogWindow::OnFrameCreate).\n";
  errStr << "  arg count: " << args.Length() << "\n";
  for(int i = 0; i < args.Length(); i++) {
    v8::String::AsciiValue argStr(args[i]);
    errStr << "  arg[" << i << "]: " << *argStr << "\n";
  }
  return v8::ThrowException(v8::Exception::TypeError(v8::String::New(errStr.str().c_str())));
}

/*static*/ v8::Handle<v8::Value> wxNode_wxLogWindow::_OnFrameClose(const v8::Arguments& args) {
  v8::HandleScope scope;
  wxNode_wxLogWindow* self = unwrap<wxNode_wxLogWindow>(args.This());

  

  std::ostringstream errStr;
  errStr << "Could not find matching method for arguments (method name: wxLogWindow::OnFrameClose).\n";
  errStr << "  arg count: " << args.Length() << "\n";
  for(int i = 0; i < args.Length(); i++) {
    v8::String::AsciiValue argStr(args[i]);
    errStr << "  arg[" << i << "]: " << *argStr << "\n";
  }
  return v8::ThrowException(v8::Exception::TypeError(v8::String::New(errStr.str().c_str())));
}

/*static*/ v8::Handle<v8::Value> wxNode_wxLogWindow::_OnFrameDelete(const v8::Arguments& args) {
  v8::HandleScope scope;
  wxNode_wxLogWindow* self = unwrap<wxNode_wxLogWindow>(args.This());

  

  std::ostringstream errStr;
  errStr << "Could not find matching method for arguments (method name: wxLogWindow::OnFrameDelete).\n";
  errStr << "  arg count: " << args.Length() << "\n";
  for(int i = 0; i < args.Length(); i++) {
    v8::String::AsciiValue argStr(args[i]);
    errStr << "  arg[" << i << "]: " << *argStr << "\n";
  }
  return v8::ThrowException(v8::Exception::TypeError(v8::String::New(errStr.str().c_str())));
}



