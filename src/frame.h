
#ifndef _wxnode_frame_h_
#define _wxnode_frame_h_

#include "wxnode.h"
#include "evtHandler.h"

class NodeWxFrame : public wxFrame, public wxNodeObject, public NodeExEvtHandlerImpl {
public:
  NodeWxFrame(wxWindow *parent,
    wxWindowID id,
    const wxString& title,
    const wxPoint& pos = wxDefaultPosition,
    const wxSize& size = wxDefaultSize,
    long style = wxDEFAULT_FRAME_STYLE,
    const wxString& name = wxFrameNameStr);
  static void Init(v8::Handle<v8::Object> target);
  virtual v8::Handle<v8::Object> self() { return m_self; }

  virtual bool Destroy();

private:
  static v8::Handle<v8::Value> _init(const v8::Arguments& args);
  static v8::Handle<v8::Value> _show(const v8::Arguments& args);
  static v8::Handle<v8::Value> _setMenuBar(const v8::Arguments& args);
  static v8::Handle<v8::Value> _close(const v8::Arguments& args);
  static v8::Handle<v8::Value> _createStatusBar(const v8::Arguments& args);
  static v8::Handle<v8::Value> _setStatusText(const v8::Arguments& args);

  static v8::Persistent<v8::FunctionTemplate> s_ct;
};


#endif
