
#include <sstream>
#include "wxNode_wxWebView.h"
#include "wxNode_wxEvtHandler.h"
#include "wxNode_wxControl.h"
#include "wxNode_wxWindow.h"
#include "wxNode_wxPoint.h"
#include "wxNode_wxSize.h"
#include "wxNode_wxWebViewHandler.h"
#include "wxNode_wxInputStream.h"
#include "wxNode_wxWebViewHistoryItem.h"
#include "wxNode_wxClassInfo.h"


/* static */ v8::Persistent<v8::FunctionTemplate> wxNode_wxWebView::s_ct;




/*static*/ void wxNode_wxWebView::Init(v8::Handle<v8::Object> target) {
  v8::HandleScope scope;

  v8::Local<v8::FunctionTemplate> t = v8::FunctionTemplate::New(wxNodeObject::NewFunc);
  s_ct = v8::Persistent<v8::FunctionTemplate>::New(t);
  s_ct->InstanceTemplate()->SetInternalFieldCount(2);
  s_ct->SetClassName(v8::String::NewSymbol("WebView"));

  NODE_SET_PROTOTYPE_METHOD(s_ct, "init", _init);
  AddMethods(s_ct);

  target->Set(v8::String::NewSymbol("WebView"), s_ct->GetFunction());
}

/*static*/ void wxNode_wxWebView::AddMethods(v8::Handle<v8::FunctionTemplate> target) {
  wxNode_wxControl::AddMethods(target);
  NODE_SET_PROTOTYPE_METHOD(target, "create", _Create);
  NODE_SET_PROTOTYPE_METHOD(target, "getCurrentTitle", _GetCurrentTitle);
  NODE_SET_PROTOTYPE_METHOD(target, "getCurrentURL", _GetCurrentURL);
  NODE_SET_PROTOTYPE_METHOD(target, "getPageSource", _GetPageSource);
  NODE_SET_PROTOTYPE_METHOD(target, "getPageText", _GetPageText);
  NODE_SET_PROTOTYPE_METHOD(target, "isBusy", _IsBusy);
  NODE_SET_PROTOTYPE_METHOD(target, "isEditable", _IsEditable);
  NODE_SET_PROTOTYPE_METHOD(target, "loadURL", _LoadURL);
  NODE_SET_PROTOTYPE_METHOD(target, "print", _Print);
  NODE_SET_PROTOTYPE_METHOD(target, "registerHandler", _RegisterHandler);
  NODE_SET_PROTOTYPE_METHOD(target, "reload", _Reload);
  NODE_SET_PROTOTYPE_METHOD(target, "runScript", _RunScript);
  NODE_SET_PROTOTYPE_METHOD(target, "setEditable", _SetEditable);
  NODE_SET_PROTOTYPE_METHOD(target, "setPage", _SetPage);
  NODE_SET_PROTOTYPE_METHOD(target, "stop", _Stop);
  NODE_SET_PROTOTYPE_METHOD(target, "canGoBack", _CanGoBack);
  NODE_SET_PROTOTYPE_METHOD(target, "canGoForward", _CanGoForward);
  NODE_SET_PROTOTYPE_METHOD(target, "goBack", _GoBack);
  NODE_SET_PROTOTYPE_METHOD(target, "goForward", _GoForward);
  NODE_SET_PROTOTYPE_METHOD(target, "clearHistory", _ClearHistory);
  NODE_SET_PROTOTYPE_METHOD(target, "enableHistory", _EnableHistory);
  NODE_SET_PROTOTYPE_METHOD(target, "getBackwardHistory", _GetBackwardHistory);
  NODE_SET_PROTOTYPE_METHOD(target, "getForwardHistory", _GetForwardHistory);
  NODE_SET_PROTOTYPE_METHOD(target, "loadHistoryItem", _LoadHistoryItem);
  NODE_SET_PROTOTYPE_METHOD(target, "canSetZoomType", _CanSetZoomType);
  NODE_SET_PROTOTYPE_METHOD(target, "getZoom", _GetZoom);
  NODE_SET_PROTOTYPE_METHOD(target, "getZoomType", _GetZoomType);
  NODE_SET_PROTOTYPE_METHOD(target, "setZoom", _SetZoom);
  NODE_SET_PROTOTYPE_METHOD(target, "setZoomType", _SetZoomType);
  NODE_SET_PROTOTYPE_METHOD(target, "selectAll", _SelectAll);
  NODE_SET_PROTOTYPE_METHOD(target, "hasSelection", _HasSelection);
  NODE_SET_PROTOTYPE_METHOD(target, "deleteSelection", _DeleteSelection);
  NODE_SET_PROTOTYPE_METHOD(target, "getSelectedText", _GetSelectedText);
  NODE_SET_PROTOTYPE_METHOD(target, "getSelectedSource", _GetSelectedSource);
  NODE_SET_PROTOTYPE_METHOD(target, "clearSelection", _ClearSelection);
  NODE_SET_PROTOTYPE_METHOD(target, "canCut", _CanCut);
  NODE_SET_PROTOTYPE_METHOD(target, "canCopy", _CanCopy);
  NODE_SET_PROTOTYPE_METHOD(target, "canPaste", _CanPaste);
  NODE_SET_PROTOTYPE_METHOD(target, "cut", _Cut);
  NODE_SET_PROTOTYPE_METHOD(target, "copy", _Copy);
  NODE_SET_PROTOTYPE_METHOD(target, "paste", _Paste);
  NODE_SET_PROTOTYPE_METHOD(target, "canUndo", _CanUndo);
  NODE_SET_PROTOTYPE_METHOD(target, "canRedo", _CanRedo);
  NODE_SET_PROTOTYPE_METHOD(target, "undo", _Undo);
  NODE_SET_PROTOTYPE_METHOD(target, "redo", _Redo);
  NODE_SET_PROTOTYPE_METHOD(target, "getClassInfo", _GetClassInfo);
  
}

/*static*/ v8::Handle<v8::Value> wxNode_wxWebView::New(const wxNode_wxWebView* obj) {
  v8::HandleScope scope;

  if(obj == NULL) {
    return scope.Close(v8::Null());
  }
  
  v8::Local<v8::FunctionTemplate> returnObjFt = v8::FunctionTemplate::New(wxNodeObject::NewFunc);
  returnObjFt->InstanceTemplate()->SetInternalFieldCount(2);
  returnObjFt->SetClassName(v8::String::NewSymbol("WebView"));
  wxNode_wxWebView::AddMethods(returnObjFt);

  v8::Local<v8::Function> returnObjFn = returnObjFt->GetFunction();
  v8::Handle<v8::Value> returnObjArgs[0];
  v8::Local<v8::Object> returnObj = returnObjFn->CallAsConstructor(0, returnObjArgs)->ToObject();
  returnObj->SetPointerInInternalField(0, (void*)obj);
  NodeExEvtHandlerImpl* evtHandler = dynamic_cast<NodeExEvtHandlerImpl*>((wxNode_wxWebView*)obj);
  returnObj->SetPointerInInternalField(1, evtHandler);

  return scope.Close(returnObj);
}

/*static*/ v8::Handle<v8::Value> wxNode_wxWebView::New(const wxWebView* obj) {
  v8::HandleScope scope;

  if(obj == NULL) {
    return scope.Close(v8::Null());
  }
  
  v8::Local<v8::FunctionTemplate> returnObjFt = v8::FunctionTemplate::New(wxNodeObject::NewFunc);
  returnObjFt->InstanceTemplate()->SetInternalFieldCount(2);
  returnObjFt->SetClassName(v8::String::NewSymbol("WebView"));
  wxNode_wxWebView::AddMethods(returnObjFt);

  v8::Local<v8::Function> returnObjFn = returnObjFt->GetFunction();
  v8::Handle<v8::Value> returnObjArgs[0];
  v8::Local<v8::Object> returnObj = returnObjFn->CallAsConstructor(0, returnObjArgs)->ToObject();
  returnObj->SetPointerInInternalField(0, (void*)obj);
  returnObj->SetPointerInInternalField(1, new NodeExEvtHandlerImplWrap(returnObj));

  return scope.Close(returnObj);
}

