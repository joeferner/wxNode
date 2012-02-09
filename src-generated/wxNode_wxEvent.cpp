
#include <sstream>
#include "wxNode_wxEvent.h"
#include "wxNode_wxEvtHandler.h"
#include "wxNode_wxObject.h"
#include "wxNode_wxClassInfo.h"


/* static */ v8::Persistent<v8::FunctionTemplate> wxNode_wxEvent::s_ct;




/*static*/ void wxNode_wxEvent::Init(v8::Handle<v8::Object> target) {
  v8::HandleScope scope;

  v8::Local<v8::FunctionTemplate> t = v8::FunctionTemplate::New(wxNodeObject::NewFunc);
  s_ct = v8::Persistent<v8::FunctionTemplate>::New(t);
  s_ct->InstanceTemplate()->SetInternalFieldCount(2);
  s_ct->SetClassName(v8::String::NewSymbol("wxEvent"));

  NODE_SET_PROTOTYPE_METHOD(s_ct, "init", _init);
  AddMethods(s_ct);

  target->Set(v8::String::NewSymbol("wxEvent"), s_ct->GetFunction());
}

/*static*/ void wxNode_wxEvent::AddMethods(v8::Handle<v8::FunctionTemplate> target) {
  wxNode_wxObject::AddMethods(target);
  NODE_SET_PROTOTYPE_METHOD(target, "setEventType", _SetEventType);
  NODE_SET_PROTOTYPE_METHOD(target, "getEventType", _GetEventType);
  NODE_SET_PROTOTYPE_METHOD(target, "getEventObject", _GetEventObject);
  NODE_SET_PROTOTYPE_METHOD(target, "setEventObject", _SetEventObject);
  NODE_SET_PROTOTYPE_METHOD(target, "getTimestamp", _GetTimestamp);
  NODE_SET_PROTOTYPE_METHOD(target, "setTimestamp", _SetTimestamp);
  NODE_SET_PROTOTYPE_METHOD(target, "getId", _GetId);
  NODE_SET_PROTOTYPE_METHOD(target, "setId", _SetId);
  NODE_SET_PROTOTYPE_METHOD(target, "skip", _Skip);
  NODE_SET_PROTOTYPE_METHOD(target, "getSkipped", _GetSkipped);
  NODE_SET_PROTOTYPE_METHOD(target, "clone", _Clone);
  NODE_SET_PROTOTYPE_METHOD(target, "getEventCategory", _GetEventCategory);
  NODE_SET_PROTOTYPE_METHOD(target, "isCommandEvent", _IsCommandEvent);
  NODE_SET_PROTOTYPE_METHOD(target, "shouldPropagate", _ShouldPropagate);
  NODE_SET_PROTOTYPE_METHOD(target, "stopPropagation", _StopPropagation);
  NODE_SET_PROTOTYPE_METHOD(target, "resumePropagation", _ResumePropagation);
  NODE_SET_PROTOTYPE_METHOD(target, "wasProcessed", _WasProcessed);
  NODE_SET_PROTOTYPE_METHOD(target, "shouldProcessOnlyIn", _ShouldProcessOnlyIn);
  NODE_SET_PROTOTYPE_METHOD(target, "didntHonourProcessOnlyIn", _DidntHonourProcessOnlyIn);
  NODE_SET_PROTOTYPE_METHOD(target, "getClassInfo", _GetClassInfo);
  
}

/*static*/ v8::Handle<v8::Value> wxNode_wxEvent::New(const wxNode_wxEvent* obj) {
  v8::HandleScope scope;

  if(obj == NULL) {
    return scope.Close(v8::Null());
  }
  
  v8::Local<v8::FunctionTemplate> returnObjFt = v8::FunctionTemplate::New(wxNodeObject::NewFunc);
  returnObjFt->InstanceTemplate()->SetInternalFieldCount(2);
  returnObjFt->SetClassName(v8::String::NewSymbol("wxEvent"));
  wxNode_wxEvent::AddMethods(returnObjFt);

  v8::Local<v8::Function> returnObjFn = returnObjFt->GetFunction();
  v8::Handle<v8::Value> returnObjArgs[0];
  v8::Local<v8::Object> returnObj = returnObjFn->CallAsConstructor(0, returnObjArgs)->ToObject();
  returnObj->SetPointerInInternalField(0, (void*)obj);
  NodeExEvtHandlerImpl* evtHandler = dynamic_cast<NodeExEvtHandlerImpl*>((wxNode_wxEvent*)obj);
  returnObj->SetPointerInInternalField(1, evtHandler);

  return scope.Close(returnObj);
}

