
#include <sstream>
#include "wxNode_wxDialog.h"
#include "wxNode_wxEvtHandler.h"
#include "wxNode_wxTopLevelWindow.h"
#include "wxNode_wxWindow.h"
#include "wxNode_wxPoint.h"
#include "wxNode_wxSize.h"
#include "wxNode_wxSizer.h"
#include "wxNode_wxTextSizerWrapper.h"
#include "wxNode_wxStdDialogButtonSizer.h"
#include "wxNode_wxArrayInt.h"
#include "wxNode_wxDialogLayoutAdapter.h"


/* static */ v8::Persistent<v8::FunctionTemplate> wxNode_wxDialog::s_ct;



/*
 * id: _38403
 */
wxNode_wxDialog::wxNode_wxDialog()
  : wxDialog()
{

}

/*
 * id: _38404
 */
wxNode_wxDialog::wxNode_wxDialog(wxWindow* parent, int id, const wxString& title, wxPoint& pos, wxSize& size, long int style, const wxString& name)
  : wxDialog(parent, id, title, pos, size, style, name)
{

}

/*
 * id: _38404
 */
wxNode_wxDialog::wxNode_wxDialog(wxWindow* parent, int id, const wxString& title, wxPoint& pos, wxSize& size, long int style)
  : wxDialog(parent, id, title, pos, size, style)
{

}

/*
 * id: _38404
 */
wxNode_wxDialog::wxNode_wxDialog(wxWindow* parent, int id, const wxString& title, wxPoint& pos, wxSize& size)
  : wxDialog(parent, id, title, pos, size)
{

}

/*
 * id: _38404
 */
wxNode_wxDialog::wxNode_wxDialog(wxWindow* parent, int id, const wxString& title, wxPoint& pos)
  : wxDialog(parent, id, title, pos)
{

}

/*
 * id: _38404
 */
wxNode_wxDialog::wxNode_wxDialog(wxWindow* parent, int id, const wxString& title)
  : wxDialog(parent, id, title)
{

}




/*static*/ void wxNode_wxDialog::Init(v8::Handle<v8::Object> target) {
  v8::HandleScope scope;

  v8::Local<v8::FunctionTemplate> t = v8::FunctionTemplate::New(wxNodeObject::NewFunc);
  s_ct = v8::Persistent<v8::FunctionTemplate>::New(t);
  s_ct->InstanceTemplate()->SetInternalFieldCount(2);
  s_ct->SetClassName(v8::String::NewSymbol("Dialog"));

  NODE_SET_PROTOTYPE_METHOD(s_ct, "init", _init);
  AddMethods(s_ct);

  target->Set(v8::String::NewSymbol("Dialog"), s_ct->GetFunction());
}

/*static*/ void wxNode_wxDialog::AddMethods(v8::Handle<v8::FunctionTemplate> target) {
  wxNode_wxTopLevelWindow::AddMethods(target);
  NODE_SET_PROTOTYPE_METHOD(target, "showModal", _ShowModal);
  NODE_SET_PROTOTYPE_METHOD(target, "endModal", _EndModal);
  NODE_SET_PROTOTYPE_METHOD(target, "isModal", _IsModal);
  NODE_SET_PROTOTYPE_METHOD(target, "showWindowModal", _ShowWindowModal);
  NODE_SET_PROTOTYPE_METHOD(target, "sendWindowModalDialogEvent", _SendWindowModalDialogEvent);
  NODE_SET_PROTOTYPE_METHOD(target, "setReturnCode", _SetReturnCode);
  NODE_SET_PROTOTYPE_METHOD(target, "getReturnCode", _GetReturnCode);
  NODE_SET_PROTOTYPE_METHOD(target, "setAffirmativeId", _SetAffirmativeId);
  NODE_SET_PROTOTYPE_METHOD(target, "getAffirmativeId", _GetAffirmativeId);
  NODE_SET_PROTOTYPE_METHOD(target, "setEscapeId", _SetEscapeId);
  NODE_SET_PROTOTYPE_METHOD(target, "getEscapeId", _GetEscapeId);
  NODE_SET_PROTOTYPE_METHOD(target, "getParentForModalDialog", _GetParentForModalDialog);
  NODE_SET_PROTOTYPE_METHOD(target, "createTextSizer", _CreateTextSizer);
  NODE_SET_PROTOTYPE_METHOD(target, "createButtonSizer", _CreateButtonSizer);
  NODE_SET_PROTOTYPE_METHOD(target, "createSeparatedSizer", _CreateSeparatedSizer);
  NODE_SET_PROTOTYPE_METHOD(target, "createSeparatedButtonSizer", _CreateSeparatedButtonSizer);
  NODE_SET_PROTOTYPE_METHOD(target, "createStdDialogButtonSizer", _CreateStdDialogButtonSizer);
  NODE_SET_PROTOTYPE_METHOD(target, "doLayoutAdaptation", _DoLayoutAdaptation);
  NODE_SET_PROTOTYPE_METHOD(target, "canDoLayoutAdaptation", _CanDoLayoutAdaptation);
  NODE_SET_PROTOTYPE_METHOD(target, "getContentWindow", _GetContentWindow);
  NODE_SET_PROTOTYPE_METHOD(target, "addMainButtonId", _AddMainButtonId);
  NODE_SET_PROTOTYPE_METHOD(target, "getMainButtonIds", _GetMainButtonIds);
  NODE_SET_PROTOTYPE_METHOD(target, "isMainButtonId", _IsMainButtonId);
  NODE_SET_PROTOTYPE_METHOD(target, "setLayoutAdaptationLevel", _SetLayoutAdaptationLevel);
  NODE_SET_PROTOTYPE_METHOD(target, "getLayoutAdaptationLevel", _GetLayoutAdaptationLevel);
  NODE_SET_PROTOTYPE_METHOD(target, "setLayoutAdaptationMode", _SetLayoutAdaptationMode);
  NODE_SET_PROTOTYPE_METHOD(target, "getLayoutAdaptationMode", _GetLayoutAdaptationMode);
  NODE_SET_PROTOTYPE_METHOD(target, "setLayoutAdaptationDone", _SetLayoutAdaptationDone);
  NODE_SET_PROTOTYPE_METHOD(target, "getLayoutAdaptationDone", _GetLayoutAdaptationDone);
  NODE_SET_METHOD(target, "setLayoutAdapter", _SetLayoutAdapter);
  NODE_SET_METHOD(target, "getLayoutAdapter", _GetLayoutAdapter);
  NODE_SET_METHOD(target, "isLayoutAdaptationEnabled", _IsLayoutAdaptationEnabled);
  NODE_SET_METHOD(target, "enableLayoutAdaptation", _EnableLayoutAdaptation);
  NODE_SET_PROTOTYPE_METHOD(target, "getModality", _GetModality);
  
  
}