/*static*/ v8::Handle<v8::Value> wxNode_wxWebView::NewCopy(const wxWebView& obj) {
  return v8::Undefined();
}

/*static*/ bool wxNode_wxWebView::AssignableFrom(const v8::Handle<v8::String>& className) {
  v8::String::AsciiValue classNameStr(className);
  return AssignableFrom(*classNameStr);
}

/*static*/ bool wxNode_wxWebView::AssignableFrom(const char* className) {
  if(!strcmp("WebView", className)) { return true; }
  

  return false;
}

/*static*/ v8::Handle<v8::Value> wxNode_wxWebView::_init(const v8::Arguments& args) {
  v8::HandleScope scope;

  

  std::ostringstream errStr;
  errStr << "Could not find matching constructor for arguments (class name: wxWebView).\n";
  errStr << "  arg count: " << args.Length() << "\n";
  for(int i = 0; i < args.Length(); i++) {
    v8::String::AsciiValue argStr(args[i]);
    errStr << "  arg[" << i << "]: " << *argStr << "\n";
  }
  return v8::ThrowException(v8::Exception::TypeError(v8::String::New(errStr.str().c_str())));
}


/*static*/ v8::Handle<v8::Value> wxNode_wxWebView::_Create(const v8::Arguments& args) {
  v8::HandleScope scope;
  wxNode_wxWebView* self = unwrap<wxNode_wxWebView>(args.This());

  
  /*
   * id: _43472
   */
  if(args.Length() == 7 && (args[0]->IsNull() || (args[0]->IsObject() && wxNode_wxWindow::AssignableFrom(args[0]->ToObject()->GetConstructorName()))) && args[1]->IsNumber() && args[2]->IsString() && (args[3]->IsNull() || (args[3]->IsObject() && wxNode_wxPoint::AssignableFrom(args[3]->ToObject()->GetConstructorName()))) && (args[4]->IsNull() || (args[4]->IsObject() && wxNode_wxSize::AssignableFrom(args[4]->ToObject()->GetConstructorName()))) && args[5]->IsNumber() && args[6]->IsString()) {
    wxNode_wxWindow* parent = args[0]->IsNull() ? NULL : wxNodeObject::unwrap<wxNode_wxWindow>(args[0]->ToObject()); /* type: _1000 * */
    int id = (int)args[1]->ToInt32()->Value(); /* type: _8725  */
    v8::String::AsciiValue url(args[2]->ToString()); /* type: _14975  */
    wxNode_wxPoint* pos = args[3]->IsNull() ? NULL : wxNodeObject::unwrap<wxNode_wxPoint>(args[3]->ToObject()); /* type: _20518  */
    wxNode_wxSize* size = args[4]->IsNull() ? NULL : wxNodeObject::unwrap<wxNode_wxSize>(args[4]->ToObject()); /* type: _20628  */
    long int style = (long int)args[5]->ToInt32()->Value(); /* type: _592  */
    v8::String::AsciiValue name(args[6]->ToString()); /* type: _14975  */
    

    bool returnVal = self->Create(parent, id, *url, *pos, *size, style, *name);

    return scope.Close(v8::Boolean::New(returnVal));
  }
  
  /*
   * id: _43472
   */
  if(args.Length() == 6 && (args[0]->IsNull() || (args[0]->IsObject() && wxNode_wxWindow::AssignableFrom(args[0]->ToObject()->GetConstructorName()))) && args[1]->IsNumber() && args[2]->IsString() && (args[3]->IsNull() || (args[3]->IsObject() && wxNode_wxPoint::AssignableFrom(args[3]->ToObject()->GetConstructorName()))) && (args[4]->IsNull() || (args[4]->IsObject() && wxNode_wxSize::AssignableFrom(args[4]->ToObject()->GetConstructorName()))) && args[5]->IsNumber()) {
    wxNode_wxWindow* parent = args[0]->IsNull() ? NULL : wxNodeObject::unwrap<wxNode_wxWindow>(args[0]->ToObject()); /* type: _1000 * */
    int id = (int)args[1]->ToInt32()->Value(); /* type: _8725  */
    v8::String::AsciiValue url(args[2]->ToString()); /* type: _14975  */
    wxNode_wxPoint* pos = args[3]->IsNull() ? NULL : wxNodeObject::unwrap<wxNode_wxPoint>(args[3]->ToObject()); /* type: _20518  */
    wxNode_wxSize* size = args[4]->IsNull() ? NULL : wxNodeObject::unwrap<wxNode_wxSize>(args[4]->ToObject()); /* type: _20628  */
    long int style = (long int)args[5]->ToInt32()->Value(); /* type: _592  */
    

    bool returnVal = self->Create(parent, id, *url, *pos, *size, style);

    return scope.Close(v8::Boolean::New(returnVal));
  }
  
  /*
   * id: _43472
   */
  if(args.Length() == 5 && (args[0]->IsNull() || (args[0]->IsObject() && wxNode_wxWindow::AssignableFrom(args[0]->ToObject()->GetConstructorName()))) && args[1]->IsNumber() && args[2]->IsString() && (args[3]->IsNull() || (args[3]->IsObject() && wxNode_wxPoint::AssignableFrom(args[3]->ToObject()->GetConstructorName()))) && (args[4]->IsNull() || (args[4]->IsObject() && wxNode_wxSize::AssignableFrom(args[4]->ToObject()->GetConstructorName())))) {
    wxNode_wxWindow* parent = args[0]->IsNull() ? NULL : wxNodeObject::unwrap<wxNode_wxWindow>(args[0]->ToObject()); /* type: _1000 * */
    int id = (int)args[1]->ToInt32()->Value(); /* type: _8725  */
    v8::String::AsciiValue url(args[2]->ToString()); /* type: _14975  */
    wxNode_wxPoint* pos = args[3]->IsNull() ? NULL : wxNodeObject::unwrap<wxNode_wxPoint>(args[3]->ToObject()); /* type: _20518  */
    wxNode_wxSize* size = args[4]->IsNull() ? NULL : wxNodeObject::unwrap<wxNode_wxSize>(args[4]->ToObject()); /* type: _20628  */
    

    bool returnVal = self->Create(parent, id, *url, *pos, *size);

    return scope.Close(v8::Boolean::New(returnVal));
  }
  
  /*
   * id: _43472
   */
  if(args.Length() == 4 && (args[0]->IsNull() || (args[0]->IsObject() && wxNode_wxWindow::AssignableFrom(args[0]->ToObject()->GetConstructorName()))) && args[1]->IsNumber() && args[2]->IsString() && (args[3]->IsNull() || (args[3]->IsObject() && wxNode_wxPoint::AssignableFrom(args[3]->ToObject()->GetConstructorName())))) {
    wxNode_wxWindow* parent = args[0]->IsNull() ? NULL : wxNodeObject::unwrap<wxNode_wxWindow>(args[0]->ToObject()); /* type: _1000 * */
    int id = (int)args[1]->ToInt32()->Value(); /* type: _8725  */
    v8::String::AsciiValue url(args[2]->ToString()); /* type: _14975  */
    wxNode_wxPoint* pos = args[3]->IsNull() ? NULL : wxNodeObject::unwrap<wxNode_wxPoint>(args[3]->ToObject()); /* type: _20518  */
    

    bool returnVal = self->Create(parent, id, *url, *pos);

    return scope.Close(v8::Boolean::New(returnVal));
  }
  
  /*
   * id: _43472
   */
  if(args.Length() == 3 && (args[0]->IsNull() || (args[0]->IsObject() && wxNode_wxWindow::AssignableFrom(args[0]->ToObject()->GetConstructorName()))) && args[1]->IsNumber() && args[2]->IsString()) {
    wxNode_wxWindow* parent = args[0]->IsNull() ? NULL : wxNodeObject::unwrap<wxNode_wxWindow>(args[0]->ToObject()); /* type: _1000 * */
    int id = (int)args[1]->ToInt32()->Value(); /* type: _8725  */
    v8::String::AsciiValue url(args[2]->ToString()); /* type: _14975  */
    

    bool returnVal = self->Create(parent, id, *url);

    return scope.Close(v8::Boolean::New(returnVal));
  }
  
  /*
   * id: _43472
   */
  if(args.Length() == 2 && (args[0]->IsNull() || (args[0]->IsObject() && wxNode_wxWindow::AssignableFrom(args[0]->ToObject()->GetConstructorName()))) && args[1]->IsNumber()) {
    wxNode_wxWindow* parent = args[0]->IsNull() ? NULL : wxNodeObject::unwrap<wxNode_wxWindow>(args[0]->ToObject()); /* type: _1000 * */
    int id = (int)args[1]->ToInt32()->Value(); /* type: _8725  */
    

    bool returnVal = self->Create(parent, id);

    return scope.Close(v8::Boolean::New(returnVal));
  }
  

  std::ostringstream errStr;
  errStr << "Could not find matching method for arguments (method name: wxWebView::Create).\n";
  errStr << "  arg count: " << args.Length() << "\n";
  for(int i = 0; i < args.Length(); i++) {
    v8::String::AsciiValue argStr(args[i]);
    errStr << "  arg[" << i << "]: " << *argStr << "\n";
  }
  return v8::ThrowException(v8::Exception::TypeError(v8::String::New(errStr.str().c_str())));
}

