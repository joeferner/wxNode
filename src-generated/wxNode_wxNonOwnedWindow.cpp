
#include <sstream>
#include "wxNode_wxNonOwnedWindow.h"
#include "wxNode_wxEvtHandler.h"
#include "wxNode_wxWindow.h"
#include "wxNode_wxRegion.h"
#include "wxNode_wxGraphicsPath.h"


/* static */ v8::Persistent<v8::FunctionTemplate> wxNode_wxNonOwnedWindow::s_ct;



wxNode_wxNonOwnedWindow::wxNode_wxNonOwnedWindow()
  : wxNonOwnedWindow()
{

}




/*static*/ void wxNode_wxNonOwnedWindow::Init(v8::Handle<v8::Object> target) {
  v8::HandleScope scope;

  v8::Local<v8::FunctionTemplate> t = v8::FunctionTemplate::New(wxNodeObject::NewFunc);
  s_ct = v8::Persistent<v8::FunctionTemplate>::New(t);
  s_ct->InstanceTemplate()->SetInternalFieldCount(2);
  s_ct->SetClassName(v8::String::NewSymbol("wxNonOwnedWindow"));

  NODE_SET_PROTOTYPE_METHOD(s_ct, "init", _init);
  AddMethods(s_ct);

  target->Set(v8::String::NewSymbol("wxNonOwnedWindow"), s_ct->GetFunction());
}

/*static*/ void wxNode_wxNonOwnedWindow::AddMethods(v8::Handle<v8::FunctionTemplate> target) {
  wxNode_wxWindow::AddMethods(target);
  NODE_SET_PROTOTYPE_METHOD(target, "setShape", _SetShape);
  
}

/*static*/ v8::Handle<v8::Value> wxNode_wxNonOwnedWindow::_init(const v8::Arguments& args) {
  v8::HandleScope scope;

  
  
  /*
   * id: _15953
   */
  if(args.Length() == 0) {
    

    wxNode_wxNonOwnedWindow *self = new wxNode_wxNonOwnedWindow();
    NodeExEvtHandlerImpl* evtHandler = dynamic_cast<NodeExEvtHandlerImpl*>(self);
    self->wrap(args.This(), self, evtHandler);
    return args.This();
  }
  
  

  std::ostringstream errStr;
  errStr << "Could not find matching constructor for arguments (class name: wxNonOwnedWindow).\n";                           \
  errStr << "  arg count: " << args.Length() << "\n";
  for(int i = 0; i < args.Length(); i++) {
    v8::String::AsciiValue argStr(args[i]);
    errStr << "  arg[" << i << "]: " << *argStr << "\n";
  }
  return v8::ThrowException(v8::Exception::TypeError(v8::String::New(errStr.str().c_str())));
}


/*static*/ v8::Handle<v8::Value> wxNode_wxNonOwnedWindow::_SetShape(const v8::Arguments& args) {
  v8::HandleScope scope;
  wxNode_wxNonOwnedWindow* self = unwrap<wxNode_wxNonOwnedWindow>(args.This());

  
  /*
   * id: _30423
   */
  if(args.Length() == 1 && (args[0]->IsNull() || args[0]->IsObject())) {
    wxNode_wxRegion* region = args[0]->IsNull() ? NULL : wxNodeObject::unwrap<wxNode_wxRegion>(args[0]->ToObject()); /* type: _58929  */
    

    bool returnVal = self->SetShape(*region);

    return scope.Close(v8::Boolean::New(returnVal));
  }
  
  /*
   * id: _30424
   */
  if(args.Length() == 1 && (args[0]->IsNull() || args[0]->IsObject())) {
    wxNode_wxGraphicsPath* path = args[0]->IsNull() ? NULL : wxNodeObject::unwrap<wxNode_wxGraphicsPath>(args[0]->ToObject()); /* type: _58930  */
    

    bool returnVal = self->SetShape(*path);

    return scope.Close(v8::Boolean::New(returnVal));
  }
  

  std::ostringstream errStr;
  errStr << "Could not find matching method for arguments (method name: SetShape).\n";                           \
  errStr << "  arg count: " << args.Length() << "\n";
  for(int i = 0; i < args.Length(); i++) {
    v8::String::AsciiValue argStr(args[i]);
    errStr << "  arg[" << i << "]: " << *argStr << "\n";
  }
  return v8::ThrowException(v8::Exception::TypeError(v8::String::New(errStr.str().c_str())));
}