/*static*/ v8::Handle<v8::Value> wxNode_wxDialog::New(const wxNode_wxDialog* obj) {
  v8::HandleScope scope;

  if(obj == NULL) {
    return scope.Close(v8::Null());
  }
  
  v8::Local<v8::FunctionTemplate> returnObjFt = v8::FunctionTemplate::New(wxNodeObject::NewFunc);
  returnObjFt->InstanceTemplate()->SetInternalFieldCount(2);
  returnObjFt->SetClassName(v8::String::NewSymbol("Dialog"));
  wxNode_wxDialog::AddMethods(returnObjFt);

  v8::Local<v8::Function> returnObjFn = returnObjFt->GetFunction();

  v8::Local<v8::Object> returnObj = returnObjFn->CallAsConstructor(0, new v8::Local<v8::Value>[0])->ToObject();
  returnObj->SetPointerInInternalField(0, (void*)obj);
  NodeExEvtHandlerImpl* evtHandler = dynamic_cast<NodeExEvtHandlerImpl*>((wxNode_wxDialog*)obj);
  returnObj->SetPointerInInternalField(1, evtHandler);

  return scope.Close(returnObj);
}

/*static*/ v8::Handle<v8::Value> wxNode_wxDialog::New(const wxDialog* obj) {
  v8::HandleScope scope;

  if(obj == NULL) {
    return scope.Close(v8::Null());
  }
  
  v8::Local<v8::FunctionTemplate> returnObjFt = v8::FunctionTemplate::New(wxNodeObject::NewFunc);
  returnObjFt->InstanceTemplate()->SetInternalFieldCount(2);
  returnObjFt->SetClassName(v8::String::NewSymbol("Dialog"));
  wxNode_wxDialog::AddMethods(returnObjFt);

  v8::Local<v8::Function> returnObjFn = returnObjFt->GetFunction();
  v8::Local<v8::Object> returnObj = returnObjFn->CallAsConstructor(0, new v8::Local<v8::Value>[0])->ToObject();
  returnObj->SetPointerInInternalField(0, (void*)obj);
  NodeExEvtHandlerImplWrap* wrap = new NodeExEvtHandlerImplWrap(returnObj);
  NodeExEvtHandlerImpl* evtHandler = dynamic_cast<NodeExEvtHandlerImpl*>(wrap);
  returnObj->SetPointerInInternalField(1, evtHandler);

  return scope.Close(returnObj);
}

/*static*/ v8::Handle<v8::Value> wxNode_wxDialog::NewCopy(const wxDialog& obj) {
  v8::HandleScope scope;
  wxNode_wxDialog* returnVal = new wxNode_wxDialog();
  memcpy(dynamic_cast<wxDialog*>(returnVal), &obj, sizeof(wxDialog));
  return scope.Close(New(returnVal));

}

/*static*/ bool wxNode_wxDialog::AssignableFrom(const v8::Handle<v8::String>& className) {
  v8::String::AsciiValue classNameStr(className);
  return AssignableFrom(*classNameStr);
}

/*static*/ bool wxNode_wxDialog::AssignableFrom(const char* className) {
  if(!strcmp("Dialog", className)) { return true; }
  
  if(!strcmp("Dialog", className)) { return true; }

  if(!strcmp("FontDialogBase", className)) { return true; }

  if(!strcmp("FontDialog", className)) { return true; }
  if(!strcmp("RearrangeDialog", className)) { return true; }
  if(!strcmp("DirDialogBase", className)) { return true; }

  if(!strcmp("DirDialog", className)) { return true; }
  if(!strcmp("WizardBase", className)) { return true; }

  if(!strcmp("Wizard", className)) { return true; }
  if(!strcmp("MessageDialogBase", className)) { return true; }

  if(!strcmp("MessageDialog", className)) { return true; }
  if(!strcmp("GenericMessageDialog", className)) { return true; }

  if(!strcmp("RichMessageDialogBase", className)) { return true; }

  if(!strcmp("GenericRichMessageDialog", className)) { return true; }

  if(!strcmp("RichMessageDialog", className)) { return true; }
  if(!strcmp("ColourDialog", className)) { return true; }
  if(!strcmp("HtmlHelpDialog", className)) { return true; }
  if(!strcmp("FindReplaceDialogBase", className)) { return true; }

  if(!strcmp("FindReplaceDialog", className)) { return true; }
  if(!strcmp("PrintAbortDialog", className)) { return true; }
  if(!strcmp("AnyChoiceDialog", className)) { return true; }

  if(!strcmp("SingleChoiceDialog", className)) { return true; }
  if(!strcmp("MultiChoiceDialog", className)) { return true; }
  if(!strcmp("TextEntryDialog", className)) { return true; }

  if(!strcmp("PasswordEntryDialog", className)) { return true; }
  if(!strcmp("RichTextStyleOrganiserDialog", className)) { return true; }
  if(!strcmp("PrintDialogBase", className)) { return true; }
  if(!strcmp("PageSetupDialogBase", className)) { return true; }
  if(!strcmp("SymbolPickerDialog", className)) { return true; }
  if(!strcmp("FileDialogBase", className)) { return true; }

  if(!strcmp("FileDialog", className)) { return true; }
  if(!strcmp("NumberEntryDialog", className)) { return true; }
  if(!strcmp("PropertySheetDialog", className)) { return true; }

  if(!strcmp("RichTextFormattingDialog", className)) { return true; }
  if(!strcmp("GenericProgressDialog", className)) { return true; }

  if(!strcmp("ProgressDialog", className)) { return true; }


  return false;
}

