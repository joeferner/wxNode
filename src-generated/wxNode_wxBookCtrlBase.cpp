
#include <sstream>
#include "wxNode_wxBookCtrlBase.h"
#include "wxNode_wxEvtHandler.h"
#include "wxNode_wxControl.h"
#include "wxNode_wxWindow.h"
#include "wxNode_wxPoint.h"
#include "wxNode_wxSize.h"
#include "wxNode_wxSizer.h"
#include "wxNode_wxClassInfo.h"


/* static */ v8::Persistent<v8::FunctionTemplate> wxNode_wxBookCtrlBase::s_ct;




/*static*/ void wxNode_wxBookCtrlBase::Init(v8::Handle<v8::Object> target) {
  v8::HandleScope scope;

  v8::Local<v8::FunctionTemplate> t = v8::FunctionTemplate::New(wxNodeObject::NewFunc);
  s_ct = v8::Persistent<v8::FunctionTemplate>::New(t);
  s_ct->InstanceTemplate()->SetInternalFieldCount(2);
  s_ct->SetClassName(v8::String::NewSymbol("wxBookCtrlBase"));

  NODE_SET_PROTOTYPE_METHOD(s_ct, "init", _init);
  AddMethods(s_ct);

  target->Set(v8::String::NewSymbol("wxBookCtrlBase"), s_ct->GetFunction());
}

/*static*/ void wxNode_wxBookCtrlBase::AddMethods(v8::Handle<v8::FunctionTemplate> target) {
  wxNode_wxControl::AddMethods(target);
  NODE_SET_PROTOTYPE_METHOD(target, "create", _Create);
  NODE_SET_PROTOTYPE_METHOD(target, "getPageCount", _GetPageCount);
  NODE_SET_PROTOTYPE_METHOD(target, "getPage", _GetPage);
  NODE_SET_PROTOTYPE_METHOD(target, "getCurrentPage", _GetCurrentPage);
  NODE_SET_PROTOTYPE_METHOD(target, "getSelection", _GetSelection);
  NODE_SET_PROTOTYPE_METHOD(target, "setPageText", _SetPageText);
  NODE_SET_PROTOTYPE_METHOD(target, "getPageText", _GetPageText);
  NODE_SET_PROTOTYPE_METHOD(target, "getPageImage", _GetPageImage);
  NODE_SET_PROTOTYPE_METHOD(target, "setPageImage", _SetPageImage);
  NODE_SET_PROTOTYPE_METHOD(target, "setPageSize", _SetPageSize);
  NODE_SET_PROTOTYPE_METHOD(target, "getControllerSize", _GetControllerSize);
  NODE_SET_PROTOTYPE_METHOD(target, "calcSizeFromPage", _CalcSizeFromPage);
  NODE_SET_PROTOTYPE_METHOD(target, "getInternalBorder", _GetInternalBorder);
  NODE_SET_PROTOTYPE_METHOD(target, "setInternalBorder", _SetInternalBorder);
  NODE_SET_PROTOTYPE_METHOD(target, "setControlMargin", _SetControlMargin);
  NODE_SET_PROTOTYPE_METHOD(target, "getControlMargin", _GetControlMargin);
  NODE_SET_PROTOTYPE_METHOD(target, "isVertical", _IsVertical);
  NODE_SET_PROTOTYPE_METHOD(target, "setFitToCurrentPage", _SetFitToCurrentPage);
  NODE_SET_PROTOTYPE_METHOD(target, "getFitToCurrentPage", _GetFitToCurrentPage);
  NODE_SET_PROTOTYPE_METHOD(target, "getControlSizer", _GetControlSizer);
  NODE_SET_PROTOTYPE_METHOD(target, "deletePage", _DeletePage);
  NODE_SET_PROTOTYPE_METHOD(target, "removePage", _RemovePage);
  NODE_SET_PROTOTYPE_METHOD(target, "deleteAllPages", _DeleteAllPages);
  NODE_SET_PROTOTYPE_METHOD(target, "addPage", _AddPage);
  NODE_SET_PROTOTYPE_METHOD(target, "insertPage", _InsertPage);
  NODE_SET_PROTOTYPE_METHOD(target, "setSelection", _SetSelection);
  NODE_SET_PROTOTYPE_METHOD(target, "changeSelection", _ChangeSelection);
  NODE_SET_PROTOTYPE_METHOD(target, "advanceSelection", _AdvanceSelection);
  NODE_SET_PROTOTYPE_METHOD(target, "hitTest", _HitTest);
  NODE_SET_PROTOTYPE_METHOD(target, "hasMultiplePages", _HasMultiplePages);
  NODE_SET_PROTOTYPE_METHOD(target, "acceptsFocus", _AcceptsFocus);
  NODE_SET_PROTOTYPE_METHOD(target, "canApplyThemeBorder", _CanApplyThemeBorder);
  NODE_SET_PROTOTYPE_METHOD(target, "getClassInfo", _GetClassInfo);
  
}

/*static*/ bool wxNode_wxBookCtrlBase::AssignableFrom(const v8::Handle<v8::String>& className) {
  v8::String::AsciiValue classNameStr(className);
  return AssignableFrom(*classNameStr);
}

/*static*/ bool wxNode_wxBookCtrlBase::AssignableFrom(const char* className) {
  if(!strcmp("wxBookCtrlBase", className)) { return true; }
  
  if(!strcmp("wxToolbook", className)) { return true; }
  if(!strcmp("wxNavigationEnabled<wxBookCtrlBase>", className)) { return true; }

  if(!strcmp("wxAuiNotebook", className)) { return true; }

  if(!strcmp("wxAuiMDIClientWindow", className)) { return true; }
  if(!strcmp("wxChoicebook", className)) { return true; }
  if(!strcmp("wxNotebookBase", className)) { return true; }

  if(!strcmp("wxNotebook", className)) { return true; }
  if(!strcmp("wxTreebook", className)) { return true; }
  if(!strcmp("wxListbook", className)) { return true; }


  return false;
}

/*static*/ v8::Handle<v8::Value> wxNode_wxBookCtrlBase::_init(const v8::Arguments& args) {
  v8::HandleScope scope;

  

  std::ostringstream errStr;
  errStr << "Could not find matching constructor for arguments (class name: wxBookCtrlBase).\n";                           \
  errStr << "  arg count: " << args.Length() << "\n";
  for(int i = 0; i < args.Length(); i++) {
    v8::String::AsciiValue argStr(args[i]);
    errStr << "  arg[" << i << "]: " << *argStr << "\n";
  }
  return v8::ThrowException(v8::Exception::TypeError(v8::String::New(errStr.str().c_str())));
}


