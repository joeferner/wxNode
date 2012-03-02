
#ifndef _wxNode_wxMenuItem_h_
#define _wxNode_wxMenuItem_h_

#include "wxnode.h"
#include "wxNode_wxEvtHandler.h"
class wxNode_wxEvtHandler;
class wxNode_wxObject;
class wxNode_wxMenu;
class wxNode_wxAcceleratorEntry;


class wxNode_wxMenuItem : public wxMenuItem, public wxNodeObject, public NodeExEvtHandlerImpl {
public:
  static void Init(v8::Handle<v8::Object> target);
  static void AddMethods(v8::Handle<v8::FunctionTemplate> target);
  virtual v8::Handle<v8::Object> self() { return m_self; }
  static bool AssignableFrom(const v8::Handle<v8::String>& className);
  static bool AssignableFrom(const char* className);
  static v8::Handle<v8::Value> New(const wxMenuItem* obj);
  static v8::Handle<v8::Value> New(const wxNode_wxMenuItem* obj);
  static v8::Handle<v8::Value> NewCopy(const wxMenuItem& obj);

  
  
  wxNode_wxMenuItem(wxMenu* parentMenu, int id, const wxString& text, const wxString& help, wxItemKind kind, wxMenu* subMenu);
  
  wxNode_wxMenuItem(wxMenu* parentMenu, int id, const wxString& text, const wxString& help, wxItemKind kind);
  
  wxNode_wxMenuItem(wxMenu* parentMenu, int id, const wxString& text, const wxString& help);
  
  wxNode_wxMenuItem(wxMenu* parentMenu, int id, const wxString& text);
  
  wxNode_wxMenuItem(wxMenu* parentMenu, int id);
  
  wxNode_wxMenuItem(wxMenu* parentMenu);
  
  wxNode_wxMenuItem();
  
  

private:
  static v8::Handle<v8::Value> _init(const v8::Arguments& args);

  static v8::Handle<v8::Value> _GetMenu(const v8::Arguments& args);
  static v8::Handle<v8::Value> _SetMenu(const v8::Arguments& args);
  static v8::Handle<v8::Value> _SetId(const v8::Arguments& args);
  static v8::Handle<v8::Value> _GetId(const v8::Arguments& args);
  static v8::Handle<v8::Value> _SetItemLabel(const v8::Arguments& args);
  static v8::Handle<v8::Value> _GetItemLabel(const v8::Arguments& args);
  static v8::Handle<v8::Value> _GetItemLabelText(const v8::Arguments& args);
  static v8::Handle<v8::Value> _GetLabelText(const v8::Arguments& args);
  static v8::Handle<v8::Value> _GetKind(const v8::Arguments& args);
  static v8::Handle<v8::Value> _SetKind(const v8::Arguments& args);
  static v8::Handle<v8::Value> _IsSeparator(const v8::Arguments& args);
  static v8::Handle<v8::Value> _SetCheckable(const v8::Arguments& args);
  static v8::Handle<v8::Value> _IsCheckable(const v8::Arguments& args);
  static v8::Handle<v8::Value> _IsSubMenu(const v8::Arguments& args);
  static v8::Handle<v8::Value> _SetSubMenu(const v8::Arguments& args);
  static v8::Handle<v8::Value> _GetSubMenu(const v8::Arguments& args);
  static v8::Handle<v8::Value> _Enable(const v8::Arguments& args);
  static v8::Handle<v8::Value> _IsEnabled(const v8::Arguments& args);
  static v8::Handle<v8::Value> _Check(const v8::Arguments& args);
  static v8::Handle<v8::Value> _IsChecked(const v8::Arguments& args);
  static v8::Handle<v8::Value> _Toggle(const v8::Arguments& args);
  static v8::Handle<v8::Value> _SetHelp(const v8::Arguments& args);
  static v8::Handle<v8::Value> _GetHelp(const v8::Arguments& args);
  static v8::Handle<v8::Value> _GetAccel(const v8::Arguments& args);
  static v8::Handle<v8::Value> _SetAccel(const v8::Arguments& args);
  
  

  static v8::Persistent<v8::FunctionTemplate> s_ct;
};

#endif
