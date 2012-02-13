
#include <sstream>
#include "wxNode_wxTextEntry.h"
#include "wxNode_wxArrayString.h"
#include "wxNode_wxTextCompleter.h"
#include "wxNode_wxPoint.h"
#include "wxNode_wxWindow.h"


/* static */ v8::Persistent<v8::FunctionTemplate> wxNode_wxTextEntry::s_ct;




/*static*/ void wxNode_wxTextEntry::Init(v8::Handle<v8::Object> target) {
  v8::HandleScope scope;

  v8::Local<v8::FunctionTemplate> t = v8::FunctionTemplate::New(wxNodeObject::NewFunc);
  s_ct = v8::Persistent<v8::FunctionTemplate>::New(t);
  s_ct->InstanceTemplate()->SetInternalFieldCount(2);
  s_ct->SetClassName(v8::String::NewSymbol("TextEntry"));

  NODE_SET_PROTOTYPE_METHOD(s_ct, "init", _init);
  AddMethods(s_ct);

  target->Set(v8::String::NewSymbol("TextEntry"), s_ct->GetFunction());
}

/*static*/ void wxNode_wxTextEntry::AddMethods(v8::Handle<v8::FunctionTemplate> target) {
  wxNode_wxEvtHandler::AddMethods(target);
  NODE_SET_PROTOTYPE_METHOD(target, "setValue", _SetValue);
  NODE_SET_PROTOTYPE_METHOD(target, "changeValue", _ChangeValue);
  NODE_SET_PROTOTYPE_METHOD(target, "writeText", _WriteText);
  NODE_SET_PROTOTYPE_METHOD(target, "appendText", _AppendText);
  NODE_SET_PROTOTYPE_METHOD(target, "getValue", _GetValue);
  NODE_SET_PROTOTYPE_METHOD(target, "getRange", _GetRange);
  NODE_SET_PROTOTYPE_METHOD(target, "isEmpty", _IsEmpty);
  NODE_SET_PROTOTYPE_METHOD(target, "replace", _Replace);
  NODE_SET_PROTOTYPE_METHOD(target, "remove", _Remove);
  NODE_SET_PROTOTYPE_METHOD(target, "clear", _Clear);
  NODE_SET_PROTOTYPE_METHOD(target, "removeSelection", _RemoveSelection);
  NODE_SET_PROTOTYPE_METHOD(target, "copy", _Copy);
  NODE_SET_PROTOTYPE_METHOD(target, "cut", _Cut);
  NODE_SET_PROTOTYPE_METHOD(target, "paste", _Paste);
  NODE_SET_PROTOTYPE_METHOD(target, "canCopy", _CanCopy);
  NODE_SET_PROTOTYPE_METHOD(target, "canCut", _CanCut);
  NODE_SET_PROTOTYPE_METHOD(target, "canPaste", _CanPaste);
  NODE_SET_PROTOTYPE_METHOD(target, "undo", _Undo);
  NODE_SET_PROTOTYPE_METHOD(target, "redo", _Redo);
  NODE_SET_PROTOTYPE_METHOD(target, "canUndo", _CanUndo);
  NODE_SET_PROTOTYPE_METHOD(target, "canRedo", _CanRedo);
  NODE_SET_PROTOTYPE_METHOD(target, "setInsertionPoint", _SetInsertionPoint);
  NODE_SET_PROTOTYPE_METHOD(target, "setInsertionPointEnd", _SetInsertionPointEnd);
  NODE_SET_PROTOTYPE_METHOD(target, "getInsertionPoint", _GetInsertionPoint);
  NODE_SET_PROTOTYPE_METHOD(target, "getLastPosition", _GetLastPosition);
  NODE_SET_PROTOTYPE_METHOD(target, "setSelection", _SetSelection);
  NODE_SET_PROTOTYPE_METHOD(target, "selectAll", _SelectAll);
  NODE_SET_PROTOTYPE_METHOD(target, "getSelection", _GetSelection);
  NODE_SET_PROTOTYPE_METHOD(target, "hasSelection", _HasSelection);
  NODE_SET_PROTOTYPE_METHOD(target, "getStringSelection", _GetStringSelection);
  NODE_SET_PROTOTYPE_METHOD(target, "autoComplete", _AutoComplete);
  NODE_SET_PROTOTYPE_METHOD(target, "autoCompleteFileNames", _AutoCompleteFileNames);
  NODE_SET_PROTOTYPE_METHOD(target, "autoCompleteDirectories", _AutoCompleteDirectories);
  NODE_SET_PROTOTYPE_METHOD(target, "isEditable", _IsEditable);
  NODE_SET_PROTOTYPE_METHOD(target, "setEditable", _SetEditable);
  NODE_SET_PROTOTYPE_METHOD(target, "setMaxLength", _SetMaxLength);
  NODE_SET_PROTOTYPE_METHOD(target, "setHint", _SetHint);
  NODE_SET_PROTOTYPE_METHOD(target, "getHint", _GetHint);
  NODE_SET_PROTOTYPE_METHOD(target, "setMargins", _SetMargins);
  NODE_SET_PROTOTYPE_METHOD(target, "getMargins", _GetMargins);
  NODE_SET_METHOD(target, "sendTextUpdatedEvent", _SendTextUpdatedEvent);
  NODE_SET_PROTOTYPE_METHOD(target, "sendTextUpdatedEventIfAllowed", _SendTextUpdatedEventIfAllowed);
  NODE_SET_PROTOTYPE_METHOD(target, "forwardEnableTextChangedEvents", _ForwardEnableTextChangedEvents);
  
  
}

/*static*/ v8::Handle<v8::Value> wxNode_wxTextEntry::New(const wxNode_wxTextEntry* obj) {
  v8::HandleScope scope;

  if(obj == NULL) {
    return scope.Close(v8::Null());
  }
  
  v8::Local<v8::FunctionTemplate> returnObjFt = v8::FunctionTemplate::New(wxNodeObject::NewFunc);
  returnObjFt->InstanceTemplate()->SetInternalFieldCount(2);
  returnObjFt->SetClassName(v8::String::NewSymbol("TextEntry"));
  wxNode_wxTextEntry::AddMethods(returnObjFt);

  v8::Local<v8::Function> returnObjFn = returnObjFt->GetFunction();
  v8::Handle<v8::Value> returnObjArgs[0];
  v8::Local<v8::Object> returnObj = returnObjFn->CallAsConstructor(0, returnObjArgs)->ToObject();
  returnObj->SetPointerInInternalField(0, (void*)obj);
  NodeExEvtHandlerImpl* evtHandler = dynamic_cast<NodeExEvtHandlerImpl*>((wxNode_wxTextEntry*)obj);
  returnObj->SetPointerInInternalField(1, evtHandler);

  return scope.Close(returnObj);
}