/*static*/ v8::Handle<v8::Value> wxNode_wxBookCtrlBase::_Create(const v8::Arguments& args) {
  v8::HandleScope scope;
  wxNode_wxBookCtrlBase* self = unwrap<wxNode_wxBookCtrlBase>(args.This());

  
  /*
   * id: _28588
   */
  if(args.Length() == 6 && (args[0]->IsNull() || (args[0]->IsObject() && wxNode_wxWindow::AssignableFrom(args[0]->ToObject()->GetConstructorName()))) && args[1]->IsNumber() && (args[2]->IsNull() || (args[2]->IsObject() && wxNode_wxPoint::AssignableFrom(args[2]->ToObject()->GetConstructorName()))) && (args[3]->IsNull() || (args[3]->IsObject() && wxNode_wxSize::AssignableFrom(args[3]->ToObject()->GetConstructorName()))) && args[4]->IsNumber() && args[5]->IsString()) {
    wxNode_wxWindow* parent = args[0]->IsNull() ? NULL : wxNodeObject::unwrap<wxNode_wxWindow>(args[0]->ToObject()); /* type: _993 * */
    int winid = (int)args[1]->ToInt32()->Value(); /* type: _8633  */
    wxNode_wxPoint* pos = args[2]->IsNull() ? NULL : wxNodeObject::unwrap<wxNode_wxPoint>(args[2]->ToObject()); /* type: _20412  */
    wxNode_wxSize* size = args[3]->IsNull() ? NULL : wxNodeObject::unwrap<wxNode_wxSize>(args[3]->ToObject()); /* type: _20522  */
    long int style = (long int)args[4]->ToInt32()->Value(); /* type: _586  */
    v8::String::AsciiValue name(args[5]->ToString()); /* type: _14808  */
    

    bool returnVal = self->Create(parent, winid, *pos, *size, style, *name);

    return scope.Close(v8::Boolean::New(returnVal));
  }
  
  /*
   * id: _28588
   */
  if(args.Length() == 5 && (args[0]->IsNull() || (args[0]->IsObject() && wxNode_wxWindow::AssignableFrom(args[0]->ToObject()->GetConstructorName()))) && args[1]->IsNumber() && (args[2]->IsNull() || (args[2]->IsObject() && wxNode_wxPoint::AssignableFrom(args[2]->ToObject()->GetConstructorName()))) && (args[3]->IsNull() || (args[3]->IsObject() && wxNode_wxSize::AssignableFrom(args[3]->ToObject()->GetConstructorName()))) && args[4]->IsNumber()) {
    wxNode_wxWindow* parent = args[0]->IsNull() ? NULL : wxNodeObject::unwrap<wxNode_wxWindow>(args[0]->ToObject()); /* type: _993 * */
    int winid = (int)args[1]->ToInt32()->Value(); /* type: _8633  */
    wxNode_wxPoint* pos = args[2]->IsNull() ? NULL : wxNodeObject::unwrap<wxNode_wxPoint>(args[2]->ToObject()); /* type: _20412  */
    wxNode_wxSize* size = args[3]->IsNull() ? NULL : wxNodeObject::unwrap<wxNode_wxSize>(args[3]->ToObject()); /* type: _20522  */
    long int style = (long int)args[4]->ToInt32()->Value(); /* type: _586  */
    

    bool returnVal = self->Create(parent, winid, *pos, *size, style);

    return scope.Close(v8::Boolean::New(returnVal));
  }
  
  /*
   * id: _28588
   */
  if(args.Length() == 4 && (args[0]->IsNull() || (args[0]->IsObject() && wxNode_wxWindow::AssignableFrom(args[0]->ToObject()->GetConstructorName()))) && args[1]->IsNumber() && (args[2]->IsNull() || (args[2]->IsObject() && wxNode_wxPoint::AssignableFrom(args[2]->ToObject()->GetConstructorName()))) && (args[3]->IsNull() || (args[3]->IsObject() && wxNode_wxSize::AssignableFrom(args[3]->ToObject()->GetConstructorName())))) {
    wxNode_wxWindow* parent = args[0]->IsNull() ? NULL : wxNodeObject::unwrap<wxNode_wxWindow>(args[0]->ToObject()); /* type: _993 * */
    int winid = (int)args[1]->ToInt32()->Value(); /* type: _8633  */
    wxNode_wxPoint* pos = args[2]->IsNull() ? NULL : wxNodeObject::unwrap<wxNode_wxPoint>(args[2]->ToObject()); /* type: _20412  */
    wxNode_wxSize* size = args[3]->IsNull() ? NULL : wxNodeObject::unwrap<wxNode_wxSize>(args[3]->ToObject()); /* type: _20522  */
    

    bool returnVal = self->Create(parent, winid, *pos, *size);

    return scope.Close(v8::Boolean::New(returnVal));
  }
  
  /*
   * id: _28588
   */
  if(args.Length() == 3 && (args[0]->IsNull() || (args[0]->IsObject() && wxNode_wxWindow::AssignableFrom(args[0]->ToObject()->GetConstructorName()))) && args[1]->IsNumber() && (args[2]->IsNull() || (args[2]->IsObject() && wxNode_wxPoint::AssignableFrom(args[2]->ToObject()->GetConstructorName())))) {
    wxNode_wxWindow* parent = args[0]->IsNull() ? NULL : wxNodeObject::unwrap<wxNode_wxWindow>(args[0]->ToObject()); /* type: _993 * */
    int winid = (int)args[1]->ToInt32()->Value(); /* type: _8633  */
    wxNode_wxPoint* pos = args[2]->IsNull() ? NULL : wxNodeObject::unwrap<wxNode_wxPoint>(args[2]->ToObject()); /* type: _20412  */
    

    bool returnVal = self->Create(parent, winid, *pos);

    return scope.Close(v8::Boolean::New(returnVal));
  }
  
  /*
   * id: _28588
   */
  if(args.Length() == 2 && (args[0]->IsNull() || (args[0]->IsObject() && wxNode_wxWindow::AssignableFrom(args[0]->ToObject()->GetConstructorName()))) && args[1]->IsNumber()) {
    wxNode_wxWindow* parent = args[0]->IsNull() ? NULL : wxNodeObject::unwrap<wxNode_wxWindow>(args[0]->ToObject()); /* type: _993 * */
    int winid = (int)args[1]->ToInt32()->Value(); /* type: _8633  */
    

    bool returnVal = self->Create(parent, winid);

    return scope.Close(v8::Boolean::New(returnVal));
  }
  

  std::ostringstream errStr;
  errStr << "Could not find matching method for arguments (method name: wxBookCtrlBase::Create).\n";                           \
  errStr << "  arg count: " << args.Length() << "\n";
  for(int i = 0; i < args.Length(); i++) {
    v8::String::AsciiValue argStr(args[i]);
    errStr << "  arg[" << i << "]: " << *argStr << "\n";
  }
  return v8::ThrowException(v8::Exception::TypeError(v8::String::New(errStr.str().c_str())));
}

/*static*/ v8::Handle<v8::Value> wxNode_wxBookCtrlBase::_GetPageCount(const v8::Arguments& args) {
  v8::HandleScope scope;
  wxNode_wxBookCtrlBase* self = unwrap<wxNode_wxBookCtrlBase>(args.This());

  
  /*
   * id: _28589
   */
  if(args.Length() == 0) {
    

    int returnVal = self->GetPageCount();

    return scope.Close(v8::Number::New(returnVal));
  }
  

  std::ostringstream errStr;
  errStr << "Could not find matching method for arguments (method name: wxBookCtrlBase::GetPageCount).\n";                           \
  errStr << "  arg count: " << args.Length() << "\n";
  for(int i = 0; i < args.Length(); i++) {
    v8::String::AsciiValue argStr(args[i]);
    errStr << "  arg[" << i << "]: " << *argStr << "\n";
  }
  return v8::ThrowException(v8::Exception::TypeError(v8::String::New(errStr.str().c_str())));
}

