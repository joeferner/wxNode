
#ifndef _wxNode_wxRealPoint_
#define _wxNode_wxRealPoint_

class wxNode_wxRealPoint : public wxRealPoint {
public:
  static bool AssignableFrom(const v8::Handle<v8::String>& className) { return false; }
  static bool AssignableFrom(const char* className) { return false; }
};

#endif
