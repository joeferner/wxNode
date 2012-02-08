
#ifndef _wxNode_wxBitmap_h_
#define _wxNode_wxBitmap_h_

class  wxNode_wxBitmap :  public wxBitmap, public wxNodeObject {
public:
  static void AddMethods(v8::Handle<v8::FunctionTemplate> target) {wxNodeObject::AddMethods(target);}
  static bool AssignableFrom(const v8::Handle<v8::String>& className) { return false; }
  static bool AssignableFrom(const char* className) { return false; }
  static v8::Handle<v8::Value> New(wxBitmap* obj) { return v8::Undefined(); }
  static v8::Handle<v8::Value> NewCopy(wxBitmap& obj) { return v8::Undefined(); }
};

#endif
