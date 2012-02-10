
#ifndef _wxNode_wxTextSizerWrapper_
#define _wxNode_wxTextSizerWrapper_

#include <wx/textwrapper.h>

class wxNode_wxTextSizerWrapper :  public wxTextSizerWrapper, public wxNodeObject {
public:
  static void AddMethods(v8::Handle<v8::FunctionTemplate> target) {wxNodeObject::AddMethods(target);}
  static bool AssignableFrom(const v8::Handle<v8::String>& className) { return false; }
  static bool AssignableFrom(const char* className) { return false; }
  static v8::Handle<v8::Value> New(wxTextSizerWrapper* obj) { return v8::Undefined(); }
  static v8::Handle<v8::Value> NewCopy(wxTextSizerWrapper& obj) { return v8::Undefined(); }
};

#endif
