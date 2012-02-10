
#ifndef _wxNode_wxDropTarget_
#define _wxNode_wxDropTarget_

class wxNode_wxDropTarget : public wxDropTarget {
  public:
  static void AddMethods(v8::Handle<v8::FunctionTemplate> target) {}
  static bool AssignableFrom(const v8::Handle<v8::String>& className) { return false; }
  static bool AssignableFrom(const char* className) { return false; }
  static v8::Handle<v8::Value> New(wxDropTarget* obj) { return v8::Undefined(); }
  static v8::Handle<v8::Value> NewCopy(wxDropTarget& obj) { return v8::Undefined(); }

};

#endif
