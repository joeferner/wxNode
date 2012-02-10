
#ifndef _wxNode_wxBitmapHandler_
#define _wxNode_wxBitmapHandler_

class wxNode_wxBitmapHandler : public wxBitmapHandler {
  public:
  static void AddMethods(v8::Handle<v8::FunctionTemplate> target) {}
  static bool AssignableFrom(const v8::Handle<v8::String>& className) { return false; }
  static bool AssignableFrom(const char* className) { return false; }
  static v8::Handle<v8::Value> New(wxBitmapHandler* obj) { return v8::Undefined(); }
  static v8::Handle<v8::Value> NewCopy(wxBitmapHandler& obj) { return v8::Undefined(); }

};

#endif
