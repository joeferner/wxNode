
#ifndef _wxnode_frame_h_
#define _wxnode_frame_h_

#include "wxnode.h"
#include <vector>

class ListenerData {
public:
  ListenerData(int eventType, v8::Local<v8::Object> fn) {
    m_eventType = eventType;
    m_fn = v8::Persistent<v8::Object>::New(fn); // TODO: cleanup persistent
  }

  v8::Persistent<v8::Object> m_fn;
  int m_eventType;
};

class NodeWxFrame : public wxFrame, public wxNodeObject {
public:
  NodeWxFrame(wxWindow *parent,
    wxWindowID id,
    const wxString& title,
    const wxPoint& pos = wxDefaultPosition,
    const wxSize& size = wxDefaultSize,
    long style = wxDEFAULT_FRAME_STYLE,
    const wxString& name = wxFrameNameStr);
  static void Init(v8::Handle<v8::Object> target);
  void fireEvent(int iListener, wxEvent& event);

private:
  static v8::Handle<v8::Value> _init(const v8::Arguments& args);
  static v8::Handle<v8::Value> _show(const v8::Arguments& args);
  static v8::Handle<v8::Value> _setMenuBar(const v8::Arguments& args);
  static v8::Handle<v8::Value> _close(const v8::Arguments& args);
  static v8::Handle<v8::Value> _createStatusBar(const v8::Arguments& args);
  static v8::Handle<v8::Value> _setStatusText(const v8::Arguments& args);
  static v8::Handle<v8::Value> _EVT_MENU(const v8::Arguments& args);

  void addCommandRangeListener(int id, int lastId, int eventType, v8::Local<v8::Object> fn);
  void addCommandListener(int id, int eventType, v8::Local<v8::Object> fn);
  void connect(int id, int lastId, int eventType, int iListener);

  static v8::Persistent<v8::FunctionTemplate> s_ct;

  std::vector<ListenerData*> m_listeners;
};


#endif