/*static*/ v8::Handle<v8::Value> wxNode_wxWebView::_GetCurrentTitle(const v8::Arguments& args) {
  v8::HandleScope scope;
  wxNode_wxWebView* self = unwrap<wxNode_wxWebView>(args.This());

  
  /*
   * id: _43475
   */
  if(args.Length() == 0) {
    

    wxString returnVal = self->GetCurrentTitle();

    return scope.Close(v8::String::New(returnVal.mb_str()));
  }
  

  std::ostringstream errStr;
  errStr << "Could not find matching method for arguments (method name: wxWebView::GetCurrentTitle).\n";
  errStr << "  arg count: " << args.Length() << "\n";
  for(int i = 0; i < args.Length(); i++) {
    v8::String::AsciiValue argStr(args[i]);
    errStr << "  arg[" << i << "]: " << *argStr << "\n";
  }
  return v8::ThrowException(v8::Exception::TypeError(v8::String::New(errStr.str().c_str())));
}

/*static*/ v8::Handle<v8::Value> wxNode_wxWebView::_GetCurrentURL(const v8::Arguments& args) {
  v8::HandleScope scope;
  wxNode_wxWebView* self = unwrap<wxNode_wxWebView>(args.This());

  
  /*
   * id: _43476
   */
  if(args.Length() == 0) {
    

    wxString returnVal = self->GetCurrentURL();

    return scope.Close(v8::String::New(returnVal.mb_str()));
  }
  

  std::ostringstream errStr;
  errStr << "Could not find matching method for arguments (method name: wxWebView::GetCurrentURL).\n";
  errStr << "  arg count: " << args.Length() << "\n";
  for(int i = 0; i < args.Length(); i++) {
    v8::String::AsciiValue argStr(args[i]);
    errStr << "  arg[" << i << "]: " << *argStr << "\n";
  }
  return v8::ThrowException(v8::Exception::TypeError(v8::String::New(errStr.str().c_str())));
}

/*static*/ v8::Handle<v8::Value> wxNode_wxWebView::_GetPageSource(const v8::Arguments& args) {
  v8::HandleScope scope;
  wxNode_wxWebView* self = unwrap<wxNode_wxWebView>(args.This());

  
  /*
   * id: _43477
   */
  if(args.Length() == 0) {
    

    wxString returnVal = self->GetPageSource();

    return scope.Close(v8::String::New(returnVal.mb_str()));
  }
  

  std::ostringstream errStr;
  errStr << "Could not find matching method for arguments (method name: wxWebView::GetPageSource).\n";
  errStr << "  arg count: " << args.Length() << "\n";
  for(int i = 0; i < args.Length(); i++) {
    v8::String::AsciiValue argStr(args[i]);
    errStr << "  arg[" << i << "]: " << *argStr << "\n";
  }
  return v8::ThrowException(v8::Exception::TypeError(v8::String::New(errStr.str().c_str())));
}

/*static*/ v8::Handle<v8::Value> wxNode_wxWebView::_GetPageText(const v8::Arguments& args) {
  v8::HandleScope scope;
  wxNode_wxWebView* self = unwrap<wxNode_wxWebView>(args.This());

  
  /*
   * id: _43478
   */
  if(args.Length() == 0) {
    

    wxString returnVal = self->GetPageText();

    return scope.Close(v8::String::New(returnVal.mb_str()));
  }
  

  std::ostringstream errStr;
  errStr << "Could not find matching method for arguments (method name: wxWebView::GetPageText).\n";
  errStr << "  arg count: " << args.Length() << "\n";
  for(int i = 0; i < args.Length(); i++) {
    v8::String::AsciiValue argStr(args[i]);
    errStr << "  arg[" << i << "]: " << *argStr << "\n";
  }
  return v8::ThrowException(v8::Exception::TypeError(v8::String::New(errStr.str().c_str())));
}

/*static*/ v8::Handle<v8::Value> wxNode_wxWebView::_IsBusy(const v8::Arguments& args) {
  v8::HandleScope scope;
  wxNode_wxWebView* self = unwrap<wxNode_wxWebView>(args.This());

  
  /*
   * id: _43479
   */
  if(args.Length() == 0) {
    

    bool returnVal = self->IsBusy();

    return scope.Close(v8::Boolean::New(returnVal));
  }
  

  std::ostringstream errStr;
  errStr << "Could not find matching method for arguments (method name: wxWebView::IsBusy).\n";
  errStr << "  arg count: " << args.Length() << "\n";
  for(int i = 0; i < args.Length(); i++) {
    v8::String::AsciiValue argStr(args[i]);
    errStr << "  arg[" << i << "]: " << *argStr << "\n";
  }
  return v8::ThrowException(v8::Exception::TypeError(v8::String::New(errStr.str().c_str())));
}

/*static*/ v8::Handle<v8::Value> wxNode_wxWebView::_IsEditable(const v8::Arguments& args) {
  v8::HandleScope scope;
  wxNode_wxWebView* self = unwrap<wxNode_wxWebView>(args.This());

  
  /*
   * id: _43480
   */
  if(args.Length() == 0) {
    

    bool returnVal = self->IsEditable();

    return scope.Close(v8::Boolean::New(returnVal));
  }
  

  std::ostringstream errStr;
  errStr << "Could not find matching method for arguments (method name: wxWebView::IsEditable).\n";
  errStr << "  arg count: " << args.Length() << "\n";
  for(int i = 0; i < args.Length(); i++) {
    v8::String::AsciiValue argStr(args[i]);
    errStr << "  arg[" << i << "]: " << *argStr << "\n";
  }
  return v8::ThrowException(v8::Exception::TypeError(v8::String::New(errStr.str().c_str())));
}