/*static*/ v8::Handle<v8::Value> wxNode_wxBookCtrlBase::_GetPage(const v8::Arguments& args) {
  v8::HandleScope scope;
  wxNode_wxBookCtrlBase* self = unwrap<wxNode_wxBookCtrlBase>(args.This());

  
  /*
   * id: _28590
   */
  if(args.Length() == 1 && args[0]->IsNumber()) {
    unsigned int n = (unsigned int)args[0]->ToInt32()->Value(); /* type: _8620  */
    

    wxWindow* returnVal = self->GetPage(n);

    
    v8::Local<v8::FunctionTemplate> returnObjFt = v8::FunctionTemplate::New(wxNodeObject::NewFunc);
    returnObjFt->InstanceTemplate()->SetInternalFieldCount(2);
    returnObjFt->SetClassName(v8::String::NewSymbol("wxWindow"));
    wxNode_wxWindow::AddMethods(returnObjFt);
    v8::Local<v8::Function> returnObjFn = returnObjFt->GetFunction();
    v8::Handle<v8::Value> returnObjArgs[0];
    v8::Local<v8::Object> returnObj = returnObjFn->CallAsConstructor(0, returnObjArgs)->ToObject();
    returnObj->SetPointerInInternalField(0, returnVal);
    returnObj->SetPointerInInternalField(1, new NodeExEvtHandlerImplWrap(returnObj));
    return scope.Close(returnObj);
  }
  

  std::ostringstream errStr;
  errStr << "Could not find matching method for arguments (method name: wxBookCtrlBase::GetPage).\n";                           \
  errStr << "  arg count: " << args.Length() << "\n";
  for(int i = 0; i < args.Length(); i++) {
    v8::String::AsciiValue argStr(args[i]);
    errStr << "  arg[" << i << "]: " << *argStr << "\n";
  }
  return v8::ThrowException(v8::Exception::TypeError(v8::String::New(errStr.str().c_str())));
}

/*static*/ v8::Handle<v8::Value> wxNode_wxBookCtrlBase::_GetCurrentPage(const v8::Arguments& args) {
  v8::HandleScope scope;
  wxNode_wxBookCtrlBase* self = unwrap<wxNode_wxBookCtrlBase>(args.This());

  
  /*
   * id: _28591
   */
  if(args.Length() == 0) {
    

    wxWindow* returnVal = self->GetCurrentPage();

    
    v8::Local<v8::FunctionTemplate> returnObjFt = v8::FunctionTemplate::New(wxNodeObject::NewFunc);
    returnObjFt->InstanceTemplate()->SetInternalFieldCount(2);
    returnObjFt->SetClassName(v8::String::NewSymbol("wxWindow"));
    wxNode_wxWindow::AddMethods(returnObjFt);
    v8::Local<v8::Function> returnObjFn = returnObjFt->GetFunction();
    v8::Handle<v8::Value> returnObjArgs[0];
    v8::Local<v8::Object> returnObj = returnObjFn->CallAsConstructor(0, returnObjArgs)->ToObject();
    returnObj->SetPointerInInternalField(0, returnVal);
    returnObj->SetPointerInInternalField(1, new NodeExEvtHandlerImplWrap(returnObj));
    return scope.Close(returnObj);
  }
  

  std::ostringstream errStr;
  errStr << "Could not find matching method for arguments (method name: wxBookCtrlBase::GetCurrentPage).\n";                           \
  errStr << "  arg count: " << args.Length() << "\n";
  for(int i = 0; i < args.Length(); i++) {
    v8::String::AsciiValue argStr(args[i]);
    errStr << "  arg[" << i << "]: " << *argStr << "\n";
  }
  return v8::ThrowException(v8::Exception::TypeError(v8::String::New(errStr.str().c_str())));
}

/*static*/ v8::Handle<v8::Value> wxNode_wxBookCtrlBase::_GetSelection(const v8::Arguments& args) {
  v8::HandleScope scope;
  wxNode_wxBookCtrlBase* self = unwrap<wxNode_wxBookCtrlBase>(args.This());

  
  /*
   * id: _28592
   */
  if(args.Length() == 0) {
    

    int returnVal = self->GetSelection();

    return scope.Close(v8::Number::New(returnVal));
  }
  

  std::ostringstream errStr;
  errStr << "Could not find matching method for arguments (method name: wxBookCtrlBase::GetSelection).\n";                           \
  errStr << "  arg count: " << args.Length() << "\n";
  for(int i = 0; i < args.Length(); i++) {
    v8::String::AsciiValue argStr(args[i]);
    errStr << "  arg[" << i << "]: " << *argStr << "\n";
  }
  return v8::ThrowException(v8::Exception::TypeError(v8::String::New(errStr.str().c_str())));
}

/*static*/ v8::Handle<v8::Value> wxNode_wxBookCtrlBase::_SetPageText(const v8::Arguments& args) {
  v8::HandleScope scope;
  wxNode_wxBookCtrlBase* self = unwrap<wxNode_wxBookCtrlBase>(args.This());

  
  /*
   * id: _28593
   */
  if(args.Length() == 2 && args[0]->IsNumber() && args[1]->IsString()) {
    unsigned int n = (unsigned int)args[0]->ToInt32()->Value(); /* type: _8620  */
    v8::String::AsciiValue strText(args[1]->ToString()); /* type: _14808  */
    

    bool returnVal = self->SetPageText(n, *strText);

    return scope.Close(v8::Boolean::New(returnVal));
  }
  

  std::ostringstream errStr;
  errStr << "Could not find matching method for arguments (method name: wxBookCtrlBase::SetPageText).\n";                           \
  errStr << "  arg count: " << args.Length() << "\n";
  for(int i = 0; i < args.Length(); i++) {
    v8::String::AsciiValue argStr(args[i]);
    errStr << "  arg[" << i << "]: " << *argStr << "\n";
  }
  return v8::ThrowException(v8::Exception::TypeError(v8::String::New(errStr.str().c_str())));
}

/*static*/ v8::Handle<v8::Value> wxNode_wxBookCtrlBase::_GetPageText(const v8::Arguments& args) {
  v8::HandleScope scope;
  wxNode_wxBookCtrlBase* self = unwrap<wxNode_wxBookCtrlBase>(args.This());

  
  /*
   * id: _28594
   */
  if(args.Length() == 1 && args[0]->IsNumber()) {
    unsigned int n = (unsigned int)args[0]->ToInt32()->Value(); /* type: _8620  */
    

    wxString returnVal = self->GetPageText(n);

    return scope.Close(v8::String::New(returnVal));
  }
  

  std::ostringstream errStr;
  errStr << "Could not find matching method for arguments (method name: wxBookCtrlBase::GetPageText).\n";                           \
  errStr << "  arg count: " << args.Length() << "\n";
  for(int i = 0; i < args.Length(); i++) {
    v8::String::AsciiValue argStr(args[i]);
    errStr << "  arg[" << i << "]: " << *argStr << "\n";
  }
  return v8::ThrowException(v8::Exception::TypeError(v8::String::New(errStr.str().c_str())));
}

