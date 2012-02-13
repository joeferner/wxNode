
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
  s_ct->SetClassName(v8::String::NewSymbol("NonOwnedWindow"));

  NODE_SET_PROTOTYPE_METHOD(s_ct, "init", _init);
  AddMethods(s_ct);

  target->Set(v8::String::NewSymbol("NonOwnedWindow"), s_ct->GetFunction());
}

/*static*/ void wxNode_wxNonOwnedWindow::AddMethods(v8::Handle<v8::FunctionTemplate> target) {
  wxNode_wxWindow::AddMethods(target);
  NODE_SET_PROTOTYPE_METHOD(target, "setShape", _SetShape);
  
}

/*static*/ v8::Handle<v8::Value> wxNode_wxNonOwnedWindow::New(const wxNode_wxNonOwnedWindow* obj) {
  v8::HandleScope scope;

  if(obj == NULL) {
    return scope.Close(v8::Null());
  }
  
  v8::Local<v8::FunctionTemplate> returnObjFt = v8::FunctionTemplate::New(wxNodeObject::NewFunc);
  returnObjFt->InstanceTemplate()->SetInternalFieldCount(2);
  returnObjFt->SetClassName(v8::String::NewSymbol("NonOwnedWindow"));
  wxNode_wxNonOwnedWindow::AddMethods(returnObjFt);

  v8::Local<v8::Function> returnObjFn = returnObjFt->GetFunction();
  v8::Handle<v8::Value> returnObjArgs[0];
  v8::Local<v8::Object> returnObj = returnObjFn->CallAsConstructor(0, returnObjArgs)->ToObject();
  returnObj->SetPointerInInternalField(0, (void*)obj);
  NodeExEvtHandlerImpl* evtHandler = dynamic_cast<NodeExEvtHandlerImpl*>((wxNode_wxNonOwnedWindow*)obj);
  returnObj->SetPointerInInternalField(1, evtHandler);

  return scope.Close(returnObj);
}

/*static*/ v8::Handle<v8::Value> wxNode_wxNonOwnedWindow::New(const wxNonOwnedWindow* obj) {
  v8::HandleScope scope;

  if(obj == NULL) {
    return scope.Close(v8::Null());
  }
  
  v8::Local<v8::FunctionTemplate> returnObjFt = v8::FunctionTemplate::New(wxNodeObject::NewFunc);
  returnObjFt->InstanceTemplate()->SetInternalFieldCount(2);
  returnObjFt->SetClassName(v8::String::NewSymbol("NonOwnedWindow"));
  wxNode_wxNonOwnedWindow::AddMethods(returnObjFt);

  v8::Local<v8::Function> returnObjFn = returnObjFt->GetFunction();
  v8::Handle<v8::Value> returnObjArgs[0];
  v8::Local<v8::Object> returnObj = returnObjFn->CallAsConstructor(0, returnObjArgs)->ToObject();
  returnObj->SetPointerInInternalField(0, (void*)obj);
  NodeExEvtHandlerImplWrap* wrap = new NodeExEvtHandlerImplWrap(returnObj);
  NodeExEvtHandlerImpl* evtHandler = dynamic_cast<NodeExEvtHandlerImpl*>(wrap);
  returnObj->SetPointerInInternalField(1, evtHandler);

  return scope.Close(returnObj);
}

/*static*/ v8::Handle<v8::Value> wxNode_wxNonOwnedWindow::NewCopy(const wxNonOwnedWindow& obj) {
  v8::HandleScope scope;
  wxNode_wxNonOwnedWindow* returnVal = new wxNode_wxNonOwnedWindow();
  memcpy(dynamic_cast<wxNonOwnedWindow*>(returnVal), &obj, sizeof(wxNonOwnedWindow));
  return scope.Close(New(returnVal));

}

/*static*/ bool wxNode_wxNonOwnedWindow::AssignableFrom(const v8::Handle<v8::String>& className) {
  v8::String::AsciiValue classNameStr(className);
  return AssignableFrom(*classNameStr);
}

