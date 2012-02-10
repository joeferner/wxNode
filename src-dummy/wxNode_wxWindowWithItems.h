
#ifndef _wxNode_wxWindowWithItems_
#define _wxNode_wxWindowWithItems_

#include "wxNode_wxControl.h"

class  wxNode_wxWindowWithItems {
public:
  static void AddMethods(v8::Handle<v8::FunctionTemplate> target) { wxNode_wxControl::AddMethods(target); }
};

#endif
