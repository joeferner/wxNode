
#ifndef _wxNode_wxArrayString_h_
#define _wxNode_wxArrayString_h_

class  wxNode_wxArrayString :  public wxArrayString {
public:
  static void AddMethods(v8::Handle<v8::FunctionTemplate> target) {}
  static bool AssignableFrom(const v8::Handle<v8::String>& className) { return false; }
  static bool AssignableFrom(const char* className) { return false; }
  static v8::Handle<v8::Value> New(wxArrayString* obj) { return v8::Undefined(); }
  static v8::Handle<v8::Value> NewCopy(wxArrayString& obj) { return v8::Undefined(); }
};

#endif
