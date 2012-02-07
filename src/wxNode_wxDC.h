
#ifndef _wxNode_wxDC_
#define _wxNode_wxDC_

class wxNode_wxDC : public wxDC {
public:
  static bool AssignableFrom(const v8::Handle<v8::String>& className) { return false; }
  static bool AssignableFrom(const char* className) { return false; }

};

#endif
