
#ifndef _wxNode_wxLogWindow_h_
#define _wxNode_wxLogWindow_h_

#include "wxnode.h"
#include "wxNode_wxEvtHandler.h"
class wxNode_wxEvtHandler;
class wxNode_wxLogInterposer;
class wxNode_wxWindow;


class wxNode_wxLogWindow : public wxLogWindow, public wxNodeObject, public NodeExEvtHandlerImpl {
public:
  static void Init(v8::Handle<v8::Object> target);
  static void AddMethods(v8::Handle<v8::FunctionTemplate> target);
  virtual v8::Handle<v8::Object> self() { return m_self; }
  static bool AssignableFrom(const v8::Handle<v8::String>& className);
  static bool AssignableFrom(const char* className);
  static v8::Handle<v8::Value> New(const wxLogWindow* obj);
  static v8::Handle<v8::Value> New(const wxNode_wxLogWindow* obj);
  static v8::Handle<v8::Value> NewCopy(const wxLogWindow& obj);

  
  
  wxNode_wxLogWindow(wxWindow* pParent, const wxString& szTitle, bool bShow, bool bPassToOld);
  
  wxNode_wxLogWindow(wxWindow* pParent, const wxString& szTitle, bool bShow);
  
  wxNode_wxLogWindow(wxWindow* pParent, const wxString& szTitle);
  
  

private:
  static v8::Handle<v8::Value> _init(const v8::Arguments& args);

  static v8::Handle<v8::Value> _Show(const v8::Arguments& args);
  static v8::Handle<v8::Value> _GetFrame(const v8::Arguments& args);
  static v8::Handle<v8::Value> _OnFrameCreate(const v8::Arguments& args);
  static v8::Handle<v8::Value> _OnFrameClose(const v8::Arguments& args);
  static v8::Handle<v8::Value> _OnFrameDelete(const v8::Arguments& args);
  
  

  static v8::Persistent<v8::FunctionTemplate> s_ct;
};

#endif
