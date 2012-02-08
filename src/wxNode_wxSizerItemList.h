
#ifndef _wxNode_wxSizerItemList_
#define _wxNode_wxSizerItemList_

class wxNode_wxSizerItemList : public wxSizerItemList {
public:
  static void AddMethods(v8::Handle<v8::FunctionTemplate> target) {}
  static v8::Handle<v8::Value> New(wxSizerItemList* obj) { return v8::Undefined(); }
  static v8::Handle<v8::Value> NewCopy(wxSizerItemList& obj) { return v8::Undefined(); }
};

#endif
