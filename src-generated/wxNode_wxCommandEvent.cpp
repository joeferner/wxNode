
#include <sstream>
#include "wxNode_wxCommandEvent.h"
#include "wxNode_wxEvtHandler.h"
#include "wxNode_wxEvent.h"
#include "wxNode_wxClientData.h"
#include "wxNode_wxClassInfo.h"
#include "wxNode_wxObject.h"


/* static */ v8::Persistent<v8::FunctionTemplate> wxNode_wxCommandEvent::s_ct;



wxNode_wxCommandEvent::wxNode_wxCommandEvent(int commandType, int winid)
  : wxCommandEvent(commandType, winid)
{

}

wxNode_wxCommandEvent::wxNode_wxCommandEvent(int commandType)
  : wxCommandEvent(commandType)
{

}

wxNode_wxCommandEvent::wxNode_wxCommandEvent()
  : wxCommandEvent()
{

}

wxNode_wxCommandEvent::wxNode_wxCommandEvent(wxCommandEvent& event)
  : wxCommandEvent(event)
{

}




/*static*/ void wxNode_wxCommandEvent::Init(v8::Handle<v8::Object> target) {
  v8::HandleScope scope;

  v8::Local<v8::FunctionTemplate> t = v8::FunctionTemplate::New(wxNodeObject::NewFunc);
  s_ct = v8::Persistent<v8::FunctionTemplate>::New(t);
  s_ct->InstanceTemplate()->SetInternalFieldCount(2);
  s_ct->SetClassName(v8::String::NewSymbol("CommandEvent"));

  NODE_SET_PROTOTYPE_METHOD(s_ct, "init", _init);
  AddMethods(s_ct);

  target->Set(v8::String::NewSymbol("CommandEvent"), s_ct->GetFunction());
}

/*static*/ void wxNode_wxCommandEvent::AddMethods(v8::Handle<v8::FunctionTemplate> target) {
  wxNode_wxEvent::AddMethods(target);
  NODE_SET_PROTOTYPE_METHOD(target, "setClientData", _SetClientData);
  NODE_SET_PROTOTYPE_METHOD(target, "getClientData", _GetClientData);
  NODE_SET_PROTOTYPE_METHOD(target, "setClientObject", _SetClientObject);
  NODE_SET_PROTOTYPE_METHOD(target, "getClientObject", _GetClientObject);
  NODE_SET_PROTOTYPE_METHOD(target, "getString", _GetString);
  NODE_SET_PROTOTYPE_METHOD(target, "getSelection", _GetSelection);
  NODE_SET_PROTOTYPE_METHOD(target, "isChecked", _IsChecked);
  NODE_SET_PROTOTYPE_METHOD(target, "isSelection", _IsSelection);
  NODE_SET_PROTOTYPE_METHOD(target, "clone", _Clone);
  NODE_SET_PROTOTYPE_METHOD(target, "getEventCategory", _GetEventCategory);
  NODE_SET_PROTOTYPE_METHOD(target, "getClassInfo", _GetClassInfo);
  NODE_SET_METHOD(target, "wxCreateObject", _wxCreateObject);
  
}

/*static*/ v8::Handle<v8::Value> wxNode_wxCommandEvent::New(const wxNode_wxCommandEvent* obj) {
  v8::HandleScope scope;

  if(obj == NULL) {
    return scope.Close(v8::Null());
  }
  
  v8::Local<v8::FunctionTemplate> returnObjFt = v8::FunctionTemplate::New(wxNodeObject::NewFunc);
  returnObjFt->InstanceTemplate()->SetInternalFieldCount(2);
  returnObjFt->SetClassName(v8::String::NewSymbol("CommandEvent"));
  wxNode_wxCommandEvent::AddMethods(returnObjFt);

  v8::Local<v8::Function> returnObjFn = returnObjFt->GetFunction();
  v8::Handle<v8::Value> returnObjArgs[0];
  v8::Local<v8::Object> returnObj = returnObjFn->CallAsConstructor(0, returnObjArgs)->ToObject();
  returnObj->SetPointerInInternalField(0, (void*)obj);
  NodeExEvtHandlerImpl* evtHandler = dynamic_cast<NodeExEvtHandlerImpl*>((wxNode_wxCommandEvent*)obj);
  returnObj->SetPointerInInternalField(1, evtHandler);

  return scope.Close(returnObj);
}

