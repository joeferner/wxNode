
#ifndef _wxNode_wxToolTip_
#define _wxNode_wxToolTip_

class wxNode_wxToolTip : public wxToolTip {
 public:
  static void AddMethods(v8::Handle<v8::FunctionTemplate> target) {}
  static bool AssignableFrom(const v8::Handle<v8::String>& className) { return false; }
  static bool AssignableFrom(const char* className) { return false; }
  static v8::Handle<v8::Value> New(wxToolTip* obj) { return v8::Undefined(); }
  static v8::Handle<v8::Value> NewCopy(wxToolTip& obj) { return v8::Undefined(); }
};

#endif
