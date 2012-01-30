
#ifndef _wxnode_object_h_
#define _wxnode_object_h_

#include <v8.h>
#include <assert.h>

class wxNodeObject {
protected:
  void wrap(v8::Handle<v8::Object> handle) {
    m_self = v8::Persistent<v8::Object>::New(handle);
    m_self->SetPointerInInternalField(0, this);
  }

  template <class T>
  static inline T* unwrap(v8::Handle<v8::Object> handle) {
    return static_cast<T*>(handle->GetPointerFromInternalField(0));
  }

  v8::Handle<v8::Object> self() { return m_self; }

  v8::Handle<v8::Value> call(const char *fnName, int argc, v8::Handle<v8::Value> args[]) {
    v8::Local<v8::Value> fnObj = m_self->Get(v8::String::New(fnName));
    v8::Function *fn = v8::Function::Cast(*fnObj);
    return fn->Call(self(), argc, args);
  }

  static v8::Handle<v8::Value> NewFunc(const v8::Arguments& args) {
    return args.This();
  }

private:
  v8::Persistent<v8::Object> m_self;
};

#endif
