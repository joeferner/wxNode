
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

protected:
  
  
  wxNode_wxPanel();
  
  wxNode_wxPanel(wxNode_wxWindow* parent, int winid, wxNode_wxPoint& pos, wxNode_wxSize& size, long int style, const wxString& name);
  
  wxNode_wxPanel(wxNode_wxWindow* parent, int winid, wxNode_wxPoint& pos, wxNode_wxSize& size, long int style);
  
  wxNode_wxPanel(wxNode_wxWindow* parent, int winid, wxNode_wxPoint& pos, wxNode_wxSize& size);
  
  wxNode_wxPanel(wxNode_wxWindow* parent, int winid, wxNode_wxPoint& pos);
  
  wxNode_wxPanel(wxNode_wxWindow* parent, int winid);
  
  wxNode_wxPanel(wxNode_wxWindow* parent);
  
  

private:
  static v8::Handle<v8::Value> _init(const v8::Arguments& args);

  static v8::Handle<v8::Value> _Create(const v8::Arguments& args);
  static v8::Handle<v8::Value> _InitDialog(const v8::Arguments& args);
  

  static v8::Persistent<v8::FunctionTemplate> s_ct;
};

#endif