/*static*/ v8::Handle<v8::Value> wxNode_wxWebView::_LoadURL(const v8::Arguments& args) {
  v8::HandleScope scope;
  wxNode_wxWebView* self = unwrap<wxNode_wxWebView>(args.This());

  
  /*
   * id: _43481
   */
  if(args.Length() == 1 && args[0]->IsString()) {
    v8::String::AsciiValue url(args[0]->ToString()); /* type: _14975  */
    

    self->LoadURL(*url);

    return v8::Undefined();
  }
  

  std::ostringstream errStr;
  errStr << "Could not find matching method for arguments (method name: wxWebView::LoadURL).\n";
  errStr << "  arg count: " << args.Length() << "\n";
  for(int i = 0; i < args.Length(); i++) {
    v8::String::AsciiValue argStr(args[i]);
    errStr << "  arg[" << i << "]: " << *argStr << "\n";
  }
  return v8::ThrowException(v8::Exception::TypeError(v8::String::New(errStr.str().c_str())));
}

/*static*/ v8::Handle<v8::Value> wxNode_wxWebView::_Print(const v8::Arguments& args) {
  v8::HandleScope scope;
  wxNode_wxWebView* self = unwrap<wxNode_wxWebView>(args.This());

  
  /*
   * id: _43482
   */
  if(args.Length() == 0) {
    

    self->Print();

    return v8::Undefined();
  }
  

  std::ostringstream errStr;
  errStr << "Could not find matching method for arguments (method name: wxWebView::Print).\n";
  errStr << "  arg count: " << args.Length() << "\n";
  for(int i = 0; i < args.Length(); i++) {
    v8::String::AsciiValue argStr(args[i]);
    errStr << "  arg[" << i << "]: " << *argStr << "\n";
  }
  return v8::ThrowException(v8::Exception::TypeError(v8::String::New(errStr.str().c_str())));
}

/*static*/ v8::Handle<v8::Value> wxNode_wxWebView::_RegisterHandler(const v8::Arguments& args) {
  v8::HandleScope scope;
  wxNode_wxWebView* self = unwrap<wxNode_wxWebView>(args.This());

  
  /*
   * id: _43483
   */
  if(args.Length() == 1 && (args[0]->IsNull() || (args[0]->IsObject() && wxNode_wxWebViewHandler::AssignableFrom(args[0]->ToObject()->GetConstructorName())))) {
    wxNode_wxWebViewHandler* handler = args[0]->IsNull() ? NULL : wxNodeObject::unwrap<wxNode_wxWebViewHandler>(args[0]->ToObject()); /* type: _4041  */
    

    self->RegisterHandler(wxSharedPtr<wxWebViewHandler>(handler));

    return v8::Undefined();
  }
  

  std::ostringstream errStr;
  errStr << "Could not find matching method for arguments (method name: wxWebView::RegisterHandler).\n";
  errStr << "  arg count: " << args.Length() << "\n";
  for(int i = 0; i < args.Length(); i++) {
    v8::String::AsciiValue argStr(args[i]);
    errStr << "  arg[" << i << "]: " << *argStr << "\n";
  }
  return v8::ThrowException(v8::Exception::TypeError(v8::String::New(errStr.str().c_str())));
}

/*static*/ v8::Handle<v8::Value> wxNode_wxWebView::_Reload(const v8::Arguments& args) {
  v8::HandleScope scope;
  wxNode_wxWebView* self = unwrap<wxNode_wxWebView>(args.This());

  
  /*
   * id: _43484
   */
  if(args.Length() == 1 && args[0]->IsNumber()) {
    wxWebViewReloadFlags flags = (wxWebViewReloadFlags)args[0]->ToNumber()->Value(); /* type: _3573  */
    

    self->Reload(flags);

    return v8::Undefined();
  }
  
  /*
   * id: _43484
   */
  if(args.Length() == 0) {
    

    self->Reload();

    return v8::Undefined();
  }
  

  std::ostringstream errStr;
  errStr << "Could not find matching method for arguments (method name: wxWebView::Reload).\n";
  errStr << "  arg count: " << args.Length() << "\n";
  for(int i = 0; i < args.Length(); i++) {
    v8::String::AsciiValue argStr(args[i]);
    errStr << "  arg[" << i << "]: " << *argStr << "\n";
  }
  return v8::ThrowException(v8::Exception::TypeError(v8::String::New(errStr.str().c_str())));
}

/*static*/ v8::Handle<v8::Value> wxNode_wxWebView::_RunScript(const v8::Arguments& args) {
  v8::HandleScope scope;
  wxNode_wxWebView* self = unwrap<wxNode_wxWebView>(args.This());

  
  /*
   * id: _43485
   */
  if(args.Length() == 1 && args[0]->IsString()) {
    v8::String::AsciiValue javascript(args[0]->ToString()); /* type: _14975  */
    

    self->RunScript(*javascript);

    return v8::Undefined();
  }
  

  std::ostringstream errStr;
  errStr << "Could not find matching method for arguments (method name: wxWebView::RunScript).\n";
  errStr << "  arg count: " << args.Length() << "\n";
  for(int i = 0; i < args.Length(); i++) {
    v8::String::AsciiValue argStr(args[i]);
    errStr << "  arg[" << i << "]: " << *argStr << "\n";
  }
  return v8::ThrowException(v8::Exception::TypeError(v8::String::New(errStr.str().c_str())));
}

/*static*/ v8::Handle<v8::Value> wxNode_wxWebView::_SetEditable(const v8::Arguments& args) {
  v8::HandleScope scope;
  wxNode_wxWebView* self = unwrap<wxNode_wxWebView>(args.This());

  
  /*
   * id: _43486
   */
  if(args.Length() == 1 && args[0]->IsBoolean()) {
    bool enable = args[0]->ToBoolean()->Value(); /* type: _14830  */
    

    self->SetEditable(enable);

    return v8::Undefined();
  }
  
  /*
   * id: _43486
   */
  if(args.Length() == 0) {
    

    self->SetEditable();

    return v8::Undefined();
  }
  

  std::ostringstream errStr;
  errStr << "Could not find matching method for arguments (method name: wxWebView::SetEditable).\n";
  errStr << "  arg count: " << args.Length() << "\n";
  for(int i = 0; i < args.Length(); i++) {
    v8::String::AsciiValue argStr(args[i]);
    errStr << "  arg[" << i << "]: " << *argStr << "\n";
  }
  return v8::ThrowException(v8::Exception::TypeError(v8::String::New(errStr.str().c_str())));
}

/*static*/ v8::Handle<v8::Value> wxNode_wxWebView::_SetPage(const v8::Arguments& args) {
  v8::HandleScope scope;
  wxNode_wxWebView* self = unwrap<wxNode_wxWebView>(args.This());

  
  /*
   * id: _43487
   */
  if(args.Length() == 2 && args[0]->IsString() && args[1]->IsString()) {
    v8::String::AsciiValue html(args[0]->ToString()); /* type: _14975  */
    v8::String::AsciiValue baseUrl(args[1]->ToString()); /* type: _14975  */
    

    self->SetPage(*html, *baseUrl);

    return v8::Undefined();
  }
  
  /*
   * id: _43488
   */
  if(args.Length() == 2 && (args[0]->IsNull() || (args[0]->IsObject() && wxNode_wxInputStream::AssignableFrom(args[0]->ToObject()->GetConstructorName()))) && args[1]->IsString()) {
    wxNode_wxInputStream* html = args[0]->IsNull() ? NULL : wxNodeObject::unwrap<wxNode_wxInputStream>(args[0]->ToObject()); /* type: _58842  */
    v8::String::AsciiValue baseUrl(args[1]->ToString()); /* type: _1214  */
    

    self->SetPage(*html, *baseUrl);

    return v8::Undefined();
  }
  

  std::ostringstream errStr;
  errStr << "Could not find matching method for arguments (method name: wxWebView::SetPage).\n";
  errStr << "  arg count: " << args.Length() << "\n";
  for(int i = 0; i < args.Length(); i++) {
    v8::String::AsciiValue argStr(args[i]);
    errStr << "  arg[" << i << "]: " << *argStr << "\n";
  }
  return v8::ThrowException(v8::Exception::TypeError(v8::String::New(errStr.str().c_str())));
}