/*static*/ v8::Handle<v8::Value> wxNode_wxDialog::_init(const v8::Arguments& args) {
  v8::HandleScope scope;

  
  
  /*
   * id: _38403
   */
  if(args.Length() == 0) {
    

    wxNode_wxDialog *self = new wxNode_wxDialog();
    NodeExEvtHandlerImpl* evtHandler = dynamic_cast<NodeExEvtHandlerImpl*>(self);
    self->wrap(args.This(), self, evtHandler);
    return args.This();
  }
  
  /*
   * id: _38404
   */
  if(args.Length() == 7 && (args[0]->IsNull() || (args[0]->IsObject() && wxNode_wxWindow::AssignableFrom(args[0]->ToObject()->GetConstructorName()))) && args[1]->IsNumber() && args[2]->IsString() && (args[3]->IsNull() || (args[3]->IsObject() && wxNode_wxPoint::AssignableFrom(args[3]->ToObject()->GetConstructorName()))) && (args[4]->IsNull() || (args[4]->IsObject() && wxNode_wxSize::AssignableFrom(args[4]->ToObject()->GetConstructorName()))) && args[5]->IsNumber() && args[6]->IsString()) {
    wxNode_wxWindow* parent = args[0]->IsNull() ? NULL : wxNodeObject::unwrap<wxNode_wxWindow>(args[0]->ToObject()); /* type: _1000 * */
    int id = (int)args[1]->ToInt32()->Value(); /* type: _8725  */
    v8::String::AsciiValue title(args[2]->ToString()); /* type: _14975  */
    wxNode_wxPoint* pos = args[3]->IsNull() ? NULL : wxNodeObject::unwrap<wxNode_wxPoint>(args[3]->ToObject()); /* type: _20518  */
    wxNode_wxSize* size = args[4]->IsNull() ? NULL : wxNodeObject::unwrap<wxNode_wxSize>(args[4]->ToObject()); /* type: _20628  */
    long int style = (long int)args[5]->ToInt32()->Value(); /* type: _592  */
    v8::String::AsciiValue name(args[6]->ToString()); /* type: _14975  */
    

    wxNode_wxDialog *self = new wxNode_wxDialog(parent, id, *title, *pos, *size, style, *name);
    NodeExEvtHandlerImpl* evtHandler = dynamic_cast<NodeExEvtHandlerImpl*>(self);
    self->wrap(args.This(), self, evtHandler);
    return args.This();
  }
  
  /*
   * id: _38404
   */
  if(args.Length() == 6 && (args[0]->IsNull() || (args[0]->IsObject() && wxNode_wxWindow::AssignableFrom(args[0]->ToObject()->GetConstructorName()))) && args[1]->IsNumber() && args[2]->IsString() && (args[3]->IsNull() || (args[3]->IsObject() && wxNode_wxPoint::AssignableFrom(args[3]->ToObject()->GetConstructorName()))) && (args[4]->IsNull() || (args[4]->IsObject() && wxNode_wxSize::AssignableFrom(args[4]->ToObject()->GetConstructorName()))) && args[5]->IsNumber()) {
    wxNode_wxWindow* parent = args[0]->IsNull() ? NULL : wxNodeObject::unwrap<wxNode_wxWindow>(args[0]->ToObject()); /* type: _1000 * */
    int id = (int)args[1]->ToInt32()->Value(); /* type: _8725  */
    v8::String::AsciiValue title(args[2]->ToString()); /* type: _14975  */
    wxNode_wxPoint* pos = args[3]->IsNull() ? NULL : wxNodeObject::unwrap<wxNode_wxPoint>(args[3]->ToObject()); /* type: _20518  */
    wxNode_wxSize* size = args[4]->IsNull() ? NULL : wxNodeObject::unwrap<wxNode_wxSize>(args[4]->ToObject()); /* type: _20628  */
    long int style = (long int)args[5]->ToInt32()->Value(); /* type: _592  */
    

    wxNode_wxDialog *self = new wxNode_wxDialog(parent, id, *title, *pos, *size, style);
    NodeExEvtHandlerImpl* evtHandler = dynamic_cast<NodeExEvtHandlerImpl*>(self);
    self->wrap(args.This(), self, evtHandler);
    return args.This();
  }
  
  /*
   * id: _38404
   */
  if(args.Length() == 5 && (args[0]->IsNull() || (args[0]->IsObject() && wxNode_wxWindow::AssignableFrom(args[0]->ToObject()->GetConstructorName()))) && args[1]->IsNumber() && args[2]->IsString() && (args[3]->IsNull() || (args[3]->IsObject() && wxNode_wxPoint::AssignableFrom(args[3]->ToObject()->GetConstructorName()))) && (args[4]->IsNull() || (args[4]->IsObject() && wxNode_wxSize::AssignableFrom(args[4]->ToObject()->GetConstructorName())))) {
    wxNode_wxWindow* parent = args[0]->IsNull() ? NULL : wxNodeObject::unwrap<wxNode_wxWindow>(args[0]->ToObject()); /* type: _1000 * */
    int id = (int)args[1]->ToInt32()->Value(); /* type: _8725  */
    v8::String::AsciiValue title(args[2]->ToString()); /* type: _14975  */
    wxNode_wxPoint* pos = args[3]->IsNull() ? NULL : wxNodeObject::unwrap<wxNode_wxPoint>(args[3]->ToObject()); /* type: _20518  */
    wxNode_wxSize* size = args[4]->IsNull() ? NULL : wxNodeObject::unwrap<wxNode_wxSize>(args[4]->ToObject()); /* type: _20628  */
    

    wxNode_wxDialog *self = new wxNode_wxDialog(parent, id, *title, *pos, *size);
    NodeExEvtHandlerImpl* evtHandler = dynamic_cast<NodeExEvtHandlerImpl*>(self);
    self->wrap(args.This(), self, evtHandler);
    return args.This();
  }
  
  /*
   * id: _38404
   */
  if(args.Length() == 4 && (args[0]->IsNull() || (args[0]->IsObject() && wxNode_wxWindow::AssignableFrom(args[0]->ToObject()->GetConstructorName()))) && args[1]->IsNumber() && args[2]->IsString() && (args[3]->IsNull() || (args[3]->IsObject() && wxNode_wxPoint::AssignableFrom(args[3]->ToObject()->GetConstructorName())))) {
    wxNode_wxWindow* parent = args[0]->IsNull() ? NULL : wxNodeObject::unwrap<wxNode_wxWindow>(args[0]->ToObject()); /* type: _1000 * */
    int id = (int)args[1]->ToInt32()->Value(); /* type: _8725  */
    v8::String::AsciiValue title(args[2]->ToString()); /* type: _14975  */
    wxNode_wxPoint* pos = args[3]->IsNull() ? NULL : wxNodeObject::unwrap<wxNode_wxPoint>(args[3]->ToObject()); /* type: _20518  */
    

    wxNode_wxDialog *self = new wxNode_wxDialog(parent, id, *title, *pos);
    NodeExEvtHandlerImpl* evtHandler = dynamic_cast<NodeExEvtHandlerImpl*>(self);
    self->wrap(args.This(), self, evtHandler);
    return args.This();
  }
  
  /*
   * id: _38404
   */
  if(args.Length() == 3 && (args[0]->IsNull() || (args[0]->IsObject() && wxNode_wxWindow::AssignableFrom(args[0]->ToObject()->GetConstructorName()))) && args[1]->IsNumber() && args[2]->IsString()) {
    wxNode_wxWindow* parent = args[0]->IsNull() ? NULL : wxNodeObject::unwrap<wxNode_wxWindow>(args[0]->ToObject()); /* type: _1000 * */
    int id = (int)args[1]->ToInt32()->Value(); /* type: _8725  */
    v8::String::AsciiValue title(args[2]->ToString()); /* type: _14975  */
    

    wxNode_wxDialog *self = new wxNode_wxDialog(parent, id, *title);
    NodeExEvtHandlerImpl* evtHandler = dynamic_cast<NodeExEvtHandlerImpl*>(self);
    self->wrap(args.This(), self, evtHandler);
    return args.This();
  }
  
  

  std::ostringstream errStr;
  errStr << "Could not find matching constructor for arguments (class name: wxDialog).\n";
  errStr << "  arg count: " << args.Length() << "\n";
  for(int i = 0; i < args.Length(); i++) {
    v8::String::AsciiValue argStr(args[i]);
    errStr << "  arg[" << i << "]: " << *argStr << "\n";
  }
  return v8::ThrowException(v8::Exception::TypeError(v8::String::New(errStr.str().c_str())));
}


/*static*/ v8::Handle<v8::Value> wxNode_wxDialog::_ShowModal(const v8::Arguments& args) {
  v8::HandleScope scope;
  wxNode_wxDialog* self = unwrap<wxNode_wxDialog>(args.This());

  
  /*
   * id: _48078
   */
  if(args.Length() == 0) {
    

    int returnVal = self->ShowModal();

    return scope.Close(v8::Number::New(returnVal));
  }
  

  std::ostringstream errStr;
  errStr << "Could not find matching method for arguments (method name: wxDialog::ShowModal).\n";
  errStr << "  arg count: " << args.Length() << "\n";
  for(int i = 0; i < args.Length(); i++) {
    v8::String::AsciiValue argStr(args[i]);
    errStr << "  arg[" << i << "]: " << *argStr << "\n";
  }
  return v8::ThrowException(v8::Exception::TypeError(v8::String::New(errStr.str().c_str())));
}

