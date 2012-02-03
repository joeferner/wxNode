
#ifndef _wxNode_wxNonOwnedWindow_h_
#define _wxNode_wxNonOwnedWindow_h_

class wxNode_wxWindow;
#include "wxnode.h"
#include "wxNode_wxEvtHandler.h"
#include "wxNode_wxNonOwnedWindow.h"
#include "wxNode_wxEvtHandler.h"
#include "wxNode_wxWindow.h"
#include "wxNode_wxRegion.h"
#include "wxNode_wxGraphicsPath.h"


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
