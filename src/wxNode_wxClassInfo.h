
#ifndef _wxNode_wxClassInfo_
#define _wxNode_wxClassInfo_

class wxNode_wxClassInfo : public wxClassInfo {
public:
  static void AddMethods(v8::Handle<v8::FunctionTemplate> target) {}
};

#endif
