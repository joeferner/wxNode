
#include <sstream>
#include "wxNode_wxSizer.h"
#include "wxNode_wxEvtHandler.h"
#include "wxNode_wxObject.h"
#include "wxNode_wxSizerItem.h"
#include "wxNode_wxWindow.h"
#include "wxNode_wxSizerFlags.h"
#include "wxNode_wxSize.h"
#include "wxNode_wxPoint.h"
#include "wxNode_wxSizerItemList.h"
#include "wxNode_wxClassInfo.h"


/* static */ v8::Persistent<v8::FunctionTemplate> wxNode_wxSizer::s_ct;




/*static*/ void wxNode_wxSizer::Init(v8::Handle<v8::Object> target) {
  v8::HandleScope scope;

  v8::Local<v8::FunctionTemplate> t = v8::FunctionTemplate::New(wxNodeObject::NewFunc);
  s_ct = v8::Persistent<v8::FunctionTemplate>::New(t);
  s_ct->InstanceTemplate()->SetInternalFieldCount(2);
  s_ct->SetClassName(v8::String::NewSymbol("Sizer"));

  NODE_SET_PROTOTYPE_METHOD(s_ct, "init", _init);
  AddMethods(s_ct);

  target->Set(v8::String::NewSymbol("Sizer"), s_ct->GetFunction());
}

/*static*/ void wxNode_wxSizer::AddMethods(v8::Handle<v8::FunctionTemplate> target) {
  wxNode_wxObject::AddMethods(target);
  NODE_SET_PROTOTYPE_METHOD(target, "add", _Add);
  NODE_SET_PROTOTYPE_METHOD(target, "addSpacer", _AddSpacer);
  NODE_SET_PROTOTYPE_METHOD(target, "addStretchSpacer", _AddStretchSpacer);
  NODE_SET_PROTOTYPE_METHOD(target, "insert", _Insert);
  NODE_SET_PROTOTYPE_METHOD(target, "insertSpacer", _InsertSpacer);
  NODE_SET_PROTOTYPE_METHOD(target, "insertStretchSpacer", _InsertStretchSpacer);
  NODE_SET_PROTOTYPE_METHOD(target, "prepend", _Prepend);
  NODE_SET_PROTOTYPE_METHOD(target, "prependSpacer", _PrependSpacer);
  NODE_SET_PROTOTYPE_METHOD(target, "prependStretchSpacer", _PrependStretchSpacer);
  NODE_SET_PROTOTYPE_METHOD(target, "setContainingWindow", _SetContainingWindow);
  NODE_SET_PROTOTYPE_METHOD(target, "getContainingWindow", _GetContainingWindow);
  NODE_SET_PROTOTYPE_METHOD(target, "remove", _Remove);
  NODE_SET_PROTOTYPE_METHOD(target, "detach", _Detach);
  NODE_SET_PROTOTYPE_METHOD(target, "replace", _Replace);
  NODE_SET_PROTOTYPE_METHOD(target, "clear", _Clear);
  NODE_SET_PROTOTYPE_METHOD(target, "deleteWindows", _DeleteWindows);
  NODE_SET_PROTOTYPE_METHOD(target, "informFirstDirection", _InformFirstDirection);
  NODE_SET_PROTOTYPE_METHOD(target, "setMinSize", _SetMinSize);
  NODE_SET_PROTOTYPE_METHOD(target, "setItemMinSize", _SetItemMinSize);
  NODE_SET_PROTOTYPE_METHOD(target, "getSize", _GetSize);
  NODE_SET_PROTOTYPE_METHOD(target, "getPosition", _GetPosition);
  NODE_SET_PROTOTYPE_METHOD(target, "getMinSize", _GetMinSize);
  NODE_SET_PROTOTYPE_METHOD(target, "calcMin", _CalcMin);
  NODE_SET_PROTOTYPE_METHOD(target, "recalcSizes", _RecalcSizes);
  NODE_SET_PROTOTYPE_METHOD(target, "layout", _Layout);
  NODE_SET_PROTOTYPE_METHOD(target, "computeFittingClientSize", _ComputeFittingClientSize);
  NODE_SET_PROTOTYPE_METHOD(target, "computeFittingWindowSize", _ComputeFittingWindowSize);
  NODE_SET_PROTOTYPE_METHOD(target, "fit", _Fit);
  NODE_SET_PROTOTYPE_METHOD(target, "fitInside", _FitInside);
  NODE_SET_PROTOTYPE_METHOD(target, "setSizeHints", _SetSizeHints);
  NODE_SET_PROTOTYPE_METHOD(target, "getChildren", _GetChildren);
  NODE_SET_PROTOTYPE_METHOD(target, "setDimension", _SetDimension);
  NODE_SET_PROTOTYPE_METHOD(target, "getItemCount", _GetItemCount);
  NODE_SET_PROTOTYPE_METHOD(target, "isEmpty", _IsEmpty);
  NODE_SET_PROTOTYPE_METHOD(target, "getItem", _GetItem);
  NODE_SET_PROTOTYPE_METHOD(target, "getItemById", _GetItemById);
  NODE_SET_PROTOTYPE_METHOD(target, "show", _Show);
  NODE_SET_PROTOTYPE_METHOD(target, "hide", _Hide);
  NODE_SET_PROTOTYPE_METHOD(target, "isShown", _IsShown);
  NODE_SET_PROTOTYPE_METHOD(target, "showItems", _ShowItems);
  NODE_SET_PROTOTYPE_METHOD(target, "getClassInfo", _GetClassInfo);
  
  
}

/*static*/ v8::Handle<v8::Value> wxNode_wxSizer::New(const wxNode_wxSizer* obj) {
  v8::HandleScope scope;

  if(obj == NULL) {
    return scope.Close(v8::Null());
  }
  
  v8::Local<v8::FunctionTemplate> returnObjFt = v8::FunctionTemplate::New(wxNodeObject::NewFunc);
  returnObjFt->InstanceTemplate()->SetInternalFieldCount(2);
  returnObjFt->SetClassName(v8::String::NewSymbol("Sizer"));
  wxNode_wxSizer::AddMethods(returnObjFt);

  v8::Local<v8::Function> returnObjFn = returnObjFt->GetFunction();
  v8::Handle<v8::Value> returnObjArgs[0];
  v8::Local<v8::Object> returnObj = returnObjFn->CallAsConstructor(0, returnObjArgs)->ToObject();
  returnObj->SetPointerInInternalField(0, (void*)obj);
  NodeExEvtHandlerImpl* evtHandler = dynamic_cast<NodeExEvtHandlerImpl*>((wxNode_wxSizer*)obj);
  returnObj->SetPointerInInternalField(1, evtHandler);

  return scope.Close(returnObj);
}

/*static*/ v8::Handle<v8::Value> wxNode_wxSizer::New(const wxSizer* obj) {
  v8::HandleScope scope;

  if(obj == NULL) {
    return scope.Close(v8::Null());
  }
  
  v8::Local<v8::FunctionTemplate> returnObjFt = v8::FunctionTemplate::New(wxNodeObject::NewFunc);
  returnObjFt->InstanceTemplate()->SetInternalFieldCount(2);
  returnObjFt->SetClassName(v8::String::NewSymbol("Sizer"));
  wxNode_wxSizer::AddMethods(returnObjFt);

  v8::Local<v8::Function> returnObjFn = returnObjFt->GetFunction();
  v8::Handle<v8::Value> returnObjArgs[0];
  v8::Local<v8::Object> returnObj = returnObjFn->CallAsConstructor(0, returnObjArgs)->ToObject();
  returnObj->SetPointerInInternalField(0, (void*)obj);
  NodeExEvtHandlerImplWrap* wrap = new NodeExEvtHandlerImplWrap(returnObj);
  NodeExEvtHandlerImpl* evtHandler = dynamic_cast<NodeExEvtHandlerImpl*>(wrap);
  returnObj->SetPointerInInternalField(1, evtHandler);

  return scope.Close(returnObj);
}

/*static*/ v8::Handle<v8::Value> wxNode_wxSizer::NewCopy(const wxSizer& obj) {
  return v8::Undefined();
}

/*static*/ bool wxNode_wxSizer::AssignableFrom(const v8::Handle<v8::String>& className) {
  v8::String::AsciiValue classNameStr(className);
  return AssignableFrom(*classNameStr);
}

/*static*/ bool wxNode_wxSizer::AssignableFrom(const char* className) {
  if(!strcmp("Sizer", className)) { return true; }
  
  if(!strcmp("BoxSizer", className)) { return true; }

  if(!strcmp("WrapSizer", className)) { return true; }
  if(!strcmp("StaticBoxSizer", className)) { return true; }
  if(!strcmp("StdDialogButtonSizer", className)) { return true; }
  if(!strcmp("GridSizer", className)) { return true; }

  if(!strcmp("FlexGridSizer", className)) { return true; }

  if(!strcmp("GridBagSizer", className)) { return true; }


  return false;
}

/*static*/ v8::Handle<v8::Value> wxNode_wxSizer::_init(const v8::Arguments& args) {
  v8::HandleScope scope;

  

  std::ostringstream errStr;
  errStr << "Could not find matching constructor for arguments (class name: wxSizer).\n";
  errStr << "  arg count: " << args.Length() << "\n";
  for(int i = 0; i < args.Length(); i++) {
    v8::String::AsciiValue argStr(args[i]);
    errStr << "  arg[" << i << "]: " << *argStr << "\n";
  }
  return v8::ThrowException(v8::Exception::TypeError(v8::String::New(errStr.str().c_str())));
}


