
#include <wx/icon.h>

#ifndef _wxNode_wxIcon_
#define _wxNode_wxIcon_

class wxNode_wxIcon : public wxIcon {
public:
  static void AddMethods(v8::Handle<v8::FunctionTemplate> target) {}
  static bool AssignableFrom(const v8::Handle<v8::String>& className) { return false; }
  static bool AssignableFrom(const char* className) { return false; }
};

#endif
