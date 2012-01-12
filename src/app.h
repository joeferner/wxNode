
#include <v8.h>
#include <node.h>
#include <wx/wx.h>

class NodeWxApp : public wxApp, public node::ObjectWrap {
public:
  static void Init(v8::Handle<v8::Object> target);
  static v8::Handle<v8::Value> New(const v8::Arguments& args);

private:
  static v8::Handle<v8::Value> run(const v8::Arguments& args);

  static v8::Persistent<v8::FunctionTemplate> s_ct;
};
