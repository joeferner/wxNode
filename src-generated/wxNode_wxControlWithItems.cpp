
#include <sstream>
#include "wxNode_wxControlWithItems.h"
#include "wxNode_wxEvtHandler.h"
#include "wxNode_wxWindowWithItems.h"


/* static */ v8::Persistent<v8::FunctionTemplate> wxNode_wxControlWithItems::s_ct;




/*static*/ void wxNode_wxControlWithItems::Init(v8::Handle<v8::Object> target) {
  v8::HandleScope scope;

  v8::Local<v8::FunctionTemplate> t = v8::FunctionTemplate::New(wxNodeObject::NewFunc);
  s_ct = v8::Persistent<v8::FunctionTemplate>::New(t);
  s_ct->InstanceTemplate()->SetInternalFieldCount(2);
  s_ct->SetClassName(v8::String::NewSymbol("wxControlWithItems"));

  NODE_SET_PROTOTYPE_METHOD(s_ct, "init", _init);
  AddMethods(s_ct);

  target->Set(v8::String::NewSymbol("wxControlWithItems"), s_ct->GetFunction());
}

/*static*/ void wxNode_wxControlWithItems::AddMethods(v8::Handle<v8::FunctionTemplate> target) {
  wxNode_wxWindowWithItems_wxControl_wxItemContainer::AddMethods(target);
  NODE_SET_PROTOTYPE_METHOD(target, "shouldInheritColours", _ShouldInheritColours);
  
}

/*static*/ bool wxNode_wxControlWithItems::AssignableFrom(const v8::Handle<v8::String>& className) {
  v8::String::AsciiValue classNameStr(className);
  return AssignableFrom(*classNameStr);
}

/*static*/ bool wxNode_wxControlWithItems::AssignableFrom(const char* className) {
  if(!strcmp("wxControlWithItems", className)) {
    return true;
  }
  if(wxNode_wxWindowWithItems_wxControl_wxItemContainer::AssignableFrom(className)) { return true; }

  printf("wxControlWithItems ?== %s\n", className);
  return false;
}

/*static*/ v8::Handle<v8::Value> wxNode_wxControlWithItems::_init(const v8::Arguments& args) {
  v8::HandleScope scope;

  

  std::ostringstream errStr;
  errStr << "Could not find matching constructor for arguments (class name: wxControlWithItems).\n";                           \
  errStr << "  arg count: " << args.Length() << "\n";
  for(int i = 0; i < args.Length(); i++) {
    v8::String::AsciiValue argStr(args[i]);
    errStr << "  arg[" << i << "]: " << *argStr << "\n";
  }
  return v8::ThrowException(v8::Exception::TypeError(v8::String::New(errStr.str().c_str())));
}


/*static*/ v8::Handle<v8::Value> wxNode_wxControlWithItems::_ShouldInheritColours(const v8::Arguments& args) {
  v8::HandleScope scope;
  wxNode_wxControlWithItems* self = unwrap<wxNode_wxControlWithItems>(args.This());

  
  /*
   * id: _50535
   */
  if(args.Length() == 0) {
    

    bool returnVal = self->ShouldInheritColours();

    return scope.Close(v8::Boolean::New(returnVal));
  }
  

  std::ostringstream errStr;
  errStr << "Could not find matching method for arguments (method name: wxControlWithItems::ShouldInheritColours).\n";                           \
  errStr << "  arg count: " << args.Length() << "\n";
  for(int i = 0; i < args.Length(); i++) {
    v8::String::AsciiValue argStr(args[i]);
    errStr << "  arg[" << i << "]: " << *argStr << "\n";
  }
  return v8::ThrowException(v8::Exception::TypeError(v8::String::New(errStr.str().c_str())));
}

