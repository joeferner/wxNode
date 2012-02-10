
#ifndef _wxNode_wxCommandEvent_h_
#define _wxNode_wxCommandEvent_h_

class wxNode_wxCommandEvent : public wxCommandEvent {
public:
  static bool AssignableFrom(const v8::Handle<v8::String>& className) { return false; }
  static bool AssignableFrom(const char* className) { return false; }
};

#endif
