
#ifndef _wxNode_wxIconBundle_
#define _wxNode_wxIconBundle_

class wxNode_wxIconBundle : public wxIconBundle {
public:
  static void AddMethods(v8::Handle<v8::FunctionTemplate> target) {}
  static bool AssignableFrom(const v8::Handle<v8::String>& className) { return false; }
  static bool AssignableFrom(const char* className) { return false; }
  static v8::Handle<v8::Value> New(wxIconBundle* obj) { return v8::Undefined(); }
  static v8::Handle<v8::Value> NewCopy(wxIconBundle& obj) { return v8::Undefined(); }
};

#endif