/*static*/ v8::Handle<v8::Value> wxNode_wxCommandEvent::New(const wxCommandEvent* obj) {
  v8::HandleScope scope;

  if(obj == NULL) {
    return scope.Close(v8::Null());
  }
  
  v8::Local<v8::FunctionTemplate> returnObjFt = v8::FunctionTemplate::New(wxNodeObject::NewFunc);
  returnObjFt->InstanceTemplate()->SetInternalFieldCount(2);
  returnObjFt->SetClassName(v8::String::NewSymbol("CommandEvent"));
  wxNode_wxCommandEvent::AddMethods(returnObjFt);

  v8::Local<v8::Function> returnObjFn = returnObjFt->GetFunction();
  v8::Handle<v8::Value> returnObjArgs[0];
  v8::Local<v8::Object> returnObj = returnObjFn->CallAsConstructor(0, returnObjArgs)->ToObject();
  returnObj->SetPointerInInternalField(0, (void*)obj);
  NodeExEvtHandlerImplWrap* wrap = new NodeExEvtHandlerImplWrap(returnObj);
  NodeExEvtHandlerImpl* evtHandler = dynamic_cast<NodeExEvtHandlerImpl*>(wrap);
  returnObj->SetPointerInInternalField(1, evtHandler);

  return scope.Close(returnObj);
}

/*static*/ v8::Handle<v8::Value> wxNode_wxCommandEvent::NewCopy(const wxCommandEvent& obj) {
  v8::HandleScope scope;
  wxNode_wxCommandEvent* returnVal = new wxNode_wxCommandEvent();
  memcpy(dynamic_cast<wxCommandEvent*>(returnVal), &obj, sizeof(wxCommandEvent));
  return scope.Close(New(returnVal));

}

/*static*/ bool wxNode_wxCommandEvent::AssignableFrom(const v8::Handle<v8::String>& className) {
  v8::String::AsciiValue classNameStr(className);
  return AssignableFrom(*classNameStr);
}

/*static*/ bool wxNode_wxCommandEvent::AssignableFrom(const char* className) {
  if(!strcmp("CommandEvent", className)) { return true; }
  
  if(!strcmp("ContextMenuEvent", className)) { return true; }
  if(!strcmp("WindowModalDialogEvent", className)) { return true; }
  if(!strcmp("TextUrlEvent", className)) { return true; }
  if(!strcmp("ClipboardTextEvent", className)) { return true; }
  if(!strcmp("WindowCreateEvent", className)) { return true; }
  if(!strcmp("HyperlinkEvent", className)) { return true; }
  if(!strcmp("NotifyEvent", className)) { return true; }

  if(!strcmp("BookCtrlEvent", className)) { return true; }

  if(!strcmp("AuiNotebookEvent", className)) { return true; }
  if(!strcmp("SplitterEvent", className)) { return true; }
  if(!strcmp("WizardEvent", className)) { return true; }
  if(!strcmp("HeaderCtrlEvent", className)) { return true; }
  if(!strcmp("TreeEvent", className)) { return true; }
  if(!strcmp("GridEvent", className)) { return true; }
  if(!strcmp("SpinEvent", className)) { return true; }
  if(!strcmp("TreeListEvent", className)) { return true; }
  if(!strcmp("RichTextEvent", className)) { return true; }
  if(!strcmp("DataViewEvent", className)) { return true; }
  if(!strcmp("GridSizeEvent", className)) { return true; }
  if(!strcmp("WebViewEvent", className)) { return true; }
  if(!strcmp("AuiToolBarEvent", className)) { return true; }
  if(!strcmp("ListEvent", className)) { return true; }
  if(!strcmp("GridRangeSelectEvent", className)) { return true; }
  if(!strcmp("SpinDoubleEvent", className)) { return true; }
  if(!strcmp("GridEditorCreatedEvent", className)) { return true; }
  if(!strcmp("FileCtrlEvent", className)) { return true; }
  if(!strcmp("HtmlLinkEvent", className)) { return true; }
  if(!strcmp("FileDirPickerEvent", className)) { return true; }
  if(!strcmp("FindDialogEvent", className)) { return true; }
  if(!strcmp("ColourPickerEvent", className)) { return true; }
  if(!strcmp("ChildFocusEvent", className)) { return true; }
  if(!strcmp("DateEvent", className)) { return true; }

  if(!strcmp("CalendarEvent", className)) { return true; }
  if(!strcmp("ScrollEvent", className)) { return true; }
  if(!strcmp("HtmlCellEvent", className)) { return true; }
  if(!strcmp("StyledTextEvent", className)) { return true; }
  if(!strcmp("SashEvent", className)) { return true; }
  if(!strcmp("HelpEvent", className)) { return true; }
  if(!strcmp("CollapsiblePaneEvent", className)) { return true; }
  if(!strcmp("WindowDestroyEvent", className)) { return true; }
  if(!strcmp("FontPickerEvent", className)) { return true; }
  if(!strcmp("UpdateUIEvent", className)) { return true; }


  return false;
}

