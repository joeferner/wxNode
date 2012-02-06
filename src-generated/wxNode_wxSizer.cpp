
#include <sstream>
#include "wxNode_wxSizer.h"
#include "wxNode_wxEvtHandler.h"
#include "wxNode_wxObject.h"
#include "wxNode_wxWindow.h"
#include "wxNode_wxSizerFlags.h"
#include "wxNode_wxSizerItem.h"
#include "wxNode_wxSize.h"
#include "wxNode_wxPoint.h"


/* static */ v8::Persistent<v8::FunctionTemplate> wxNode_wxSizer::s_ct;

/*static*/ void wxNode_wxSizer::Init(v8::Handle<v8::Object> target) {
  v8::HandleScope scope;

  v8::Local<v8::FunctionTemplate> t = v8::FunctionTemplate::New(wxNodeObject::NewFunc);
  s_ct = v8::Persistent<v8::FunctionTemplate>::New(t);
  s_ct->InstanceTemplate()->SetInternalFieldCount(2);
  s_ct->SetClassName(v8::String::NewSymbol("wxSizer"));

  NODE_SET_PROTOTYPE_METHOD(s_ct, "init", _init);
  AddMethods(s_ct);

  target->Set(v8::String::NewSymbol("wxSizer"), s_ct->GetFunction());
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

/*static*/ v8::Handle<v8::Value> wxNode_wxSizer::_init(const v8::Arguments& args) {
  v8::HandleScope scope;


  std::ostringstream errStr;
  errStr << "Could not find matching constructor for arguments (class name: wxSizer).\n";                           \
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
   * id: _27823
   */
  if(args.Length() == 5 && (args[0]->IsNull() || args[0]->IsObject()) && args[1]->IsNumber() && args[2]->IsNumber() && args[3]->IsNumber() && (args[4]->IsNull() || args[4]->IsObject())) {
    wxNode_wxWindow* window = args[0]->IsNull() ? NULL : wxNodeObject::unwrap<wxNode_wxWindow>(args[0]->ToObject()); /* type: _993 * */
    int proportion = (int)args[1]->ToInt32()->Value(); /* type: _162  */
    int flag = (int)args[2]->ToInt32()->Value(); /* type: _162  */
    int border = (int)args[3]->ToInt32()->Value(); /* type: _162  */
    wxNode_wxObject* userData = args[4]->IsNull() ? NULL : wxNodeObject::unwrap<wxNode_wxObject>(args[4]->ToObject()); /* type: _15609 * */


    self->Add(window, proportion, flag, border, userData);

    // TODO: handle return type
    return v8::Undefined();
  }

  /*
   * id: _27823
   */
  if(args.Length() == 4 && (args[0]->IsNull() || args[0]->IsObject()) && args[1]->IsNumber() && args[2]->IsNumber() && args[3]->IsNumber()) {
    wxNode_wxWindow* window = args[0]->IsNull() ? NULL : wxNodeObject::unwrap<wxNode_wxWindow>(args[0]->ToObject()); /* type: _993 * */
    int proportion = (int)args[1]->ToInt32()->Value(); /* type: _162  */
    int flag = (int)args[2]->ToInt32()->Value(); /* type: _162  */
    int border = (int)args[3]->ToInt32()->Value(); /* type: _162  */


    self->Add(window, proportion, flag, border);

    // TODO: handle return type
    return v8::Undefined();
  }

  /*
   * id: _27823
   */
  if(args.Length() == 3 && (args[0]->IsNull() || args[0]->IsObject()) && args[1]->IsNumber() && args[2]->IsNumber()) {
    wxNode_wxWindow* window = args[0]->IsNull() ? NULL : wxNodeObject::unwrap<wxNode_wxWindow>(args[0]->ToObject()); /* type: _993 * */
    int proportion = (int)args[1]->ToInt32()->Value(); /* type: _162  */
    int flag = (int)args[2]->ToInt32()->Value(); /* type: _162  */


    self->Add(window, proportion, flag);

    // TODO: handle return type
    return v8::Undefined();
  }

  /*
   * id: _27823
   */
  if(args.Length() == 2 && (args[0]->IsNull() || args[0]->IsObject()) && args[1]->IsNumber()) {
    wxNode_wxWindow* window = args[0]->IsNull() ? NULL : wxNodeObject::unwrap<wxNode_wxWindow>(args[0]->ToObject()); /* type: _993 * */
    int proportion = (int)args[1]->ToInt32()->Value(); /* type: _162  */


    self->Add(window, proportion);

    // TODO: handle return type
    return v8::Undefined();
  }

  /*
   * id: _27823
   */
  if(args.Length() == 1 && (args[0]->IsNull() || args[0]->IsObject())) {
    wxNode_wxWindow* window = args[0]->IsNull() ? NULL : wxNodeObject::unwrap<wxNode_wxWindow>(args[0]->ToObject()); /* type: _993 * */


    self->Add(window);

    // TODO: handle return type
    return v8::Undefined();
  }

  /*
   * id: _27824
   */
  if(args.Length() == 5 && (args[0]->IsNull() || args[0]->IsObject()) && args[1]->IsNumber() && args[2]->IsNumber() && args[3]->IsNumber() && (args[4]->IsNull() || args[4]->IsObject())) {
    wxNode_wxSizer* sizer = args[0]->IsNull() ? NULL : wxNodeObject::unwrap<wxNode_wxSizer>(args[0]->ToObject()); /* type: _58725 * */
    int proportion = (int)args[1]->ToInt32()->Value(); /* type: _162  */
    int flag = (int)args[2]->ToInt32()->Value(); /* type: _162  */
    int border = (int)args[3]->ToInt32()->Value(); /* type: _162  */
    wxNode_wxObject* userData = args[4]->IsNull() ? NULL : wxNodeObject::unwrap<wxNode_wxObject>(args[4]->ToObject()); /* type: _15609 * */


    self->Add(sizer, proportion, flag, border, userData);

    // TODO: handle return type
    return v8::Undefined();
  }

  /*
   * id: _27824
   */
  if(args.Length() == 4 && (args[0]->IsNull() || args[0]->IsObject()) && args[1]->IsNumber() && args[2]->IsNumber() && args[3]->IsNumber()) {
    wxNode_wxSizer* sizer = args[0]->IsNull() ? NULL : wxNodeObject::unwrap<wxNode_wxSizer>(args[0]->ToObject()); /* type: _58725 * */
    int proportion = (int)args[1]->ToInt32()->Value(); /* type: _162  */
    int flag = (int)args[2]->ToInt32()->Value(); /* type: _162  */
    int border = (int)args[3]->ToInt32()->Value(); /* type: _162  */


    self->Add(sizer, proportion, flag, border);

    // TODO: handle return type
    return v8::Undefined();
  }

  /*
   * id: _27824
   */
  if(args.Length() == 3 && (args[0]->IsNull() || args[0]->IsObject()) && args[1]->IsNumber() && args[2]->IsNumber()) {
    wxNode_wxSizer* sizer = args[0]->IsNull() ? NULL : wxNodeObject::unwrap<wxNode_wxSizer>(args[0]->ToObject()); /* type: _58725 * */
    int proportion = (int)args[1]->ToInt32()->Value(); /* type: _162  */
    int flag = (int)args[2]->ToInt32()->Value(); /* type: _162  */


    self->Add(sizer, proportion, flag);

    // TODO: handle return type
    return v8::Undefined();
  }

  /*
   * id: _27824
   */
  if(args.Length() == 2 && (args[0]->IsNull() || args[0]->IsObject()) && args[1]->IsNumber()) {
    wxNode_wxSizer* sizer = args[0]->IsNull() ? NULL : wxNodeObject::unwrap<wxNode_wxSizer>(args[0]->ToObject()); /* type: _58725 * */
    int proportion = (int)args[1]->ToInt32()->Value(); /* type: _162  */


    self->Add(sizer, proportion);

    // TODO: handle return type
    return v8::Undefined();
  }

  /*
   * id: _27824
   */
  if(args.Length() == 1 && (args[0]->IsNull() || args[0]->IsObject())) {
    wxNode_wxSizer* sizer = args[0]->IsNull() ? NULL : wxNodeObject::unwrap<wxNode_wxSizer>(args[0]->ToObject()); /* type: _58725 * */


    self->Add(sizer);

    // TODO: handle return type
    return v8::Undefined();
  }

  /*
   * id: _27825
   */
  if(args.Length() == 6 && args[0]->IsNumber() && args[1]->IsNumber() && args[2]->IsNumber() && args[3]->IsNumber() && args[4]->IsNumber() && (args[5]->IsNull() || args[5]->IsObject())) {
    int width = (int)args[0]->ToInt32()->Value(); /* type: _162  */
    int height = (int)args[1]->ToInt32()->Value(); /* type: _162  */
    int proportion = (int)args[2]->ToInt32()->Value(); /* type: _162  */
    int flag = (int)args[3]->ToInt32()->Value(); /* type: _162  */
    int border = (int)args[4]->ToInt32()->Value(); /* type: _162  */
    wxNode_wxObject* userData = args[5]->IsNull() ? NULL : wxNodeObject::unwrap<wxNode_wxObject>(args[5]->ToObject()); /* type: _15609 * */


    self->Add(width, height, proportion, flag, border, userData);

    // TODO: handle return type
    return v8::Undefined();
  }

  /*
   * id: _27825
   */
  if(args.Length() == 5 && args[0]->IsNumber() && args[1]->IsNumber() && args[2]->IsNumber() && args[3]->IsNumber() && args[4]->IsNumber()) {
    int width = (int)args[0]->ToInt32()->Value(); /* type: _162  */
    int height = (int)args[1]->ToInt32()->Value(); /* type: _162  */
    int proportion = (int)args[2]->ToInt32()->Value(); /* type: _162  */
    int flag = (int)args[3]->ToInt32()->Value(); /* type: _162  */
    int border = (int)args[4]->ToInt32()->Value(); /* type: _162  */


    self->Add(width, height, proportion, flag, border);

    // TODO: handle return type
    return v8::Undefined();
  }

  /*
   * id: _27825
   */
  if(args.Length() == 4 && args[0]->IsNumber() && args[1]->IsNumber() && args[2]->IsNumber() && args[3]->IsNumber()) {
    int width = (int)args[0]->ToInt32()->Value(); /* type: _162  */
    int height = (int)args[1]->ToInt32()->Value(); /* type: _162  */
    int proportion = (int)args[2]->ToInt32()->Value(); /* type: _162  */
    int flag = (int)args[3]->ToInt32()->Value(); /* type: _162  */


    self->Add(width, height, proportion, flag);

    // TODO: handle return type
    return v8::Undefined();
  }

  /*
   * id: _27825
   */
  if(args.Length() == 3 && args[0]->IsNumber() && args[1]->IsNumber() && args[2]->IsNumber()) {
    int width = (int)args[0]->ToInt32()->Value(); /* type: _162  */
    int height = (int)args[1]->ToInt32()->Value(); /* type: _162  */
    int proportion = (int)args[2]->ToInt32()->Value(); /* type: _162  */


    self->Add(width, height, proportion);

    // TODO: handle return type
    return v8::Undefined();
  }

  /*
   * id: _27825
   */
  if(args.Length() == 2 && args[0]->IsNumber() && args[1]->IsNumber()) {
    int width = (int)args[0]->ToInt32()->Value(); /* type: _162  */
    int height = (int)args[1]->ToInt32()->Value(); /* type: _162  */


    self->Add(width, height);

    // TODO: handle return type
    return v8::Undefined();
  }

  /*
   * id: _27826
   */
  if(args.Length() == 2 && (args[0]->IsNull() || args[0]->IsObject()) && (args[1]->IsNull() || args[1]->IsObject())) {
    wxNode_wxWindow* window = args[0]->IsNull() ? NULL : wxNodeObject::unwrap<wxNode_wxWindow>(args[0]->ToObject()); /* type: _993 * */
    wxNode_wxSizerFlags* flags = args[1]->IsNull() ? NULL : wxNodeObject::unwrap<wxNode_wxSizerFlags>(args[1]->ToObject()); /* type: _58724  */


    self->Add(window, *flags);

    // TODO: handle return type
    return v8::Undefined();
  }

  /*
   * id: _27827
   */
  if(args.Length() == 2 && (args[0]->IsNull() || args[0]->IsObject()) && (args[1]->IsNull() || args[1]->IsObject())) {
    wxNode_wxSizer* sizer = args[0]->IsNull() ? NULL : wxNodeObject::unwrap<wxNode_wxSizer>(args[0]->ToObject()); /* type: _58725 * */
    wxNode_wxSizerFlags* flags = args[1]->IsNull() ? NULL : wxNodeObject::unwrap<wxNode_wxSizerFlags>(args[1]->ToObject()); /* type: _58724  */


    self->Add(sizer, *flags);

    // TODO: handle return type
    return v8::Undefined();
  }

  /*
   * id: _27828
   */
  if(args.Length() == 3 && args[0]->IsNumber() && args[1]->IsNumber() && (args[2]->IsNull() || args[2]->IsObject())) {
    int width = (int)args[0]->ToInt32()->Value(); /* type: _162  */
    int height = (int)args[1]->ToInt32()->Value(); /* type: _162  */
    wxNode_wxSizerFlags* flags = args[2]->IsNull() ? NULL : wxNodeObject::unwrap<wxNode_wxSizerFlags>(args[2]->ToObject()); /* type: _58724  */


    self->Add(width, height, *flags);

    // TODO: handle return type
    return v8::Undefined();
  }

  /*
   * id: _27829
   */
  if(args.Length() == 1 && (args[0]->IsNull() || args[0]->IsObject())) {
    wxNode_wxSizerItem* item = args[0]->IsNull() ? NULL : wxNodeObject::unwrap<wxNode_wxSizerItem>(args[0]->ToObject()); /* type: _53878 * */


    self->Add(item);

    // TODO: handle return type
    return v8::Undefined();
  }


  std::ostringstream errStr;
  errStr << "Could not find matching method for arguments (method name: Add).\n";                           \
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
   * id: _27830
   */
  if(args.Length() == 1 && args[0]->IsNumber()) {
    int size = (int)args[0]->ToInt32()->Value(); /* type: _162  */


    self->AddSpacer(size);

    // TODO: handle return type
    return v8::Undefined();
  }


  std::ostringstream errStr;
  errStr << "Could not find matching method for arguments (method name: AddSpacer).\n";                           \
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
   * id: _27831
   */
  if(args.Length() == 1 && args[0]->IsNumber()) {
    int prop = (int)args[0]->ToInt32()->Value(); /* type: _162  */


    self->AddStretchSpacer(prop);

    // TODO: handle return type
    return v8::Undefined();
  }

  /*
   * id: _27831
   */
  if(args.Length() == 0) {


    self->AddStretchSpacer();

    // TODO: handle return type
    return v8::Undefined();
  }


  std::ostringstream errStr;
  errStr << "Could not find matching method for arguments (method name: AddStretchSpacer).\n";                           \
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
   * id: _27832
   */
  if(args.Length() == 6 && args[0]->IsNumber() && (args[1]->IsNull() || args[1]->IsObject()) && args[2]->IsNumber() && args[3]->IsNumber() && args[4]->IsNumber() && (args[5]->IsNull() || args[5]->IsObject())) {
    unsigned int index = (unsigned int)args[0]->ToInt32()->Value(); /* type: _8620  */
    wxNode_wxWindow* window = args[1]->IsNull() ? NULL : wxNodeObject::unwrap<wxNode_wxWindow>(args[1]->ToObject()); /* type: _993 * */
    int proportion = (int)args[2]->ToInt32()->Value(); /* type: _162  */
    int flag = (int)args[3]->ToInt32()->Value(); /* type: _162  */
    int border = (int)args[4]->ToInt32()->Value(); /* type: _162  */
    wxNode_wxObject* userData = args[5]->IsNull() ? NULL : wxNodeObject::unwrap<wxNode_wxObject>(args[5]->ToObject()); /* type: _15609 * */


    self->Insert(index, window, proportion, flag, border, userData);

    // TODO: handle return type
    return v8::Undefined();
  }

  /*
   * id: _27832
   */
  if(args.Length() == 5 && args[0]->IsNumber() && (args[1]->IsNull() || args[1]->IsObject()) && args[2]->IsNumber() && args[3]->IsNumber() && args[4]->IsNumber()) {
    unsigned int index = (unsigned int)args[0]->ToInt32()->Value(); /* type: _8620  */
    wxNode_wxWindow* window = args[1]->IsNull() ? NULL : wxNodeObject::unwrap<wxNode_wxWindow>(args[1]->ToObject()); /* type: _993 * */
    int proportion = (int)args[2]->ToInt32()->Value(); /* type: _162  */
    int flag = (int)args[3]->ToInt32()->Value(); /* type: _162  */
    int border = (int)args[4]->ToInt32()->Value(); /* type: _162  */


    self->Insert(index, window, proportion, flag, border);

    // TODO: handle return type
    return v8::Undefined();
  }

  /*
   * id: _27832
   */
  if(args.Length() == 4 && args[0]->IsNumber() && (args[1]->IsNull() || args[1]->IsObject()) && args[2]->IsNumber() && args[3]->IsNumber()) {
    unsigned int index = (unsigned int)args[0]->ToInt32()->Value(); /* type: _8620  */
    wxNode_wxWindow* window = args[1]->IsNull() ? NULL : wxNodeObject::unwrap<wxNode_wxWindow>(args[1]->ToObject()); /* type: _993 * */
    int proportion = (int)args[2]->ToInt32()->Value(); /* type: _162  */
    int flag = (int)args[3]->ToInt32()->Value(); /* type: _162  */


    self->Insert(index, window, proportion, flag);

    // TODO: handle return type
    return v8::Undefined();
  }

  /*
   * id: _27832
   */
  if(args.Length() == 3 && args[0]->IsNumber() && (args[1]->IsNull() || args[1]->IsObject()) && args[2]->IsNumber()) {
    unsigned int index = (unsigned int)args[0]->ToInt32()->Value(); /* type: _8620  */
    wxNode_wxWindow* window = args[1]->IsNull() ? NULL : wxNodeObject::unwrap<wxNode_wxWindow>(args[1]->ToObject()); /* type: _993 * */
    int proportion = (int)args[2]->ToInt32()->Value(); /* type: _162  */


    self->Insert(index, window, proportion);

    // TODO: handle return type
    return v8::Undefined();
  }

  /*
   * id: _27832
   */
  if(args.Length() == 2 && args[0]->IsNumber() && (args[1]->IsNull() || args[1]->IsObject())) {
    unsigned int index = (unsigned int)args[0]->ToInt32()->Value(); /* type: _8620  */
    wxNode_wxWindow* window = args[1]->IsNull() ? NULL : wxNodeObject::unwrap<wxNode_wxWindow>(args[1]->ToObject()); /* type: _993 * */


    self->Insert(index, window);

    // TODO: handle return type
    return v8::Undefined();
  }

  /*
   * id: _27833
   */
  if(args.Length() == 6 && args[0]->IsNumber() && (args[1]->IsNull() || args[1]->IsObject()) && args[2]->IsNumber() && args[3]->IsNumber() && args[4]->IsNumber() && (args[5]->IsNull() || args[5]->IsObject())) {
    unsigned int index = (unsigned int)args[0]->ToInt32()->Value(); /* type: _8620  */
    wxNode_wxSizer* sizer = args[1]->IsNull() ? NULL : wxNodeObject::unwrap<wxNode_wxSizer>(args[1]->ToObject()); /* type: _58725 * */
    int proportion = (int)args[2]->ToInt32()->Value(); /* type: _162  */
    int flag = (int)args[3]->ToInt32()->Value(); /* type: _162  */
    int border = (int)args[4]->ToInt32()->Value(); /* type: _162  */
    wxNode_wxObject* userData = args[5]->IsNull() ? NULL : wxNodeObject::unwrap<wxNode_wxObject>(args[5]->ToObject()); /* type: _15609 * */


    self->Insert(index, sizer, proportion, flag, border, userData);

    // TODO: handle return type
    return v8::Undefined();
  }

  /*
   * id: _27833
   */
  if(args.Length() == 5 && args[0]->IsNumber() && (args[1]->IsNull() || args[1]->IsObject()) && args[2]->IsNumber() && args[3]->IsNumber() && args[4]->IsNumber()) {
    unsigned int index = (unsigned int)args[0]->ToInt32()->Value(); /* type: _8620  */
    wxNode_wxSizer* sizer = args[1]->IsNull() ? NULL : wxNodeObject::unwrap<wxNode_wxSizer>(args[1]->ToObject()); /* type: _58725 * */
    int proportion = (int)args[2]->ToInt32()->Value(); /* type: _162  */
    int flag = (int)args[3]->ToInt32()->Value(); /* type: _162  */
    int border = (int)args[4]->ToInt32()->Value(); /* type: _162  */


    self->Insert(index, sizer, proportion, flag, border);

    // TODO: handle return type
    return v8::Undefined();
  }

  /*
   * id: _27833
   */
  if(args.Length() == 4 && args[0]->IsNumber() && (args[1]->IsNull() || args[1]->IsObject()) && args[2]->IsNumber() && args[3]->IsNumber()) {
    unsigned int index = (unsigned int)args[0]->ToInt32()->Value(); /* type: _8620  */
    wxNode_wxSizer* sizer = args[1]->IsNull() ? NULL : wxNodeObject::unwrap<wxNode_wxSizer>(args[1]->ToObject()); /* type: _58725 * */
    int proportion = (int)args[2]->ToInt32()->Value(); /* type: _162  */
    int flag = (int)args[3]->ToInt32()->Value(); /* type: _162  */


    self->Insert(index, sizer, proportion, flag);

    // TODO: handle return type
    return v8::Undefined();
  }

  /*
   * id: _27833
   */
  if(args.Length() == 3 && args[0]->IsNumber() && (args[1]->IsNull() || args[1]->IsObject()) && args[2]->IsNumber()) {
    unsigned int index = (unsigned int)args[0]->ToInt32()->Value(); /* type: _8620  */
    wxNode_wxSizer* sizer = args[1]->IsNull() ? NULL : wxNodeObject::unwrap<wxNode_wxSizer>(args[1]->ToObject()); /* type: _58725 * */
    int proportion = (int)args[2]->ToInt32()->Value(); /* type: _162  */


    self->Insert(index, sizer, proportion);

    // TODO: handle return type
    return v8::Undefined();
  }

  /*
   * id: _27833
   */
  if(args.Length() == 2 && args[0]->IsNumber() && (args[1]->IsNull() || args[1]->IsObject())) {
    unsigned int index = (unsigned int)args[0]->ToInt32()->Value(); /* type: _8620  */
    wxNode_wxSizer* sizer = args[1]->IsNull() ? NULL : wxNodeObject::unwrap<wxNode_wxSizer>(args[1]->ToObject()); /* type: _58725 * */


    self->Insert(index, sizer);

    // TODO: handle return type
    return v8::Undefined();
  }

  /*
   * id: _27834
   */
  if(args.Length() == 7 && args[0]->IsNumber() && args[1]->IsNumber() && args[2]->IsNumber() && args[3]->IsNumber() && args[4]->IsNumber() && args[5]->IsNumber() && (args[6]->IsNull() || args[6]->IsObject())) {
    unsigned int index = (unsigned int)args[0]->ToInt32()->Value(); /* type: _8620  */
    int width = (int)args[1]->ToInt32()->Value(); /* type: _162  */
    int height = (int)args[2]->ToInt32()->Value(); /* type: _162  */
    int proportion = (int)args[3]->ToInt32()->Value(); /* type: _162  */
    int flag = (int)args[4]->ToInt32()->Value(); /* type: _162  */
    int border = (int)args[5]->ToInt32()->Value(); /* type: _162  */
    wxNode_wxObject* userData = args[6]->IsNull() ? NULL : wxNodeObject::unwrap<wxNode_wxObject>(args[6]->ToObject()); /* type: _15609 * */


    self->Insert(index, width, height, proportion, flag, border, userData);

    // TODO: handle return type
    return v8::Undefined();
  }

  /*
   * id: _27834
   */
  if(args.Length() == 6 && args[0]->IsNumber() && args[1]->IsNumber() && args[2]->IsNumber() && args[3]->IsNumber() && args[4]->IsNumber() && args[5]->IsNumber()) {
    unsigned int index = (unsigned int)args[0]->ToInt32()->Value(); /* type: _8620  */
    int width = (int)args[1]->ToInt32()->Value(); /* type: _162  */
    int height = (int)args[2]->ToInt32()->Value(); /* type: _162  */
    int proportion = (int)args[3]->ToInt32()->Value(); /* type: _162  */
    int flag = (int)args[4]->ToInt32()->Value(); /* type: _162  */
    int border = (int)args[5]->ToInt32()->Value(); /* type: _162  */


    self->Insert(index, width, height, proportion, flag, border);

    // TODO: handle return type
    return v8::Undefined();
  }

  /*
   * id: _27834
   */
  if(args.Length() == 5 && args[0]->IsNumber() && args[1]->IsNumber() && args[2]->IsNumber() && args[3]->IsNumber() && args[4]->IsNumber()) {
    unsigned int index = (unsigned int)args[0]->ToInt32()->Value(); /* type: _8620  */
    int width = (int)args[1]->ToInt32()->Value(); /* type: _162  */
    int height = (int)args[2]->ToInt32()->Value(); /* type: _162  */
    int proportion = (int)args[3]->ToInt32()->Value(); /* type: _162  */
    int flag = (int)args[4]->ToInt32()->Value(); /* type: _162  */


    self->Insert(index, width, height, proportion, flag);

    // TODO: handle return type
    return v8::Undefined();
  }

  /*
   * id: _27834
   */
  if(args.Length() == 4 && args[0]->IsNumber() && args[1]->IsNumber() && args[2]->IsNumber() && args[3]->IsNumber()) {
    unsigned int index = (unsigned int)args[0]->ToInt32()->Value(); /* type: _8620  */
    int width = (int)args[1]->ToInt32()->Value(); /* type: _162  */
    int height = (int)args[2]->ToInt32()->Value(); /* type: _162  */
    int proportion = (int)args[3]->ToInt32()->Value(); /* type: _162  */


    self->Insert(index, width, height, proportion);

    // TODO: handle return type
    return v8::Undefined();
  }

  /*
   * id: _27834
   */
  if(args.Length() == 3 && args[0]->IsNumber() && args[1]->IsNumber() && args[2]->IsNumber()) {
    unsigned int index = (unsigned int)args[0]->ToInt32()->Value(); /* type: _8620  */
    int width = (int)args[1]->ToInt32()->Value(); /* type: _162  */
    int height = (int)args[2]->ToInt32()->Value(); /* type: _162  */


    self->Insert(index, width, height);

    // TODO: handle return type
    return v8::Undefined();
  }

  /*
   * id: _27835
   */
  if(args.Length() == 3 && args[0]->IsNumber() && (args[1]->IsNull() || args[1]->IsObject()) && (args[2]->IsNull() || args[2]->IsObject())) {
    unsigned int index = (unsigned int)args[0]->ToInt32()->Value(); /* type: _8620  */
    wxNode_wxWindow* window = args[1]->IsNull() ? NULL : wxNodeObject::unwrap<wxNode_wxWindow>(args[1]->ToObject()); /* type: _993 * */
    wxNode_wxSizerFlags* flags = args[2]->IsNull() ? NULL : wxNodeObject::unwrap<wxNode_wxSizerFlags>(args[2]->ToObject()); /* type: _58724  */


    self->Insert(index, window, *flags);

    // TODO: handle return type
    return v8::Undefined();
  }

  /*
   * id: _27836
   */
  if(args.Length() == 3 && args[0]->IsNumber() && (args[1]->IsNull() || args[1]->IsObject()) && (args[2]->IsNull() || args[2]->IsObject())) {
    unsigned int index = (unsigned int)args[0]->ToInt32()->Value(); /* type: _8620  */
    wxNode_wxSizer* sizer = args[1]->IsNull() ? NULL : wxNodeObject::unwrap<wxNode_wxSizer>(args[1]->ToObject()); /* type: _58725 * */
    wxNode_wxSizerFlags* flags = args[2]->IsNull() ? NULL : wxNodeObject::unwrap<wxNode_wxSizerFlags>(args[2]->ToObject()); /* type: _58724  */


    self->Insert(index, sizer, *flags);

    // TODO: handle return type
    return v8::Undefined();
  }

  /*
   * id: _27837
   */
  if(args.Length() == 4 && args[0]->IsNumber() && args[1]->IsNumber() && args[2]->IsNumber() && (args[3]->IsNull() || args[3]->IsObject())) {
    unsigned int index = (unsigned int)args[0]->ToInt32()->Value(); /* type: _8620  */
    int width = (int)args[1]->ToInt32()->Value(); /* type: _162  */
    int height = (int)args[2]->ToInt32()->Value(); /* type: _162  */
    wxNode_wxSizerFlags* flags = args[3]->IsNull() ? NULL : wxNodeObject::unwrap<wxNode_wxSizerFlags>(args[3]->ToObject()); /* type: _58724  */


    self->Insert(index, width, height, *flags);

    // TODO: handle return type
    return v8::Undefined();
  }

  /*
   * id: _27838
   */
  if(args.Length() == 2 && args[0]->IsNumber() && (args[1]->IsNull() || args[1]->IsObject())) {
    unsigned int index = (unsigned int)args[0]->ToInt32()->Value(); /* type: _8620  */
    wxNode_wxSizerItem* item = args[1]->IsNull() ? NULL : wxNodeObject::unwrap<wxNode_wxSizerItem>(args[1]->ToObject()); /* type: _53878 * */


    self->Insert(index, item);

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

/*static*/ v8::Handle<v8::Value> wxNode_wxSizer::_InsertSpacer(const v8::Arguments& args) {
  v8::HandleScope scope;
  wxNode_wxSizer* self = unwrap<wxNode_wxSizer>(args.This());


  /*
   * id: _27839
   */
  if(args.Length() == 2 && args[0]->IsNumber() && args[1]->IsNumber()) {
    unsigned int index = (unsigned int)args[0]->ToInt32()->Value(); /* type: _8620  */
    int size = (int)args[1]->ToInt32()->Value(); /* type: _162  */


    self->InsertSpacer(index, size);

    // TODO: handle return type
    return v8::Undefined();
  }


  std::ostringstream errStr;
  errStr << "Could not find matching method for arguments (method name: InsertSpacer).\n";                           \
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
   * id: _27840
   */
  if(args.Length() == 2 && args[0]->IsNumber() && args[1]->IsNumber()) {
    unsigned int index = (unsigned int)args[0]->ToInt32()->Value(); /* type: _8620  */
    int prop = (int)args[1]->ToInt32()->Value(); /* type: _162  */


    self->InsertStretchSpacer(index, prop);

    // TODO: handle return type
    return v8::Undefined();
  }

  /*
   * id: _27840
   */
  if(args.Length() == 1 && args[0]->IsNumber()) {
    unsigned int index = (unsigned int)args[0]->ToInt32()->Value(); /* type: _8620  */


    self->InsertStretchSpacer(index);

    // TODO: handle return type
    return v8::Undefined();
  }


  std::ostringstream errStr;
  errStr << "Could not find matching method for arguments (method name: InsertStretchSpacer).\n";                           \
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
   * id: _27841
   */
  if(args.Length() == 5 && (args[0]->IsNull() || args[0]->IsObject()) && args[1]->IsNumber() && args[2]->IsNumber() && args[3]->IsNumber() && (args[4]->IsNull() || args[4]->IsObject())) {
    wxNode_wxWindow* window = args[0]->IsNull() ? NULL : wxNodeObject::unwrap<wxNode_wxWindow>(args[0]->ToObject()); /* type: _993 * */
    int proportion = (int)args[1]->ToInt32()->Value(); /* type: _162  */
    int flag = (int)args[2]->ToInt32()->Value(); /* type: _162  */
    int border = (int)args[3]->ToInt32()->Value(); /* type: _162  */
    wxNode_wxObject* userData = args[4]->IsNull() ? NULL : wxNodeObject::unwrap<wxNode_wxObject>(args[4]->ToObject()); /* type: _15609 * */


    self->Prepend(window, proportion, flag, border, userData);

    // TODO: handle return type
    return v8::Undefined();
  }

  /*
   * id: _27841
   */
  if(args.Length() == 4 && (args[0]->IsNull() || args[0]->IsObject()) && args[1]->IsNumber() && args[2]->IsNumber() && args[3]->IsNumber()) {
    wxNode_wxWindow* window = args[0]->IsNull() ? NULL : wxNodeObject::unwrap<wxNode_wxWindow>(args[0]->ToObject()); /* type: _993 * */
    int proportion = (int)args[1]->ToInt32()->Value(); /* type: _162  */
    int flag = (int)args[2]->ToInt32()->Value(); /* type: _162  */
    int border = (int)args[3]->ToInt32()->Value(); /* type: _162  */


    self->Prepend(window, proportion, flag, border);

    // TODO: handle return type
    return v8::Undefined();
  }

  /*
   * id: _27841
   */
  if(args.Length() == 3 && (args[0]->IsNull() || args[0]->IsObject()) && args[1]->IsNumber() && args[2]->IsNumber()) {
    wxNode_wxWindow* window = args[0]->IsNull() ? NULL : wxNodeObject::unwrap<wxNode_wxWindow>(args[0]->ToObject()); /* type: _993 * */
    int proportion = (int)args[1]->ToInt32()->Value(); /* type: _162  */
    int flag = (int)args[2]->ToInt32()->Value(); /* type: _162  */


    self->Prepend(window, proportion, flag);

    // TODO: handle return type
    return v8::Undefined();
  }

  /*
   * id: _27841
   */
  if(args.Length() == 2 && (args[0]->IsNull() || args[0]->IsObject()) && args[1]->IsNumber()) {
    wxNode_wxWindow* window = args[0]->IsNull() ? NULL : wxNodeObject::unwrap<wxNode_wxWindow>(args[0]->ToObject()); /* type: _993 * */
    int proportion = (int)args[1]->ToInt32()->Value(); /* type: _162  */


    self->Prepend(window, proportion);

    // TODO: handle return type
    return v8::Undefined();
  }

  /*
   * id: _27841
   */
  if(args.Length() == 1 && (args[0]->IsNull() || args[0]->IsObject())) {
    wxNode_wxWindow* window = args[0]->IsNull() ? NULL : wxNodeObject::unwrap<wxNode_wxWindow>(args[0]->ToObject()); /* type: _993 * */


    self->Prepend(window);

    // TODO: handle return type
    return v8::Undefined();
  }

  /*
   * id: _27842
   */
  if(args.Length() == 5 && (args[0]->IsNull() || args[0]->IsObject()) && args[1]->IsNumber() && args[2]->IsNumber() && args[3]->IsNumber() && (args[4]->IsNull() || args[4]->IsObject())) {
    wxNode_wxSizer* sizer = args[0]->IsNull() ? NULL : wxNodeObject::unwrap<wxNode_wxSizer>(args[0]->ToObject()); /* type: _58725 * */
    int proportion = (int)args[1]->ToInt32()->Value(); /* type: _162  */
    int flag = (int)args[2]->ToInt32()->Value(); /* type: _162  */
    int border = (int)args[3]->ToInt32()->Value(); /* type: _162  */
    wxNode_wxObject* userData = args[4]->IsNull() ? NULL : wxNodeObject::unwrap<wxNode_wxObject>(args[4]->ToObject()); /* type: _15609 * */


    self->Prepend(sizer, proportion, flag, border, userData);

    // TODO: handle return type
    return v8::Undefined();
  }

  /*
   * id: _27842
   */
  if(args.Length() == 4 && (args[0]->IsNull() || args[0]->IsObject()) && args[1]->IsNumber() && args[2]->IsNumber() && args[3]->IsNumber()) {
    wxNode_wxSizer* sizer = args[0]->IsNull() ? NULL : wxNodeObject::unwrap<wxNode_wxSizer>(args[0]->ToObject()); /* type: _58725 * */
    int proportion = (int)args[1]->ToInt32()->Value(); /* type: _162  */
    int flag = (int)args[2]->ToInt32()->Value(); /* type: _162  */
    int border = (int)args[3]->ToInt32()->Value(); /* type: _162  */


    self->Prepend(sizer, proportion, flag, border);

    // TODO: handle return type
    return v8::Undefined();
  }

  /*
   * id: _27842
   */
  if(args.Length() == 3 && (args[0]->IsNull() || args[0]->IsObject()) && args[1]->IsNumber() && args[2]->IsNumber()) {
    wxNode_wxSizer* sizer = args[0]->IsNull() ? NULL : wxNodeObject::unwrap<wxNode_wxSizer>(args[0]->ToObject()); /* type: _58725 * */
    int proportion = (int)args[1]->ToInt32()->Value(); /* type: _162  */
    int flag = (int)args[2]->ToInt32()->Value(); /* type: _162  */


    self->Prepend(sizer, proportion, flag);

    // TODO: handle return type
    return v8::Undefined();
  }

  /*
   * id: _27842
   */
  if(args.Length() == 2 && (args[0]->IsNull() || args[0]->IsObject()) && args[1]->IsNumber()) {
    wxNode_wxSizer* sizer = args[0]->IsNull() ? NULL : wxNodeObject::unwrap<wxNode_wxSizer>(args[0]->ToObject()); /* type: _58725 * */
    int proportion = (int)args[1]->ToInt32()->Value(); /* type: _162  */


    self->Prepend(sizer, proportion);

    // TODO: handle return type
    return v8::Undefined();
  }

  /*
   * id: _27842
   */
  if(args.Length() == 1 && (args[0]->IsNull() || args[0]->IsObject())) {
    wxNode_wxSizer* sizer = args[0]->IsNull() ? NULL : wxNodeObject::unwrap<wxNode_wxSizer>(args[0]->ToObject()); /* type: _58725 * */


    self->Prepend(sizer);

    // TODO: handle return type
    return v8::Undefined();
  }

  /*
   * id: _27843
   */
  if(args.Length() == 6 && args[0]->IsNumber() && args[1]->IsNumber() && args[2]->IsNumber() && args[3]->IsNumber() && args[4]->IsNumber() && (args[5]->IsNull() || args[5]->IsObject())) {
    int width = (int)args[0]->ToInt32()->Value(); /* type: _162  */
    int height = (int)args[1]->ToInt32()->Value(); /* type: _162  */
    int proportion = (int)args[2]->ToInt32()->Value(); /* type: _162  */
    int flag = (int)args[3]->ToInt32()->Value(); /* type: _162  */
    int border = (int)args[4]->ToInt32()->Value(); /* type: _162  */
    wxNode_wxObject* userData = args[5]->IsNull() ? NULL : wxNodeObject::unwrap<wxNode_wxObject>(args[5]->ToObject()); /* type: _15609 * */


    self->Prepend(width, height, proportion, flag, border, userData);

    // TODO: handle return type
    return v8::Undefined();
  }

  /*
   * id: _27843
   */
  if(args.Length() == 5 && args[0]->IsNumber() && args[1]->IsNumber() && args[2]->IsNumber() && args[3]->IsNumber() && args[4]->IsNumber()) {
    int width = (int)args[0]->ToInt32()->Value(); /* type: _162  */
    int height = (int)args[1]->ToInt32()->Value(); /* type: _162  */
    int proportion = (int)args[2]->ToInt32()->Value(); /* type: _162  */
    int flag = (int)args[3]->ToInt32()->Value(); /* type: _162  */
    int border = (int)args[4]->ToInt32()->Value(); /* type: _162  */


    self->Prepend(width, height, proportion, flag, border);

    // TODO: handle return type
    return v8::Undefined();
  }

  /*
   * id: _27843
   */
  if(args.Length() == 4 && args[0]->IsNumber() && args[1]->IsNumber() && args[2]->IsNumber() && args[3]->IsNumber()) {
    int width = (int)args[0]->ToInt32()->Value(); /* type: _162  */
    int height = (int)args[1]->ToInt32()->Value(); /* type: _162  */
    int proportion = (int)args[2]->ToInt32()->Value(); /* type: _162  */
    int flag = (int)args[3]->ToInt32()->Value(); /* type: _162  */


    self->Prepend(width, height, proportion, flag);

    // TODO: handle return type
    return v8::Undefined();
  }

  /*
   * id: _27843
   */
  if(args.Length() == 3 && args[0]->IsNumber() && args[1]->IsNumber() && args[2]->IsNumber()) {
    int width = (int)args[0]->ToInt32()->Value(); /* type: _162  */
    int height = (int)args[1]->ToInt32()->Value(); /* type: _162  */
    int proportion = (int)args[2]->ToInt32()->Value(); /* type: _162  */


    self->Prepend(width, height, proportion);

    // TODO: handle return type
    return v8::Undefined();
  }

  /*
   * id: _27843
   */
  if(args.Length() == 2 && args[0]->IsNumber() && args[1]->IsNumber()) {
    int width = (int)args[0]->ToInt32()->Value(); /* type: _162  */
    int height = (int)args[1]->ToInt32()->Value(); /* type: _162  */


    self->Prepend(width, height);

    // TODO: handle return type
    return v8::Undefined();
  }

  /*
   * id: _27844
   */
  if(args.Length() == 2 && (args[0]->IsNull() || args[0]->IsObject()) && (args[1]->IsNull() || args[1]->IsObject())) {
    wxNode_wxWindow* window = args[0]->IsNull() ? NULL : wxNodeObject::unwrap<wxNode_wxWindow>(args[0]->ToObject()); /* type: _993 * */
    wxNode_wxSizerFlags* flags = args[1]->IsNull() ? NULL : wxNodeObject::unwrap<wxNode_wxSizerFlags>(args[1]->ToObject()); /* type: _58724  */


    self->Prepend(window, *flags);

    // TODO: handle return type
    return v8::Undefined();
  }

  /*
   * id: _27845
   */
  if(args.Length() == 2 && (args[0]->IsNull() || args[0]->IsObject()) && (args[1]->IsNull() || args[1]->IsObject())) {
    wxNode_wxSizer* sizer = args[0]->IsNull() ? NULL : wxNodeObject::unwrap<wxNode_wxSizer>(args[0]->ToObject()); /* type: _58725 * */
    wxNode_wxSizerFlags* flags = args[1]->IsNull() ? NULL : wxNodeObject::unwrap<wxNode_wxSizerFlags>(args[1]->ToObject()); /* type: _58724  */


    self->Prepend(sizer, *flags);

    // TODO: handle return type
    return v8::Undefined();
  }

  /*
   * id: _27846
   */
  if(args.Length() == 3 && args[0]->IsNumber() && args[1]->IsNumber() && (args[2]->IsNull() || args[2]->IsObject())) {
    int width = (int)args[0]->ToInt32()->Value(); /* type: _162  */
    int height = (int)args[1]->ToInt32()->Value(); /* type: _162  */
    wxNode_wxSizerFlags* flags = args[2]->IsNull() ? NULL : wxNodeObject::unwrap<wxNode_wxSizerFlags>(args[2]->ToObject()); /* type: _58724  */


    self->Prepend(width, height, *flags);

    // TODO: handle return type
    return v8::Undefined();
  }

  /*
   * id: _27847
   */
  if(args.Length() == 1 && (args[0]->IsNull() || args[0]->IsObject())) {
    wxNode_wxSizerItem* item = args[0]->IsNull() ? NULL : wxNodeObject::unwrap<wxNode_wxSizerItem>(args[0]->ToObject()); /* type: _53878 * */


    self->Prepend(item);

    // TODO: handle return type
    return v8::Undefined();
  }


  std::ostringstream errStr;
  errStr << "Could not find matching method for arguments (method name: Prepend).\n";                           \
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
   * id: _27848
   */
  if(args.Length() == 1 && args[0]->IsNumber()) {
    int size = (int)args[0]->ToInt32()->Value(); /* type: _162  */


    self->PrependSpacer(size);

    // TODO: handle return type
    return v8::Undefined();
  }


  std::ostringstream errStr;
  errStr << "Could not find matching method for arguments (method name: PrependSpacer).\n";                           \
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
   * id: _27849
   */
  if(args.Length() == 1 && args[0]->IsNumber()) {
    int prop = (int)args[0]->ToInt32()->Value(); /* type: _162  */


    self->PrependStretchSpacer(prop);

    // TODO: handle return type
    return v8::Undefined();
  }

  /*
   * id: _27849
   */
  if(args.Length() == 0) {


    self->PrependStretchSpacer();

    // TODO: handle return type
    return v8::Undefined();
  }


  std::ostringstream errStr;
  errStr << "Could not find matching method for arguments (method name: PrependStretchSpacer).\n";                           \
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
   * id: _27850
   */
  if(args.Length() == 1 && (args[0]->IsNull() || args[0]->IsObject())) {
    wxNode_wxWindow* window = args[0]->IsNull() ? NULL : wxNodeObject::unwrap<wxNode_wxWindow>(args[0]->ToObject()); /* type: _993 * */


    self->SetContainingWindow(window);

    // TODO: handle return type
    return v8::Undefined();
  }


  std::ostringstream errStr;
  errStr << "Could not find matching method for arguments (method name: SetContainingWindow).\n";                           \
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
   * id: _27851
   */
  if(args.Length() == 0) {


    self->GetContainingWindow();

    // TODO: handle return type
    return v8::Undefined();
  }


  std::ostringstream errStr;
  errStr << "Could not find matching method for arguments (method name: GetContainingWindow).\n";                           \
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
   * id: _27852
   */
  if(args.Length() == 1 && (args[0]->IsNull() || args[0]->IsObject())) {
    wxNode_wxSizer* sizer = args[0]->IsNull() ? NULL : wxNodeObject::unwrap<wxNode_wxSizer>(args[0]->ToObject()); /* type: _58725 * */


    self->Remove(sizer);

    // TODO: handle return type
    return v8::Undefined();
  }

  /*
   * id: _27853
   */
  if(args.Length() == 1 && args[0]->IsNumber()) {
    int index = (int)args[0]->ToInt32()->Value(); /* type: _162  */


    self->Remove(index);

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

/*static*/ v8::Handle<v8::Value> wxNode_wxSizer::_Detach(const v8::Arguments& args) {
  v8::HandleScope scope;
  wxNode_wxSizer* self = unwrap<wxNode_wxSizer>(args.This());


  /*
   * id: _27854
   */
  if(args.Length() == 1 && (args[0]->IsNull() || args[0]->IsObject())) {
    wxNode_wxWindow* window = args[0]->IsNull() ? NULL : wxNodeObject::unwrap<wxNode_wxWindow>(args[0]->ToObject()); /* type: _993 * */


    self->Detach(window);

    // TODO: handle return type
    return v8::Undefined();
  }

  /*
   * id: _27855
   */
  if(args.Length() == 1 && (args[0]->IsNull() || args[0]->IsObject())) {
    wxNode_wxSizer* sizer = args[0]->IsNull() ? NULL : wxNodeObject::unwrap<wxNode_wxSizer>(args[0]->ToObject()); /* type: _58725 * */


    self->Detach(sizer);

    // TODO: handle return type
    return v8::Undefined();
  }

  /*
   * id: _27856
   */
  if(args.Length() == 1 && args[0]->IsNumber()) {
    int index = (int)args[0]->ToInt32()->Value(); /* type: _162  */


    self->Detach(index);

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

/*static*/ v8::Handle<v8::Value> wxNode_wxSizer::_Replace(const v8::Arguments& args) {
  v8::HandleScope scope;
  wxNode_wxSizer* self = unwrap<wxNode_wxSizer>(args.This());


  /*
   * id: _27857
   */
  if(args.Length() == 3 && (args[0]->IsNull() || args[0]->IsObject()) && (args[1]->IsNull() || args[1]->IsObject()) && args[2]->IsBoolean()) {
    wxNode_wxWindow* oldwin = args[0]->IsNull() ? NULL : wxNodeObject::unwrap<wxNode_wxWindow>(args[0]->ToObject()); /* type: _993 * */
    wxNode_wxWindow* newwin = args[1]->IsNull() ? NULL : wxNodeObject::unwrap<wxNode_wxWindow>(args[1]->ToObject()); /* type: _993 * */
    bool recursive = args[2]->ToBoolean()->Value(); /* type: _14666  */


    self->Replace(oldwin, newwin, recursive);

    // TODO: handle return type
    return v8::Undefined();
  }

  /*
   * id: _27857
   */
  if(args.Length() == 2 && (args[0]->IsNull() || args[0]->IsObject()) && (args[1]->IsNull() || args[1]->IsObject())) {
    wxNode_wxWindow* oldwin = args[0]->IsNull() ? NULL : wxNodeObject::unwrap<wxNode_wxWindow>(args[0]->ToObject()); /* type: _993 * */
    wxNode_wxWindow* newwin = args[1]->IsNull() ? NULL : wxNodeObject::unwrap<wxNode_wxWindow>(args[1]->ToObject()); /* type: _993 * */


    self->Replace(oldwin, newwin);

    // TODO: handle return type
    return v8::Undefined();
  }

  /*
   * id: _27858
   */
  if(args.Length() == 3 && (args[0]->IsNull() || args[0]->IsObject()) && (args[1]->IsNull() || args[1]->IsObject()) && args[2]->IsBoolean()) {
    wxNode_wxSizer* oldsz = args[0]->IsNull() ? NULL : wxNodeObject::unwrap<wxNode_wxSizer>(args[0]->ToObject()); /* type: _58725 * */
    wxNode_wxSizer* newsz = args[1]->IsNull() ? NULL : wxNodeObject::unwrap<wxNode_wxSizer>(args[1]->ToObject()); /* type: _58725 * */
    bool recursive = args[2]->ToBoolean()->Value(); /* type: _14666  */


    self->Replace(oldsz, newsz, recursive);

    // TODO: handle return type
    return v8::Undefined();
  }

  /*
   * id: _27858
   */
  if(args.Length() == 2 && (args[0]->IsNull() || args[0]->IsObject()) && (args[1]->IsNull() || args[1]->IsObject())) {
    wxNode_wxSizer* oldsz = args[0]->IsNull() ? NULL : wxNodeObject::unwrap<wxNode_wxSizer>(args[0]->ToObject()); /* type: _58725 * */
    wxNode_wxSizer* newsz = args[1]->IsNull() ? NULL : wxNodeObject::unwrap<wxNode_wxSizer>(args[1]->ToObject()); /* type: _58725 * */


    self->Replace(oldsz, newsz);

    // TODO: handle return type
    return v8::Undefined();
  }

  /*
   * id: _27859
   */
  if(args.Length() == 2 && args[0]->IsNumber() && (args[1]->IsNull() || args[1]->IsObject())) {
    unsigned int index = (unsigned int)args[0]->ToInt32()->Value(); /* type: _8620  */
    wxNode_wxSizerItem* newitem = args[1]->IsNull() ? NULL : wxNodeObject::unwrap<wxNode_wxSizerItem>(args[1]->ToObject()); /* type: _53878 * */


    self->Replace(index, newitem);

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

/*static*/ v8::Handle<v8::Value> wxNode_wxSizer::_Clear(const v8::Arguments& args) {
  v8::HandleScope scope;
  wxNode_wxSizer* self = unwrap<wxNode_wxSizer>(args.This());


  /*
   * id: _27860
   */
  if(args.Length() == 1 && args[0]->IsBoolean()) {
    bool delete_windows = args[0]->ToBoolean()->Value(); /* type: _14666  */


    self->Clear(delete_windows);

    // TODO: handle return type
    return v8::Undefined();
  }

  /*
   * id: _27860
   */
  if(args.Length() == 0) {


    self->Clear();

    // TODO: handle return type
    return v8::Undefined();
  }


  std::ostringstream errStr;
  errStr << "Could not find matching method for arguments (method name: Clear).\n";                           \
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
   * id: _27861
   */
  if(args.Length() == 0) {


    self->DeleteWindows();

    // TODO: handle return type
    return v8::Undefined();
  }


  std::ostringstream errStr;
  errStr << "Could not find matching method for arguments (method name: DeleteWindows).\n";                           \
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
   * id: _27862
   */
  if(args.Length() == 3 && args[0]->IsNumber() && args[1]->IsNumber() && args[2]->IsNumber()) {
    int arg0 = (int)args[0]->ToInt32()->Value(); /* type: _162  */
    int arg1 = (int)args[1]->ToInt32()->Value(); /* type: _162  */
    int arg2 = (int)args[2]->ToInt32()->Value(); /* type: _162  */


    self->InformFirstDirection(arg0, arg1, arg2);

    // TODO: handle return type
    return v8::Undefined();
  }


  std::ostringstream errStr;
  errStr << "Could not find matching method for arguments (method name: InformFirstDirection).\n";                           \
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
   * id: _27863
   */
  if(args.Length() == 2 && args[0]->IsNumber() && args[1]->IsNumber()) {
    int width = (int)args[0]->ToInt32()->Value(); /* type: _162  */
    int height = (int)args[1]->ToInt32()->Value(); /* type: _162  */


    self->SetMinSize(width, height);

    // TODO: handle return type
    return v8::Undefined();
  }

  /*
   * id: _27864
   */
  if(args.Length() == 1 && (args[0]->IsNull() || args[0]->IsObject())) {
    wxNode_wxSize* size = args[0]->IsNull() ? NULL : wxNodeObject::unwrap<wxNode_wxSize>(args[0]->ToObject()); /* type: _20522  */


    self->SetMinSize(*size);

    // TODO: handle return type
    return v8::Undefined();
  }


  std::ostringstream errStr;
  errStr << "Could not find matching method for arguments (method name: SetMinSize).\n";                           \
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
   * id: _27865
   */
  if(args.Length() == 3 && (args[0]->IsNull() || args[0]->IsObject()) && args[1]->IsNumber() && args[2]->IsNumber()) {
    wxNode_wxWindow* window = args[0]->IsNull() ? NULL : wxNodeObject::unwrap<wxNode_wxWindow>(args[0]->ToObject()); /* type: _993 * */
    int width = (int)args[1]->ToInt32()->Value(); /* type: _162  */
    int height = (int)args[2]->ToInt32()->Value(); /* type: _162  */


    self->SetItemMinSize(window, width, height);

    // TODO: handle return type
    return v8::Undefined();
  }

  /*
   * id: _27866
   */
  if(args.Length() == 2 && (args[0]->IsNull() || args[0]->IsObject()) && (args[1]->IsNull() || args[1]->IsObject())) {
    wxNode_wxWindow* window = args[0]->IsNull() ? NULL : wxNodeObject::unwrap<wxNode_wxWindow>(args[0]->ToObject()); /* type: _993 * */
    wxNode_wxSize* size = args[1]->IsNull() ? NULL : wxNodeObject::unwrap<wxNode_wxSize>(args[1]->ToObject()); /* type: _20522  */


    self->SetItemMinSize(window, *size);

    // TODO: handle return type
    return v8::Undefined();
  }

  /*
   * id: _27867
   */
  if(args.Length() == 3 && (args[0]->IsNull() || args[0]->IsObject()) && args[1]->IsNumber() && args[2]->IsNumber()) {
    wxNode_wxSizer* sizer = args[0]->IsNull() ? NULL : wxNodeObject::unwrap<wxNode_wxSizer>(args[0]->ToObject()); /* type: _58725 * */
    int width = (int)args[1]->ToInt32()->Value(); /* type: _162  */
    int height = (int)args[2]->ToInt32()->Value(); /* type: _162  */


    self->SetItemMinSize(sizer, width, height);

    // TODO: handle return type
    return v8::Undefined();
  }

  /*
   * id: _27868
   */
  if(args.Length() == 2 && (args[0]->IsNull() || args[0]->IsObject()) && (args[1]->IsNull() || args[1]->IsObject())) {
    wxNode_wxSizer* sizer = args[0]->IsNull() ? NULL : wxNodeObject::unwrap<wxNode_wxSizer>(args[0]->ToObject()); /* type: _58725 * */
    wxNode_wxSize* size = args[1]->IsNull() ? NULL : wxNodeObject::unwrap<wxNode_wxSize>(args[1]->ToObject()); /* type: _20522  */


    self->SetItemMinSize(sizer, *size);

    // TODO: handle return type
    return v8::Undefined();
  }

  /*
   * id: _27869
   */
  if(args.Length() == 3 && args[0]->IsNumber() && args[1]->IsNumber() && args[2]->IsNumber()) {
    unsigned int index = (unsigned int)args[0]->ToInt32()->Value(); /* type: _8620  */
    int width = (int)args[1]->ToInt32()->Value(); /* type: _162  */
    int height = (int)args[2]->ToInt32()->Value(); /* type: _162  */


    self->SetItemMinSize(index, width, height);

    // TODO: handle return type
    return v8::Undefined();
  }

  /*
   * id: _27870
   */
  if(args.Length() == 2 && args[0]->IsNumber() && (args[1]->IsNull() || args[1]->IsObject())) {
    unsigned int index = (unsigned int)args[0]->ToInt32()->Value(); /* type: _8620  */
    wxNode_wxSize* size = args[1]->IsNull() ? NULL : wxNodeObject::unwrap<wxNode_wxSize>(args[1]->ToObject()); /* type: _20522  */


    self->SetItemMinSize(index, *size);

    // TODO: handle return type
    return v8::Undefined();
  }


  std::ostringstream errStr;
  errStr << "Could not find matching method for arguments (method name: SetItemMinSize).\n";                           \
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
   * id: _27871
   */
  if(args.Length() == 0) {


    self->GetSize();

    // TODO: handle return type
    return v8::Undefined();
  }


  std::ostringstream errStr;
  errStr << "Could not find matching method for arguments (method name: GetSize).\n";                           \
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
   * id: _27872
   */
  if(args.Length() == 0) {


    self->GetPosition();

    // TODO: handle return type
    return v8::Undefined();
  }


  std::ostringstream errStr;
  errStr << "Could not find matching method for arguments (method name: GetPosition).\n";                           \
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
   * id: _27873
   */
  if(args.Length() == 0) {


    self->GetMinSize();

    // TODO: handle return type
    return v8::Undefined();
  }


  std::ostringstream errStr;
  errStr << "Could not find matching method for arguments (method name: GetMinSize).\n";                           \
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
   * id: _27874
   */
  if(args.Length() == 0) {


    self->CalcMin();

    // TODO: handle return type
    return v8::Undefined();
  }


  std::ostringstream errStr;
  errStr << "Could not find matching method for arguments (method name: CalcMin).\n";                           \
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
   * id: _27875
   */
  if(args.Length() == 0) {


    self->RecalcSizes();

    // TODO: handle return type
    return v8::Undefined();
  }


  std::ostringstream errStr;
  errStr << "Could not find matching method for arguments (method name: RecalcSizes).\n";                           \
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
   * id: _27876
   */
  if(args.Length() == 0) {


    self->Layout();

    // TODO: handle return type
    return v8::Undefined();
  }


  std::ostringstream errStr;
  errStr << "Could not find matching method for arguments (method name: Layout).\n";                           \
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
   * id: _27877
   */
  if(args.Length() == 1 && (args[0]->IsNull() || args[0]->IsObject())) {
    wxNode_wxWindow* window = args[0]->IsNull() ? NULL : wxNodeObject::unwrap<wxNode_wxWindow>(args[0]->ToObject()); /* type: _993 * */


    self->ComputeFittingClientSize(window);

    // TODO: handle return type
    return v8::Undefined();
  }


  std::ostringstream errStr;
  errStr << "Could not find matching method for arguments (method name: ComputeFittingClientSize).\n";                           \
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
   * id: _27878
   */
  if(args.Length() == 1 && (args[0]->IsNull() || args[0]->IsObject())) {
    wxNode_wxWindow* window = args[0]->IsNull() ? NULL : wxNodeObject::unwrap<wxNode_wxWindow>(args[0]->ToObject()); /* type: _993 * */


    self->ComputeFittingWindowSize(window);

    // TODO: handle return type
    return v8::Undefined();
  }


  std::ostringstream errStr;
  errStr << "Could not find matching method for arguments (method name: ComputeFittingWindowSize).\n";                           \
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
   * id: _27879
   */
  if(args.Length() == 1 && (args[0]->IsNull() || args[0]->IsObject())) {
    wxNode_wxWindow* window = args[0]->IsNull() ? NULL : wxNodeObject::unwrap<wxNode_wxWindow>(args[0]->ToObject()); /* type: _993 * */


    self->Fit(window);

    // TODO: handle return type
    return v8::Undefined();
  }


  std::ostringstream errStr;
  errStr << "Could not find matching method for arguments (method name: Fit).\n";                           \
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
   * id: _27880
   */
  if(args.Length() == 1 && (args[0]->IsNull() || args[0]->IsObject())) {
    wxNode_wxWindow* window = args[0]->IsNull() ? NULL : wxNodeObject::unwrap<wxNode_wxWindow>(args[0]->ToObject()); /* type: _993 * */


    self->FitInside(window);

    // TODO: handle return type
    return v8::Undefined();
  }


  std::ostringstream errStr;
  errStr << "Could not find matching method for arguments (method name: FitInside).\n";                           \
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
   * id: _27881
   */
  if(args.Length() == 1 && (args[0]->IsNull() || args[0]->IsObject())) {
    wxNode_wxWindow* window = args[0]->IsNull() ? NULL : wxNodeObject::unwrap<wxNode_wxWindow>(args[0]->ToObject()); /* type: _993 * */


    self->SetSizeHints(window);

    // TODO: handle return type
    return v8::Undefined();
  }


  std::ostringstream errStr;
  errStr << "Could not find matching method for arguments (method name: SetSizeHints).\n";                           \
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
   * id: _27883
   */
  if(args.Length() == 0) {


    self->GetChildren();

    // TODO: handle return type
    return v8::Undefined();
  }

  /*
   * id: _27884
   */
  if(args.Length() == 0) {


    self->GetChildren();

    // TODO: handle return type
    return v8::Undefined();
  }


  std::ostringstream errStr;
  errStr << "Could not find matching method for arguments (method name: GetChildren).\n";                           \
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
   * id: _27885
   */
  if(args.Length() == 2 && (args[0]->IsNull() || args[0]->IsObject()) && (args[1]->IsNull() || args[1]->IsObject())) {
    wxNode_wxPoint* pos = args[0]->IsNull() ? NULL : wxNodeObject::unwrap<wxNode_wxPoint>(args[0]->ToObject()); /* type: _20412  */
    wxNode_wxSize* size = args[1]->IsNull() ? NULL : wxNodeObject::unwrap<wxNode_wxSize>(args[1]->ToObject()); /* type: _20522  */


    self->SetDimension(*pos, *size);

    // TODO: handle return type
    return v8::Undefined();
  }

  /*
   * id: _27886
   */
  if(args.Length() == 4 && args[0]->IsNumber() && args[1]->IsNumber() && args[2]->IsNumber() && args[3]->IsNumber()) {
    int x = (int)args[0]->ToInt32()->Value(); /* type: _162  */
    int y = (int)args[1]->ToInt32()->Value(); /* type: _162  */
    int width = (int)args[2]->ToInt32()->Value(); /* type: _162  */
    int height = (int)args[3]->ToInt32()->Value(); /* type: _162  */


    self->SetDimension(x, y, width, height);

    // TODO: handle return type
    return v8::Undefined();
  }


  std::ostringstream errStr;
  errStr << "Could not find matching method for arguments (method name: SetDimension).\n";                           \
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
   * id: _27887
   */
  if(args.Length() == 0) {


    self->GetItemCount();

    // TODO: handle return type
    return v8::Undefined();
  }


  std::ostringstream errStr;
  errStr << "Could not find matching method for arguments (method name: GetItemCount).\n";                           \
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
   * id: _27888
   */
  if(args.Length() == 0) {


    self->IsEmpty();

    // TODO: handle return type
    return v8::Undefined();
  }


  std::ostringstream errStr;
  errStr << "Could not find matching method for arguments (method name: IsEmpty).\n";                           \
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
   * id: _27889
   */
  if(args.Length() == 2 && (args[0]->IsNull() || args[0]->IsObject()) && args[1]->IsBoolean()) {
    wxNode_wxWindow* window = args[0]->IsNull() ? NULL : wxNodeObject::unwrap<wxNode_wxWindow>(args[0]->ToObject()); /* type: _993 * */
    bool recursive = args[1]->ToBoolean()->Value(); /* type: _14666  */


    self->GetItem(window, recursive);

    // TODO: handle return type
    return v8::Undefined();
  }

  /*
   * id: _27889
   */
  if(args.Length() == 1 && (args[0]->IsNull() || args[0]->IsObject())) {
    wxNode_wxWindow* window = args[0]->IsNull() ? NULL : wxNodeObject::unwrap<wxNode_wxWindow>(args[0]->ToObject()); /* type: _993 * */


    self->GetItem(window);

    // TODO: handle return type
    return v8::Undefined();
  }

  /*
   * id: _27890
   */
  if(args.Length() == 2 && (args[0]->IsNull() || args[0]->IsObject()) && args[1]->IsBoolean()) {
    wxNode_wxSizer* sizer = args[0]->IsNull() ? NULL : wxNodeObject::unwrap<wxNode_wxSizer>(args[0]->ToObject()); /* type: _58725 * */
    bool recursive = args[1]->ToBoolean()->Value(); /* type: _14666  */


    self->GetItem(sizer, recursive);

    // TODO: handle return type
    return v8::Undefined();
  }

  /*
   * id: _27890
   */
  if(args.Length() == 1 && (args[0]->IsNull() || args[0]->IsObject())) {
    wxNode_wxSizer* sizer = args[0]->IsNull() ? NULL : wxNodeObject::unwrap<wxNode_wxSizer>(args[0]->ToObject()); /* type: _58725 * */


    self->GetItem(sizer);

    // TODO: handle return type
    return v8::Undefined();
  }

  /*
   * id: _27891
   */
  if(args.Length() == 1 && args[0]->IsNumber()) {
    unsigned int index = (unsigned int)args[0]->ToInt32()->Value(); /* type: _8620  */


    self->GetItem(index);

    // TODO: handle return type
    return v8::Undefined();
  }


  std::ostringstream errStr;
  errStr << "Could not find matching method for arguments (method name: GetItem).\n";                           \
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
   * id: _27892
   */
  if(args.Length() == 2 && args[0]->IsNumber() && args[1]->IsBoolean()) {
    int id = (int)args[0]->ToInt32()->Value(); /* type: _162  */
    bool recursive = args[1]->ToBoolean()->Value(); /* type: _14666  */


    self->GetItemById(id, recursive);

    // TODO: handle return type
    return v8::Undefined();
  }

  /*
   * id: _27892
   */
  if(args.Length() == 1 && args[0]->IsNumber()) {
    int id = (int)args[0]->ToInt32()->Value(); /* type: _162  */


    self->GetItemById(id);

    // TODO: handle return type
    return v8::Undefined();
  }


  std::ostringstream errStr;
  errStr << "Could not find matching method for arguments (method name: GetItemById).\n";                           \
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
   * id: _27893
   */
  if(args.Length() == 3 && (args[0]->IsNull() || args[0]->IsObject()) && args[1]->IsBoolean() && args[2]->IsBoolean()) {
    wxNode_wxWindow* window = args[0]->IsNull() ? NULL : wxNodeObject::unwrap<wxNode_wxWindow>(args[0]->ToObject()); /* type: _993 * */
    bool show = args[1]->ToBoolean()->Value(); /* type: _14666  */
    bool recursive = args[2]->ToBoolean()->Value(); /* type: _14666  */


    self->Show(window, show, recursive);

    // TODO: handle return type
    return v8::Undefined();
  }

  /*
   * id: _27893
   */
  if(args.Length() == 2 && (args[0]->IsNull() || args[0]->IsObject()) && args[1]->IsBoolean()) {
    wxNode_wxWindow* window = args[0]->IsNull() ? NULL : wxNodeObject::unwrap<wxNode_wxWindow>(args[0]->ToObject()); /* type: _993 * */
    bool show = args[1]->ToBoolean()->Value(); /* type: _14666  */


    self->Show(window, show);

    // TODO: handle return type
    return v8::Undefined();
  }

  /*
   * id: _27893
   */
  if(args.Length() == 1 && (args[0]->IsNull() || args[0]->IsObject())) {
    wxNode_wxWindow* window = args[0]->IsNull() ? NULL : wxNodeObject::unwrap<wxNode_wxWindow>(args[0]->ToObject()); /* type: _993 * */


    self->Show(window);

    // TODO: handle return type
    return v8::Undefined();
  }

  /*
   * id: _27894
   */
  if(args.Length() == 3 && (args[0]->IsNull() || args[0]->IsObject()) && args[1]->IsBoolean() && args[2]->IsBoolean()) {
    wxNode_wxSizer* sizer = args[0]->IsNull() ? NULL : wxNodeObject::unwrap<wxNode_wxSizer>(args[0]->ToObject()); /* type: _58725 * */
    bool show = args[1]->ToBoolean()->Value(); /* type: _14666  */
    bool recursive = args[2]->ToBoolean()->Value(); /* type: _14666  */


    self->Show(sizer, show, recursive);

    // TODO: handle return type
    return v8::Undefined();
  }

  /*
   * id: _27894
   */
  if(args.Length() == 2 && (args[0]->IsNull() || args[0]->IsObject()) && args[1]->IsBoolean()) {
    wxNode_wxSizer* sizer = args[0]->IsNull() ? NULL : wxNodeObject::unwrap<wxNode_wxSizer>(args[0]->ToObject()); /* type: _58725 * */
    bool show = args[1]->ToBoolean()->Value(); /* type: _14666  */


    self->Show(sizer, show);

    // TODO: handle return type
    return v8::Undefined();
  }

  /*
   * id: _27894
   */
  if(args.Length() == 1 && (args[0]->IsNull() || args[0]->IsObject())) {
    wxNode_wxSizer* sizer = args[0]->IsNull() ? NULL : wxNodeObject::unwrap<wxNode_wxSizer>(args[0]->ToObject()); /* type: _58725 * */


    self->Show(sizer);

    // TODO: handle return type
    return v8::Undefined();
  }

  /*
   * id: _27895
   */
  if(args.Length() == 2 && args[0]->IsNumber() && args[1]->IsBoolean()) {
    unsigned int index = (unsigned int)args[0]->ToInt32()->Value(); /* type: _8620  */
    bool show = args[1]->ToBoolean()->Value(); /* type: _14666  */


    self->Show(index, show);

    // TODO: handle return type
    return v8::Undefined();
  }

  /*
   * id: _27895
   */
  if(args.Length() == 1 && args[0]->IsNumber()) {
    unsigned int index = (unsigned int)args[0]->ToInt32()->Value(); /* type: _8620  */


    self->Show(index);

    // TODO: handle return type
    return v8::Undefined();
  }

  /*
   * id: _27903
   */
  if(args.Length() == 1 && args[0]->IsBoolean()) {
    bool show = args[0]->ToBoolean()->Value(); /* type: _14666  */


    self->Show(show);

    // TODO: handle return type
    return v8::Undefined();
  }


  std::ostringstream errStr;
  errStr << "Could not find matching method for arguments (method name: Show).\n";                           \
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
   * id: _27896
   */
  if(args.Length() == 2 && (args[0]->IsNull() || args[0]->IsObject()) && args[1]->IsBoolean()) {
    wxNode_wxSizer* sizer = args[0]->IsNull() ? NULL : wxNodeObject::unwrap<wxNode_wxSizer>(args[0]->ToObject()); /* type: _58725 * */
    bool recursive = args[1]->ToBoolean()->Value(); /* type: _14666  */


    self->Hide(sizer, recursive);

    // TODO: handle return type
    return v8::Undefined();
  }

  /*
   * id: _27896
   */
  if(args.Length() == 1 && (args[0]->IsNull() || args[0]->IsObject())) {
    wxNode_wxSizer* sizer = args[0]->IsNull() ? NULL : wxNodeObject::unwrap<wxNode_wxSizer>(args[0]->ToObject()); /* type: _58725 * */


    self->Hide(sizer);

    // TODO: handle return type
    return v8::Undefined();
  }

  /*
   * id: _27897
   */
  if(args.Length() == 2 && (args[0]->IsNull() || args[0]->IsObject()) && args[1]->IsBoolean()) {
    wxNode_wxWindow* window = args[0]->IsNull() ? NULL : wxNodeObject::unwrap<wxNode_wxWindow>(args[0]->ToObject()); /* type: _993 * */
    bool recursive = args[1]->ToBoolean()->Value(); /* type: _14666  */


    self->Hide(window, recursive);

    // TODO: handle return type
    return v8::Undefined();
  }

  /*
   * id: _27897
   */
  if(args.Length() == 1 && (args[0]->IsNull() || args[0]->IsObject())) {
    wxNode_wxWindow* window = args[0]->IsNull() ? NULL : wxNodeObject::unwrap<wxNode_wxWindow>(args[0]->ToObject()); /* type: _993 * */


    self->Hide(window);

    // TODO: handle return type
    return v8::Undefined();
  }

  /*
   * id: _27898
   */
  if(args.Length() == 1 && args[0]->IsNumber()) {
    unsigned int index = (unsigned int)args[0]->ToInt32()->Value(); /* type: _8620  */


    self->Hide(index);

    // TODO: handle return type
    return v8::Undefined();
  }


  std::ostringstream errStr;
  errStr << "Could not find matching method for arguments (method name: Hide).\n";                           \
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
   * id: _27899
   */
  if(args.Length() == 1 && (args[0]->IsNull() || args[0]->IsObject())) {
    wxNode_wxWindow* window = args[0]->IsNull() ? NULL : wxNodeObject::unwrap<wxNode_wxWindow>(args[0]->ToObject()); /* type: _993 * */


    self->IsShown(window);

    // TODO: handle return type
    return v8::Undefined();
  }

  /*
   * id: _27900
   */
  if(args.Length() == 1 && (args[0]->IsNull() || args[0]->IsObject())) {
    wxNode_wxSizer* sizer = args[0]->IsNull() ? NULL : wxNodeObject::unwrap<wxNode_wxSizer>(args[0]->ToObject()); /* type: _58725 * */


    self->IsShown(sizer);

    // TODO: handle return type
    return v8::Undefined();
  }

  /*
   * id: _27901
   */
  if(args.Length() == 1 && args[0]->IsNumber()) {
    unsigned int index = (unsigned int)args[0]->ToInt32()->Value(); /* type: _8620  */


    self->IsShown(index);

    // TODO: handle return type
    return v8::Undefined();
  }


  std::ostringstream errStr;
  errStr << "Could not find matching method for arguments (method name: IsShown).\n";                           \
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
   * id: _27902
   */
  if(args.Length() == 1 && args[0]->IsBoolean()) {
    bool show = args[0]->ToBoolean()->Value(); /* type: _14666  */


    self->ShowItems(show);

    // TODO: handle return type
    return v8::Undefined();
  }


  std::ostringstream errStr;
  errStr << "Could not find matching method for arguments (method name: ShowItems).\n";                           \
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
   * id: _27912
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
