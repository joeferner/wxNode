
#ifndef _wxNode_wxLayoutConstraints_
#define _wxNode_wxLayoutConstraints_

class wxNode_wxLayoutConstraints : public wxLayoutConstraints {
  public:
  static void AddMethods(v8::Handle<v8::FunctionTemplate> target) {}
  static bool AssignableFrom(const v8::Handle<v8::String>& className) { return false; }
  static bool AssignableFrom(const char* className) { return false; }
};

#endif
