
#ifndef _wxNode_wxClassInfo_
#define _wxNode_wxClassInfo_

class wxNode_wxClassInfo : public wxClassInfo {
public:
  static void AddMethods(v8::Handle<v8::FunctionTemplate> target) {}
  static v8::Handle<v8::Value> New(wxClassInfo* obj) { return v8::Undefined(); }
  static v8::Handle<v8::Value> NewCopy(wxClassInfo& obj) { return v8::Undefined(); }
};

#endif