/*static*/ v8::Handle<v8::Value> wxNode_wxTextEntry::New(const wxTextEntry* obj) {
  v8::HandleScope scope;

  if(obj == NULL) {
    return scope.Close(v8::Null());
  }
  
  v8::Local<v8::FunctionTemplate> returnObjFt = v8::FunctionTemplate::New(wxNodeObject::NewFunc);
  returnObjFt->InstanceTemplate()->SetInternalFieldCount(2);
  returnObjFt->SetClassName(v8::String::NewSymbol("TextEntry"));
  wxNode_wxTextEntry::AddMethods(returnObjFt);

  v8::Local<v8::Function> returnObjFn = returnObjFt->GetFunction();
  v8::Handle<v8::Value> returnObjArgs[0];
  v8::Local<v8::Object> returnObj = returnObjFn->CallAsConstructor(0, returnObjArgs)->ToObject();
  returnObj->SetPointerInInternalField(0, (void*)obj);
  NodeExEvtHandlerImplWrap* wrap = new NodeExEvtHandlerImplWrap(returnObj);
  NodeExEvtHandlerImpl* evtHandler = dynamic_cast<NodeExEvtHandlerImpl*>(wrap);
  returnObj->SetPointerInInternalField(1, evtHandler);

  return scope.Close(returnObj);
}

/*static*/ v8::Handle<v8::Value> wxNode_wxTextEntry::NewCopy(const wxTextEntry& obj) {
  return v8::Undefined();
}

/*static*/ bool wxNode_wxTextEntry::AssignableFrom(const v8::Handle<v8::String>& className) {
  v8::String::AsciiValue classNameStr(className);
  return AssignableFrom(*classNameStr);
}

/*static*/ bool wxNode_wxTextEntry::AssignableFrom(const char* className) {
  if(!strcmp("TextEntry", className)) { return true; }
  
  if(!strcmp("TextCtrlIface", className)) { return true; }

  if(!strcmp("SearchCtrlBaseBaseClass", className)) { return true; }

  if(!strcmp("SearchCtrlBase", className)) { return true; }

  if(!strcmp("SearchCtrl", className)) { return true; }
  if(!strcmp("RichTextCtrl", className)) { return true; }
  if(!strcmp("StyledTextCtrl", className)) { return true; }
  if(!strcmp("TextEntry", className)) { return true; }

  if(!strcmp("ComboCtrlBase", className)) { return true; }

  if(!strcmp("GenericComboCtrl", className)) { return true; }

  if(!strcmp("ComboCtrl", className)) { return true; }

  if(!strcmp("RichTextStyleComboCtrl", className)) { return true; }
  if(!strcmp("WindowWithItems<wxComboCtrl,wxItemContainer>", className)) { return true; }

  if(!strcmp("OwnerDrawnComboBox", className)) { return true; }
  if(!strcmp("ComboBox", className)) { return true; }

  if(!strcmp("BitmapComboBox", className)) { return true; }
  if(!strcmp("TextCtrlBase", className)) { return true; }

  if(!strcmp("TextCtrl", className)) { return true; }
  if(!strcmp("ComboBoxBase", className)) { return true; }


  return false;
}

/*static*/ v8::Handle<v8::Value> wxNode_wxTextEntry::_init(const v8::Arguments& args) {
  v8::HandleScope scope;

  

  std::ostringstream errStr;
  errStr << "Could not find matching constructor for arguments (class name: wxTextEntry).\n";
  errStr << "  arg count: " << args.Length() << "\n";
  for(int i = 0; i < args.Length(); i++) {
    v8::String::AsciiValue argStr(args[i]);
    errStr << "  arg[" << i << "]: " << *argStr << "\n";
  }
  return v8::ThrowException(v8::Exception::TypeError(v8::String::New(errStr.str().c_str())));
}


/*static*/ v8::Handle<v8::Value> wxNode_wxTextEntry::_SetValue(const v8::Arguments& args) {
  v8::HandleScope scope;
  wxNode_wxTextEntry* self = unwrap<wxNode_wxTextEntry>(args.This());

  
  /*
   * id: _29646
   */
  if(args.Length() == 1 && args[0]->IsString()) {
    v8::String::AsciiValue value(args[0]->ToString()); /* type: _14975  */
    

    self->SetValue(*value);

    return v8::Undefined();
  }
  

  std::ostringstream errStr;
  errStr << "Could not find matching method for arguments (method name: wxTextEntry::SetValue).\n";
  errStr << "  arg count: " << args.Length() << "\n";
  for(int i = 0; i < args.Length(); i++) {
    v8::String::AsciiValue argStr(args[i]);
    errStr << "  arg[" << i << "]: " << *argStr << "\n";
  }
  return v8::ThrowException(v8::Exception::TypeError(v8::String::New(errStr.str().c_str())));
}

/*static*/ v8::Handle<v8::Value> wxNode_wxTextEntry::_ChangeValue(const v8::Arguments& args) {
  v8::HandleScope scope;
  wxNode_wxTextEntry* self = unwrap<wxNode_wxTextEntry>(args.This());

  
  /*
   * id: _29647
   */
  if(args.Length() == 1 && args[0]->IsString()) {
    v8::String::AsciiValue value(args[0]->ToString()); /* type: _14975  */
    

    self->ChangeValue(*value);

    return v8::Undefined();
  }
  

  std::ostringstream errStr;
  errStr << "Could not find matching method for arguments (method name: wxTextEntry::ChangeValue).\n";
  errStr << "  arg count: " << args.Length() << "\n";
  for(int i = 0; i < args.Length(); i++) {
    v8::String::AsciiValue argStr(args[i]);
    errStr << "  arg[" << i << "]: " << *argStr << "\n";
  }
  return v8::ThrowException(v8::Exception::TypeError(v8::String::New(errStr.str().c_str())));
}

/*static*/ v8::Handle<v8::Value> wxNode_wxTextEntry::_WriteText(const v8::Arguments& args) {
  v8::HandleScope scope;
  wxNode_wxTextEntry* self = unwrap<wxNode_wxTextEntry>(args.This());

  
  /*
   * id: _29648
   */
  if(args.Length() == 1 && args[0]->IsString()) {
    v8::String::AsciiValue text(args[0]->ToString()); /* type: _14975  */
    

    self->WriteText(*text);

    return v8::Undefined();
  }
  

  std::ostringstream errStr;
  errStr << "Could not find matching method for arguments (method name: wxTextEntry::WriteText).\n";
  errStr << "  arg count: " << args.Length() << "\n";
  for(int i = 0; i < args.Length(); i++) {
    v8::String::AsciiValue argStr(args[i]);
    errStr << "  arg[" << i << "]: " << *argStr << "\n";
  }
  return v8::ThrowException(v8::Exception::TypeError(v8::String::New(errStr.str().c_str())));
}

