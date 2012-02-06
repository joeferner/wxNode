
#include <sstream>
#include "wxNode_wxBookCtrlBase.h"
#include "wxNode_wxEvtHandler.h"
#include "wxNode_wxControl.h"
#include "wxNode_wxWindow.h"
#include "wxNode_wxPoint.h"
#include "wxNode_wxSize.h"


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
  if(args.Length() == 6 && (args[0]->IsNull() || args[0]->IsObject()) && args[1]->IsNumber() && (args[2]->IsNull() || args[2]->IsObject()) && (args[3]->IsNull() || args[3]->IsObject()) && args[4]->IsNumber() && args[5]->IsString()) {
    wxNode_wxWindow* parent = args[0]->IsNull() ? NULL : wxNodeObject::unwrap<wxNode_wxWindow>(args[0]->ToObject()); /* type: _993 * */
    int winid = (int)args[1]->ToInt32()->Value(); /* type: _8633  */
    wxNode_wxPoint* pos = args[2]->IsNull() ? NULL : wxNodeObject::unwrap<wxNode_wxPoint>(args[2]->ToObject()); /* type: _20412  */
    wxNode_wxSize* size = args[3]->IsNull() ? NULL : wxNodeObject::unwrap<wxNode_wxSize>(args[3]->ToObject()); /* type: _20522  */
    long int style = (long int)args[4]->ToInt32()->Value(); /* type: _586  */
    v8::String::AsciiValue name(args[5]->ToString()); /* type: _14808  */
    

    self->Create(parent, winid, *pos, *size, style, *name);

    // TODO: handle return type
    return v8::Undefined();
  }
  
  /*
   * id: _28588
   */
  if(args.Length() == 5 && (args[0]->IsNull() || args[0]->IsObject()) && args[1]->IsNumber() && (args[2]->IsNull() || args[2]->IsObject()) && (args[3]->IsNull() || args[3]->IsObject()) && args[4]->IsNumber()) {
    wxNode_wxWindow* parent = args[0]->IsNull() ? NULL : wxNodeObject::unwrap<wxNode_wxWindow>(args[0]->ToObject()); /* type: _993 * */
    int winid = (int)args[1]->ToInt32()->Value(); /* type: _8633  */
    wxNode_wxPoint* pos = args[2]->IsNull() ? NULL : wxNodeObject::unwrap<wxNode_wxPoint>(args[2]->ToObject()); /* type: _20412  */
    wxNode_wxSize* size = args[3]->IsNull() ? NULL : wxNodeObject::unwrap<wxNode_wxSize>(args[3]->ToObject()); /* type: _20522  */
    long int style = (long int)args[4]->ToInt32()->Value(); /* type: _586  */
    

    self->Create(parent, winid, *pos, *size, style);

    // TODO: handle return type
    return v8::Undefined();
  }
  
  /*
   * id: _28588
   */
  if(args.Length() == 4 && (args[0]->IsNull() || args[0]->IsObject()) && args[1]->IsNumber() && (args[2]->IsNull() || args[2]->IsObject()) && (args[3]->IsNull() || args[3]->IsObject())) {
    wxNode_wxWindow* parent = args[0]->IsNull() ? NULL : wxNodeObject::unwrap<wxNode_wxWindow>(args[0]->ToObject()); /* type: _993 * */
    int winid = (int)args[1]->ToInt32()->Value(); /* type: _8633  */
    wxNode_wxPoint* pos = args[2]->IsNull() ? NULL : wxNodeObject::unwrap<wxNode_wxPoint>(args[2]->ToObject()); /* type: _20412  */
    wxNode_wxSize* size = args[3]->IsNull() ? NULL : wxNodeObject::unwrap<wxNode_wxSize>(args[3]->ToObject()); /* type: _20522  */
    

    self->Create(parent, winid, *pos, *size);

    // TODO: handle return type
    return v8::Undefined();
  }
  
  /*
   * id: _28588
   */
  if(args.Length() == 3 && (args[0]->IsNull() || args[0]->IsObject()) && args[1]->IsNumber() && (args[2]->IsNull() || args[2]->IsObject())) {
    wxNode_wxWindow* parent = args[0]->IsNull() ? NULL : wxNodeObject::unwrap<wxNode_wxWindow>(args[0]->ToObject()); /* type: _993 * */
    int winid = (int)args[1]->ToInt32()->Value(); /* type: _8633  */
    wxNode_wxPoint* pos = args[2]->IsNull() ? NULL : wxNodeObject::unwrap<wxNode_wxPoint>(args[2]->ToObject()); /* type: _20412  */
    

    self->Create(parent, winid, *pos);

    // TODO: handle return type
    return v8::Undefined();
  }
  
  /*
   * id: _28588
   */
  if(args.Length() == 2 && (args[0]->IsNull() || args[0]->IsObject()) && args[1]->IsNumber()) {
    wxNode_wxWindow* parent = args[0]->IsNull() ? NULL : wxNodeObject::unwrap<wxNode_wxWindow>(args[0]->ToObject()); /* type: _993 * */
    int winid = (int)args[1]->ToInt32()->Value(); /* type: _8633  */
    

    self->Create(parent, winid);

    // TODO: handle return type
    return v8::Undefined();
  }
  

  std::ostringstream errStr;
  errStr << "Could not find matching method for arguments (method name: Create).\n";                           \
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
    

    self->GetPageCount();

    // TODO: handle return type
    return v8::Undefined();
  }
  

  std::ostringstream errStr;
  errStr << "Could not find matching method for arguments (method name: GetPageCount).\n";                           \
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
    

    self->GetPage(n);

    // TODO: handle return type
    return v8::Undefined();
  }
  

  std::ostringstream errStr;
  errStr << "Could not find matching method for arguments (method name: GetPage).\n";                           \
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
    

    self->GetCurrentPage();

    // TODO: handle return type
    return v8::Undefined();
  }
  

  std::ostringstream errStr;
  errStr << "Could not find matching method for arguments (method name: GetCurrentPage).\n";                           \
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
    

    self->GetSelection();

    // TODO: handle return type
    return v8::Undefined();
  }
  

  std::ostringstream errStr;
  errStr << "Could not find matching method for arguments (method name: GetSelection).\n";                           \
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
    

    self->SetPageText(n, *strText);

    // TODO: handle return type
    return v8::Undefined();
  }
  

  std::ostringstream errStr;
  errStr << "Could not find matching method for arguments (method name: SetPageText).\n";                           \
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
    

    self->GetPageText(n);

    // TODO: handle return type
    return v8::Undefined();
  }
  

  std::ostringstream errStr;
  errStr << "Could not find matching method for arguments (method name: GetPageText).\n";                           \
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
    

    self->GetPageImage(n);

    // TODO: handle return type
    return v8::Undefined();
  }
  

  std::ostringstream errStr;
  errStr << "Could not find matching method for arguments (method name: GetPageImage).\n";                           \
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
    

    self->SetPageImage(n, imageId);

    // TODO: handle return type
    return v8::Undefined();
  }
  

  std::ostringstream errStr;
  errStr << "Could not find matching method for arguments (method name: SetPageImage).\n";                           \
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
  if(args.Length() == 1 && (args[0]->IsNull() || args[0]->IsObject())) {
    wxNode_wxSize* size = args[0]->IsNull() ? NULL : wxNodeObject::unwrap<wxNode_wxSize>(args[0]->ToObject()); /* type: _20522  */
    

    self->SetPageSize(*size);

    // TODO: handle return type
    return v8::Undefined();
  }
  

  std::ostringstream errStr;
  errStr << "Could not find matching method for arguments (method name: SetPageSize).\n";                           \
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
    

    self->GetControllerSize();

    // TODO: handle return type
    return v8::Undefined();
  }
  

  std::ostringstream errStr;
  errStr << "Could not find matching method for arguments (method name: GetControllerSize).\n";                           \
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
  if(args.Length() == 1 && (args[0]->IsNull() || args[0]->IsObject())) {
    wxNode_wxSize* sizePage = args[0]->IsNull() ? NULL : wxNodeObject::unwrap<wxNode_wxSize>(args[0]->ToObject()); /* type: _20522  */
    

    self->CalcSizeFromPage(*sizePage);

    // TODO: handle return type
    return v8::Undefined();
  }
  

  std::ostringstream errStr;
  errStr << "Could not find matching method for arguments (method name: CalcSizeFromPage).\n";                           \
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
    

    self->GetInternalBorder();

    // TODO: handle return type
    return v8::Undefined();
  }
  

  std::ostringstream errStr;
  errStr << "Could not find matching method for arguments (method name: GetInternalBorder).\n";                           \
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

    // TODO: handle return type
    return v8::Undefined();
  }
  

  std::ostringstream errStr;
  errStr << "Could not find matching method for arguments (method name: SetInternalBorder).\n";                           \
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

    // TODO: handle return type
    return v8::Undefined();
  }
  

  std::ostringstream errStr;
  errStr << "Could not find matching method for arguments (method name: SetControlMargin).\n";                           \
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
    

    self->GetControlMargin();

    // TODO: handle return type
    return v8::Undefined();
  }
  

  std::ostringstream errStr;
  errStr << "Could not find matching method for arguments (method name: GetControlMargin).\n";                           \
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
    

    self->IsVertical();

    // TODO: handle return type
    return v8::Undefined();
  }
  

  std::ostringstream errStr;
  errStr << "Could not find matching method for arguments (method name: IsVertical).\n";                           \
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

    // TODO: handle return type
    return v8::Undefined();
  }
  

  std::ostringstream errStr;
  errStr << "Could not find matching method for arguments (method name: SetFitToCurrentPage).\n";                           \
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
    

    self->GetFitToCurrentPage();

    // TODO: handle return type
    return v8::Undefined();
  }
  

  std::ostringstream errStr;
  errStr << "Could not find matching method for arguments (method name: GetFitToCurrentPage).\n";                           \
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
    

    self->GetControlSizer();

    // TODO: handle return type
    return v8::Undefined();
  }
  

  std::ostringstream errStr;
  errStr << "Could not find matching method for arguments (method name: GetControlSizer).\n";                           \
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
    

    self->DeletePage(n);

    // TODO: handle return type
    return v8::Undefined();
  }
  

  std::ostringstream errStr;
  errStr << "Could not find matching method for arguments (method name: DeletePage).\n";                           \
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
    

    self->RemovePage(n);

    // TODO: handle return type
    return v8::Undefined();
  }
  

  std::ostringstream errStr;
  errStr << "Could not find matching method for arguments (method name: RemovePage).\n";                           \
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
    

    self->DeleteAllPages();

    // TODO: handle return type
    return v8::Undefined();
  }
  

  std::ostringstream errStr;
  errStr << "Could not find matching method for arguments (method name: DeleteAllPages).\n";                           \
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
  if(args.Length() == 4 && (args[0]->IsNull() || args[0]->IsObject()) && args[1]->IsString() && args[2]->IsBoolean() && args[3]->IsNumber()) {
    wxNode_wxWindow* page = args[0]->IsNull() ? NULL : wxNodeObject::unwrap<wxNode_wxWindow>(args[0]->ToObject()); /* type: _993 * */
    v8::String::AsciiValue text(args[1]->ToString()); /* type: _14808  */
    bool bSelect = args[2]->ToBoolean()->Value(); /* type: _14666  */
    int imageId = (int)args[3]->ToInt32()->Value(); /* type: _162  */
    

    self->AddPage(page, *text, bSelect, imageId);

    // TODO: handle return type
    return v8::Undefined();
  }
  
  /*
   * id: _28611
   */
  if(args.Length() == 3 && (args[0]->IsNull() || args[0]->IsObject()) && args[1]->IsString() && args[2]->IsBoolean()) {
    wxNode_wxWindow* page = args[0]->IsNull() ? NULL : wxNodeObject::unwrap<wxNode_wxWindow>(args[0]->ToObject()); /* type: _993 * */
    v8::String::AsciiValue text(args[1]->ToString()); /* type: _14808  */
    bool bSelect = args[2]->ToBoolean()->Value(); /* type: _14666  */
    

    self->AddPage(page, *text, bSelect);

    // TODO: handle return type
    return v8::Undefined();
  }
  
  /*
   * id: _28611
   */
  if(args.Length() == 2 && (args[0]->IsNull() || args[0]->IsObject()) && args[1]->IsString()) {
    wxNode_wxWindow* page = args[0]->IsNull() ? NULL : wxNodeObject::unwrap<wxNode_wxWindow>(args[0]->ToObject()); /* type: _993 * */
    v8::String::AsciiValue text(args[1]->ToString()); /* type: _14808  */
    

    self->AddPage(page, *text);

    // TODO: handle return type
    return v8::Undefined();
  }
  

  std::ostringstream errStr;
  errStr << "Could not find matching method for arguments (method name: AddPage).\n";                           \
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
  if(args.Length() == 5 && args[0]->IsNumber() && (args[1]->IsNull() || args[1]->IsObject()) && args[2]->IsString() && args[3]->IsBoolean() && args[4]->IsNumber()) {
    unsigned int n = (unsigned int)args[0]->ToInt32()->Value(); /* type: _8620  */
    wxNode_wxWindow* page = args[1]->IsNull() ? NULL : wxNodeObject::unwrap<wxNode_wxWindow>(args[1]->ToObject()); /* type: _993 * */
    v8::String::AsciiValue text(args[2]->ToString()); /* type: _14808  */
    bool bSelect = args[3]->ToBoolean()->Value(); /* type: _14666  */
    int imageId = (int)args[4]->ToInt32()->Value(); /* type: _162  */
    

    self->InsertPage(n, page, *text, bSelect, imageId);

    // TODO: handle return type
    return v8::Undefined();
  }
  
  /*
   * id: _28612
   */
  if(args.Length() == 4 && args[0]->IsNumber() && (args[1]->IsNull() || args[1]->IsObject()) && args[2]->IsString() && args[3]->IsBoolean()) {
    unsigned int n = (unsigned int)args[0]->ToInt32()->Value(); /* type: _8620  */
    wxNode_wxWindow* page = args[1]->IsNull() ? NULL : wxNodeObject::unwrap<wxNode_wxWindow>(args[1]->ToObject()); /* type: _993 * */
    v8::String::AsciiValue text(args[2]->ToString()); /* type: _14808  */
    bool bSelect = args[3]->ToBoolean()->Value(); /* type: _14666  */
    

    self->InsertPage(n, page, *text, bSelect);

    // TODO: handle return type
    return v8::Undefined();
  }
  
  /*
   * id: _28612
   */
  if(args.Length() == 3 && args[0]->IsNumber() && (args[1]->IsNull() || args[1]->IsObject()) && args[2]->IsString()) {
    unsigned int n = (unsigned int)args[0]->ToInt32()->Value(); /* type: _8620  */
    wxNode_wxWindow* page = args[1]->IsNull() ? NULL : wxNodeObject::unwrap<wxNode_wxWindow>(args[1]->ToObject()); /* type: _993 * */
    v8::String::AsciiValue text(args[2]->ToString()); /* type: _14808  */
    

    self->InsertPage(n, page, *text);

    // TODO: handle return type
    return v8::Undefined();
  }
  

  std::ostringstream errStr;
  errStr << "Could not find matching method for arguments (method name: InsertPage).\n";                           \
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
    

    self->SetSelection(n);

    // TODO: handle return type
    return v8::Undefined();
  }
  

  std::ostringstream errStr;
  errStr << "Could not find matching method for arguments (method name: SetSelection).\n";                           \
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
    

    self->ChangeSelection(n);

    // TODO: handle return type
    return v8::Undefined();
  }
  

  std::ostringstream errStr;
  errStr << "Could not find matching method for arguments (method name: ChangeSelection).\n";                           \
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

    // TODO: handle return type
    return v8::Undefined();
  }
  
  /*
   * id: _28615
   */
  if(args.Length() == 0) {
    

    self->AdvanceSelection();

    // TODO: handle return type
    return v8::Undefined();
  }
  

  std::ostringstream errStr;
  errStr << "Could not find matching method for arguments (method name: AdvanceSelection).\n";                           \
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
  if(args.Length() == 2 && (args[0]->IsNull() || args[0]->IsObject()) && false) {
    wxNode_wxPoint* arg0 = args[0]->IsNull() ? NULL : wxNodeObject::unwrap<wxNode_wxPoint>(args[0]->ToObject()); /* type: _20412  */
    long int arg1; /* type: _20380 * */
    

    self->HitTest(*arg0, &arg1);

    // TODO: handle return type
    return v8::Undefined();
  }
  
  /*
   * id: _28616
   */
  if(args.Length() == 1 && (args[0]->IsNull() || args[0]->IsObject())) {
    wxNode_wxPoint* arg0 = args[0]->IsNull() ? NULL : wxNodeObject::unwrap<wxNode_wxPoint>(args[0]->ToObject()); /* type: _20412  */
    

    self->HitTest(*arg0);

    // TODO: handle return type
    return v8::Undefined();
  }
  

  std::ostringstream errStr;
  errStr << "Could not find matching method for arguments (method name: HitTest).\n";                           \
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
    

    self->HasMultiplePages();

    // TODO: handle return type
    return v8::Undefined();
  }
  

  std::ostringstream errStr;
  errStr << "Could not find matching method for arguments (method name: HasMultiplePages).\n";                           \
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
    

    self->AcceptsFocus();

    // TODO: handle return type
    return v8::Undefined();
  }
  

  std::ostringstream errStr;
  errStr << "Could not find matching method for arguments (method name: AcceptsFocus).\n";                           \
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
    

    self->CanApplyThemeBorder();

    // TODO: handle return type
    return v8::Undefined();
  }
  

  std::ostringstream errStr;
  errStr << "Could not find matching method for arguments (method name: CanApplyThemeBorder).\n";                           \
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
    

    self->GetClassInfo();

    // TODO: handle return type
    return v8::Undefined();
  }
  

  std::ostringstream errStr;
  errStr << "Could not find matching method for arguments (method name: GetClassInfo).\n";                           \
  errStr << "  arg count: " << args.Length() << "\n";
  for(int i = 0; i < args.Length(); i++) {
    v8::String::AsciiValue argStr(args[i]);
    errStr << "  arg[" << i << "]: " << *argStr << "\n";
  }
  return v8::ThrowException(v8::Exception::TypeError(v8::String::New(errStr.str().c_str())));
}