/*static*/ v8::Handle<v8::Value> wxNode_wxSizer::_Add(const v8::Arguments& args) {
  v8::HandleScope scope;
  wxNode_wxSizer* self = unwrap<wxNode_wxSizer>(args.This());

  
  /*
   * id: _27921
   */
  if(args.Length() == 5 && (args[0]->IsNull() || (args[0]->IsObject() && wxNode_wxWindow::AssignableFrom(args[0]->ToObject()->GetConstructorName()))) && args[1]->IsNumber() && args[2]->IsNumber() && args[3]->IsNumber() && (args[4]->IsNull() || (args[4]->IsObject() && wxNode_wxObject::AssignableFrom(args[4]->ToObject()->GetConstructorName())))) {
    wxNode_wxWindow* window = args[0]->IsNull() ? NULL : wxNodeObject::unwrap<wxNode_wxWindow>(args[0]->ToObject()); /* type: _1000 * */
    int proportion = (int)args[1]->ToInt32()->Value(); /* type: _165  */
    int flag = (int)args[2]->ToInt32()->Value(); /* type: _165  */
    int border = (int)args[3]->ToInt32()->Value(); /* type: _165  */
    wxNode_wxObject* userData = args[4]->IsNull() ? NULL : wxNodeObject::unwrap<wxNode_wxObject>(args[4]->ToObject()); /* type: _15746 * */
    

    wxSizerItem* returnVal = self->Add(window, proportion, flag, border, userData);

    return scope.Close(wxNode_wxSizerItem::New(returnVal));
  }
  
  /*
   * id: _27921
   */
  if(args.Length() == 4 && (args[0]->IsNull() || (args[0]->IsObject() && wxNode_wxWindow::AssignableFrom(args[0]->ToObject()->GetConstructorName()))) && args[1]->IsNumber() && args[2]->IsNumber() && args[3]->IsNumber()) {
    wxNode_wxWindow* window = args[0]->IsNull() ? NULL : wxNodeObject::unwrap<wxNode_wxWindow>(args[0]->ToObject()); /* type: _1000 * */
    int proportion = (int)args[1]->ToInt32()->Value(); /* type: _165  */
    int flag = (int)args[2]->ToInt32()->Value(); /* type: _165  */
    int border = (int)args[3]->ToInt32()->Value(); /* type: _165  */
    

    wxSizerItem* returnVal = self->Add(window, proportion, flag, border);

    return scope.Close(wxNode_wxSizerItem::New(returnVal));
  }
  
  /*
   * id: _27921
   */
  if(args.Length() == 3 && (args[0]->IsNull() || (args[0]->IsObject() && wxNode_wxWindow::AssignableFrom(args[0]->ToObject()->GetConstructorName()))) && args[1]->IsNumber() && args[2]->IsNumber()) {
    wxNode_wxWindow* window = args[0]->IsNull() ? NULL : wxNodeObject::unwrap<wxNode_wxWindow>(args[0]->ToObject()); /* type: _1000 * */
    int proportion = (int)args[1]->ToInt32()->Value(); /* type: _165  */
    int flag = (int)args[2]->ToInt32()->Value(); /* type: _165  */
    

    wxSizerItem* returnVal = self->Add(window, proportion, flag);

    return scope.Close(wxNode_wxSizerItem::New(returnVal));
  }
  
  /*
   * id: _27921
   */
  if(args.Length() == 2 && (args[0]->IsNull() || (args[0]->IsObject() && wxNode_wxWindow::AssignableFrom(args[0]->ToObject()->GetConstructorName()))) && args[1]->IsNumber()) {
    wxNode_wxWindow* window = args[0]->IsNull() ? NULL : wxNodeObject::unwrap<wxNode_wxWindow>(args[0]->ToObject()); /* type: _1000 * */
    int proportion = (int)args[1]->ToInt32()->Value(); /* type: _165  */
    

    wxSizerItem* returnVal = self->Add(window, proportion);

    return scope.Close(wxNode_wxSizerItem::New(returnVal));
  }
  
  /*
   * id: _27921
   */
  if(args.Length() == 1 && (args[0]->IsNull() || (args[0]->IsObject() && wxNode_wxWindow::AssignableFrom(args[0]->ToObject()->GetConstructorName())))) {
    wxNode_wxWindow* window = args[0]->IsNull() ? NULL : wxNodeObject::unwrap<wxNode_wxWindow>(args[0]->ToObject()); /* type: _1000 * */
    

    wxSizerItem* returnVal = self->Add(window);

    return scope.Close(wxNode_wxSizerItem::New(returnVal));
  }
  
  /*
   * id: _27922
   */
  if(args.Length() == 5 && (args[0]->IsNull() || (args[0]->IsObject() && wxNode_wxSizer::AssignableFrom(args[0]->ToObject()->GetConstructorName()))) && args[1]->IsNumber() && args[2]->IsNumber() && args[3]->IsNumber() && (args[4]->IsNull() || (args[4]->IsObject() && wxNode_wxObject::AssignableFrom(args[4]->ToObject()->GetConstructorName())))) {
    wxNode_wxSizer* sizer = args[0]->IsNull() ? NULL : wxNodeObject::unwrap<wxNode_wxSizer>(args[0]->ToObject()); /* type: _58915 * */
    int proportion = (int)args[1]->ToInt32()->Value(); /* type: _165  */
    int flag = (int)args[2]->ToInt32()->Value(); /* type: _165  */
    int border = (int)args[3]->ToInt32()->Value(); /* type: _165  */
    wxNode_wxObject* userData = args[4]->IsNull() ? NULL : wxNodeObject::unwrap<wxNode_wxObject>(args[4]->ToObject()); /* type: _15746 * */
    

    wxSizerItem* returnVal = self->Add(sizer, proportion, flag, border, userData);

    return scope.Close(wxNode_wxSizerItem::New(returnVal));
  }
  
  /*
   * id: _27922
   */
  if(args.Length() == 4 && (args[0]->IsNull() || (args[0]->IsObject() && wxNode_wxSizer::AssignableFrom(args[0]->ToObject()->GetConstructorName()))) && args[1]->IsNumber() && args[2]->IsNumber() && args[3]->IsNumber()) {
    wxNode_wxSizer* sizer = args[0]->IsNull() ? NULL : wxNodeObject::unwrap<wxNode_wxSizer>(args[0]->ToObject()); /* type: _58915 * */
    int proportion = (int)args[1]->ToInt32()->Value(); /* type: _165  */
    int flag = (int)args[2]->ToInt32()->Value(); /* type: _165  */
    int border = (int)args[3]->ToInt32()->Value(); /* type: _165  */
    

    wxSizerItem* returnVal = self->Add(sizer, proportion, flag, border);

    return scope.Close(wxNode_wxSizerItem::New(returnVal));
  }
  
  /*
   * id: _27922
   */
  if(args.Length() == 3 && (args[0]->IsNull() || (args[0]->IsObject() && wxNode_wxSizer::AssignableFrom(args[0]->ToObject()->GetConstructorName()))) && args[1]->IsNumber() && args[2]->IsNumber()) {
    wxNode_wxSizer* sizer = args[0]->IsNull() ? NULL : wxNodeObject::unwrap<wxNode_wxSizer>(args[0]->ToObject()); /* type: _58915 * */
    int proportion = (int)args[1]->ToInt32()->Value(); /* type: _165  */
    int flag = (int)args[2]->ToInt32()->Value(); /* type: _165  */
    

    wxSizerItem* returnVal = self->Add(sizer, proportion, flag);

    return scope.Close(wxNode_wxSizerItem::New(returnVal));
  }
  
  /*
   * id: _27922
   */
  if(args.Length() == 2 && (args[0]->IsNull() || (args[0]->IsObject() && wxNode_wxSizer::AssignableFrom(args[0]->ToObject()->GetConstructorName()))) && args[1]->IsNumber()) {
    wxNode_wxSizer* sizer = args[0]->IsNull() ? NULL : wxNodeObject::unwrap<wxNode_wxSizer>(args[0]->ToObject()); /* type: _58915 * */
    int proportion = (int)args[1]->ToInt32()->Value(); /* type: _165  */
    

    wxSizerItem* returnVal = self->Add(sizer, proportion);

    return scope.Close(wxNode_wxSizerItem::New(returnVal));
  }
  
  /*
   * id: _27922
   */
  if(args.Length() == 1 && (args[0]->IsNull() || (args[0]->IsObject() && wxNode_wxSizer::AssignableFrom(args[0]->ToObject()->GetConstructorName())))) {
    wxNode_wxSizer* sizer = args[0]->IsNull() ? NULL : wxNodeObject::unwrap<wxNode_wxSizer>(args[0]->ToObject()); /* type: _58915 * */
    

    wxSizerItem* returnVal = self->Add(sizer);

    return scope.Close(wxNode_wxSizerItem::New(returnVal));
  }
  
  /*
   * id: _27923
   */
  if(args.Length() == 6 && args[0]->IsNumber() && args[1]->IsNumber() && args[2]->IsNumber() && args[3]->IsNumber() && args[4]->IsNumber() && (args[5]->IsNull() || (args[5]->IsObject() && wxNode_wxObject::AssignableFrom(args[5]->ToObject()->GetConstructorName())))) {
    int width = (int)args[0]->ToInt32()->Value(); /* type: _165  */
    int height = (int)args[1]->ToInt32()->Value(); /* type: _165  */
    int proportion = (int)args[2]->ToInt32()->Value(); /* type: _165  */
    int flag = (int)args[3]->ToInt32()->Value(); /* type: _165  */
    int border = (int)args[4]->ToInt32()->Value(); /* type: _165  */
    wxNode_wxObject* userData = args[5]->IsNull() ? NULL : wxNodeObject::unwrap<wxNode_wxObject>(args[5]->ToObject()); /* type: _15746 * */
    

    wxSizerItem* returnVal = self->Add(width, height, proportion, flag, border, userData);

    return scope.Close(wxNode_wxSizerItem::New(returnVal));
  }
  
  /*
   * id: _27923
   */
  if(args.Length() == 5 && args[0]->IsNumber() && args[1]->IsNumber() && args[2]->IsNumber() && args[3]->IsNumber() && args[4]->IsNumber()) {
    int width = (int)args[0]->ToInt32()->Value(); /* type: _165  */
    int height = (int)args[1]->ToInt32()->Value(); /* type: _165  */
    int proportion = (int)args[2]->ToInt32()->Value(); /* type: _165  */
    int flag = (int)args[3]->ToInt32()->Value(); /* type: _165  */
    int border = (int)args[4]->ToInt32()->Value(); /* type: _165  */
    

    wxSizerItem* returnVal = self->Add(width, height, proportion, flag, border);

    return scope.Close(wxNode_wxSizerItem::New(returnVal));
  }
  
  /*
   * id: _27923
   */
  if(args.Length() == 4 && args[0]->IsNumber() && args[1]->IsNumber() && args[2]->IsNumber() && args[3]->IsNumber()) {
    int width = (int)args[0]->ToInt32()->Value(); /* type: _165  */
    int height = (int)args[1]->ToInt32()->Value(); /* type: _165  */
    int proportion = (int)args[2]->ToInt32()->Value(); /* type: _165  */
    int flag = (int)args[3]->ToInt32()->Value(); /* type: _165  */
    

    wxSizerItem* returnVal = self->Add(width, height, proportion, flag);

    return scope.Close(wxNode_wxSizerItem::New(returnVal));
  }
  
  /*
   * id: _27923
   */
  if(args.Length() == 3 && args[0]->IsNumber() && args[1]->IsNumber() && args[2]->IsNumber()) {
    int width = (int)args[0]->ToInt32()->Value(); /* type: _165  */
    int height = (int)args[1]->ToInt32()->Value(); /* type: _165  */
    int proportion = (int)args[2]->ToInt32()->Value(); /* type: _165  */
    

    wxSizerItem* returnVal = self->Add(width, height, proportion);

    return scope.Close(wxNode_wxSizerItem::New(returnVal));
  }
  
  /*
   * id: _27923
   */
  if(args.Length() == 2 && args[0]->IsNumber() && args[1]->IsNumber()) {
    int width = (int)args[0]->ToInt32()->Value(); /* type: _165  */
    int height = (int)args[1]->ToInt32()->Value(); /* type: _165  */
    

    wxSizerItem* returnVal = self->Add(width, height);

    return scope.Close(wxNode_wxSizerItem::New(returnVal));
  }
  
  /*
   * id: _27924
   */
  if(args.Length() == 2 && (args[0]->IsNull() || (args[0]->IsObject() && wxNode_wxWindow::AssignableFrom(args[0]->ToObject()->GetConstructorName()))) && (args[1]->IsNull() || (args[1]->IsObject() && wxNode_wxSizerFlags::AssignableFrom(args[1]->ToObject()->GetConstructorName())))) {
    wxNode_wxWindow* window = args[0]->IsNull() ? NULL : wxNodeObject::unwrap<wxNode_wxWindow>(args[0]->ToObject()); /* type: _1000 * */
    wxNode_wxSizerFlags* flags = args[1]->IsNull() ? NULL : wxNodeObject::unwrap<wxNode_wxSizerFlags>(args[1]->ToObject()); /* type: _58914  */
    

    wxSizerItem* returnVal = self->Add(window, *flags);

    return scope.Close(wxNode_wxSizerItem::New(returnVal));
  }
  
  /*
   * id: _27925
   */
  if(args.Length() == 2 && (args[0]->IsNull() || (args[0]->IsObject() && wxNode_wxSizer::AssignableFrom(args[0]->ToObject()->GetConstructorName()))) && (args[1]->IsNull() || (args[1]->IsObject() && wxNode_wxSizerFlags::AssignableFrom(args[1]->ToObject()->GetConstructorName())))) {
    wxNode_wxSizer* sizer = args[0]->IsNull() ? NULL : wxNodeObject::unwrap<wxNode_wxSizer>(args[0]->ToObject()); /* type: _58915 * */
    wxNode_wxSizerFlags* flags = args[1]->IsNull() ? NULL : wxNodeObject::unwrap<wxNode_wxSizerFlags>(args[1]->ToObject()); /* type: _58914  */
    

    wxSizerItem* returnVal = self->Add(sizer, *flags);

    return scope.Close(wxNode_wxSizerItem::New(returnVal));
  }
  
  /*
   * id: _27926
   */
  if(args.Length() == 3 && args[0]->IsNumber() && args[1]->IsNumber() && (args[2]->IsNull() || (args[2]->IsObject() && wxNode_wxSizerFlags::AssignableFrom(args[2]->ToObject()->GetConstructorName())))) {
    int width = (int)args[0]->ToInt32()->Value(); /* type: _165  */
    int height = (int)args[1]->ToInt32()->Value(); /* type: _165  */
    wxNode_wxSizerFlags* flags = args[2]->IsNull() ? NULL : wxNodeObject::unwrap<wxNode_wxSizerFlags>(args[2]->ToObject()); /* type: _58914  */
    

    wxSizerItem* returnVal = self->Add(width, height, *flags);

    return scope.Close(wxNode_wxSizerItem::New(returnVal));
  }
  
  /*
   * id: _27927
   */
  if(args.Length() == 1 && (args[0]->IsNull() || (args[0]->IsObject() && wxNode_wxSizerItem::AssignableFrom(args[0]->ToObject()->GetConstructorName())))) {
    wxNode_wxSizerItem* item = args[0]->IsNull() ? NULL : wxNodeObject::unwrap<wxNode_wxSizerItem>(args[0]->ToObject()); /* type: _54181 * */
    

    wxSizerItem* returnVal = self->Add(item);

    return scope.Close(wxNode_wxSizerItem::New(returnVal));
  }
  

  std::ostringstream errStr;
  errStr << "Could not find matching method for arguments (method name: wxSizer::Add).\n";
  errStr << "  arg count: " << args.Length() << "\n";
  for(int i = 0; i < args.Length(); i++) {
    v8::String::AsciiValue argStr(args[i]);
    errStr << "  arg[" << i << "]: " << *argStr << "\n";
  }
  return v8::ThrowException(v8::Exception::TypeError(v8::String::New(errStr.str().c_str())));
}

/*static*/ v8::Handle<v8::Value> wxNode_wxSizer::_AddSpacer(const v8::Arguments& args) {
  v8::HandleScope scope;
  wxNode_wxSizer* self = unwrap<wxNode_wxSizer>(args.This());

  
  /*
   * id: _27928
   */
  if(args.Length() == 1 && args[0]->IsNumber()) {
    int size = (int)args[0]->ToInt32()->Value(); /* type: _165  */
    

    wxSizerItem* returnVal = self->AddSpacer(size);

    return scope.Close(wxNode_wxSizerItem::New(returnVal));
  }
  

  std::ostringstream errStr;
  errStr << "Could not find matching method for arguments (method name: wxSizer::AddSpacer).\n";
  errStr << "  arg count: " << args.Length() << "\n";
  for(int i = 0; i < args.Length(); i++) {
    v8::String::AsciiValue argStr(args[i]);
    errStr << "  arg[" << i << "]: " << *argStr << "\n";
  }
  return v8::ThrowException(v8::Exception::TypeError(v8::String::New(errStr.str().c_str())));
}

/*static*/ v8::Handle<v8::Value> wxNode_wxSizer::_AddStretchSpacer(const v8::Arguments& args) {
  v8::HandleScope scope;
  wxNode_wxSizer* self = unwrap<wxNode_wxSizer>(args.This());

  
  /*
   * id: _27929
   */
  if(args.Length() == 1 && args[0]->IsNumber()) {
    int prop = (int)args[0]->ToInt32()->Value(); /* type: _165  */
    

    wxSizerItem* returnVal = self->AddStretchSpacer(prop);

    return scope.Close(wxNode_wxSizerItem::New(returnVal));
  }
  
  /*
   * id: _27929
   */
  if(args.Length() == 0) {
    

    wxSizerItem* returnVal = self->AddStretchSpacer();

    return scope.Close(wxNode_wxSizerItem::New(returnVal));
  }
  

  std::ostringstream errStr;
  errStr << "Could not find matching method for arguments (method name: wxSizer::AddStretchSpacer).\n";
  errStr << "  arg count: " << args.Length() << "\n";
  for(int i = 0; i < args.Length(); i++) {
    v8::String::AsciiValue argStr(args[i]);
    errStr << "  arg[" << i << "]: " << *argStr << "\n";
  }
  return v8::ThrowException(v8::Exception::TypeError(v8::String::New(errStr.str().c_str())));
}

