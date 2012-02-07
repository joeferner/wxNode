
#ifndef _wxNode_wxListBox_h_
#define _wxNode_wxListBox_h_

#include "wxnode.h"
#include "wxNode_wxEvtHandler.h"
class wxNode_wxEvtHandler;
class wxNode_wxControlWithItems;
class wxNode_wxWindow;
class wxNode_wxPoint;
class wxNode_wxSize;
class wxNode_wxValidator;
class wxNode_wxArrayString;
class wxNode_wxArrayInt;
class wxNode_wxCommandEvent;


class wxNode_wxListBox : public wxListBox, public wxNodeObject, public NodeExEvtHandlerImpl {
public:
  static void Init(v8::Handle<v8::Object> target);
  static void AddMethods(v8::Handle<v8::FunctionTemplate> target);
  virtual v8::Handle<v8::Object> self() { return m_self; }

protected:
  
  
  wxNode_wxListBox();
  
  wxNode_wxListBox(wxNode_wxWindow* parent, int id, wxNode_wxPoint& pos, wxNode_wxSize& size, int n, const wxString* choices, long int style, wxNode_wxValidator& validator, const wxString& name);
  
  wxNode_wxListBox(wxNode_wxWindow* parent, int id, wxNode_wxPoint& pos, wxNode_wxSize& size, int n, const wxString* choices, long int style, wxNode_wxValidator& validator);
  
  wxNode_wxListBox(wxNode_wxWindow* parent, int id, wxNode_wxPoint& pos, wxNode_wxSize& size, int n, const wxString* choices, long int style);
  
  wxNode_wxListBox(wxNode_wxWindow* parent, int id, wxNode_wxPoint& pos, wxNode_wxSize& size, int n, const wxString* choices);
  
  wxNode_wxListBox(wxNode_wxWindow* parent, int id, wxNode_wxPoint& pos, wxNode_wxSize& size, int n);
  
  wxNode_wxListBox(wxNode_wxWindow* parent, int id, wxNode_wxPoint& pos, wxNode_wxSize& size);
  
  wxNode_wxListBox(wxNode_wxWindow* parent, int id, wxNode_wxPoint& pos);
  
  wxNode_wxListBox(wxNode_wxWindow* parent, int id);
  
  wxNode_wxListBox(wxNode_wxWindow* parent, int id, wxNode_wxPoint& pos, wxNode_wxSize& size, wxNode_wxArrayString& choices, long int style, wxNode_wxValidator& validator, const wxString& name);
  
  wxNode_wxListBox(wxNode_wxWindow* parent, int id, wxNode_wxPoint& pos, wxNode_wxSize& size, wxNode_wxArrayString& choices, long int style, wxNode_wxValidator& validator);
  
  wxNode_wxListBox(wxNode_wxWindow* parent, int id, wxNode_wxPoint& pos, wxNode_wxSize& size, wxNode_wxArrayString& choices, long int style);
  
  wxNode_wxListBox(wxNode_wxWindow* parent, int id, wxNode_wxPoint& pos, wxNode_wxSize& size, wxNode_wxArrayString& choices);
  
  

private:
  static v8::Handle<v8::Value> _init(const v8::Arguments& args);

  static v8::Handle<v8::Value> _InsertItems(const v8::Arguments& args);
  static v8::Handle<v8::Value> _IsSelected(const v8::Arguments& args);
  static v8::Handle<v8::Value> _SetSelection(const v8::Arguments& args);
  static v8::Handle<v8::Value> _Deselect(const v8::Arguments& args);
  static v8::Handle<v8::Value> _DeselectAll(const v8::Arguments& args);
  static v8::Handle<v8::Value> _SetStringSelection(const v8::Arguments& args);
  static v8::Handle<v8::Value> _GetSelections(const v8::Arguments& args);
  static v8::Handle<v8::Value> _SetFirstItem(const v8::Arguments& args);
  static v8::Handle<v8::Value> _EnsureVisible(const v8::Arguments& args);
  static v8::Handle<v8::Value> _AppendAndEnsureVisible(const v8::Arguments& args);
  static v8::Handle<v8::Value> _HasMultipleSelection(const v8::Arguments& args);
  static v8::Handle<v8::Value> _IsSorted(const v8::Arguments& args);
  static v8::Handle<v8::Value> _Command(const v8::Arguments& args);
  static v8::Handle<v8::Value> _HitTest(const v8::Arguments& args);
  

  static v8::Persistent<v8::FunctionTemplate> s_ct;
};

#endif
