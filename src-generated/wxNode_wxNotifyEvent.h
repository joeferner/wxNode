
#ifndef _wxNode_wxNotifyEvent_h_
#define _wxNode_wxNotifyEvent_h_

#include "wxnode.h"
#include "wxNode_wxEvtHandler.h"
class wxNode_wxEvtHandler;
class wxNode_wxCommandEvent;
class wxNode_wxNotifyEvent;


class wxNode_wxNotifyEvent : public wxNotifyEvent, public wxNodeObject, public NodeExEvtHandlerImpl {
public:
  static void Init(v8::Handle<v8::Object> target);
  static void AddMethods(v8::Handle<v8::FunctionTemplate> target);
  virtual v8::Handle<v8::Object> self() { return m_self; }
  static bool AssignableFrom(const v8::Handle<v8::String>& className);
  static bool AssignableFrom(const char* className);
  static v8::Handle<v8::Value> New(const wxNotifyEvent* obj);
  static v8::Handle<v8::Value> New(const wxNode_wxNotifyEvent* obj);
  static v8::Handle<v8::Value> NewCopy(const wxNotifyEvent& obj);

  
  
  wxNode_wxNotifyEvent(int commandType, int winid);
  
  wxNode_wxNotifyEvent(int commandType);
  
  wxNode_wxNotifyEvent();
  
  wxNode_wxNotifyEvent(wxNotifyEvent& event);
  
  

private:
  static v8::Handle<v8::Value> _init(const v8::Arguments& args);

  static v8::Handle<v8::Value> _Veto(const v8::Arguments& args);
  static v8::Handle<v8::Value> _Allow(const v8::Arguments& args);
  static v8::Handle<v8::Value> _IsAllowed(const v8::Arguments& args);
  static v8::Handle<v8::Value> _Clone(const v8::Arguments& args);
  static v8::Handle<v8::Value> _GetClassInfo(const v8::Arguments& args);
  static v8::Handle<v8::Value> _wxCreateObject(const v8::Arguments& args);
  

  static v8::Persistent<v8::FunctionTemplate> s_ct;
};

#endif