/*static*/ v8::Handle<v8::Value> wxNode_wxBookCtrlBase::_GetPageImage(const v8::Arguments& args) {
  v8::HandleScope scope;
  wxNode_wxBookCtrlBase* self = unwrap<wxNode_wxBookCtrlBase>(args.This());

  
  /*
   * id: _28595
   */
  if(args.Length() == 1 && args[0]->IsNumber()) {
    unsigned int n = (unsigned int)args[0]->ToInt32()->Value(); /* type: _8620  */
    

    int returnVal = self->GetPageImage(n);

    return scope.Close(v8::Number::New(returnVal));
  }
  

  std::ostringstream errStr;
  errStr << "Could not find matching method for arguments (method name: wxBookCtrlBase::GetPageImage).\n";                           \
  errStr << "  arg count: " << args.Length() << "\n";
  for(int i = 0; i < args.Length(); i++) {
    v8::String::AsciiValue argStr(args[i]);
    errStr << "  arg[" << i << "]: " << *argStr << "\n";
  }
  return v8::ThrowException(v8::Exception::TypeError(v8::String::New(errStr.str().c_str())));
}

/*static*/ v8::Handle<v8::Value> wxNode_wxBookCtrlBase::_SetPageImage(const v8::Arguments& args) {
  v8::HandleScope scope;
  wxNode_wxBookCtrlBase* self = unwrap<wxNode_wxBookCtrlBase>(args.This());

  
  /*
   * id: _28596
   */
  if(args.Length() == 2 && args[0]->IsNumber() && args[1]->IsNumber()) {
    unsigned int n = (unsigned int)args[0]->ToInt32()->Value(); /* type: _8620  */
    int imageId = (int)args[1]->ToInt32()->Value(); /* type: _162  */
    

    bool returnVal = self->SetPageImage(n, imageId);

    return scope.Close(v8::Boolean::New(returnVal));
  }
  

  std::ostringstream errStr;
  errStr << "Could not find matching method for arguments (method name: wxBookCtrlBase::SetPageImage).\n";                           \
  errStr << "  arg count: " << args.Length() << "\n";
  for(int i = 0; i < args.Length(); i++) {
    v8::String::AsciiValue argStr(args[i]);
    errStr << "  arg[" << i << "]: " << *argStr << "\n";
  }
  return v8::ThrowException(v8::Exception::TypeError(v8::String::New(errStr.str().c_str())));
}

/*static*/ v8::Handle<v8::Value> wxNode_wxBookCtrlBase::_SetPageSize(const v8::Arguments& args) {
  v8::HandleScope scope;
  wxNode_wxBookCtrlBase* self = unwrap<wxNode_wxBookCtrlBase>(args.This());

  
  /*
   * id: _28597
   */
  if(args.Length() == 1 && (args[0]->IsNull() || (args[0]->IsObject() && wxNode_wxSize::AssignableFrom(args[0]->ToObject()->GetConstructorName())))) {
    wxNode_wxSize* size = args[0]->IsNull() ? NULL : wxNodeObject::unwrap<wxNode_wxSize>(args[0]->ToObject()); /* type: _20522  */
    

    self->SetPageSize(*size);

    return v8::Undefined();
  }
  

  std::ostringstream errStr;
  errStr << "Could not find matching method for arguments (method name: wxBookCtrlBase::SetPageSize).\n";                           \
  errStr << "  arg count: " << args.Length() << "\n";
  for(int i = 0; i < args.Length(); i++) {
    v8::String::AsciiValue argStr(args[i]);
    errStr << "  arg[" << i << "]: " << *argStr << "\n";
  }
  return v8::ThrowException(v8::Exception::TypeError(v8::String::New(errStr.str().c_str())));
}

/*static*/ v8::Handle<v8::Value> wxNode_wxBookCtrlBase::_GetControllerSize(const v8::Arguments& args) {
  v8::HandleScope scope;
  wxNode_wxBookCtrlBase* self = unwrap<wxNode_wxBookCtrlBase>(args.This());

  
  /*
   * id: _28598
   */
  if(args.Length() == 0) {
    

    wxSize returnValTemp = self->GetControllerSize();

    wxNode_wxSize* returnVal = new wxNode_wxSize();
    memcpy(dynamic_cast<wxSize*>(returnVal), &returnValTemp, sizeof(wxSize));
    v8::Local<v8::FunctionTemplate> returnObjFt = v8::FunctionTemplate::New(wxNodeObject::NewFunc);
    returnObjFt->InstanceTemplate()->SetInternalFieldCount(2);
    returnObjFt->SetClassName(v8::String::NewSymbol("wxSize"));
    wxNode_wxSize::AddMethods(returnObjFt);
    v8::Local<v8::Function> returnObjFn = returnObjFt->GetFunction();
    v8::Handle<v8::Value> returnObjArgs[0];
    v8::Local<v8::Object> returnObj = returnObjFn->CallAsConstructor(0, returnObjArgs)->ToObject();
    returnObj->SetPointerInInternalField(0, returnVal);
    returnObj->SetPointerInInternalField(1, new NodeExEvtHandlerImplWrap(returnObj));
    return scope.Close(returnObj);
  }
  

  std::ostringstream errStr;
  errStr << "Could not find matching method for arguments (method name: wxBookCtrlBase::GetControllerSize).\n";                           \
  errStr << "  arg count: " << args.Length() << "\n";
  for(int i = 0; i < args.Length(); i++) {
    v8::String::AsciiValue argStr(args[i]);
    errStr << "  arg[" << i << "]: " << *argStr << "\n";
  }
  return v8::ThrowException(v8::Exception::TypeError(v8::String::New(errStr.str().c_str())));
}

/*static*/ v8::Handle<v8::Value> wxNode_wxBookCtrlBase::_CalcSizeFromPage(const v8::Arguments& args) {
  v8::HandleScope scope;
  wxNode_wxBookCtrlBase* self = unwrap<wxNode_wxBookCtrlBase>(args.This());

  
  /*
   * id: _28599
   */
  if(args.Length() == 1 && (args[0]->IsNull() || (args[0]->IsObject() && wxNode_wxSize::AssignableFrom(args[0]->ToObject()->GetConstructorName())))) {
    wxNode_wxSize* sizePage = args[0]->IsNull() ? NULL : wxNodeObject::unwrap<wxNode_wxSize>(args[0]->ToObject()); /* type: _20522  */
    

    wxSize returnValTemp = self->CalcSizeFromPage(*sizePage);

    wxNode_wxSize* returnVal = new wxNode_wxSize();
    memcpy(dynamic_cast<wxSize*>(returnVal), &returnValTemp, sizeof(wxSize));
    v8::Local<v8::FunctionTemplate> returnObjFt = v8::FunctionTemplate::New(wxNodeObject::NewFunc);
    returnObjFt->InstanceTemplate()->SetInternalFieldCount(2);
    returnObjFt->SetClassName(v8::String::NewSymbol("wxSize"));
    wxNode_wxSize::AddMethods(returnObjFt);
    v8::Local<v8::Function> returnObjFn = returnObjFt->GetFunction();
    v8::Handle<v8::Value> returnObjArgs[0];
    v8::Local<v8::Object> returnObj = returnObjFn->CallAsConstructor(0, returnObjArgs)->ToObject();
    returnObj->SetPointerInInternalField(0, returnVal);
    returnObj->SetPointerInInternalField(1, new NodeExEvtHandlerImplWrap(returnObj));
    return scope.Close(returnObj);
  }
  

  std::ostringstream errStr;
  errStr << "Could not find matching method for arguments (method name: wxBookCtrlBase::CalcSizeFromPage).\n";                           \
  errStr << "  arg count: " << args.Length() << "\n";
  for(int i = 0; i < args.Length(); i++) {
    v8::String::AsciiValue argStr(args[i]);
    errStr << "  arg[" << i << "]: " << *argStr << "\n";
  }
  return v8::ThrowException(v8::Exception::TypeError(v8::String::New(errStr.str().c_str())));
}

