
#include <sstream>
#include "wxNode_wxWebViewArchiveHandler.h"
#include "wxNode_wxEvtHandler.h"
#include "wxNode_wxWebViewHandler.h"
#include "wxNode_wxFSFile.h"


/* static */ v8::Persistent<v8::FunctionTemplate> wxNode_wxWebViewArchiveHandler::s_ct;



wxNode_wxWebViewArchiveHandler::wxNode_wxWebViewArchiveHandler(wxWebViewArchiveHandler& arg0)
  : wxWebViewArchiveHandler(arg0)
{

}

wxNode_wxWebViewArchiveHandler::wxNode_wxWebViewArchiveHandler(const wxString& scheme)
  : wxWebViewArchiveHandler(scheme)
{

}




/*static*/ void wxNode_wxWebViewArchiveHandler::Init(v8::Handle<v8::Object> target) {
  v8::HandleScope scope;

  v8::Local<v8::FunctionTemplate> t = v8::FunctionTemplate::New(wxNodeObject::NewFunc);
  s_ct = v8::Persistent<v8::FunctionTemplate>::New(t);
  s_ct->InstanceTemplate()->SetInternalFieldCount(2);
  s_ct->SetClassName(v8::String::NewSymbol("WebViewArchiveHandler"));

  NODE_SET_PROTOTYPE_METHOD(s_ct, "init", _init);
  AddMethods(s_ct);

  target->Set(v8::String::NewSymbol("WebViewArchiveHandler"), s_ct->GetFunction());
}

/*static*/ void wxNode_wxWebViewArchiveHandler::AddMethods(v8::Handle<v8::FunctionTemplate> target) {
  wxNode_wxWebViewHandler::AddMethods(target);
  NODE_SET_PROTOTYPE_METHOD(target, "getFile", _GetFile);
  
  
}

/*static*/ v8::Handle<v8::Value> wxNode_wxWebViewArchiveHandler::New(const wxNode_wxWebViewArchiveHandler* obj) {
  v8::HandleScope scope;

  if(obj == NULL) {
    return scope.Close(v8::Null());
  }
  
  v8::Local<v8::FunctionTemplate> returnObjFt = v8::FunctionTemplate::New(wxNodeObject::NewFunc);
  returnObjFt->InstanceTemplate()->SetInternalFieldCount(2);
  returnObjFt->SetClassName(v8::String::NewSymbol("WebViewArchiveHandler"));
  wxNode_wxWebViewArchiveHandler::AddMethods(returnObjFt);

  v8::Local<v8::Function> returnObjFn = returnObjFt->GetFunction();
  v8::Handle<v8::Value> returnObjArgs[0];
  v8::Local<v8::Object> returnObj = returnObjFn->CallAsConstructor(0, returnObjArgs)->ToObject();
  returnObj->SetPointerInInternalField(0, (void*)obj);
  NodeExEvtHandlerImpl* evtHandler = dynamic_cast<NodeExEvtHandlerImpl*>((wxNode_wxWebViewArchiveHandler*)obj);
  returnObj->SetPointerInInternalField(1, evtHandler);

  return scope.Close(returnObj);
}

/*static*/ v8::Handle<v8::Value> wxNode_wxWebViewArchiveHandler::New(const wxWebViewArchiveHandler* obj) {
  v8::HandleScope scope;

  if(obj == NULL) {
    return scope.Close(v8::Null());
  }
  
  v8::Local<v8::FunctionTemplate> returnObjFt = v8::FunctionTemplate::New(wxNodeObject::NewFunc);
  returnObjFt->InstanceTemplate()->SetInternalFieldCount(2);
  returnObjFt->SetClassName(v8::String::NewSymbol("WebViewArchiveHandler"));
  wxNode_wxWebViewArchiveHandler::AddMethods(returnObjFt);

  v8::Local<v8::Function> returnObjFn = returnObjFt->GetFunction();
  v8::Handle<v8::Value> returnObjArgs[0];
  v8::Local<v8::Object> returnObj = returnObjFn->CallAsConstructor(0, returnObjArgs)->ToObject();
  returnObj->SetPointerInInternalField(0, (void*)obj);
  NodeExEvtHandlerImplWrap* wrap = new NodeExEvtHandlerImplWrap(returnObj);
  NodeExEvtHandlerImpl* evtHandler = dynamic_cast<NodeExEvtHandlerImpl*>(wrap);
  returnObj->SetPointerInInternalField(1, evtHandler);

  return scope.Close(returnObj);
}

