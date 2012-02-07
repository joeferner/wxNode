
#ifndef _wxNode_wxWindowWithItems_wxControl_wxItemContainer_
#define _wxNode_wxWindowWithItems_wxControl_wxItemContainer_

#include "wxnode.h"

class  wxNode_wxWindowWithItems_wxControl_wxItemContainer : public wxWindowWithItems<wxControl, wxItemContainer> {
public:
  static void AddMethods(v8::Handle<v8::FunctionTemplate> target);
  static bool AssignableFrom(const v8::Handle<v8::String>& className) { return false; }
  static bool AssignableFrom(const char* className) { return false; }
};

#endif
