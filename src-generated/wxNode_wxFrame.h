
#ifndef _wxNode_wxFrame_h_
#define _wxNode_wxFrame_h_

#include "wxnode.h"
#include "wxNode_wxEvtHandler.h"
class wxNode_wxEvtHandler;
class wxNode_wxTopLevelWindow;
class wxNode_wxWindow;
class wxNode_wxPoint;
class wxNode_wxSize;
class wxNode_wxMenuBar;
class wxNode_wxMenuItem;
class wxNode_wxStatusBar;
class wxNode_wxToolBar;
class wxNode_wxMenu;


class wxNode_wxFrame : public wxFrame, public wxNodeObject, public NodeExEvtHandlerImpl {
public:
  static void Init(v8::Handle<v8::Object> target);
  static void AddMethods(v8::Handle<v8::FunctionTemplate> target);
  virtual v8::Handle<v8::Object> self() { return m_self; }
  static bool AssignableFrom(const v8::Handle<v8::String>& className);
  static bool AssignableFrom(const char* className);
  static v8::Handle<v8::Value> New(wxFrame* obj);
  static v8::Handle<v8::Value> New(wxNode_wxFrame* obj);
  static v8::Handle<v8::Value> NewCopy(wxFrame& obj);

  
  
  wxNode_wxFrame();
  
  wxNode_wxFrame(wxWindow* parent, int id, const wxString& title, wxPoint& pos, wxSize& size, long int style, const wxString& name);
  
  wxNode_wxFrame(wxWindow* parent, int id, const wxString& title, wxPoint& pos, wxSize& size, long int style);
  
  wxNode_wxFrame(wxWindow* parent, int id, const wxString& title, wxPoint& pos, wxSize& size);
  
  wxNode_wxFrame(wxWindow* parent, int id, const wxString& title, wxPoint& pos);
  
  wxNode_wxFrame(wxWindow* parent, int id, const wxString& title);
  
  

private:
  static v8::Handle<v8::Value> _init(const v8::Arguments& args);

  static v8::Handle<v8::Value> _GetClientAreaOrigin(const v8::Arguments& args);
  static v8::Handle<v8::Value> _SetMenuBar(const v8::Arguments& args);
  static v8::Handle<v8::Value> _GetMenuBar(const v8::Arguments& args);
  static v8::Handle<v8::Value> _FindItemInMenuBar(const v8::Arguments& args);
  static v8::Handle<v8::Value> _ProcessCommand(const v8::Arguments& args);
  static v8::Handle<v8::Value> _CreateStatusBar(const v8::Arguments& args);
  static v8::Handle<v8::Value> _OnCreateStatusBar(const v8::Arguments& args);
  static v8::Handle<v8::Value> _GetStatusBar(const v8::Arguments& args);
  static v8::Handle<v8::Value> _SetStatusBar(const v8::Arguments& args);
  static v8::Handle<v8::Value> _SetStatusText(const v8::Arguments& args);
  static v8::Handle<v8::Value> _SetStatusWidths(const v8::Arguments& args);
  static v8::Handle<v8::Value> _PushStatusText(const v8::Arguments& args);
  static v8::Handle<v8::Value> _PopStatusText(const v8::Arguments& args);
  static v8::Handle<v8::Value> _SetStatusBarPane(const v8::Arguments& args);
  static v8::Handle<v8::Value> _GetStatusBarPane(const v8::Arguments& args);
  static v8::Handle<v8::Value> _CreateToolBar(const v8::Arguments& args);
  static v8::Handle<v8::Value> _OnCreateToolBar(const v8::Arguments& args);
  static v8::Handle<v8::Value> _GetToolBar(const v8::Arguments& args);
  static v8::Handle<v8::Value> _SetToolBar(const v8::Arguments& args);
  static v8::Handle<v8::Value> _OnMenuOpen(const v8::Arguments& args);
  static v8::Handle<v8::Value> _OnMenuClose(const v8::Arguments& args);
  static v8::Handle<v8::Value> _OnMenuHighlight(const v8::Arguments& args);
  static v8::Handle<v8::Value> _DoMenuUpdates(const v8::Arguments& args);
  static v8::Handle<v8::Value> _UpdateWindowUI(const v8::Arguments& args);
  static v8::Handle<v8::Value> _OnInternalIdle(const v8::Arguments& args);
  static v8::Handle<v8::Value> _DoGiveHelp(const v8::Arguments& args);
  static v8::Handle<v8::Value> _IsClientAreaChild(const v8::Arguments& args);
  

  static v8::Persistent<v8::FunctionTemplate> s_ct;
};

#endif
