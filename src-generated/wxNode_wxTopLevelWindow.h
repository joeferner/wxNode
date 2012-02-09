
#ifndef _wxNode_wxTopLevelWindow_h_
#define _wxNode_wxTopLevelWindow_h_

#include "wxnode.h"
#include "wxNode_wxEvtHandler.h"
class wxNode_wxEvtHandler;
class wxNode_wxNavigationEnabled;
class wxNode_wxWindow;
class wxNode_wxPoint;
class wxNode_wxSize;
class wxNode_wxIcon;
class wxNode_wxIconBundle;
class wxNode_wxUpdateUIEvent;


class wxNode_wxTopLevelWindow : public wxTopLevelWindow, public wxNodeObject, public NodeExEvtHandlerImpl {
public:
  static void Init(v8::Handle<v8::Object> target);
  static void AddMethods(v8::Handle<v8::FunctionTemplate> target);
  virtual v8::Handle<v8::Object> self() { return m_self; }
  static bool AssignableFrom(const v8::Handle<v8::String>& className);
  static bool AssignableFrom(const char* className);
  static v8::Handle<v8::Value> New(const wxTopLevelWindow* obj);
  static v8::Handle<v8::Value> New(const wxNode_wxTopLevelWindow* obj);
  static v8::Handle<v8::Value> NewCopy(const wxTopLevelWindow& obj);

  
  
  wxNode_wxTopLevelWindow();
  
  wxNode_wxTopLevelWindow(wxWindow* parent, int winid, const wxString& title, wxPoint& pos, wxSize& size, long int style, const wxString& name);
  
  wxNode_wxTopLevelWindow(wxWindow* parent, int winid, const wxString& title, wxPoint& pos, wxSize& size, long int style);
  
  wxNode_wxTopLevelWindow(wxWindow* parent, int winid, const wxString& title, wxPoint& pos, wxSize& size);
  
  wxNode_wxTopLevelWindow(wxWindow* parent, int winid, const wxString& title, wxPoint& pos);
  
  wxNode_wxTopLevelWindow(wxWindow* parent, int winid, const wxString& title);
  
  

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
