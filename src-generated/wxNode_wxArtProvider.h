
#ifndef _wxNode_wxArtProvider_h_
#define _wxNode_wxArtProvider_h_

#include "wxnode.h"
#include "wxNode_wxEvtHandler.h"
class wxNode_wxEvtHandler;
class wxNode_wxObject;
class wxNode_wxArtProvider;
class wxNode_wxSize;


class wxNode_wxArtProvider : public wxArtProvider, public wxNodeObject, public NodeExEvtHandlerImpl {
public:
  static void Init(v8::Handle<v8::Object> target);
  static void AddMethods(v8::Handle<v8::FunctionTemplate> target);
  virtual v8::Handle<v8::Object> self() { return m_self; }
  static bool AssignableFrom(const v8::Handle<v8::String>& className);
  static bool AssignableFrom(const char* className);
  static v8::Handle<v8::Value> New(const wxArtProvider* obj);
  static v8::Handle<v8::Value> New(const wxNode_wxArtProvider* obj);
  static v8::Handle<v8::Value> NewCopy(const wxArtProvider& obj);

  
  
  wxNode_wxArtProvider(wxArtProvider& arg0);
  
  wxNode_wxArtProvider();
  
  

private:
  static v8::Handle<v8::Value> _init(const v8::Arguments& args);

  static v8::Handle<v8::Value> _HasNativeProvider(const v8::Arguments& args);
  static v8::Handle<v8::Value> _Push(const v8::Arguments& args);
  static v8::Handle<v8::Value> _PushBack(const v8::Arguments& args);
  static v8::Handle<v8::Value> _Pop(const v8::Arguments& args);
  static v8::Handle<v8::Value> _Remove(const v8::Arguments& args);
  static v8::Handle<v8::Value> _Delete(const v8::Arguments& args);
  static v8::Handle<v8::Value> _GetBitmap(const v8::Arguments& args);
  static v8::Handle<v8::Value> _GetIcon(const v8::Arguments& args);
  static v8::Handle<v8::Value> _GetMessageBoxIconId(const v8::Arguments& args);
  static v8::Handle<v8::Value> _GetMessageBoxIcon(const v8::Arguments& args);
  static v8::Handle<v8::Value> _GetIconBundle(const v8::Arguments& args);
  static v8::Handle<v8::Value> _GetNativeSizeHint(const v8::Arguments& args);
  static v8::Handle<v8::Value> _GetSizeHint(const v8::Arguments& args);
  static v8::Handle<v8::Value> _GetClassInfo(const v8::Arguments& args);
  

  static v8::Persistent<v8::FunctionTemplate> s_ct;
};

#endif
