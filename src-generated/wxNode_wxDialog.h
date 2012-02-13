
#ifndef _wxNode_wxDialog_h_
#define _wxNode_wxDialog_h_

#include "wxnode.h"
#include "wxNode_wxEvtHandler.h"
class wxNode_wxEvtHandler;
class wxNode_wxTopLevelWindow;
class wxNode_wxWindow;
class wxNode_wxPoint;
class wxNode_wxSize;
class wxNode_wxTextSizerWrapper;
class wxNode_wxSizer;
class wxNode_wxDialogLayoutAdapter;


class wxNode_wxDialog : public wxDialog, public wxNodeObject, public NodeExEvtHandlerImpl {
public:
  static void Init(v8::Handle<v8::Object> target);
  static void AddMethods(v8::Handle<v8::FunctionTemplate> target);
  virtual v8::Handle<v8::Object> self() { return m_self; }
  static bool AssignableFrom(const v8::Handle<v8::String>& className);
  static bool AssignableFrom(const char* className);
  static v8::Handle<v8::Value> New(const wxDialog* obj);
  static v8::Handle<v8::Value> New(const wxNode_wxDialog* obj);
  static v8::Handle<v8::Value> NewCopy(const wxDialog& obj);

  
  
  wxNode_wxDialog();
  
  wxNode_wxDialog(wxWindow* parent, int id, const wxString& title, wxPoint& pos, wxSize& size, long int style, const wxString& name);
  
  wxNode_wxDialog(wxWindow* parent, int id, const wxString& title, wxPoint& pos, wxSize& size, long int style);
  
  wxNode_wxDialog(wxWindow* parent, int id, const wxString& title, wxPoint& pos, wxSize& size);
  
  wxNode_wxDialog(wxWindow* parent, int id, const wxString& title, wxPoint& pos);
  
  wxNode_wxDialog(wxWindow* parent, int id, const wxString& title);
  
  

private:
  static v8::Handle<v8::Value> _init(const v8::Arguments& args);

  static v8::Handle<v8::Value> _ShowModal(const v8::Arguments& args);
  static v8::Handle<v8::Value> _EndModal(const v8::Arguments& args);
  static v8::Handle<v8::Value> _IsModal(const v8::Arguments& args);
  static v8::Handle<v8::Value> _ShowWindowModal(const v8::Arguments& args);
  static v8::Handle<v8::Value> _SendWindowModalDialogEvent(const v8::Arguments& args);
  static v8::Handle<v8::Value> _SetReturnCode(const v8::Arguments& args);
  static v8::Handle<v8::Value> _GetReturnCode(const v8::Arguments& args);
  static v8::Handle<v8::Value> _SetAffirmativeId(const v8::Arguments& args);
  static v8::Handle<v8::Value> _GetAffirmativeId(const v8::Arguments& args);
  static v8::Handle<v8::Value> _SetEscapeId(const v8::Arguments& args);
  static v8::Handle<v8::Value> _GetEscapeId(const v8::Arguments& args);
  static v8::Handle<v8::Value> _GetParentForModalDialog(const v8::Arguments& args);
  static v8::Handle<v8::Value> _CreateTextSizer(const v8::Arguments& args);
  static v8::Handle<v8::Value> _CreateButtonSizer(const v8::Arguments& args);
  static v8::Handle<v8::Value> _CreateSeparatedSizer(const v8::Arguments& args);
  static v8::Handle<v8::Value> _CreateSeparatedButtonSizer(const v8::Arguments& args);
  static v8::Handle<v8::Value> _CreateStdDialogButtonSizer(const v8::Arguments& args);
  static v8::Handle<v8::Value> _DoLayoutAdaptation(const v8::Arguments& args);
  static v8::Handle<v8::Value> _CanDoLayoutAdaptation(const v8::Arguments& args);
  static v8::Handle<v8::Value> _GetContentWindow(const v8::Arguments& args);
  static v8::Handle<v8::Value> _AddMainButtonId(const v8::Arguments& args);
  static v8::Handle<v8::Value> _GetMainButtonIds(const v8::Arguments& args);
  static v8::Handle<v8::Value> _IsMainButtonId(const v8::Arguments& args);
  static v8::Handle<v8::Value> _SetLayoutAdaptationLevel(const v8::Arguments& args);
  static v8::Handle<v8::Value> _GetLayoutAdaptationLevel(const v8::Arguments& args);
  static v8::Handle<v8::Value> _SetLayoutAdaptationMode(const v8::Arguments& args);
  static v8::Handle<v8::Value> _GetLayoutAdaptationMode(const v8::Arguments& args);
  static v8::Handle<v8::Value> _SetLayoutAdaptationDone(const v8::Arguments& args);
  static v8::Handle<v8::Value> _GetLayoutAdaptationDone(const v8::Arguments& args);
  static v8::Handle<v8::Value> _SetLayoutAdapter(const v8::Arguments& args);
  static v8::Handle<v8::Value> _GetLayoutAdapter(const v8::Arguments& args);
  static v8::Handle<v8::Value> _IsLayoutAdaptationEnabled(const v8::Arguments& args);
  static v8::Handle<v8::Value> _EnableLayoutAdaptation(const v8::Arguments& args);
  static v8::Handle<v8::Value> _GetModality(const v8::Arguments& args);
  
  

  static v8::Persistent<v8::FunctionTemplate> s_ct;
};

#endif
