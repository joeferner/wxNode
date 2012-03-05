
#include <sstream>
#include "wxNode_wxWebViewHistoryItem.h"


/* static */ v8::Persistent<v8::FunctionTemplate> wxNode_wxWebViewHistoryItem::s_ct;



wxNode_wxWebViewHistoryItem::wxNode_wxWebViewHistoryItem(wxWebViewHistoryItem& arg0)
  : wxWebViewHistoryItem(arg0)
{

}

wxNode_wxWebViewHistoryItem::wxNode_wxWebViewHistoryItem(const wxString& url, const wxString& title)
  : wxWebViewHistoryItem(url, title)
{

}




/*static*/ void wxNode_wxWebViewHistoryItem::Init(v8::Handle<v8::Object> target) {
  v8::HandleScope scope;

  v8::Local<v8::FunctionTemplate> t = v8::FunctionTemplate::New(wxNodeObject::NewFunc);
  s_ct = v8::Persistent<v8::FunctionTemplate>::New(t);
  s_ct->InstanceTemplate()->SetInternalFieldCount(2);
  s_ct->SetClassName(v8::String::NewSymbol("WebViewHistoryItem"));

  NODE_SET_PROTOTYPE_METHOD(s_ct, "init", _init);
  AddMethods(s_ct);

  target->Set(v8::String::NewSymbol("WebViewHistoryItem"), s_ct->GetFunction());
}

/*static*/ void wxNode_wxWebViewHistoryItem::AddMethods(v8::Handle<v8::FunctionTemplate> target) {
  wxNode_wxEvtHandler::AddMethods(target);
  NODE_SET_PROTOTYPE_METHOD(target, "getUrl", _GetUrl);
  NODE_SET_PROTOTYPE_METHOD(target, "getTitle", _GetTitle);
  
  
}

/*static*/ v8::Handle<v8::Value> wxNode_wxWebViewHistoryItem::New(const wxNode_wxWebViewHistoryItem* obj) {
  v8::HandleScope scope;

  if(obj == NULL) {
    return scope.Close(v8::Null());
  }
  
  v8::Local<v8::FunctionTemplate> returnObjFt = v8::FunctionTemplate::New(wxNodeObject::NewFunc);
  returnObjFt->InstanceTemplate()->SetInternalFieldCount(2);
  returnObjFt->SetClassName(v8::String::NewSymbol("WebViewHistoryItem"));
  wxNode_wxWebViewHistoryItem::AddMethods(returnObjFt);

  v8::Local<v8::Function> returnObjFn = returnObjFt->GetFunction();

  v8::Local<v8::Object> returnObj = returnObjFn->CallAsConstructor(0, new v8::Local<v8::Value>[0])->ToObject();
  returnObj->SetPointerInInternalField(0, (void*)obj);
  NodeExEvtHandlerImpl* evtHandler = dynamic_cast<NodeExEvtHandlerImpl*>((wxNode_wxWebViewHistoryItem*)obj);
  returnObj->SetPointerInInternalField(1, evtHandler);

  return scope.Close(returnObj);
}

/*static*/ v8::Handle<v8::Value> wxNode_wxWebViewHistoryItem::New(const wxWebViewHistoryItem* obj) {
  v8::HandleScope scope;

  if(obj == NULL) {
    return scope.Close(v8::Null());
  }
  
  v8::Local<v8::FunctionTemplate> returnObjFt = v8::FunctionTemplate::New(wxNodeObject::NewFunc);
  returnObjFt->InstanceTemplate()->SetInternalFieldCount(2);
  returnObjFt->SetClassName(v8::String::NewSymbol("WebViewHistoryItem"));
  wxNode_wxWebViewHistoryItem::AddMethods(returnObjFt);

  v8::Local<v8::Function> returnObjFn = returnObjFt->GetFunction();
  v8::Local<v8::Object> returnObj = returnObjFn->CallAsConstructor(0, new v8::Local<v8::Value>[0])->ToObject();
  returnObj->SetPointerInInternalField(0, (void*)obj);
  NodeExEvtHandlerImplWrap* wrap = new NodeExEvtHandlerImplWrap(returnObj);
  NodeExEvtHandlerImpl* evtHandler = dynamic_cast<NodeExEvtHandlerImpl*>(wrap);
  returnObj->SetPointerInInternalField(1, evtHandler);

  return scope.Close(returnObj);
}

/*static*/ v8::Handle<v8::Value> wxNode_wxWebViewHistoryItem::NewCopy(const wxWebViewHistoryItem& obj) {
  return v8::Undefined();
}

