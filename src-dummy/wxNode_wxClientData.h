
#ifndef _wxNode_wxClientData_
#define _wxNode_wxClientData_

class  wxNode_wxClientData :  public wxClientData {
public:
  static void AddMethods(v8::Handle<v8::FunctionTemplate> target) {}
  static bool AssignableFrom(const v8::Handle<v8::String>& className) { return false; }
  static bool AssignableFrom(const char* className) { return false; }
  static v8::Handle<v8::Value> New(wxClientData* obj) { return v8::Undefined(); }
  static v8::Handle<v8::Value> NewCopy(wxClientData& obj) { return v8::Undefined(); }
};

#endif
