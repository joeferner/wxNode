
#ifndef _wxNode_wxCommandEvent_h_
#define _wxNode_wxCommandEvent_h_

#include "wxnode.h"
#include "wxNode_wxEvtHandler.h"
class wxNode_wxEvtHandler;
class wxNode_wxEvent;
class wxNode_wxCommandEvent;
class wxNode_wxClientData;


class wxNode_wxCommandEvent : public wxCommandEvent, public wxNodeObject, public NodeExEvtHandlerImpl {
public:
  static void Init(v8::Handle<v8::Object> target);
  static void AddMethods(v8::Handle<v8::FunctionTemplate> target);
  virtual v8::Handle<v8::Object> self() { return m_self; }
  static bool AssignableFrom(const v8::Handle<v8::String>& className);
  static bool AssignableFrom(const char* className);
  static v8::Handle<v8::Value> New(const wxCommandEvent* obj);
  static v8::Handle<v8::Value> New(const wxNode_wxCommandEvent* obj);
  static v8::Handle<v8::Value> NewCopy(const wxCommandEvent& obj);

  
  
  wxNode_wxCommandEvent(int commandType, int winid);
  
  wxNode_wxCommandEvent(int commandType);
  
  wxNode_wxCommandEvent();
  
  wxNode_wxCommandEvent(wxCommandEvent& event);
  
  

private:
  static v8::Handle<v8::Value> _init(const v8::Arguments& args);

  static v8::Handle<v8::Value> _SetClientData(const v8::Arguments& args);
  static v8::Handle<v8::Value> _GetClientData(const v8::Arguments& args);
  static v8::Handle<v8::Value> _SetClientObject(const v8::Arguments& args);
  static v8::Handle<v8::Value> _GetClientObject(const v8::Arguments& args);
  static v8::Handle<v8::Value> _GetString(const v8::Arguments& args);
  static v8::Handle<v8::Value> _GetSelection(const v8::Arguments& args);
  static v8::Handle<v8::Value> _IsChecked(const v8::Arguments& args);
  static v8::Handle<v8::Value> _IsSelection(const v8::Arguments& args);
  static v8::Handle<v8::Value> _Clone(const v8::Arguments& args);
  static v8::Handle<v8::Value> _GetEventCategory(const v8::Arguments& args);
  static v8::Handle<v8::Value> _GetClassInfo(const v8::Arguments& args);
  static v8::Handle<v8::Value> _wxCreateObject(const v8::Arguments& args);
  
  

  static v8::Persistent<v8::FunctionTemplate> s_ct;
};

#endif
