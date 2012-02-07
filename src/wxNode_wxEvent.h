
#ifndef _wxNode_wxEvent_
#define _wxNode_wxEvent_

class wxNode_wxEvent : public wxEvent {
public:
  static bool AssignableFrom(const v8::Handle<v8::String>& className) { return false; }
  static bool AssignableFrom(const char* className) { return false; }

};

#endif
