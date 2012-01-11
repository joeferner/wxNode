
#ifndef _wxnode_frame_h_
#define _wxnode_frame_h_

#include "wxnode.h"

class NodeWxFrame : public wxFrame {
public:
  static void Init(v8::Handle<v8::Object> target);

private:
  static v8::Handle<v8::Value> init(const v8::Arguments& args);

  static v8::Persistent<v8::FunctionTemplate> s_ct;
};

#endif
