
#ifndef _wxNode_wxCursor_h_
#define _wxNode_wxCursor_h_

#include "wxnode.h"
#include "wxNode_wxEvtHandler.h"
class wxNode_wxEvtHandler;
class wxNode_wxGDIObject;
class wxNode_wxCursor;
class wxNode_wxImage;
class wxNode_wxColour;


class wxNode_wxCursor : public wxCursor, public wxNodeObject, public NodeExEvtHandlerImpl {
public:
  static void Init(v8::Handle<v8::Object> target);
  static void AddMethods(v8::Handle<v8::FunctionTemplate> target);
  virtual v8::Handle<v8::Object> self() { return m_self; }
  static bool AssignableFrom(const v8::Handle<v8::String>& className);
  static bool AssignableFrom(const char* className);
  static v8::Handle<v8::Value> New(const wxCursor* obj);
  static v8::Handle<v8::Value> New(const wxNode_wxCursor* obj);
  static v8::Handle<v8::Value> NewCopy(const wxCursor& obj);

  
  
  wxNode_wxCursor(wxCursor& arg0);
  
  wxNode_wxCursor();
  
  wxNode_wxCursor(wxStockCursor id);
  
  wxNode_wxCursor(int id);
  
  wxNode_wxCursor(wxImage& image);
  
  wxNode_wxCursor(const wxString& name, wxBitmapType type, int hotSpotX, int hotSpotY);
  
  wxNode_wxCursor(const wxString& name, wxBitmapType type, int hotSpotX);
  
  wxNode_wxCursor(const wxString& name, wxBitmapType type);
  
  wxNode_wxCursor(const wxString& name);
  
  wxNode_wxCursor(const char* bits, int width, int height, int hotSpotX, int hotSpotY, const char* maskBits, wxColour* fg, wxColour* bg);
  
  wxNode_wxCursor(const char* bits, int width, int height, int hotSpotX, int hotSpotY, const char* maskBits, wxColour* fg);
  
  wxNode_wxCursor(const char* bits, int width, int height, int hotSpotX, int hotSpotY, const char* maskBits);
  
  wxNode_wxCursor(const char* bits, int width, int height, int hotSpotX, int hotSpotY);
  
  wxNode_wxCursor(const char* bits, int width, int height, int hotSpotX);
  
  wxNode_wxCursor(const char* bits, int width, int height);
  
  

private:
  static v8::Handle<v8::Value> _init(const v8::Arguments& args);

  static v8::Handle<v8::Value> _GetCursor(const v8::Arguments& args);
  static v8::Handle<v8::Value> _GetClassInfo(const v8::Arguments& args);
  static v8::Handle<v8::Value> _wxCreateObject(const v8::Arguments& args);
  
  

  static v8::Persistent<v8::FunctionTemplate> s_ct;
};

#endif
