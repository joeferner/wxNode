
#ifndef _wxNode_wxArrayInt_
#define _wxNode_wxArrayInt_

class  wxNode_wxArrayInt :  public wxArrayInt {
public:
  static void AddMethods(v8::Handle<v8::FunctionTemplate> target) {}
  static bool AssignableFrom(const v8::Handle<v8::String>& className) { return false; }
  static bool AssignableFrom(const char* className) { return false; }
  static v8::Handle<v8::Value> New(wxArrayInt* obj) { return v8::Undefined(); }
  static v8::Handle<v8::Value> NewCopy(wxArrayInt& obj) { return v8::Undefined(); }
};

#endif