/*static*/ v8::Handle<v8::Value> wxNode_wxSizer::_Insert(const v8::Arguments& args) {
  v8::HandleScope scope;
  wxNode_wxSizer* self = unwrap<wxNode_wxSizer>(args.This());

  
  /*
   * id: _27930
   */
  if(args.Length() == 6 && args[0]->IsNumber() && (args[1]->IsNull() || (args[1]->IsObject() && wxNode_wxWindow::AssignableFrom(args[1]->ToObject()->GetConstructorName()))) && args[2]->IsNumber() && args[3]->IsNumber() && args[4]->IsNumber() && (args[5]->IsNull() || (args[5]->IsObject() && wxNode_wxObject::AssignableFrom(args[5]->ToObject()->GetConstructorName())))) {
    unsigned int index = (unsigned int)args[0]->ToInt32()->Value(); /* type: _8711  */
    wxNode_wxWindow* window = args[1]->IsNull() ? NULL : wxNodeObject::unwrap<wxNode_wxWindow>(args[1]->ToObject()); /* type: _1000 * */
    int proportion = (int)args[2]->ToInt32()->Value(); /* type: _165  */
    int flag = (int)args[3]->ToInt32()->Value(); /* type: _165  */
    int border = (int)args[4]->ToInt32()->Value(); /* type: _165  */
    wxNode_wxObject* userData = args[5]->IsNull() ? NULL : wxNodeObject::unwrap<wxNode_wxObject>(args[5]->ToObject()); /* type: _15746 * */
    

    wxSizerItem* returnVal = self->Insert(index, window, proportion, flag, border, userData);

    return scope.Close(wxNode_wxSizerItem::New(returnVal));
  }
  
  /*
   * id: _27930
   */
  if(args.Length() == 5 && args[0]->IsNumber() && (args[1]->IsNull() || (args[1]->IsObject() && wxNode_wxWindow::AssignableFrom(args[1]->ToObject()->GetConstructorName()))) && args[2]->IsNumber() && args[3]->IsNumber() && args[4]->IsNumber()) {
    unsigned int index = (unsigned int)args[0]->ToInt32()->Value(); /* type: _8711  */
    wxNode_wxWindow* window = args[1]->IsNull() ? NULL : wxNodeObject::unwrap<wxNode_wxWindow>(args[1]->ToObject()); /* type: _1000 * */
    int proportion = (int)args[2]->ToInt32()->Value(); /* type: _165  */
    int flag = (int)args[3]->ToInt32()->Value(); /* type: _165  */
    int border = (int)args[4]->ToInt32()->Value(); /* type: _165  */
    

    wxSizerItem* returnVal = self->Insert(index, window, proportion, flag, border);

    return scope.Close(wxNode_wxSizerItem::New(returnVal));
  }
  
  /*
   * id: _27930
   */
  if(args.Length() == 4 && args[0]->IsNumber() && (args[1]->IsNull() || (args[1]->IsObject() && wxNode_wxWindow::AssignableFrom(args[1]->ToObject()->GetConstructorName()))) && args[2]->IsNumber() && args[3]->IsNumber()) {
    unsigned int index = (unsigned int)args[0]->ToInt32()->Value(); /* type: _8711  */
    wxNode_wxWindow* window = args[1]->IsNull() ? NULL : wxNodeObject::unwrap<wxNode_wxWindow>(args[1]->ToObject()); /* type: _1000 * */
    int proportion = (int)args[2]->ToInt32()->Value(); /* type: _165  */
    int flag = (int)args[3]->ToInt32()->Value(); /* type: _165  */
    

    wxSizerItem* returnVal = self->Insert(index, window, proportion, flag);

    return scope.Close(wxNode_wxSizerItem::New(returnVal));
  }
  
  /*
   * id: _27930
   */
  if(args.Length() == 3 && args[0]->IsNumber() && (args[1]->IsNull() || (args[1]->IsObject() && wxNode_wxWindow::AssignableFrom(args[1]->ToObject()->GetConstructorName()))) && args[2]->IsNumber()) {
    unsigned int index = (unsigned int)args[0]->ToInt32()->Value(); /* type: _8711  */
    wxNode_wxWindow* window = args[1]->IsNull() ? NULL : wxNodeObject::unwrap<wxNode_wxWindow>(args[1]->ToObject()); /* type: _1000 * */
    int proportion = (int)args[2]->ToInt32()->Value(); /* type: _165  */
    

    wxSizerItem* returnVal = self->Insert(index, window, proportion);

    return scope.Close(wxNode_wxSizerItem::New(returnVal));
  }
  
  /*
   * id: _27930
   */
  if(args.Length() == 2 && args[0]->IsNumber() && (args[1]->IsNull() || (args[1]->IsObject() && wxNode_wxWindow::AssignableFrom(args[1]->ToObject()->GetConstructorName())))) {
    unsigned int index = (unsigned int)args[0]->ToInt32()->Value(); /* type: _8711  */
    wxNode_wxWindow* window = args[1]->IsNull() ? NULL : wxNodeObject::unwrap<wxNode_wxWindow>(args[1]->ToObject()); /* type: _1000 * */
    

    wxSizerItem* returnVal = self->Insert(index, window);

    return scope.Close(wxNode_wxSizerItem::New(returnVal));
  }
  
  /*
   * id: _27931
   */
  if(args.Length() == 6 && args[0]->IsNumber() && (args[1]->IsNull() || (args[1]->IsObject() && wxNode_wxSizer::AssignableFrom(args[1]->ToObject()->GetConstructorName()))) && args[2]->IsNumber() && args[3]->IsNumber() && args[4]->IsNumber() && (args[5]->IsNull() || (args[5]->IsObject() && wxNode_wxObject::AssignableFrom(args[5]->ToObject()->GetConstructorName())))) {
    unsigned int index = (unsigned int)args[0]->ToInt32()->Value(); /* type: _8711  */
    wxNode_wxSizer* sizer = args[1]->IsNull() ? NULL : wxNodeObject::unwrap<wxNode_wxSizer>(args[1]->ToObject()); /* type: _58915 * */
    int proportion = (int)args[2]->ToInt32()->Value(); /* type: _165  */
    int flag = (int)args[3]->ToInt32()->Value(); /* type: _165  */
    int border = (int)args[4]->ToInt32()->Value(); /* type: _165  */
    wxNode_wxObject* userData = args[5]->IsNull() ? NULL : wxNodeObject::unwrap<wxNode_wxObject>(args[5]->ToObject()); /* type: _15746 * */
    

    wxSizerItem* returnVal = self->Insert(index, sizer, proportion, flag, border, userData);

    return scope.Close(wxNode_wxSizerItem::New(returnVal));
  }
  
  /*
   * id: _27931
   */
  if(args.Length() == 5 && args[0]->IsNumber() && (args[1]->IsNull() || (args[1]->IsObject() && wxNode_wxSizer::AssignableFrom(args[1]->ToObject()->GetConstructorName()))) && args[2]->IsNumber() && args[3]->IsNumber() && args[4]->IsNumber()) {
    unsigned int index = (unsigned int)args[0]->ToInt32()->Value(); /* type: _8711  */
    wxNode_wxSizer* sizer = args[1]->IsNull() ? NULL : wxNodeObject::unwrap<wxNode_wxSizer>(args[1]->ToObject()); /* type: _58915 * */
    int proportion = (int)args[2]->ToInt32()->Value(); /* type: _165  */
    int flag = (int)args[3]->ToInt32()->Value(); /* type: _165  */
    int border = (int)args[4]->ToInt32()->Value(); /* type: _165  */
    

    wxSizerItem* returnVal = self->Insert(index, sizer, proportion, flag, border);

    return scope.Close(wxNode_wxSizerItem::New(returnVal));
  }
  
  /*
   * id: _27931
   */
  if(args.Length() == 4 && args[0]->IsNumber() && (args[1]->IsNull() || (args[1]->IsObject() && wxNode_wxSizer::AssignableFrom(args[1]->ToObject()->GetConstructorName()))) && args[2]->IsNumber() && args[3]->IsNumber()) {
    unsigned int index = (unsigned int)args[0]->ToInt32()->Value(); /* type: _8711  */
    wxNode_wxSizer* sizer = args[1]->IsNull() ? NULL : wxNodeObject::unwrap<wxNode_wxSizer>(args[1]->ToObject()); /* type: _58915 * */
    int proportion = (int)args[2]->ToInt32()->Value(); /* type: _165  */
    int flag = (int)args[3]->ToInt32()->Value(); /* type: _165  */
    

    wxSizerItem* returnVal = self->Insert(index, sizer, proportion, flag);

    return scope.Close(wxNode_wxSizerItem::New(returnVal));
  }
  
  /*
   * id: _27931
   */
  if(args.Length() == 3 && args[0]->IsNumber() && (args[1]->IsNull() || (args[1]->IsObject() && wxNode_wxSizer::AssignableFrom(args[1]->ToObject()->GetConstructorName()))) && args[2]->IsNumber()) {
    unsigned int index = (unsigned int)args[0]->ToInt32()->Value(); /* type: _8711  */
    wxNode_wxSizer* sizer = args[1]->IsNull() ? NULL : wxNodeObject::unwrap<wxNode_wxSizer>(args[1]->ToObject()); /* type: _58915 * */
    int proportion = (int)args[2]->ToInt32()->Value(); /* type: _165  */
    

    wxSizerItem* returnVal = self->Insert(index, sizer, proportion);

    return scope.Close(wxNode_wxSizerItem::New(returnVal));
  }
  
  /*
   * id: _27931
   */
  if(args.Length() == 2 && args[0]->IsNumber() && (args[1]->IsNull() || (args[1]->IsObject() && wxNode_wxSizer::AssignableFrom(args[1]->ToObject()->GetConstructorName())))) {
    unsigned int index = (unsigned int)args[0]->ToInt32()->Value(); /* type: _8711  */
    wxNode_wxSizer* sizer = args[1]->IsNull() ? NULL : wxNodeObject::unwrap<wxNode_wxSizer>(args[1]->ToObject()); /* type: _58915 * */
    

    wxSizerItem* returnVal = self->Insert(index, sizer);

    return scope.Close(wxNode_wxSizerItem::New(returnVal));
  }
  
  /*
   * id: _27932
   */
  if(args.Length() == 7 && args[0]->IsNumber() && args[1]->IsNumber() && args[2]->IsNumber() && args[3]->IsNumber() && args[4]->IsNumber() && args[5]->IsNumber() && (args[6]->IsNull() || (args[6]->IsObject() && wxNode_wxObject::AssignableFrom(args[6]->ToObject()->GetConstructorName())))) {
    unsigned int index = (unsigned int)args[0]->ToInt32()->Value(); /* type: _8711  */
    int width = (int)args[1]->ToInt32()->Value(); /* type: _165  */
    int height = (int)args[2]->ToInt32()->Value(); /* type: _165  */
    int proportion = (int)args[3]->ToInt32()->Value(); /* type: _165  */
    int flag = (int)args[4]->ToInt32()->Value(); /* type: _165  */
    int border = (int)args[5]->ToInt32()->Value(); /* type: _165  */
    wxNode_wxObject* userData = args[6]->IsNull() ? NULL : wxNodeObject::unwrap<wxNode_wxObject>(args[6]->ToObject()); /* type: _15746 * */
    

    wxSizerItem* returnVal = self->Insert(index, width, height, proportion, flag, border, userData);

    return scope.Close(wxNode_wxSizerItem::New(returnVal));
  }
  
  /*
   * id: _27932
   */
  if(args.Length() == 6 && args[0]->IsNumber() && args[1]->IsNumber() && args[2]->IsNumber() && args[3]->IsNumber() && args[4]->IsNumber() && args[5]->IsNumber()) {
    unsigned int index = (unsigned int)args[0]->ToInt32()->Value(); /* type: _8711  */
    int width = (int)args[1]->ToInt32()->Value(); /* type: _165  */
    int height = (int)args[2]->ToInt32()->Value(); /* type: _165  */
    int proportion = (int)args[3]->ToInt32()->Value(); /* type: _165  */
    int flag = (int)args[4]->ToInt32()->Value(); /* type: _165  */
    int border = (int)args[5]->ToInt32()->Value(); /* type: _165  */
    

    wxSizerItem* returnVal = self->Insert(index, width, height, proportion, flag, border);

    return scope.Close(wxNode_wxSizerItem::New(returnVal));
  }
  
  /*
   * id: _27932
   */
  if(args.Length() == 5 && args[0]->IsNumber() && args[1]->IsNumber() && args[2]->IsNumber() && args[3]->IsNumber() && args[4]->IsNumber()) {
    unsigned int index = (unsigned int)args[0]->ToInt32()->Value(); /* type: _8711  */
    int width = (int)args[1]->ToInt32()->Value(); /* type: _165  */
    int height = (int)args[2]->ToInt32()->Value(); /* type: _165  */
    int proportion = (int)args[3]->ToInt32()->Value(); /* type: _165  */
    int flag = (int)args[4]->ToInt32()->Value(); /* type: _165  */
    

    wxSizerItem* returnVal = self->Insert(index, width, height, proportion, flag);

    return scope.Close(wxNode_wxSizerItem::New(returnVal));
  }
  
  /*
   * id: _27932
   */
  if(args.Length() == 4 && args[0]->IsNumber() && args[1]->IsNumber() && args[2]->IsNumber() && args[3]->IsNumber()) {
    unsigned int index = (unsigned int)args[0]->ToInt32()->Value(); /* type: _8711  */
    int width = (int)args[1]->ToInt32()->Value(); /* type: _165  */
    int height = (int)args[2]->ToInt32()->Value(); /* type: _165  */
    int proportion = (int)args[3]->ToInt32()->Value(); /* type: _165  */
    

    wxSizerItem* returnVal = self->Insert(index, width, height, proportion);

    return scope.Close(wxNode_wxSizerItem::New(returnVal));
  }
  
  /*
   * id: _27932
   */
  if(args.Length() == 3 && args[0]->IsNumber() && args[1]->IsNumber() && args[2]->IsNumber()) {
    unsigned int index = (unsigned int)args[0]->ToInt32()->Value(); /* type: _8711  */
    int width = (int)args[1]->ToInt32()->Value(); /* type: _165  */
    int height = (int)args[2]->ToInt32()->Value(); /* type: _165  */
    

    wxSizerItem* returnVal = self->Insert(index, width, height);

    return scope.Close(wxNode_wxSizerItem::New(returnVal));
  }
  
  /*
   * id: _27933
   */
  if(args.Length() == 3 && args[0]->IsNumber() && (args[1]->IsNull() || (args[1]->IsObject() && wxNode_wxWindow::AssignableFrom(args[1]->ToObject()->GetConstructorName()))) && (args[2]->IsNull() || (args[2]->IsObject() && wxNode_wxSizerFlags::AssignableFrom(args[2]->ToObject()->GetConstructorName())))) {
    unsigned int index = (unsigned int)args[0]->ToInt32()->Value(); /* type: _8711  */
    wxNode_wxWindow* window = args[1]->IsNull() ? NULL : wxNodeObject::unwrap<wxNode_wxWindow>(args[1]->ToObject()); /* type: _1000 * */
    wxNode_wxSizerFlags* flags = args[2]->IsNull() ? NULL : wxNodeObject::unwrap<wxNode_wxSizerFlags>(args[2]->ToObject()); /* type: _58914  */
    

    wxSizerItem* returnVal = self->Insert(index, window, *flags);

    return scope.Close(wxNode_wxSizerItem::New(returnVal));
  }
  
  /*
   * id: _27934
   */
  if(args.Length() == 3 && args[0]->IsNumber() && (args[1]->IsNull() || (args[1]->IsObject() && wxNode_wxSizer::AssignableFrom(args[1]->ToObject()->GetConstructorName()))) && (args[2]->IsNull() || (args[2]->IsObject() && wxNode_wxSizerFlags::AssignableFrom(args[2]->ToObject()->GetConstructorName())))) {
    unsigned int index = (unsigned int)args[0]->ToInt32()->Value(); /* type: _8711  */
    wxNode_wxSizer* sizer = args[1]->IsNull() ? NULL : wxNodeObject::unwrap<wxNode_wxSizer>(args[1]->ToObject()); /* type: _58915 * */
    wxNode_wxSizerFlags* flags = args[2]->IsNull() ? NULL : wxNodeObject::unwrap<wxNode_wxSizerFlags>(args[2]->ToObject()); /* type: _58914  */
    

    wxSizerItem* returnVal = self->Insert(index, sizer, *flags);

    return scope.Close(wxNode_wxSizerItem::New(returnVal));
  }
  
  /*
   * id: _27935
   */
  if(args.Length() == 4 && args[0]->IsNumber() && args[1]->IsNumber() && args[2]->IsNumber() && (args[3]->IsNull() || (args[3]->IsObject() && wxNode_wxSizerFlags::AssignableFrom(args[3]->ToObject()->GetConstructorName())))) {
    unsigned int index = (unsigned int)args[0]->ToInt32()->Value(); /* type: _8711  */
    int width = (int)args[1]->ToInt32()->Value(); /* type: _165  */
    int height = (int)args[2]->ToInt32()->Value(); /* type: _165  */
    wxNode_wxSizerFlags* flags = args[3]->IsNull() ? NULL : wxNodeObject::unwrap<wxNode_wxSizerFlags>(args[3]->ToObject()); /* type: _58914  */
    

    wxSizerItem* returnVal = self->Insert(index, width, height, *flags);

    return scope.Close(wxNode_wxSizerItem::New(returnVal));
  }
  
  /*
   * id: _27936
   */
  if(args.Length() == 2 && args[0]->IsNumber() && (args[1]->IsNull() || (args[1]->IsObject() && wxNode_wxSizerItem::AssignableFrom(args[1]->ToObject()->GetConstructorName())))) {
    unsigned int index = (unsigned int)args[0]->ToInt32()->Value(); /* type: _8711  */
    wxNode_wxSizerItem* item = args[1]->IsNull() ? NULL : wxNodeObject::unwrap<wxNode_wxSizerItem>(args[1]->ToObject()); /* type: _54181 * */
    

    wxSizerItem* returnVal = self->Insert(index, item);

    return scope.Close(wxNode_wxSizerItem::New(returnVal));
  }
  

  std::ostringstream errStr;
  errStr << "Could not find matching method for arguments (method name: wxSizer::Insert).\n";
  errStr << "  arg count: " << args.Length() << "\n";
  for(int i = 0; i < args.Length(); i++) {
    v8::String::AsciiValue argStr(args[i]);
    errStr << "  arg[" << i << "]: " << *argStr << "\n";
  }
  return v8::ThrowException(v8::Exception::TypeError(v8::String::New(errStr.str().c_str())));
}

