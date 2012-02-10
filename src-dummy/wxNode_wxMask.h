
#ifndef _wxNode_wxMask_
#define _wxNode_wxMask_

class wxNode_wxMask : public wxMask {
  public:
  static void AddMethods(v8::Handle<v8::FunctionTemplate> target) {}
  static bool AssignableFrom(const v8::Handle<v8::String>& className) { return false; }
  static bool AssignableFrom(const char* className) { return false; }
  static v8::Handle<v8::Value> New(wxMask* obj) { return v8::Undefined(); }
  static v8::Handle<v8::Value> NewCopy(wxMask& obj) { return v8::Undefined(); }

};

#endif
