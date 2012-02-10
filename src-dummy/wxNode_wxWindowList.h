
#ifndef _wxNode_wxWindowList_
#define _wxNode_wxWindowList_

class wxNode_wxWindowList : public wxWindowList {
public:
  static void AddMethods(v8::Handle<v8::FunctionTemplate> target) {}
  static v8::Handle<v8::Value> New(const wxWindowList* obj) { return v8::Undefined(); }
  static v8::Handle<v8::Value> NewCopy(const wxWindowList& obj) { return v8::Undefined(); }
};

#endif