/*static*/ v8::Handle<v8::Value> wxNode_wxBookCtrlBase::_GetInternalBorder(const v8::Arguments& args) {
  v8::HandleScope scope;
  wxNode_wxBookCtrlBase* self = unwrap<wxNode_wxBookCtrlBase>(args.This());

  
  /*
   * id: _28600
   */
  if(args.Length() == 0) {
    

    int returnVal = self->GetInternalBorder();

    return scope.Close(v8::Number::New(returnVal));
  }
  

  std::ostringstream errStr;
  errStr << "Could not find matching method for arguments (method name: wxBookCtrlBase::GetInternalBorder).\n";                           \
  errStr << "  arg count: " << args.Length() << "\n";
  for(int i = 0; i < args.Length(); i++) {
    v8::String::AsciiValue argStr(args[i]);
    errStr << "  arg[" << i << "]: " << *argStr << "\n";
  }
  return v8::ThrowException(v8::Exception::TypeError(v8::String::New(errStr.str().c_str())));
}

/*static*/ v8::Handle<v8::Value> wxNode_wxBookCtrlBase::_SetInternalBorder(const v8::Arguments& args) {
  v8::HandleScope scope;
  wxNode_wxBookCtrlBase* self = unwrap<wxNode_wxBookCtrlBase>(args.This());

  
  /*
   * id: _28601
   */
  if(args.Length() == 1 && args[0]->IsNumber()) {
    unsigned int border = (unsigned int)args[0]->ToInt32()->Value(); /* type: _43  */
    

    self->SetInternalBorder(border);

    return v8::Undefined();
  }
  

  std::ostringstream errStr;
  errStr << "Could not find matching method for arguments (method name: wxBookCtrlBase::SetInternalBorder).\n";                           \
  errStr << "  arg count: " << args.Length() << "\n";
  for(int i = 0; i < args.Length(); i++) {
    v8::String::AsciiValue argStr(args[i]);
    errStr << "  arg[" << i << "]: " << *argStr << "\n";
  }
  return v8::ThrowException(v8::Exception::TypeError(v8::String::New(errStr.str().c_str())));
}

/*static*/ v8::Handle<v8::Value> wxNode_wxBookCtrlBase::_SetControlMargin(const v8::Arguments& args) {
  v8::HandleScope scope;
  wxNode_wxBookCtrlBase* self = unwrap<wxNode_wxBookCtrlBase>(args.This());

  
  /*
   * id: _28602
   */
  if(args.Length() == 1 && args[0]->IsNumber()) {
    int margin = (int)args[0]->ToInt32()->Value(); /* type: _162  */
    

    self->SetControlMargin(margin);

    return v8::Undefined();
  }
  

  std::ostringstream errStr;
  errStr << "Could not find matching method for arguments (method name: wxBookCtrlBase::SetControlMargin).\n";                           \
  errStr << "  arg count: " << args.Length() << "\n";
  for(int i = 0; i < args.Length(); i++) {
    v8::String::AsciiValue argStr(args[i]);
    errStr << "  arg[" << i << "]: " << *argStr << "\n";
  }
  return v8::ThrowException(v8::Exception::TypeError(v8::String::New(errStr.str().c_str())));
}

/*static*/ v8::Handle<v8::Value> wxNode_wxBookCtrlBase::_GetControlMargin(const v8::Arguments& args) {
  v8::HandleScope scope;
  wxNode_wxBookCtrlBase* self = unwrap<wxNode_wxBookCtrlBase>(args.This());

  
  /*
   * id: _28603
   */
  if(args.Length() == 0) {
    

    int returnVal = self->GetControlMargin();

    return scope.Close(v8::Number::New(returnVal));
  }
  

  std::ostringstream errStr;
  errStr << "Could not find matching method for arguments (method name: wxBookCtrlBase::GetControlMargin).\n";                           \
  errStr << "  arg count: " << args.Length() << "\n";
  for(int i = 0; i < args.Length(); i++) {
    v8::String::AsciiValue argStr(args[i]);
    errStr << "  arg[" << i << "]: " << *argStr << "\n";
  }
  return v8::ThrowException(v8::Exception::TypeError(v8::String::New(errStr.str().c_str())));
}

/*static*/ v8::Handle<v8::Value> wxNode_wxBookCtrlBase::_IsVertical(const v8::Arguments& args) {
  v8::HandleScope scope;
  wxNode_wxBookCtrlBase* self = unwrap<wxNode_wxBookCtrlBase>(args.This());

  
  /*
   * id: _28604
   */
  if(args.Length() == 0) {
    

    bool returnVal = self->IsVertical();

    return scope.Close(v8::Boolean::New(returnVal));
  }
  

  std::ostringstream errStr;
  errStr << "Could not find matching method for arguments (method name: wxBookCtrlBase::IsVertical).\n";                           \
  errStr << "  arg count: " << args.Length() << "\n";
  for(int i = 0; i < args.Length(); i++) {
    v8::String::AsciiValue argStr(args[i]);
    errStr << "  arg[" << i << "]: " << *argStr << "\n";
  }
  return v8::ThrowException(v8::Exception::TypeError(v8::String::New(errStr.str().c_str())));
}

/*static*/ v8::Handle<v8::Value> wxNode_wxBookCtrlBase::_SetFitToCurrentPage(const v8::Arguments& args) {
  v8::HandleScope scope;
  wxNode_wxBookCtrlBase* self = unwrap<wxNode_wxBookCtrlBase>(args.This());

  
  /*
   * id: _28605
   */
  if(args.Length() == 1 && args[0]->IsBoolean()) {
    bool fit = args[0]->ToBoolean()->Value(); /* type: _14666  */
    

    self->SetFitToCurrentPage(fit);

    return v8::Undefined();
  }
  

  std::ostringstream errStr;
  errStr << "Could not find matching method for arguments (method name: wxBookCtrlBase::SetFitToCurrentPage).\n";                           \
  errStr << "  arg count: " << args.Length() << "\n";
  for(int i = 0; i < args.Length(); i++) {
    v8::String::AsciiValue argStr(args[i]);
    errStr << "  arg[" << i << "]: " << *argStr << "\n";
  }
  return v8::ThrowException(v8::Exception::TypeError(v8::String::New(errStr.str().c_str())));
}

/*static*/ v8::Handle<v8::Value> wxNode_wxBookCtrlBase::_GetFitToCurrentPage(const v8::Arguments& args) {
  v8::HandleScope scope;
  wxNode_wxBookCtrlBase* self = unwrap<wxNode_wxBookCtrlBase>(args.This());

  
  /*
   * id: _28606
   */
  if(args.Length() == 0) {
    

    bool returnVal = self->GetFitToCurrentPage();

    return scope.Close(v8::Boolean::New(returnVal));
  }
  

  std::ostringstream errStr;
  errStr << "Could not find matching method for arguments (method name: wxBookCtrlBase::GetFitToCurrentPage).\n";                           \
  errStr << "  arg count: " << args.Length() << "\n";
  for(int i = 0; i < args.Length(); i++) {
    v8::String::AsciiValue argStr(args[i]);
    errStr << "  arg[" << i << "]: " << *argStr << "\n";
  }
  return v8::ThrowException(v8::Exception::TypeError(v8::String::New(errStr.str().c_str())));
}

