
#ifndef _wxNode_wxToolBarToolBase_h_
#define _wxNode_wxToolBarToolBase_h_

#include "wxnode.h"
#include "wxNode_wxEvtHandler.h"
class wxNode_wxEvtHandler;
class wxNode_wxObject;
class wxNode_wxBitmap;
class wxNode_wxToolBar;
class wxNode_wxMenu;


class wxNode_wxToolBarToolBase : public wxToolBarToolBase, public wxNodeObject, public NodeExEvtHandlerImpl {
public:
  static void Init(v8::Handle<v8::Object> target);
  static void AddMethods(v8::Handle<v8::FunctionTemplate> target);
  virtual v8::Handle<v8::Object> self() { return m_self; }
  static bool AssignableFrom(const v8::Handle<v8::String>& className);
  static bool AssignableFrom(const char* className);
  static v8::Handle<v8::Value> New(const wxToolBarToolBase* obj);
  static v8::Handle<v8::Value> New(const wxNode_wxToolBarToolBase* obj);
  static v8::Handle<v8::Value> NewCopy(const wxToolBarToolBase& obj);

  

private:
  static v8::Handle<v8::Value> _init(const v8::Arguments& args);

  static v8::Handle<v8::Value> _GetId(const v8::Arguments& args);
  static v8::Handle<v8::Value> _GetControl(const v8::Arguments& args);
  static v8::Handle<v8::Value> _GetToolBar(const v8::Arguments& args);
  static v8::Handle<v8::Value> _IsStretchable(const v8::Arguments& args);
  static v8::Handle<v8::Value> _IsButton(const v8::Arguments& args);
  static v8::Handle<v8::Value> _IsControl(const v8::Arguments& args);
  static v8::Handle<v8::Value> _IsSeparator(const v8::Arguments& args);
  static v8::Handle<v8::Value> _IsStretchableSpace(const v8::Arguments& args);
  static v8::Handle<v8::Value> _GetStyle(const v8::Arguments& args);
  static v8::Handle<v8::Value> _GetKind(const v8::Arguments& args);
  static v8::Handle<v8::Value> _MakeStretchable(const v8::Arguments& args);
  static v8::Handle<v8::Value> _IsEnabled(const v8::Arguments& args);
  static v8::Handle<v8::Value> _IsToggled(const v8::Arguments& args);
  static v8::Handle<v8::Value> _CanBeToggled(const v8::Arguments& args);
  static v8::Handle<v8::Value> _GetNormalBitmap(const v8::Arguments& args);
  static v8::Handle<v8::Value> _GetDisabledBitmap(const v8::Arguments& args);
  static v8::Handle<v8::Value> _GetBitmap(const v8::Arguments& args);
  static v8::Handle<v8::Value> _GetLabel(const v8::Arguments& args);
  static v8::Handle<v8::Value> _GetShortHelp(const v8::Arguments& args);
  static v8::Handle<v8::Value> _GetLongHelp(const v8::Arguments& args);
  static v8::Handle<v8::Value> _GetClientData(const v8::Arguments& args);
  static v8::Handle<v8::Value> _Enable(const v8::Arguments& args);
  static v8::Handle<v8::Value> _Toggle(const v8::Arguments& args);
  static v8::Handle<v8::Value> _SetToggle(const v8::Arguments& args);
  static v8::Handle<v8::Value> _SetShortHelp(const v8::Arguments& args);
  static v8::Handle<v8::Value> _SetLongHelp(const v8::Arguments& args);
  static v8::Handle<v8::Value> _SetNormalBitmap(const v8::Arguments& args);
  static v8::Handle<v8::Value> _SetDisabledBitmap(const v8::Arguments& args);
  static v8::Handle<v8::Value> _SetLabel(const v8::Arguments& args);
  static v8::Handle<v8::Value> _SetClientData(const v8::Arguments& args);
  static v8::Handle<v8::Value> _Detach(const v8::Arguments& args);
  static v8::Handle<v8::Value> _Attach(const v8::Arguments& args);
  static v8::Handle<v8::Value> _SetDropdownMenu(const v8::Arguments& args);
  static v8::Handle<v8::Value> _GetDropdownMenu(const v8::Arguments& args);
  static v8::Handle<v8::Value> _GetClassInfo(const v8::Arguments& args);
  static v8::Handle<v8::Value> _wxCreateObject(const v8::Arguments& args);
  

  static v8::Persistent<v8::FunctionTemplate> s_ct;
};

#endif