/*static*/ v8::Handle<v8::Value> wxNode_wxEvent::New(const wxEvent* obj) {
  v8::HandleScope scope;

  if(obj == NULL) {
    return scope.Close(v8::Null());
  }
  
  v8::Local<v8::FunctionTemplate> returnObjFt = v8::FunctionTemplate::New(wxNodeObject::NewFunc);
  returnObjFt->InstanceTemplate()->SetInternalFieldCount(2);
  returnObjFt->SetClassName(v8::String::NewSymbol("wxEvent"));
  wxNode_wxEvent::AddMethods(returnObjFt);

  v8::Local<v8::Function> returnObjFn = returnObjFt->GetFunction();
  v8::Handle<v8::Value> returnObjArgs[0];
  v8::Local<v8::Object> returnObj = returnObjFn->CallAsConstructor(0, returnObjArgs)->ToObject();
  returnObj->SetPointerInInternalField(0, (void*)obj);
  returnObj->SetPointerInInternalField(1, new NodeExEvtHandlerImplWrap(returnObj));

  return scope.Close(returnObj);
}

/*static*/ v8::Handle<v8::Value> wxNode_wxEvent::NewCopy(const wxEvent& obj) {
  return v8::Undefined();
}

/*static*/ bool wxNode_wxEvent::AssignableFrom(const v8::Handle<v8::String>& className) {
  v8::String::AsciiValue classNameStr(className);
  return AssignableFrom(*classNameStr);
}