/*static*/ v8::Handle<v8::Value> wxNode_wxTextEntry::_AppendText(const v8::Arguments& args) {
  v8::HandleScope scope;
  wxNode_wxTextEntry* self = unwrap<wxNode_wxTextEntry>(args.This());

  
  /*
   * id: _29649
   */
  if(args.Length() == 1 && args[0]->IsString()) {
    v8::String::AsciiValue text(args[0]->ToString()); /* type: _14975  */
    

    self->AppendText(*text);

    return v8::Undefined();
  }
  

  std::ostringstream errStr;
  errStr << "Could not find matching method for arguments (method name: wxTextEntry::AppendText).\n";
  errStr << "  arg count: " << args.Length() << "\n";
  for(int i = 0; i < args.Length(); i++) {
    v8::String::AsciiValue argStr(args[i]);
    errStr << "  arg[" << i << "]: " << *argStr << "\n";
  }
  return v8::ThrowException(v8::Exception::TypeError(v8::String::New(errStr.str().c_str())));
}

/*static*/ v8::Handle<v8::Value> wxNode_wxTextEntry::_GetValue(const v8::Arguments& args) {
  v8::HandleScope scope;
  wxNode_wxTextEntry* self = unwrap<wxNode_wxTextEntry>(args.This());

  
  /*
   * id: _29650
   */
  if(args.Length() == 0) {
    

    wxString returnVal = self->GetValue();

    return scope.Close(v8::String::New(returnVal.mb_str()));
  }
  

  std::ostringstream errStr;
  errStr << "Could not find matching method for arguments (method name: wxTextEntry::GetValue).\n";
  errStr << "  arg count: " << args.Length() << "\n";
  for(int i = 0; i < args.Length(); i++) {
    v8::String::AsciiValue argStr(args[i]);
    errStr << "  arg[" << i << "]: " << *argStr << "\n";
  }
  return v8::ThrowException(v8::Exception::TypeError(v8::String::New(errStr.str().c_str())));
}

/*static*/ v8::Handle<v8::Value> wxNode_wxTextEntry::_GetRange(const v8::Arguments& args) {
  v8::HandleScope scope;
  wxNode_wxTextEntry* self = unwrap<wxNode_wxTextEntry>(args.This());

  
  /*
   * id: _29651
   */
  if(args.Length() == 2 && args[0]->IsNumber() && args[1]->IsNumber()) {
    long int from = (long int)args[0]->ToInt32()->Value(); /* type: _592  */
    long int to = (long int)args[1]->ToInt32()->Value(); /* type: _592  */
    

    wxString returnVal = self->GetRange(from, to);

    return scope.Close(v8::String::New(returnVal.mb_str()));
  }
  

  std::ostringstream errStr;
  errStr << "Could not find matching method for arguments (method name: wxTextEntry::GetRange).\n";
  errStr << "  arg count: " << args.Length() << "\n";
  for(int i = 0; i < args.Length(); i++) {
    v8::String::AsciiValue argStr(args[i]);
    errStr << "  arg[" << i << "]: " << *argStr << "\n";
  }
  return v8::ThrowException(v8::Exception::TypeError(v8::String::New(errStr.str().c_str())));
}

/*static*/ v8::Handle<v8::Value> wxNode_wxTextEntry::_IsEmpty(const v8::Arguments& args) {
  v8::HandleScope scope;
  wxNode_wxTextEntry* self = unwrap<wxNode_wxTextEntry>(args.This());

  
  /*
   * id: _29652
   */
  if(args.Length() == 0) {
    

    bool returnVal = self->IsEmpty();

    return scope.Close(v8::Boolean::New(returnVal));
  }
  

  std::ostringstream errStr;
  errStr << "Could not find matching method for arguments (method name: wxTextEntry::IsEmpty).\n";
  errStr << "  arg count: " << args.Length() << "\n";
  for(int i = 0; i < args.Length(); i++) {
    v8::String::AsciiValue argStr(args[i]);
    errStr << "  arg[" << i << "]: " << *argStr << "\n";
  }
  return v8::ThrowException(v8::Exception::TypeError(v8::String::New(errStr.str().c_str())));
}

/*static*/ v8::Handle<v8::Value> wxNode_wxTextEntry::_Replace(const v8::Arguments& args) {
  v8::HandleScope scope;
  wxNode_wxTextEntry* self = unwrap<wxNode_wxTextEntry>(args.This());

  
  /*
   * id: _29653
   */
  if(args.Length() == 3 && args[0]->IsNumber() && args[1]->IsNumber() && args[2]->IsString()) {
    long int from = (long int)args[0]->ToInt32()->Value(); /* type: _592  */
    long int to = (long int)args[1]->ToInt32()->Value(); /* type: _592  */
    v8::String::AsciiValue value(args[2]->ToString()); /* type: _14975  */
    

    self->Replace(from, to, *value);

    return v8::Undefined();
  }
  

  std::ostringstream errStr;
  errStr << "Could not find matching method for arguments (method name: wxTextEntry::Replace).\n";
  errStr << "  arg count: " << args.Length() << "\n";
  for(int i = 0; i < args.Length(); i++) {
    v8::String::AsciiValue argStr(args[i]);
    errStr << "  arg[" << i << "]: " << *argStr << "\n";
  }
  return v8::ThrowException(v8::Exception::TypeError(v8::String::New(errStr.str().c_str())));
}

/*static*/ v8::Handle<v8::Value> wxNode_wxTextEntry::_Remove(const v8::Arguments& args) {
  v8::HandleScope scope;
  wxNode_wxTextEntry* self = unwrap<wxNode_wxTextEntry>(args.This());

  
  /*
   * id: _29654
   */
  if(args.Length() == 2 && args[0]->IsNumber() && args[1]->IsNumber()) {
    long int from = (long int)args[0]->ToInt32()->Value(); /* type: _592  */
    long int to = (long int)args[1]->ToInt32()->Value(); /* type: _592  */
    

    self->Remove(from, to);

    return v8::Undefined();
  }
  

  std::ostringstream errStr;
  errStr << "Could not find matching method for arguments (method name: wxTextEntry::Remove).\n";
  errStr << "  arg count: " << args.Length() << "\n";
  for(int i = 0; i < args.Length(); i++) {
    v8::String::AsciiValue argStr(args[i]);
    errStr << "  arg[" << i << "]: " << *argStr << "\n";
  }
  return v8::ThrowException(v8::Exception::TypeError(v8::String::New(errStr.str().c_str())));
}

/*static*/ v8::Handle<v8::Value> wxNode_wxTextEntry::_Clear(const v8::Arguments& args) {
  v8::HandleScope scope;
  wxNode_wxTextEntry* self = unwrap<wxNode_wxTextEntry>(args.This());

  
  /*
   * id: _29655
   */
  if(args.Length() == 0) {
    

    self->Clear();

    return v8::Undefined();
  }
  

  std::ostringstream errStr;
  errStr << "Could not find matching method for arguments (method name: wxTextEntry::Clear).\n";
  errStr << "  arg count: " << args.Length() << "\n";
  for(int i = 0; i < args.Length(); i++) {
    v8::String::AsciiValue argStr(args[i]);
    errStr << "  arg[" << i << "]: " << *argStr << "\n";
  }
  return v8::ThrowException(v8::Exception::TypeError(v8::String::New(errStr.str().c_str())));
}

