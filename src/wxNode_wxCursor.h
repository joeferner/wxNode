
#ifndef _wxNode_wxCursor_
#define _wxNode_wxCursor_

class wxNode_wxCursor : public wxCursor {
  public:
  static void AddMethods(v8::Handle<v8::FunctionTemplate> target) {}
  static bool AssignableFrom(const v8::Handle<v8::String>& className) { return false; }
  static bool AssignableFrom(const char* className) { return false; }

};

#endif
