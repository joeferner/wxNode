
#include "globalFunctions.h"
#include "wxNode_wxCursor.h"
#include "wxNode_wxPoint.h"
#include <sstream>

/*static*/ void GlobalFunctions::Init(v8::Handle<v8::Object> target) {
  v8::Local<v8::FunctionTemplate> setCursorTemplate = v8::FunctionTemplate::New(_setCursor);
  target->Set(v8::String::NewSymbol("setCursor"), setCursorTemplate->GetFunction());

  v8::Local<v8::FunctionTemplate> logMessageTemplate = v8::FunctionTemplate::New(_logMessage);
  target->Set(v8::String::NewSymbol("logMessage"), logMessageTemplate->GetFunction());

  v8::Local<v8::FunctionTemplate> getMousePositionTemplate = v8::FunctionTemplate::New(_getMousePosition);
  target->Set(v8::String::NewSymbol("getMousePosition"), getMousePositionTemplate->GetFunction());
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

/*static*/ v8::Handle<v8::Value> GlobalFunctions::_logMessage(const v8::Arguments& args) {
  if(args.Length() == 1 && args[0]->IsString()) {
    v8::String::AsciiValue str(args[0]->ToString());
    wxLogMessage("%s", *str);
    return v8::Undefined();
  }

  std::ostringstream errStr;
  errStr << "Could not find matching method for logMessage.\n";
  errStr << "  arg count: " << args.Length() << "\n";
  for(int i = 0; i < args.Length(); i++) {
    v8::String::AsciiValue argStr(args[i]);
    errStr << "  arg[" << i << "]: " << *argStr << "\n";
  }
  return v8::ThrowException(v8::Exception::TypeError(v8::String::New(errStr.str().c_str())));
}

/*static*/ v8::Handle<v8::Value> GlobalFunctions::_getMousePosition(const v8::Arguments& args) {
  if(args.Length() == 0) {
    wxPoint pt = wxGetMousePosition();
    return wxNode_wxPoint::NewCopy(pt);
  }

  std::ostringstream errStr;
  errStr << "Could not find matching method for getMousePosition.\n";
  errStr << "  arg count: " << args.Length() << "\n";
  for(int i = 0; i < args.Length(); i++) {
    v8::String::AsciiValue argStr(args[i]);
    errStr << "  arg[" << i << "]: " << *argStr << "\n";
  }
  return v8::ThrowException(v8::Exception::TypeError(v8::String::New(errStr.str().c_str())));
}
