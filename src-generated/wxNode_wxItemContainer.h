
#ifndef _wxNode_wxItemContainer_h_
#define _wxNode_wxItemContainer_h_

#include "wxnode.h"
#include "wxNode_wxEvtHandler.h"
class wxNode_wxEvtHandler;
class wxNode_wxItemContainerImmutable;
class wxNode_wxClientData;
class wxNode_wxArrayString;


class wxNode_wxItemContainer : public wxItemContainer, public wxNodeObject, public NodeExEvtHandlerImpl {
public:
  static void Init(v8::Handle<v8::Object> target);
  static void AddMethods(v8::Handle<v8::FunctionTemplate> target);
  virtual v8::Handle<v8::Object> self() { return m_self; }
  static bool AssignableFrom(const v8::Handle<v8::String>& className);
  static bool AssignableFrom(const char* className);
  static v8::Handle<v8::Value> New(const wxItemContainer* obj);
  static v8::Handle<v8::Value> New(const wxNode_wxItemContainer* obj);
  static v8::Handle<v8::Value> NewCopy(const wxItemContainer& obj);

  

private:
  static v8::Handle<v8::Value> _init(const v8::Arguments& args);

  static v8::Handle<v8::Value> _Append(const v8::Arguments& args);
  static v8::Handle<v8::Value> _AppendString(const v8::Arguments& args);
  static v8::Handle<v8::Value> _Insert(const v8::Arguments& args);
  static v8::Handle<v8::Value> _Set(const v8::Arguments& args);
  static v8::Handle<v8::Value> _Clear(const v8::Arguments& args);
  static v8::Handle<v8::Value> _Delete(const v8::Arguments& args);
  static v8::Handle<v8::Value> _IsSorted(const v8::Arguments& args);
  static v8::Handle<v8::Value> _SetClientData(const v8::Arguments& args);
  static v8::Handle<v8::Value> _GetClientData(const v8::Arguments& args);
  static v8::Handle<v8::Value> _SetClientObject(const v8::Arguments& args);
  static v8::Handle<v8::Value> _GetClientObject(const v8::Arguments& args);
  static v8::Handle<v8::Value> _DetachClientObject(const v8::Arguments& args);
  static v8::Handle<v8::Value> _GetClientDataType(const v8::Arguments& args);
  static v8::Handle<v8::Value> _HasClientData(const v8::Arguments& args);
  static v8::Handle<v8::Value> _HasClientObjectData(const v8::Arguments& args);
  static v8::Handle<v8::Value> _HasClientUntypedData(const v8::Arguments& args);
  

  static v8::Persistent<v8::FunctionTemplate> s_ct;
};

#endif
