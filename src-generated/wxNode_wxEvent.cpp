
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
  s_ct->SetClassName(v8::String::NewSymbol("Event"));

  NODE_SET_PROTOTYPE_METHOD(s_ct, "init", _init);
  AddMethods(s_ct);

  target->Set(v8::String::NewSymbol("Event"), s_ct->GetFunction());
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
  returnObjFt->SetClassName(v8::String::NewSymbol("Event"));
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
  returnObjFt->SetClassName(v8::String::NewSymbol("Event"));
  wxNode_wxEvent::AddMethods(returnObjFt);

  v8::Local<v8::Function> returnObjFn = returnObjFt->GetFunction();
  v8::Handle<v8::Value> returnObjArgs[0];
  v8::Local<v8::Object> returnObj = returnObjFn->CallAsConstructor(0, returnObjArgs)->ToObject();
  returnObj->SetPointerInInternalField(0, (void*)obj);
  NodeExEvtHandlerImplWrap* wrap = new NodeExEvtHandlerImplWrap(returnObj);
  NodeExEvtHandlerImpl* evtHandler = dynamic_cast<NodeExEvtHandlerImpl*>(wrap);
  returnObj->SetPointerInInternalField(1, evtHandler);

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
  if(!strcmp("Event", className)) { return true; }
  
  if(!strcmp("PaletteChangedEvent", className)) { return true; }
  if(!strcmp("EraseEvent", className)) { return true; }
  if(!strcmp("MouseEvent", className)) { return true; }
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
  if(!strcmp("ClipboardEvent", className)) { return true; }
  if(!strcmp("MouseCaptureChangedEvent", className)) { return true; }
  if(!strcmp("DialUpEvent", className)) { return true; }
  if(!strcmp("CloseEvent", className)) { return true; }
  if(!strcmp("PaintEvent", className)) { return true; }
  if(!strcmp("MaximizeEvent", className)) { return true; }
  if(!strcmp("FocusEvent", className)) { return true; }
  if(!strcmp("SocketEvent", className)) { return true; }
  if(!strcmp("MouseCaptureLostEvent", className)) { return true; }
  if(!strcmp("IdleEvent", className)) { return true; }
  if(!strcmp("ScrollWinEvent", className)) { return true; }
  if(!strcmp("TaskBarIconEvent", className)) { return true; }
  if(!strcmp("DropFilesEvent", className)) { return true; }
  if(!strcmp("IconizeEvent", className)) { return true; }
  if(!strcmp("CalculateLayoutEvent", className)) { return true; }
  if(!strcmp("DisplayChangedEvent", className)) { return true; }
  if(!strcmp("QueryNewPaletteEvent", className)) { return true; }
  if(!strcmp("SizeEvent", className)) { return true; }
  if(!strcmp("InitDialogEvent", className)) { return true; }
  if(!strcmp("SetCursorEvent", className)) { return true; }
  if(!strcmp("FileSystemWatcherEvent", className)) { return true; }
  if(!strcmp("SysColourChangedEvent", className)) { return true; }
  if(!strcmp("ProcessEvent", className)) { return true; }
  if(!strcmp("TimerEvent", className)) { return true; }
  if(!strcmp("QueryLayoutInfoEvent", className)) { return true; }
  if(!strcmp("KeyEvent", className)) { return true; }
  if(!strcmp("JoystickEvent", className)) { return true; }
  if(!strcmp("MenuEvent", className)) { return true; }
  if(!strcmp("ShowEvent", className)) { return true; }
  if(!strcmp("MoveEvent", className)) { return true; }
  if(!strcmp("NcPaintEvent", className)) { return true; }
  if(!strcmp("NavigationKeyEvent", className)) { return true; }
  if(!strcmp("ActivateEvent", className)) { return true; }
  if(!strcmp("ThreadEvent", className)) { return true; }
  if(!strcmp("AuiManagerEvent", className)) { return true; }


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
   * id: _16318
   */
  if(args.Length() == 1 && args[0]->IsNumber()) {
    int typ = (int)args[0]->ToInt32()->Value(); /* type: _986  */
    

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
   * id: _16319
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
   * id: _16320
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
   * id: _16321
   */
  if(args.Length() == 1 && (args[0]->IsNull() || (args[0]->IsObject() && wxNode_wxObject::AssignableFrom(args[0]->ToObject()->GetConstructorName())))) {
    wxNode_wxObject* obj = args[0]->IsNull() ? NULL : wxNodeObject::unwrap<wxNode_wxObject>(args[0]->ToObject()); /* type: _15746 * */
    

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
   * id: _16322
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
   * id: _16323
   */
  if(args.Length() == 1 && args[0]->IsNumber()) {
    long int ts = (long int)args[0]->ToInt32()->Value(); /* type: _592  */
    

    self->SetTimestamp(ts);

    return v8::Undefined();
  }
  
  /*
   * id: _16323
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
   * id: _16324
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
   * id: _16325
   */
  if(args.Length() == 1 && args[0]->IsNumber()) {
    int Id = (int)args[0]->ToInt32()->Value(); /* type: _165  */
    

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
   * id: _16326
   */
  if(args.Length() == 1 && args[0]->IsBoolean()) {
    bool skip = args[0]->ToBoolean()->Value(); /* type: _14830  */
    

    self->Skip(skip);

    return v8::Undefined();
  }
  
  /*
   * id: _16326
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
   * id: _16327
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
   * id: _16328
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
   * id: _16329
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
   * id: _16330
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
   * id: _16331
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
   * id: _16332
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
   * id: _16333
   */
  if(args.Length() == 1 && args[0]->IsNumber()) {
    int propagationLevel = (int)args[0]->ToInt32()->Value(); /* type: _165  */
    

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
   * id: _16334
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
   * id: _16335
   */
  if(args.Length() == 1 && (args[0]->IsNull() || (args[0]->IsObject() && wxNode_wxEvtHandler::AssignableFrom(args[0]->ToObject()->GetConstructorName())))) {
    wxNode_wxEvtHandler* h = args[0]->IsNull() ? NULL : wxNodeObject::unwrap<wxNode_wxEvtHandler>(args[0]->ToObject()); /* type: _1680 * */
    

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
   * id: _16336
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
   * id: _16339
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



