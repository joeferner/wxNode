
#ifndef _wxNode_wxObject_h_
#define _wxNode_wxObject_h_

class wxNode_wxObject : public wxObject {
public:
  static void AddMethods(v8::Handle<v8::FunctionTemplate> target) { wxNode_wxEvtHandler::AddMethods(target); };
};

#endif