/*static*/ v8::Handle<v8::Value> wxNode_wxDialog::_EndModal(const v8::Arguments& args) {
  v8::HandleScope scope;
  wxNode_wxDialog* self = unwrap<wxNode_wxDialog>(args.This());

  
  /*
   * id: _48079
   */
  if(args.Length() == 1 && args[0]->IsNumber()) {
    int retCode = (int)args[0]->ToInt32()->Value(); /* type: _165  */
    

    self->EndModal(retCode);

    return v8::Undefined();
  }
  

  std::ostringstream errStr;
  errStr << "Could not find matching method for arguments (method name: wxDialog::EndModal).\n";
  errStr << "  arg count: " << args.Length() << "\n";
  for(int i = 0; i < args.Length(); i++) {
    v8::String::AsciiValue argStr(args[i]);
    errStr << "  arg[" << i << "]: " << *argStr << "\n";
  }
  return v8::ThrowException(v8::Exception::TypeError(v8::String::New(errStr.str().c_str())));
}

/*static*/ v8::Handle<v8::Value> wxNode_wxDialog::_IsModal(const v8::Arguments& args) {
  v8::HandleScope scope;
  wxNode_wxDialog* self = unwrap<wxNode_wxDialog>(args.This());

  
  /*
   * id: _48080
   */
  if(args.Length() == 0) {
    

    bool returnVal = self->IsModal();

    return scope.Close(v8::Boolean::New(returnVal));
  }
  

  std::ostringstream errStr;
  errStr << "Could not find matching method for arguments (method name: wxDialog::IsModal).\n";
  errStr << "  arg count: " << args.Length() << "\n";
  for(int i = 0; i < args.Length(); i++) {
    v8::String::AsciiValue argStr(args[i]);
    errStr << "  arg[" << i << "]: " << *argStr << "\n";
  }
  return v8::ThrowException(v8::Exception::TypeError(v8::String::New(errStr.str().c_str())));
}

/*static*/ v8::Handle<v8::Value> wxNode_wxDialog::_ShowWindowModal(const v8::Arguments& args) {
  v8::HandleScope scope;
  wxNode_wxDialog* self = unwrap<wxNode_wxDialog>(args.This());

  
  /*
   * id: _48081
   */
  if(args.Length() == 0) {
    

    self->ShowWindowModal();

    return v8::Undefined();
  }
  

  std::ostringstream errStr;
  errStr << "Could not find matching method for arguments (method name: wxDialog::ShowWindowModal).\n";
  errStr << "  arg count: " << args.Length() << "\n";
  for(int i = 0; i < args.Length(); i++) {
    v8::String::AsciiValue argStr(args[i]);
    errStr << "  arg[" << i << "]: " << *argStr << "\n";
  }
  return v8::ThrowException(v8::Exception::TypeError(v8::String::New(errStr.str().c_str())));
}

/*static*/ v8::Handle<v8::Value> wxNode_wxDialog::_SendWindowModalDialogEvent(const v8::Arguments& args) {
  v8::HandleScope scope;
  wxNode_wxDialog* self = unwrap<wxNode_wxDialog>(args.This());

  
  /*
   * id: _48082
   */
  if(args.Length() == 1 && args[0]->IsNumber()) {
    int type = (int)args[0]->ToInt32()->Value(); /* type: _986  */
    

    self->SendWindowModalDialogEvent(type);

    return v8::Undefined();
  }
  

  std::ostringstream errStr;
  errStr << "Could not find matching method for arguments (method name: wxDialog::SendWindowModalDialogEvent).\n";
  errStr << "  arg count: " << args.Length() << "\n";
  for(int i = 0; i < args.Length(); i++) {
    v8::String::AsciiValue argStr(args[i]);
    errStr << "  arg[" << i << "]: " << *argStr << "\n";
  }
  return v8::ThrowException(v8::Exception::TypeError(v8::String::New(errStr.str().c_str())));
}

/*static*/ v8::Handle<v8::Value> wxNode_wxDialog::_SetReturnCode(const v8::Arguments& args) {
  v8::HandleScope scope;
  wxNode_wxDialog* self = unwrap<wxNode_wxDialog>(args.This());

  
  /*
   * id: _48083
   */
  if(args.Length() == 1 && args[0]->IsNumber()) {
    int returnCode = (int)args[0]->ToInt32()->Value(); /* type: _165  */
    

    self->SetReturnCode(returnCode);

    return v8::Undefined();
  }
  

  std::ostringstream errStr;
  errStr << "Could not find matching method for arguments (method name: wxDialog::SetReturnCode).\n";
  errStr << "  arg count: " << args.Length() << "\n";
  for(int i = 0; i < args.Length(); i++) {
    v8::String::AsciiValue argStr(args[i]);
    errStr << "  arg[" << i << "]: " << *argStr << "\n";
  }
  return v8::ThrowException(v8::Exception::TypeError(v8::String::New(errStr.str().c_str())));
}

/*static*/ v8::Handle<v8::Value> wxNode_wxDialog::_GetReturnCode(const v8::Arguments& args) {
  v8::HandleScope scope;
  wxNode_wxDialog* self = unwrap<wxNode_wxDialog>(args.This());

  
  /*
   * id: _48084
   */
  if(args.Length() == 0) {
    

    int returnVal = self->GetReturnCode();

    return scope.Close(v8::Number::New(returnVal));
  }
  

  std::ostringstream errStr;
  errStr << "Could not find matching method for arguments (method name: wxDialog::GetReturnCode).\n";
  errStr << "  arg count: " << args.Length() << "\n";
  for(int i = 0; i < args.Length(); i++) {
    v8::String::AsciiValue argStr(args[i]);
    errStr << "  arg[" << i << "]: " << *argStr << "\n";
  }
  return v8::ThrowException(v8::Exception::TypeError(v8::String::New(errStr.str().c_str())));
}

/*static*/ v8::Handle<v8::Value> wxNode_wxDialog::_SetAffirmativeId(const v8::Arguments& args) {
  v8::HandleScope scope;
  wxNode_wxDialog* self = unwrap<wxNode_wxDialog>(args.This());

  
  /*
   * id: _48085
   */
  if(args.Length() == 1 && args[0]->IsNumber()) {
    int affirmativeId = (int)args[0]->ToInt32()->Value(); /* type: _165  */
    

    self->SetAffirmativeId(affirmativeId);

    return v8::Undefined();
  }
  

  std::ostringstream errStr;
  errStr << "Could not find matching method for arguments (method name: wxDialog::SetAffirmativeId).\n";
  errStr << "  arg count: " << args.Length() << "\n";
  for(int i = 0; i < args.Length(); i++) {
    v8::String::AsciiValue argStr(args[i]);
    errStr << "  arg[" << i << "]: " << *argStr << "\n";
  }
  return v8::ThrowException(v8::Exception::TypeError(v8::String::New(errStr.str().c_str())));
}