/*static*/ v8::Handle<v8::Value> wxNode_wxCommandEvent::_init(const v8::Arguments& args) {
  v8::HandleScope scope;

  
  
  /*
   * id: _16540
   */
  if(args.Length() == 2 && args[0]->IsNumber() && args[1]->IsNumber()) {
    int commandType = (int)args[0]->ToInt32()->Value(); /* type: _986  */
    int winid = (int)args[1]->ToInt32()->Value(); /* type: _165  */
    

    wxNode_wxCommandEvent *self = new wxNode_wxCommandEvent(commandType, winid);
    NodeExEvtHandlerImpl* evtHandler = dynamic_cast<NodeExEvtHandlerImpl*>(self);
    self->wrap(args.This(), self, evtHandler);
    return args.This();
  }
  
  /*
   * id: _16540
   */
  if(args.Length() == 1 && args[0]->IsNumber()) {
    int commandType = (int)args[0]->ToInt32()->Value(); /* type: _986  */
    

    wxNode_wxCommandEvent *self = new wxNode_wxCommandEvent(commandType);
    NodeExEvtHandlerImpl* evtHandler = dynamic_cast<NodeExEvtHandlerImpl*>(self);
    self->wrap(args.This(), self, evtHandler);
    return args.This();
  }
  
  /*
   * id: _16540
   */
  if(args.Length() == 0) {
    

    wxNode_wxCommandEvent *self = new wxNode_wxCommandEvent();
    NodeExEvtHandlerImpl* evtHandler = dynamic_cast<NodeExEvtHandlerImpl*>(self);
    self->wrap(args.This(), self, evtHandler);
    return args.This();
  }
  
  /*
   * id: _16541
   */
  if(args.Length() == 1 && (args[0]->IsNull() || (args[0]->IsObject() && wxNode_wxCommandEvent::AssignableFrom(args[0]->ToObject()->GetConstructorName())))) {
    wxNode_wxCommandEvent* event = args[0]->IsNull() ? NULL : wxNodeObject::unwrap<wxNode_wxCommandEvent>(args[0]->ToObject()); /* type: _59310  */
    

    wxNode_wxCommandEvent *self = new wxNode_wxCommandEvent(*event);
    NodeExEvtHandlerImpl* evtHandler = dynamic_cast<NodeExEvtHandlerImpl*>(self);
    self->wrap(args.This(), self, evtHandler);
    return args.This();
  }
  
  

  std::ostringstream errStr;
  errStr << "Could not find matching constructor for arguments (class name: wxCommandEvent).\n";
  errStr << "  arg count: " << args.Length() << "\n";
  for(int i = 0; i < args.Length(); i++) {
    v8::String::AsciiValue argStr(args[i]);
    errStr << "  arg[" << i << "]: " << *argStr << "\n";
  }
  return v8::ThrowException(v8::Exception::TypeError(v8::String::New(errStr.str().c_str())));
}


