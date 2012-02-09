
#ifndef _wxNode_wxBookCtrlBase_h_
#define _wxNode_wxBookCtrlBase_h_

#include "wxnode.h"
#include "wxNode_wxEvtHandler.h"
class wxNode_wxEvtHandler;
class wxNode_wxControl;
class wxNode_wxWindow;
class wxNode_wxPoint;
class wxNode_wxSize;


class wxNode_wxBookCtrlBase : public wxBookCtrlBase, public wxNodeObject, public NodeExEvtHandlerImpl {
public:
  static void Init(v8::Handle<v8::Object> target);
  static void AddMethods(v8::Handle<v8::FunctionTemplate> target);
  virtual v8::Handle<v8::Object> self() { return m_self; }
  static bool AssignableFrom(const v8::Handle<v8::String>& className);
  static bool AssignableFrom(const char* className);
  static v8::Handle<v8::Value> New(const wxBookCtrlBase* obj);
  static v8::Handle<v8::Value> New(const wxNode_wxBookCtrlBase* obj);
  static v8::Handle<v8::Value> NewCopy(const wxBookCtrlBase& obj);

  

private:
  static v8::Handle<v8::Value> _init(const v8::Arguments& args);

  static v8::Handle<v8::Value> _Create(const v8::Arguments& args);
  static v8::Handle<v8::Value> _GetPageCount(const v8::Arguments& args);
  static v8::Handle<v8::Value> _GetPage(const v8::Arguments& args);
  static v8::Handle<v8::Value> _GetCurrentPage(const v8::Arguments& args);
  static v8::Handle<v8::Value> _GetSelection(const v8::Arguments& args);
  static v8::Handle<v8::Value> _SetPageText(const v8::Arguments& args);
  static v8::Handle<v8::Value> _GetPageText(const v8::Arguments& args);
  static v8::Handle<v8::Value> _GetPageImage(const v8::Arguments& args);
  static v8::Handle<v8::Value> _SetPageImage(const v8::Arguments& args);
  static v8::Handle<v8::Value> _SetPageSize(const v8::Arguments& args);
  static v8::Handle<v8::Value> _GetControllerSize(const v8::Arguments& args);
  static v8::Handle<v8::Value> _CalcSizeFromPage(const v8::Arguments& args);
  static v8::Handle<v8::Value> _GetInternalBorder(const v8::Arguments& args);
  static v8::Handle<v8::Value> _SetInternalBorder(const v8::Arguments& args);
  static v8::Handle<v8::Value> _SetControlMargin(const v8::Arguments& args);
  static v8::Handle<v8::Value> _GetControlMargin(const v8::Arguments& args);
  static v8::Handle<v8::Value> _IsVertical(const v8::Arguments& args);
  static v8::Handle<v8::Value> _SetFitToCurrentPage(const v8::Arguments& args);
  static v8::Handle<v8::Value> _GetFitToCurrentPage(const v8::Arguments& args);
  static v8::Handle<v8::Value> _GetControlSizer(const v8::Arguments& args);
  static v8::Handle<v8::Value> _DeletePage(const v8::Arguments& args);
  static v8::Handle<v8::Value> _RemovePage(const v8::Arguments& args);
  static v8::Handle<v8::Value> _DeleteAllPages(const v8::Arguments& args);
  static v8::Handle<v8::Value> _AddPage(const v8::Arguments& args);
  static v8::Handle<v8::Value> _InsertPage(const v8::Arguments& args);
  static v8::Handle<v8::Value> _SetSelection(const v8::Arguments& args);
  static v8::Handle<v8::Value> _ChangeSelection(const v8::Arguments& args);
  static v8::Handle<v8::Value> _AdvanceSelection(const v8::Arguments& args);
  static v8::Handle<v8::Value> _HitTest(const v8::Arguments& args);
  static v8::Handle<v8::Value> _HasMultiplePages(const v8::Arguments& args);
  static v8::Handle<v8::Value> _AcceptsFocus(const v8::Arguments& args);
  static v8::Handle<v8::Value> _CanApplyThemeBorder(const v8::Arguments& args);
  static v8::Handle<v8::Value> _GetClassInfo(const v8::Arguments& args);
  

  static v8::Persistent<v8::FunctionTemplate> s_ct;
};

#endif
