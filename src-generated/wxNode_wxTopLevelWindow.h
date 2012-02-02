
#ifndef _wxNode_wxTopLevelWindow_h_
#define _wxNode_wxTopLevelWindow_h_

#include "wxnode.h"
#include "wxNode_wxEvtHandler.h"
#include "wxNode_wxTopLevelWindow.h"
#include "wxNode_wxEvtHandler.h"
#include "wxNode_wxNavigationEnabled.h"
#include "wxNode_wxWindow.h"
#include "wxNode_wxPoint.h"
#include "wxNode_wxSize.h"
#include "wxNode_wxIcon.h"
#include "wxNode_wxIconBundle.h"
#include "wxNode_wxUpdateUIEvent.h"


class wxNode_wxTopLevelWindow : public wxTopLevelWindow, public wxNodeObject, public NodeExEvtHandlerImpl {
public:
  static void Init(v8::Handle<v8::Object> target);
  static void AddMethods(v8::Handle<v8::FunctionTemplate> target);
  virtual v8::Handle<v8::Object> self() { return m_self; }

protected:
  
  
  wxNode_wxTopLevelWindow();
  
  wxNode_wxTopLevelWindow(wxNode_wxWindow& parent, int winid, const char* title, wxNode_wxPoint* pos, wxNode_wxSize* size, long int style, const char* name);
  
  wxNode_wxTopLevelWindow(wxNode_wxWindow& parent, int winid, const char* title, wxNode_wxPoint* pos, wxNode_wxSize* size, long int style);
  
  wxNode_wxTopLevelWindow(wxNode_wxWindow& parent, int winid, const char* title, wxNode_wxPoint* pos, wxNode_wxSize* size);
  
  wxNode_wxTopLevelWindow(wxNode_wxWindow& parent, int winid, const char* title, wxNode_wxPoint* pos);
  
  wxNode_wxTopLevelWindow(wxNode_wxWindow& parent, int winid, const char* title);
  
  

private:
  static v8::Handle<v8::Value> _init(const v8::Arguments& args);

  static v8::Handle<v8::Value> _Maximize(const v8::Arguments& args);
  static v8::Handle<v8::Value> _Restore(const v8::Arguments& args);
  static v8::Handle<v8::Value> _Iconize(const v8::Arguments& args);
  static v8::Handle<v8::Value> _IsMaximized(const v8::Arguments& args);
  static v8::Handle<v8::Value> _IsAlwaysMaximized(const v8::Arguments& args);
  static v8::Handle<v8::Value> _IsIconized(const v8::Arguments& args);
  static v8::Handle<v8::Value> _GetIcon(const v8::Arguments& args);
  static v8::Handle<v8::Value> _GetIcons(const v8::Arguments& args);
  static v8::Handle<v8::Value> _SetIcon(const v8::Arguments& args);
  static v8::Handle<v8::Value> _SetIcons(const v8::Arguments& args);
  static v8::Handle<v8::Value> _ShowFullScreen(const v8::Arguments& args);
  static v8::Handle<v8::Value> _ShowWithoutActivating(const v8::Arguments& args);
  static v8::Handle<v8::Value> _IsFullScreen(const v8::Arguments& args);
  static v8::Handle<v8::Value> _SetTitle(const v8::Arguments& args);
  static v8::Handle<v8::Value> _GetTitle(const v8::Arguments& args);
  static v8::Handle<v8::Value> _EnableCloseButton(const v8::Arguments& args);
  static v8::Handle<v8::Value> _RequestUserAttention(const v8::Arguments& args);
  static v8::Handle<v8::Value> _IsActive(const v8::Arguments& args);
  static v8::Handle<v8::Value> _ShouldPreventAppExit(const v8::Arguments& args);
  static v8::Handle<v8::Value> _CentreOnScreen(const v8::Arguments& args);
  static v8::Handle<v8::Value> _CenterOnScreen(const v8::Arguments& args);
  static v8::Handle<v8::Value> _GetDefaultSize(const v8::Arguments& args);
  static v8::Handle<v8::Value> _GetDefaultItem(const v8::Arguments& args);
  static v8::Handle<v8::Value> _SetDefaultItem(const v8::Arguments& args);
  static v8::Handle<v8::Value> _GetTmpDefaultItem(const v8::Arguments& args);
  static v8::Handle<v8::Value> _SetTmpDefaultItem(const v8::Arguments& args);
  static v8::Handle<v8::Value> _Destroy(const v8::Arguments& args);
  static v8::Handle<v8::Value> _IsTopLevel(const v8::Arguments& args);
  static v8::Handle<v8::Value> _IsTopNavigationDomain(const v8::Arguments& args);
  static v8::Handle<v8::Value> _IsVisible(const v8::Arguments& args);
  static v8::Handle<v8::Value> _OnCloseWindow(const v8::Arguments& args);
  static v8::Handle<v8::Value> _OnSize(const v8::Arguments& args);
  static v8::Handle<v8::Value> _GetRectForTopLevelChildren(const v8::Arguments& args);
  static v8::Handle<v8::Value> _OnActivate(const v8::Arguments& args);
  static v8::Handle<v8::Value> _DoUpdateWindowUI(const v8::Arguments& args);
  static v8::Handle<v8::Value> _SetMinSize(const v8::Arguments& args);
  static v8::Handle<v8::Value> _SetMaxSize(const v8::Arguments& args);
  static v8::Handle<v8::Value> _OSXSetModified(const v8::Arguments& args);
  static v8::Handle<v8::Value> _OSXIsModified(const v8::Arguments& args);
  static v8::Handle<v8::Value> _SetRepresentedFilename(const v8::Arguments& args);
  

  static v8::Persistent<v8::FunctionTemplate> s_ct;
};

#endif