/*static*/ v8::Handle<v8::Value> wxNode_wxDialog::_GetAffirmativeId(const v8::Arguments& args) {
  v8::HandleScope scope;
  wxNode_wxDialog* self = unwrap<wxNode_wxDialog>(args.This());

  
  /*
   * id: _48086
   */
  if(args.Length() == 0) {
    

    int returnVal = self->GetAffirmativeId();

    return scope.Close(v8::Number::New(returnVal));
  }
  

  std::ostringstream errStr;
  errStr << "Could not find matching method for arguments (method name: wxDialog::GetAffirmativeId).\n";
  errStr << "  arg count: " << args.Length() << "\n";
  for(int i = 0; i < args.Length(); i++) {
    v8::String::AsciiValue argStr(args[i]);
    errStr << "  arg[" << i << "]: " << *argStr << "\n";
  }
  return v8::ThrowException(v8::Exception::TypeError(v8::String::New(errStr.str().c_str())));
}

/*static*/ v8::Handle<v8::Value> wxNode_wxDialog::_SetEscapeId(const v8::Arguments& args) {
  v8::HandleScope scope;
  wxNode_wxDialog* self = unwrap<wxNode_wxDialog>(args.This());

  
  /*
   * id: _48087
   */
  if(args.Length() == 1 && args[0]->IsNumber()) {
    int escapeId = (int)args[0]->ToInt32()->Value(); /* type: _165  */
    

    self->SetEscapeId(escapeId);

    return v8::Undefined();
  }
  

  std::ostringstream errStr;
  errStr << "Could not find matching method for arguments (method name: wxDialog::SetEscapeId).\n";
  errStr << "  arg count: " << args.Length() << "\n";
  for(int i = 0; i < args.Length(); i++) {
    v8::String::AsciiValue argStr(args[i]);
    errStr << "  arg[" << i << "]: " << *argStr << "\n";
  }
  return v8::ThrowException(v8::Exception::TypeError(v8::String::New(errStr.str().c_str())));
}

/*static*/ v8::Handle<v8::Value> wxNode_wxDialog::_GetEscapeId(const v8::Arguments& args) {
  v8::HandleScope scope;
  wxNode_wxDialog* self = unwrap<wxNode_wxDialog>(args.This());

  
  /*
   * id: _48088
   */
  if(args.Length() == 0) {
    

    int returnVal = self->GetEscapeId();

    return scope.Close(v8::Number::New(returnVal));
  }
  

  std::ostringstream errStr;
  errStr << "Could not find matching method for arguments (method name: wxDialog::GetEscapeId).\n";
  errStr << "  arg count: " << args.Length() << "\n";
  for(int i = 0; i < args.Length(); i++) {
    v8::String::AsciiValue argStr(args[i]);
    errStr << "  arg[" << i << "]: " << *argStr << "\n";
  }
  return v8::ThrowException(v8::Exception::TypeError(v8::String::New(errStr.str().c_str())));
}

/*static*/ v8::Handle<v8::Value> wxNode_wxDialog::_GetParentForModalDialog(const v8::Arguments& args) {
  v8::HandleScope scope;
  wxNode_wxDialog* self = unwrap<wxNode_wxDialog>(args.This());

  
  /*
   * id: _48089
   */
  if(args.Length() == 2 && (args[0]->IsNull() || (args[0]->IsObject() && wxNode_wxWindow::AssignableFrom(args[0]->ToObject()->GetConstructorName()))) && args[1]->IsNumber()) {
    wxNode_wxWindow* parent = args[0]->IsNull() ? NULL : wxNodeObject::unwrap<wxNode_wxWindow>(args[0]->ToObject()); /* type: _1000 * */
    long int style = (long int)args[1]->ToInt32()->Value(); /* type: _592  */
    

    const wxWindow* returnVal = self->GetParentForModalDialog(parent, style);

    return scope.Close(wxNode_wxWindow::New(returnVal));
  }
  
  /*
   * id: _48090
   */
  if(args.Length() == 0) {
    

    const wxWindow* returnVal = self->GetParentForModalDialog();

    return scope.Close(wxNode_wxWindow::New(returnVal));
  }
  

  std::ostringstream errStr;
  errStr << "Could not find matching method for arguments (method name: wxDialog::GetParentForModalDialog).\n";
  errStr << "  arg count: " << args.Length() << "\n";
  for(int i = 0; i < args.Length(); i++) {
    v8::String::AsciiValue argStr(args[i]);
    errStr << "  arg[" << i << "]: " << *argStr << "\n";
  }
  return v8::ThrowException(v8::Exception::TypeError(v8::String::New(errStr.str().c_str())));
}

/*static*/ v8::Handle<v8::Value> wxNode_wxDialog::_CreateTextSizer(const v8::Arguments& args) {
  v8::HandleScope scope;
  wxNode_wxDialog* self = unwrap<wxNode_wxDialog>(args.This());

  
  /*
   * id: _48091
   */
  if(args.Length() == 1 && args[0]->IsString()) {
    v8::String::AsciiValue message(args[0]->ToString()); /* type: _14975  */
    

    wxSizer* returnVal = self->CreateTextSizer(*message);

    return scope.Close(wxNode_wxSizer::New(returnVal));
  }
  
  /*
   * id: _48092
   */
  if(args.Length() == 2 && args[0]->IsString() && (args[1]->IsNull() || (args[1]->IsObject() && wxNode_wxTextSizerWrapper::AssignableFrom(args[1]->ToObject()->GetConstructorName())))) {
    v8::String::AsciiValue message(args[0]->ToString()); /* type: _14975  */
    wxNode_wxTextSizerWrapper* wrapper = args[1]->IsNull() ? NULL : wxNodeObject::unwrap<wxNode_wxTextSizerWrapper>(args[1]->ToObject()); /* type: _67064  */
    

    wxSizer* returnVal = self->CreateTextSizer(*message, *wrapper);

    return scope.Close(wxNode_wxSizer::New(returnVal));
  }
  

  std::ostringstream errStr;
  errStr << "Could not find matching method for arguments (method name: wxDialog::CreateTextSizer).\n";
  errStr << "  arg count: " << args.Length() << "\n";
  for(int i = 0; i < args.Length(); i++) {
    v8::String::AsciiValue argStr(args[i]);
    errStr << "  arg[" << i << "]: " << *argStr << "\n";
  }
  return v8::ThrowException(v8::Exception::TypeError(v8::String::New(errStr.str().c_str())));
}

/*static*/ v8::Handle<v8::Value> wxNode_wxDialog::_CreateButtonSizer(const v8::Arguments& args) {
  v8::HandleScope scope;
  wxNode_wxDialog* self = unwrap<wxNode_wxDialog>(args.This());

  
  /*
   * id: _48093
   */
  if(args.Length() == 1 && args[0]->IsNumber()) {
    long int flags = (long int)args[0]->ToInt32()->Value(); /* type: _592  */
    

    wxSizer* returnVal = self->CreateButtonSizer(flags);

    return scope.Close(wxNode_wxSizer::New(returnVal));
  }
  

  std::ostringstream errStr;
  errStr << "Could not find matching method for arguments (method name: wxDialog::CreateButtonSizer).\n";
  errStr << "  arg count: " << args.Length() << "\n";
  for(int i = 0; i < args.Length(); i++) {
    v8::String::AsciiValue argStr(args[i]);
    errStr << "  arg[" << i << "]: " << *argStr << "\n";
  }
  return v8::ThrowException(v8::Exception::TypeError(v8::String::New(errStr.str().c_str())));
}

