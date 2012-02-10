
#ifndef _wxNode_wxRect_
#define _wxNode_wxRect_

class  wxNode_wxRect : public wxRect {
public:
  static void AddMethods(v8::Handle<v8::FunctionTemplate> target) {}
  static bool AssignableFrom(const v8::Handle<v8::String>& className) { return false; }
  static bool AssignableFrom(const char* className) { return false; }
  static v8::Handle<v8::Value> New(wxRect* obj) { return v8::Undefined(); }
  static v8::Handle<v8::Value> NewCopy(wxRect& obj) { return v8::Undefined(); }
};

#endif
