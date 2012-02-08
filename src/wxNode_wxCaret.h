
#ifndef _wxNode_wxCaret_
#define _wxNode_wxCaret_

class wxNode_wxCaret : public wxCaret {
 public:
  static void AddMethods(v8::Handle<v8::FunctionTemplate> target) {}
  static bool AssignableFrom(const v8::Handle<v8::String>& className) { return false; }
  static bool AssignableFrom(const char* className) { return false; }
  static v8::Handle<v8::Value> New(wxCaret* obj) { return v8::Undefined(); }
  static v8::Handle<v8::Value> NewCopy(wxCaret& obj) { return v8::Undefined(); }

};

#endif
