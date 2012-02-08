
#ifndef _wxNode_wxTextCtrl_h_
#define _wxNode_wxTextCtrl_h_

#include "wxnode.h"
#include "wxNode_wxEvtHandler.h"
class wxNode_wxEvtHandler;
class wxNode_wxControl;
class wxNode_wxWindow;
class wxNode_wxPoint;
class wxNode_wxSize;
class wxNode_wxValidator;
class wxNode_wxKeyEvent;
class wxNode_wxUpdateUIEvent;
class wxNode_wxTextAttr;


class wxNode_wxTextCtrl : public wxTextCtrl, public wxNodeObject, public NodeExEvtHandlerImpl {
public:
  static void Init(v8::Handle<v8::Object> target);
  static void AddMethods(v8::Handle<v8::FunctionTemplate> target);
  virtual v8::Handle<v8::Object> self() { return m_self; }
  static bool AssignableFrom(const v8::Handle<v8::String>& className);
  static bool AssignableFrom(const char* className);
  static v8::Handle<v8::Value> New(wxTextCtrl* obj);
  static v8::Handle<v8::Value> New(wxNode_wxTextCtrl* obj);
  static v8::Handle<v8::Value> NewCopy(wxTextCtrl& obj);

  
  
  wxNode_wxTextCtrl();
  
  wxNode_wxTextCtrl(wxWindow* parent, int id, const wxString& value, wxPoint& pos, wxSize& size, long int style, wxValidator& validator, const wxString& name);
  
  wxNode_wxTextCtrl(wxWindow* parent, int id, const wxString& value, wxPoint& pos, wxSize& size, long int style, wxValidator& validator);
  
  wxNode_wxTextCtrl(wxWindow* parent, int id, const wxString& value, wxPoint& pos, wxSize& size, long int style);
  
  wxNode_wxTextCtrl(wxWindow* parent, int id, const wxString& value, wxPoint& pos, wxSize& size);
  
  wxNode_wxTextCtrl(wxWindow* parent, int id, const wxString& value, wxPoint& pos);
  
  wxNode_wxTextCtrl(wxWindow* parent, int id, const wxString& value);
  
  wxNode_wxTextCtrl(wxWindow* parent, int id);
  
  

private:
  static v8::Handle<v8::Value> _init(const v8::Arguments& args);

  static v8::Handle<v8::Value> _IsSingleLine(const v8::Arguments& args);
  static v8::Handle<v8::Value> _IsMultiLine(const v8::Arguments& args);
  static v8::Handle<v8::Value> _EmulateKeyPress(const v8::Arguments& args);
  static v8::Handle<v8::Value> _DoUpdateWindowUI(const v8::Arguments& args);
  static v8::Handle<v8::Value> _ShouldInheritColours(const v8::Arguments& args);
  static v8::Handle<v8::Value> _HitTest(const v8::Arguments& args);
  static v8::Handle<v8::Value> _SetStyle(const v8::Arguments& args);
  static v8::Handle<v8::Value> _GetStyle(const v8::Arguments& args);
  static v8::Handle<v8::Value> _SetDefaultStyle(const v8::Arguments& args);
  static v8::Handle<v8::Value> _GetValue(const v8::Arguments& args);
  static v8::Handle<v8::Value> _SetValue(const v8::Arguments& args);
  static v8::Handle<v8::Value> _GetDefaultAttributes(const v8::Arguments& args);
  static v8::Handle<v8::Value> _GetClassDefaultAttributes(const v8::Arguments& args);
  static v8::Handle<v8::Value> _GetClassInfo(const v8::Arguments& args);
  

  static v8::Persistent<v8::FunctionTemplate> s_ct;
};

#endif
