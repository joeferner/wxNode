
#ifndef _wxNode_wxIdleEvent_
#define _wxNode_wxIdleEvent_

class wxNode_wxIdleEvent : public wxIdleEvent {
public:
  static bool AssignableFrom(const v8::Handle<v8::String>& className) { return false; }
  static bool AssignableFrom(const char* className) { return false; }

};

#endif
