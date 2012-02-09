
#ifndef _wxNode_wxStdDialogButtonSizer_
#define _wxNode_wxStdDialogButtonSizer_

class  wxNode_wxStdDialogButtonSizer :  public wxStdDialogButtonSizer, public wxNodeObject {
public:
  static void AddMethods(v8::Handle<v8::FunctionTemplate> target) {wxNodeObject::AddMethods(target);}
  static bool AssignableFrom(const v8::Handle<v8::String>& className) { return false; }
  static bool AssignableFrom(const char* className) { return false; }
  static v8::Handle<v8::Value> New(wxStdDialogButtonSizer* obj) { return v8::Undefined(); }
  static v8::Handle<v8::Value> NewCopy(wxStdDialogButtonSizer& obj) { return v8::Undefined(); }
};

#endif