/*static*/ v8::Handle<v8::Value> wxNode_wxSizer::_InsertSpacer(const v8::Arguments& args) {
  v8::HandleScope scope;
  wxNode_wxSizer* self = unwrap<wxNode_wxSizer>(args.This());

  
  /*
   * id: _27937
   */
  if(args.Length() == 2 && args[0]->IsNumber() && args[1]->IsNumber()) {
    unsigned int index = (unsigned int)args[0]->ToInt32()->Value(); /* type: _8711  */
    int size = (int)args[1]->ToInt32()->Value(); /* type: _165  */
    

    wxSizerItem* returnVal = self->InsertSpacer(index, size);

    return scope.Close(wxNode_wxSizerItem::New(returnVal));
  }
  

  std::ostringstream errStr;
  errStr << "Could not find matching method for arguments (method name: wxSizer::InsertSpacer).\n";
  errStr << "  arg count: " << args.Length() << "\n";
  for(int i = 0; i < args.Length(); i++) {
    v8::String::AsciiValue argStr(args[i]);
    errStr << "  arg[" << i << "]: " << *argStr << "\n";
  }
  return v8::ThrowException(v8::Exception::TypeError(v8::String::New(errStr.str().c_str())));
}

/*static*/ v8::Handle<v8::Value> wxNode_wxSizer::_InsertStretchSpacer(const v8::Arguments& args) {
  v8::HandleScope scope;
  wxNode_wxSizer* self = unwrap<wxNode_wxSizer>(args.This());

  
  /*
   * id: _27938
   */
  if(args.Length() == 2 && args[0]->IsNumber() && args[1]->IsNumber()) {
    unsigned int index = (unsigned int)args[0]->ToInt32()->Value(); /* type: _8711  */
    int prop = (int)args[1]->ToInt32()->Value(); /* type: _165  */
    

    wxSizerItem* returnVal = self->InsertStretchSpacer(index, prop);

    return scope.Close(wxNode_wxSizerItem::New(returnVal));
  }
  
  /*
   * id: _27938
   */
  if(args.Length() == 1 && args[0]->IsNumber()) {
    unsigned int index = (unsigned int)args[0]->ToInt32()->Value(); /* type: _8711  */
    

    wxSizerItem* returnVal = self->InsertStretchSpacer(index);

    return scope.Close(wxNode_wxSizerItem::New(returnVal));
  }
  

  std::ostringstream errStr;
  errStr << "Could not find matching method for arguments (method name: wxSizer::InsertStretchSpacer).\n";
  errStr << "  arg count: " << args.Length() << "\n";
  for(int i = 0; i < args.Length(); i++) {
    v8::String::AsciiValue argStr(args[i]);
    errStr << "  arg[" << i << "]: " << *argStr << "\n";
  }
  return v8::ThrowException(v8::Exception::TypeError(v8::String::New(errStr.str().c_str())));
}

/*static*/ v8::Handle<v8::Value> wxNode_wxSizer::_Prepend(const v8::Arguments& args) {
  v8::HandleScope scope;
  wxNode_wxSizer* self = unwrap<wxNode_wxSizer>(args.This());

  
  /*
   * id: _27939
   */
  if(args.Length() == 5 && (args[0]->IsNull() || (args[0]->IsObject() && wxNode_wxWindow::AssignableFrom(args[0]->ToObject()->GetConstructorName()))) && args[1]->IsNumber() && args[2]->IsNumber() && args[3]->IsNumber() && (args[4]->IsNull() || (args[4]->IsObject() && wxNode_wxObject::AssignableFrom(args[4]->ToObject()->GetConstructorName())))) {
    wxNode_wxWindow* window = args[0]->IsNull() ? NULL : wxNodeObject::unwrap<wxNode_wxWindow>(args[0]->ToObject()); /* type: _1000 * */
    int proportion = (int)args[1]->ToInt32()->Value(); /* type: _165  */
    int flag = (int)args[2]->ToInt32()->Value(); /* type: _165  */
    int border = (int)args[3]->ToInt32()->Value(); /* type: _165  */
    wxNode_wxObject* userData = args[4]->IsNull() ? NULL : wxNodeObject::unwrap<wxNode_wxObject>(args[4]->ToObject()); /* type: _15746 * */
    

    wxSizerItem* returnVal = self->Prepend(window, proportion, flag, border, userData);

    return scope.Close(wxNode_wxSizerItem::New(returnVal));
  }
  
  /*
   * id: _27939
   */
  if(args.Length() == 4 && (args[0]->IsNull() || (args[0]->IsObject() && wxNode_wxWindow::AssignableFrom(args[0]->ToObject()->GetConstructorName()))) && args[1]->IsNumber() && args[2]->IsNumber() && args[3]->IsNumber()) {
    wxNode_wxWindow* window = args[0]->IsNull() ? NULL : wxNodeObject::unwrap<wxNode_wxWindow>(args[0]->ToObject()); /* type: _1000 * */
    int proportion = (int)args[1]->ToInt32()->Value(); /* type: _165  */
    int flag = (int)args[2]->ToInt32()->Value(); /* type: _165  */
    int border = (int)args[3]->ToInt32()->Value(); /* type: _165  */
    

    wxSizerItem* returnVal = self->Prepend(window, proportion, flag, border);

    return scope.Close(wxNode_wxSizerItem::New(returnVal));
  }
  
  /*
   * id: _27939
   */
  if(args.Length() == 3 && (args[0]->IsNull() || (args[0]->IsObject() && wxNode_wxWindow::AssignableFrom(args[0]->ToObject()->GetConstructorName()))) && args[1]->IsNumber() && args[2]->IsNumber()) {
    wxNode_wxWindow* window = args[0]->IsNull() ? NULL : wxNodeObject::unwrap<wxNode_wxWindow>(args[0]->ToObject()); /* type: _1000 * */
    int proportion = (int)args[1]->ToInt32()->Value(); /* type: _165  */
    int flag = (int)args[2]->ToInt32()->Value(); /* type: _165  */
    

    wxSizerItem* returnVal = self->Prepend(window, proportion, flag);

    return scope.Close(wxNode_wxSizerItem::New(returnVal));
  }
  
  /*
   * id: _27939
   */
  if(args.Length() == 2 && (args[0]->IsNull() || (args[0]->IsObject() && wxNode_wxWindow::AssignableFrom(args[0]->ToObject()->GetConstructorName()))) && args[1]->IsNumber()) {
    wxNode_wxWindow* window = args[0]->IsNull() ? NULL : wxNodeObject::unwrap<wxNode_wxWindow>(args[0]->ToObject()); /* type: _1000 * */
    int proportion = (int)args[1]->ToInt32()->Value(); /* type: _165  */
    

    wxSizerItem* returnVal = self->Prepend(window, proportion);

    return scope.Close(wxNode_wxSizerItem::New(returnVal));
  }
  
  /*
   * id: _27939
   */
  if(args.Length() == 1 && (args[0]->IsNull() || (args[0]->IsObject() && wxNode_wxWindow::AssignableFrom(args[0]->ToObject()->GetConstructorName())))) {
    wxNode_wxWindow* window = args[0]->IsNull() ? NULL : wxNodeObject::unwrap<wxNode_wxWindow>(args[0]->ToObject()); /* type: _1000 * */
    

    wxSizerItem* returnVal = self->Prepend(window);

    return scope.Close(wxNode_wxSizerItem::New(returnVal));
  }
  
  /*
   * id: _27940
   */
  if(args.Length() == 5 && (args[0]->IsNull() || (args[0]->IsObject() && wxNode_wxSizer::AssignableFrom(args[0]->ToObject()->GetConstructorName()))) && args[1]->IsNumber() && args[2]->IsNumber() && args[3]->IsNumber() && (args[4]->IsNull() || (args[4]->IsObject() && wxNode_wxObject::AssignableFrom(args[4]->ToObject()->GetConstructorName())))) {
    wxNode_wxSizer* sizer = args[0]->IsNull() ? NULL : wxNodeObject::unwrap<wxNode_wxSizer>(args[0]->ToObject()); /* type: _58915 * */
    int proportion = (int)args[1]->ToInt32()->Value(); /* type: _165  */
    int flag = (int)args[2]->ToInt32()->Value(); /* type: _165  */
    int border = (int)args[3]->ToInt32()->Value(); /* type: _165  */
    wxNode_wxObject* userData = args[4]->IsNull() ? NULL : wxNodeObject::unwrap<wxNode_wxObject>(args[4]->ToObject()); /* type: _15746 * */
    

    wxSizerItem* returnVal = self->Prepend(sizer, proportion, flag, border, userData);

    return scope.Close(wxNode_wxSizerItem::New(returnVal));
  }
  
  /*
   * id: _27940
   */
  if(args.Length() == 4 && (args[0]->IsNull() || (args[0]->IsObject() && wxNode_wxSizer::AssignableFrom(args[0]->ToObject()->GetConstructorName()))) && args[1]->IsNumber() && args[2]->IsNumber() && args[3]->IsNumber()) {
    wxNode_wxSizer* sizer = args[0]->IsNull() ? NULL : wxNodeObject::unwrap<wxNode_wxSizer>(args[0]->ToObject()); /* type: _58915 * */
    int proportion = (int)args[1]->ToInt32()->Value(); /* type: _165  */
    int flag = (int)args[2]->ToInt32()->Value(); /* type: _165  */
    int border = (int)args[3]->ToInt32()->Value(); /* type: _165  */
    

    wxSizerItem* returnVal = self->Prepend(sizer, proportion, flag, border);

    return scope.Close(wxNode_wxSizerItem::New(returnVal));
  }
  
  /*
   * id: _27940
   */
  if(args.Length() == 3 && (args[0]->IsNull() || (args[0]->IsObject() && wxNode_wxSizer::AssignableFrom(args[0]->ToObject()->GetConstructorName()))) && args[1]->IsNumber() && args[2]->IsNumber()) {
    wxNode_wxSizer* sizer = args[0]->IsNull() ? NULL : wxNodeObject::unwrap<wxNode_wxSizer>(args[0]->ToObject()); /* type: _58915 * */
    int proportion = (int)args[1]->ToInt32()->Value(); /* type: _165  */
    int flag = (int)args[2]->ToInt32()->Value(); /* type: _165  */
    

    wxSizerItem* returnVal = self->Prepend(sizer, proportion, flag);

    return scope.Close(wxNode_wxSizerItem::New(returnVal));
  }
  
  /*
   * id: _27940
   */
  if(args.Length() == 2 && (args[0]->IsNull() || (args[0]->IsObject() && wxNode_wxSizer::AssignableFrom(args[0]->ToObject()->GetConstructorName()))) && args[1]->IsNumber()) {
    wxNode_wxSizer* sizer = args[0]->IsNull() ? NULL : wxNodeObject::unwrap<wxNode_wxSizer>(args[0]->ToObject()); /* type: _58915 * */
    int proportion = (int)args[1]->ToInt32()->Value(); /* type: _165  */
    

    wxSizerItem* returnVal = self->Prepend(sizer, proportion);

    return scope.Close(wxNode_wxSizerItem::New(returnVal));
  }
  
  /*
   * id: _27940
   */
  if(args.Length() == 1 && (args[0]->IsNull() || (args[0]->IsObject() && wxNode_wxSizer::AssignableFrom(args[0]->ToObject()->GetConstructorName())))) {
    wxNode_wxSizer* sizer = args[0]->IsNull() ? NULL : wxNodeObject::unwrap<wxNode_wxSizer>(args[0]->ToObject()); /* type: _58915 * */
    

    wxSizerItem* returnVal = self->Prepend(sizer);

    return scope.Close(wxNode_wxSizerItem::New(returnVal));
  }
  
  /*
   * id: _27941
   */
  if(args.Length() == 6 && args[0]->IsNumber() && args[1]->IsNumber() && args[2]->IsNumber() && args[3]->IsNumber() && args[4]->IsNumber() && (args[5]->IsNull() || (args[5]->IsObject() && wxNode_wxObject::AssignableFrom(args[5]->ToObject()->GetConstructorName())))) {
    int width = (int)args[0]->ToInt32()->Value(); /* type: _165  */
    int height = (int)args[1]->ToInt32()->Value(); /* type: _165  */
    int proportion = (int)args[2]->ToInt32()->Value(); /* type: _165  */
    int flag = (int)args[3]->ToInt32()->Value(); /* type: _165  */
    int border = (int)args[4]->ToInt32()->Value(); /* type: _165  */
    wxNode_wxObject* userData = args[5]->IsNull() ? NULL : wxNodeObject::unwrap<wxNode_wxObject>(args[5]->ToObject()); /* type: _15746 * */
    

    wxSizerItem* returnVal = self->Prepend(width, height, proportion, flag, border, userData);

    return scope.Close(wxNode_wxSizerItem::New(returnVal));
  }
  
  /*
   * id: _27941
   */
  if(args.Length() == 5 && args[0]->IsNumber() && args[1]->IsNumber() && args[2]->IsNumber() && args[3]->IsNumber() && args[4]->IsNumber()) {
    int width = (int)args[0]->ToInt32()->Value(); /* type: _165  */
    int height = (int)args[1]->ToInt32()->Value(); /* type: _165  */
    int proportion = (int)args[2]->ToInt32()->Value(); /* type: _165  */
    int flag = (int)args[3]->ToInt32()->Value(); /* type: _165  */
    int border = (int)args[4]->ToInt32()->Value(); /* type: _165  */
    

    wxSizerItem* returnVal = self->Prepend(width, height, proportion, flag, border);

    return scope.Close(wxNode_wxSizerItem::New(returnVal));
  }
  
  /*
   * id: _27941
   */
  if(args.Length() == 4 && args[0]->IsNumber() && args[1]->IsNumber() && args[2]->IsNumber() && args[3]->IsNumber()) {
    int width = (int)args[0]->ToInt32()->Value(); /* type: _165  */
    int height = (int)args[1]->ToInt32()->Value(); /* type: _165  */
    int proportion = (int)args[2]->ToInt32()->Value(); /* type: _165  */
    int flag = (int)args[3]->ToInt32()->Value(); /* type: _165  */
    

    wxSizerItem* returnVal = self->Prepend(width, height, proportion, flag);

    return scope.Close(wxNode_wxSizerItem::New(returnVal));
  }
  
  /*
   * id: _27941
   */
  if(args.Length() == 3 && args[0]->IsNumber() && args[1]->IsNumber() && args[2]->IsNumber()) {
    int width = (int)args[0]->ToInt32()->Value(); /* type: _165  */
    int height = (int)args[1]->ToInt32()->Value(); /* type: _165  */
    int proportion = (int)args[2]->ToInt32()->Value(); /* type: _165  */
    

    wxSizerItem* returnVal = self->Prepend(width, height, proportion);

    return scope.Close(wxNode_wxSizerItem::New(returnVal));
  }
  
  /*
   * id: _27941
   */
  if(args.Length() == 2 && args[0]->IsNumber() && args[1]->IsNumber()) {
    int width = (int)args[0]->ToInt32()->Value(); /* type: _165  */
    int height = (int)args[1]->ToInt32()->Value(); /* type: _165  */
    

    wxSizerItem* returnVal = self->Prepend(width, height);

    return scope.Close(wxNode_wxSizerItem::New(returnVal));
  }
  
  /*
   * id: _27942
   */
  if(args.Length() == 2 && (args[0]->IsNull() || (args[0]->IsObject() && wxNode_wxWindow::AssignableFrom(args[0]->ToObject()->GetConstructorName()))) && (args[1]->IsNull() || (args[1]->IsObject() && wxNode_wxSizerFlags::AssignableFrom(args[1]->ToObject()->GetConstructorName())))) {
    wxNode_wxWindow* window = args[0]->IsNull() ? NULL : wxNodeObject::unwrap<wxNode_wxWindow>(args[0]->ToObject()); /* type: _1000 * */
    wxNode_wxSizerFlags* flags = args[1]->IsNull() ? NULL : wxNodeObject::unwrap<wxNode_wxSizerFlags>(args[1]->ToObject()); /* type: _58914  */
    

    wxSizerItem* returnVal = self->Prepend(window, *flags);

    return scope.Close(wxNode_wxSizerItem::New(returnVal));
  }
  
  /*
   * id: _27943
   */
  if(args.Length() == 2 && (args[0]->IsNull() || (args[0]->IsObject() && wxNode_wxSizer::AssignableFrom(args[0]->ToObject()->GetConstructorName()))) && (args[1]->IsNull() || (args[1]->IsObject() && wxNode_wxSizerFlags::AssignableFrom(args[1]->ToObject()->GetConstructorName())))) {
    wxNode_wxSizer* sizer = args[0]->IsNull() ? NULL : wxNodeObject::unwrap<wxNode_wxSizer>(args[0]->ToObject()); /* type: _58915 * */
    wxNode_wxSizerFlags* flags = args[1]->IsNull() ? NULL : wxNodeObject::unwrap<wxNode_wxSizerFlags>(args[1]->ToObject()); /* type: _58914  */
    

    wxSizerItem* returnVal = self->Prepend(sizer, *flags);

    return scope.Close(wxNode_wxSizerItem::New(returnVal));
  }
  
  /*
   * id: _27944
   */
  if(args.Length() == 3 && args[0]->IsNumber() && args[1]->IsNumber() && (args[2]->IsNull() || (args[2]->IsObject() && wxNode_wxSizerFlags::AssignableFrom(args[2]->ToObject()->GetConstructorName())))) {
    int width = (int)args[0]->ToInt32()->Value(); /* type: _165  */
    int height = (int)args[1]->ToInt32()->Value(); /* type: _165  */
    wxNode_wxSizerFlags* flags = args[2]->IsNull() ? NULL : wxNodeObject::unwrap<wxNode_wxSizerFlags>(args[2]->ToObject()); /* type: _58914  */
    

    wxSizerItem* returnVal = self->Prepend(width, height, *flags);

    return scope.Close(wxNode_wxSizerItem::New(returnVal));
  }
  
  /*
   * id: _27945
   */
  if(args.Length() == 1 && (args[0]->IsNull() || (args[0]->IsObject() && wxNode_wxSizerItem::AssignableFrom(args[0]->ToObject()->GetConstructorName())))) {
    wxNode_wxSizerItem* item = args[0]->IsNull() ? NULL : wxNodeObject::unwrap<wxNode_wxSizerItem>(args[0]->ToObject()); /* type: _54181 * */
    

    wxSizerItem* returnVal = self->Prepend(item);

    return scope.Close(wxNode_wxSizerItem::New(returnVal));
  }
  

  std::ostringstream errStr;
  errStr << "Could not find matching method for arguments (method name: wxSizer::Prepend).\n";
  errStr << "  arg count: " << args.Length() << "\n";
  for(int i = 0; i < args.Length(); i++) {
    v8::String::AsciiValue argStr(args[i]);
    errStr << "  arg[" << i << "]: " << *argStr << "\n";
  }
  return v8::ThrowException(v8::Exception::TypeError(v8::String::New(errStr.str().c_str())));
}

