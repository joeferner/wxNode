
#ifndef _wxNode_wxList_
#define _wxNode_wxList_

class wxNode_wxList : public wxList {
  public:
  static void AddMethods(v8::Handle<v8::FunctionTemplate> target) {}
  static bool AssignableFrom(const v8::Handle<v8::String>& className) { return false; }
  static bool AssignableFrom(const char* className) { return false; }
  static v8::Handle<v8::Value> New(wxList* obj) { return v8::Undefined(); }
  static v8::Handle<v8::Value> NewCopy(wxList& obj) { return v8::Undefined(); }

};

#endif