/*static*/ bool wxNode_wxEvent::AssignableFrom(const char* className) {
  if(!strcmp("wxEvent", className)) { return true; }
  
  if(!strcmp("wxPaletteChangedEvent", className)) { return true; }
  if(!strcmp("wxEraseEvent", className)) { return true; }
  if(!strcmp("wxMouseEvent", className)) { return true; }
  if(!strcmp("wxCommandEvent", className)) { return true; }

  if(!strcmp("wxContextMenuEvent", className)) { return true; }
  if(!strcmp("wxWindowModalDialogEvent", className)) { return true; }
  if(!strcmp("wxTextUrlEvent", className)) { return true; }
  if(!strcmp("wxClipboardTextEvent", className)) { return true; }
  if(!strcmp("wxWindowCreateEvent", className)) { return true; }
  if(!strcmp("wxHyperlinkEvent", className)) { return true; }
  if(!strcmp("wxNotifyEvent", className)) { return true; }

  if(!strcmp("wxBookCtrlEvent", className)) { return true; }

  if(!strcmp("wxAuiNotebookEvent", className)) { return true; }
  if(!strcmp("wxSplitterEvent", className)) { return true; }
  if(!strcmp("wxWizardEvent", className)) { return true; }
  if(!strcmp("wxHeaderCtrlEvent", className)) { return true; }
  if(!strcmp("wxTreeEvent", className)) { return true; }
  if(!strcmp("wxGridEvent", className)) { return true; }
  if(!strcmp("wxSpinEvent", className)) { return true; }
  if(!strcmp("wxListEvent", className)) { return true; }
  if(!strcmp("wxRichTextEvent", className)) { return true; }
  if(!strcmp("wxSpinDoubleEvent", className)) { return true; }
  if(!strcmp("wxDataViewEvent", className)) { return true; }
  if(!strcmp("wxGridSizeEvent", className)) { return true; }
  if(!strcmp("wxAuiToolBarEvent", className)) { return true; }
  if(!strcmp("wxTreeListEvent", className)) { return true; }
  if(!strcmp("wxGridRangeSelectEvent", className)) { return true; }
  if(!strcmp("wxGridEditorCreatedEvent", className)) { return true; }
  if(!strcmp("wxFileCtrlEvent", className)) { return true; }
  if(!strcmp("wxHtmlLinkEvent", className)) { return true; }
  if(!strcmp("wxFileDirPickerEvent", className)) { return true; }
  if(!strcmp("wxColourPickerEvent", className)) { return true; }
  if(!strcmp("wxChildFocusEvent", className)) { return true; }
  if(!strcmp("wxDateEvent", className)) { return true; }

  if(!strcmp("wxCalendarEvent", className)) { return true; }
  if(!strcmp("wxScrollEvent", className)) { return true; }
  if(!strcmp("wxHtmlCellEvent", className)) { return true; }
  if(!strcmp("wxStyledTextEvent", className)) { return true; }
  if(!strcmp("wxSashEvent", className)) { return true; }
  if(!strcmp("wxHelpEvent", className)) { return true; }
  if(!strcmp("wxCollapsiblePaneEvent", className)) { return true; }
  if(!strcmp("wxUpdateUIEvent", className)) { return true; }
  if(!strcmp("wxFindDialogEvent", className)) { return true; }
  if(!strcmp("wxWindowDestroyEvent", className)) { return true; }
  if(!strcmp("wxFontPickerEvent", className)) { return true; }
  if(!strcmp("wxShowEvent", className)) { return true; }
  if(!strcmp("wxClipboardEvent", className)) { return true; }
  if(!strcmp("wxMouseCaptureChangedEvent", className)) { return true; }
  if(!strcmp("wxDialUpEvent", className)) { return true; }
  if(!strcmp("wxCloseEvent", className)) { return true; }
  if(!strcmp("wxMaximizeEvent", className)) { return true; }
  if(!strcmp("wxFocusEvent", className)) { return true; }
  if(!strcmp("wxSocketEvent", className)) { return true; }
  if(!strcmp("wxIdleEvent", className)) { return true; }
  if(!strcmp("wxScrollWinEvent", className)) { return true; }
  if(!strcmp("wxTaskBarIconEvent", className)) { return true; }
  if(!strcmp("wxDropFilesEvent", className)) { return true; }
  if(!strcmp("wxIconizeEvent", className)) { return true; }
  if(!strcmp("wxCalculateLayoutEvent", className)) { return true; }
  if(!strcmp("wxDisplayChangedEvent", className)) { return true; }
  if(!strcmp("wxQueryNewPaletteEvent", className)) { return true; }
  if(!strcmp("wxFileSystemWatcherEvent", className)) { return true; }
  if(!strcmp("wxSizeEvent", className)) { return true; }
  if(!strcmp("wxInitDialogEvent", className)) { return true; }
  if(!strcmp("wxSetCursorEvent", className)) { return true; }
  if(!strcmp("wxProcessEvent", className)) { return true; }
  if(!strcmp("wxTimerEvent", className)) { return true; }
  if(!strcmp("wxQueryLayoutInfoEvent", className)) { return true; }
  if(!strcmp("wxKeyEvent", className)) { return true; }
  if(!strcmp("wxJoystickEvent", className)) { return true; }
  if(!strcmp("wxMenuEvent", className)) { return true; }
  if(!strcmp("wxMouseCaptureLostEvent", className)) { return true; }
  if(!strcmp("wxMoveEvent", className)) { return true; }
  if(!strcmp("wxNcPaintEvent", className)) { return true; }
  if(!strcmp("wxNavigationKeyEvent", className)) { return true; }
  if(!strcmp("wxActivateEvent", className)) { return true; }
  if(!strcmp("wxThreadEvent", className)) { return true; }
  if(!strcmp("wxSysColourChangedEvent", className)) { return true; }
  if(!strcmp("wxPaintEvent", className)) { return true; }
  if(!strcmp("wxAuiManagerEvent", className)) { return true; }


  return false;
}

