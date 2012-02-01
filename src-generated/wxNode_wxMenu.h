
#ifndef _wxNode_wxMenu_h_
#define _wxNode_wxMenu_h_

#include "wxnode.h"
#include "wxNode_wxEvtHandler.h"

class wxNode_wxMenu : public wxMenu, public wxNodeObject, public NodeExEvtHandlerImpl {
public:
  static void Init(v8::Handle<v8::Object> target);
  static void AddMethods(v8::Handle<v8::FunctionTemplate> target);
  virtual v8::Handle<v8::Object> self() { return m_self; }

protected:
  
  
  wxNode_wxMenu(const char* title, long int style);
  
  wxNode_wxMenu(const char* title);
  
  wxNode_wxMenu(long int style);
  
  wxNode_wxMenu();
  
  

private:
  static v8::Handle<v8::Value> _init(const v8::Arguments& args);

  static v8::Handle<v8::Value> _New(const v8::Arguments& args);
  static v8::Handle<v8::Value> _Append(const v8::Arguments& args);
  static v8::Handle<v8::Value> _AppendSeparator(const v8::Arguments& args);
  static v8::Handle<v8::Value> _AppendCheckItem(const v8::Arguments& args);
  static v8::Handle<v8::Value> _AppendRadioItem(const v8::Arguments& args);
  static v8::Handle<v8::Value> _AppendSubMenu(const v8::Arguments& args);
  static v8::Handle<v8::Value> _Break(const v8::Arguments& args);
  static v8::Handle<v8::Value> _Insert(const v8::Arguments& args);
  static v8::Handle<v8::Value> _InsertSeparator(const v8::Arguments& args);
  static v8::Handle<v8::Value> _InsertCheckItem(const v8::Arguments& args);
  static v8::Handle<v8::Value> _InsertRadioItem(const v8::Arguments& args);
  static v8::Handle<v8::Value> _Prepend(const v8::Arguments& args);
  static v8::Handle<v8::Value> _PrependSeparator(const v8::Arguments& args);
  static v8::Handle<v8::Value> _PrependCheckItem(const v8::Arguments& args);
  static v8::Handle<v8::Value> _PrependRadioItem(const v8::Arguments& args);
  static v8::Handle<v8::Value> _Remove(const v8::Arguments& args);
  static v8::Handle<v8::Value> _Delete(const v8::Arguments& args);
  static v8::Handle<v8::Value> _Destroy(const v8::Arguments& args);
  static v8::Handle<v8::Value> _GetMenuItemCount(const v8::Arguments& args);
  static v8::Handle<v8::Value> _GetMenuItems(const v8::Arguments& args);
  static v8::Handle<v8::Value> _FindItem(const v8::Arguments& args);
  static v8::Handle<v8::Value> _FindItemByPosition(const v8::Arguments& args);
  static v8::Handle<v8::Value> _Enable(const v8::Arguments& args);
  static v8::Handle<v8::Value> _IsEnabled(const v8::Arguments& args);
  static v8::Handle<v8::Value> _Check(const v8::Arguments& args);
  static v8::Handle<v8::Value> _IsChecked(const v8::Arguments& args);
  static v8::Handle<v8::Value> _SetLabel(const v8::Arguments& args);
  static v8::Handle<v8::Value> _GetLabel(const v8::Arguments& args);
  static v8::Handle<v8::Value> _GetLabelText(const v8::Arguments& args);
  static v8::Handle<v8::Value> _SetHelpString(const v8::Arguments& args);
  static v8::Handle<v8::Value> _GetHelpString(const v8::Arguments& args);
  static v8::Handle<v8::Value> _SetTitle(const v8::Arguments& args);
  static v8::Handle<v8::Value> _GetTitle(const v8::Arguments& args);
  static v8::Handle<v8::Value> _SetEventHandler(const v8::Arguments& args);
  static v8::Handle<v8::Value> _GetEventHandler(const v8::Arguments& args);
  static v8::Handle<v8::Value> _SetInvokingWindow(const v8::Arguments& args);
  static v8::Handle<v8::Value> _GetInvokingWindow(const v8::Arguments& args);
  static v8::Handle<v8::Value> _GetWindow(const v8::Arguments& args);
  static v8::Handle<v8::Value> _GetStyle(const v8::Arguments& args);
  static v8::Handle<v8::Value> _UpdateUI(const v8::Arguments& args);
  static v8::Handle<v8::Value> _GetMenuBar(const v8::Arguments& args);
  static v8::Handle<v8::Value> _Attach(const v8::Arguments& args);
  static v8::Handle<v8::Value> _Detach(const v8::Arguments& args);
  static v8::Handle<v8::Value> _IsAttached(const v8::Arguments& args);
  static v8::Handle<v8::Value> _SetParent(const v8::Arguments& args);
  static v8::Handle<v8::Value> _GetParent(const v8::Arguments& args);
  static v8::Handle<v8::Value> _FindChildItem(const v8::Arguments& args);
  static v8::Handle<v8::Value> _SendEvent(const v8::Arguments& args);
  static v8::Handle<v8::Value> _LockAccels(const v8::Arguments& args);
  

  static v8::Persistent<v8::FunctionTemplate> s_ct;
};

#endif
