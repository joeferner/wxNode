
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

/*static*/ bool wxNode_wxNonOwnedWindow::AssignableFrom(const v8::Handle<v8::String>& className) {
  v8::String::AsciiValue classNameStr(className);
  return AssignableFrom(*classNameStr);
}

/*static*/ bool wxNode_wxNonOwnedWindow::AssignableFrom(const char* className) {
  if(!strcmp("wxNonOwnedWindow", className)) { return true; }
  
  if(!strcmp("wxNonOwnedWindow", className)) { return true; }

  if(!strcmp("wxNavigationEnabled<wxNonOwnedWindow>", className)) { return true; }

  if(!strcmp("wxTopLevelWindowBase", className)) { return true; }

  if(!strcmp("wxTopLevelWindowGTK", className)) { return true; }

  if(!strcmp("wxTopLevelWindow", className)) { return true; }

  if(!strcmp("wxNativeContainerWindow", className)) { return true; }
  if(!strcmp("wxFrameBase", className)) { return true; }

  if(!strcmp("wxFrame", className)) { return true; }

  if(!strcmp("wxPreviewFrame", className)) { return true; }
  if(!strcmp("wxAuiMDIParentFrame", className)) { return true; }
  if(!strcmp("wxDocChildFrameAny<wxFrame,wxFrame>", className)) { return true; }

  if(!strcmp("wxDocChildFrame", className)) { return true; }
  if(!strcmp("wxSplashScreen", className)) { return true; }
  if(!strcmp("wxMDIChildFrameBase", className)) { return true; }

  if(!strcmp("wxTDIChildFrame", className)) { return true; }

  if(!strcmp("wxMDIChildFrame", className)) { return true; }

  if(!strcmp("wxDocChildFrameAny<wxMDIChildFrame,wxMDIParentFrame>", className)) { return true; }

  if(!strcmp("wxDocMDIChildFrame", className)) { return true; }
  if(!strcmp("wxDocParentFrameAny<wxFrame>", className)) { return true; }

  if(!strcmp("wxDocParentFrame", className)) { return true; }
  if(!strcmp("wxMiniFrame", className)) { return true; }

  if(!strcmp("wxAuiFloatingFrame", className)) { return true; }
  if(!strcmp("wxHtmlHelpFrame", className)) { return true; }
  if(!strcmp("wxMDIParentFrameBase", className)) { return true; }

  if(!strcmp("wxMDIParentFrame", className)) { return true; }

  if(!strcmp("wxDocParentFrameAny<wxMDIParentFrame>", className)) { return true; }

  if(!strcmp("wxDocMDIParentFrame", className)) { return true; }
  if(!strcmp("wxDialogBase", className)) { return true; }

  if(!strcmp("wxDialog", className)) { return true; }

  if(!strcmp("wxFontDialogBase", className)) { return true; }

  if(!strcmp("wxFontDialog", className)) { return true; }
  if(!strcmp("wxRearrangeDialog", className)) { return true; }
  if(!strcmp("wxDirDialogBase", className)) { return true; }

  if(!strcmp("wxDirDialog", className)) { return true; }
  if(!strcmp("wxWizardBase", className)) { return true; }

  if(!strcmp("wxWizard", className)) { return true; }
  if(!strcmp("wxMessageDialogBase", className)) { return true; }

  if(!strcmp("wxMessageDialog", className)) { return true; }
  if(!strcmp("wxGenericMessageDialog", className)) { return true; }

  if(!strcmp("wxRichMessageDialogBase", className)) { return true; }

  if(!strcmp("wxGenericRichMessageDialog", className)) { return true; }

  if(!strcmp("wxRichMessageDialog", className)) { return true; }
  if(!strcmp("wxColourDialog", className)) { return true; }
  if(!strcmp("wxHtmlHelpDialog", className)) { return true; }
  if(!strcmp("wxFindReplaceDialogBase", className)) { return true; }

  if(!strcmp("wxFindReplaceDialog", className)) { return true; }
  if(!strcmp("wxPrintAbortDialog", className)) { return true; }
  if(!strcmp("wxAnyChoiceDialog", className)) { return true; }

  if(!strcmp("wxSingleChoiceDialog", className)) { return true; }
  if(!strcmp("wxMultiChoiceDialog", className)) { return true; }
  if(!strcmp("wxTextEntryDialog", className)) { return true; }

  if(!strcmp("wxPasswordEntryDialog", className)) { return true; }
  if(!strcmp("wxRichTextStyleOrganiserDialog", className)) { return true; }
  if(!strcmp("wxPrintDialogBase", className)) { return true; }
  if(!strcmp("wxPageSetupDialogBase", className)) { return true; }
  if(!strcmp("wxSymbolPickerDialog", className)) { return true; }
  if(!strcmp("wxFileDialogBase", className)) { return true; }

  if(!strcmp("wxFileDialog", className)) { return true; }
  if(!strcmp("wxNumberEntryDialog", className)) { return true; }
  if(!strcmp("wxPropertySheetDialog", className)) { return true; }

  if(!strcmp("wxRichTextFormattingDialog", className)) { return true; }
  if(!strcmp("wxGenericProgressDialog", className)) { return true; }

  if(!strcmp("wxProgressDialog", className)) { return true; }
  if(!strcmp("wxPopupWindowBase", className)) { return true; }

  if(!strcmp("wxPopupWindow", className)) { return true; }

  if(!strcmp("wxPopupTransientWindow", className)) { return true; }

  if(!strcmp("wxTipWindow", className)) { return true; }


  return false;
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
   * id: _30423
   */
  if(args.Length() == 1 && (args[0]->IsNull() || (args[0]->IsObject() && wxNode_wxRegion::AssignableFrom(args[0]->ToObject()->GetConstructorName())))) {
    wxNode_wxRegion* region = args[0]->IsNull() ? NULL : wxNodeObject::unwrap<wxNode_wxRegion>(args[0]->ToObject()); /* type: _58929  */
    

    bool returnVal = self->SetShape(*region);

    return scope.Close(v8::Boolean::New(returnVal));
  }
  
  /*
   * id: _30424
   */
  if(args.Length() == 1 && (args[0]->IsNull() || (args[0]->IsObject() && wxNode_wxGraphicsPath::AssignableFrom(args[0]->ToObject()->GetConstructorName())))) {
    wxNode_wxGraphicsPath* path = args[0]->IsNull() ? NULL : wxNodeObject::unwrap<wxNode_wxGraphicsPath>(args[0]->ToObject()); /* type: _58930  */
    

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