/*static*/ v8::Handle<v8::Value> wxNode_wxCommandEvent::_SetClientData(const v8::Arguments& args) {
  v8::HandleScope scope;
  wxNode_wxCommandEvent* self = unwrap<wxNode_wxCommandEvent>(args.This());

  

  std::ostringstream errStr;
  errStr << "Could not find matching method for arguments (method name: wxCommandEvent::SetClientData).\n";
  errStr << "  arg count: " << args.Length() << "\n";
  for(int i = 0; i < args.Length(); i++) {
    v8::String::AsciiValue argStr(args[i]);
    errStr << "  arg[" << i << "]: " << *argStr << "\n";
  }
  return v8::ThrowException(v8::Exception::TypeError(v8::String::New(errStr.str().c_str())));
}

/*static*/ v8::Handle<v8::Value> wxNode_wxCommandEvent::_GetClientData(const v8::Arguments& args) {
  v8::HandleScope scope;
  wxNode_wxCommandEvent* self = unwrap<wxNode_wxCommandEvent>(args.This());

  
  /*
   * id: _16543
   */
  if(args.Length() == 0) {
    

    self->GetClientData();

    return v8::Undefined();
  }
  

  std::ostringstream errStr;
  errStr << "Could not find matching method for arguments (method name: wxCommandEvent::GetClientData).\n";
  errStr << "  arg count: " << args.Length() << "\n";
  for(int i = 0; i < args.Length(); i++) {
    v8::String::AsciiValue argStr(args[i]);
    errStr << "  arg[" << i << "]: " << *argStr << "\n";
  }
  return v8::ThrowException(v8::Exception::TypeError(v8::String::New(errStr.str().c_str())));
}

/*static*/ v8::Handle<v8::Value> wxNode_wxCommandEvent::_SetClientObject(const v8::Arguments& args) {
  v8::HandleScope scope;
  wxNode_wxCommandEvent* self = unwrap<wxNode_wxCommandEvent>(args.This());

  
  /*
   * id: _16544
   */
  if(args.Length() == 1 && (args[0]->IsNull() || (args[0]->IsObject() && wxNode_wxClientData::AssignableFrom(args[0]->ToObject()->GetConstructorName())))) {
    wxNode_wxClientData* clientObject = args[0]->IsNull() ? NULL : wxNodeObject::unwrap<wxNode_wxClientData>(args[0]->ToObject()); /* type: _59309 * */
    

    self->SetClientObject(clientObject);

    return v8::Undefined();
  }
  

  std::ostringstream errStr;
  errStr << "Could not find matching method for arguments (method name: wxCommandEvent::SetClientObject).\n";
  errStr << "  arg count: " << args.Length() << "\n";
  for(int i = 0; i < args.Length(); i++) {
    v8::String::AsciiValue argStr(args[i]);
    errStr << "  arg[" << i << "]: " << *argStr << "\n";
  }
  return v8::ThrowException(v8::Exception::TypeError(v8::String::New(errStr.str().c_str())));
}

/*static*/ v8::Handle<v8::Value> wxNode_wxCommandEvent::_GetClientObject(const v8::Arguments& args) {
  v8::HandleScope scope;
  wxNode_wxCommandEvent* self = unwrap<wxNode_wxCommandEvent>(args.This());

  
  /*
   * id: _16545
   */
  if(args.Length() == 0) {
    

    wxClientData* returnVal = self->GetClientObject();

    return scope.Close(wxNode_wxClientData::New(returnVal));
  }
  

  std::ostringstream errStr;
  errStr << "Could not find matching method for arguments (method name: wxCommandEvent::GetClientObject).\n";
  errStr << "  arg count: " << args.Length() << "\n";
  for(int i = 0; i < args.Length(); i++) {
    v8::String::AsciiValue argStr(args[i]);
    errStr << "  arg[" << i << "]: " << *argStr << "\n";
  }
  return v8::ThrowException(v8::Exception::TypeError(v8::String::New(errStr.str().c_str())));
}