/*static*/ v8::Handle<v8::Value> wxNode_wxTextEntry::_RemoveSelection(const v8::Arguments& args) {
  v8::HandleScope scope;
  wxNode_wxTextEntry* self = unwrap<wxNode_wxTextEntry>(args.This());

  
  /*
   * id: _29656
   */
  if(args.Length() == 0) {
    

    self->RemoveSelection();

    return v8::Undefined();
  }
  

  std::ostringstream errStr;
  errStr << "Could not find matching method for arguments (method name: wxTextEntry::RemoveSelection).\n";
  errStr << "  arg count: " << args.Length() << "\n";
  for(int i = 0; i < args.Length(); i++) {
    v8::String::AsciiValue argStr(args[i]);
    errStr << "  arg[" << i << "]: " << *argStr << "\n";
  }
  return v8::ThrowException(v8::Exception::TypeError(v8::String::New(errStr.str().c_str())));
}

/*static*/ v8::Handle<v8::Value> wxNode_wxTextEntry::_Copy(const v8::Arguments& args) {
  v8::HandleScope scope;
  wxNode_wxTextEntry* self = unwrap<wxNode_wxTextEntry>(args.This());

  
  /*
   * id: _29657
   */
  if(args.Length() == 0) {
    

    self->Copy();

    return v8::Undefined();
  }
  

  std::ostringstream errStr;
  errStr << "Could not find matching method for arguments (method name: wxTextEntry::Copy).\n";
  errStr << "  arg count: " << args.Length() << "\n";
  for(int i = 0; i < args.Length(); i++) {
    v8::String::AsciiValue argStr(args[i]);
    errStr << "  arg[" << i << "]: " << *argStr << "\n";
  }
  return v8::ThrowException(v8::Exception::TypeError(v8::String::New(errStr.str().c_str())));
}

/*static*/ v8::Handle<v8::Value> wxNode_wxTextEntry::_Cut(const v8::Arguments& args) {
  v8::HandleScope scope;
  wxNode_wxTextEntry* self = unwrap<wxNode_wxTextEntry>(args.This());

  
  /*
   * id: _29658
   */
  if(args.Length() == 0) {
    

    self->Cut();

    return v8::Undefined();
  }
  

  std::ostringstream errStr;
  errStr << "Could not find matching method for arguments (method name: wxTextEntry::Cut).\n";
  errStr << "  arg count: " << args.Length() << "\n";
  for(int i = 0; i < args.Length(); i++) {
    v8::String::AsciiValue argStr(args[i]);
    errStr << "  arg[" << i << "]: " << *argStr << "\n";
  }
  return v8::ThrowException(v8::Exception::TypeError(v8::String::New(errStr.str().c_str())));
}

/*static*/ v8::Handle<v8::Value> wxNode_wxTextEntry::_Paste(const v8::Arguments& args) {
  v8::HandleScope scope;
  wxNode_wxTextEntry* self = unwrap<wxNode_wxTextEntry>(args.This());

  
  /*
   * id: _29659
   */
  if(args.Length() == 0) {
    

    self->Paste();

    return v8::Undefined();
  }
  

  std::ostringstream errStr;
  errStr << "Could not find matching method for arguments (method name: wxTextEntry::Paste).\n";
  errStr << "  arg count: " << args.Length() << "\n";
  for(int i = 0; i < args.Length(); i++) {
    v8::String::AsciiValue argStr(args[i]);
    errStr << "  arg[" << i << "]: " << *argStr << "\n";
  }
  return v8::ThrowException(v8::Exception::TypeError(v8::String::New(errStr.str().c_str())));
}

/*static*/ v8::Handle<v8::Value> wxNode_wxTextEntry::_CanCopy(const v8::Arguments& args) {
  v8::HandleScope scope;
  wxNode_wxTextEntry* self = unwrap<wxNode_wxTextEntry>(args.This());

  
  /*
   * id: _29660
   */
  if(args.Length() == 0) {
    

    bool returnVal = self->CanCopy();

    return scope.Close(v8::Boolean::New(returnVal));
  }
  

  std::ostringstream errStr;
  errStr << "Could not find matching method for arguments (method name: wxTextEntry::CanCopy).\n";
  errStr << "  arg count: " << args.Length() << "\n";
  for(int i = 0; i < args.Length(); i++) {
    v8::String::AsciiValue argStr(args[i]);
    errStr << "  arg[" << i << "]: " << *argStr << "\n";
  }
  return v8::ThrowException(v8::Exception::TypeError(v8::String::New(errStr.str().c_str())));
}

/*static*/ v8::Handle<v8::Value> wxNode_wxTextEntry::_CanCut(const v8::Arguments& args) {
  v8::HandleScope scope;
  wxNode_wxTextEntry* self = unwrap<wxNode_wxTextEntry>(args.This());

  
  /*
   * id: _29661
   */
  if(args.Length() == 0) {
    

    bool returnVal = self->CanCut();

    return scope.Close(v8::Boolean::New(returnVal));
  }
  

  std::ostringstream errStr;
  errStr << "Could not find matching method for arguments (method name: wxTextEntry::CanCut).\n";
  errStr << "  arg count: " << args.Length() << "\n";
  for(int i = 0; i < args.Length(); i++) {
    v8::String::AsciiValue argStr(args[i]);
    errStr << "  arg[" << i << "]: " << *argStr << "\n";
  }
  return v8::ThrowException(v8::Exception::TypeError(v8::String::New(errStr.str().c_str())));
}

/*static*/ v8::Handle<v8::Value> wxNode_wxTextEntry::_CanPaste(const v8::Arguments& args) {
  v8::HandleScope scope;
  wxNode_wxTextEntry* self = unwrap<wxNode_wxTextEntry>(args.This());

  
  /*
   * id: _29662
   */
  if(args.Length() == 0) {
    

    bool returnVal = self->CanPaste();

    return scope.Close(v8::Boolean::New(returnVal));
  }
  

  std::ostringstream errStr;
  errStr << "Could not find matching method for arguments (method name: wxTextEntry::CanPaste).\n";
  errStr << "  arg count: " << args.Length() << "\n";
  for(int i = 0; i < args.Length(); i++) {
    v8::String::AsciiValue argStr(args[i]);
    errStr << "  arg[" << i << "]: " << *argStr << "\n";
  }
  return v8::ThrowException(v8::Exception::TypeError(v8::String::New(errStr.str().c_str())));
}

