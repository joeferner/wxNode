
#ifndef _wxNode_wxScrollHelper_
#define _wxNode_wxScrollHelper_

class  wxNode_wxScrollHelper : public wxScrollHelper {
public:
  static void AddMethods(v8::Handle<v8::FunctionTemplate> target) {}
  static bool AssignableFrom(const v8::Handle<v8::String>& className) { return false; }
  static bool AssignableFrom(const char* className) { return false; }
  static v8::Handle<v8::Value> New(wxScrollHelper* obj) { return v8::Undefined(); }
  static v8::Handle<v8::Value> NewCopy(wxScrollHelper& obj) { return v8::Undefined(); }

};

#endif
