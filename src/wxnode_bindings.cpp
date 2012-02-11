
#include <v8.h>
#include <node.h>
#include "app.h"
#include "wxNode_wxFrame.h"
#include "wxNode_wxMenuBar.h"
#include "wxNode_wxMenu.h"
#include "wxNode_wxPoint.h"
#include "wxNode_wxSize.h"
#include "wxNode_wxTextCtrl.h"
#include "wxNode_wxPanel.h"
#include "wxNode_wxListBox.h"
#include "wxNode_wxWindow.h"
#include "wxNode_wxNotebook.h"
#include "wxNode_wxSizerFlags.h"
#include "wxNode_wxBoxSizer.h"
#include "wxNode_wxButton.h"
#include "wxNode_wxStaticText.h"
#include "wxNode_wxIcon.h"
#include "wxNode_wxDialog.h"
#include "wxNode_wxArtProvider.h"
#include "wxNode_wxBitmap.h"
#include "wxNode_wxInfoBar.h"
#include "wxNode_wxLogWindow.h"
#include "wxNode_wxWebView.h"
#include "wxNode_wxWebViewArchiveHandler.h"
#include "wxLogStatus.h"
#include "messageBox.h"

extern "C" {
  static void init(v8::Handle<v8::Object> target) {
    NodeWxApp::Init(target);
    wxNode_wxFrame::Init(target);
    wxNode_wxMenu::Init(target);
    wxNode_wxMenuBar::Init(target);
    wxNode_wxPoint::Init(target);
    wxNode_wxSize::Init(target);
    wxNode_wxTextCtrl::Init(target);
    wxNode_wxPanel::Init(target);
    wxNode_wxListBox::Init(target);
    wxNode_wxSizerFlags::Init(target);
    wxNode_wxWindow::Init(target);
    wxNode_wxNotebook::Init(target);
    wxNode_wxBoxSizer::Init(target);
    wxNode_wxButton::Init(target);
    wxNode_wxStaticText::Init(target);
    wxNode_wxIcon::Init(target);
    wxNode_wxInfoBar::Init(target);
    wxNode_wxDialog::Init(target);
    wxNode_wxArtProvider::Init(target);
    wxNode_wxBitmap::Init(target);
    wxNode_wxLogWindow::Init(target);
    wxNode_wxWebView::Init(target);
    wxNode_wxWebViewArchiveHandler::Init(target);
    NodeWxMessageBox::Init(target);
    NodeWxLogStatus::Init(target);

    {
      v8::Function* newWxSize = v8::Function::Cast(*target->Get(v8::String::New("Size")));
      v8::Local<v8::Value> argv[0];
      v8::Handle<v8::Object> s = newWxSize->CallAsConstructor(0, argv)->ToObject();
      v8::Function *initFn = v8::Function::Cast(*s->Get(v8::String::New("init")));
      v8::Local<v8::Value> initArgv[2];
      initArgv[0] = v8::Number::New(wxDefaultSize.GetWidth());
      initArgv[1] = v8::Number::New(wxDefaultSize.GetHeight());
      initFn->Call(s, 2, initArgv);
      target->Set(v8::String::NewSymbol("DefaultSize"), s);
    }

    {
      v8::Function* newWxPosition = v8::Function::Cast(*target->Get(v8::String::New("Point")));
      v8::Local<v8::Value> argv[0];
      v8::Handle<v8::Object> s = newWxPosition->CallAsConstructor(0, argv)->ToObject();
      v8::Function *initFn = v8::Function::Cast(*s->Get(v8::String::New("init")));
      v8::Local<v8::Value> initArgv[2];
      initArgv[0] = v8::Number::New(wxDefaultSize.x);
      initArgv[1] = v8::Number::New(wxDefaultSize.y);
      initFn->Call(s, 2, initArgv);
      target->Set(v8::String::NewSymbol("DefaultPosition"), s);
    }
  }

  NODE_MODULE(wxnode_bindings, init);
}

//-----------------------------------------------------------------------------
// Replacement code for IMPLEMENT_APP_NO_MAIN()

#if wxCHECK_VERSION(2, 8, 0)
  DECLARE_APP(NodeWxApp)
  IMPLEMENT_APP(NodeWxApp)
  static NodeWxApp* _app = NULL;
#else
  static NodeWxApp* _app = NULL;
  wxApp* wxCreateApp() { return _app; }
  wxAppInitializer wxTheAppInitializer((wxAppInitializerFunction)wxCreateApp);
#endif