/*static*/ v8::Handle<v8::Value> wxNode_wxWebView::_Stop(const v8::Arguments& args) {
  v8::HandleScope scope;
  wxNode_wxWebView* self = unwrap<wxNode_wxWebView>(args.This());

  
  /*
   * id: _43489
   */
  if(args.Length() == 0) {
    

    self->Stop();

    return v8::Undefined();
  }
  

  std::ostringstream errStr;
  errStr << "Could not find matching method for arguments (method name: wxWebView::Stop).\n";
  errStr << "  arg count: " << args.Length() << "\n";
  for(int i = 0; i < args.Length(); i++) {
    v8::String::AsciiValue argStr(args[i]);
    errStr << "  arg[" << i << "]: " << *argStr << "\n";
  }
  return v8::ThrowException(v8::Exception::TypeError(v8::String::New(errStr.str().c_str())));
}

/*static*/ v8::Handle<v8::Value> wxNode_wxWebView::_CanGoBack(const v8::Arguments& args) {
  v8::HandleScope scope;
  wxNode_wxWebView* self = unwrap<wxNode_wxWebView>(args.This());

  
  /*
   * id: _43490
   */
  if(args.Length() == 0) {
    

    bool returnVal = self->CanGoBack();

    return scope.Close(v8::Boolean::New(returnVal));
  }
  

  std::ostringstream errStr;
  errStr << "Could not find matching method for arguments (method name: wxWebView::CanGoBack).\n";
  errStr << "  arg count: " << args.Length() << "\n";
  for(int i = 0; i < args.Length(); i++) {
    v8::String::AsciiValue argStr(args[i]);
    errStr << "  arg[" << i << "]: " << *argStr << "\n";
  }
  return v8::ThrowException(v8::Exception::TypeError(v8::String::New(errStr.str().c_str())));
}

/*static*/ v8::Handle<v8::Value> wxNode_wxWebView::_CanGoForward(const v8::Arguments& args) {
  v8::HandleScope scope;
  wxNode_wxWebView* self = unwrap<wxNode_wxWebView>(args.This());

  
  /*
   * id: _43491
   */
  if(args.Length() == 0) {
    

    bool returnVal = self->CanGoForward();

    return scope.Close(v8::Boolean::New(returnVal));
  }
  

  std::ostringstream errStr;
  errStr << "Could not find matching method for arguments (method name: wxWebView::CanGoForward).\n";
  errStr << "  arg count: " << args.Length() << "\n";
  for(int i = 0; i < args.Length(); i++) {
    v8::String::AsciiValue argStr(args[i]);
    errStr << "  arg[" << i << "]: " << *argStr << "\n";
  }
  return v8::ThrowException(v8::Exception::TypeError(v8::String::New(errStr.str().c_str())));
}

/*static*/ v8::Handle<v8::Value> wxNode_wxWebView::_GoBack(const v8::Arguments& args) {
  v8::HandleScope scope;
  wxNode_wxWebView* self = unwrap<wxNode_wxWebView>(args.This());

  
  /*
   * id: _43492
   */
  if(args.Length() == 0) {
    

    self->GoBack();

    return v8::Undefined();
  }
  

  std::ostringstream errStr;
  errStr << "Could not find matching method for arguments (method name: wxWebView::GoBack).\n";
  errStr << "  arg count: " << args.Length() << "\n";
  for(int i = 0; i < args.Length(); i++) {
    v8::String::AsciiValue argStr(args[i]);
    errStr << "  arg[" << i << "]: " << *argStr << "\n";
  }
  return v8::ThrowException(v8::Exception::TypeError(v8::String::New(errStr.str().c_str())));
}

/*static*/ v8::Handle<v8::Value> wxNode_wxWebView::_GoForward(const v8::Arguments& args) {
  v8::HandleScope scope;
  wxNode_wxWebView* self = unwrap<wxNode_wxWebView>(args.This());

  
  /*
   * id: _43493
   */
  if(args.Length() == 0) {
    

    self->GoForward();

    return v8::Undefined();
  }
  

  std::ostringstream errStr;
  errStr << "Could not find matching method for arguments (method name: wxWebView::GoForward).\n";
  errStr << "  arg count: " << args.Length() << "\n";
  for(int i = 0; i < args.Length(); i++) {
    v8::String::AsciiValue argStr(args[i]);
    errStr << "  arg[" << i << "]: " << *argStr << "\n";
  }
  return v8::ThrowException(v8::Exception::TypeError(v8::String::New(errStr.str().c_str())));
}

/*static*/ v8::Handle<v8::Value> wxNode_wxWebView::_ClearHistory(const v8::Arguments& args) {
  v8::HandleScope scope;
  wxNode_wxWebView* self = unwrap<wxNode_wxWebView>(args.This());

  
  /*
   * id: _43494
   */
  if(args.Length() == 0) {
    

    self->ClearHistory();

    return v8::Undefined();
  }
  

  std::ostringstream errStr;
  errStr << "Could not find matching method for arguments (method name: wxWebView::ClearHistory).\n";
  errStr << "  arg count: " << args.Length() << "\n";
  for(int i = 0; i < args.Length(); i++) {
    v8::String::AsciiValue argStr(args[i]);
    errStr << "  arg[" << i << "]: " << *argStr << "\n";
  }
  return v8::ThrowException(v8::Exception::TypeError(v8::String::New(errStr.str().c_str())));
}

/*static*/ v8::Handle<v8::Value> wxNode_wxWebView::_EnableHistory(const v8::Arguments& args) {
  v8::HandleScope scope;
  wxNode_wxWebView* self = unwrap<wxNode_wxWebView>(args.This());

  
  /*
   * id: _43495
   */
  if(args.Length() == 1 && args[0]->IsBoolean()) {
    bool enable = args[0]->ToBoolean()->Value(); /* type: _14830  */
    

    self->EnableHistory(enable);

    return v8::Undefined();
  }
  
  /*
   * id: _43495
   */
  if(args.Length() == 0) {
    

    self->EnableHistory();

    return v8::Undefined();
  }
  

  std::ostringstream errStr;
  errStr << "Could not find matching method for arguments (method name: wxWebView::EnableHistory).\n";
  errStr << "  arg count: " << args.Length() << "\n";
  for(int i = 0; i < args.Length(); i++) {
    v8::String::AsciiValue argStr(args[i]);
    errStr << "  arg[" << i << "]: " << *argStr << "\n";
  }
  return v8::ThrowException(v8::Exception::TypeError(v8::String::New(errStr.str().c_str())));
}

/*static*/ v8::Handle<v8::Value> wxNode_wxWebView::_GetBackwardHistory(const v8::Arguments& args) {
  v8::HandleScope scope;
  wxNode_wxWebView* self = unwrap<wxNode_wxWebView>(args.This());

  
  /*
   * id: _43496
   */
  if(args.Length() == 0) {
    

    wxVector<wxSharedPtr<wxWebViewHistoryItem> > returnVal = self->GetBackwardHistory();

    return scope.Close(wxNode_wxVector<wxSharedPtr<wxWebViewHistoryItem> >::NewCopy(returnVal));
  }
  

  std::ostringstream errStr;
  errStr << "Could not find matching method for arguments (method name: wxWebView::GetBackwardHistory).\n";
  errStr << "  arg count: " << args.Length() << "\n";
  for(int i = 0; i < args.Length(); i++) {
    v8::String::AsciiValue argStr(args[i]);
    errStr << "  arg[" << i << "]: " << *argStr << "\n";
  }
  return v8::ThrowException(v8::Exception::TypeError(v8::String::New(errStr.str().c_str())));
}

