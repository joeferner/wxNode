
#ifndef _wxNode_wxPoint_h_
#define _wxNode_wxPoint_h_

#include "wxnode.h"
#include "wxNode_wxEvtHandler.h"
class wxNode_wxPoint;
class wxNode_wxRealPoint;


class wxNode_wxPoint : public wxPoint, public wxNodeObject, public NodeExEvtHandlerImpl {
public:
  static void Init(v8::Handle<v8::Object> target);
  static void AddMethods(v8::Handle<v8::FunctionTemplate> target);
  virtual v8::Handle<v8::Object> self() { return m_self; }
  static bool AssignableFrom(const v8::Handle<v8::String>& className);
  static bool AssignableFrom(const char* className);
  static v8::Handle<v8::Value> New(const wxPoint* obj);
  static v8::Handle<v8::Value> New(const wxNode_wxPoint* obj);
  static v8::Handle<v8::Value> NewCopy(const wxPoint& obj);

  
  
  wxNode_wxPoint(wxPoint& arg0);
  
  wxNode_wxPoint();
  
  wxNode_wxPoint(int xx, int yy);
  
  wxNode_wxPoint(wxRealPoint& pt);
  
  

private:
  static v8::Handle<v8::Value> _init(const v8::Arguments& args);

  static v8::Handle<v8::Value> _IsFullySpecified(const v8::Arguments& args);
  static v8::Handle<v8::Value> _SetDefaults(const v8::Arguments& args);
  
  static v8::Handle<v8::Value> _xGet(v8::Local<v8::String> name, const v8::AccessorInfo& info);
  static void _xSet(v8::Local<v8::String> name, v8::Local<v8::Value> val, const v8::AccessorInfo& info);
  static v8::Handle<v8::Value> _yGet(v8::Local<v8::String> name, const v8::AccessorInfo& info);
  static void _ySet(v8::Local<v8::String> name, v8::Local<v8::Value> val, const v8::AccessorInfo& info);
  

  static v8::Persistent<v8::FunctionTemplate> s_ct;
};

#endif
