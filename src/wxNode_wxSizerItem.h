
#ifndef _wxNode_wxSizerItem_h_
#define _wxNode_wxSizerItem_h_

class wxNode_wxSizerItem : public wxSizerItem {
public:
  static void AddMethods(v8::Handle<v8::FunctionTemplate> target) {}
  static bool AssignableFrom(const v8::Handle<v8::String>& className) { return false; }
  static bool AssignableFrom(const char* className) { return false; }
};

#endif