/*static*/ v8::Handle<v8::Value> wxNode_wxEvent::_init(const v8::Arguments& args) {
  v8::HandleScope scope;

  

  std::ostringstream errStr;
  errStr << "Could not find matching constructor for arguments (class name: wxEvent).\n";
  errStr << "  arg count: " << args.Length() << "\n";
  for(int i = 0; i < args.Length(); i++) {
    v8::String::AsciiValue argStr(args[i]);
    errStr << "  arg[" << i << "]: " << *argStr << "\n";
  }
  return v8::ThrowException(v8::Exception::TypeError(v8::String::New(errStr.str().c_str())));
}


/*static*/ v8::Handle<v8::Value> wxNode_wxEvent::_SetEventType(const v8::Arguments& args) {
  v8::HandleScope scope;
  wxNode_wxEvent* self = unwrap<wxNode_wxEvent>(args.This());

  
  /*
   * id: _20447
   */
  if(args.Length() == 1 && args[0]->IsNumber()) {
    int typ = (int)args[0]->ToInt32()->Value(); /* type: _1304  */
    

    self->SetEventType(typ);

    return v8::Undefined();
  }
  

  std::ostringstream errStr;
  errStr << "Could not find matching method for arguments (method name: wxEvent::SetEventType).\n";
  errStr << "  arg count: " << args.Length() << "\n";
  for(int i = 0; i < args.Length(); i++) {
    v8::String::AsciiValue argStr(args[i]);
    errStr << "  arg[" << i << "]: " << *argStr << "\n";
  }
  return v8::ThrowException(v8::Exception::TypeError(v8::String::New(errStr.str().c_str())));
}

/*static*/ v8::Handle<v8::Value> wxNode_wxEvent::_GetEventType(const v8::Arguments& args) {
  v8::HandleScope scope;
  wxNode_wxEvent* self = unwrap<wxNode_wxEvent>(args.This());

  
  /*
   * id: _20448
   */
  if(args.Length() == 0) {
    

    int returnVal = self->GetEventType();

    return scope.Close(v8::Number::New(returnVal));
  }
  

  std::ostringstream errStr;
  errStr << "Could not find matching method for arguments (method name: wxEvent::GetEventType).\n";
  errStr << "  arg count: " << args.Length() << "\n";
  for(int i = 0; i < args.Length(); i++) {
    v8::String::AsciiValue argStr(args[i]);
    errStr << "  arg[" << i << "]: " << *argStr << "\n";
  }
  return v8::ThrowException(v8::Exception::TypeError(v8::String::New(errStr.str().c_str())));
}

/*static*/ v8::Handle<v8::Value> wxNode_wxEvent::_GetEventObject(const v8::Arguments& args) {
  v8::HandleScope scope;
  wxNode_wxEvent* self = unwrap<wxNode_wxEvent>(args.This());

  
  /*
   * id: _20449
   */
  if(args.Length() == 0) {
    

    wxObject* returnVal = self->GetEventObject();

    return scope.Close(wxNode_wxObject::New(returnVal));
  }
  

  std::ostringstream errStr;
  errStr << "Could not find matching method for arguments (method name: wxEvent::GetEventObject).\n";
  errStr << "  arg count: " << args.Length() << "\n";
  for(int i = 0; i < args.Length(); i++) {
    v8::String::AsciiValue argStr(args[i]);
    errStr << "  arg[" << i << "]: " << *argStr << "\n";
  }
  return v8::ThrowException(v8::Exception::TypeError(v8::String::New(errStr.str().c_str())));
}

/*static*/ v8::Handle<v8::Value> wxNode_wxEvent::_SetEventObject(const v8::Arguments& args) {
  v8::HandleScope scope;
  wxNode_wxEvent* self = unwrap<wxNode_wxEvent>(args.This());

  
  /*
   * id: _20450
   */
  if(args.Length() == 1 && (args[0]->IsNull() || (args[0]->IsObject() && wxNode_wxObject::AssignableFrom(args[0]->ToObject()->GetConstructorName())))) {
    wxNode_wxObject* obj = args[0]->IsNull() ? NULL : wxNodeObject::unwrap<wxNode_wxObject>(args[0]->ToObject()); /* type: _19755 * */
    

    self->SetEventObject(obj);

    return v8::Undefined();
  }
  

  std::ostringstream errStr;
  errStr << "Could not find matching method for arguments (method name: wxEvent::SetEventObject).\n";
  errStr << "  arg count: " << args.Length() << "\n";
  for(int i = 0; i < args.Length(); i++) {
    v8::String::AsciiValue argStr(args[i]);
    errStr << "  arg[" << i << "]: " << *argStr << "\n";
  }
  return v8::ThrowException(v8::Exception::TypeError(v8::String::New(errStr.str().c_str())));
}

