
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
  static bool AssignableFrom(const v8::Handle<v8::String>& className);
  static bool AssignableFrom(const char* className);
  static v8::Handle<v8::Value> New(wxButton* obj);
  static v8::Handle<v8::Value> New(wxNode_wxButton* obj);
  static v8::Handle<v8::Value> NewCopy(wxButton& obj);

  
  
  wxNode_wxButton();
  
  wxNode_wxButton(wxWindow* parent, int id, const wxString& label, wxPoint& pos, wxSize& size, long int style, wxValidator& validator, const wxString& name);
  
  wxNode_wxButton(wxWindow* parent, int id, const wxString& label, wxPoint& pos, wxSize& size, long int style, wxValidator& validator);
  
  wxNode_wxButton(wxWindow* parent, int id, const wxString& label, wxPoint& pos, wxSize& size, long int style);
  
  wxNode_wxButton(wxWindow* parent, int id, const wxString& label, wxPoint& pos, wxSize& size);
  
  wxNode_wxButton(wxWindow* parent, int id, const wxString& label, wxPoint& pos);
  
  wxNode_wxButton(wxWindow* parent, int id, const wxString& label);
  
  wxNode_wxButton(wxWindow* parent, int id);
  
  

private:
  static v8::Handle<v8::Value> _init(const v8::Arguments& args);

  static v8::Handle<v8::Value> _SetAuthNeeded(const v8::Arguments& args);
  static v8::Handle<v8::Value> _GetAuthNeeded(const v8::Arguments& args);
  static v8::Handle<v8::Value> _SetDefault(const v8::Arguments& args);
  static v8::Handle<v8::Value> _GetDefaultSize(const v8::Arguments& args);
  

  static v8::Persistent<v8::FunctionTemplate> s_ct;
};

#endif
