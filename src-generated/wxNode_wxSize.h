
#ifndef _wxNode_wxSize_h_
#define _wxNode_wxSize_h_

#include "wxnode.h"
#include "wxNode_wxEvtHandler.h"
class wxNode_wxSize;
class wxNode_wxPoint;


class wxNode_wxSize : public wxSize, public wxNodeObject, public NodeExEvtHandlerImpl {
public:
  static void Init(v8::Handle<v8::Object> target);
  static void AddMethods(v8::Handle<v8::FunctionTemplate> target);
  virtual v8::Handle<v8::Object> self() { return m_self; }
  static bool AssignableFrom(const v8::Handle<v8::String>& className);
  static bool AssignableFrom(const char* className);
  static v8::Handle<v8::Value> New(wxSize* obj);
  static v8::Handle<v8::Value> New(wxNode_wxSize* obj);
  static v8::Handle<v8::Value> NewCopy(wxSize& obj);

  
  
  wxNode_wxSize(wxSize& arg0);
  
  wxNode_wxSize();
  
  wxNode_wxSize(int xx, int yy);
  
  

private:
  static v8::Handle<v8::Value> _init(const v8::Arguments& args);

  static v8::Handle<v8::Value> _IncTo(const v8::Arguments& args);
  static v8::Handle<v8::Value> _DecTo(const v8::Arguments& args);
  static v8::Handle<v8::Value> _IncBy(const v8::Arguments& args);
  static v8::Handle<v8::Value> _DecBy(const v8::Arguments& args);
  static v8::Handle<v8::Value> _Scale(const v8::Arguments& args);
  static v8::Handle<v8::Value> _Set(const v8::Arguments& args);
  static v8::Handle<v8::Value> _SetWidth(const v8::Arguments& args);
  static v8::Handle<v8::Value> _SetHeight(const v8::Arguments& args);
  static v8::Handle<v8::Value> _GetWidth(const v8::Arguments& args);
  static v8::Handle<v8::Value> _GetHeight(const v8::Arguments& args);
  static v8::Handle<v8::Value> _IsFullySpecified(const v8::Arguments& args);
  static v8::Handle<v8::Value> _SetDefaults(const v8::Arguments& args);
  static v8::Handle<v8::Value> _GetX(const v8::Arguments& args);
  static v8::Handle<v8::Value> _GetY(const v8::Arguments& args);
  

  static v8::Persistent<v8::FunctionTemplate> s_ct;
};

#endif
