
#ifndef _wxNode_wxInfoBar_h_
#define _wxNode_wxInfoBar_h_

#include "wxnode.h"
#include "wxNode_wxEvtHandler.h"
class wxNode_wxEvtHandler;
class wxNode_wxControl;
class wxNode_wxWindow;


class wxNode_wxInfoBar : public wxInfoBar, public wxNodeObject, public NodeExEvtHandlerImpl {
public:
  static void Init(v8::Handle<v8::Object> target);
  static void AddMethods(v8::Handle<v8::FunctionTemplate> target);
  virtual v8::Handle<v8::Object> self() { return m_self; }
  static bool AssignableFrom(const v8::Handle<v8::String>& className);
  static bool AssignableFrom(const char* className);
  static v8::Handle<v8::Value> New(const wxInfoBar* obj);
  static v8::Handle<v8::Value> New(const wxNode_wxInfoBar* obj);
  static v8::Handle<v8::Value> NewCopy(const wxInfoBar& obj);

  
  
  wxNode_wxInfoBar();
  
  wxNode_wxInfoBar(wxWindow* parent, int winid);
  
  wxNode_wxInfoBar(wxWindow* parent);
  
  

private:
  static v8::Handle<v8::Value> _init(const v8::Arguments& args);

  static v8::Handle<v8::Value> _ShowMessage(const v8::Arguments& args);
  static v8::Handle<v8::Value> _Dismiss(const v8::Arguments& args);
  static v8::Handle<v8::Value> _AddButton(const v8::Arguments& args);
  static v8::Handle<v8::Value> _RemoveButton(const v8::Arguments& args);
  
  

  static v8::Persistent<v8::FunctionTemplate> s_ct;
};

#endif
