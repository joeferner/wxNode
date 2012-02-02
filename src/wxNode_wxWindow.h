
#include "wxNode_wxEvtHandler.h"

#ifndef _wxNode_wxWindow_
#define _wxNode_wxWindow_

class wxNode_wxWindow : public wxWindow {
public:
  static void AddMethods(v8::Handle<v8::FunctionTemplate> target) { wxNode_wxEvtHandler::AddMethods(target); }
};

#endif
