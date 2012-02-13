
#ifndef _wxNode_wxWebView_h_
#define _wxNode_wxWebView_h_

#include "wxnode.h"
#include "wxNode_wxEvtHandler.h"
class wxNode_wxEvtHandler;
class wxNode_wxControl;
class wxNode_wxWindow;
class wxNode_wxPoint;
class wxNode_wxSize;
class wxNode_wxWebViewHandler;
class wxNode_wxInputStream;
class wxNode_wxWebViewHistoryItem;


class wxNode_wxWebView : public wxWebView, public wxNodeObject, public NodeExEvtHandlerImpl {
public:
  static void Init(v8::Handle<v8::Object> target);
  static void AddMethods(v8::Handle<v8::FunctionTemplate> target);
  virtual v8::Handle<v8::Object> self() { return m_self; }
  static bool AssignableFrom(const v8::Handle<v8::String>& className);
  static bool AssignableFrom(const char* className);
  static v8::Handle<v8::Value> New(const wxWebView* obj);
  static v8::Handle<v8::Value> New(const wxNode_wxWebView* obj);
  static v8::Handle<v8::Value> NewCopy(const wxWebView& obj);

  

private:
  static v8::Handle<v8::Value> _init(const v8::Arguments& args);

  static v8::Handle<v8::Value> _Create(const v8::Arguments& args);
  static v8::Handle<v8::Value> _New(const v8::Arguments& args);
  static v8::Handle<v8::Value> _GetCurrentTitle(const v8::Arguments& args);
  static v8::Handle<v8::Value> _GetCurrentURL(const v8::Arguments& args);
  static v8::Handle<v8::Value> _GetPageSource(const v8::Arguments& args);
  static v8::Handle<v8::Value> _GetPageText(const v8::Arguments& args);
  static v8::Handle<v8::Value> _IsBusy(const v8::Arguments& args);
  static v8::Handle<v8::Value> _IsEditable(const v8::Arguments& args);
  static v8::Handle<v8::Value> _LoadURL(const v8::Arguments& args);
  static v8::Handle<v8::Value> _Print(const v8::Arguments& args);
  static v8::Handle<v8::Value> _RegisterHandler(const v8::Arguments& args);
  static v8::Handle<v8::Value> _Reload(const v8::Arguments& args);
  static v8::Handle<v8::Value> _RunScript(const v8::Arguments& args);
  static v8::Handle<v8::Value> _SetEditable(const v8::Arguments& args);
  static v8::Handle<v8::Value> _SetPage(const v8::Arguments& args);
  static v8::Handle<v8::Value> _Stop(const v8::Arguments& args);
  static v8::Handle<v8::Value> _CanGoBack(const v8::Arguments& args);
  static v8::Handle<v8::Value> _CanGoForward(const v8::Arguments& args);
  static v8::Handle<v8::Value> _GoBack(const v8::Arguments& args);
  static v8::Handle<v8::Value> _GoForward(const v8::Arguments& args);
  static v8::Handle<v8::Value> _ClearHistory(const v8::Arguments& args);
  static v8::Handle<v8::Value> _EnableHistory(const v8::Arguments& args);
  static v8::Handle<v8::Value> _GetBackwardHistory(const v8::Arguments& args);
  static v8::Handle<v8::Value> _GetForwardHistory(const v8::Arguments& args);
  static v8::Handle<v8::Value> _LoadHistoryItem(const v8::Arguments& args);
  static v8::Handle<v8::Value> _CanSetZoomType(const v8::Arguments& args);
  static v8::Handle<v8::Value> _GetZoom(const v8::Arguments& args);
  static v8::Handle<v8::Value> _GetZoomType(const v8::Arguments& args);
  static v8::Handle<v8::Value> _SetZoom(const v8::Arguments& args);
  static v8::Handle<v8::Value> _SetZoomType(const v8::Arguments& args);
  static v8::Handle<v8::Value> _SelectAll(const v8::Arguments& args);
  static v8::Handle<v8::Value> _HasSelection(const v8::Arguments& args);
  static v8::Handle<v8::Value> _DeleteSelection(const v8::Arguments& args);
  static v8::Handle<v8::Value> _GetSelectedText(const v8::Arguments& args);
  static v8::Handle<v8::Value> _GetSelectedSource(const v8::Arguments& args);
  static v8::Handle<v8::Value> _ClearSelection(const v8::Arguments& args);
  static v8::Handle<v8::Value> _CanCut(const v8::Arguments& args);
  static v8::Handle<v8::Value> _CanCopy(const v8::Arguments& args);
  static v8::Handle<v8::Value> _CanPaste(const v8::Arguments& args);
  static v8::Handle<v8::Value> _Cut(const v8::Arguments& args);
  static v8::Handle<v8::Value> _Copy(const v8::Arguments& args);
  static v8::Handle<v8::Value> _Paste(const v8::Arguments& args);
  static v8::Handle<v8::Value> _CanUndo(const v8::Arguments& args);
  static v8::Handle<v8::Value> _CanRedo(const v8::Arguments& args);
  static v8::Handle<v8::Value> _Undo(const v8::Arguments& args);
  static v8::Handle<v8::Value> _Redo(const v8::Arguments& args);
  static v8::Handle<v8::Value> _GetClassInfo(const v8::Arguments& args);
  
  

  static v8::Persistent<v8::FunctionTemplate> s_ct;
};

#endif
