
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
    NodeWxMessageBox::Init(target);
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