/*static*/ v8::Handle<v8::Value> wxNode_wxDialog::_CreateSeparatedSizer(const v8::Arguments& args) {
  v8::HandleScope scope;
  wxNode_wxDialog* self = unwrap<wxNode_wxDialog>(args.This());

  
  /*
   * id: _48094
   */
  if(args.Length() == 1 && (args[0]->IsNull() || (args[0]->IsObject() && wxNode_wxSizer::AssignableFrom(args[0]->ToObject()->GetConstructorName())))) {
    wxNode_wxSizer* sizer = args[0]->IsNull() ? NULL : wxNodeObject::unwrap<wxNode_wxSizer>(args[0]->ToObject()); /* type: _58915 * */
    

    wxSizer* returnVal = self->CreateSeparatedSizer(sizer);

    return scope.Close(wxNode_wxSizer::New(returnVal));
  }
  

  std::ostringstream errStr;
  errStr << "Could not find matching method for arguments (method name: wxDialog::CreateSeparatedSizer).\n";
  errStr << "  arg count: " << args.Length() << "\n";
  for(int i = 0; i < args.Length(); i++) {
    v8::String::AsciiValue argStr(args[i]);
    errStr << "  arg[" << i << "]: " << *argStr << "\n";
  }
  return v8::ThrowException(v8::Exception::TypeError(v8::String::New(errStr.str().c_str())));
}

/*static*/ v8::Handle<v8::Value> wxNode_wxDialog::_CreateSeparatedButtonSizer(const v8::Arguments& args) {
  v8::HandleScope scope;
  wxNode_wxDialog* self = unwrap<wxNode_wxDialog>(args.This());

  
  /*
   * id: _48095
   */
  if(args.Length() == 1 && args[0]->IsNumber()) {
    long int flags = (long int)args[0]->ToInt32()->Value(); /* type: _592  */
    

    wxSizer* returnVal = self->CreateSeparatedButtonSizer(flags);

    return scope.Close(wxNode_wxSizer::New(returnVal));
  }
  

  std::ostringstream errStr;
  errStr << "Could not find matching method for arguments (method name: wxDialog::CreateSeparatedButtonSizer).\n";
  errStr << "  arg count: " << args.Length() << "\n";
  for(int i = 0; i < args.Length(); i++) {
    v8::String::AsciiValue argStr(args[i]);
    errStr << "  arg[" << i << "]: " << *argStr << "\n";
  }
  return v8::ThrowException(v8::Exception::TypeError(v8::String::New(errStr.str().c_str())));
}

/*static*/ v8::Handle<v8::Value> wxNode_wxDialog::_CreateStdDialogButtonSizer(const v8::Arguments& args) {
  v8::HandleScope scope;
  wxNode_wxDialog* self = unwrap<wxNode_wxDialog>(args.This());

  
  /*
   * id: _48096
   */
  if(args.Length() == 1 && args[0]->IsNumber()) {
    long int flags = (long int)args[0]->ToInt32()->Value(); /* type: _592  */
    

    wxStdDialogButtonSizer* returnVal = self->CreateStdDialogButtonSizer(flags);

    return scope.Close(wxNode_wxStdDialogButtonSizer::New(returnVal));
  }
  

  std::ostringstream errStr;
  errStr << "Could not find matching method for arguments (method name: wxDialog::CreateStdDialogButtonSizer).\n";
  errStr << "  arg count: " << args.Length() << "\n";
  for(int i = 0; i < args.Length(); i++) {
    v8::String::AsciiValue argStr(args[i]);
    errStr << "  arg[" << i << "]: " << *argStr << "\n";
  }
  return v8::ThrowException(v8::Exception::TypeError(v8::String::New(errStr.str().c_str())));
}

/*static*/ v8::Handle<v8::Value> wxNode_wxDialog::_DoLayoutAdaptation(const v8::Arguments& args) {
  v8::HandleScope scope;
  wxNode_wxDialog* self = unwrap<wxNode_wxDialog>(args.This());

  
  /*
   * id: _48097
   */
  if(args.Length() == 0) {
    

    bool returnVal = self->DoLayoutAdaptation();

    return scope.Close(v8::Boolean::New(returnVal));
  }
  

  std::ostringstream errStr;
  errStr << "Could not find matching method for arguments (method name: wxDialog::DoLayoutAdaptation).\n";
  errStr << "  arg count: " << args.Length() << "\n";
  for(int i = 0; i < args.Length(); i++) {
    v8::String::AsciiValue argStr(args[i]);
    errStr << "  arg[" << i << "]: " << *argStr << "\n";
  }
  return v8::ThrowException(v8::Exception::TypeError(v8::String::New(errStr.str().c_str())));
}

/*static*/ v8::Handle<v8::Value> wxNode_wxDialog::_CanDoLayoutAdaptation(const v8::Arguments& args) {
  v8::HandleScope scope;
  wxNode_wxDialog* self = unwrap<wxNode_wxDialog>(args.This());

  
  /*
   * id: _48098
   */
  if(args.Length() == 0) {
    

    bool returnVal = self->CanDoLayoutAdaptation();

    return scope.Close(v8::Boolean::New(returnVal));
  }
  

  std::ostringstream errStr;
  errStr << "Could not find matching method for arguments (method name: wxDialog::CanDoLayoutAdaptation).\n";
  errStr << "  arg count: " << args.Length() << "\n";
  for(int i = 0; i < args.Length(); i++) {
    v8::String::AsciiValue argStr(args[i]);
    errStr << "  arg[" << i << "]: " << *argStr << "\n";
  }
  return v8::ThrowException(v8::Exception::TypeError(v8::String::New(errStr.str().c_str())));
}

/*static*/ v8::Handle<v8::Value> wxNode_wxDialog::_GetContentWindow(const v8::Arguments& args) {
  v8::HandleScope scope;
  wxNode_wxDialog* self = unwrap<wxNode_wxDialog>(args.This());

  
  /*
   * id: _48099
   */
  if(args.Length() == 0) {
    

    const wxWindow* returnVal = self->GetContentWindow();

    return scope.Close(wxNode_wxWindow::New(returnVal));
  }
  

  std::ostringstream errStr;
  errStr << "Could not find matching method for arguments (method name: wxDialog::GetContentWindow).\n";
  errStr << "  arg count: " << args.Length() << "\n";
  for(int i = 0; i < args.Length(); i++) {
    v8::String::AsciiValue argStr(args[i]);
    errStr << "  arg[" << i << "]: " << *argStr << "\n";
  }
  return v8::ThrowException(v8::Exception::TypeError(v8::String::New(errStr.str().c_str())));
}

