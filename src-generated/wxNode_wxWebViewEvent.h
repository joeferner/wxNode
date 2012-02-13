
#ifndef _wxNode_wxWebViewEvent_h_
#define _wxNode_wxWebViewEvent_h_

#include "wxnode.h"
#include "wxNode_wxEvtHandler.h"
class wxNode_wxEvtHandler;
class wxNode_wxNotifyEvent;
class wxNode_wxWebViewEvent;


class wxNode_wxWebViewEvent : public wxWebViewEvent, public wxNodeObject, public NodeExEvtHandlerImpl {
public:
  static void Init(v8::Handle<v8::Object> target);
  static void AddMethods(v8::Handle<v8::FunctionTemplate> target);
  virtual v8::Handle<v8::Object> self() { return m_self; }
  static bool AssignableFrom(const v8::Handle<v8::String>& className);
  static bool AssignableFrom(const char* className);
  static v8::Handle<v8::Value> New(const wxWebViewEvent* obj);
  static v8::Handle<v8::Value> New(const wxNode_wxWebViewEvent* obj);
  static v8::Handle<v8::Value> NewCopy(const wxWebViewEvent& obj);

  
  
  wxNode_wxWebViewEvent(wxWebViewEvent& arg0);
  
  wxNode_wxWebViewEvent();
  
  wxNode_wxWebViewEvent(int type, int id, const wxString url, const wxString target);
  
  

private:
  static v8::Handle<v8::Value> _init(const v8::Arguments& args);

  static v8::Handle<v8::Value> _GetURL(const v8::Arguments& args);
  static v8::Handle<v8::Value> _GetTarget(const v8::Arguments& args);
  static v8::Handle<v8::Value> _Clone(const v8::Arguments& args);
  static v8::Handle<v8::Value> _GetClassInfo(const v8::Arguments& args);
  static v8::Handle<v8::Value> _wxCreateObject(const v8::Arguments& args);
  

  static v8::Persistent<v8::FunctionTemplate> s_ct;
};

#endif
