
#ifndef _wxNode_wxInputStream_
#define _wxNode_wxInputStream_

class wxNode_wxInputStream : public wxInputStream, public wxNodeObject {
  public:
  static void AddMethods(v8::Handle<v8::FunctionTemplate> target) { wxNodeObject::AddMethods(target); }
  static bool AssignableFrom(const v8::Handle<v8::String>& className) { return false; }
  static bool AssignableFrom(const char* className) { return false; }
  static v8::Handle<v8::Value> New(wxInputStream* obj) { return v8::Undefined(); }
  static v8::Handle<v8::Value> NewCopy(wxInputStream& obj) { return v8::Undefined(); }

};

#endif
