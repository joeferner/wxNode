
#ifndef _wxNode_wxKeyEvent_
#define _wxNode_wxKeyEvent_

class wxNode_wxKeyEvent : public wxKeyEvent {
public:
  static bool AssignableFrom(const v8::Handle<v8::String>& className) { return false; }
  static bool AssignableFrom(const char* className) { return false; }

};

#endif
