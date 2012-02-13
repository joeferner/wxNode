
#ifndef _wxNode_wxToolBarBase_h_
#define _wxNode_wxToolBarBase_h_

#include "wxnode.h"
#include "wxNode_wxEvtHandler.h"
class wxNode_wxEvtHandler;
class wxNode_wxControl;
class wxNode_wxBitmap;
class wxNode_wxObject;
class wxNode_wxToolBarTool;
class wxNode_wxSize;
class wxNode_wxMenu;


class wxNode_wxToolBarBase : public wxToolBarBase, public wxNodeObject, public NodeExEvtHandlerImpl {
public:
  static void Init(v8::Handle<v8::Object> target);
  static void AddMethods(v8::Handle<v8::FunctionTemplate> target);
  virtual v8::Handle<v8::Object> self() { return m_self; }
  static bool AssignableFrom(const v8::Handle<v8::String>& className);
  static bool AssignableFrom(const char* className);
  static v8::Handle<v8::Value> New(const wxToolBarBase* obj);
  static v8::Handle<v8::Value> New(const wxNode_wxToolBarBase* obj);
  static v8::Handle<v8::Value> NewCopy(const wxToolBarBase& obj);

  

private:
  static v8::Handle<v8::Value> _init(const v8::Arguments& args);

  static v8::Handle<v8::Value> _AddTool(const v8::Arguments& args);
  static v8::Handle<v8::Value> _AddCheckTool(const v8::Arguments& args);
  static v8::Handle<v8::Value> _AddRadioTool(const v8::Arguments& args);
  static v8::Handle<v8::Value> _InsertTool(const v8::Arguments& args);
  static v8::Handle<v8::Value> _AddControl(const v8::Arguments& args);
  static v8::Handle<v8::Value> _InsertControl(const v8::Arguments& args);
  static v8::Handle<v8::Value> _FindControl(const v8::Arguments& args);
  static v8::Handle<v8::Value> _AddSeparator(const v8::Arguments& args);
  static v8::Handle<v8::Value> _InsertSeparator(const v8::Arguments& args);
  static v8::Handle<v8::Value> _AddStretchableSpace(const v8::Arguments& args);
  static v8::Handle<v8::Value> _InsertStretchableSpace(const v8::Arguments& args);
  static v8::Handle<v8::Value> _RemoveTool(const v8::Arguments& args);
  static v8::Handle<v8::Value> _DeleteToolByPos(const v8::Arguments& args);
  static v8::Handle<v8::Value> _DeleteTool(const v8::Arguments& args);
  static v8::Handle<v8::Value> _ClearTools(const v8::Arguments& args);
  static v8::Handle<v8::Value> _Realize(const v8::Arguments& args);
  static v8::Handle<v8::Value> _EnableTool(const v8::Arguments& args);
  static v8::Handle<v8::Value> _ToggleTool(const v8::Arguments& args);
  static v8::Handle<v8::Value> _SetToggle(const v8::Arguments& args);
  static v8::Handle<v8::Value> _GetToolClientData(const v8::Arguments& args);
  static v8::Handle<v8::Value> _SetToolClientData(const v8::Arguments& args);
  static v8::Handle<v8::Value> _GetToolPos(const v8::Arguments& args);
  static v8::Handle<v8::Value> _GetToolState(const v8::Arguments& args);
  static v8::Handle<v8::Value> _GetToolEnabled(const v8::Arguments& args);
  static v8::Handle<v8::Value> _SetToolShortHelp(const v8::Arguments& args);
  static v8::Handle<v8::Value> _GetToolShortHelp(const v8::Arguments& args);
  static v8::Handle<v8::Value> _SetToolLongHelp(const v8::Arguments& args);
  static v8::Handle<v8::Value> _GetToolLongHelp(const v8::Arguments& args);
  static v8::Handle<v8::Value> _SetToolNormalBitmap(const v8::Arguments& args);
  static v8::Handle<v8::Value> _SetToolDisabledBitmap(const v8::Arguments& args);
  static v8::Handle<v8::Value> _SetMargins(const v8::Arguments& args);
  static v8::Handle<v8::Value> _SetToolPacking(const v8::Arguments& args);
  static v8::Handle<v8::Value> _SetToolSeparation(const v8::Arguments& args);
  static v8::Handle<v8::Value> _GetToolMargins(const v8::Arguments& args);
  static v8::Handle<v8::Value> _GetToolPacking(const v8::Arguments& args);
  static v8::Handle<v8::Value> _GetToolSeparation(const v8::Arguments& args);
  static v8::Handle<v8::Value> _SetRows(const v8::Arguments& args);
  static v8::Handle<v8::Value> _SetMaxRowsCols(const v8::Arguments& args);
  static v8::Handle<v8::Value> _GetMaxRows(const v8::Arguments& args);
  static v8::Handle<v8::Value> _GetMaxCols(const v8::Arguments& args);
  static v8::Handle<v8::Value> _SetToolBitmapSize(const v8::Arguments& args);
  static v8::Handle<v8::Value> _GetToolBitmapSize(const v8::Arguments& args);
  static v8::Handle<v8::Value> _GetToolSize(const v8::Arguments& args);
  static v8::Handle<v8::Value> _FindToolForPosition(const v8::Arguments& args);
  static v8::Handle<v8::Value> _FindById(const v8::Arguments& args);
  static v8::Handle<v8::Value> _IsVertical(const v8::Arguments& args);
  static v8::Handle<v8::Value> _GetToolsCount(const v8::Arguments& args);
  static v8::Handle<v8::Value> _GetToolByPos(const v8::Arguments& args);
  static v8::Handle<v8::Value> _OnLeftClick(const v8::Arguments& args);
  static v8::Handle<v8::Value> _OnRightClick(const v8::Arguments& args);
  static v8::Handle<v8::Value> _OnMouseEnter(const v8::Arguments& args);
  static v8::Handle<v8::Value> _GetMargins(const v8::Arguments& args);
  static v8::Handle<v8::Value> _UpdateWindowUI(const v8::Arguments& args);
  static v8::Handle<v8::Value> _AcceptsFocus(const v8::Arguments& args);
  static v8::Handle<v8::Value> _SetDropdownMenu(const v8::Arguments& args);
  

  static v8::Persistent<v8::FunctionTemplate> s_ct;
};

#endif
