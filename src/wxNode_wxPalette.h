
#ifndef _wxNode_wxPalette_
#define _wxNode_wxPalette_

class wxNode_wxPalette : public wxPalette {
  public:
  static void AddMethods(v8::Handle<v8::FunctionTemplate> target) {}
  static bool AssignableFrom(const v8::Handle<v8::String>& className) { return false; }
  static bool AssignableFrom(const char* className) { return false; }
  static v8::Handle<v8::Value> New(wxPalette* obj) { return v8::Undefined(); }
  static v8::Handle<v8::Value> NewCopy(wxPalette& obj) { return v8::Undefined(); }

};

#endif
