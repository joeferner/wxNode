
#ifndef _wxnode_h_
#define _wxnode_h_

#include <v8.h>
#include <node.h>
#include <wx/wx.h>

v8::Handle<v8::Value> EmptyFunc(const v8::Arguments& args);

template <class T>
void wrap(const v8::Arguments& args, T *self) {
  args.This()->SetPointerInInternalField(0, self);
}

#endif
