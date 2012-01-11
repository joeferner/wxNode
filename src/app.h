
#ifndef _wxnode_app_h_
#define _wxnode_app_h_

#include "wxnode.h"

class NodeWxApp : public wxApp {
public:
  static void Init(v8::Handle<v8::Object> target);

  virtual bool OnInit();
  
private:
  static v8::Handle<v8::Value> init(const v8::Arguments& args);
  static v8::Handle<v8::Value> _run(const v8::Arguments& args);
  static v8::Handle<v8::Value> _onInit(const v8::Arguments& args);

  static v8::Persistent<v8::FunctionTemplate> s_ct;
};

#endif