
#ifndef _wxNode_wxVisualAttributes_
#define _wxNode_wxVisualAttributes_

class wxNode_wxVisualAttributes : public wxVisualAttributes {
public:
  static void AddMethods(v8::Handle<v8::FunctionTemplate> target) {}
  static v8::Handle<v8::Value> New(wxVisualAttributes* obj) { return v8::Undefined(); }
  static v8::Handle<v8::Value> NewCopy(wxVisualAttributes& obj) { return v8::Undefined(); }
};

#endif