/*static*/ v8::Handle<v8::Value> wxNode_wxWebView::_GetForwardHistory(const v8::Arguments& args) {
  v8::HandleScope scope;
  wxNode_wxWebView* self = unwrap<wxNode_wxWebView>(args.This());

  
  /*
   * id: _43497
   */
  if(args.Length() == 0) {
    

    wxVector<wxSharedPtr<wxWebViewHistoryItem> > returnVal = self->GetForwardHistory();

    return scope.Close(wxNode_wxVector<wxSharedPtr<wxWebViewHistoryItem> >::NewCopy(returnVal));
  }
  

  std::ostringstream errStr;
  errStr << "Could not find matching method for arguments (method name: wxWebView::GetForwardHistory).\n";
  errStr << "  arg count: " << args.Length() << "\n";
  for(int i = 0; i < args.Length(); i++) {
    v8::String::AsciiValue argStr(args[i]);
    errStr << "  arg[" << i << "]: " << *argStr << "\n";
  }
  return v8::ThrowException(v8::Exception::TypeError(v8::String::New(errStr.str().c_str())));
}

/*static*/ v8::Handle<v8::Value> wxNode_wxWebView::_LoadHistoryItem(const v8::Arguments& args) {
  v8::HandleScope scope;
  wxNode_wxWebView* self = unwrap<wxNode_wxWebView>(args.This());

  
  /*
   * id: _43498
   */
  if(args.Length() == 1 && (args[0]->IsNull() || (args[0]->IsObject() && wxNode_wxWebViewHistoryItem::AssignableFrom(args[0]->ToObject()->GetConstructorName())))) {
    wxNode_wxWebViewHistoryItem* item = args[0]->IsNull() ? NULL : wxNodeObject::unwrap<wxNode_wxWebViewHistoryItem>(args[0]->ToObject()); /* type: _4040  */
    

    self->LoadHistoryItem(wxSharedPtr<wxWebViewHistoryItem>(item));

    return v8::Undefined();
  }
  

  std::ostringstream errStr;
  errStr << "Could not find matching method for arguments (method name: wxWebView::LoadHistoryItem).\n";
  errStr << "  arg count: " << args.Length() << "\n";
  for(int i = 0; i < args.Length(); i++) {
    v8::String::AsciiValue argStr(args[i]);
    errStr << "  arg[" << i << "]: " << *argStr << "\n";
  }
  return v8::ThrowException(v8::Exception::TypeError(v8::String::New(errStr.str().c_str())));
}

/*static*/ v8::Handle<v8::Value> wxNode_wxWebView::_CanSetZoomType(const v8::Arguments& args) {
  v8::HandleScope scope;
  wxNode_wxWebView* self = unwrap<wxNode_wxWebView>(args.This());

  
  /*
   * id: _43499
   */
  if(args.Length() == 1 && args[0]->IsNumber()) {
    wxWebViewZoomType type = (wxWebViewZoomType)args[0]->ToNumber()->Value(); /* type: _10476  */
    

    bool returnVal = self->CanSetZoomType(type);

    return scope.Close(v8::Boolean::New(returnVal));
  }
  

  std::ostringstream errStr;
  errStr << "Could not find matching method for arguments (method name: wxWebView::CanSetZoomType).\n";
  errStr << "  arg count: " << args.Length() << "\n";
  for(int i = 0; i < args.Length(); i++) {
    v8::String::AsciiValue argStr(args[i]);
    errStr << "  arg[" << i << "]: " << *argStr << "\n";
  }
  return v8::ThrowException(v8::Exception::TypeError(v8::String::New(errStr.str().c_str())));
}

/*static*/ v8::Handle<v8::Value> wxNode_wxWebView::_GetZoom(const v8::Arguments& args) {
  v8::HandleScope scope;
  wxNode_wxWebView* self = unwrap<wxNode_wxWebView>(args.This());

  
  /*
   * id: _43500
   */
  if(args.Length() == 0) {
    

    int returnVal = (int)self->GetZoom();

    return scope.Close(v8::Number::New(returnVal));
  }
  

  std::ostringstream errStr;
  errStr << "Could not find matching method for arguments (method name: wxWebView::GetZoom).\n";
  errStr << "  arg count: " << args.Length() << "\n";
  for(int i = 0; i < args.Length(); i++) {
    v8::String::AsciiValue argStr(args[i]);
    errStr << "  arg[" << i << "]: " << *argStr << "\n";
  }
  return v8::ThrowException(v8::Exception::TypeError(v8::String::New(errStr.str().c_str())));
}

/*static*/ v8::Handle<v8::Value> wxNode_wxWebView::_GetZoomType(const v8::Arguments& args) {
  v8::HandleScope scope;
  wxNode_wxWebView* self = unwrap<wxNode_wxWebView>(args.This());

  
  /*
   * id: _43501
   */
  if(args.Length() == 0) {
    

    int returnVal = (int)self->GetZoomType();

    return scope.Close(v8::Number::New(returnVal));
  }
  

  std::ostringstream errStr;
  errStr << "Could not find matching method for arguments (method name: wxWebView::GetZoomType).\n";
  errStr << "  arg count: " << args.Length() << "\n";
  for(int i = 0; i < args.Length(); i++) {
    v8::String::AsciiValue argStr(args[i]);
    errStr << "  arg[" << i << "]: " << *argStr << "\n";
  }
  return v8::ThrowException(v8::Exception::TypeError(v8::String::New(errStr.str().c_str())));
}

/*static*/ v8::Handle<v8::Value> wxNode_wxWebView::_SetZoom(const v8::Arguments& args) {
  v8::HandleScope scope;
  wxNode_wxWebView* self = unwrap<wxNode_wxWebView>(args.This());

  
  /*
   * id: _43502
   */
  if(args.Length() == 1 && args[0]->IsNumber()) {
    wxWebViewZoom zoom = (wxWebViewZoom)args[0]->ToNumber()->Value(); /* type: _12462  */
    

    self->SetZoom(zoom);

    return v8::Undefined();
  }
  

  std::ostringstream errStr;
  errStr << "Could not find matching method for arguments (method name: wxWebView::SetZoom).\n";
  errStr << "  arg count: " << args.Length() << "\n";
  for(int i = 0; i < args.Length(); i++) {
    v8::String::AsciiValue argStr(args[i]);
    errStr << "  arg[" << i << "]: " << *argStr << "\n";
  }
  return v8::ThrowException(v8::Exception::TypeError(v8::String::New(errStr.str().c_str())));
}

/*static*/ v8::Handle<v8::Value> wxNode_wxWebView::_SetZoomType(const v8::Arguments& args) {
  v8::HandleScope scope;
  wxNode_wxWebView* self = unwrap<wxNode_wxWebView>(args.This());

  
  /*
   * id: _43503
   */
  if(args.Length() == 1 && args[0]->IsNumber()) {
    wxWebViewZoomType zoomType = (wxWebViewZoomType)args[0]->ToNumber()->Value(); /* type: _10476  */
    

    self->SetZoomType(zoomType);

    return v8::Undefined();
  }
  

  std::ostringstream errStr;
  errStr << "Could not find matching method for arguments (method name: wxWebView::SetZoomType).\n";
  errStr << "  arg count: " << args.Length() << "\n";
  for(int i = 0; i < args.Length(); i++) {
    v8::String::AsciiValue argStr(args[i]);
    errStr << "  arg[" << i << "]: " << *argStr << "\n";
  }
  return v8::ThrowException(v8::Exception::TypeError(v8::String::New(errStr.str().c_str())));
}

