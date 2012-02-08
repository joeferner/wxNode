
#ifndef _wxNode_wxValidator_
#define _wxNode_wxValidator_

class wxNode_wxValidator : public wxValidator {
 public:
  static void AddMethods(v8::Handle<v8::FunctionTemplate> target) {}
  static bool AssignableFrom(const v8::Handle<v8::String>& className) { return false; }
  static bool AssignableFrom(const char* className) { return false; }
  static v8::Handle<v8::Value> New(wxValidator* obj) { return v8::Undefined(); }
  static v8::Handle<v8::Value> NewCopy(wxValidator& obj) { return v8::Undefined(); }
};

#endif
