
#ifndef _wxNode_wxNotebook_h_
#define _wxNode_wxNotebook_h_

#include "wxnode.h"
#include "wxNode_wxEvtHandler.h"
class wxNode_wxEvtHandler;
class wxNode_wxBookCtrlBase;
class wxNode_wxWindow;
class wxNode_wxPoint;
class wxNode_wxSize;


class wxNode_wxNotebook : public wxNotebook, public wxNodeObject, public NodeExEvtHandlerImpl {
public:
  static void Init(v8::Handle<v8::Object> target);
  static void AddMethods(v8::Handle<v8::FunctionTemplate> target);
  virtual v8::Handle<v8::Object> self() { return m_self; }
  static bool AssignableFrom(const v8::Handle<v8::String>& className);
  static bool AssignableFrom(const char* className);
  static v8::Handle<v8::Value> New(wxNotebook* obj);
  static v8::Handle<v8::Value> New(wxNode_wxNotebook* obj);
  static v8::Handle<v8::Value> NewCopy(wxNotebook& obj);

  
  
  wxNode_wxNotebook();
  
  wxNode_wxNotebook(wxWindow* parent, int id, wxPoint& pos, wxSize& size, long int style, const wxString& name);
  
  wxNode_wxNotebook(wxWindow* parent, int id, wxPoint& pos, wxSize& size, long int style);
  
  wxNode_wxNotebook(wxWindow* parent, int id, wxPoint& pos, wxSize& size);
  
  wxNode_wxNotebook(wxWindow* parent, int id, wxPoint& pos);
  
  wxNode_wxNotebook(wxWindow* parent, int id);
  
  

private:
  static v8::Handle<v8::Value> _init(const v8::Arguments& args);

  static v8::Handle<v8::Value> _GetRowCount(const v8::Arguments& args);
  static v8::Handle<v8::Value> _SetPadding(const v8::Arguments& args);
  static v8::Handle<v8::Value> _SetTabSize(const v8::Arguments& args);
  static v8::Handle<v8::Value> _CalcSizeFromPage(const v8::Arguments& args);
  static v8::Handle<v8::Value> _GetThemeBackgroundColour(const v8::Arguments& args);
  static v8::Handle<v8::Value> _SendPageChangingEvent(const v8::Arguments& args);
  static v8::Handle<v8::Value> _SendPageChangedEvent(const v8::Arguments& args);
  static v8::Handle<v8::Value> _AcceptsFocus(const v8::Arguments& args);
  

  static v8::Persistent<v8::FunctionTemplate> s_ct;
};

#endif
