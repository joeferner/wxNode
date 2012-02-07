
#ifndef _wxNode_wxStatusBar_
#define _wxNode_wxStatusBar_

class wxNode_wxStatusBar : public wxStatusBar {
public:
  static void AddMethods(v8::Handle<v8::FunctionTemplate> target) {}
  static bool AssignableFrom(const v8::Handle<v8::String>& className) { return false; }
  static bool AssignableFrom(const char* className) { return false; }
};

#endif
