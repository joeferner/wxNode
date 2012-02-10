
#ifndef _wxNode_wxLayoutConstraints_
#define _wxNode_wxLayoutConstraints_

class wxNode_wxLayoutConstraints : public wxLayoutConstraints {
  public:
  static void AddMethods(v8::Handle<v8::FunctionTemplate> target) {}
  static bool AssignableFrom(const v8::Handle<v8::String>& className) { return false; }
  static bool AssignableFrom(const char* className) { return false; }
  static v8::Handle<v8::Value> New(wxLayoutConstraints* obj) { return v8::Undefined(); }
  static v8::Handle<v8::Value> NewCopy(wxLayoutConstraints& obj) { return v8::Undefined(); }
};

#endif