/*static*/ v8::Handle<v8::Value> wxNode_wxDialog::_AddMainButtonId(const v8::Arguments& args) {
  v8::HandleScope scope;
  wxNode_wxDialog* self = unwrap<wxNode_wxDialog>(args.This());

  
  /*
   * id: _48100
   */
  if(args.Length() == 1 && args[0]->IsNumber()) {
    int id = (int)args[0]->ToInt32()->Value(); /* type: _8725  */
    

    self->AddMainButtonId(id);

    return v8::Undefined();
  }
  

  std::ostringstream errStr;
  errStr << "Could not find matching method for arguments (method name: wxDialog::AddMainButtonId).\n";
  errStr << "  arg count: " << args.Length() << "\n";
  for(int i = 0; i < args.Length(); i++) {
    v8::String::AsciiValue argStr(args[i]);
    errStr << "  arg[" << i << "]: " << *argStr << "\n";
  }
  return v8::ThrowException(v8::Exception::TypeError(v8::String::New(errStr.str().c_str())));
}

/*static*/ v8::Handle<v8::Value> wxNode_wxDialog::_GetMainButtonIds(const v8::Arguments& args) {
  v8::HandleScope scope;
  wxNode_wxDialog* self = unwrap<wxNode_wxDialog>(args.This());

  
  /*
   * id: _48101
   */
  if(args.Length() == 0) {
    

    wxArrayInt returnVal = self->GetMainButtonIds();

    return scope.Close(wxNode_wxArrayInt::NewCopy(returnVal));
  }
  

  std::ostringstream errStr;
  errStr << "Could not find matching method for arguments (method name: wxDialog::GetMainButtonIds).\n";
  errStr << "  arg count: " << args.Length() << "\n";
  for(int i = 0; i < args.Length(); i++) {
    v8::String::AsciiValue argStr(args[i]);
    errStr << "  arg[" << i << "]: " << *argStr << "\n";
  }
  return v8::ThrowException(v8::Exception::TypeError(v8::String::New(errStr.str().c_str())));
}

/*static*/ v8::Handle<v8::Value> wxNode_wxDialog::_IsMainButtonId(const v8::Arguments& args) {
  v8::HandleScope scope;
  wxNode_wxDialog* self = unwrap<wxNode_wxDialog>(args.This());

  
  /*
   * id: _48102
   */
  if(args.Length() == 1 && args[0]->IsNumber()) {
    int id = (int)args[0]->ToInt32()->Value(); /* type: _8725  */
    

    bool returnVal = self->IsMainButtonId(id);

    return scope.Close(v8::Boolean::New(returnVal));
  }
  

  std::ostringstream errStr;
  errStr << "Could not find matching method for arguments (method name: wxDialog::IsMainButtonId).\n";
  errStr << "  arg count: " << args.Length() << "\n";
  for(int i = 0; i < args.Length(); i++) {
    v8::String::AsciiValue argStr(args[i]);
    errStr << "  arg[" << i << "]: " << *argStr << "\n";
  }
  return v8::ThrowException(v8::Exception::TypeError(v8::String::New(errStr.str().c_str())));
}

/*static*/ v8::Handle<v8::Value> wxNode_wxDialog::_SetLayoutAdaptationLevel(const v8::Arguments& args) {
  v8::HandleScope scope;
  wxNode_wxDialog* self = unwrap<wxNode_wxDialog>(args.This());

  
  /*
   * id: _48103
   */
  if(args.Length() == 1 && args[0]->IsNumber()) {
    int level = (int)args[0]->ToInt32()->Value(); /* type: _165  */
    

    self->SetLayoutAdaptationLevel(level);

    return v8::Undefined();
  }
  

  std::ostringstream errStr;
  errStr << "Could not find matching method for arguments (method name: wxDialog::SetLayoutAdaptationLevel).\n";
  errStr << "  arg count: " << args.Length() << "\n";
  for(int i = 0; i < args.Length(); i++) {
    v8::String::AsciiValue argStr(args[i]);
    errStr << "  arg[" << i << "]: " << *argStr << "\n";
  }
  return v8::ThrowException(v8::Exception::TypeError(v8::String::New(errStr.str().c_str())));
}

/*static*/ v8::Handle<v8::Value> wxNode_wxDialog::_GetLayoutAdaptationLevel(const v8::Arguments& args) {
  v8::HandleScope scope;
  wxNode_wxDialog* self = unwrap<wxNode_wxDialog>(args.This());

  
  /*
   * id: _48104
   */
  if(args.Length() == 0) {
    

    int returnVal = self->GetLayoutAdaptationLevel();

    return scope.Close(v8::Number::New(returnVal));
  }
  

  std::ostringstream errStr;
  errStr << "Could not find matching method for arguments (method name: wxDialog::GetLayoutAdaptationLevel).\n";
  errStr << "  arg count: " << args.Length() << "\n";
  for(int i = 0; i < args.Length(); i++) {
    v8::String::AsciiValue argStr(args[i]);
    errStr << "  arg[" << i << "]: " << *argStr << "\n";
  }
  return v8::ThrowException(v8::Exception::TypeError(v8::String::New(errStr.str().c_str())));
}

/*static*/ v8::Handle<v8::Value> wxNode_wxDialog::_SetLayoutAdaptationMode(const v8::Arguments& args) {
  v8::HandleScope scope;
  wxNode_wxDialog* self = unwrap<wxNode_wxDialog>(args.This());

  
  /*
   * id: _48105
   */
  if(args.Length() == 1 && args[0]->IsNumber()) {
    wxDialogLayoutAdaptationMode mode = static_cast<wxDialogLayoutAdaptationMode>(args[0]->ToInt32()->Value()); /* type: _13430  */
    

    self->SetLayoutAdaptationMode(mode);

    return v8::Undefined();
  }
  

  std::ostringstream errStr;
  errStr << "Could not find matching method for arguments (method name: wxDialog::SetLayoutAdaptationMode).\n";
  errStr << "  arg count: " << args.Length() << "\n";
  for(int i = 0; i < args.Length(); i++) {
    v8::String::AsciiValue argStr(args[i]);
    errStr << "  arg[" << i << "]: " << *argStr << "\n";
  }
  return v8::ThrowException(v8::Exception::TypeError(v8::String::New(errStr.str().c_str())));
}

/*static*/ v8::Handle<v8::Value> wxNode_wxDialog::_GetLayoutAdaptationMode(const v8::Arguments& args) {
  v8::HandleScope scope;
  wxNode_wxDialog* self = unwrap<wxNode_wxDialog>(args.This());

  
  /*
   * id: _48106
   */
  if(args.Length() == 0) {
    

    int returnVal = (int)self->GetLayoutAdaptationMode();

    return scope.Close(v8::Number::New(returnVal));
  }
  

  std::ostringstream errStr;
  errStr << "Could not find matching method for arguments (method name: wxDialog::GetLayoutAdaptationMode).\n";
  errStr << "  arg count: " << args.Length() << "\n";
  for(int i = 0; i < args.Length(); i++) {
    v8::String::AsciiValue argStr(args[i]);
    errStr << "  arg[" << i << "]: " << *argStr << "\n";
  }
  return v8::ThrowException(v8::Exception::TypeError(v8::String::New(errStr.str().c_str())));
}

