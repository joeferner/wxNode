
#ifndef _wxNode_wxToolBarTool_
#define _wxNode_wxToolBarTool_

class  wxNode_wxToolBarTool :  public wxToolBarToolBase, public wxNodeObject {
public:
  static void AddMethods(v8::Handle<v8::FunctionTemplate> target) {wxNodeObject::AddMethods(target);}
  static bool AssignableFrom(const v8::Handle<v8::String>& className) { return false; }
  static bool AssignableFrom(const char* className) { return false; }
  static v8::Handle<v8::Value> New(wxToolBarToolBase* obj) { return v8::Undefined(); }
  static v8::Handle<v8::Value> NewCopy(wxToolBarToolBase& obj) { return v8::Undefined(); }
};

#endif
