
#ifndef _wxNode_wxObject_h_
#define _wxNode_wxObject_h_

class wxNode_wxObject : public wxObject {
public:
  static void AddMethods(v8::Handle<v8::FunctionTemplate> target) { wxNode_wxEvtHandler::AddMethods(target); };
  static bool AssignableFrom(const v8::Handle<v8::String>& className) { return false; }
  static bool AssignableFrom(const char* className) { return false; }
  static v8::Handle<v8::Value> New(wxObject* obj) { return v8::Undefined(); }
  static v8::Handle<v8::Value> NewCopy(wxObject& obj) { return v8::Undefined(); }
};

#endif