/*static*/ v8::Handle<v8::Value> wxNode_wxWebView::_SelectAll(const v8::Arguments& args) {
  v8::HandleScope scope;
  wxNode_wxWebView* self = unwrap<wxNode_wxWebView>(args.This());

  
  /*
   * id: _43504
   */
  if(args.Length() == 0) {
    

    self->SelectAll();

    return v8::Undefined();
  }
  

  std::ostringstream errStr;
  errStr << "Could not find matching method for arguments (method name: wxWebView::SelectAll).\n";
  errStr << "  arg count: " << args.Length() << "\n";
  for(int i = 0; i < args.Length(); i++) {
    v8::String::AsciiValue argStr(args[i]);
    errStr << "  arg[" << i << "]: " << *argStr << "\n";
  }
  return v8::ThrowException(v8::Exception::TypeError(v8::String::New(errStr.str().c_str())));
}

/*static*/ v8::Handle<v8::Value> wxNode_wxWebView::_HasSelection(const v8::Arguments& args) {
  v8::HandleScope scope;
  wxNode_wxWebView* self = unwrap<wxNode_wxWebView>(args.This());

  
  /*
   * id: _43505
   */
  if(args.Length() == 0) {
    

    bool returnVal = self->HasSelection();

    return scope.Close(v8::Boolean::New(returnVal));
  }
  

  std::ostringstream errStr;
  errStr << "Could not find matching method for arguments (method name: wxWebView::HasSelection).\n";
  errStr << "  arg count: " << args.Length() << "\n";
  for(int i = 0; i < args.Length(); i++) {
    v8::String::AsciiValue argStr(args[i]);
    errStr << "  arg[" << i << "]: " << *argStr << "\n";
  }
  return v8::ThrowException(v8::Exception::TypeError(v8::String::New(errStr.str().c_str())));
}

/*static*/ v8::Handle<v8::Value> wxNode_wxWebView::_DeleteSelection(const v8::Arguments& args) {
  v8::HandleScope scope;
  wxNode_wxWebView* self = unwrap<wxNode_wxWebView>(args.This());

  
  /*
   * id: _43506
   */
  if(args.Length() == 0) {
    

    self->DeleteSelection();

    return v8::Undefined();
  }
  

  std::ostringstream errStr;
  errStr << "Could not find matching method for arguments (method name: wxWebView::DeleteSelection).\n";
  errStr << "  arg count: " << args.Length() << "\n";
  for(int i = 0; i < args.Length(); i++) {
    v8::String::AsciiValue argStr(args[i]);
    errStr << "  arg[" << i << "]: " << *argStr << "\n";
  }
  return v8::ThrowException(v8::Exception::TypeError(v8::String::New(errStr.str().c_str())));
}

/*static*/ v8::Handle<v8::Value> wxNode_wxWebView::_GetSelectedText(const v8::Arguments& args) {
  v8::HandleScope scope;
  wxNode_wxWebView* self = unwrap<wxNode_wxWebView>(args.This());

  
  /*
   * id: _43507
   */
  if(args.Length() == 0) {
    

    wxString returnVal = self->GetSelectedText();

    return scope.Close(v8::String::New(returnVal.mb_str()));
  }
  

  std::ostringstream errStr;
  errStr << "Could not find matching method for arguments (method name: wxWebView::GetSelectedText).\n";
  errStr << "  arg count: " << args.Length() << "\n";
  for(int i = 0; i < args.Length(); i++) {
    v8::String::AsciiValue argStr(args[i]);
    errStr << "  arg[" << i << "]: " << *argStr << "\n";
  }
  return v8::ThrowException(v8::Exception::TypeError(v8::String::New(errStr.str().c_str())));
}

/*static*/ v8::Handle<v8::Value> wxNode_wxWebView::_GetSelectedSource(const v8::Arguments& args) {
  v8::HandleScope scope;
  wxNode_wxWebView* self = unwrap<wxNode_wxWebView>(args.This());

  
  /*
   * id: _43508
   */
  if(args.Length() == 0) {
    

    wxString returnVal = self->GetSelectedSource();

    return scope.Close(v8::String::New(returnVal.mb_str()));
  }
  

  std::ostringstream errStr;
  errStr << "Could not find matching method for arguments (method name: wxWebView::GetSelectedSource).\n";
  errStr << "  arg count: " << args.Length() << "\n";
  for(int i = 0; i < args.Length(); i++) {
    v8::String::AsciiValue argStr(args[i]);
    errStr << "  arg[" << i << "]: " << *argStr << "\n";
  }
  return v8::ThrowException(v8::Exception::TypeError(v8::String::New(errStr.str().c_str())));
}

/*static*/ v8::Handle<v8::Value> wxNode_wxWebView::_ClearSelection(const v8::Arguments& args) {
  v8::HandleScope scope;
  wxNode_wxWebView* self = unwrap<wxNode_wxWebView>(args.This());

  
  /*
   * id: _43509
   */
  if(args.Length() == 0) {
    

    self->ClearSelection();

    return v8::Undefined();
  }
  

  std::ostringstream errStr;
  errStr << "Could not find matching method for arguments (method name: wxWebView::ClearSelection).\n";
  errStr << "  arg count: " << args.Length() << "\n";
  for(int i = 0; i < args.Length(); i++) {
    v8::String::AsciiValue argStr(args[i]);
    errStr << "  arg[" << i << "]: " << *argStr << "\n";
  }
  return v8::ThrowException(v8::Exception::TypeError(v8::String::New(errStr.str().c_str())));
}

/*static*/ v8::Handle<v8::Value> wxNode_wxWebView::_CanCut(const v8::Arguments& args) {
  v8::HandleScope scope;
  wxNode_wxWebView* self = unwrap<wxNode_wxWebView>(args.This());

  
  /*
   * id: _43510
   */
  if(args.Length() == 0) {
    

    bool returnVal = self->CanCut();

    return scope.Close(v8::Boolean::New(returnVal));
  }
  

  std::ostringstream errStr;
  errStr << "Could not find matching method for arguments (method name: wxWebView::CanCut).\n";
  errStr << "  arg count: " << args.Length() << "\n";
  for(int i = 0; i < args.Length(); i++) {
    v8::String::AsciiValue argStr(args[i]);
    errStr << "  arg[" << i << "]: " << *argStr << "\n";
  }
  return v8::ThrowException(v8::Exception::TypeError(v8::String::New(errStr.str().c_str())));
}

/*static*/ v8::Handle<v8::Value> wxNode_wxWebView::_CanCopy(const v8::Arguments& args) {
  v8::HandleScope scope;
  wxNode_wxWebView* self = unwrap<wxNode_wxWebView>(args.This());

  
  /*
   * id: _43511
   */
  if(args.Length() == 0) {
    

    bool returnVal = self->CanCopy();

    return scope.Close(v8::Boolean::New(returnVal));
  }
  

  std::ostringstream errStr;
  errStr << "Could not find matching method for arguments (method name: wxWebView::CanCopy).\n";
  errStr << "  arg count: " << args.Length() << "\n";
  for(int i = 0; i < args.Length(); i++) {
    v8::String::AsciiValue argStr(args[i]);
    errStr << "  arg[" << i << "]: " << *argStr << "\n";
  }
  return v8::ThrowException(v8::Exception::TypeError(v8::String::New(errStr.str().c_str())));
}

