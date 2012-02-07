
#ifndef _wxNode_wxColour_
#define _wxNode_wxColour_

class wxNode_wxColour : public wxColour {
public:
  static void AddMethods(v8::Handle<v8::FunctionTemplate> target) {}
  static bool AssignableFrom(const v8::Handle<v8::String>& className) { return false; }
  static bool AssignableFrom(const char* className) { return false; }
};

#endif
