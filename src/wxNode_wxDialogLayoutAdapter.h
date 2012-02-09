
#ifndef _wxNode_wxDialogLayoutAdapter_
#define _wxNode_wxDialogLayoutAdapter_

class  wxNode_wxDialogLayoutAdapter :  public wxDialogLayoutAdapter, public wxNodeObject {
public:
  static void AddMethods(v8::Handle<v8::FunctionTemplate> target) {wxNodeObject::AddMethods(target);}
  static bool AssignableFrom(const v8::Handle<v8::String>& className) { return false; }
  static bool AssignableFrom(const char* className) { return false; }
  static v8::Handle<v8::Value> New(wxDialogLayoutAdapter* obj) { return v8::Undefined(); }
  static v8::Handle<v8::Value> NewCopy(wxDialogLayoutAdapter& obj) { return v8::Undefined(); }
};

#endif