/*static*/ v8::Handle<v8::Value> wxNode_wxDialog::_SetLayoutAdaptationDone(const v8::Arguments& args) {
  v8::HandleScope scope;
  wxNode_wxDialog* self = unwrap<wxNode_wxDialog>(args.This());

  
  /*
   * id: _48107
   */
  if(args.Length() == 1 && args[0]->IsBoolean()) {
    bool adaptationDone = args[0]->ToBoolean()->Value(); /* type: _14830  */
    

    self->SetLayoutAdaptationDone(adaptationDone);

    return v8::Undefined();
  }
  

  std::ostringstream errStr;
  errStr << "Could not find matching method for arguments (method name: wxDialog::SetLayoutAdaptationDone).\n";
  errStr << "  arg count: " << args.Length() << "\n";
  for(int i = 0; i < args.Length(); i++) {
    v8::String::AsciiValue argStr(args[i]);
    errStr << "  arg[" << i << "]: " << *argStr << "\n";
  }
  return v8::ThrowException(v8::Exception::TypeError(v8::String::New(errStr.str().c_str())));
}

/*static*/ v8::Handle<v8::Value> wxNode_wxDialog::_GetLayoutAdaptationDone(const v8::Arguments& args) {
  v8::HandleScope scope;
  wxNode_wxDialog* self = unwrap<wxNode_wxDialog>(args.This());

  
  /*
   * id: _48108
   */
  if(args.Length() == 0) {
    

    bool returnVal = self->GetLayoutAdaptationDone();

    return scope.Close(v8::Boolean::New(returnVal));
  }
  

  std::ostringstream errStr;
  errStr << "Could not find matching method for arguments (method name: wxDialog::GetLayoutAdaptationDone).\n";
  errStr << "  arg count: " << args.Length() << "\n";
  for(int i = 0; i < args.Length(); i++) {
    v8::String::AsciiValue argStr(args[i]);
    errStr << "  arg[" << i << "]: " << *argStr << "\n";
  }
  return v8::ThrowException(v8::Exception::TypeError(v8::String::New(errStr.str().c_str())));
}

/*static*/ v8::Handle<v8::Value> wxNode_wxDialog::_SetLayoutAdapter(const v8::Arguments& args) {
  v8::HandleScope scope;
  wxNode_wxDialog* self = unwrap<wxNode_wxDialog>(args.This());

  
  /*
   * id: _48109
   */
  if(args.Length() == 1 && (args[0]->IsNull() || (args[0]->IsObject() && wxNode_wxDialogLayoutAdapter::AssignableFrom(args[0]->ToObject()->GetConstructorName())))) {
    wxNode_wxDialogLayoutAdapter* adapter = args[0]->IsNull() ? NULL : wxNodeObject::unwrap<wxNode_wxDialogLayoutAdapter>(args[0]->ToObject()); /* type: _67063 * */
    

    wxDialogLayoutAdapter* returnVal = wxDialog::SetLayoutAdapter(adapter);

    return scope.Close(wxNode_wxDialogLayoutAdapter::New(returnVal));
  }
  

  std::ostringstream errStr;
  errStr << "Could not find matching method for arguments (method name: wxDialog::SetLayoutAdapter).\n";
  errStr << "  arg count: " << args.Length() << "\n";
  for(int i = 0; i < args.Length(); i++) {
    v8::String::AsciiValue argStr(args[i]);
    errStr << "  arg[" << i << "]: " << *argStr << "\n";
  }
  return v8::ThrowException(v8::Exception::TypeError(v8::String::New(errStr.str().c_str())));
}

/*static*/ v8::Handle<v8::Value> wxNode_wxDialog::_GetLayoutAdapter(const v8::Arguments& args) {
  v8::HandleScope scope;
  wxNode_wxDialog* self = unwrap<wxNode_wxDialog>(args.This());

  
  /*
   * id: _48110
   */
  if(args.Length() == 0) {
    

    wxDialogLayoutAdapter* returnVal = wxDialog::GetLayoutAdapter();

    return scope.Close(wxNode_wxDialogLayoutAdapter::New(returnVal));
  }
  

  std::ostringstream errStr;
  errStr << "Could not find matching method for arguments (method name: wxDialog::GetLayoutAdapter).\n";
  errStr << "  arg count: " << args.Length() << "\n";
  for(int i = 0; i < args.Length(); i++) {
    v8::String::AsciiValue argStr(args[i]);
    errStr << "  arg[" << i << "]: " << *argStr << "\n";
  }
  return v8::ThrowException(v8::Exception::TypeError(v8::String::New(errStr.str().c_str())));
}

/*static*/ v8::Handle<v8::Value> wxNode_wxDialog::_IsLayoutAdaptationEnabled(const v8::Arguments& args) {
  v8::HandleScope scope;
  wxNode_wxDialog* self = unwrap<wxNode_wxDialog>(args.This());

  
  /*
   * id: _48111
   */
  if(args.Length() == 0) {
    

    bool returnVal = wxDialog::IsLayoutAdaptationEnabled();

    return scope.Close(v8::Boolean::New(returnVal));
  }
  

  std::ostringstream errStr;
  errStr << "Could not find matching method for arguments (method name: wxDialog::IsLayoutAdaptationEnabled).\n";
  errStr << "  arg count: " << args.Length() << "\n";
  for(int i = 0; i < args.Length(); i++) {
    v8::String::AsciiValue argStr(args[i]);
    errStr << "  arg[" << i << "]: " << *argStr << "\n";
  }
  return v8::ThrowException(v8::Exception::TypeError(v8::String::New(errStr.str().c_str())));
}

/*static*/ v8::Handle<v8::Value> wxNode_wxDialog::_EnableLayoutAdaptation(const v8::Arguments& args) {
  v8::HandleScope scope;
  wxNode_wxDialog* self = unwrap<wxNode_wxDialog>(args.This());

  
  /*
   * id: _48112
   */
  if(args.Length() == 1 && args[0]->IsBoolean()) {
    bool enable = args[0]->ToBoolean()->Value(); /* type: _14830  */
    

    wxDialog::EnableLayoutAdaptation(enable);

    return v8::Undefined();
  }
  

  std::ostringstream errStr;
  errStr << "Could not find matching method for arguments (method name: wxDialog::EnableLayoutAdaptation).\n";
  errStr << "  arg count: " << args.Length() << "\n";
  for(int i = 0; i < args.Length(); i++) {
    v8::String::AsciiValue argStr(args[i]);
    errStr << "  arg[" << i << "]: " << *argStr << "\n";
  }
  return v8::ThrowException(v8::Exception::TypeError(v8::String::New(errStr.str().c_str())));
}

/*static*/ v8::Handle<v8::Value> wxNode_wxDialog::_GetModality(const v8::Arguments& args) {
  v8::HandleScope scope;
  wxNode_wxDialog* self = unwrap<wxNode_wxDialog>(args.This());

  
  /*
   * id: _48113
   */
  if(args.Length() == 0) {
    

    int returnVal = (int)self->GetModality();

    return scope.Close(v8::Number::New(returnVal));
  }
  

  std::ostringstream errStr;
  errStr << "Could not find matching method for arguments (method name: wxDialog::GetModality).\n";
  errStr << "  arg count: " << args.Length() << "\n";
  for(int i = 0; i < args.Length(); i++) {
    v8::String::AsciiValue argStr(args[i]);
    errStr << "  arg[" << i << "]: " << *argStr << "\n";
  }
  return v8::ThrowException(v8::Exception::TypeError(v8::String::New(errStr.str().c_str())));
}



