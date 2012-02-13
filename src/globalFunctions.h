
#ifndef _global_functions_h_
#define _global_functions_h_

#include "wxnode.h"

class GlobalFunctions : public wxNodeObject {
public:
  static void Init(v8::Handle<v8::Object> target);

private:
  static v8::Handle<v8::Value> _setCursor(const v8::Arguments& args);
  static v8::Handle<v8::Value> _logMessage(const v8::Arguments& args);
  static v8::Handle<v8::Value> _getMousePosition(const v8::Arguments& args);
};

#endif
