
#ifndef _wxNode_wxItemContainerImmutable_h_
#define _wxNode_wxItemContainerImmutable_h_

#include "wxnode.h"
#include "wxNode_wxEvtHandler.h"


class wxNode_wxItemContainerImmutable : public wxItemContainerImmutable, public wxNodeObject, public NodeExEvtHandlerImpl {
public:
  static void Init(v8::Handle<v8::Object> target);
  static void AddMethods(v8::Handle<v8::FunctionTemplate> target);
  virtual v8::Handle<v8::Object> self() { return m_self; }
  static bool AssignableFrom(const v8::Handle<v8::String>& className);
  static bool AssignableFrom(const char* className);

  

private:
  static v8::Handle<v8::Value> _init(const v8::Arguments& args);

  static v8::Handle<v8::Value> _GetCount(const v8::Arguments& args);
  static v8::Handle<v8::Value> _IsEmpty(const v8::Arguments& args);
  static v8::Handle<v8::Value> _GetString(const v8::Arguments& args);
  static v8::Handle<v8::Value> _GetStrings(const v8::Arguments& args);
  static v8::Handle<v8::Value> _SetString(const v8::Arguments& args);
  static v8::Handle<v8::Value> _FindString(const v8::Arguments& args);
  static v8::Handle<v8::Value> _SetSelection(const v8::Arguments& args);
  static v8::Handle<v8::Value> _GetSelection(const v8::Arguments& args);
  static v8::Handle<v8::Value> _SetStringSelection(const v8::Arguments& args);
  static v8::Handle<v8::Value> _GetStringSelection(const v8::Arguments& args);
  static v8::Handle<v8::Value> _Select(const v8::Arguments& args);
  

  static v8::Persistent<v8::FunctionTemplate> s_ct;
};

#endif