/*static*/ v8::Handle<v8::Value> wxNode_wxBookCtrlBase::_GetControlSizer(const v8::Arguments& args) {
  v8::HandleScope scope;
  wxNode_wxBookCtrlBase* self = unwrap<wxNode_wxBookCtrlBase>(args.This());

  
  /*
   * id: _28607
   */
  if(args.Length() == 0) {
    

    wxSizer* returnVal = self->GetControlSizer();

    
    v8::Local<v8::FunctionTemplate> returnObjFt = v8::FunctionTemplate::New(wxNodeObject::NewFunc);
    returnObjFt->InstanceTemplate()->SetInternalFieldCount(2);
    returnObjFt->SetClassName(v8::String::NewSymbol("wxSizer"));
    wxNode_wxSizer::AddMethods(returnObjFt);
    v8::Local<v8::Function> returnObjFn = returnObjFt->GetFunction();
    v8::Handle<v8::Value> returnObjArgs[0];
    v8::Local<v8::Object> returnObj = returnObjFn->CallAsConstructor(0, returnObjArgs)->ToObject();
    returnObj->SetPointerInInternalField(0, returnVal);
    returnObj->SetPointerInInternalField(1, new NodeExEvtHandlerImplWrap(returnObj));
    return scope.Close(returnObj);
  }
  

  std::ostringstream errStr;
  errStr << "Could not find matching method for arguments (method name: wxBookCtrlBase::GetControlSizer).\n";                           \
  errStr << "  arg count: " << args.Length() << "\n";
  for(int i = 0; i < args.Length(); i++) {
    v8::String::AsciiValue argStr(args[i]);
    errStr << "  arg[" << i << "]: " << *argStr << "\n";
  }
  return v8::ThrowException(v8::Exception::TypeError(v8::String::New(errStr.str().c_str())));
}

/*static*/ v8::Handle<v8::Value> wxNode_wxBookCtrlBase::_DeletePage(const v8::Arguments& args) {
  v8::HandleScope scope;
  wxNode_wxBookCtrlBase* self = unwrap<wxNode_wxBookCtrlBase>(args.This());

  
  /*
   * id: _28608
   */
  if(args.Length() == 1 && args[0]->IsNumber()) {
    unsigned int n = (unsigned int)args[0]->ToInt32()->Value(); /* type: _8620  */
    

    bool returnVal = self->DeletePage(n);

    return scope.Close(v8::Boolean::New(returnVal));
  }
  

  std::ostringstream errStr;
  errStr << "Could not find matching method for arguments (method name: wxBookCtrlBase::DeletePage).\n";                           \
  errStr << "  arg count: " << args.Length() << "\n";
  for(int i = 0; i < args.Length(); i++) {
    v8::String::AsciiValue argStr(args[i]);
    errStr << "  arg[" << i << "]: " << *argStr << "\n";
  }
  return v8::ThrowException(v8::Exception::TypeError(v8::String::New(errStr.str().c_str())));
}

/*static*/ v8::Handle<v8::Value> wxNode_wxBookCtrlBase::_RemovePage(const v8::Arguments& args) {
  v8::HandleScope scope;
  wxNode_wxBookCtrlBase* self = unwrap<wxNode_wxBookCtrlBase>(args.This());

  
  /*
   * id: _28609
   */
  if(args.Length() == 1 && args[0]->IsNumber()) {
    unsigned int n = (unsigned int)args[0]->ToInt32()->Value(); /* type: _8620  */
    

    bool returnVal = self->RemovePage(n);

    return scope.Close(v8::Boolean::New(returnVal));
  }
  

  std::ostringstream errStr;
  errStr << "Could not find matching method for arguments (method name: wxBookCtrlBase::RemovePage).\n";                           \
  errStr << "  arg count: " << args.Length() << "\n";
  for(int i = 0; i < args.Length(); i++) {
    v8::String::AsciiValue argStr(args[i]);
    errStr << "  arg[" << i << "]: " << *argStr << "\n";
  }
  return v8::ThrowException(v8::Exception::TypeError(v8::String::New(errStr.str().c_str())));
}

/*static*/ v8::Handle<v8::Value> wxNode_wxBookCtrlBase::_DeleteAllPages(const v8::Arguments& args) {
  v8::HandleScope scope;
  wxNode_wxBookCtrlBase* self = unwrap<wxNode_wxBookCtrlBase>(args.This());

  
  /*
   * id: _28610
   */
  if(args.Length() == 0) {
    

    bool returnVal = self->DeleteAllPages();

    return scope.Close(v8::Boolean::New(returnVal));
  }
  

  std::ostringstream errStr;
  errStr << "Could not find matching method for arguments (method name: wxBookCtrlBase::DeleteAllPages).\n";                           \
  errStr << "  arg count: " << args.Length() << "\n";
  for(int i = 0; i < args.Length(); i++) {
    v8::String::AsciiValue argStr(args[i]);
    errStr << "  arg[" << i << "]: " << *argStr << "\n";
  }
  return v8::ThrowException(v8::Exception::TypeError(v8::String::New(errStr.str().c_str())));
}

/*static*/ v8::Handle<v8::Value> wxNode_wxBookCtrlBase::_AddPage(const v8::Arguments& args) {
  v8::HandleScope scope;
  wxNode_wxBookCtrlBase* self = unwrap<wxNode_wxBookCtrlBase>(args.This());

  
  /*
   * id: _28611
   */
  if(args.Length() == 4 && (args[0]->IsNull() || (args[0]->IsObject() && wxNode_wxWindow::AssignableFrom(args[0]->ToObject()->GetConstructorName()))) && args[1]->IsString() && args[2]->IsBoolean() && args[3]->IsNumber()) {
    wxNode_wxWindow* page = args[0]->IsNull() ? NULL : wxNodeObject::unwrap<wxNode_wxWindow>(args[0]->ToObject()); /* type: _993 * */
    v8::String::AsciiValue text(args[1]->ToString()); /* type: _14808  */
    bool bSelect = args[2]->ToBoolean()->Value(); /* type: _14666  */
    int imageId = (int)args[3]->ToInt32()->Value(); /* type: _162  */
    

    bool returnVal = self->AddPage(page, *text, bSelect, imageId);

    return scope.Close(v8::Boolean::New(returnVal));
  }
  
  /*
   * id: _28611
   */
  if(args.Length() == 3 && (args[0]->IsNull() || (args[0]->IsObject() && wxNode_wxWindow::AssignableFrom(args[0]->ToObject()->GetConstructorName()))) && args[1]->IsString() && args[2]->IsBoolean()) {
    wxNode_wxWindow* page = args[0]->IsNull() ? NULL : wxNodeObject::unwrap<wxNode_wxWindow>(args[0]->ToObject()); /* type: _993 * */
    v8::String::AsciiValue text(args[1]->ToString()); /* type: _14808  */
    bool bSelect = args[2]->ToBoolean()->Value(); /* type: _14666  */
    

    bool returnVal = self->AddPage(page, *text, bSelect);

    return scope.Close(v8::Boolean::New(returnVal));
  }
  
  /*
   * id: _28611
   */
  if(args.Length() == 2 && (args[0]->IsNull() || (args[0]->IsObject() && wxNode_wxWindow::AssignableFrom(args[0]->ToObject()->GetConstructorName()))) && args[1]->IsString()) {
    wxNode_wxWindow* page = args[0]->IsNull() ? NULL : wxNodeObject::unwrap<wxNode_wxWindow>(args[0]->ToObject()); /* type: _993 * */
    v8::String::AsciiValue text(args[1]->ToString()); /* type: _14808  */
    

    bool returnVal = self->AddPage(page, *text);

    return scope.Close(v8::Boolean::New(returnVal));
  }
  

  std::ostringstream errStr;
  errStr << "Could not find matching method for arguments (method name: wxBookCtrlBase::AddPage).\n";                           \
  errStr << "  arg count: " << args.Length() << "\n";
  for(int i = 0; i < args.Length(); i++) {
    v8::String::AsciiValue argStr(args[i]);
    errStr << "  arg[" << i << "]: " << *argStr << "\n";
  }
  return v8::ThrowException(v8::Exception::TypeError(v8::String::New(errStr.str().c_str())));
}

