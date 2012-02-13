
#include <sstream>
#include "wxNode_wxWebViewHandler.h"
#include "wxNode_wxFSFile.h"


/* static */ v8::Persistent<v8::FunctionTemplate> wxNode_wxWebViewHandler::s_ct;




/*static*/ void wxNode_wxWebViewHandler::Init(v8::Handle<v8::Object> target) {
  v8::HandleScope scope;

  v8::Local<v8::FunctionTemplate> t = v8::FunctionTemplate::New(wxNodeObject::NewFunc);
  s_ct = v8::Persistent<v8::FunctionTemplate>::New(t);
  s_ct->InstanceTemplate()->SetInternalFieldCount(2);
  s_ct->SetClassName(v8::String::NewSymbol("WebViewHandler"));

  NODE_SET_PROTOTYPE_METHOD(s_ct, "init", _init);
  AddMethods(s_ct);

  target->Set(v8::String::NewSymbol("WebViewHandler"), s_ct->GetFunction());
}

/*static*/ void wxNode_wxWebViewHandler::AddMethods(v8::Handle<v8::FunctionTemplate> target) {
  wxNode_wxEvtHandler::AddMethods(target);
  NODE_SET_PROTOTYPE_METHOD(target, "getName", _GetName);
  NODE_SET_PROTOTYPE_METHOD(target, "getFile", _GetFile);
  
}

/*static*/ v8::Handle<v8::Value> wxNode_wxWebViewHandler::New(const wxNode_wxWebViewHandler* obj) {
  v8::HandleScope scope;

  if(obj == NULL) {
    return scope.Close(v8::Null());
  }
  
  v8::Local<v8::FunctionTemplate> returnObjFt = v8::FunctionTemplate::New(wxNodeObject::NewFunc);
  returnObjFt->InstanceTemplate()->SetInternalFieldCount(2);
  returnObjFt->SetClassName(v8::String::NewSymbol("WebViewHandler"));
  wxNode_wxWebViewHandler::AddMethods(returnObjFt);

  v8::Local<v8::Function> returnObjFn = returnObjFt->GetFunction();
  v8::Handle<v8::Value> returnObjArgs[0];
  v8::Local<v8::Object> returnObj = returnObjFn->CallAsConstructor(0, returnObjArgs)->ToObject();
  returnObj->SetPointerInInternalField(0, (void*)obj);
  NodeExEvtHandlerImpl* evtHandler = dynamic_cast<NodeExEvtHandlerImpl*>((wxNode_wxWebViewHandler*)obj);
  returnObj->SetPointerInInternalField(1, evtHandler);

  return scope.Close(returnObj);
}

/*static*/ v8::Handle<v8::Value> wxNode_wxWebViewHandler::New(const wxWebViewHandler* obj) {
  v8::HandleScope scope;

  if(obj == NULL) {
    return scope.Close(v8::Null());
  }
  
  v8::Local<v8::FunctionTemplate> returnObjFt = v8::FunctionTemplate::New(wxNodeObject::NewFunc);
  returnObjFt->InstanceTemplate()->SetInternalFieldCount(2);
  returnObjFt->SetClassName(v8::String::NewSymbol("WebViewHandler"));
  wxNode_wxWebViewHandler::AddMethods(returnObjFt);

  v8::Local<v8::Function> returnObjFn = returnObjFt->GetFunction();
  v8::Handle<v8::Value> returnObjArgs[0];
  v8::Local<v8::Object> returnObj = returnObjFn->CallAsConstructor(0, returnObjArgs)->ToObject();
  returnObj->SetPointerInInternalField(0, (void*)obj);
  NodeExEvtHandlerImplWrap* wrap = new NodeExEvtHandlerImplWrap(returnObj);
  NodeExEvtHandlerImpl* evtHandler = dynamic_cast<NodeExEvtHandlerImpl*>(wrap);
  returnObj->SetPointerInInternalField(1, evtHandler);

  return scope.Close(returnObj);
}

/*static*/ v8::Handle<v8::Value> wxNode_wxWebViewHandler::NewCopy(const wxWebViewHandler& obj) {
  return v8::Undefined();
}

/*static*/ bool wxNode_wxWebViewHandler::AssignableFrom(const v8::Handle<v8::String>& className) {
  v8::String::AsciiValue classNameStr(className);
  return AssignableFrom(*classNameStr);
}

/*static*/ bool wxNode_wxWebViewHandler::AssignableFrom(const char* className) {
  if(!strcmp("WebViewHandler", className)) { return true; }
  
  if(!strcmp("WebViewArchiveHandler", className)) { return true; }


  return false;
}

/*static*/ v8::Handle<v8::Value> wxNode_wxWebViewHandler::_init(const v8::Arguments& args) {
  v8::HandleScope scope;

  

  std::ostringstream errStr;
  errStr << "Could not find matching constructor for arguments (class name: wxWebViewHandler).\n";
  errStr << "  arg count: " << args.Length() << "\n";
  for(int i = 0; i < args.Length(); i++) {
    v8::String::AsciiValue argStr(args[i]);
    errStr << "  arg[" << i << "]: " << *argStr << "\n";
  }
  return v8::ThrowException(v8::Exception::TypeError(v8::String::New(errStr.str().c_str())));
}


/*static*/ v8::Handle<v8::Value> wxNode_wxWebViewHandler::_GetName(const v8::Arguments& args) {
  v8::HandleScope scope;
  wxNode_wxWebViewHandler* self = unwrap<wxNode_wxWebViewHandler>(args.This());

  
  /*
   * id: _36679
   */
  if(args.Length() == 0) {
    

    wxString returnVal = self->GetName();

    return scope.Close(v8::String::New(returnVal.mb_str()));
  }
  

  std::ostringstream errStr;
  errStr << "Could not find matching method for arguments (method name: wxWebViewHandler::GetName).\n";
  errStr << "  arg count: " << args.Length() << "\n";
  for(int i = 0; i < args.Length(); i++) {
    v8::String::AsciiValue argStr(args[i]);
    errStr << "  arg[" << i << "]: " << *argStr << "\n";
  }
  return v8::ThrowException(v8::Exception::TypeError(v8::String::New(errStr.str().c_str())));
}

/*static*/ v8::Handle<v8::Value> wxNode_wxWebViewHandler::_GetFile(const v8::Arguments& args) {
  v8::HandleScope scope;
  wxNode_wxWebViewHandler* self = unwrap<wxNode_wxWebViewHandler>(args.This());

  
  /*
   * id: _36680
   */
  if(args.Length() == 1 && args[0]->IsString()) {
    v8::String::AsciiValue uri(args[0]->ToString()); /* type: _14975  */
    

    wxFSFile* returnVal = self->GetFile(*uri);

    return scope.Close(wxNode_wxFSFile::New(returnVal));
  }
  

  std::ostringstream errStr;
  errStr << "Could not find matching method for arguments (method name: wxWebViewHandler::GetFile).\n";
  errStr << "  arg count: " << args.Length() << "\n";
  for(int i = 0; i < args.Length(); i++) {
    v8::String::AsciiValue argStr(args[i]);
    errStr << "  arg[" << i << "]: " << *argStr << "\n";
  }
  return v8::ThrowException(v8::Exception::TypeError(v8::String::New(errStr.str().c_str())));
}