/*static*/ bool wxNode_wxWebViewHistoryItem::AssignableFrom(const v8::Handle<v8::String>& className) {
  v8::String::AsciiValue classNameStr(className);
  return AssignableFrom(*classNameStr);
}

/*static*/ bool wxNode_wxWebViewHistoryItem::AssignableFrom(const char* className) {
  if(!strcmp("WebViewHistoryItem", className)) { return true; }
  

  return false;
}

/*static*/ v8::Handle<v8::Value> wxNode_wxWebViewHistoryItem::_init(const v8::Arguments& args) {
  v8::HandleScope scope;

  
  
  /*
   * id: _53949
   */
  if(args.Length() == 1 && (args[0]->IsNull() || (args[0]->IsObject() && wxNode_wxWebViewHistoryItem::AssignableFrom(args[0]->ToObject()->GetConstructorName())))) {
    wxNode_wxWebViewHistoryItem* arg0 = args[0]->IsNull() ? NULL : wxNodeObject::unwrap<wxNode_wxWebViewHistoryItem>(args[0]->ToObject()); /* type: _68217  */
    

    wxNode_wxWebViewHistoryItem *self = new wxNode_wxWebViewHistoryItem(*arg0);
    NodeExEvtHandlerImpl* evtHandler = dynamic_cast<NodeExEvtHandlerImpl*>(self);
    self->wrap(args.This(), self, evtHandler);
    return args.This();
  }
  
  /*
   * id: _53950
   */
  if(args.Length() == 2 && args[0]->IsString() && args[1]->IsString()) {
    v8::String::AsciiValue url(args[0]->ToString()); /* type: _14975  */
    v8::String::AsciiValue title(args[1]->ToString()); /* type: _14975  */
    

    wxNode_wxWebViewHistoryItem *self = new wxNode_wxWebViewHistoryItem(*url, *title);
    NodeExEvtHandlerImpl* evtHandler = dynamic_cast<NodeExEvtHandlerImpl*>(self);
    self->wrap(args.This(), self, evtHandler);
    return args.This();
  }
  
  

  std::ostringstream errStr;
  errStr << "Could not find matching constructor for arguments (class name: wxWebViewHistoryItem).\n";
  errStr << "  arg count: " << args.Length() << "\n";
  for(int i = 0; i < args.Length(); i++) {
    v8::String::AsciiValue argStr(args[i]);
    errStr << "  arg[" << i << "]: " << *argStr << "\n";
  }
  return v8::ThrowException(v8::Exception::TypeError(v8::String::New(errStr.str().c_str())));
}


/*static*/ v8::Handle<v8::Value> wxNode_wxWebViewHistoryItem::_GetUrl(const v8::Arguments& args) {
  v8::HandleScope scope;
  wxNode_wxWebViewHistoryItem* self = unwrap<wxNode_wxWebViewHistoryItem>(args.This());

  
  /*
   * id: _53951
   */
  if(args.Length() == 0) {
    

    wxString returnVal = self->GetUrl();

    return scope.Close(v8::String::New(returnVal.mb_str()));
  }
  

  std::ostringstream errStr;
  errStr << "Could not find matching method for arguments (method name: wxWebViewHistoryItem::GetUrl).\n";
  errStr << "  arg count: " << args.Length() << "\n";
  for(int i = 0; i < args.Length(); i++) {
    v8::String::AsciiValue argStr(args[i]);
    errStr << "  arg[" << i << "]: " << *argStr << "\n";
  }
  return v8::ThrowException(v8::Exception::TypeError(v8::String::New(errStr.str().c_str())));
}

/*static*/ v8::Handle<v8::Value> wxNode_wxWebViewHistoryItem::_GetTitle(const v8::Arguments& args) {
  v8::HandleScope scope;
  wxNode_wxWebViewHistoryItem* self = unwrap<wxNode_wxWebViewHistoryItem>(args.This());

  
  /*
   * id: _53952
   */
  if(args.Length() == 0) {
    

    wxString returnVal = self->GetTitle();

    return scope.Close(v8::String::New(returnVal.mb_str()));
  }
  

  std::ostringstream errStr;
  errStr << "Could not find matching method for arguments (method name: wxWebViewHistoryItem::GetTitle).\n";
  errStr << "  arg count: " << args.Length() << "\n";
  for(int i = 0; i < args.Length(); i++) {
    v8::String::AsciiValue argStr(args[i]);
    errStr << "  arg[" << i << "]: " << *argStr << "\n";
  }
  return v8::ThrowException(v8::Exception::TypeError(v8::String::New(errStr.str().c_str())));
}