/*static*/ v8::Handle<v8::Value> wxNode_wxBookCtrlBase::_InsertPage(const v8::Arguments& args) {
  v8::HandleScope scope;
  wxNode_wxBookCtrlBase* self = unwrap<wxNode_wxBookCtrlBase>(args.This());

  
  /*
   * id: _28612
   */
  if(args.Length() == 5 && args[0]->IsNumber() && (args[1]->IsNull() || (args[1]->IsObject() && wxNode_wxWindow::AssignableFrom(args[1]->ToObject()->GetConstructorName()))) && args[2]->IsString() && args[3]->IsBoolean() && args[4]->IsNumber()) {
    unsigned int n = (unsigned int)args[0]->ToInt32()->Value(); /* type: _8620  */
    wxNode_wxWindow* page = args[1]->IsNull() ? NULL : wxNodeObject::unwrap<wxNode_wxWindow>(args[1]->ToObject()); /* type: _993 * */
    v8::String::AsciiValue text(args[2]->ToString()); /* type: _14808  */
    bool bSelect = args[3]->ToBoolean()->Value(); /* type: _14666  */
    int imageId = (int)args[4]->ToInt32()->Value(); /* type: _162  */
    

    bool returnVal = self->InsertPage(n, page, *text, bSelect, imageId);

    return scope.Close(v8::Boolean::New(returnVal));
  }
  
  /*
   * id: _28612
   */
  if(args.Length() == 4 && args[0]->IsNumber() && (args[1]->IsNull() || (args[1]->IsObject() && wxNode_wxWindow::AssignableFrom(args[1]->ToObject()->GetConstructorName()))) && args[2]->IsString() && args[3]->IsBoolean()) {
    unsigned int n = (unsigned int)args[0]->ToInt32()->Value(); /* type: _8620  */
    wxNode_wxWindow* page = args[1]->IsNull() ? NULL : wxNodeObject::unwrap<wxNode_wxWindow>(args[1]->ToObject()); /* type: _993 * */
    v8::String::AsciiValue text(args[2]->ToString()); /* type: _14808  */
    bool bSelect = args[3]->ToBoolean()->Value(); /* type: _14666  */
    

    bool returnVal = self->InsertPage(n, page, *text, bSelect);

    return scope.Close(v8::Boolean::New(returnVal));
  }
  
  /*
   * id: _28612
   */
  if(args.Length() == 3 && args[0]->IsNumber() && (args[1]->IsNull() || (args[1]->IsObject() && wxNode_wxWindow::AssignableFrom(args[1]->ToObject()->GetConstructorName()))) && args[2]->IsString()) {
    unsigned int n = (unsigned int)args[0]->ToInt32()->Value(); /* type: _8620  */
    wxNode_wxWindow* page = args[1]->IsNull() ? NULL : wxNodeObject::unwrap<wxNode_wxWindow>(args[1]->ToObject()); /* type: _993 * */
    v8::String::AsciiValue text(args[2]->ToString()); /* type: _14808  */
    

    bool returnVal = self->InsertPage(n, page, *text);

    return scope.Close(v8::Boolean::New(returnVal));
  }
  

  std::ostringstream errStr;
  errStr << "Could not find matching method for arguments (method name: wxBookCtrlBase::InsertPage).\n";                           \
  errStr << "  arg count: " << args.Length() << "\n";
  for(int i = 0; i < args.Length(); i++) {
    v8::String::AsciiValue argStr(args[i]);
    errStr << "  arg[" << i << "]: " << *argStr << "\n";
  }
  return v8::ThrowException(v8::Exception::TypeError(v8::String::New(errStr.str().c_str())));
}

/*static*/ v8::Handle<v8::Value> wxNode_wxBookCtrlBase::_SetSelection(const v8::Arguments& args) {
  v8::HandleScope scope;
  wxNode_wxBookCtrlBase* self = unwrap<wxNode_wxBookCtrlBase>(args.This());

  
  /*
   * id: _28613
   */
  if(args.Length() == 1 && args[0]->IsNumber()) {
    unsigned int n = (unsigned int)args[0]->ToInt32()->Value(); /* type: _8620  */
    

    int returnVal = self->SetSelection(n);

    return scope.Close(v8::Number::New(returnVal));
  }
  

  std::ostringstream errStr;
  errStr << "Could not find matching method for arguments (method name: wxBookCtrlBase::SetSelection).\n";                           \
  errStr << "  arg count: " << args.Length() << "\n";
  for(int i = 0; i < args.Length(); i++) {
    v8::String::AsciiValue argStr(args[i]);
    errStr << "  arg[" << i << "]: " << *argStr << "\n";
  }
  return v8::ThrowException(v8::Exception::TypeError(v8::String::New(errStr.str().c_str())));
}

/*static*/ v8::Handle<v8::Value> wxNode_wxBookCtrlBase::_ChangeSelection(const v8::Arguments& args) {
  v8::HandleScope scope;
  wxNode_wxBookCtrlBase* self = unwrap<wxNode_wxBookCtrlBase>(args.This());

  
  /*
   * id: _28614
   */
  if(args.Length() == 1 && args[0]->IsNumber()) {
    unsigned int n = (unsigned int)args[0]->ToInt32()->Value(); /* type: _8620  */
    

    int returnVal = self->ChangeSelection(n);

    return scope.Close(v8::Number::New(returnVal));
  }
  

  std::ostringstream errStr;
  errStr << "Could not find matching method for arguments (method name: wxBookCtrlBase::ChangeSelection).\n";                           \
  errStr << "  arg count: " << args.Length() << "\n";
  for(int i = 0; i < args.Length(); i++) {
    v8::String::AsciiValue argStr(args[i]);
    errStr << "  arg[" << i << "]: " << *argStr << "\n";
  }
  return v8::ThrowException(v8::Exception::TypeError(v8::String::New(errStr.str().c_str())));
}

/*static*/ v8::Handle<v8::Value> wxNode_wxBookCtrlBase::_AdvanceSelection(const v8::Arguments& args) {
  v8::HandleScope scope;
  wxNode_wxBookCtrlBase* self = unwrap<wxNode_wxBookCtrlBase>(args.This());

  
  /*
   * id: _28615
   */
  if(args.Length() == 1 && args[0]->IsBoolean()) {
    bool forward = args[0]->ToBoolean()->Value(); /* type: _14666  */
    

    self->AdvanceSelection(forward);

    return v8::Undefined();
  }
  
  /*
   * id: _28615
   */
  if(args.Length() == 0) {
    

    self->AdvanceSelection();

    return v8::Undefined();
  }
  

  std::ostringstream errStr;
  errStr << "Could not find matching method for arguments (method name: wxBookCtrlBase::AdvanceSelection).\n";                           \
  errStr << "  arg count: " << args.Length() << "\n";
  for(int i = 0; i < args.Length(); i++) {
    v8::String::AsciiValue argStr(args[i]);
    errStr << "  arg[" << i << "]: " << *argStr << "\n";
  }
  return v8::ThrowException(v8::Exception::TypeError(v8::String::New(errStr.str().c_str())));
}