/*static*/ v8::Handle<v8::Value> wxNode_wxSizer::_PrependSpacer(const v8::Arguments& args) {
  v8::HandleScope scope;
  wxNode_wxSizer* self = unwrap<wxNode_wxSizer>(args.This());

  
  /*
   * id: _27946
   */
  if(args.Length() == 1 && args[0]->IsNumber()) {
    int size = (int)args[0]->ToInt32()->Value(); /* type: _165  */
    

    wxSizerItem* returnVal = self->PrependSpacer(size);

    return scope.Close(wxNode_wxSizerItem::New(returnVal));
  }
  

  std::ostringstream errStr;
  errStr << "Could not find matching method for arguments (method name: wxSizer::PrependSpacer).\n";
  errStr << "  arg count: " << args.Length() << "\n";
  for(int i = 0; i < args.Length(); i++) {
    v8::String::AsciiValue argStr(args[i]);
    errStr << "  arg[" << i << "]: " << *argStr << "\n";
  }
  return v8::ThrowException(v8::Exception::TypeError(v8::String::New(errStr.str().c_str())));
}

/*static*/ v8::Handle<v8::Value> wxNode_wxSizer::_PrependStretchSpacer(const v8::Arguments& args) {
  v8::HandleScope scope;
  wxNode_wxSizer* self = unwrap<wxNode_wxSizer>(args.This());

  
  /*
   * id: _27947
   */
  if(args.Length() == 1 && args[0]->IsNumber()) {
    int prop = (int)args[0]->ToInt32()->Value(); /* type: _165  */
    

    wxSizerItem* returnVal = self->PrependStretchSpacer(prop);

    return scope.Close(wxNode_wxSizerItem::New(returnVal));
  }
  
  /*
   * id: _27947
   */
  if(args.Length() == 0) {
    

    wxSizerItem* returnVal = self->PrependStretchSpacer();

    return scope.Close(wxNode_wxSizerItem::New(returnVal));
  }
  

  std::ostringstream errStr;
  errStr << "Could not find matching method for arguments (method name: wxSizer::PrependStretchSpacer).\n";
  errStr << "  arg count: " << args.Length() << "\n";
  for(int i = 0; i < args.Length(); i++) {
    v8::String::AsciiValue argStr(args[i]);
    errStr << "  arg[" << i << "]: " << *argStr << "\n";
  }
  return v8::ThrowException(v8::Exception::TypeError(v8::String::New(errStr.str().c_str())));
}

/*static*/ v8::Handle<v8::Value> wxNode_wxSizer::_SetContainingWindow(const v8::Arguments& args) {
  v8::HandleScope scope;
  wxNode_wxSizer* self = unwrap<wxNode_wxSizer>(args.This());

  
  /*
   * id: _27948
   */
  if(args.Length() == 1 && (args[0]->IsNull() || (args[0]->IsObject() && wxNode_wxWindow::AssignableFrom(args[0]->ToObject()->GetConstructorName())))) {
    wxNode_wxWindow* window = args[0]->IsNull() ? NULL : wxNodeObject::unwrap<wxNode_wxWindow>(args[0]->ToObject()); /* type: _1000 * */
    

    self->SetContainingWindow(window);

    return v8::Undefined();
  }
  

  std::ostringstream errStr;
  errStr << "Could not find matching method for arguments (method name: wxSizer::SetContainingWindow).\n";
  errStr << "  arg count: " << args.Length() << "\n";
  for(int i = 0; i < args.Length(); i++) {
    v8::String::AsciiValue argStr(args[i]);
    errStr << "  arg[" << i << "]: " << *argStr << "\n";
  }
  return v8::ThrowException(v8::Exception::TypeError(v8::String::New(errStr.str().c_str())));
}

/*static*/ v8::Handle<v8::Value> wxNode_wxSizer::_GetContainingWindow(const v8::Arguments& args) {
  v8::HandleScope scope;
  wxNode_wxSizer* self = unwrap<wxNode_wxSizer>(args.This());

  
  /*
   * id: _27949
   */
  if(args.Length() == 0) {
    

    const wxWindow* returnVal = self->GetContainingWindow();

    return scope.Close(wxNode_wxWindow::New(returnVal));
  }
  

  std::ostringstream errStr;
  errStr << "Could not find matching method for arguments (method name: wxSizer::GetContainingWindow).\n";
  errStr << "  arg count: " << args.Length() << "\n";
  for(int i = 0; i < args.Length(); i++) {
    v8::String::AsciiValue argStr(args[i]);
    errStr << "  arg[" << i << "]: " << *argStr << "\n";
  }
  return v8::ThrowException(v8::Exception::TypeError(v8::String::New(errStr.str().c_str())));
}

/*static*/ v8::Handle<v8::Value> wxNode_wxSizer::_Remove(const v8::Arguments& args) {
  v8::HandleScope scope;
  wxNode_wxSizer* self = unwrap<wxNode_wxSizer>(args.This());

  
  /*
   * id: _27950
   */
  if(args.Length() == 1 && (args[0]->IsNull() || (args[0]->IsObject() && wxNode_wxSizer::AssignableFrom(args[0]->ToObject()->GetConstructorName())))) {
    wxNode_wxSizer* sizer = args[0]->IsNull() ? NULL : wxNodeObject::unwrap<wxNode_wxSizer>(args[0]->ToObject()); /* type: _58915 * */
    

    bool returnVal = self->Remove(sizer);

    return scope.Close(v8::Boolean::New(returnVal));
  }
  
  /*
   * id: _27951
   */
  if(args.Length() == 1 && args[0]->IsNumber()) {
    int index = (int)args[0]->ToInt32()->Value(); /* type: _165  */
    

    bool returnVal = self->Remove(index);

    return scope.Close(v8::Boolean::New(returnVal));
  }
  

  std::ostringstream errStr;
  errStr << "Could not find matching method for arguments (method name: wxSizer::Remove).\n";
  errStr << "  arg count: " << args.Length() << "\n";
  for(int i = 0; i < args.Length(); i++) {
    v8::String::AsciiValue argStr(args[i]);
    errStr << "  arg[" << i << "]: " << *argStr << "\n";
  }
  return v8::ThrowException(v8::Exception::TypeError(v8::String::New(errStr.str().c_str())));
}

/*static*/ v8::Handle<v8::Value> wxNode_wxSizer::_Detach(const v8::Arguments& args) {
  v8::HandleScope scope;
  wxNode_wxSizer* self = unwrap<wxNode_wxSizer>(args.This());

  
  /*
   * id: _27952
   */
  if(args.Length() == 1 && (args[0]->IsNull() || (args[0]->IsObject() && wxNode_wxWindow::AssignableFrom(args[0]->ToObject()->GetConstructorName())))) {
    wxNode_wxWindow* window = args[0]->IsNull() ? NULL : wxNodeObject::unwrap<wxNode_wxWindow>(args[0]->ToObject()); /* type: _1000 * */
    

    bool returnVal = self->Detach(window);

    return scope.Close(v8::Boolean::New(returnVal));
  }
  
  /*
   * id: _27953
   */
  if(args.Length() == 1 && (args[0]->IsNull() || (args[0]->IsObject() && wxNode_wxSizer::AssignableFrom(args[0]->ToObject()->GetConstructorName())))) {
    wxNode_wxSizer* sizer = args[0]->IsNull() ? NULL : wxNodeObject::unwrap<wxNode_wxSizer>(args[0]->ToObject()); /* type: _58915 * */
    

    bool returnVal = self->Detach(sizer);

    return scope.Close(v8::Boolean::New(returnVal));
  }
  
  /*
   * id: _27954
   */
  if(args.Length() == 1 && args[0]->IsNumber()) {
    int index = (int)args[0]->ToInt32()->Value(); /* type: _165  */
    

    bool returnVal = self->Detach(index);

    return scope.Close(v8::Boolean::New(returnVal));
  }
  

  std::ostringstream errStr;
  errStr << "Could not find matching method for arguments (method name: wxSizer::Detach).\n";
  errStr << "  arg count: " << args.Length() << "\n";
  for(int i = 0; i < args.Length(); i++) {
    v8::String::AsciiValue argStr(args[i]);
    errStr << "  arg[" << i << "]: " << *argStr << "\n";
  }
  return v8::ThrowException(v8::Exception::TypeError(v8::String::New(errStr.str().c_str())));
}

/*static*/ v8::Handle<v8::Value> wxNode_wxSizer::_Replace(const v8::Arguments& args) {
  v8::HandleScope scope;
  wxNode_wxSizer* self = unwrap<wxNode_wxSizer>(args.This());

  
  /*
   * id: _27955
   */
  if(args.Length() == 3 && (args[0]->IsNull() || (args[0]->IsObject() && wxNode_wxWindow::AssignableFrom(args[0]->ToObject()->GetConstructorName()))) && (args[1]->IsNull() || (args[1]->IsObject() && wxNode_wxWindow::AssignableFrom(args[1]->ToObject()->GetConstructorName()))) && args[2]->IsBoolean()) {
    wxNode_wxWindow* oldwin = args[0]->IsNull() ? NULL : wxNodeObject::unwrap<wxNode_wxWindow>(args[0]->ToObject()); /* type: _1000 * */
    wxNode_wxWindow* newwin = args[1]->IsNull() ? NULL : wxNodeObject::unwrap<wxNode_wxWindow>(args[1]->ToObject()); /* type: _1000 * */
    bool recursive = args[2]->ToBoolean()->Value(); /* type: _14830  */
    

    bool returnVal = self->Replace(oldwin, newwin, recursive);

    return scope.Close(v8::Boolean::New(returnVal));
  }
  
  /*
   * id: _27955
   */
  if(args.Length() == 2 && (args[0]->IsNull() || (args[0]->IsObject() && wxNode_wxWindow::AssignableFrom(args[0]->ToObject()->GetConstructorName()))) && (args[1]->IsNull() || (args[1]->IsObject() && wxNode_wxWindow::AssignableFrom(args[1]->ToObject()->GetConstructorName())))) {
    wxNode_wxWindow* oldwin = args[0]->IsNull() ? NULL : wxNodeObject::unwrap<wxNode_wxWindow>(args[0]->ToObject()); /* type: _1000 * */
    wxNode_wxWindow* newwin = args[1]->IsNull() ? NULL : wxNodeObject::unwrap<wxNode_wxWindow>(args[1]->ToObject()); /* type: _1000 * */
    

    bool returnVal = self->Replace(oldwin, newwin);

    return scope.Close(v8::Boolean::New(returnVal));
  }
  
  /*
   * id: _27956
   */
  if(args.Length() == 3 && (args[0]->IsNull() || (args[0]->IsObject() && wxNode_wxSizer::AssignableFrom(args[0]->ToObject()->GetConstructorName()))) && (args[1]->IsNull() || (args[1]->IsObject() && wxNode_wxSizer::AssignableFrom(args[1]->ToObject()->GetConstructorName()))) && args[2]->IsBoolean()) {
    wxNode_wxSizer* oldsz = args[0]->IsNull() ? NULL : wxNodeObject::unwrap<wxNode_wxSizer>(args[0]->ToObject()); /* type: _58915 * */
    wxNode_wxSizer* newsz = args[1]->IsNull() ? NULL : wxNodeObject::unwrap<wxNode_wxSizer>(args[1]->ToObject()); /* type: _58915 * */
    bool recursive = args[2]->ToBoolean()->Value(); /* type: _14830  */
    

    bool returnVal = self->Replace(oldsz, newsz, recursive);

    return scope.Close(v8::Boolean::New(returnVal));
  }
  
  /*
   * id: _27956
   */
  if(args.Length() == 2 && (args[0]->IsNull() || (args[0]->IsObject() && wxNode_wxSizer::AssignableFrom(args[0]->ToObject()->GetConstructorName()))) && (args[1]->IsNull() || (args[1]->IsObject() && wxNode_wxSizer::AssignableFrom(args[1]->ToObject()->GetConstructorName())))) {
    wxNode_wxSizer* oldsz = args[0]->IsNull() ? NULL : wxNodeObject::unwrap<wxNode_wxSizer>(args[0]->ToObject()); /* type: _58915 * */
    wxNode_wxSizer* newsz = args[1]->IsNull() ? NULL : wxNodeObject::unwrap<wxNode_wxSizer>(args[1]->ToObject()); /* type: _58915 * */
    

    bool returnVal = self->Replace(oldsz, newsz);

    return scope.Close(v8::Boolean::New(returnVal));
  }
  
  /*
   * id: _27957
   */
  if(args.Length() == 2 && args[0]->IsNumber() && (args[1]->IsNull() || (args[1]->IsObject() && wxNode_wxSizerItem::AssignableFrom(args[1]->ToObject()->GetConstructorName())))) {
    unsigned int index = (unsigned int)args[0]->ToInt32()->Value(); /* type: _8711  */
    wxNode_wxSizerItem* newitem = args[1]->IsNull() ? NULL : wxNodeObject::unwrap<wxNode_wxSizerItem>(args[1]->ToObject()); /* type: _54181 * */
    

    bool returnVal = self->Replace(index, newitem);

    return scope.Close(v8::Boolean::New(returnVal));
  }
  

  std::ostringstream errStr;
  errStr << "Could not find matching method for arguments (method name: wxSizer::Replace).\n";
  errStr << "  arg count: " << args.Length() << "\n";
  for(int i = 0; i < args.Length(); i++) {
    v8::String::AsciiValue argStr(args[i]);
    errStr << "  arg[" << i << "]: " << *argStr << "\n";
  }
  return v8::ThrowException(v8::Exception::TypeError(v8::String::New(errStr.str().c_str())));
}