/*static*/ v8::Handle<v8::Value> wxNode_wxWebView::_CanPaste(const v8::Arguments& args) {
  v8::HandleScope scope;
  wxNode_wxWebView* self = unwrap<wxNode_wxWebView>(args.This());

  
  /*
   * id: _43512
   */
  if(args.Length() == 0) {
    

    bool returnVal = self->CanPaste();

    return scope.Close(v8::Boolean::New(returnVal));
  }
  

  std::ostringstream errStr;
  errStr << "Could not find matching method for arguments (method name: wxWebView::CanPaste).\n";
  errStr << "  arg count: " << args.Length() << "\n";
  for(int i = 0; i < args.Length(); i++) {
    v8::String::AsciiValue argStr(args[i]);
    errStr << "  arg[" << i << "]: " << *argStr << "\n";
  }
  return v8::ThrowException(v8::Exception::TypeError(v8::String::New(errStr.str().c_str())));
}

/*static*/ v8::Handle<v8::Value> wxNode_wxWebView::_Cut(const v8::Arguments& args) {
  v8::HandleScope scope;
  wxNode_wxWebView* self = unwrap<wxNode_wxWebView>(args.This());

  
  /*
   * id: _43513
   */
  if(args.Length() == 0) {
    

    self->Cut();

    return v8::Undefined();
  }
  

  std::ostringstream errStr;
  errStr << "Could not find matching method for arguments (method name: wxWebView::Cut).\n";
  errStr << "  arg count: " << args.Length() << "\n";
  for(int i = 0; i < args.Length(); i++) {
    v8::String::AsciiValue argStr(args[i]);
    errStr << "  arg[" << i << "]: " << *argStr << "\n";
  }
  return v8::ThrowException(v8::Exception::TypeError(v8::String::New(errStr.str().c_str())));
}

/*static*/ v8::Handle<v8::Value> wxNode_wxWebView::_Copy(const v8::Arguments& args) {
  v8::HandleScope scope;
  wxNode_wxWebView* self = unwrap<wxNode_wxWebView>(args.This());

  
  /*
   * id: _43514
   */
  if(args.Length() == 0) {
    

    self->Copy();

    return v8::Undefined();
  }
  

  std::ostringstream errStr;
  errStr << "Could not find matching method for arguments (method name: wxWebView::Copy).\n";
  errStr << "  arg count: " << args.Length() << "\n";
  for(int i = 0; i < args.Length(); i++) {
    v8::String::AsciiValue argStr(args[i]);
    errStr << "  arg[" << i << "]: " << *argStr << "\n";
  }
  return v8::ThrowException(v8::Exception::TypeError(v8::String::New(errStr.str().c_str())));
}

/*static*/ v8::Handle<v8::Value> wxNode_wxWebView::_Paste(const v8::Arguments& args) {
  v8::HandleScope scope;
  wxNode_wxWebView* self = unwrap<wxNode_wxWebView>(args.This());

  
  /*
   * id: _43515
   */
  if(args.Length() == 0) {
    

    self->Paste();

    return v8::Undefined();
  }
  

  std::ostringstream errStr;
  errStr << "Could not find matching method for arguments (method name: wxWebView::Paste).\n";
  errStr << "  arg count: " << args.Length() << "\n";
  for(int i = 0; i < args.Length(); i++) {
    v8::String::AsciiValue argStr(args[i]);
    errStr << "  arg[" << i << "]: " << *argStr << "\n";
  }
  return v8::ThrowException(v8::Exception::TypeError(v8::String::New(errStr.str().c_str())));
}

/*static*/ v8::Handle<v8::Value> wxNode_wxWebView::_CanUndo(const v8::Arguments& args) {
  v8::HandleScope scope;
  wxNode_wxWebView* self = unwrap<wxNode_wxWebView>(args.This());

  
  /*
   * id: _43516
   */
  if(args.Length() == 0) {
    

    bool returnVal = self->CanUndo();

    return scope.Close(v8::Boolean::New(returnVal));
  }
  

  std::ostringstream errStr;
  errStr << "Could not find matching method for arguments (method name: wxWebView::CanUndo).\n";
  errStr << "  arg count: " << args.Length() << "\n";
  for(int i = 0; i < args.Length(); i++) {
    v8::String::AsciiValue argStr(args[i]);
    errStr << "  arg[" << i << "]: " << *argStr << "\n";
  }
  return v8::ThrowException(v8::Exception::TypeError(v8::String::New(errStr.str().c_str())));
}

/*static*/ v8::Handle<v8::Value> wxNode_wxWebView::_CanRedo(const v8::Arguments& args) {
  v8::HandleScope scope;
  wxNode_wxWebView* self = unwrap<wxNode_wxWebView>(args.This());

  
  /*
   * id: _43517
   */
  if(args.Length() == 0) {
    

    bool returnVal = self->CanRedo();

    return scope.Close(v8::Boolean::New(returnVal));
  }
  

  std::ostringstream errStr;
  errStr << "Could not find matching method for arguments (method name: wxWebView::CanRedo).\n";
  errStr << "  arg count: " << args.Length() << "\n";
  for(int i = 0; i < args.Length(); i++) {
    v8::String::AsciiValue argStr(args[i]);
    errStr << "  arg[" << i << "]: " << *argStr << "\n";
  }
  return v8::ThrowException(v8::Exception::TypeError(v8::String::New(errStr.str().c_str())));
}

/*static*/ v8::Handle<v8::Value> wxNode_wxWebView::_Undo(const v8::Arguments& args) {
  v8::HandleScope scope;
  wxNode_wxWebView* self = unwrap<wxNode_wxWebView>(args.This());

  
  /*
   * id: _43518
   */
  if(args.Length() == 0) {
    

    self->Undo();

    return v8::Undefined();
  }
  

  std::ostringstream errStr;
  errStr << "Could not find matching method for arguments (method name: wxWebView::Undo).\n";
  errStr << "  arg count: " << args.Length() << "\n";
  for(int i = 0; i < args.Length(); i++) {
    v8::String::AsciiValue argStr(args[i]);
    errStr << "  arg[" << i << "]: " << *argStr << "\n";
  }
  return v8::ThrowException(v8::Exception::TypeError(v8::String::New(errStr.str().c_str())));
}

/*static*/ v8::Handle<v8::Value> wxNode_wxWebView::_Redo(const v8::Arguments& args) {
  v8::HandleScope scope;
  wxNode_wxWebView* self = unwrap<wxNode_wxWebView>(args.This());

  
  /*
   * id: _43519
   */
  if(args.Length() == 0) {
    

    self->Redo();

    return v8::Undefined();
  }
  

  std::ostringstream errStr;
  errStr << "Could not find matching method for arguments (method name: wxWebView::Redo).\n";
  errStr << "  arg count: " << args.Length() << "\n";
  for(int i = 0; i < args.Length(); i++) {
    v8::String::AsciiValue argStr(args[i]);
    errStr << "  arg[" << i << "]: " << *argStr << "\n";
  }
  return v8::ThrowException(v8::Exception::TypeError(v8::String::New(errStr.str().c_str())));
}

/*static*/ v8::Handle<v8::Value> wxNode_wxWebView::_GetClassInfo(const v8::Arguments& args) {
  v8::HandleScope scope;
  wxNode_wxWebView* self = unwrap<wxNode_wxWebView>(args.This());

  
  /*
   * id: _43520
   */
  if(args.Length() == 0) {
    

    wxClassInfo* returnVal = self->GetClassInfo();

    return scope.Close(wxNode_wxClassInfo::New(returnVal));
  }
  

  std::ostringstream errStr;
  errStr << "Could not find matching method for arguments (method name: wxWebView::GetClassInfo).\n";
  errStr << "  arg count: " << args.Length() << "\n";
  for(int i = 0; i < args.Length(); i++) {
    v8::String::AsciiValue argStr(args[i]);
    errStr << "  arg[" << i << "]: " << *argStr << "\n";
  }
  return v8::ThrowException(v8::Exception::TypeError(v8::String::New(errStr.str().c_str())));
}

