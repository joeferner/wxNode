
#ifndef _wxNode_wxFSFile_
#define _wxNode_wxFSFile_

#include <wx/filesys.h>

class wxNode_wxFSFile : public wxFSFile, public wxNodeObject {
  public:
  static void AddMethods(v8::Handle<v8::FunctionTemplate> target) { wxNodeObject::AddMethods(target); }
  static bool AssignableFrom(const v8::Handle<v8::String>& className) { return false; }
  static bool AssignableFrom(const char* className) { return false; }
  static v8::Handle<v8::Value> New(wxFSFile* obj) { return v8::Undefined(); }
  static v8::Handle<v8::Value> NewCopy(wxFSFile& obj) { return v8::Undefined(); }

};

#endif
