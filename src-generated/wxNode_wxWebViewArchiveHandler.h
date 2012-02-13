
#ifndef _wxNode_wxWebViewArchiveHandler_h_
#define _wxNode_wxWebViewArchiveHandler_h_

#include "wxnode.h"
#include "wxNode_wxEvtHandler.h"
class wxNode_wxEvtHandler;
class wxNode_wxWebViewHandler;
class wxNode_wxWebViewArchiveHandler;


class wxNode_wxWebViewArchiveHandler : public wxWebViewArchiveHandler, public wxNodeObject, public NodeExEvtHandlerImpl {
public:
  static void Init(v8::Handle<v8::Object> target);
  static void AddMethods(v8::Handle<v8::FunctionTemplate> target);
  virtual v8::Handle<v8::Object> self() { return m_self; }
  static bool AssignableFrom(const v8::Handle<v8::String>& className);
  static bool AssignableFrom(const char* className);
  static v8::Handle<v8::Value> New(const wxWebViewArchiveHandler* obj);
  static v8::Handle<v8::Value> New(const wxNode_wxWebViewArchiveHandler* obj);
  static v8::Handle<v8::Value> NewCopy(const wxWebViewArchiveHandler& obj);

  
  
  wxNode_wxWebViewArchiveHandler(wxWebViewArchiveHandler& arg0);
  
  wxNode_wxWebViewArchiveHandler(const wxString& scheme);
  
  

private:
  static v8::Handle<v8::Value> _init(const v8::Arguments& args);

  static v8::Handle<v8::Value> _GetFile(const v8::Arguments& args);
  

  static v8::Persistent<v8::FunctionTemplate> s_ct;
};

#endif