/*static*/ v8::Handle<v8::Value> wxNode_wxCommandEvent::_GetString(const v8::Arguments& args) {
  v8::HandleScope scope;
  wxNode_wxCommandEvent* self = unwrap<wxNode_wxCommandEvent>(args.This());

  
  /*
   * id: _16546
   */
  if(args.Length() == 0) {
    

    wxString returnVal = self->GetString();

    return scope.Close(v8::String::New(returnVal.mb_str()));
  }
  

  std::ostringstream errStr;
  errStr << "Could not find matching method for arguments (method name: wxCommandEvent::GetString).\n";
  errStr << "  arg count: " << args.Length() << "\n";
  for(int i = 0; i < args.Length(); i++) {
    v8::String::AsciiValue argStr(args[i]);
    errStr << "  arg[" << i << "]: " << *argStr << "\n";
  }
  return v8::ThrowException(v8::Exception::TypeError(v8::String::New(errStr.str().c_str())));
}

/*static*/ v8::Handle<v8::Value> wxNode_wxCommandEvent::_GetSelection(const v8::Arguments& args) {
  v8::HandleScope scope;
  wxNode_wxCommandEvent* self = unwrap<wxNode_wxCommandEvent>(args.This());

  
  /*
   * id: _16547
   */
  if(args.Length() == 0) {
    

    int returnVal = self->GetSelection();

    return scope.Close(v8::Number::New(returnVal));
  }
  

  std::ostringstream errStr;
  errStr << "Could not find matching method for arguments (method name: wxCommandEvent::GetSelection).\n";
  errStr << "  arg count: " << args.Length() << "\n";
  for(int i = 0; i < args.Length(); i++) {
    v8::String::AsciiValue argStr(args[i]);
    errStr << "  arg[" << i << "]: " << *argStr << "\n";
  }
  return v8::ThrowException(v8::Exception::TypeError(v8::String::New(errStr.str().c_str())));
}

/*static*/ v8::Handle<v8::Value> wxNode_wxCommandEvent::_IsChecked(const v8::Arguments& args) {
  v8::HandleScope scope;
  wxNode_wxCommandEvent* self = unwrap<wxNode_wxCommandEvent>(args.This());

  
  /*
   * id: _16548
   */
  if(args.Length() == 0) {
    

    bool returnVal = self->IsChecked();

    return scope.Close(v8::Boolean::New(returnVal));
  }
  

  std::ostringstream errStr;
  errStr << "Could not find matching method for arguments (method name: wxCommandEvent::IsChecked).\n";
  errStr << "  arg count: " << args.Length() << "\n";
  for(int i = 0; i < args.Length(); i++) {
    v8::String::AsciiValue argStr(args[i]);
    errStr << "  arg[" << i << "]: " << *argStr << "\n";
  }
  return v8::ThrowException(v8::Exception::TypeError(v8::String::New(errStr.str().c_str())));
}

/*static*/ v8::Handle<v8::Value> wxNode_wxCommandEvent::_IsSelection(const v8::Arguments& args) {
  v8::HandleScope scope;
  wxNode_wxCommandEvent* self = unwrap<wxNode_wxCommandEvent>(args.This());

  
  /*
   * id: _16549
   */
  if(args.Length() == 0) {
    

    bool returnVal = self->IsSelection();

    return scope.Close(v8::Boolean::New(returnVal));
  }
  

  std::ostringstream errStr;
  errStr << "Could not find matching method for arguments (method name: wxCommandEvent::IsSelection).\n";
  errStr << "  arg count: " << args.Length() << "\n";
  for(int i = 0; i < args.Length(); i++) {
    v8::String::AsciiValue argStr(args[i]);
    errStr << "  arg[" << i << "]: " << *argStr << "\n";
  }
  return v8::ThrowException(v8::Exception::TypeError(v8::String::New(errStr.str().c_str())));
}

