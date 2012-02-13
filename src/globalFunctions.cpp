
#include "globalFunctions.h"
#include "wxNode_wxCursor.h"
#include <sstream>

/*static*/ void GlobalFunctions::Init(v8::Handle<v8::Object> target) {
  v8::Local<v8::FunctionTemplate> setCursorTemplate = v8::FunctionTemplate::New(_setCursor);
  target->Set(v8::String::NewSymbol("setCursor"), setCursorTemplate->GetFunction());
}

/*static*/ v8::Handle<v8::Value> GlobalFunctions::_setCursor(const v8::Arguments& args) {
  if(args.Length() == 1 && args[0]->IsNumber()) {
    int32_t val = args[0]->ToNumber()->Value();
    wxSetCursor(val);
    return v8::Undefined();
  }

  if(args.Length() == 1 && args[0]->IsObject()) {
    wxNode_wxCursor* cursor = wxNodeObject::unwrap<wxNode_wxCursor>(args[0]->ToObject());
    wxSetCursor(*cursor);
    return v8::Undefined();
  }

  std::ostringstream errStr;
  errStr << "Could not find matching method for setCursor.\n";
  errStr << "  arg count: " << args.Length() << "\n";
  for(int i = 0; i < args.Length(); i++) {
    v8::String::AsciiValue argStr(args[i]);
    errStr << "  arg[" << i << "]: " << *argStr << "\n";
  }
  return v8::ThrowException(v8::Exception::TypeError(v8::String::New(errStr.str().c_str())));
}
