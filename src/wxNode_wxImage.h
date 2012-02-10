
#ifndef _wxNode_wxImage_
#define _wxNode_wxImage_

class wxNode_wxImage : public wxImage {
  public:
  static void AddMethods(v8::Handle<v8::FunctionTemplate> target) {}
  static bool AssignableFrom(const v8::Handle<v8::String>& className) { return false; }
  static bool AssignableFrom(const char* className) { return false; }
  static v8::Handle<v8::Value> New(wxImage* obj) { return v8::Undefined(); }
  static v8::Handle<v8::Value> NewCopy(wxImage& obj) { return v8::Undefined(); }

};

#endif