/*static*/ v8::Handle<v8::Value> wxNode_wxTextEntry::_Undo(const v8::Arguments& args) {
  v8::HandleScope scope;
  wxNode_wxTextEntry* self = unwrap<wxNode_wxTextEntry>(args.This());

  
  /*
   * id: _29663
   */
  if(args.Length() == 0) {
    

    self->Undo();

    return v8::Undefined();
  }
  

  std::ostringstream errStr;
  errStr << "Could not find matching method for arguments (method name: wxTextEntry::Undo).\n";
  errStr << "  arg count: " << args.Length() << "\n";
  for(int i = 0; i < args.Length(); i++) {
    v8::String::AsciiValue argStr(args[i]);
    errStr << "  arg[" << i << "]: " << *argStr << "\n";
  }
  return v8::ThrowException(v8::Exception::TypeError(v8::String::New(errStr.str().c_str())));
}

/*static*/ v8::Handle<v8::Value> wxNode_wxTextEntry::_Redo(const v8::Arguments& args) {
  v8::HandleScope scope;
  wxNode_wxTextEntry* self = unwrap<wxNode_wxTextEntry>(args.This());

  
  /*
   * id: _29664
   */
  if(args.Length() == 0) {
    

    self->Redo();

    return v8::Undefined();
  }
  

  std::ostringstream errStr;
  errStr << "Could not find matching method for arguments (method name: wxTextEntry::Redo).\n";
  errStr << "  arg count: " << args.Length() << "\n";
  for(int i = 0; i < args.Length(); i++) {
    v8::String::AsciiValue argStr(args[i]);
    errStr << "  arg[" << i << "]: " << *argStr << "\n";
  }
  return v8::ThrowException(v8::Exception::TypeError(v8::String::New(errStr.str().c_str())));
}

/*static*/ v8::Handle<v8::Value> wxNode_wxTextEntry::_CanUndo(const v8::Arguments& args) {
  v8::HandleScope scope;
  wxNode_wxTextEntry* self = unwrap<wxNode_wxTextEntry>(args.This());

  
  /*
   * id: _29665
   */
  if(args.Length() == 0) {
    

    bool returnVal = self->CanUndo();

    return scope.Close(v8::Boolean::New(returnVal));
  }
  

  std::ostringstream errStr;
  errStr << "Could not find matching method for arguments (method name: wxTextEntry::CanUndo).\n";
  errStr << "  arg count: " << args.Length() << "\n";
  for(int i = 0; i < args.Length(); i++) {
    v8::String::AsciiValue argStr(args[i]);
    errStr << "  arg[" << i << "]: " << *argStr << "\n";
  }
  return v8::ThrowException(v8::Exception::TypeError(v8::String::New(errStr.str().c_str())));
}

/*static*/ v8::Handle<v8::Value> wxNode_wxTextEntry::_CanRedo(const v8::Arguments& args) {
  v8::HandleScope scope;
  wxNode_wxTextEntry* self = unwrap<wxNode_wxTextEntry>(args.This());

  
  /*
   * id: _29666
   */
  if(args.Length() == 0) {
    

    bool returnVal = self->CanRedo();

    return scope.Close(v8::Boolean::New(returnVal));
  }
  

  std::ostringstream errStr;
  errStr << "Could not find matching method for arguments (method name: wxTextEntry::CanRedo).\n";
  errStr << "  arg count: " << args.Length() << "\n";
  for(int i = 0; i < args.Length(); i++) {
    v8::String::AsciiValue argStr(args[i]);
    errStr << "  arg[" << i << "]: " << *argStr << "\n";
  }
  return v8::ThrowException(v8::Exception::TypeError(v8::String::New(errStr.str().c_str())));
}

/*static*/ v8::Handle<v8::Value> wxNode_wxTextEntry::_SetInsertionPoint(const v8::Arguments& args) {
  v8::HandleScope scope;
  wxNode_wxTextEntry* self = unwrap<wxNode_wxTextEntry>(args.This());

  
  /*
   * id: _29667
   */
  if(args.Length() == 1 && args[0]->IsNumber()) {
    long int pos = (long int)args[0]->ToInt32()->Value(); /* type: _592  */
    

    self->SetInsertionPoint(pos);

    return v8::Undefined();
  }
  

  std::ostringstream errStr;
  errStr << "Could not find matching method for arguments (method name: wxTextEntry::SetInsertionPoint).\n";
  errStr << "  arg count: " << args.Length() << "\n";
  for(int i = 0; i < args.Length(); i++) {
    v8::String::AsciiValue argStr(args[i]);
    errStr << "  arg[" << i << "]: " << *argStr << "\n";
  }
  return v8::ThrowException(v8::Exception::TypeError(v8::String::New(errStr.str().c_str())));
}

/*static*/ v8::Handle<v8::Value> wxNode_wxTextEntry::_SetInsertionPointEnd(const v8::Arguments& args) {
  v8::HandleScope scope;
  wxNode_wxTextEntry* self = unwrap<wxNode_wxTextEntry>(args.This());

  
  /*
   * id: _29668
   */
  if(args.Length() == 0) {
    

    self->SetInsertionPointEnd();

    return v8::Undefined();
  }
  

  std::ostringstream errStr;
  errStr << "Could not find matching method for arguments (method name: wxTextEntry::SetInsertionPointEnd).\n";
  errStr << "  arg count: " << args.Length() << "\n";
  for(int i = 0; i < args.Length(); i++) {
    v8::String::AsciiValue argStr(args[i]);
    errStr << "  arg[" << i << "]: " << *argStr << "\n";
  }
  return v8::ThrowException(v8::Exception::TypeError(v8::String::New(errStr.str().c_str())));
}

/*static*/ v8::Handle<v8::Value> wxNode_wxTextEntry::_GetInsertionPoint(const v8::Arguments& args) {
  v8::HandleScope scope;
  wxNode_wxTextEntry* self = unwrap<wxNode_wxTextEntry>(args.This());

  
  /*
   * id: _29669
   */
  if(args.Length() == 0) {
    

    int returnVal = self->GetInsertionPoint();

    return scope.Close(v8::Number::New(returnVal));
  }
  

  std::ostringstream errStr;
  errStr << "Could not find matching method for arguments (method name: wxTextEntry::GetInsertionPoint).\n";
  errStr << "  arg count: " << args.Length() << "\n";
  for(int i = 0; i < args.Length(); i++) {
    v8::String::AsciiValue argStr(args[i]);
    errStr << "  arg[" << i << "]: " << *argStr << "\n";
  }
  return v8::ThrowException(v8::Exception::TypeError(v8::String::New(errStr.str().c_str())));
}

/*static*/ v8::Handle<v8::Value> wxNode_wxTextEntry::_GetLastPosition(const v8::Arguments& args) {
  v8::HandleScope scope;
  wxNode_wxTextEntry* self = unwrap<wxNode_wxTextEntry>(args.This());

  
  /*
   * id: _29670
   */
  if(args.Length() == 0) {
    

    int returnVal = self->GetLastPosition();

    return scope.Close(v8::Number::New(returnVal));
  }
  

  std::ostringstream errStr;
  errStr << "Could not find matching method for arguments (method name: wxTextEntry::GetLastPosition).\n";
  errStr << "  arg count: " << args.Length() << "\n";
  for(int i = 0; i < args.Length(); i++) {
    v8::String::AsciiValue argStr(args[i]);
    errStr << "  arg[" << i << "]: " << *argStr << "\n";
  }
  return v8::ThrowException(v8::Exception::TypeError(v8::String::New(errStr.str().c_str())));
}

