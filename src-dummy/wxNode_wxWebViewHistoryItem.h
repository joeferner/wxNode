
#ifndef _wxNode_wxWebViewHistoryItem_
#define _wxNode_wxWebViewHistoryItem_

class wxNode_wxWebViewHistoryItem : public wxWebViewHistoryItem, public wxNodeObject {
  public:
  static void AddMethods(v8::Handle<v8::FunctionTemplate> target) { wxNodeObject::AddMethods(target); }
  static bool AssignableFrom(const v8::Handle<v8::String>& className) { return false; }
  static bool AssignableFrom(const char* className) { return false; }
  static v8::Handle<v8::Value> New(wxWebViewHistoryItem* obj) { return v8::Undefined(); }
  static v8::Handle<v8::Value> NewCopy(wxWebViewHistoryItem& obj) { return v8::Undefined(); }

};

#endif
