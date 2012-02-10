
#ifndef _wxNode_wxMenuItemList_
#define _wxNode_wxMenuItemList_

class wxNode_wxMenuItemList : public wxMenuItemList {
public:
  static void AddMethods(v8::Handle<v8::FunctionTemplate> target) {}
  static v8::Handle<v8::Value> New(wxMenuItemList* obj) { return v8::Undefined(); }
  static v8::Handle<v8::Value> NewCopy(wxMenuItemList& obj) { return v8::Undefined(); }
};

#endif
