
#ifndef _wxNode_wxSizerFlags_h_
#define _wxNode_wxSizerFlags_h_

#include "wxnode.h"
#include "wxNode_wxEvtHandler.h"
class wxNode_wxSizerFlags;


class wxNode_wxSizerFlags : public wxSizerFlags, public wxNodeObject, public NodeExEvtHandlerImpl {
public:
  static void Init(v8::Handle<v8::Object> target);
  static void AddMethods(v8::Handle<v8::FunctionTemplate> target);
  virtual v8::Handle<v8::Object> self() { return m_self; }

protected:
  
  
  wxNode_wxSizerFlags(wxNode_wxSizerFlags& arg0);
  
  wxNode_wxSizerFlags(int proportion);
  
  wxNode_wxSizerFlags();
  
  

private:
  static v8::Handle<v8::Value> _init(const v8::Arguments& args);

  static v8::Handle<v8::Value> _Proportion(const v8::Arguments& args);
  static v8::Handle<v8::Value> _Expand(const v8::Arguments& args);
  static v8::Handle<v8::Value> _Align(const v8::Arguments& args);
  static v8::Handle<v8::Value> _Centre(const v8::Arguments& args);
  static v8::Handle<v8::Value> _Center(const v8::Arguments& args);
  static v8::Handle<v8::Value> _Top(const v8::Arguments& args);
  static v8::Handle<v8::Value> _Left(const v8::Arguments& args);
  static v8::Handle<v8::Value> _Right(const v8::Arguments& args);
  static v8::Handle<v8::Value> _Bottom(const v8::Arguments& args);
  static v8::Handle<v8::Value> _GetDefaultBorder(const v8::Arguments& args);
  static v8::Handle<v8::Value> _Border(const v8::Arguments& args);
  static v8::Handle<v8::Value> _DoubleBorder(const v8::Arguments& args);
  static v8::Handle<v8::Value> _TripleBorder(const v8::Arguments& args);
  static v8::Handle<v8::Value> _HorzBorder(const v8::Arguments& args);
  static v8::Handle<v8::Value> _DoubleHorzBorder(const v8::Arguments& args);
  static v8::Handle<v8::Value> _Shaped(const v8::Arguments& args);
  static v8::Handle<v8::Value> _FixedMinSize(const v8::Arguments& args);
  static v8::Handle<v8::Value> _ReserveSpaceEvenIfHidden(const v8::Arguments& args);
  static v8::Handle<v8::Value> _GetProportion(const v8::Arguments& args);
  static v8::Handle<v8::Value> _GetFlags(const v8::Arguments& args);
  static v8::Handle<v8::Value> _GetBorderInPixels(const v8::Arguments& args);
  

  static v8::Persistent<v8::FunctionTemplate> s_ct;
};

#endif