/*static*/ v8::Handle<v8::Value> wxNode_wxSizer::_Clear(const v8::Arguments& args) {
  v8::HandleScope scope;
  wxNode_wxSizer* self = unwrap<wxNode_wxSizer>(args.This());

  
  /*
   * id: _27958
   */
  if(args.Length() == 1 && args[0]->IsBoolean()) {
    bool delete_windows = args[0]->ToBoolean()->Value(); /* type: _14830  */
    

    self->Clear(delete_windows);

    return v8::Undefined();
  }
  
  /*
   * id: _27958
   */
  if(args.Length() == 0) {
    

    self->Clear();

    return v8::Undefined();
  }
  

  std::ostringstream errStr;
  errStr << "Could not find matching method for arguments (method name: wxSizer::Clear).\n";
  errStr << "  arg count: " << args.Length() << "\n";
  for(int i = 0; i < args.Length(); i++) {
    v8::String::AsciiValue argStr(args[i]);
    errStr << "  arg[" << i << "]: " << *argStr << "\n";
  }
  return v8::ThrowException(v8::Exception::TypeError(v8::String::New(errStr.str().c_str())));
}

/*static*/ v8::Handle<v8::Value> wxNode_wxSizer::_DeleteWindows(const v8::Arguments& args) {
  v8::HandleScope scope;
  wxNode_wxSizer* self = unwrap<wxNode_wxSizer>(args.This());

  
  /*
   * id: _27959
   */
  if(args.Length() == 0) {
    

    self->DeleteWindows();

    return v8::Undefined();
  }
  

  std::ostringstream errStr;
  errStr << "Could not find matching method for arguments (method name: wxSizer::DeleteWindows).\n";
  errStr << "  arg count: " << args.Length() << "\n";
  for(int i = 0; i < args.Length(); i++) {
    v8::String::AsciiValue argStr(args[i]);
    errStr << "  arg[" << i << "]: " << *argStr << "\n";
  }
  return v8::ThrowException(v8::Exception::TypeError(v8::String::New(errStr.str().c_str())));
}

/*static*/ v8::Handle<v8::Value> wxNode_wxSizer::_InformFirstDirection(const v8::Arguments& args) {
  v8::HandleScope scope;
  wxNode_wxSizer* self = unwrap<wxNode_wxSizer>(args.This());

  
  /*
   * id: _27960
   */
  if(args.Length() == 3 && args[0]->IsNumber() && args[1]->IsNumber() && args[2]->IsNumber()) {
    int arg0 = (int)args[0]->ToInt32()->Value(); /* type: _165  */
    int arg1 = (int)args[1]->ToInt32()->Value(); /* type: _165  */
    int arg2 = (int)args[2]->ToInt32()->Value(); /* type: _165  */
    

    bool returnVal = self->InformFirstDirection(arg0, arg1, arg2);

    return scope.Close(v8::Boolean::New(returnVal));
  }
  

  std::ostringstream errStr;
  errStr << "Could not find matching method for arguments (method name: wxSizer::InformFirstDirection).\n";
  errStr << "  arg count: " << args.Length() << "\n";
  for(int i = 0; i < args.Length(); i++) {
    v8::String::AsciiValue argStr(args[i]);
    errStr << "  arg[" << i << "]: " << *argStr << "\n";
  }
  return v8::ThrowException(v8::Exception::TypeError(v8::String::New(errStr.str().c_str())));
}

/*static*/ v8::Handle<v8::Value> wxNode_wxSizer::_SetMinSize(const v8::Arguments& args) {
  v8::HandleScope scope;
  wxNode_wxSizer* self = unwrap<wxNode_wxSizer>(args.This());

  
  /*
   * id: _27961
   */
  if(args.Length() == 2 && args[0]->IsNumber() && args[1]->IsNumber()) {
    int width = (int)args[0]->ToInt32()->Value(); /* type: _165  */
    int height = (int)args[1]->ToInt32()->Value(); /* type: _165  */
    

    self->SetMinSize(width, height);

    return v8::Undefined();
  }
  
  /*
   * id: _27962
   */
  if(args.Length() == 1 && (args[0]->IsNull() || (args[0]->IsObject() && wxNode_wxSize::AssignableFrom(args[0]->ToObject()->GetConstructorName())))) {
    wxNode_wxSize* size = args[0]->IsNull() ? NULL : wxNodeObject::unwrap<wxNode_wxSize>(args[0]->ToObject()); /* type: _20628  */
    

    self->SetMinSize(*size);

    return v8::Undefined();
  }
  

  std::ostringstream errStr;
  errStr << "Could not find matching method for arguments (method name: wxSizer::SetMinSize).\n";
  errStr << "  arg count: " << args.Length() << "\n";
  for(int i = 0; i < args.Length(); i++) {
    v8::String::AsciiValue argStr(args[i]);
    errStr << "  arg[" << i << "]: " << *argStr << "\n";
  }
  return v8::ThrowException(v8::Exception::TypeError(v8::String::New(errStr.str().c_str())));
}

/*static*/ v8::Handle<v8::Value> wxNode_wxSizer::_SetItemMinSize(const v8::Arguments& args) {
  v8::HandleScope scope;
  wxNode_wxSizer* self = unwrap<wxNode_wxSizer>(args.This());

  
  /*
   * id: _27963
   */
  if(args.Length() == 3 && (args[0]->IsNull() || (args[0]->IsObject() && wxNode_wxWindow::AssignableFrom(args[0]->ToObject()->GetConstructorName()))) && args[1]->IsNumber() && args[2]->IsNumber()) {
    wxNode_wxWindow* window = args[0]->IsNull() ? NULL : wxNodeObject::unwrap<wxNode_wxWindow>(args[0]->ToObject()); /* type: _1000 * */
    int width = (int)args[1]->ToInt32()->Value(); /* type: _165  */
    int height = (int)args[2]->ToInt32()->Value(); /* type: _165  */
    

    bool returnVal = self->SetItemMinSize(window, width, height);

    return scope.Close(v8::Boolean::New(returnVal));
  }
  
  /*
   * id: _27964
   */
  if(args.Length() == 2 && (args[0]->IsNull() || (args[0]->IsObject() && wxNode_wxWindow::AssignableFrom(args[0]->ToObject()->GetConstructorName()))) && (args[1]->IsNull() || (args[1]->IsObject() && wxNode_wxSize::AssignableFrom(args[1]->ToObject()->GetConstructorName())))) {
    wxNode_wxWindow* window = args[0]->IsNull() ? NULL : wxNodeObject::unwrap<wxNode_wxWindow>(args[0]->ToObject()); /* type: _1000 * */
    wxNode_wxSize* size = args[1]->IsNull() ? NULL : wxNodeObject::unwrap<wxNode_wxSize>(args[1]->ToObject()); /* type: _20628  */
    

    bool returnVal = self->SetItemMinSize(window, *size);

    return scope.Close(v8::Boolean::New(returnVal));
  }
  
  /*
   * id: _27965
   */
  if(args.Length() == 3 && (args[0]->IsNull() || (args[0]->IsObject() && wxNode_wxSizer::AssignableFrom(args[0]->ToObject()->GetConstructorName()))) && args[1]->IsNumber() && args[2]->IsNumber()) {
    wxNode_wxSizer* sizer = args[0]->IsNull() ? NULL : wxNodeObject::unwrap<wxNode_wxSizer>(args[0]->ToObject()); /* type: _58915 * */
    int width = (int)args[1]->ToInt32()->Value(); /* type: _165  */
    int height = (int)args[2]->ToInt32()->Value(); /* type: _165  */
    

    bool returnVal = self->SetItemMinSize(sizer, width, height);

    return scope.Close(v8::Boolean::New(returnVal));
  }
  
  /*
   * id: _27966
   */
  if(args.Length() == 2 && (args[0]->IsNull() || (args[0]->IsObject() && wxNode_wxSizer::AssignableFrom(args[0]->ToObject()->GetConstructorName()))) && (args[1]->IsNull() || (args[1]->IsObject() && wxNode_wxSize::AssignableFrom(args[1]->ToObject()->GetConstructorName())))) {
    wxNode_wxSizer* sizer = args[0]->IsNull() ? NULL : wxNodeObject::unwrap<wxNode_wxSizer>(args[0]->ToObject()); /* type: _58915 * */
    wxNode_wxSize* size = args[1]->IsNull() ? NULL : wxNodeObject::unwrap<wxNode_wxSize>(args[1]->ToObject()); /* type: _20628  */
    

    bool returnVal = self->SetItemMinSize(sizer, *size);

    return scope.Close(v8::Boolean::New(returnVal));
  }
  
  /*
   * id: _27967
   */
  if(args.Length() == 3 && args[0]->IsNumber() && args[1]->IsNumber() && args[2]->IsNumber()) {
    unsigned int index = (unsigned int)args[0]->ToInt32()->Value(); /* type: _8711  */
    int width = (int)args[1]->ToInt32()->Value(); /* type: _165  */
    int height = (int)args[2]->ToInt32()->Value(); /* type: _165  */
    

    bool returnVal = self->SetItemMinSize(index, width, height);

    return scope.Close(v8::Boolean::New(returnVal));
  }
  
  /*
   * id: _27968
   */
  if(args.Length() == 2 && args[0]->IsNumber() && (args[1]->IsNull() || (args[1]->IsObject() && wxNode_wxSize::AssignableFrom(args[1]->ToObject()->GetConstructorName())))) {
    unsigned int index = (unsigned int)args[0]->ToInt32()->Value(); /* type: _8711  */
    wxNode_wxSize* size = args[1]->IsNull() ? NULL : wxNodeObject::unwrap<wxNode_wxSize>(args[1]->ToObject()); /* type: _20628  */
    

    bool returnVal = self->SetItemMinSize(index, *size);

    return scope.Close(v8::Boolean::New(returnVal));
  }
  

  std::ostringstream errStr;
  errStr << "Could not find matching method for arguments (method name: wxSizer::SetItemMinSize).\n";
  errStr << "  arg count: " << args.Length() << "\n";
  for(int i = 0; i < args.Length(); i++) {
    v8::String::AsciiValue argStr(args[i]);
    errStr << "  arg[" << i << "]: " << *argStr << "\n";
  }
  return v8::ThrowException(v8::Exception::TypeError(v8::String::New(errStr.str().c_str())));
}

/*static*/ v8::Handle<v8::Value> wxNode_wxSizer::_GetSize(const v8::Arguments& args) {
  v8::HandleScope scope;
  wxNode_wxSizer* self = unwrap<wxNode_wxSizer>(args.This());

  
  /*
   * id: _27969
   */
  if(args.Length() == 0) {
    

    wxSize returnVal = self->GetSize();

    return scope.Close(wxNode_wxSize::NewCopy(returnVal));
  }
  

  std::ostringstream errStr;
  errStr << "Could not find matching method for arguments (method name: wxSizer::GetSize).\n";
  errStr << "  arg count: " << args.Length() << "\n";
  for(int i = 0; i < args.Length(); i++) {
    v8::String::AsciiValue argStr(args[i]);
    errStr << "  arg[" << i << "]: " << *argStr << "\n";
  }
  return v8::ThrowException(v8::Exception::TypeError(v8::String::New(errStr.str().c_str())));
}

/*static*/ v8::Handle<v8::Value> wxNode_wxSizer::_GetPosition(const v8::Arguments& args) {
  v8::HandleScope scope;
  wxNode_wxSizer* self = unwrap<wxNode_wxSizer>(args.This());

  
  /*
   * id: _27970
   */
  if(args.Length() == 0) {
    

    wxPoint returnVal = self->GetPosition();

    return scope.Close(wxNode_wxPoint::NewCopy(returnVal));
  }
  

  std::ostringstream errStr;
  errStr << "Could not find matching method for arguments (method name: wxSizer::GetPosition).\n";
  errStr << "  arg count: " << args.Length() << "\n";
  for(int i = 0; i < args.Length(); i++) {
    v8::String::AsciiValue argStr(args[i]);
    errStr << "  arg[" << i << "]: " << *argStr << "\n";
  }
  return v8::ThrowException(v8::Exception::TypeError(v8::String::New(errStr.str().c_str())));
}

/*static*/ v8::Handle<v8::Value> wxNode_wxSizer::_GetMinSize(const v8::Arguments& args) {
  v8::HandleScope scope;
  wxNode_wxSizer* self = unwrap<wxNode_wxSizer>(args.This());

  
  /*
   * id: _27971
   */
  if(args.Length() == 0) {
    

    wxSize returnVal = self->GetMinSize();

    return scope.Close(wxNode_wxSize::NewCopy(returnVal));
  }
  

  std::ostringstream errStr;
  errStr << "Could not find matching method for arguments (method name: wxSizer::GetMinSize).\n";
  errStr << "  arg count: " << args.Length() << "\n";
  for(int i = 0; i < args.Length(); i++) {
    v8::String::AsciiValue argStr(args[i]);
    errStr << "  arg[" << i << "]: " << *argStr << "\n";
  }
  return v8::ThrowException(v8::Exception::TypeError(v8::String::New(errStr.str().c_str())));
}

/*static*/ v8::Handle<v8::Value> wxNode_wxSizer::_CalcMin(const v8::Arguments& args) {
  v8::HandleScope scope;
  wxNode_wxSizer* self = unwrap<wxNode_wxSizer>(args.This());

  
  /*
   * id: _27972
   */
  if(args.Length() == 0) {
    

    wxSize returnVal = self->CalcMin();

    return scope.Close(wxNode_wxSize::NewCopy(returnVal));
  }
  

  std::ostringstream errStr;
  errStr << "Could not find matching method for arguments (method name: wxSizer::CalcMin).\n";
  errStr << "  arg count: " << args.Length() << "\n";
  for(int i = 0; i < args.Length(); i++) {
    v8::String::AsciiValue argStr(args[i]);
    errStr << "  arg[" << i << "]: " << *argStr << "\n";
  }
  return v8::ThrowException(v8::Exception::TypeError(v8::String::New(errStr.str().c_str())));
}

