
#ifndef _wxNode_wxUpdateUIEvent_
#define _wxNode_wxUpdateUIEvent_

class wxNode_wxUpdateUIEvent : public wxUpdateUIEvent {
public:
  static bool AssignableFrom(const v8::Handle<v8::String>& className) { return false; }
  static bool AssignableFrom(const char* className) { return false; }

};

#endif