/*static*/ v8::Handle<v8::Value> wxNode_wxTextEntry::_SetSelection(const v8::Arguments& args) {
  v8::HandleScope scope;
  wxNode_wxTextEntry* self = unwrap<wxNode_wxTextEntry>(args.This());

  
  /*
   * id: _29671
   */
  if(args.Length() == 2 && args[0]->IsNumber() && args[1]->IsNumber()) {
    long int from = (long int)args[0]->ToInt32()->Value(); /* type: _592  */
    long int to = (long int)args[1]->ToInt32()->Value(); /* type: _592  */
    

    self->SetSelection(from, to);

    return v8::Undefined();
  }
  

  std::ostringstream errStr;
  errStr << "Could not find matching method for arguments (method name: wxTextEntry::SetSelection).\n";
  errStr << "  arg count: " << args.Length() << "\n";
  for(int i = 0; i < args.Length(); i++) {
    v8::String::AsciiValue argStr(args[i]);
    errStr << "  arg[" << i << "]: " << *argStr << "\n";
  }
  return v8::ThrowException(v8::Exception::TypeError(v8::String::New(errStr.str().c_str())));
}

/*static*/ v8::Handle<v8::Value> wxNode_wxTextEntry::_SelectAll(const v8::Arguments& args) {
  v8::HandleScope scope;
  wxNode_wxTextEntry* self = unwrap<wxNode_wxTextEntry>(args.This());

  
  /*
   * id: _29672
   */
  if(args.Length() == 0) {
    

    self->SelectAll();

    return v8::Undefined();
  }
  

  std::ostringstream errStr;
  errStr << "Could not find matching method for arguments (method name: wxTextEntry::SelectAll).\n";
  errStr << "  arg count: " << args.Length() << "\n";
  for(int i = 0; i < args.Length(); i++) {
    v8::String::AsciiValue argStr(args[i]);
    errStr << "  arg[" << i << "]: " << *argStr << "\n";
  }
  return v8::ThrowException(v8::Exception::TypeError(v8::String::New(errStr.str().c_str())));
}

/*static*/ v8::Handle<v8::Value> wxNode_wxTextEntry::_GetSelection(const v8::Arguments& args) {
  v8::HandleScope scope;
  wxNode_wxTextEntry* self = unwrap<wxNode_wxTextEntry>(args.This());

  
  /*
   * id: _29673
   */
  if(args.Length() == 2 && false && false) {
    long int from; /* type: _20486 * */
    long int to; /* type: _20486 * */
    

    self->GetSelection(&from, &to);

    return v8::Undefined();
  }
  

  std::ostringstream errStr;
  errStr << "Could not find matching method for arguments (method name: wxTextEntry::GetSelection).\n";
  errStr << "  arg count: " << args.Length() << "\n";
  for(int i = 0; i < args.Length(); i++) {
    v8::String::AsciiValue argStr(args[i]);
    errStr << "  arg[" << i << "]: " << *argStr << "\n";
  }
  return v8::ThrowException(v8::Exception::TypeError(v8::String::New(errStr.str().c_str())));
}

/*static*/ v8::Handle<v8::Value> wxNode_wxTextEntry::_HasSelection(const v8::Arguments& args) {
  v8::HandleScope scope;
  wxNode_wxTextEntry* self = unwrap<wxNode_wxTextEntry>(args.This());

  
  /*
   * id: _29674
   */
  if(args.Length() == 0) {
    

    bool returnVal = self->HasSelection();

    return scope.Close(v8::Boolean::New(returnVal));
  }
  

  std::ostringstream errStr;
  errStr << "Could not find matching method for arguments (method name: wxTextEntry::HasSelection).\n";
  errStr << "  arg count: " << args.Length() << "\n";
  for(int i = 0; i < args.Length(); i++) {
    v8::String::AsciiValue argStr(args[i]);
    errStr << "  arg[" << i << "]: " << *argStr << "\n";
  }
  return v8::ThrowException(v8::Exception::TypeError(v8::String::New(errStr.str().c_str())));
}

/*static*/ v8::Handle<v8::Value> wxNode_wxTextEntry::_GetStringSelection(const v8::Arguments& args) {
  v8::HandleScope scope;
  wxNode_wxTextEntry* self = unwrap<wxNode_wxTextEntry>(args.This());

  
  /*
   * id: _29675
   */
  if(args.Length() == 0) {
    

    wxString returnVal = self->GetStringSelection();

    return scope.Close(v8::String::New(returnVal.mb_str()));
  }
  

  std::ostringstream errStr;
  errStr << "Could not find matching method for arguments (method name: wxTextEntry::GetStringSelection).\n";
  errStr << "  arg count: " << args.Length() << "\n";
  for(int i = 0; i < args.Length(); i++) {
    v8::String::AsciiValue argStr(args[i]);
    errStr << "  arg[" << i << "]: " << *argStr << "\n";
  }
  return v8::ThrowException(v8::Exception::TypeError(v8::String::New(errStr.str().c_str())));
}

/*static*/ v8::Handle<v8::Value> wxNode_wxTextEntry::_AutoComplete(const v8::Arguments& args) {
  v8::HandleScope scope;
  wxNode_wxTextEntry* self = unwrap<wxNode_wxTextEntry>(args.This());

  
  /*
   * id: _29676
   */
  if(args.Length() == 1 && (args[0]->IsNull() || (args[0]->IsObject() && wxNode_wxArrayString::AssignableFrom(args[0]->ToObject()->GetConstructorName())))) {
    wxNode_wxArrayString* choices = args[0]->IsNull() ? NULL : wxNodeObject::unwrap<wxNode_wxArrayString>(args[0]->ToObject()); /* type: _20632  */
    

    bool returnVal = self->AutoComplete(*choices);

    return scope.Close(v8::Boolean::New(returnVal));
  }
  
  /*
   * id: _29679
   */
  if(args.Length() == 1 && (args[0]->IsNull() || (args[0]->IsObject() && wxNode_wxTextCompleter::AssignableFrom(args[0]->ToObject()->GetConstructorName())))) {
    wxNode_wxTextCompleter* completer = args[0]->IsNull() ? NULL : wxNodeObject::unwrap<wxNode_wxTextCompleter>(args[0]->ToObject()); /* type: _63086 * */
    

    bool returnVal = self->AutoComplete(completer);

    return scope.Close(v8::Boolean::New(returnVal));
  }
  

  std::ostringstream errStr;
  errStr << "Could not find matching method for arguments (method name: wxTextEntry::AutoComplete).\n";
  errStr << "  arg count: " << args.Length() << "\n";
  for(int i = 0; i < args.Length(); i++) {
    v8::String::AsciiValue argStr(args[i]);
    errStr << "  arg[" << i << "]: " << *argStr << "\n";
  }
  return v8::ThrowException(v8::Exception::TypeError(v8::String::New(errStr.str().c_str())));
}

