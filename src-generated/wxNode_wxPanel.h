
#ifndef _wxNode_wxPanel_h_
#define _wxNode_wxPanel_h_

#include "wxnode.h"
#include "wxNode_wxEvtHandler.h"
class wxNode_wxEvtHandler;
class wxNode_wxNavigationEnabled;
class wxNode_wxWindow;
class wxNode_wxPoint;
class wxNode_wxSize;


class wxNode_wxPanel : public wxPanel, public wxNodeObject, public NodeExEvtHandlerImpl {
public:
  static void Init(v8::Handle<v8::Object> target);
  static void AddMethods(v8::Handle<v8::FunctionTemplate> target);
  virtual v8::Handle<v8::Object> self() { return m_self; }
  static bool AssignableFrom(const v8::Handle<v8::String>& className);
  static bool AssignableFrom(const char* className);
  static v8::Handle<v8::Value> New(const wxPanel* obj);
  static v8::Handle<v8::Value> New(const wxNode_wxPanel* obj);
  static v8::Handle<v8::Value> NewCopy(const wxPanel& obj);

  
  
  wxNode_wxPanel();
  
  wxNode_wxPanel(wxWindow* parent, int winid, wxPoint& pos, wxSize& size, long int style, const wxString& name);
  
  wxNode_wxPanel(wxWindow* parent, int winid, wxPoint& pos, wxSize& size, long int style);
  
  wxNode_wxPanel(wxWindow* parent, int winid, wxPoint& pos, wxSize& size);
  
  wxNode_wxPanel(wxWindow* parent, int winid, wxPoint& pos);
  
  wxNode_wxPanel(wxWindow* parent, int winid);
  
  wxNode_wxPanel(wxWindow* parent);
  
  

private:
  static v8::Handle<v8::Value> _init(const v8::Arguments& args);

  static v8::Handle<v8::Value> _Create(const v8::Arguments& args);
  static v8::Handle<v8::Value> _InitDialog(const v8::Arguments& args);
  

  static v8::Persistent<v8::FunctionTemplate> s_ct;
};

#endif