/*static*/ v8::Handle<v8::Value> wxNode_wxEvent::_GetTimestamp(const v8::Arguments& args) {
  v8::HandleScope scope;
  wxNode_wxEvent* self = unwrap<wxNode_wxEvent>(args.This());

  
  /*
   * id: _20451
   */
  if(args.Length() == 0) {
    

    int returnVal = self->GetTimestamp();

    return scope.Close(v8::Number::New(returnVal));
  }
  

  std::ostringstream errStr;
  errStr << "Could not find matching method for arguments (method name: wxEvent::GetTimestamp).\n";
  errStr << "  arg count: " << args.Length() << "\n";
  for(int i = 0; i < args.Length(); i++) {
    v8::String::AsciiValue argStr(args[i]);
    errStr << "  arg[" << i << "]: " << *argStr << "\n";
  }
  return v8::ThrowException(v8::Exception::TypeError(v8::String::New(errStr.str().c_str())));
}

/*static*/ v8::Handle<v8::Value> wxNode_wxEvent::_SetTimestamp(const v8::Arguments& args) {
  v8::HandleScope scope;
  wxNode_wxEvent* self = unwrap<wxNode_wxEvent>(args.This());

  
  /*
   * id: _20452
   */
  if(args.Length() == 1 && args[0]->IsNumber()) {
    long int ts = (long int)args[0]->ToInt32()->Value(); /* type: _766  */
    

    self->SetTimestamp(ts);

    return v8::Undefined();
  }
  
  /*
   * id: _20452
   */
  if(args.Length() == 0) {
    

    self->SetTimestamp();

    return v8::Undefined();
  }
  

  std::ostringstream errStr;
  errStr << "Could not find matching method for arguments (method name: wxEvent::SetTimestamp).\n";
  errStr << "  arg count: " << args.Length() << "\n";
  for(int i = 0; i < args.Length(); i++) {
    v8::String::AsciiValue argStr(args[i]);
    errStr << "  arg[" << i << "]: " << *argStr << "\n";
  }
  return v8::ThrowException(v8::Exception::TypeError(v8::String::New(errStr.str().c_str())));
}

/*static*/ v8::Handle<v8::Value> wxNode_wxEvent::_GetId(const v8::Arguments& args) {
  v8::HandleScope scope;
  wxNode_wxEvent* self = unwrap<wxNode_wxEvent>(args.This());

  
  /*
   * id: _20453
   */
  if(args.Length() == 0) {
    

    int returnVal = self->GetId();

    return scope.Close(v8::Number::New(returnVal));
  }
  

  std::ostringstream errStr;
  errStr << "Could not find matching method for arguments (method name: wxEvent::GetId).\n";
  errStr << "  arg count: " << args.Length() << "\n";
  for(int i = 0; i < args.Length(); i++) {
    v8::String::AsciiValue argStr(args[i]);
    errStr << "  arg[" << i << "]: " << *argStr << "\n";
  }
  return v8::ThrowException(v8::Exception::TypeError(v8::String::New(errStr.str().c_str())));
}

/*static*/ v8::Handle<v8::Value> wxNode_wxEvent::_SetId(const v8::Arguments& args) {
  v8::HandleScope scope;
  wxNode_wxEvent* self = unwrap<wxNode_wxEvent>(args.This());

  
  /*
   * id: _20454
   */
  if(args.Length() == 1 && args[0]->IsNumber()) {
    int Id = (int)args[0]->ToInt32()->Value(); /* type: _233  */
    

    self->SetId(Id);

    return v8::Undefined();
  }
  

  std::ostringstream errStr;
  errStr << "Could not find matching method for arguments (method name: wxEvent::SetId).\n";
  errStr << "  arg count: " << args.Length() << "\n";
  for(int i = 0; i < args.Length(); i++) {
    v8::String::AsciiValue argStr(args[i]);
    errStr << "  arg[" << i << "]: " << *argStr << "\n";
  }
  return v8::ThrowException(v8::Exception::TypeError(v8::String::New(errStr.str().c_str())));
}