/*static*/ v8::Handle<v8::Value> wxNode_wxSizer::_RecalcSizes(const v8::Arguments& args) {
  v8::HandleScope scope;
  wxNode_wxSizer* self = unwrap<wxNode_wxSizer>(args.This());

  
  /*
   * id: _27973
   */
  if(args.Length() == 0) {
    

    self->RecalcSizes();

    return v8::Undefined();
  }
  

  std::ostringstream errStr;
  errStr << "Could not find matching method for arguments (method name: wxSizer::RecalcSizes).\n";
  errStr << "  arg count: " << args.Length() << "\n";
  for(int i = 0; i < args.Length(); i++) {
    v8::String::AsciiValue argStr(args[i]);
    errStr << "  arg[" << i << "]: " << *argStr << "\n";
  }
  return v8::ThrowException(v8::Exception::TypeError(v8::String::New(errStr.str().c_str())));
}

/*static*/ v8::Handle<v8::Value> wxNode_wxSizer::_Layout(const v8::Arguments& args) {
  v8::HandleScope scope;
  wxNode_wxSizer* self = unwrap<wxNode_wxSizer>(args.This());

  
  /*
   * id: _27974
   */
  if(args.Length() == 0) {
    

    self->Layout();

    return v8::Undefined();
  }
  

  std::ostringstream errStr;
  errStr << "Could not find matching method for arguments (method name: wxSizer::Layout).\n";
  errStr << "  arg count: " << args.Length() << "\n";
  for(int i = 0; i < args.Length(); i++) {
    v8::String::AsciiValue argStr(args[i]);
    errStr << "  arg[" << i << "]: " << *argStr << "\n";
  }
  return v8::ThrowException(v8::Exception::TypeError(v8::String::New(errStr.str().c_str())));
}

/*static*/ v8::Handle<v8::Value> wxNode_wxSizer::_ComputeFittingClientSize(const v8::Arguments& args) {
  v8::HandleScope scope;
  wxNode_wxSizer* self = unwrap<wxNode_wxSizer>(args.This());

  
  /*
   * id: _27975
   */
  if(args.Length() == 1 && (args[0]->IsNull() || (args[0]->IsObject() && wxNode_wxWindow::AssignableFrom(args[0]->ToObject()->GetConstructorName())))) {
    wxNode_wxWindow* window = args[0]->IsNull() ? NULL : wxNodeObject::unwrap<wxNode_wxWindow>(args[0]->ToObject()); /* type: _1000 * */
    

    wxSize returnVal = self->ComputeFittingClientSize(window);

    return scope.Close(wxNode_wxSize::NewCopy(returnVal));
  }
  

  std::ostringstream errStr;
  errStr << "Could not find matching method for arguments (method name: wxSizer::ComputeFittingClientSize).\n";
  errStr << "  arg count: " << args.Length() << "\n";
  for(int i = 0; i < args.Length(); i++) {
    v8::String::AsciiValue argStr(args[i]);
    errStr << "  arg[" << i << "]: " << *argStr << "\n";
  }
  return v8::ThrowException(v8::Exception::TypeError(v8::String::New(errStr.str().c_str())));
}

/*static*/ v8::Handle<v8::Value> wxNode_wxSizer::_ComputeFittingWindowSize(const v8::Arguments& args) {
  v8::HandleScope scope;
  wxNode_wxSizer* self = unwrap<wxNode_wxSizer>(args.This());

  
  /*
   * id: _27976
   */
  if(args.Length() == 1 && (args[0]->IsNull() || (args[0]->IsObject() && wxNode_wxWindow::AssignableFrom(args[0]->ToObject()->GetConstructorName())))) {
    wxNode_wxWindow* window = args[0]->IsNull() ? NULL : wxNodeObject::unwrap<wxNode_wxWindow>(args[0]->ToObject()); /* type: _1000 * */
    

    wxSize returnVal = self->ComputeFittingWindowSize(window);

    return scope.Close(wxNode_wxSize::NewCopy(returnVal));
  }
  

  std::ostringstream errStr;
  errStr << "Could not find matching method for arguments (method name: wxSizer::ComputeFittingWindowSize).\n";
  errStr << "  arg count: " << args.Length() << "\n";
  for(int i = 0; i < args.Length(); i++) {
    v8::String::AsciiValue argStr(args[i]);
    errStr << "  arg[" << i << "]: " << *argStr << "\n";
  }
  return v8::ThrowException(v8::Exception::TypeError(v8::String::New(errStr.str().c_str())));
}

/*static*/ v8::Handle<v8::Value> wxNode_wxSizer::_Fit(const v8::Arguments& args) {
  v8::HandleScope scope;
  wxNode_wxSizer* self = unwrap<wxNode_wxSizer>(args.This());

  
  /*
   * id: _27977
   */
  if(args.Length() == 1 && (args[0]->IsNull() || (args[0]->IsObject() && wxNode_wxWindow::AssignableFrom(args[0]->ToObject()->GetConstructorName())))) {
    wxNode_wxWindow* window = args[0]->IsNull() ? NULL : wxNodeObject::unwrap<wxNode_wxWindow>(args[0]->ToObject()); /* type: _1000 * */
    

    wxSize returnVal = self->Fit(window);

    return scope.Close(wxNode_wxSize::NewCopy(returnVal));
  }
  

  std::ostringstream errStr;
  errStr << "Could not find matching method for arguments (method name: wxSizer::Fit).\n";
  errStr << "  arg count: " << args.Length() << "\n";
  for(int i = 0; i < args.Length(); i++) {
    v8::String::AsciiValue argStr(args[i]);
    errStr << "  arg[" << i << "]: " << *argStr << "\n";
  }
  return v8::ThrowException(v8::Exception::TypeError(v8::String::New(errStr.str().c_str())));
}

/*static*/ v8::Handle<v8::Value> wxNode_wxSizer::_FitInside(const v8::Arguments& args) {
  v8::HandleScope scope;
  wxNode_wxSizer* self = unwrap<wxNode_wxSizer>(args.This());

  
  /*
   * id: _27978
   */
  if(args.Length() == 1 && (args[0]->IsNull() || (args[0]->IsObject() && wxNode_wxWindow::AssignableFrom(args[0]->ToObject()->GetConstructorName())))) {
    wxNode_wxWindow* window = args[0]->IsNull() ? NULL : wxNodeObject::unwrap<wxNode_wxWindow>(args[0]->ToObject()); /* type: _1000 * */
    

    self->FitInside(window);

    return v8::Undefined();
  }
  

  std::ostringstream errStr;
  errStr << "Could not find matching method for arguments (method name: wxSizer::FitInside).\n";
  errStr << "  arg count: " << args.Length() << "\n";
  for(int i = 0; i < args.Length(); i++) {
    v8::String::AsciiValue argStr(args[i]);
    errStr << "  arg[" << i << "]: " << *argStr << "\n";
  }
  return v8::ThrowException(v8::Exception::TypeError(v8::String::New(errStr.str().c_str())));
}

/*static*/ v8::Handle<v8::Value> wxNode_wxSizer::_SetSizeHints(const v8::Arguments& args) {
  v8::HandleScope scope;
  wxNode_wxSizer* self = unwrap<wxNode_wxSizer>(args.This());

  
  /*
   * id: _27979
   */
  if(args.Length() == 1 && (args[0]->IsNull() || (args[0]->IsObject() && wxNode_wxWindow::AssignableFrom(args[0]->ToObject()->GetConstructorName())))) {
    wxNode_wxWindow* window = args[0]->IsNull() ? NULL : wxNodeObject::unwrap<wxNode_wxWindow>(args[0]->ToObject()); /* type: _1000 * */
    

    self->SetSizeHints(window);

    return v8::Undefined();
  }
  

  std::ostringstream errStr;
  errStr << "Could not find matching method for arguments (method name: wxSizer::SetSizeHints).\n";
  errStr << "  arg count: " << args.Length() << "\n";
  for(int i = 0; i < args.Length(); i++) {
    v8::String::AsciiValue argStr(args[i]);
    errStr << "  arg[" << i << "]: " << *argStr << "\n";
  }
  return v8::ThrowException(v8::Exception::TypeError(v8::String::New(errStr.str().c_str())));
}

/*static*/ v8::Handle<v8::Value> wxNode_wxSizer::_GetChildren(const v8::Arguments& args) {
  v8::HandleScope scope;
  wxNode_wxSizer* self = unwrap<wxNode_wxSizer>(args.This());

  
  /*
   * id: _27981
   */
  if(args.Length() == 0) {
    

    wxSizerItemList returnVal = self->GetChildren();

    return scope.Close(wxNode_wxSizerItemList::NewCopy(returnVal));
  }
  
  /*
   * id: _27982
   */
  if(args.Length() == 0) {
    

    wxSizerItemList returnVal = self->GetChildren();

    return scope.Close(wxNode_wxSizerItemList::NewCopy(returnVal));
  }
  

  std::ostringstream errStr;
  errStr << "Could not find matching method for arguments (method name: wxSizer::GetChildren).\n";
  errStr << "  arg count: " << args.Length() << "\n";
  for(int i = 0; i < args.Length(); i++) {
    v8::String::AsciiValue argStr(args[i]);
    errStr << "  arg[" << i << "]: " << *argStr << "\n";
  }
  return v8::ThrowException(v8::Exception::TypeError(v8::String::New(errStr.str().c_str())));
}

/*static*/ v8::Handle<v8::Value> wxNode_wxSizer::_SetDimension(const v8::Arguments& args) {
  v8::HandleScope scope;
  wxNode_wxSizer* self = unwrap<wxNode_wxSizer>(args.This());

  
  /*
   * id: _27983
   */
  if(args.Length() == 2 && (args[0]->IsNull() || (args[0]->IsObject() && wxNode_wxPoint::AssignableFrom(args[0]->ToObject()->GetConstructorName()))) && (args[1]->IsNull() || (args[1]->IsObject() && wxNode_wxSize::AssignableFrom(args[1]->ToObject()->GetConstructorName())))) {
    wxNode_wxPoint* pos = args[0]->IsNull() ? NULL : wxNodeObject::unwrap<wxNode_wxPoint>(args[0]->ToObject()); /* type: _20518  */
    wxNode_wxSize* size = args[1]->IsNull() ? NULL : wxNodeObject::unwrap<wxNode_wxSize>(args[1]->ToObject()); /* type: _20628  */
    

    self->SetDimension(*pos, *size);

    return v8::Undefined();
  }
  
  /*
   * id: _27984
   */
  if(args.Length() == 4 && args[0]->IsNumber() && args[1]->IsNumber() && args[2]->IsNumber() && args[3]->IsNumber()) {
    int x = (int)args[0]->ToInt32()->Value(); /* type: _165  */
    int y = (int)args[1]->ToInt32()->Value(); /* type: _165  */
    int width = (int)args[2]->ToInt32()->Value(); /* type: _165  */
    int height = (int)args[3]->ToInt32()->Value(); /* type: _165  */
    

    self->SetDimension(x, y, width, height);

    return v8::Undefined();
  }
  

  std::ostringstream errStr;
  errStr << "Could not find matching method for arguments (method name: wxSizer::SetDimension).\n";
  errStr << "  arg count: " << args.Length() << "\n";
  for(int i = 0; i < args.Length(); i++) {
    v8::String::AsciiValue argStr(args[i]);
    errStr << "  arg[" << i << "]: " << *argStr << "\n";
  }
  return v8::ThrowException(v8::Exception::TypeError(v8::String::New(errStr.str().c_str())));
}

/*static*/ v8::Handle<v8::Value> wxNode_wxSizer::_GetItemCount(const v8::Arguments& args) {
  v8::HandleScope scope;
  wxNode_wxSizer* self = unwrap<wxNode_wxSizer>(args.This());

  
  /*
   * id: _27985
   */
  if(args.Length() == 0) {
    

    int returnVal = self->GetItemCount();

    return scope.Close(v8::Number::New(returnVal));
  }
  

  std::ostringstream errStr;
  errStr << "Could not find matching method for arguments (method name: wxSizer::GetItemCount).\n";
  errStr << "  arg count: " << args.Length() << "\n";
  for(int i = 0; i < args.Length(); i++) {
    v8::String::AsciiValue argStr(args[i]);
    errStr << "  arg[" << i << "]: " << *argStr << "\n";
  }
  return v8::ThrowException(v8::Exception::TypeError(v8::String::New(errStr.str().c_str())));
}

/*static*/ v8::Handle<v8::Value> wxNode_wxSizer::_IsEmpty(const v8::Arguments& args) {
  v8::HandleScope scope;
  wxNode_wxSizer* self = unwrap<wxNode_wxSizer>(args.This());

  
  /*
   * id: _27986
   */
  if(args.Length() == 0) {
    

    bool returnVal = self->IsEmpty();

    return scope.Close(v8::Boolean::New(returnVal));
  }
  

  std::ostringstream errStr;
  errStr << "Could not find matching method for arguments (method name: wxSizer::IsEmpty).\n";
  errStr << "  arg count: " << args.Length() << "\n";
  for(int i = 0; i < args.Length(); i++) {
    v8::String::AsciiValue argStr(args[i]);
    errStr << "  arg[" << i << "]: " << *argStr << "\n";
  }
  return v8::ThrowException(v8::Exception::TypeError(v8::String::New(errStr.str().c_str())));
}

/*static*/ v8::Handle<v8::Value> wxNode_wxSizer::_GetItem(const v8::Arguments& args) {
  v8::HandleScope scope;
  wxNode_wxSizer* self = unwrap<wxNode_wxSizer>(args.This());

  
  /*
   * id: _27987
   */
  if(args.Length() == 2 && (args[0]->IsNull() || (args[0]->IsObject() && wxNode_wxWindow::AssignableFrom(args[0]->ToObject()->GetConstructorName()))) && args[1]->IsBoolean()) {
    wxNode_wxWindow* window = args[0]->IsNull() ? NULL : wxNodeObject::unwrap<wxNode_wxWindow>(args[0]->ToObject()); /* type: _1000 * */
    bool recursive = args[1]->ToBoolean()->Value(); /* type: _14830  */
    

    wxSizerItem* returnVal = self->GetItem(window, recursive);

    return scope.Close(wxNode_wxSizerItem::New(returnVal));
  }
  
  /*
   * id: _27987
   */
  if(args.Length() == 1 && (args[0]->IsNull() || (args[0]->IsObject() && wxNode_wxWindow::AssignableFrom(args[0]->ToObject()->GetConstructorName())))) {
    wxNode_wxWindow* window = args[0]->IsNull() ? NULL : wxNodeObject::unwrap<wxNode_wxWindow>(args[0]->ToObject()); /* type: _1000 * */
    

    wxSizerItem* returnVal = self->GetItem(window);

    return scope.Close(wxNode_wxSizerItem::New(returnVal));
  }
  
  /*
   * id: _27988
   */
  if(args.Length() == 2 && (args[0]->IsNull() || (args[0]->IsObject() && wxNode_wxSizer::AssignableFrom(args[0]->ToObject()->GetConstructorName()))) && args[1]->IsBoolean()) {
    wxNode_wxSizer* sizer = args[0]->IsNull() ? NULL : wxNodeObject::unwrap<wxNode_wxSizer>(args[0]->ToObject()); /* type: _58915 * */
    bool recursive = args[1]->ToBoolean()->Value(); /* type: _14830  */
    

    wxSizerItem* returnVal = self->GetItem(sizer, recursive);

    return scope.Close(wxNode_wxSizerItem::New(returnVal));
  }
  
  /*
   * id: _27988
   */
  if(args.Length() == 1 && (args[0]->IsNull() || (args[0]->IsObject() && wxNode_wxSizer::AssignableFrom(args[0]->ToObject()->GetConstructorName())))) {
    wxNode_wxSizer* sizer = args[0]->IsNull() ? NULL : wxNodeObject::unwrap<wxNode_wxSizer>(args[0]->ToObject()); /* type: _58915 * */
    

    wxSizerItem* returnVal = self->GetItem(sizer);

    return scope.Close(wxNode_wxSizerItem::New(returnVal));
  }
  
  /*
   * id: _27989
   */
  if(args.Length() == 1 && args[0]->IsNumber()) {
    unsigned int index = (unsigned int)args[0]->ToInt32()->Value(); /* type: _8711  */
    

    wxSizerItem* returnVal = self->GetItem(index);

    return scope.Close(wxNode_wxSizerItem::New(returnVal));
  }
  

  std::ostringstream errStr;
  errStr << "Could not find matching method for arguments (method name: wxSizer::GetItem).\n";
  errStr << "  arg count: " << args.Length() << "\n";
  for(int i = 0; i < args.Length(); i++) {
    v8::String::AsciiValue argStr(args[i]);
    errStr << "  arg[" << i << "]: " << *argStr << "\n";
  }
  return v8::ThrowException(v8::Exception::TypeError(v8::String::New(errStr.str().c_str())));
}

