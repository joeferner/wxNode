
#ifndef _wxNode_wxTextEntryDialog_h_
#define _wxNode_wxTextEntryDialog_h_

#include "wxnode.h"
#include "wxNode_wxEvtHandler.h"
class wxNode_wxEvtHandler;
class wxNode_wxDialog;
class wxNode_wxWindow;
class wxNode_wxPoint;
class wxNode_wxTextValidator;


class wxNode_wxTextEntryDialog : public wxTextEntryDialog, public wxNodeObject, public NodeExEvtHandlerImpl {
public:
  static void Init(v8::Handle<v8::Object> target);
  static void AddMethods(v8::Handle<v8::FunctionTemplate> target);
  virtual v8::Handle<v8::Object> self() { return m_self; }
  static bool AssignableFrom(const v8::Handle<v8::String>& className);
  static bool AssignableFrom(const char* className);
  static v8::Handle<v8::Value> New(const wxTextEntryDialog* obj);
  static v8::Handle<v8::Value> New(const wxNode_wxTextEntryDialog* obj);
  static v8::Handle<v8::Value> NewCopy(const wxTextEntryDialog& obj);

  
  
  wxNode_wxTextEntryDialog(wxWindow* parent, const wxString& message, const wxString& caption, const wxString& value, long int style, wxPoint& pos);
  
  wxNode_wxTextEntryDialog(wxWindow* parent, const wxString& message, const wxString& caption, const wxString& value, long int style);
  
  wxNode_wxTextEntryDialog(wxWindow* parent, const wxString& message, const wxString& caption, const wxString& value);
  
  wxNode_wxTextEntryDialog(wxWindow* parent, const wxString& message, const wxString& caption);
  
  wxNode_wxTextEntryDialog(wxWindow* parent, const wxString& message);
  
  

private:
  static v8::Handle<v8::Value> _init(const v8::Arguments& args);

  static v8::Handle<v8::Value> _SetValue(const v8::Arguments& args);
  static v8::Handle<v8::Value> _GetValue(const v8::Arguments& args);
  static v8::Handle<v8::Value> _SetTextValidator(const v8::Arguments& args);
  static v8::Handle<v8::Value> _GetTextValidator(const v8::Arguments& args);
  static v8::Handle<v8::Value> _OnOK(const v8::Arguments& args);
  static v8::Handle<v8::Value> _GetClassInfo(const v8::Arguments& args);
  
  

  static v8::Persistent<v8::FunctionTemplate> s_ct;
};

#endif
