
#ifndef _wxNode_wxTextEntry_h_
#define _wxNode_wxTextEntry_h_

#include "wxnode.h"
#include "wxNode_wxEvtHandler.h"
class wxNode_wxArrayString;
class wxNode_wxTextCompleter;
class wxNode_wxPoint;
class wxNode_wxWindow;


class wxNode_wxTextEntry : public wxTextEntry, public wxNodeObject, public NodeExEvtHandlerImpl {
public:
  static void Init(v8::Handle<v8::Object> target);
  static void AddMethods(v8::Handle<v8::FunctionTemplate> target);
  virtual v8::Handle<v8::Object> self() { return m_self; }
  static bool AssignableFrom(const v8::Handle<v8::String>& className);
  static bool AssignableFrom(const char* className);
  static v8::Handle<v8::Value> New(const wxTextEntry* obj);
  static v8::Handle<v8::Value> New(const wxNode_wxTextEntry* obj);
  static v8::Handle<v8::Value> NewCopy(const wxTextEntry& obj);

  

private:
  static v8::Handle<v8::Value> _init(const v8::Arguments& args);

  static v8::Handle<v8::Value> _SetValue(const v8::Arguments& args);
  static v8::Handle<v8::Value> _ChangeValue(const v8::Arguments& args);
  static v8::Handle<v8::Value> _WriteText(const v8::Arguments& args);
  static v8::Handle<v8::Value> _AppendText(const v8::Arguments& args);
  static v8::Handle<v8::Value> _GetValue(const v8::Arguments& args);
  static v8::Handle<v8::Value> _GetRange(const v8::Arguments& args);
  static v8::Handle<v8::Value> _IsEmpty(const v8::Arguments& args);
  static v8::Handle<v8::Value> _Replace(const v8::Arguments& args);
  static v8::Handle<v8::Value> _Remove(const v8::Arguments& args);
  static v8::Handle<v8::Value> _Clear(const v8::Arguments& args);
  static v8::Handle<v8::Value> _RemoveSelection(const v8::Arguments& args);
  static v8::Handle<v8::Value> _Copy(const v8::Arguments& args);
  static v8::Handle<v8::Value> _Cut(const v8::Arguments& args);
  static v8::Handle<v8::Value> _Paste(const v8::Arguments& args);
  static v8::Handle<v8::Value> _CanCopy(const v8::Arguments& args);
  static v8::Handle<v8::Value> _CanCut(const v8::Arguments& args);
  static v8::Handle<v8::Value> _CanPaste(const v8::Arguments& args);
  static v8::Handle<v8::Value> _Undo(const v8::Arguments& args);
  static v8::Handle<v8::Value> _Redo(const v8::Arguments& args);
  static v8::Handle<v8::Value> _CanUndo(const v8::Arguments& args);
  static v8::Handle<v8::Value> _CanRedo(const v8::Arguments& args);
  static v8::Handle<v8::Value> _SetInsertionPoint(const v8::Arguments& args);
  static v8::Handle<v8::Value> _SetInsertionPointEnd(const v8::Arguments& args);
  static v8::Handle<v8::Value> _GetInsertionPoint(const v8::Arguments& args);
  static v8::Handle<v8::Value> _GetLastPosition(const v8::Arguments& args);
  static v8::Handle<v8::Value> _SetSelection(const v8::Arguments& args);
  static v8::Handle<v8::Value> _SelectAll(const v8::Arguments& args);
  static v8::Handle<v8::Value> _GetSelection(const v8::Arguments& args);
  static v8::Handle<v8::Value> _HasSelection(const v8::Arguments& args);
  static v8::Handle<v8::Value> _GetStringSelection(const v8::Arguments& args);
  static v8::Handle<v8::Value> _AutoComplete(const v8::Arguments& args);
  static v8::Handle<v8::Value> _AutoCompleteFileNames(const v8::Arguments& args);
  static v8::Handle<v8::Value> _AutoCompleteDirectories(const v8::Arguments& args);
  static v8::Handle<v8::Value> _IsEditable(const v8::Arguments& args);
  static v8::Handle<v8::Value> _SetEditable(const v8::Arguments& args);
  static v8::Handle<v8::Value> _SetMaxLength(const v8::Arguments& args);
  static v8::Handle<v8::Value> _SetHint(const v8::Arguments& args);
  static v8::Handle<v8::Value> _GetHint(const v8::Arguments& args);
  static v8::Handle<v8::Value> _SetMargins(const v8::Arguments& args);
  static v8::Handle<v8::Value> _GetMargins(const v8::Arguments& args);
  static v8::Handle<v8::Value> _SendTextUpdatedEvent(const v8::Arguments& args);
  static v8::Handle<v8::Value> _SendTextUpdatedEventIfAllowed(const v8::Arguments& args);
  static v8::Handle<v8::Value> _ForwardEnableTextChangedEvents(const v8::Arguments& args);
  
  

  static v8::Persistent<v8::FunctionTemplate> s_ct;
};

#endif
