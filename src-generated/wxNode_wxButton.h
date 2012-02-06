
#ifndef _wxNode_wxButton_h_
#define _wxNode_wxButton_h_

#include "wxnode.h"
#include "wxNode_wxEvtHandler.h"
class wxNode_wxEvtHandler;
class wxNode_wxAnyButton;
class wxNode_wxWindow;
class wxNode_wxPoint;
class wxNode_wxSize;
class wxNode_wxValidator;


class wxNode_wxButton : public wxButton, public wxNodeObject, public NodeExEvtHandlerImpl {
public:
  static void Init(v8::Handle<v8::Object> target);
  static void AddMethods(v8::Handle<v8::FunctionTemplate> target);
  virtual v8::Handle<v8::Object> self() { return m_self; }

protected:
  
  
  wxNode_wxButton();
  
  wxNode_wxButton(wxNode_wxWindow* parent, int id, const wxString& label, wxNode_wxPoint& pos, wxNode_wxSize& size, long int style, wxNode_wxValidator& validator, const wxString& name);
  
  wxNode_wxButton(wxNode_wxWindow* parent, int id, const wxString& label, wxNode_wxPoint& pos, wxNode_wxSize& size, long int style, wxNode_wxValidator& validator);
  
  wxNode_wxButton(wxNode_wxWindow* parent, int id, const wxString& label, wxNode_wxPoint& pos, wxNode_wxSize& size, long int style);
  
  wxNode_wxButton(wxNode_wxWindow* parent, int id, const wxString& label, wxNode_wxPoint& pos, wxNode_wxSize& size);
  
  wxNode_wxButton(wxNode_wxWindow* parent, int id, const wxString& label, wxNode_wxPoint& pos);
  
  wxNode_wxButton(wxNode_wxWindow* parent, int id, const wxString& label);
  
  wxNode_wxButton(wxNode_wxWindow* parent, int id);
  
  

private:
  static v8::Handle<v8::Value> _init(const v8::Arguments& args);

  static v8::Handle<v8::Value> _SetAuthNeeded(const v8::Arguments& args);
  static v8::Handle<v8::Value> _GetAuthNeeded(const v8::Arguments& args);
  static v8::Handle<v8::Value> _SetDefault(const v8::Arguments& args);
  static v8::Handle<v8::Value> _GetDefaultSize(const v8::Arguments& args);
  

  static v8::Persistent<v8::FunctionTemplate> s_ct;
};

#endif