/*static*/ v8::Handle<v8::Value> wxNode_wxWebViewArchiveHandler::NewCopy(const wxWebViewArchiveHandler& obj) {
  return v8::Undefined();
}

/*static*/ bool wxNode_wxWebViewArchiveHandler::AssignableFrom(const v8::Handle<v8::String>& className) {
  v8::String::AsciiValue classNameStr(className);
  return AssignableFrom(*classNameStr);
}

/*static*/ bool wxNode_wxWebViewArchiveHandler::AssignableFrom(const char* className) {
  if(!strcmp("WebViewArchiveHandler", className)) { return true; }
  

  return false;
}

/*static*/ v8::Handle<v8::Value> wxNode_wxWebViewArchiveHandler::_init(const v8::Arguments& args) {
  v8::HandleScope scope;

  
  
  /*
   * id: _31332
   */
  if(args.Length() == 1 && (args[0]->IsNull() || (args[0]->IsObject() && wxNode_wxWebViewArchiveHandler::AssignableFrom(args[0]->ToObject()->GetConstructorName())))) {
    wxNode_wxWebViewArchiveHandler* arg0 = args[0]->IsNull() ? NULL : wxNodeObject::unwrap<wxNode_wxWebViewArchiveHandler>(args[0]->ToObject()); /* type: _63495  */
    

    wxNode_wxWebViewArchiveHandler *self = new wxNode_wxWebViewArchiveHandler(*arg0);
    NodeExEvtHandlerImpl* evtHandler = dynamic_cast<NodeExEvtHandlerImpl*>(self);
    self->wrap(args.This(), self, evtHandler);
    return args.This();
  }
  
  /*
   * id: _31333
   */
  if(args.Length() == 1 && args[0]->IsString()) {
    v8::String::AsciiValue scheme(args[0]->ToString()); /* type: _14975  */
    

    wxNode_wxWebViewArchiveHandler *self = new wxNode_wxWebViewArchiveHandler(*scheme);
    NodeExEvtHandlerImpl* evtHandler = dynamic_cast<NodeExEvtHandlerImpl*>(self);
    self->wrap(args.This(), self, evtHandler);
    return args.This();
  }
  
  

  std::ostringstream errStr;
  errStr << "Could not find matching constructor for arguments (class name: wxWebViewArchiveHandler).\n";
  errStr << "  arg count: " << args.Length() << "\n";
  for(int i = 0; i < args.Length(); i++) {
    v8::String::AsciiValue argStr(args[i]);
    errStr << "  arg[" << i << "]: " << *argStr << "\n";
  }
  return v8::ThrowException(v8::Exception::TypeError(v8::String::New(errStr.str().c_str())));
}


/*static*/ v8::Handle<v8::Value> wxNode_wxWebViewArchiveHandler::_GetFile(const v8::Arguments& args) {
  v8::HandleScope scope;
  wxNode_wxWebViewArchiveHandler* self = unwrap<wxNode_wxWebViewArchiveHandler>(args.This());

  
  /*
   * id: _31335
   */
  if(args.Length() == 1 && args[0]->IsString()) {
    v8::String::AsciiValue uri(args[0]->ToString()); /* type: _14975  */
    

    wxFSFile* returnVal = self->GetFile(*uri);

    return scope.Close(wxNode_wxFSFile::New(returnVal));
  }
  

  std::ostringstream errStr;
  errStr << "Could not find matching method for arguments (method name: wxWebViewArchiveHandler::GetFile).\n";
  errStr << "  arg count: " << args.Length() << "\n";
  for(int i = 0; i < args.Length(); i++) {
    v8::String::AsciiValue argStr(args[i]);
    errStr << "  arg[" << i << "]: " << *argStr << "\n";
  }
  return v8::ThrowException(v8::Exception::TypeError(v8::String::New(errStr.str().c_str())));
}



