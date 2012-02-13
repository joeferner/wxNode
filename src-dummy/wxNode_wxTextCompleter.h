
#ifndef _wxNode_wxTextCompleter_
#define _wxNode_wxTextCompleter_

#include <wx/textcompleter.h>

class  wxNode_wxTextCompleter :  public wxTextCompleter, public wxNodeObject {
public:
  static void AddMethods(v8::Handle<v8::FunctionTemplate> target) {wxNodeObject::AddMethods(target);}
  static bool AssignableFrom(const v8::Handle<v8::String>& className) { return false; }
  static bool AssignableFrom(const char* className) { return false; }
  static v8::Handle<v8::Value> New(wxTextCompleter* obj) { return v8::Undefined(); }
  static v8::Handle<v8::Value> NewCopy(wxTextCompleter& obj) { return v8::Undefined(); }
};

#endif
