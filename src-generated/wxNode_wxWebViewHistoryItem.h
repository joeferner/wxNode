
#ifndef _wxNode_wxWebViewHistoryItem_h_
#define _wxNode_wxWebViewHistoryItem_h_

#include "wxnode.h"
#include "wxNode_wxEvtHandler.h"
class wxNode_wxWebViewHistoryItem;


class wxNode_wxWebViewHistoryItem : public wxWebViewHistoryItem, public wxNodeObject, public NodeExEvtHandlerImpl {
public:
  static void Init(v8::Handle<v8::Object> target);
  static void AddMethods(v8::Handle<v8::FunctionTemplate> target);
  virtual v8::Handle<v8::Object> self() { return m_self; }
  static bool AssignableFrom(const v8::Handle<v8::String>& className);
  static bool AssignableFrom(const char* className);
  static v8::Handle<v8::Value> New(const wxWebViewHistoryItem* obj);
  static v8::Handle<v8::Value> New(const wxNode_wxWebViewHistoryItem* obj);
  static v8::Handle<v8::Value> NewCopy(const wxWebViewHistoryItem& obj);

  
  
  wxNode_wxWebViewHistoryItem(wxWebViewHistoryItem& arg0);
  
  wxNode_wxWebViewHistoryItem(const wxString& url, const wxString& title);
  
  

private:
  static v8::Handle<v8::Value> _init(const v8::Arguments& args);

  static v8::Handle<v8::Value> _GetUrl(const v8::Arguments& args);
  static v8::Handle<v8::Value> _GetTitle(const v8::Arguments& args);
  
  

  static v8::Persistent<v8::FunctionTemplate> s_ct;
};

#endif
