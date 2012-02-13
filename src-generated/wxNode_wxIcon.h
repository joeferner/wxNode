
#ifndef _wxNode_wxIcon_h_
#define _wxNode_wxIcon_h_

#include "wxnode.h"
#include "wxNode_wxEvtHandler.h"
class wxNode_wxEvtHandler;
class wxNode_wxBitmap;
class wxNode_wxIcon;
class wxNode_wxIconLocation;


class wxNode_wxIcon : public wxIcon, public wxNodeObject, public NodeExEvtHandlerImpl {
public:
  static void Init(v8::Handle<v8::Object> target);
  static void AddMethods(v8::Handle<v8::FunctionTemplate> target);
  virtual v8::Handle<v8::Object> self() { return m_self; }
  static bool AssignableFrom(const v8::Handle<v8::String>& className);
  static bool AssignableFrom(const char* className);
  static v8::Handle<v8::Value> New(const wxIcon* obj);
  static v8::Handle<v8::Value> New(const wxNode_wxIcon* obj);
  static v8::Handle<v8::Value> NewCopy(const wxIcon& obj);

  
  
  wxNode_wxIcon(wxIcon& arg0);
  
  wxNode_wxIcon();
  
  wxNode_wxIcon(const char** bits);
  
  wxNode_wxIcon(const wxString& filename, wxBitmapType type, int arg2, int arg3);
  
  wxNode_wxIcon(const wxString& filename, wxBitmapType type, int arg2);
  
  wxNode_wxIcon(const wxString& filename, wxBitmapType type);
  
  wxNode_wxIcon(const wxString& filename);
  
  wxNode_wxIcon(wxIconLocation& loc);
  
  

private:
  static v8::Handle<v8::Value> _init(const v8::Arguments& args);

  static v8::Handle<v8::Value> _LoadFile(const v8::Arguments& args);
  static v8::Handle<v8::Value> _CopyFromBitmap(const v8::Arguments& args);
  static v8::Handle<v8::Value> _GetClassInfo(const v8::Arguments& args);
  static v8::Handle<v8::Value> _wxCreateObject(const v8::Arguments& args);
  
  

  static v8::Persistent<v8::FunctionTemplate> s_ct;
};

#endif
