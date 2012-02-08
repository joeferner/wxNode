
#ifndef _wxNode_wxSizer_h_
#define _wxNode_wxSizer_h_

#include "wxnode.h"
#include "wxNode_wxEvtHandler.h"
class wxNode_wxEvtHandler;
class wxNode_wxObject;
class wxNode_wxWindow;
class wxNode_wxSizer;
class wxNode_wxSizerFlags;
class wxNode_wxSizerItem;
class wxNode_wxSize;
class wxNode_wxPoint;


class wxNode_wxSizer : public wxSizer, public wxNodeObject, public NodeExEvtHandlerImpl {
public:
  static void Init(v8::Handle<v8::Object> target);
  static void AddMethods(v8::Handle<v8::FunctionTemplate> target);
  virtual v8::Handle<v8::Object> self() { return m_self; }
  static bool AssignableFrom(const v8::Handle<v8::String>& className);
  static bool AssignableFrom(const char* className);
  static v8::Handle<v8::Value> New(wxSizer* obj);
  static v8::Handle<v8::Value> New(wxNode_wxSizer* obj);
  static v8::Handle<v8::Value> NewCopy(wxSizer& obj);

  

private:
  static v8::Handle<v8::Value> _init(const v8::Arguments& args);

  static v8::Handle<v8::Value> _Add(const v8::Arguments& args);
  static v8::Handle<v8::Value> _AddSpacer(const v8::Arguments& args);
  static v8::Handle<v8::Value> _AddStretchSpacer(const v8::Arguments& args);
  static v8::Handle<v8::Value> _Insert(const v8::Arguments& args);
  static v8::Handle<v8::Value> _InsertSpacer(const v8::Arguments& args);
  static v8::Handle<v8::Value> _InsertStretchSpacer(const v8::Arguments& args);
  static v8::Handle<v8::Value> _Prepend(const v8::Arguments& args);
  static v8::Handle<v8::Value> _PrependSpacer(const v8::Arguments& args);
  static v8::Handle<v8::Value> _PrependStretchSpacer(const v8::Arguments& args);
  static v8::Handle<v8::Value> _SetContainingWindow(const v8::Arguments& args);
  static v8::Handle<v8::Value> _GetContainingWindow(const v8::Arguments& args);
  static v8::Handle<v8::Value> _Remove(const v8::Arguments& args);
  static v8::Handle<v8::Value> _Detach(const v8::Arguments& args);
  static v8::Handle<v8::Value> _Replace(const v8::Arguments& args);
  static v8::Handle<v8::Value> _Clear(const v8::Arguments& args);
  static v8::Handle<v8::Value> _DeleteWindows(const v8::Arguments& args);
  static v8::Handle<v8::Value> _InformFirstDirection(const v8::Arguments& args);
  static v8::Handle<v8::Value> _SetMinSize(const v8::Arguments& args);
  static v8::Handle<v8::Value> _SetItemMinSize(const v8::Arguments& args);
  static v8::Handle<v8::Value> _GetSize(const v8::Arguments& args);
  static v8::Handle<v8::Value> _GetPosition(const v8::Arguments& args);
  static v8::Handle<v8::Value> _GetMinSize(const v8::Arguments& args);
  static v8::Handle<v8::Value> _CalcMin(const v8::Arguments& args);
  static v8::Handle<v8::Value> _RecalcSizes(const v8::Arguments& args);
  static v8::Handle<v8::Value> _Layout(const v8::Arguments& args);
  static v8::Handle<v8::Value> _ComputeFittingClientSize(const v8::Arguments& args);
  static v8::Handle<v8::Value> _ComputeFittingWindowSize(const v8::Arguments& args);
  static v8::Handle<v8::Value> _Fit(const v8::Arguments& args);
  static v8::Handle<v8::Value> _FitInside(const v8::Arguments& args);
  static v8::Handle<v8::Value> _SetSizeHints(const v8::Arguments& args);
  static v8::Handle<v8::Value> _GetChildren(const v8::Arguments& args);
  static v8::Handle<v8::Value> _SetDimension(const v8::Arguments& args);
  static v8::Handle<v8::Value> _GetItemCount(const v8::Arguments& args);
  static v8::Handle<v8::Value> _IsEmpty(const v8::Arguments& args);
  static v8::Handle<v8::Value> _GetItem(const v8::Arguments& args);
  static v8::Handle<v8::Value> _GetItemById(const v8::Arguments& args);
  static v8::Handle<v8::Value> _Show(const v8::Arguments& args);
  static v8::Handle<v8::Value> _Hide(const v8::Arguments& args);
  static v8::Handle<v8::Value> _IsShown(const v8::Arguments& args);
  static v8::Handle<v8::Value> _ShowItems(const v8::Arguments& args);
  static v8::Handle<v8::Value> _GetClassInfo(const v8::Arguments& args);
  

  static v8::Persistent<v8::FunctionTemplate> s_ct;
};

#endif
