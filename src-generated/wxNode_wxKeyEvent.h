
#ifndef _wxNode_wxKeyEvent_h_
#define _wxNode_wxKeyEvent_h_

#include "wxnode.h"
#include "wxNode_wxEvtHandler.h"
class wxNode_wxEvtHandler;
class wxNode_wxEvent;
class wxNode_wxKeyEvent;


class wxNode_wxKeyEvent : public wxKeyEvent, public wxNodeObject, public NodeExEvtHandlerImpl {
public:
  static void Init(v8::Handle<v8::Object> target);
  static void AddMethods(v8::Handle<v8::FunctionTemplate> target);
  virtual v8::Handle<v8::Object> self() { return m_self; }
  static bool AssignableFrom(const v8::Handle<v8::String>& className);
  static bool AssignableFrom(const char* className);
  static v8::Handle<v8::Value> New(wxKeyEvent* obj);
  static v8::Handle<v8::Value> New(wxNode_wxKeyEvent* obj);
  static v8::Handle<v8::Value> NewCopy(wxKeyEvent& obj);

  
  
  wxNode_wxKeyEvent(int keyType);
  
  wxNode_wxKeyEvent();
  
  wxNode_wxKeyEvent(wxKeyEvent& evt);
  
  wxNode_wxKeyEvent(int eventType, wxKeyEvent& evt);
  
  

private:
  static v8::Handle<v8::Value> _init(const v8::Arguments& args);

  static v8::Handle<v8::Value> _GetKeyCode(const v8::Arguments& args);
  static v8::Handle<v8::Value> _IsKeyInCategory(const v8::Arguments& args);
  static v8::Handle<v8::Value> _GetUnicodeKey(const v8::Arguments& args);
  static v8::Handle<v8::Value> _GetRawKeyCode(const v8::Arguments& args);
  static v8::Handle<v8::Value> _GetRawKeyFlags(const v8::Arguments& args);
  static v8::Handle<v8::Value> _GetPosition(const v8::Arguments& args);
  static v8::Handle<v8::Value> _GetX(const v8::Arguments& args);
  static v8::Handle<v8::Value> _GetY(const v8::Arguments& args);
  static v8::Handle<v8::Value> _DoAllowNextEvent(const v8::Arguments& args);
  static v8::Handle<v8::Value> _IsNextEventAllowed(const v8::Arguments& args);
  static v8::Handle<v8::Value> _Clone(const v8::Arguments& args);
  static v8::Handle<v8::Value> _GetEventCategory(const v8::Arguments& args);
  static v8::Handle<v8::Value> _GetClassInfo(const v8::Arguments& args);
  static v8::Handle<v8::Value> _wxCreateObject(const v8::Arguments& args);
  

  static v8::Persistent<v8::FunctionTemplate> s_ct;
};

#endif