/*static*/ v8::Handle<v8::Value> wxNode_wxEvent::_Skip(const v8::Arguments& args) {
  v8::HandleScope scope;
  wxNode_wxEvent* self = unwrap<wxNode_wxEvent>(args.This());

  
  /*
   * id: _20455
   */
  if(args.Length() == 1 && args[0]->IsBoolean()) {
    bool skip = args[0]->ToBoolean()->Value(); /* type: _18804  */
    

    self->Skip(skip);

    return v8::Undefined();
  }
  
  /*
   * id: _20455
   */
  if(args.Length() == 0) {
    

    self->Skip();

    return v8::Undefined();
  }
  

  std::ostringstream errStr;
  errStr << "Could not find matching method for arguments (method name: wxEvent::Skip).\n";
  errStr << "  arg count: " << args.Length() << "\n";
  for(int i = 0; i < args.Length(); i++) {
    v8::String::AsciiValue argStr(args[i]);
    errStr << "  arg[" << i << "]: " << *argStr << "\n";
  }
  return v8::ThrowException(v8::Exception::TypeError(v8::String::New(errStr.str().c_str())));
}

/*static*/ v8::Handle<v8::Value> wxNode_wxEvent::_GetSkipped(const v8::Arguments& args) {
  v8::HandleScope scope;
  wxNode_wxEvent* self = unwrap<wxNode_wxEvent>(args.This());

  
  /*
   * id: _20456
   */
  if(args.Length() == 0) {
    

    bool returnVal = self->GetSkipped();

    return scope.Close(v8::Boolean::New(returnVal));
  }
  

  std::ostringstream errStr;
  errStr << "Could not find matching method for arguments (method name: wxEvent::GetSkipped).\n";
  errStr << "  arg count: " << args.Length() << "\n";
  for(int i = 0; i < args.Length(); i++) {
    v8::String::AsciiValue argStr(args[i]);
    errStr << "  arg[" << i << "]: " << *argStr << "\n";
  }
  return v8::ThrowException(v8::Exception::TypeError(v8::String::New(errStr.str().c_str())));
}

/*static*/ v8::Handle<v8::Value> wxNode_wxEvent::_Clone(const v8::Arguments& args) {
  v8::HandleScope scope;
  wxNode_wxEvent* self = unwrap<wxNode_wxEvent>(args.This());

  
  /*
   * id: _20457
   */
  if(args.Length() == 0) {
    

    wxEvent* returnVal = self->Clone();

    return scope.Close(wxNode_wxEvent::New(returnVal));
  }
  

  std::ostringstream errStr;
  errStr << "Could not find matching method for arguments (method name: wxEvent::Clone).\n";
  errStr << "  arg count: " << args.Length() << "\n";
  for(int i = 0; i < args.Length(); i++) {
    v8::String::AsciiValue argStr(args[i]);
    errStr << "  arg[" << i << "]: " << *argStr << "\n";
  }
  return v8::ThrowException(v8::Exception::TypeError(v8::String::New(errStr.str().c_str())));
}

/*static*/ v8::Handle<v8::Value> wxNode_wxEvent::_GetEventCategory(const v8::Arguments& args) {
  v8::HandleScope scope;
  wxNode_wxEvent* self = unwrap<wxNode_wxEvent>(args.This());

  
  /*
   * id: _20458
   */
  if(args.Length() == 0) {
    

    int returnVal = (int)self->GetEventCategory();

    return scope.Close(v8::Number::New(returnVal));
  }
  

  std::ostringstream errStr;
  errStr << "Could not find matching method for arguments (method name: wxEvent::GetEventCategory).\n";
  errStr << "  arg count: " << args.Length() << "\n";
  for(int i = 0; i < args.Length(); i++) {
    v8::String::AsciiValue argStr(args[i]);
    errStr << "  arg[" << i << "]: " << *argStr << "\n";
  }
  return v8::ThrowException(v8::Exception::TypeError(v8::String::New(errStr.str().c_str())));
}