/*static*/ v8::Handle<v8::Value> wxNode_wxTextEntry::_AutoCompleteFileNames(const v8::Arguments& args) {
  v8::HandleScope scope;
  wxNode_wxTextEntry* self = unwrap<wxNode_wxTextEntry>(args.This());

  
  /*
   * id: _29677
   */
  if(args.Length() == 0) {
    

    bool returnVal = self->AutoCompleteFileNames();

    return scope.Close(v8::Boolean::New(returnVal));
  }
  

  std::ostringstream errStr;
  errStr << "Could not find matching method for arguments (method name: wxTextEntry::AutoCompleteFileNames).\n";
  errStr << "  arg count: " << args.Length() << "\n";
  for(int i = 0; i < args.Length(); i++) {
    v8::String::AsciiValue argStr(args[i]);
    errStr << "  arg[" << i << "]: " << *argStr << "\n";
  }
  return v8::ThrowException(v8::Exception::TypeError(v8::String::New(errStr.str().c_str())));
}

/*static*/ v8::Handle<v8::Value> wxNode_wxTextEntry::_AutoCompleteDirectories(const v8::Arguments& args) {
  v8::HandleScope scope;
  wxNode_wxTextEntry* self = unwrap<wxNode_wxTextEntry>(args.This());

  
  /*
   * id: _29678
   */
  if(args.Length() == 0) {
    

    bool returnVal = self->AutoCompleteDirectories();

    return scope.Close(v8::Boolean::New(returnVal));
  }
  

  std::ostringstream errStr;
  errStr << "Could not find matching method for arguments (method name: wxTextEntry::AutoCompleteDirectories).\n";
  errStr << "  arg count: " << args.Length() << "\n";
  for(int i = 0; i < args.Length(); i++) {
    v8::String::AsciiValue argStr(args[i]);
    errStr << "  arg[" << i << "]: " << *argStr << "\n";
  }
  return v8::ThrowException(v8::Exception::TypeError(v8::String::New(errStr.str().c_str())));
}

/*static*/ v8::Handle<v8::Value> wxNode_wxTextEntry::_IsEditable(const v8::Arguments& args) {
  v8::HandleScope scope;
  wxNode_wxTextEntry* self = unwrap<wxNode_wxTextEntry>(args.This());

  
  /*
   * id: _29680
   */
  if(args.Length() == 0) {
    

    bool returnVal = self->IsEditable();

    return scope.Close(v8::Boolean::New(returnVal));
  }
  

  std::ostringstream errStr;
  errStr << "Could not find matching method for arguments (method name: wxTextEntry::IsEditable).\n";
  errStr << "  arg count: " << args.Length() << "\n";
  for(int i = 0; i < args.Length(); i++) {
    v8::String::AsciiValue argStr(args[i]);
    errStr << "  arg[" << i << "]: " << *argStr << "\n";
  }
  return v8::ThrowException(v8::Exception::TypeError(v8::String::New(errStr.str().c_str())));
}

/*static*/ v8::Handle<v8::Value> wxNode_wxTextEntry::_SetEditable(const v8::Arguments& args) {
  v8::HandleScope scope;
  wxNode_wxTextEntry* self = unwrap<wxNode_wxTextEntry>(args.This());

  
  /*
   * id: _29681
   */
  if(args.Length() == 1 && args[0]->IsBoolean()) {
    bool editable = args[0]->ToBoolean()->Value(); /* type: _14830  */
    

    self->SetEditable(editable);

    return v8::Undefined();
  }
  

  std::ostringstream errStr;
  errStr << "Could not find matching method for arguments (method name: wxTextEntry::SetEditable).\n";
  errStr << "  arg count: " << args.Length() << "\n";
  for(int i = 0; i < args.Length(); i++) {
    v8::String::AsciiValue argStr(args[i]);
    errStr << "  arg[" << i << "]: " << *argStr << "\n";
  }
  return v8::ThrowException(v8::Exception::TypeError(v8::String::New(errStr.str().c_str())));
}

/*static*/ v8::Handle<v8::Value> wxNode_wxTextEntry::_SetMaxLength(const v8::Arguments& args) {
  v8::HandleScope scope;
  wxNode_wxTextEntry* self = unwrap<wxNode_wxTextEntry>(args.This());

  
  /*
   * id: _29682
   */
  if(args.Length() == 1 && args[0]->IsNumber()) {
    long unsigned int arg0 = (long unsigned int)args[0]->ToInt32()->Value(); /* type: _710  */
    

    self->SetMaxLength(arg0);

    return v8::Undefined();
  }
  

  std::ostringstream errStr;
  errStr << "Could not find matching method for arguments (method name: wxTextEntry::SetMaxLength).\n";
  errStr << "  arg count: " << args.Length() << "\n";
  for(int i = 0; i < args.Length(); i++) {
    v8::String::AsciiValue argStr(args[i]);
    errStr << "  arg[" << i << "]: " << *argStr << "\n";
  }
  return v8::ThrowException(v8::Exception::TypeError(v8::String::New(errStr.str().c_str())));
}

/*static*/ v8::Handle<v8::Value> wxNode_wxTextEntry::_SetHint(const v8::Arguments& args) {
  v8::HandleScope scope;
  wxNode_wxTextEntry* self = unwrap<wxNode_wxTextEntry>(args.This());

  
  /*
   * id: _29683
   */
  if(args.Length() == 1 && args[0]->IsString()) {
    v8::String::AsciiValue hint(args[0]->ToString()); /* type: _14975  */
    

    bool returnVal = self->SetHint(*hint);

    return scope.Close(v8::Boolean::New(returnVal));
  }
  

  std::ostringstream errStr;
  errStr << "Could not find matching method for arguments (method name: wxTextEntry::SetHint).\n";
  errStr << "  arg count: " << args.Length() << "\n";
  for(int i = 0; i < args.Length(); i++) {
    v8::String::AsciiValue argStr(args[i]);
    errStr << "  arg[" << i << "]: " << *argStr << "\n";
  }
  return v8::ThrowException(v8::Exception::TypeError(v8::String::New(errStr.str().c_str())));
}

/*static*/ v8::Handle<v8::Value> wxNode_wxTextEntry::_GetHint(const v8::Arguments& args) {
  v8::HandleScope scope;
  wxNode_wxTextEntry* self = unwrap<wxNode_wxTextEntry>(args.This());

  
  /*
   * id: _29684
   */
  if(args.Length() == 0) {
    

    wxString returnVal = self->GetHint();

    return scope.Close(v8::String::New(returnVal.mb_str()));
  }
  

  std::ostringstream errStr;
  errStr << "Could not find matching method for arguments (method name: wxTextEntry::GetHint).\n";
  errStr << "  arg count: " << args.Length() << "\n";
  for(int i = 0; i < args.Length(); i++) {
    v8::String::AsciiValue argStr(args[i]);
    errStr << "  arg[" << i << "]: " << *argStr << "\n";
  }
  return v8::ThrowException(v8::Exception::TypeError(v8::String::New(errStr.str().c_str())));
}

