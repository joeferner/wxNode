
#ifndef _wxNode_wxNonOwnedWindow_h_
#define _wxNode_wxNonOwnedWindow_h_

#include "wxnode.h"
#include "wxNode_wxEvtHandler.h"
class wxNode_wxEvtHandler;
class wxNode_wxWindow;
class wxNode_wxRegion;
class wxNode_wxGraphicsPath;


class wxNode_wxNonOwnedWindow : public wxNonOwnedWindow, public wxNodeObject, public NodeExEvtHandlerImpl {
public:
  static void Init(v8::Handle<v8::Object> target);
  static void AddMethods(v8::Handle<v8::FunctionTemplate> target);
  virtual v8::Handle<v8::Object> self() { return m_self; }

protected:
  
  
  wxNode_wxNonOwnedWindow();
  
  

private:
  static v8::Handle<v8::Value> _init(const v8::Arguments& args);

  static v8::Handle<v8::Value> _SetShape(const v8::Arguments& args);
  

  static v8::Persistent<v8::FunctionTemplate> s_ct;
};

#endif
