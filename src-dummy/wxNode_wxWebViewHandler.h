
#ifndef _wxNode_wxWebViewHandler_
#define _wxNode_wxWebViewHandler_

class wxNode_wxWebViewHandler : public wxWebViewHandler, public wxNodeObject {
  public:
  static void AddMethods(v8::Handle<v8::FunctionTemplate> target) { wxNodeObject::AddMethods(target); }
  static bool AssignableFrom(const v8::Handle<v8::String>& className) { return false; }
  static bool AssignableFrom(const char* className) { return false; }
  static v8::Handle<v8::Value> New(wxWebViewHandler* obj) { return v8::Undefined(); }
  static v8::Handle<v8::Value> NewCopy(wxWebViewHandler& obj) { return v8::Undefined(); }

};

#endif
