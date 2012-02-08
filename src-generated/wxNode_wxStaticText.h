
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
  static bool AssignableFrom(const v8::Handle<v8::String>& className);
  static bool AssignableFrom(const char* className);
  static v8::Handle<v8::Value> New(wxStaticText* obj);
  static v8::Handle<v8::Value> New(wxNode_wxStaticText* obj);
  static v8::Handle<v8::Value> NewCopy(wxStaticText& obj);

  
  
  wxNode_wxStaticText();
  
  wxNode_wxStaticText(wxWindow* parent, int id, const wxString& label, wxPoint& pos, wxSize& size, long int style, const wxString& name);
  
  wxNode_wxStaticText(wxWindow* parent, int id, const wxString& label, wxPoint& pos, wxSize& size, long int style);
  
  wxNode_wxStaticText(wxWindow* parent, int id, const wxString& label, wxPoint& pos, wxSize& size);
  
  wxNode_wxStaticText(wxWindow* parent, int id, const wxString& label, wxPoint& pos);
  
  wxNode_wxStaticText(wxWindow* parent, int id, const wxString& label);
  
  

private:
  static v8::Handle<v8::Value> _init(const v8::Arguments& args);

  static v8::Handle<v8::Value> _Wrap(const v8::Arguments& args);
  static v8::Handle<v8::Value> _AcceptsFocus(const v8::Arguments& args);
  static v8::Handle<v8::Value> _HasTransparentBackground(const v8::Arguments& args);
  static v8::Handle<v8::Value> _IsEllipsized(const v8::Arguments& args);
  

  static v8::Persistent<v8::FunctionTemplate> s_ct;
};

#endif
