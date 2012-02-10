
#ifndef _wxNode_wxBitmap_h_
#define _wxNode_wxBitmap_h_

#include "wxnode.h"
#include "wxNode_wxEvtHandler.h"
class wxNode_wxEvtHandler;
class wxNode_wxGDIObject;
class wxNode_wxBitmap;
class wxNode_wxSize;
class wxNode_wxImage;
class wxNode_wxMask;
class wxNode_wxRect;
class wxNode_wxPalette;
class wxNode_wxIcon;
class wxNode_wxBitmapHandler;
class wxNode_wxColour;


class wxNode_wxBitmap : public wxBitmap, public wxNodeObject, public NodeExEvtHandlerImpl {
public:
  static void Init(v8::Handle<v8::Object> target);
  static void AddMethods(v8::Handle<v8::FunctionTemplate> target);
  virtual v8::Handle<v8::Object> self() { return m_self; }
  static bool AssignableFrom(const v8::Handle<v8::String>& className);
  static bool AssignableFrom(const char* className);
  static v8::Handle<v8::Value> New(const wxBitmap* obj);
  static v8::Handle<v8::Value> New(const wxNode_wxBitmap* obj);
  static v8::Handle<v8::Value> NewCopy(const wxBitmap& obj);

  
  
  wxNode_wxBitmap(wxBitmap& arg0);
  
  wxNode_wxBitmap();
  
  wxNode_wxBitmap(int width, int height, int depth);
  
  wxNode_wxBitmap(int width, int height);
  
  wxNode_wxBitmap(wxSize& sz, int depth);
  
  wxNode_wxBitmap(wxSize& sz);
  
  wxNode_wxBitmap(const char* bits, int width, int height, int depth);
  
  wxNode_wxBitmap(const char* bits, int width, int height);
  
  wxNode_wxBitmap(const char** bits);
  
  wxNode_wxBitmap(const wxString& filename, wxBitmapType type);
  
  wxNode_wxBitmap(const wxString& filename);
  
  wxNode_wxBitmap(wxImage& image, int depth);
  
  wxNode_wxBitmap(wxImage& image);
  
  

private:
  static v8::Handle<v8::Value> _init(const v8::Arguments& args);

  static v8::Handle<v8::Value> _Create(const v8::Arguments& args);
  static v8::Handle<v8::Value> _GetHeight(const v8::Arguments& args);
  static v8::Handle<v8::Value> _GetWidth(const v8::Arguments& args);
  static v8::Handle<v8::Value> _GetDepth(const v8::Arguments& args);
  static v8::Handle<v8::Value> _GetSize(const v8::Arguments& args);
  static v8::Handle<v8::Value> _ConvertToImage(const v8::Arguments& args);
  static v8::Handle<v8::Value> _ConvertToDisabled(const v8::Arguments& args);
  static v8::Handle<v8::Value> _GetMask(const v8::Arguments& args);
  static v8::Handle<v8::Value> _SetMask(const v8::Arguments& args);
  static v8::Handle<v8::Value> _GetSubBitmap(const v8::Arguments& args);
  static v8::Handle<v8::Value> _SaveFile(const v8::Arguments& args);
  static v8::Handle<v8::Value> _LoadFile(const v8::Arguments& args);
  static v8::Handle<v8::Value> _GetPalette(const v8::Arguments& args);
  static v8::Handle<v8::Value> _SetPalette(const v8::Arguments& args);
  static v8::Handle<v8::Value> _CopyFromIcon(const v8::Arguments& args);
  static v8::Handle<v8::Value> _SetHeight(const v8::Arguments& args);
  static v8::Handle<v8::Value> _SetWidth(const v8::Arguments& args);
  static v8::Handle<v8::Value> _SetDepth(const v8::Arguments& args);
  static v8::Handle<v8::Value> _GetHandlers(const v8::Arguments& args);
  static v8::Handle<v8::Value> _AddHandler(const v8::Arguments& args);
  static v8::Handle<v8::Value> _InsertHandler(const v8::Arguments& args);
  static v8::Handle<v8::Value> _RemoveHandler(const v8::Arguments& args);
  static v8::Handle<v8::Value> _FindHandler(const v8::Arguments& args);
  static v8::Handle<v8::Value> _CleanUpHandlers(const v8::Arguments& args);
  static v8::Handle<v8::Value> _QuantizeColour(const v8::Arguments& args);
  static v8::Handle<v8::Value> _GetClassInfo(const v8::Arguments& args);
  

  static v8::Persistent<v8::FunctionTemplate> s_ct;
};

#endif
