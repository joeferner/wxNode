
#ifndef _wxNode_wxLogInterposer_
#define _wxNode_wxLogInterposer_

class wxNode_wxLogInterposer : public wxLogInterposer, public wxNodeObject {
  public:
  static void AddMethods(v8::Handle<v8::FunctionTemplate> target) { wxNodeObject::AddMethods(target); }
  static bool AssignableFrom(const v8::Handle<v8::String>& className) { return false; }
  static bool AssignableFrom(const char* className) { return false; }
  static v8::Handle<v8::Value> New(wxLogInterposer* obj) { return v8::Undefined(); }
  static v8::Handle<v8::Value> NewCopy(wxLogInterposer& obj) { return v8::Undefined(); }

};

#endif