/*static*/ v8::Handle<v8::Value> wxNode_wxSizer::_GetItemById(const v8::Arguments& args) {
  v8::HandleScope scope;
  wxNode_wxSizer* self = unwrap<wxNode_wxSizer>(args.This());

  
  /*
   * id: _27990
   */
  if(args.Length() == 2 && args[0]->IsNumber() && args[1]->IsBoolean()) {
    int id = (int)args[0]->ToInt32()->Value(); /* type: _165  */
    bool recursive = args[1]->ToBoolean()->Value(); /* type: _14830  */
    

    wxSizerItem* returnVal = self->GetItemById(id, recursive);

    return scope.Close(wxNode_wxSizerItem::New(returnVal));
  }
  
  /*
   * id: _27990
   */
  if(args.Length() == 1 && args[0]->IsNumber()) {
    int id = (int)args[0]->ToInt32()->Value(); /* type: _165  */
    

    wxSizerItem* returnVal = self->GetItemById(id);

    return scope.Close(wxNode_wxSizerItem::New(returnVal));
  }
  

  std::ostringstream errStr;
  errStr << "Could not find matching method for arguments (method name: wxSizer::GetItemById).\n";
  errStr << "  arg count: " << args.Length() << "\n";
  for(int i = 0; i < args.Length(); i++) {
    v8::String::AsciiValue argStr(args[i]);
    errStr << "  arg[" << i << "]: " << *argStr << "\n";
  }
  return v8::ThrowException(v8::Exception::TypeError(v8::String::New(errStr.str().c_str())));
}

/*static*/ v8::Handle<v8::Value> wxNode_wxSizer::_Show(const v8::Arguments& args) {
  v8::HandleScope scope;
  wxNode_wxSizer* self = unwrap<wxNode_wxSizer>(args.This());

  
  /*
   * id: _27991
   */
  if(args.Length() == 3 && (args[0]->IsNull() || (args[0]->IsObject() && wxNode_wxWindow::AssignableFrom(args[0]->ToObject()->GetConstructorName()))) && args[1]->IsBoolean() && args[2]->IsBoolean()) {
    wxNode_wxWindow* window = args[0]->IsNull() ? NULL : wxNodeObject::unwrap<wxNode_wxWindow>(args[0]->ToObject()); /* type: _1000 * */
    bool show = args[1]->ToBoolean()->Value(); /* type: _14830  */
    bool recursive = args[2]->ToBoolean()->Value(); /* type: _14830  */
    

    bool returnVal = self->Show(window, show, recursive);

    return scope.Close(v8::Boolean::New(returnVal));
  }
  
  /*
   * id: _27991
   */
  if(args.Length() == 2 && (args[0]->IsNull() || (args[0]->IsObject() && wxNode_wxWindow::AssignableFrom(args[0]->ToObject()->GetConstructorName()))) && args[1]->IsBoolean()) {
    wxNode_wxWindow* window = args[0]->IsNull() ? NULL : wxNodeObject::unwrap<wxNode_wxWindow>(args[0]->ToObject()); /* type: _1000 * */
    bool show = args[1]->ToBoolean()->Value(); /* type: _14830  */
    

    bool returnVal = self->Show(window, show);

    return scope.Close(v8::Boolean::New(returnVal));
  }
  
  /*
   * id: _27991
   */
  if(args.Length() == 1 && (args[0]->IsNull() || (args[0]->IsObject() && wxNode_wxWindow::AssignableFrom(args[0]->ToObject()->GetConstructorName())))) {
    wxNode_wxWindow* window = args[0]->IsNull() ? NULL : wxNodeObject::unwrap<wxNode_wxWindow>(args[0]->ToObject()); /* type: _1000 * */
    

    bool returnVal = self->Show(window);

    return scope.Close(v8::Boolean::New(returnVal));
  }
  
  /*
   * id: _27992
   */
  if(args.Length() == 3 && (args[0]->IsNull() || (args[0]->IsObject() && wxNode_wxSizer::AssignableFrom(args[0]->ToObject()->GetConstructorName()))) && args[1]->IsBoolean() && args[2]->IsBoolean()) {
    wxNode_wxSizer* sizer = args[0]->IsNull() ? NULL : wxNodeObject::unwrap<wxNode_wxSizer>(args[0]->ToObject()); /* type: _58915 * */
    bool show = args[1]->ToBoolean()->Value(); /* type: _14830  */
    bool recursive = args[2]->ToBoolean()->Value(); /* type: _14830  */
    

    bool returnVal = self->Show(sizer, show, recursive);

    return scope.Close(v8::Boolean::New(returnVal));
  }
  
  /*
   * id: _27992
   */
  if(args.Length() == 2 && (args[0]->IsNull() || (args[0]->IsObject() && wxNode_wxSizer::AssignableFrom(args[0]->ToObject()->GetConstructorName()))) && args[1]->IsBoolean()) {
    wxNode_wxSizer* sizer = args[0]->IsNull() ? NULL : wxNodeObject::unwrap<wxNode_wxSizer>(args[0]->ToObject()); /* type: _58915 * */
    bool show = args[1]->ToBoolean()->Value(); /* type: _14830  */
    

    bool returnVal = self->Show(sizer, show);

    return scope.Close(v8::Boolean::New(returnVal));
  }
  
  /*
   * id: _27992
   */
  if(args.Length() == 1 && (args[0]->IsNull() || (args[0]->IsObject() && wxNode_wxSizer::AssignableFrom(args[0]->ToObject()->GetConstructorName())))) {
    wxNode_wxSizer* sizer = args[0]->IsNull() ? NULL : wxNodeObject::unwrap<wxNode_wxSizer>(args[0]->ToObject()); /* type: _58915 * */
    

    bool returnVal = self->Show(sizer);

    return scope.Close(v8::Boolean::New(returnVal));
  }
  
  /*
   * id: _27993
   */
  if(args.Length() == 2 && args[0]->IsNumber() && args[1]->IsBoolean()) {
    unsigned int index = (unsigned int)args[0]->ToInt32()->Value(); /* type: _8711  */
    bool show = args[1]->ToBoolean()->Value(); /* type: _14830  */
    

    bool returnVal = self->Show(index, show);

    return scope.Close(v8::Boolean::New(returnVal));
  }
  
  /*
   * id: _27993
   */
  if(args.Length() == 1 && args[0]->IsNumber()) {
    unsigned int index = (unsigned int)args[0]->ToInt32()->Value(); /* type: _8711  */
    

    bool returnVal = self->Show(index);

    return scope.Close(v8::Boolean::New(returnVal));
  }
  
  /*
   * id: _28001
   */
  if(args.Length() == 1 && args[0]->IsBoolean()) {
    bool show = args[0]->ToBoolean()->Value(); /* type: _14830  */
    

    self->Show(show);

    return v8::Undefined();
  }
  

  std::ostringstream errStr;
  errStr << "Could not find matching method for arguments (method name: wxSizer::Show).\n";
  errStr << "  arg count: " << args.Length() << "\n";
  for(int i = 0; i < args.Length(); i++) {
    v8::String::AsciiValue argStr(args[i]);
    errStr << "  arg[" << i << "]: " << *argStr << "\n";
  }
  return v8::ThrowException(v8::Exception::TypeError(v8::String::New(errStr.str().c_str())));
}

/*static*/ v8::Handle<v8::Value> wxNode_wxSizer::_Hide(const v8::Arguments& args) {
  v8::HandleScope scope;
  wxNode_wxSizer* self = unwrap<wxNode_wxSizer>(args.This());

  
  /*
   * id: _27994
   */
  if(args.Length() == 2 && (args[0]->IsNull() || (args[0]->IsObject() && wxNode_wxSizer::AssignableFrom(args[0]->ToObject()->GetConstructorName()))) && args[1]->IsBoolean()) {
    wxNode_wxSizer* sizer = args[0]->IsNull() ? NULL : wxNodeObject::unwrap<wxNode_wxSizer>(args[0]->ToObject()); /* type: _58915 * */
    bool recursive = args[1]->ToBoolean()->Value(); /* type: _14830  */
    

    bool returnVal = self->Hide(sizer, recursive);

    return scope.Close(v8::Boolean::New(returnVal));
  }
  
  /*
   * id: _27994
   */
  if(args.Length() == 1 && (args[0]->IsNull() || (args[0]->IsObject() && wxNode_wxSizer::AssignableFrom(args[0]->ToObject()->GetConstructorName())))) {
    wxNode_wxSizer* sizer = args[0]->IsNull() ? NULL : wxNodeObject::unwrap<wxNode_wxSizer>(args[0]->ToObject()); /* type: _58915 * */
    

    bool returnVal = self->Hide(sizer);

    return scope.Close(v8::Boolean::New(returnVal));
  }
  
  /*
   * id: _27995
   */
  if(args.Length() == 2 && (args[0]->IsNull() || (args[0]->IsObject() && wxNode_wxWindow::AssignableFrom(args[0]->ToObject()->GetConstructorName()))) && args[1]->IsBoolean()) {
    wxNode_wxWindow* window = args[0]->IsNull() ? NULL : wxNodeObject::unwrap<wxNode_wxWindow>(args[0]->ToObject()); /* type: _1000 * */
    bool recursive = args[1]->ToBoolean()->Value(); /* type: _14830  */
    

    bool returnVal = self->Hide(window, recursive);

    return scope.Close(v8::Boolean::New(returnVal));
  }
  
  /*
   * id: _27995
   */
  if(args.Length() == 1 && (args[0]->IsNull() || (args[0]->IsObject() && wxNode_wxWindow::AssignableFrom(args[0]->ToObject()->GetConstructorName())))) {
    wxNode_wxWindow* window = args[0]->IsNull() ? NULL : wxNodeObject::unwrap<wxNode_wxWindow>(args[0]->ToObject()); /* type: _1000 * */
    

    bool returnVal = self->Hide(window);

    return scope.Close(v8::Boolean::New(returnVal));
  }
  
  /*
   * id: _27996
   */
  if(args.Length() == 1 && args[0]->IsNumber()) {
    unsigned int index = (unsigned int)args[0]->ToInt32()->Value(); /* type: _8711  */
    

    bool returnVal = self->Hide(index);

    return scope.Close(v8::Boolean::New(returnVal));
  }
  

  std::ostringstream errStr;
  errStr << "Could not find matching method for arguments (method name: wxSizer::Hide).\n";
  errStr << "  arg count: " << args.Length() << "\n";
  for(int i = 0; i < args.Length(); i++) {
    v8::String::AsciiValue argStr(args[i]);
    errStr << "  arg[" << i << "]: " << *argStr << "\n";
  }
  return v8::ThrowException(v8::Exception::TypeError(v8::String::New(errStr.str().c_str())));
}

/*static*/ v8::Handle<v8::Value> wxNode_wxSizer::_IsShown(const v8::Arguments& args) {
  v8::HandleScope scope;
  wxNode_wxSizer* self = unwrap<wxNode_wxSizer>(args.This());

  
  /*
   * id: _27997
   */
  if(args.Length() == 1 && (args[0]->IsNull() || (args[0]->IsObject() && wxNode_wxWindow::AssignableFrom(args[0]->ToObject()->GetConstructorName())))) {
    wxNode_wxWindow* window = args[0]->IsNull() ? NULL : wxNodeObject::unwrap<wxNode_wxWindow>(args[0]->ToObject()); /* type: _1000 * */
    

    bool returnVal = self->IsShown(window);

    return scope.Close(v8::Boolean::New(returnVal));
  }
  
  /*
   * id: _27998
   */
  if(args.Length() == 1 && (args[0]->IsNull() || (args[0]->IsObject() && wxNode_wxSizer::AssignableFrom(args[0]->ToObject()->GetConstructorName())))) {
    wxNode_wxSizer* sizer = args[0]->IsNull() ? NULL : wxNodeObject::unwrap<wxNode_wxSizer>(args[0]->ToObject()); /* type: _58915 * */
    

    bool returnVal = self->IsShown(sizer);

    return scope.Close(v8::Boolean::New(returnVal));
  }
  
  /*
   * id: _27999
   */
  if(args.Length() == 1 && args[0]->IsNumber()) {
    unsigned int index = (unsigned int)args[0]->ToInt32()->Value(); /* type: _8711  */
    

    bool returnVal = self->IsShown(index);

    return scope.Close(v8::Boolean::New(returnVal));
  }
  

  std::ostringstream errStr;
  errStr << "Could not find matching method for arguments (method name: wxSizer::IsShown).\n";
  errStr << "  arg count: " << args.Length() << "\n";
  for(int i = 0; i < args.Length(); i++) {
    v8::String::AsciiValue argStr(args[i]);
    errStr << "  arg[" << i << "]: " << *argStr << "\n";
  }
  return v8::ThrowException(v8::Exception::TypeError(v8::String::New(errStr.str().c_str())));
}

/*static*/ v8::Handle<v8::Value> wxNode_wxSizer::_ShowItems(const v8::Arguments& args) {
  v8::HandleScope scope;
  wxNode_wxSizer* self = unwrap<wxNode_wxSizer>(args.This());

  
  /*
   * id: _28000
   */
  if(args.Length() == 1 && args[0]->IsBoolean()) {
    bool show = args[0]->ToBoolean()->Value(); /* type: _14830  */
    

    self->ShowItems(show);

    return v8::Undefined();
  }
  

  std::ostringstream errStr;
  errStr << "Could not find matching method for arguments (method name: wxSizer::ShowItems).\n";
  errStr << "  arg count: " << args.Length() << "\n";
  for(int i = 0; i < args.Length(); i++) {
    v8::String::AsciiValue argStr(args[i]);
    errStr << "  arg[" << i << "]: " << *argStr << "\n";
  }
  return v8::ThrowException(v8::Exception::TypeError(v8::String::New(errStr.str().c_str())));
}

/*static*/ v8::Handle<v8::Value> wxNode_wxSizer::_GetClassInfo(const v8::Arguments& args) {
  v8::HandleScope scope;
  wxNode_wxSizer* self = unwrap<wxNode_wxSizer>(args.This());

  
  /*
   * id: _28010
   */
  if(args.Length() == 0) {
    

    wxClassInfo* returnVal = self->GetClassInfo();

    return scope.Close(wxNode_wxClassInfo::New(returnVal));
  }
  

  std::ostringstream errStr;
  errStr << "Could not find matching method for arguments (method name: wxSizer::GetClassInfo).\n";
  errStr << "  arg count: " << args.Length() << "\n";
  for(int i = 0; i < args.Length(); i++) {
    v8::String::AsciiValue argStr(args[i]);
    errStr << "  arg[" << i << "]: " << *argStr << "\n";
  }
  return v8::ThrowException(v8::Exception::TypeError(v8::String::New(errStr.str().c_str())));
}



