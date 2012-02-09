
#ifndef _wxNode_wxAnyButton_h_
#define _wxNode_wxAnyButton_h_

#include "wxnode.h"
#include "wxNode_wxEvtHandler.h"
class wxNode_wxEvtHandler;
class wxNode_wxControl;
class wxNode_wxBitmap;
class wxNode_wxSize;


class wxNode_wxAnyButton : public wxAnyButton, public wxNodeObject, public NodeExEvtHandlerImpl {
public:
  static void Init(v8::Handle<v8::Object> target);
  static void AddMethods(v8::Handle<v8::FunctionTemplate> target);
  virtual v8::Handle<v8::Object> self() { return m_self; }
  static bool AssignableFrom(const v8::Handle<v8::String>& className);
  static bool AssignableFrom(const char* className);
  static v8::Handle<v8::Value> New(const wxAnyButton* obj);
  static v8::Handle<v8::Value> New(const wxNode_wxAnyButton* obj);
  static v8::Handle<v8::Value> NewCopy(const wxAnyButton& obj);

  
  
  wxNode_wxAnyButton();
  
  

private:
  static v8::Handle<v8::Value> _init(const v8::Arguments& args);

  static v8::Handle<v8::Value> _SetBitmap(const v8::Arguments& args);
  static v8::Handle<v8::Value> _GetBitmap(const v8::Arguments& args);
  static v8::Handle<v8::Value> _SetBitmapLabel(const v8::Arguments& args);
  static v8::Handle<v8::Value> _SetBitmapPressed(const v8::Arguments& args);
  static v8::Handle<v8::Value> _SetBitmapDisabled(const v8::Arguments& args);
  static v8::Handle<v8::Value> _SetBitmapCurrent(const v8::Arguments& args);
  static v8::Handle<v8::Value> _SetBitmapFocus(const v8::Arguments& args);
  static v8::Handle<v8::Value> _GetBitmapLabel(const v8::Arguments& args);
  static v8::Handle<v8::Value> _GetBitmapPressed(const v8::Arguments& args);
  static v8::Handle<v8::Value> _GetBitmapDisabled(const v8::Arguments& args);
  static v8::Handle<v8::Value> _GetBitmapCurrent(const v8::Arguments& args);
  static v8::Handle<v8::Value> _GetBitmapFocus(const v8::Arguments& args);
  static v8::Handle<v8::Value> _SetBitmapMargins(const v8::Arguments& args);
  static v8::Handle<v8::Value> _GetBitmapMargins(const v8::Arguments& args);
  static v8::Handle<v8::Value> _SetBitmapPosition(const v8::Arguments& args);
  static v8::Handle<v8::Value> _ShouldInheritColours(const v8::Arguments& args);
  static v8::Handle<v8::Value> _SetImageLabel(const v8::Arguments& args);
  static v8::Handle<v8::Value> _SetImageMargins(const v8::Arguments& args);
  static v8::Handle<v8::Value> _GetBitmapSelected(const v8::Arguments& args);
  static v8::Handle<v8::Value> _GetBitmapHover(const v8::Arguments& args);
  static v8::Handle<v8::Value> _SetBitmapSelected(const v8::Arguments& args);
  static v8::Handle<v8::Value> _SetBitmapHover(const v8::Arguments& args);
  static v8::Handle<v8::Value> _DontShowLabel(const v8::Arguments& args);
  static v8::Handle<v8::Value> _ShowsLabel(const v8::Arguments& args);
  

  static v8::Persistent<v8::FunctionTemplate> s_ct;
};

#endif
