
#ifndef _wxNode_wxStaticText_h_
#define _wxNode_wxStaticText_h_

#include "wxnode.h"
#include "wxNode_wxEvtHandler.h"
class wxNode_wxEvtHandler;
class wxNode_wxControl;
class wxNode_wxWindow;
class wxNode_wxPoint;
class wxNode_wxSize;


class wxNode_wxStaticText : public wxStaticText, public wxNodeObject, public NodeExEvtHandlerImpl {
public:
  static void Init(v8::Handle<v8::Object> target);
  static void AddMethods(v8::Handle<v8::FunctionTemplate> target);
  virtual v8::Handle<v8::Object> self() { return m_self; }

protected:
  
  
  wxNode_wxStaticText();
  
  wxNode_wxStaticText(wxNode_wxWindow* parent, int id, const wxString& label, wxNode_wxPoint& pos, wxNode_wxSize& size, long int style, const wxString& name);
  
  wxNode_wxStaticText(wxNode_wxWindow* parent, int id, const wxString& label, wxNode_wxPoint& pos, wxNode_wxSize& size, long int style);
  
  wxNode_wxStaticText(wxNode_wxWindow* parent, int id, const wxString& label, wxNode_wxPoint& pos, wxNode_wxSize& size);
  
  wxNode_wxStaticText(wxNode_wxWindow* parent, int id, const wxString& label, wxNode_wxPoint& pos);
  
  wxNode_wxStaticText(wxNode_wxWindow* parent, int id, const wxString& label);
  
  

private:
  static v8::Handle<v8::Value> _init(const v8::Arguments& args);

  static v8::Handle<v8::Value> _Wrap(const v8::Arguments& args);
  static v8::Handle<v8::Value> _AcceptsFocus(const v8::Arguments& args);
  static v8::Handle<v8::Value> _HasTransparentBackground(const v8::Arguments& args);
  static v8::Handle<v8::Value> _IsEllipsized(const v8::Arguments& args);
  

  static v8::Persistent<v8::FunctionTemplate> s_ct;
};

#endif