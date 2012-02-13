
#ifndef _wxNode_wxBoxSizer_h_
#define _wxNode_wxBoxSizer_h_

#include "wxnode.h"
#include "wxNode_wxEvtHandler.h"
class wxNode_wxEvtHandler;
class wxNode_wxSizer;
class wxNode_wxBoxSizer;


class wxNode_wxBoxSizer : public wxBoxSizer, public wxNodeObject, public NodeExEvtHandlerImpl {
public:
  static void Init(v8::Handle<v8::Object> target);
  static void AddMethods(v8::Handle<v8::FunctionTemplate> target);
  virtual v8::Handle<v8::Object> self() { return m_self; }
  static bool AssignableFrom(const v8::Handle<v8::String>& className);
  static bool AssignableFrom(const char* className);
  static v8::Handle<v8::Value> New(const wxBoxSizer* obj);
  static v8::Handle<v8::Value> New(const wxNode_wxBoxSizer* obj);
  static v8::Handle<v8::Value> NewCopy(const wxBoxSizer& obj);

  
  
  wxNode_wxBoxSizer(wxBoxSizer& arg0);
  
  wxNode_wxBoxSizer(int orient);
  
  

private:
  static v8::Handle<v8::Value> _init(const v8::Arguments& args);

  static v8::Handle<v8::Value> _AddSpacer(const v8::Arguments& args);
  static v8::Handle<v8::Value> _GetOrientation(const v8::Arguments& args);
  static v8::Handle<v8::Value> _IsVertical(const v8::Arguments& args);
  static v8::Handle<v8::Value> _SetOrientation(const v8::Arguments& args);
  static v8::Handle<v8::Value> _CalcMin(const v8::Arguments& args);
  static v8::Handle<v8::Value> _RecalcSizes(const v8::Arguments& args);
  static v8::Handle<v8::Value> _GetClassInfo(const v8::Arguments& args);
  
  

  static v8::Persistent<v8::FunctionTemplate> s_ct;
};

#endif