/*static*/ v8::Handle<v8::Value> wxNode_wxTextEntry::_SetMargins(const v8::Arguments& args) {
  v8::HandleScope scope;
  wxNode_wxTextEntry* self = unwrap<wxNode_wxTextEntry>(args.This());

  
  /*
   * id: _29685
   */
  if(args.Length() == 1 && (args[0]->IsNull() || (args[0]->IsObject() && wxNode_wxPoint::AssignableFrom(args[0]->ToObject()->GetConstructorName())))) {
    wxNode_wxPoint* pt = args[0]->IsNull() ? NULL : wxNodeObject::unwrap<wxNode_wxPoint>(args[0]->ToObject()); /* type: _20518  */
    

    bool returnVal = self->SetMargins(*pt);

    return scope.Close(v8::Boolean::New(returnVal));
  }
  
  /*
   * id: _29686
   */
  if(args.Length() == 2 && args[0]->IsNumber() && args[1]->IsNumber()) {
    int left = (int)args[0]->ToInt32()->Value(); /* type: _12231  */
    int top = (int)args[1]->ToInt32()->Value(); /* type: _12231  */
    

    bool returnVal = self->SetMargins(left, top);

    return scope.Close(v8::Boolean::New(returnVal));
  }
  
  /*
   * id: _29686
   */
  if(args.Length() == 1 && args[0]->IsNumber()) {
    int left = (int)args[0]->ToInt32()->Value(); /* type: _12231  */
    

    bool returnVal = self->SetMargins(left);

    return scope.Close(v8::Boolean::New(returnVal));
  }
  

  std::ostringstream errStr;
  errStr << "Could not find matching method for arguments (method name: wxTextEntry::SetMargins).\n";
  errStr << "  arg count: " << args.Length() << "\n";
  for(int i = 0; i < args.Length(); i++) {
    v8::String::AsciiValue argStr(args[i]);
    errStr << "  arg[" << i << "]: " << *argStr << "\n";
  }
  return v8::ThrowException(v8::Exception::TypeError(v8::String::New(errStr.str().c_str())));
}

/*static*/ v8::Handle<v8::Value> wxNode_wxTextEntry::_GetMargins(const v8::Arguments& args) {
  v8::HandleScope scope;
  wxNode_wxTextEntry* self = unwrap<wxNode_wxTextEntry>(args.This());

  
  /*
   * id: _29687
   */
  if(args.Length() == 0) {
    

    wxPoint returnVal = self->GetMargins();

    return scope.Close(wxNode_wxPoint::NewCopy(returnVal));
  }
  

  std::ostringstream errStr;
  errStr << "Could not find matching method for arguments (method name: wxTextEntry::GetMargins).\n";
  errStr << "  arg count: " << args.Length() << "\n";
  for(int i = 0; i < args.Length(); i++) {
    v8::String::AsciiValue argStr(args[i]);
    errStr << "  arg[" << i << "]: " << *argStr << "\n";
  }
  return v8::ThrowException(v8::Exception::TypeError(v8::String::New(errStr.str().c_str())));
}

/*static*/ v8::Handle<v8::Value> wxNode_wxTextEntry::_SendTextUpdatedEvent(const v8::Arguments& args) {
  v8::HandleScope scope;
  wxNode_wxTextEntry* self = unwrap<wxNode_wxTextEntry>(args.This());

  
  /*
   * id: _29688
   */
  if(args.Length() == 1 && (args[0]->IsNull() || (args[0]->IsObject() && wxNode_wxWindow::AssignableFrom(args[0]->ToObject()->GetConstructorName())))) {
    wxNode_wxWindow* win = args[0]->IsNull() ? NULL : wxNodeObject::unwrap<wxNode_wxWindow>(args[0]->ToObject()); /* type: _1000 * */
    

    bool returnVal = wxTextEntry::SendTextUpdatedEvent(win);

    return scope.Close(v8::Boolean::New(returnVal));
  }
  
  /*
   * id: _29689
   */
  if(args.Length() == 0) {
    

    bool returnVal = self->SendTextUpdatedEvent();

    return scope.Close(v8::Boolean::New(returnVal));
  }
  

  std::ostringstream errStr;
  errStr << "Could not find matching method for arguments (method name: wxTextEntry::SendTextUpdatedEvent).\n";
  errStr << "  arg count: " << args.Length() << "\n";
  for(int i = 0; i < args.Length(); i++) {
    v8::String::AsciiValue argStr(args[i]);
    errStr << "  arg[" << i << "]: " << *argStr << "\n";
  }
  return v8::ThrowException(v8::Exception::TypeError(v8::String::New(errStr.str().c_str())));
}

/*static*/ v8::Handle<v8::Value> wxNode_wxTextEntry::_SendTextUpdatedEventIfAllowed(const v8::Arguments& args) {
  v8::HandleScope scope;
  wxNode_wxTextEntry* self = unwrap<wxNode_wxTextEntry>(args.This());

  
  /*
   * id: _29690
   */
  if(args.Length() == 0) {
    

    self->SendTextUpdatedEventIfAllowed();

    return v8::Undefined();
  }
  

  std::ostringstream errStr;
  errStr << "Could not find matching method for arguments (method name: wxTextEntry::SendTextUpdatedEventIfAllowed).\n";
  errStr << "  arg count: " << args.Length() << "\n";
  for(int i = 0; i < args.Length(); i++) {
    v8::String::AsciiValue argStr(args[i]);
    errStr << "  arg[" << i << "]: " << *argStr << "\n";
  }
  return v8::ThrowException(v8::Exception::TypeError(v8::String::New(errStr.str().c_str())));
}

/*static*/ v8::Handle<v8::Value> wxNode_wxTextEntry::_ForwardEnableTextChangedEvents(const v8::Arguments& args) {
  v8::HandleScope scope;
  wxNode_wxTextEntry* self = unwrap<wxNode_wxTextEntry>(args.This());

  
  /*
   * id: _29691
   */
  if(args.Length() == 1 && args[0]->IsBoolean()) {
    bool enable = args[0]->ToBoolean()->Value(); /* type: _14830  */
    

    self->ForwardEnableTextChangedEvents(enable);

    return v8::Undefined();
  }
  

  std::ostringstream errStr;
  errStr << "Could not find matching method for arguments (method name: wxTextEntry::ForwardEnableTextChangedEvents).\n";
  errStr << "  arg count: " << args.Length() << "\n";
  for(int i = 0; i < args.Length(); i++) {
    v8::String::AsciiValue argStr(args[i]);
    errStr << "  arg[" << i << "]: " << *argStr << "\n";
  }
  return v8::ThrowException(v8::Exception::TypeError(v8::String::New(errStr.str().c_str())));
}



