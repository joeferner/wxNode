
#ifndef _wxNode_wxEvent_h_
#define _wxNode_wxEvent_h_

#include "wxnode.h"
#include "wxNode_wxEvtHandler.h"
class wxNode_wxEvtHandler;
class wxNode_wxObject;


class wxNode_wxEvent : public wxEvent, public wxNodeObject, public NodeExEvtHandlerImpl {
public:
  static void Init(v8::Handle<v8::Object> target);
  static void AddMethods(v8::Handle<v8::FunctionTemplate> target);
  virtual v8::Handle<v8::Object> self() { return m_self; }
  static bool AssignableFrom(const v8::Handle<v8::String>& className);
  static bool AssignableFrom(const char* className);
  static v8::Handle<v8::Value> New(const wxEvent* obj);
  static v8::Handle<v8::Value> New(const wxNode_wxEvent* obj);
  static v8::Handle<v8::Value> NewCopy(const wxEvent& obj);

  

private:
  static v8::Handle<v8::Value> _init(const v8::Arguments& args);

  static v8::Handle<v8::Value> _SetEventType(const v8::Arguments& args);
  static v8::Handle<v8::Value> _GetEventType(const v8::Arguments& args);
  static v8::Handle<v8::Value> _GetEventObject(const v8::Arguments& args);
  static v8::Handle<v8::Value> _SetEventObject(const v8::Arguments& args);
  static v8::Handle<v8::Value> _GetTimestamp(const v8::Arguments& args);
  static v8::Handle<v8::Value> _SetTimestamp(const v8::Arguments& args);
  static v8::Handle<v8::Value> _GetId(const v8::Arguments& args);
  static v8::Handle<v8::Value> _SetId(const v8::Arguments& args);
  static v8::Handle<v8::Value> _Skip(const v8::Arguments& args);
  static v8::Handle<v8::Value> _GetSkipped(const v8::Arguments& args);
  static v8::Handle<v8::Value> _Clone(const v8::Arguments& args);
  static v8::Handle<v8::Value> _GetEventCategory(const v8::Arguments& args);
  static v8::Handle<v8::Value> _IsCommandEvent(const v8::Arguments& args);
  static v8::Handle<v8::Value> _ShouldPropagate(const v8::Arguments& args);
  static v8::Handle<v8::Value> _StopPropagation(const v8::Arguments& args);
  static v8::Handle<v8::Value> _ResumePropagation(const v8::Arguments& args);
  static v8::Handle<v8::Value> _WasProcessed(const v8::Arguments& args);
  static v8::Handle<v8::Value> _ShouldProcessOnlyIn(const v8::Arguments& args);
  static v8::Handle<v8::Value> _DidntHonourProcessOnlyIn(const v8::Arguments& args);
  static v8::Handle<v8::Value> _GetClassInfo(const v8::Arguments& args);
  
  

  static v8::Persistent<v8::FunctionTemplate> s_ct;
};

#endif
