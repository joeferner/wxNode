
#ifndef _wxNode_wxMenuBar_h_
#define _wxNode_wxMenuBar_h_

#include "wxnode.h"
#include "wxNode_wxEvtHandler.h"
class wxNode_wxEvtHandler;
class wxNode_wxWindow;
class wxNode_wxMenu;
class wxNode_wxFrame;


class wxNode_wxMenuBar : public wxMenuBar, public wxNodeObject, public NodeExEvtHandlerImpl {
public:
  static void Init(v8::Handle<v8::Object> target);
  static void AddMethods(v8::Handle<v8::FunctionTemplate> target);
  virtual v8::Handle<v8::Object> self() { return m_self; }
  static bool AssignableFrom(const v8::Handle<v8::String>& className);
  static bool AssignableFrom(const char* className);
  static v8::Handle<v8::Value> New(const wxMenuBar* obj);
  static v8::Handle<v8::Value> New(const wxNode_wxMenuBar* obj);
  static v8::Handle<v8::Value> NewCopy(const wxMenuBar& obj);

  
  
  wxNode_wxMenuBar();
  
  wxNode_wxMenuBar(long int style);
  
  wxNode_wxMenuBar(unsigned int n, wxMenu** menus, const wxString* titles, long int style);
  
  wxNode_wxMenuBar(unsigned int n, wxMenu** menus, const wxString* titles);
  
  

private:
  static v8::Handle<v8::Value> _init(const v8::Arguments& args);

  static v8::Handle<v8::Value> _Append(const v8::Arguments& args);
  static v8::Handle<v8::Value> _Insert(const v8::Arguments& args);
  static v8::Handle<v8::Value> _GetMenuCount(const v8::Arguments& args);
  static v8::Handle<v8::Value> _GetMenu(const v8::Arguments& args);
  static v8::Handle<v8::Value> _Replace(const v8::Arguments& args);
  static v8::Handle<v8::Value> _Remove(const v8::Arguments& args);
  static v8::Handle<v8::Value> _EnableTop(const v8::Arguments& args);
  static v8::Handle<v8::Value> _IsEnabledTop(const v8::Arguments& args);
  static v8::Handle<v8::Value> _SetMenuLabel(const v8::Arguments& args);
  static v8::Handle<v8::Value> _GetMenuLabel(const v8::Arguments& args);
  static v8::Handle<v8::Value> _GetMenuLabelText(const v8::Arguments& args);
  static v8::Handle<v8::Value> _FindMenuItem(const v8::Arguments& args);
  static v8::Handle<v8::Value> _FindItem(const v8::Arguments& args);
  static v8::Handle<v8::Value> _FindMenu(const v8::Arguments& args);
  static v8::Handle<v8::Value> _Enable(const v8::Arguments& args);
  static v8::Handle<v8::Value> _Check(const v8::Arguments& args);
  static v8::Handle<v8::Value> _IsChecked(const v8::Arguments& args);
  static v8::Handle<v8::Value> _IsEnabled(const v8::Arguments& args);
  static v8::Handle<v8::Value> _SetLabel(const v8::Arguments& args);
  static v8::Handle<v8::Value> _GetLabel(const v8::Arguments& args);
  static v8::Handle<v8::Value> _SetHelpString(const v8::Arguments& args);
  static v8::Handle<v8::Value> _GetHelpString(const v8::Arguments& args);
  static v8::Handle<v8::Value> _GetFrame(const v8::Arguments& args);
  static v8::Handle<v8::Value> _IsAttached(const v8::Arguments& args);
  static v8::Handle<v8::Value> _Attach(const v8::Arguments& args);
  static v8::Handle<v8::Value> _Detach(const v8::Arguments& args);
  static v8::Handle<v8::Value> _AcceptsFocusFromKeyboard(const v8::Arguments& args);
  static v8::Handle<v8::Value> _UpdateMenus(const v8::Arguments& args);
  static v8::Handle<v8::Value> _CanBeOutsideClientArea(const v8::Arguments& args);
  
  

  static v8::Persistent<v8::FunctionTemplate> s_ct;
};

#endif
