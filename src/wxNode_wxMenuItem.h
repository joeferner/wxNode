
#include "wx/menuitem.h"

#ifndef _wxNode_wxMenuItem_
#define _wxNode_wxMenuItem_

class wxNode_wxMenuItem : public wxMenuItem {
public:
  static void AddMethods(v8::Handle<v8::FunctionTemplate> target) {}
  static bool AssignableFrom(const v8::Handle<v8::String>& className) { return false; }
  static bool AssignableFrom(const char* className) { return false; }
  static v8::Handle<v8::Value> New(wxMenuItem* obj) { return v8::Undefined(); }
  static v8::Handle<v8::Value> NewCopy(wxMenuItem& obj) { return v8::Undefined(); }
};

#endif