/*static*/ v8::Handle<v8::Value> wxNode_wxEvent::_IsCommandEvent(const v8::Arguments& args) {
  v8::HandleScope scope;
  wxNode_wxEvent* self = unwrap<wxNode_wxEvent>(args.This());

  
  /*
   * id: _20459
   */
  if(args.Length() == 0) {
    

    bool returnVal = self->IsCommandEvent();

    return scope.Close(v8::Boolean::New(returnVal));
  }
  

  std::ostringstream errStr;
  errStr << "Could not find matching method for arguments (method name: wxEvent::IsCommandEvent).\n";
  errStr << "  arg count: " << args.Length() << "\n";
  for(int i = 0; i < args.Length(); i++) {
    v8::String::AsciiValue argStr(args[i]);
    errStr << "  arg[" << i << "]: " << *argStr << "\n";
  }
  return v8::ThrowException(v8::Exception::TypeError(v8::String::New(errStr.str().c_str())));
}

/*static*/ v8::Handle<v8::Value> wxNode_wxEvent::_ShouldPropagate(const v8::Arguments& args) {
  v8::HandleScope scope;
  wxNode_wxEvent* self = unwrap<wxNode_wxEvent>(args.This());

  
  /*
   * id: _20460
   */
  if(args.Length() == 0) {
    

    bool returnVal = self->ShouldPropagate();

    return scope.Close(v8::Boolean::New(returnVal));
  }
  

  std::ostringstream errStr;
  errStr << "Could not find matching method for arguments (method name: wxEvent::ShouldPropagate).\n";
  errStr << "  arg count: " << args.Length() << "\n";
  for(int i = 0; i < args.Length(); i++) {
    v8::String::AsciiValue argStr(args[i]);
    errStr << "  arg[" << i << "]: " << *argStr << "\n";
  }
  return v8::ThrowException(v8::Exception::TypeError(v8::String::New(errStr.str().c_str())));
}

/*static*/ v8::Handle<v8::Value> wxNode_wxEvent::_StopPropagation(const v8::Arguments& args) {
  v8::HandleScope scope;
  wxNode_wxEvent* self = unwrap<wxNode_wxEvent>(args.This());

  
  /*
   * id: _20461
   */
  if(args.Length() == 0) {
    

    int returnVal = self->StopPropagation();

    return scope.Close(v8::Number::New(returnVal));
  }
  

  std::ostringstream errStr;
  errStr << "Could not find matching method for arguments (method name: wxEvent::StopPropagation).\n";
  errStr << "  arg count: " << args.Length() << "\n";
  for(int i = 0; i < args.Length(); i++) {
    v8::String::AsciiValue argStr(args[i]);
    errStr << "  arg[" << i << "]: " << *argStr << "\n";
  }
  return v8::ThrowException(v8::Exception::TypeError(v8::String::New(errStr.str().c_str())));
}

/*static*/ v8::Handle<v8::Value> wxNode_wxEvent::_ResumePropagation(const v8::Arguments& args) {
  v8::HandleScope scope;
  wxNode_wxEvent* self = unwrap<wxNode_wxEvent>(args.This());

  
  /*
   * id: _20462
   */
  if(args.Length() == 1 && args[0]->IsNumber()) {
    int propagationLevel = (int)args[0]->ToInt32()->Value(); /* type: _233  */
    

    self->ResumePropagation(propagationLevel);

    return v8::Undefined();
  }
  

  std::ostringstream errStr;
  errStr << "Could not find matching method for arguments (method name: wxEvent::ResumePropagation).\n";
  errStr << "  arg count: " << args.Length() << "\n";
  for(int i = 0; i < args.Length(); i++) {
    v8::String::AsciiValue argStr(args[i]);
    errStr << "  arg[" << i << "]: " << *argStr << "\n";
  }
  return v8::ThrowException(v8::Exception::TypeError(v8::String::New(errStr.str().c_str())));
}