/*static*/ bool wxNode_wxNonOwnedWindow::AssignableFrom(const char* className) {
  if(!strcmp("NonOwnedWindow", className)) { return true; }
  
  if(!strcmp("NonOwnedWindow", className)) { return true; }

  if(!strcmp("NavigationEnabled<wxNonOwnedWindow>", className)) { return true; }

  if(!strcmp("TopLevelWindowBase", className)) { return true; }

  if(!strcmp("TopLevelWindowGTK", className)) { return true; }

  if(!strcmp("TopLevelWindow", className)) { return true; }

  if(!strcmp("NativeContainerWindow", className)) { return true; }
  if(!strcmp("FrameBase", className)) { return true; }

  if(!strcmp("Frame", className)) { return true; }

  if(!strcmp("PreviewFrame", className)) { return true; }
  if(!strcmp("AuiMDIParentFrame", className)) { return true; }
  if(!strcmp("DocChildFrameAny<wxFrame,wxFrame>", className)) { return true; }

  if(!strcmp("DocChildFrame", className)) { return true; }
  if(!strcmp("SplashScreen", className)) { return true; }
  if(!strcmp("HtmlHelpFrame", className)) { return true; }
  if(!strcmp("MDIChildFrameBase", className)) { return true; }

  if(!strcmp("TDIChildFrame", className)) { return true; }

  if(!strcmp("MDIChildFrame", className)) { return true; }

  if(!strcmp("DocChildFrameAny<wxMDIChildFrame,wxMDIParentFrame>", className)) { return true; }

  if(!strcmp("DocMDIChildFrame", className)) { return true; }
  if(!strcmp("DocParentFrameAny<wxFrame>", className)) { return true; }

  if(!strcmp("DocParentFrame", className)) { return true; }
  if(!strcmp("MiniFrame", className)) { return true; }

  if(!strcmp("AuiFloatingFrame", className)) { return true; }
  if(!strcmp("MDIParentFrameBase", className)) { return true; }

  if(!strcmp("MDIParentFrame", className)) { return true; }

  if(!strcmp("DocParentFrameAny<wxMDIParentFrame>", className)) { return true; }

  if(!strcmp("DocMDIParentFrame", className)) { return true; }
  if(!strcmp("DialogBase", className)) { return true; }

  if(!strcmp("Dialog", className)) { return true; }

  if(!strcmp("FontDialogBase", className)) { return true; }

  if(!strcmp("FontDialog", className)) { return true; }
  if(!strcmp("RearrangeDialog", className)) { return true; }
  if(!strcmp("DirDialogBase", className)) { return true; }

  if(!strcmp("DirDialog", className)) { return true; }
  if(!strcmp("WizardBase", className)) { return true; }

  if(!strcmp("Wizard", className)) { return true; }
  if(!strcmp("MessageDialogBase", className)) { return true; }

  if(!strcmp("MessageDialog", className)) { return true; }
  if(!strcmp("GenericMessageDialog", className)) { return true; }

  if(!strcmp("RichMessageDialogBase", className)) { return true; }

  if(!strcmp("GenericRichMessageDialog", className)) { return true; }

  if(!strcmp("RichMessageDialog", className)) { return true; }
  if(!strcmp("ColourDialog", className)) { return true; }
  if(!strcmp("HtmlHelpDialog", className)) { return true; }
  if(!strcmp("FindReplaceDialogBase", className)) { return true; }

  if(!strcmp("FindReplaceDialog", className)) { return true; }
  if(!strcmp("PrintAbortDialog", className)) { return true; }
  if(!strcmp("AnyChoiceDialog", className)) { return true; }

  if(!strcmp("SingleChoiceDialog", className)) { return true; }
  if(!strcmp("MultiChoiceDialog", className)) { return true; }
  if(!strcmp("TextEntryDialog", className)) { return true; }

  if(!strcmp("PasswordEntryDialog", className)) { return true; }
  if(!strcmp("RichTextStyleOrganiserDialog", className)) { return true; }
  if(!strcmp("PrintDialogBase", className)) { return true; }
  if(!strcmp("PageSetupDialogBase", className)) { return true; }
  if(!strcmp("SymbolPickerDialog", className)) { return true; }
  if(!strcmp("FileDialogBase", className)) { return true; }

  if(!strcmp("FileDialog", className)) { return true; }
  if(!strcmp("NumberEntryDialog", className)) { return true; }
  if(!strcmp("PropertySheetDialog", className)) { return true; }

  if(!strcmp("RichTextFormattingDialog", className)) { return true; }
  if(!strcmp("GenericProgressDialog", className)) { return true; }

  if(!strcmp("ProgressDialog", className)) { return true; }
  if(!strcmp("PopupWindowBase", className)) { return true; }

  if(!strcmp("PopupWindow", className)) { return true; }

  if(!strcmp("PopupTransientWindow", className)) { return true; }

  if(!strcmp("TipWindow", className)) { return true; }


  return false;
}

/*static*/ v8::Handle<v8::Value> wxNode_wxNonOwnedWindow::_init(const v8::Arguments& args) {
  v8::HandleScope scope;

  
  
  /*
   * id: _16084
   */
  if(args.Length() == 0) {
    

    wxNode_wxNonOwnedWindow *self = new wxNode_wxNonOwnedWindow();
    NodeExEvtHandlerImpl* evtHandler = dynamic_cast<NodeExEvtHandlerImpl*>(self);
    self->wrap(args.This(), self, evtHandler);
    return args.This();
  }
  
  

  std::ostringstream errStr;
  errStr << "Could not find matching constructor for arguments (class name: wxNonOwnedWindow).\n";
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
   * id: _30585
   */
  if(args.Length() == 1 && (args[0]->IsNull() || (args[0]->IsObject() && wxNode_wxRegion::AssignableFrom(args[0]->ToObject()->GetConstructorName())))) {
    wxNode_wxRegion* region = args[0]->IsNull() ? NULL : wxNodeObject::unwrap<wxNode_wxRegion>(args[0]->ToObject()); /* type: _59116  */
    

    bool returnVal = self->SetShape(*region);

    return scope.Close(v8::Boolean::New(returnVal));
  }
  
  /*
   * id: _30586
   */
  if(args.Length() == 1 && (args[0]->IsNull() || (args[0]->IsObject() && wxNode_wxGraphicsPath::AssignableFrom(args[0]->ToObject()->GetConstructorName())))) {
    wxNode_wxGraphicsPath* path = args[0]->IsNull() ? NULL : wxNodeObject::unwrap<wxNode_wxGraphicsPath>(args[0]->ToObject()); /* type: _59117  */
    

    bool returnVal = self->SetShape(*path);

    return scope.Close(v8::Boolean::New(returnVal));
  }
  

  std::ostringstream errStr;
  errStr << "Could not find matching method for arguments (method name: wxNonOwnedWindow::SetShape).\n";
  errStr << "  arg count: " << args.Length() << "\n";
  for(int i = 0; i < args.Length(); i++) {
    v8::String::AsciiValue argStr(args[i]);
    errStr << "  arg[" << i << "]: " << *argStr << "\n";
  }
  return v8::ThrowException(v8::Exception::TypeError(v8::String::New(errStr.str().c_str())));
}