/*static*/ v8::Handle<v8::Value> wxNode_wxCommandEvent::_Clone(const v8::Arguments& args) {
  v8::HandleScope scope;
  wxNode_wxCommandEvent* self = unwrap<wxNode_wxCommandEvent>(args.This());

  
  /*
   * id: _16550
   */
  if(args.Length() == 0) {
    

    wxEvent* returnVal = self->Clone();

    return scope.Close(wxNode_wxEvent::New(returnVal));
  }
  

  std::ostringstream errStr;
  errStr << "Could not find matching method for arguments (method name: wxCommandEvent::Clone).\n";
  errStr << "  arg count: " << args.Length() << "\n";
  for(int i = 0; i < args.Length(); i++) {
    v8::String::AsciiValue argStr(args[i]);
    errStr << "  arg[" << i << "]: " << *argStr << "\n";
  }
  return v8::ThrowException(v8::Exception::TypeError(v8::String::New(errStr.str().c_str())));
}

/*static*/ v8::Handle<v8::Value> wxNode_wxCommandEvent::_GetEventCategory(const v8::Arguments& args) {
  v8::HandleScope scope;
  wxNode_wxCommandEvent* self = unwrap<wxNode_wxCommandEvent>(args.This());

  
  /*
   * id: _16551
   */
  if(args.Length() == 0) {
    

    int returnVal = (int)self->GetEventCategory();

    return scope.Close(v8::Number::New(returnVal));
  }
  

  std::ostringstream errStr;
  errStr << "Could not find matching method for arguments (method name: wxCommandEvent::GetEventCategory).\n";
  errStr << "  arg count: " << args.Length() << "\n";
  for(int i = 0; i < args.Length(); i++) {
    v8::String::AsciiValue argStr(args[i]);
    errStr << "  arg[" << i << "]: " << *argStr << "\n";
  }
  return v8::ThrowException(v8::Exception::TypeError(v8::String::New(errStr.str().c_str())));
}

/*static*/ v8::Handle<v8::Value> wxNode_wxCommandEvent::_GetClassInfo(const v8::Arguments& args) {
  v8::HandleScope scope;
  wxNode_wxCommandEvent* self = unwrap<wxNode_wxCommandEvent>(args.This());

  
  /*
   * id: _16553
   */
  if(args.Length() == 0) {
    

    wxClassInfo* returnVal = self->GetClassInfo();

    return scope.Close(wxNode_wxClassInfo::New(returnVal));
  }
  

  std::ostringstream errStr;
  errStr << "Could not find matching method for arguments (method name: wxCommandEvent::GetClassInfo).\n";
  errStr << "  arg count: " << args.Length() << "\n";
  for(int i = 0; i < args.Length(); i++) {
    v8::String::AsciiValue argStr(args[i]);
    errStr << "  arg[" << i << "]: " << *argStr << "\n";
  }
  return v8::ThrowException(v8::Exception::TypeError(v8::String::New(errStr.str().c_str())));
}

/*static*/ v8::Handle<v8::Value> wxNode_wxCommandEvent::_wxCreateObject(const v8::Arguments& args) {
  v8::HandleScope scope;
  wxNode_wxCommandEvent* self = unwrap<wxNode_wxCommandEvent>(args.This());

  
  /*
   * id: _16554
   */
  if(args.Length() == 0) {
    

    wxObject* returnVal = wxCommandEvent::wxCreateObject();

    return scope.Close(wxNode_wxObject::New(returnVal));
  }
  

  std::ostringstream errStr;
  errStr << "Could not find matching method for arguments (method name: wxCommandEvent::wxCreateObject).\n";
  errStr << "  arg count: " << args.Length() << "\n";
  for(int i = 0; i < args.Length(); i++) {
    v8::String::AsciiValue argStr(args[i]);
    errStr << "  arg[" << i << "]: " << *argStr << "\n";
  }
  return v8::ThrowException(v8::Exception::TypeError(v8::String::New(errStr.str().c_str())));
}

