
#ifndef _wxNode_wxToolBar_
#define _wxNode_wxToolBar_

class wxNode_wxToolBar : public wxToolBar {
public:
  static void AddMethods(v8::Handle<v8::FunctionTemplate> target) {}
  static bool AssignableFrom(const v8::Handle<v8::String>& className) { return false; }
  static bool AssignableFrom(const char* className) { return false; }
  static v8::Handle<v8::Value> New(wxToolBar* obj) { return v8::Undefined(); }
  static v8::Handle<v8::Value> NewCopy(wxToolBar& obj) { return v8::Undefined(); }
};

#endif