/*static*/ v8::Handle<v8::Value> wxNode_wxBookCtrlBase::_HitTest(const v8::Arguments& args) {
  v8::HandleScope scope;
  wxNode_wxBookCtrlBase* self = unwrap<wxNode_wxBookCtrlBase>(args.This());

  
  /*
   * id: _28616
   */
  if(args.Length() == 2 && (args[0]->IsNull() || (args[0]->IsObject() && wxNode_wxPoint::AssignableFrom(args[0]->ToObject()->GetConstructorName()))) && false) {
    wxNode_wxPoint* arg0 = args[0]->IsNull() ? NULL : wxNodeObject::unwrap<wxNode_wxPoint>(args[0]->ToObject()); /* type: _20412  */
    long int arg1; /* type: _20380 * */
    

    int returnVal = self->HitTest(*arg0, &arg1);

    return scope.Close(v8::Number::New(returnVal));
  }
  
  /*
   * id: _28616
   */
  if(args.Length() == 1 && (args[0]->IsNull() || (args[0]->IsObject() && wxNode_wxPoint::AssignableFrom(args[0]->ToObject()->GetConstructorName())))) {
    wxNode_wxPoint* arg0 = args[0]->IsNull() ? NULL : wxNodeObject::unwrap<wxNode_wxPoint>(args[0]->ToObject()); /* type: _20412  */
    

    int returnVal = self->HitTest(*arg0);

    return scope.Close(v8::Number::New(returnVal));
  }
  

  std::ostringstream errStr;
  errStr << "Could not find matching method for arguments (method name: wxBookCtrlBase::HitTest).\n";                           \
  errStr << "  arg count: " << args.Length() << "\n";
  for(int i = 0; i < args.Length(); i++) {
    v8::String::AsciiValue argStr(args[i]);
    errStr << "  arg[" << i << "]: " << *argStr << "\n";
  }
  return v8::ThrowException(v8::Exception::TypeError(v8::String::New(errStr.str().c_str())));
}

/*static*/ v8::Handle<v8::Value> wxNode_wxBookCtrlBase::_HasMultiplePages(const v8::Arguments& args) {
  v8::HandleScope scope;
  wxNode_wxBookCtrlBase* self = unwrap<wxNode_wxBookCtrlBase>(args.This());

  
  /*
   * id: _28617
   */
  if(args.Length() == 0) {
    

    bool returnVal = self->HasMultiplePages();

    return scope.Close(v8::Boolean::New(returnVal));
  }
  

  std::ostringstream errStr;
  errStr << "Could not find matching method for arguments (method name: wxBookCtrlBase::HasMultiplePages).\n";                           \
  errStr << "  arg count: " << args.Length() << "\n";
  for(int i = 0; i < args.Length(); i++) {
    v8::String::AsciiValue argStr(args[i]);
    errStr << "  arg[" << i << "]: " << *argStr << "\n";
  }
  return v8::ThrowException(v8::Exception::TypeError(v8::String::New(errStr.str().c_str())));
}

/*static*/ v8::Handle<v8::Value> wxNode_wxBookCtrlBase::_AcceptsFocus(const v8::Arguments& args) {
  v8::HandleScope scope;
  wxNode_wxBookCtrlBase* self = unwrap<wxNode_wxBookCtrlBase>(args.This());

  
  /*
   * id: _28618
   */
  if(args.Length() == 0) {
    

    bool returnVal = self->AcceptsFocus();

    return scope.Close(v8::Boolean::New(returnVal));
  }
  

  std::ostringstream errStr;
  errStr << "Could not find matching method for arguments (method name: wxBookCtrlBase::AcceptsFocus).\n";                           \
  errStr << "  arg count: " << args.Length() << "\n";
  for(int i = 0; i < args.Length(); i++) {
    v8::String::AsciiValue argStr(args[i]);
    errStr << "  arg[" << i << "]: " << *argStr << "\n";
  }
  return v8::ThrowException(v8::Exception::TypeError(v8::String::New(errStr.str().c_str())));
}

/*static*/ v8::Handle<v8::Value> wxNode_wxBookCtrlBase::_CanApplyThemeBorder(const v8::Arguments& args) {
  v8::HandleScope scope;
  wxNode_wxBookCtrlBase* self = unwrap<wxNode_wxBookCtrlBase>(args.This());

  
  /*
   * id: _28619
   */
  if(args.Length() == 0) {
    

    bool returnVal = self->CanApplyThemeBorder();

    return scope.Close(v8::Boolean::New(returnVal));
  }
  

  std::ostringstream errStr;
  errStr << "Could not find matching method for arguments (method name: wxBookCtrlBase::CanApplyThemeBorder).\n";                           \
  errStr << "  arg count: " << args.Length() << "\n";
  for(int i = 0; i < args.Length(); i++) {
    v8::String::AsciiValue argStr(args[i]);
    errStr << "  arg[" << i << "]: " << *argStr << "\n";
  }
  return v8::ThrowException(v8::Exception::TypeError(v8::String::New(errStr.str().c_str())));
}

/*static*/ v8::Handle<v8::Value> wxNode_wxBookCtrlBase::_GetClassInfo(const v8::Arguments& args) {
  v8::HandleScope scope;
  wxNode_wxBookCtrlBase* self = unwrap<wxNode_wxBookCtrlBase>(args.This());

  
  /*
   * id: _28636
   */
  if(args.Length() == 0) {
    

    wxClassInfo* returnVal = self->GetClassInfo();

    
    v8::Local<v8::FunctionTemplate> returnObjFt = v8::FunctionTemplate::New(wxNodeObject::NewFunc);
    returnObjFt->InstanceTemplate()->SetInternalFieldCount(2);
    returnObjFt->SetClassName(v8::String::NewSymbol("wxClassInfo"));
    wxNode_wxClassInfo::AddMethods(returnObjFt);
    v8::Local<v8::Function> returnObjFn = returnObjFt->GetFunction();
    v8::Handle<v8::Value> returnObjArgs[0];
    v8::Local<v8::Object> returnObj = returnObjFn->CallAsConstructor(0, returnObjArgs)->ToObject();
    returnObj->SetPointerInInternalField(0, returnVal);
    returnObj->SetPointerInInternalField(1, new NodeExEvtHandlerImplWrap(returnObj));
    return scope.Close(returnObj);
  }
  

  std::ostringstream errStr;
  errStr << "Could not find matching method for arguments (method name: wxBookCtrlBase::GetClassInfo).\n";                           \
  errStr << "  arg count: " << args.Length() << "\n";
  for(int i = 0; i < args.Length(); i++) {
    v8::String::AsciiValue argStr(args[i]);
    errStr << "  arg[" << i << "]: " << *argStr << "\n";
  }
  return v8::ThrowException(v8::Exception::TypeError(v8::String::New(errStr.str().c_str())));
}

