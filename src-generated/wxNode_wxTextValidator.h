
#ifndef _wxNode_wxTextValidator_h_
#define _wxNode_wxTextValidator_h_

#include "wxnode.h"
#include "wxNode_wxEvtHandler.h"
class wxNode_wxEvtHandler;
class wxNode_wxValidator;
class wxNode_wxTextValidator;
class wxNode_wxWindow;
class wxNode_wxArrayString;


class wxNode_wxTextValidator : public wxTextValidator, public wxNodeObject, public NodeExEvtHandlerImpl {
public:
  static void Init(v8::Handle<v8::Object> target);
  static void AddMethods(v8::Handle<v8::FunctionTemplate> target);
  virtual v8::Handle<v8::Object> self() { return m_self; }
  static bool AssignableFrom(const v8::Handle<v8::String>& className);
  static bool AssignableFrom(const char* className);
  static v8::Handle<v8::Value> New(const wxTextValidator* obj);
  static v8::Handle<v8::Value> New(const wxNode_wxTextValidator* obj);
  static v8::Handle<v8::Value> NewCopy(const wxTextValidator& obj);

  
  
  wxNode_wxTextValidator(long int style,  wxString* val);
  
  wxNode_wxTextValidator(long int style);
  
  wxNode_wxTextValidator();
  
  wxNode_wxTextValidator(wxTextValidator& val);
  
  

private:
  static v8::Handle<v8::Value> _init(const v8::Arguments& args);

  static v8::Handle<v8::Value> _Clone(const v8::Arguments& args);
  static v8::Handle<v8::Value> _Copy(const v8::Arguments& args);
  static v8::Handle<v8::Value> _Validate(const v8::Arguments& args);
  static v8::Handle<v8::Value> _TransferToWindow(const v8::Arguments& args);
  static v8::Handle<v8::Value> _TransferFromWindow(const v8::Arguments& args);
  static v8::Handle<v8::Value> _OnChar(const v8::Arguments& args);
  static v8::Handle<v8::Value> _GetStyle(const v8::Arguments& args);
  static v8::Handle<v8::Value> _SetStyle(const v8::Arguments& args);
  static v8::Handle<v8::Value> _GetTextEntry(const v8::Arguments& args);
  static v8::Handle<v8::Value> _SetCharIncludes(const v8::Arguments& args);
  static v8::Handle<v8::Value> _SetIncludes(const v8::Arguments& args);
  static v8::Handle<v8::Value> _GetIncludes(const v8::Arguments& args);
  static v8::Handle<v8::Value> _SetCharExcludes(const v8::Arguments& args);
  static v8::Handle<v8::Value> _SetExcludes(const v8::Arguments& args);
  static v8::Handle<v8::Value> _GetExcludes(const v8::Arguments& args);
  static v8::Handle<v8::Value> _HasFlag(const v8::Arguments& args);
  static v8::Handle<v8::Value> _GetClassInfo(const v8::Arguments& args);
  static v8::Handle<v8::Value> _wxCreateObject(const v8::Arguments& args);
  
  

  static v8::Persistent<v8::FunctionTemplate> s_ct;
};

#endif
