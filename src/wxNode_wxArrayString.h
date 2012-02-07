
#ifndef _wxNode_wxArrayString_h_
#define _wxNode_wxArrayString_h_

class  wxNode_wxArrayString :  public wxArrayString {
public:
  static void AddMethods(v8::Handle<v8::FunctionTemplate> target) {}
  static bool AssignableFrom(const v8::Handle<v8::String>& className) { return false; }
  static bool AssignableFrom(const char* className) { return false; }
};

#endif