/*static*/ v8::Handle<v8::Value> wxNode_wxEvent::_WasProcessed(const v8::Arguments& args) {
  v8::HandleScope scope;
  wxNode_wxEvent* self = unwrap<wxNode_wxEvent>(args.This());

  
  /*
   * id: _20463
   */
  if(args.Length() == 0) {
    

    bool returnVal = self->WasProcessed();

    return scope.Close(v8::Boolean::New(returnVal));
  }
  

  std::ostringstream errStr;
  errStr << "Could not find matching method for arguments (method name: wxEvent::WasProcessed).\n";
  errStr << "  arg count: " << args.Length() << "\n";
  for(int i = 0; i < args.Length(); i++) {
    v8::String::AsciiValue argStr(args[i]);
    errStr << "  arg[" << i << "]: " << *argStr << "\n";
  }
  return v8::ThrowException(v8::Exception::TypeError(v8::String::New(errStr.str().c_str())));
}

/*static*/ v8::Handle<v8::Value> wxNode_wxEvent::_ShouldProcessOnlyIn(const v8::Arguments& args) {
  v8::HandleScope scope;
  wxNode_wxEvent* self = unwrap<wxNode_wxEvent>(args.This());

  
  /*
   * id: _20464
   */
  if(args.Length() == 1 && (args[0]->IsNull() || (args[0]->IsObject() && wxNode_wxEvtHandler::AssignableFrom(args[0]->ToObject()->GetConstructorName())))) {
    wxNode_wxEvtHandler* h = args[0]->IsNull() ? NULL : wxNodeObject::unwrap<wxNode_wxEvtHandler>(args[0]->ToObject()); /* type: _2228 * */
    

    bool returnVal = self->ShouldProcessOnlyIn(h);

    return scope.Close(v8::Boolean::New(returnVal));
  }
  

  std::ostringstream errStr;
  errStr << "Could not find matching method for arguments (method name: wxEvent::ShouldProcessOnlyIn).\n";
  errStr << "  arg count: " << args.Length() << "\n";
  for(int i = 0; i < args.Length(); i++) {
    v8::String::AsciiValue argStr(args[i]);
    errStr << "  arg[" << i << "]: " << *argStr << "\n";
  }
  return v8::ThrowException(v8::Exception::TypeError(v8::String::New(errStr.str().c_str())));
}

/*static*/ v8::Handle<v8::Value> wxNode_wxEvent::_DidntHonourProcessOnlyIn(const v8::Arguments& args) {
  v8::HandleScope scope;
  wxNode_wxEvent* self = unwrap<wxNode_wxEvent>(args.This());

  
  /*
   * id: _20465
   */
  if(args.Length() == 0) {
    

    self->DidntHonourProcessOnlyIn();

    return v8::Undefined();
  }
  

  std::ostringstream errStr;
  errStr << "Could not find matching method for arguments (method name: wxEvent::DidntHonourProcessOnlyIn).\n";
  errStr << "  arg count: " << args.Length() << "\n";
  for(int i = 0; i < args.Length(); i++) {
    v8::String::AsciiValue argStr(args[i]);
    errStr << "  arg[" << i << "]: " << *argStr << "\n";
  }
  return v8::ThrowException(v8::Exception::TypeError(v8::String::New(errStr.str().c_str())));
}

/*static*/ v8::Handle<v8::Value> wxNode_wxEvent::_GetClassInfo(const v8::Arguments& args) {
  v8::HandleScope scope;
  wxNode_wxEvent* self = unwrap<wxNode_wxEvent>(args.This());

  
  /*
   * id: _20468
   */
  if(args.Length() == 0) {
    

    wxClassInfo* returnVal = self->GetClassInfo();

    return scope.Close(wxNode_wxClassInfo::New(returnVal));
  }
  

  std::ostringstream errStr;
  errStr << "Could not find matching method for arguments (method name: wxEvent::GetClassInfo).\n";
  errStr << "  arg count: " << args.Length() << "\n";
  for(int i = 0; i < args.Length(); i++) {
    v8::String::AsciiValue argStr(args[i]);
    errStr << "  arg[" << i << "]: " << *argStr << "\n";
  }
  return v8::ThrowException(v8::Exception::TypeError(v8::String::New(errStr.str().c_str())));
}

