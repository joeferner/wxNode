
#ifndef _wxNode_wxTextAttr_
#define _wxNode_wxTextAttr_

class wxNode_wxTextAttr : public wxTextAttr {
public:
  static bool AssignableFrom(const v8::Handle<v8::String>& className) { return false; }
  static bool AssignableFrom(const char* className) { return false; }
};

#endif
