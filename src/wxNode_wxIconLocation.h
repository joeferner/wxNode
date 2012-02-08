
#ifndef _wxNode_wxIconLocation_
#define _wxNode_wxIconLocation_

class  wxNode_wxIconLocation :  public wxIconLocation {
public:
  static void AddMethods(v8::Handle<v8::FunctionTemplate> target) {}
  static bool AssignableFrom(const v8::Handle<v8::String>& className) { return false; }
  static bool AssignableFrom(const char* className) { return false; }
  static v8::Handle<v8::Value> New(wxIconLocation* obj) { return v8::Undefined(); }
  static v8::Handle<v8::Value> NewCopy(wxIconLocation& obj) { return v8::Undefined(); }
};

#endif
