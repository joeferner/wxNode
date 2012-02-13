
#ifndef _NodeEvtHandler_h_
#define _NodeEvtHandler_h_

#include "wxnode.h"
#include <vector>

class wxNode_wxEvtHandler;

typedef v8::Handle<v8::Value>(fnNewEvent)(wxEvent& event);

class ListenerData {
public:
  ListenerData(int eventType, v8::Local<v8::Object> fn, fnNewEvent* NewEvent);

  v8::Persistent<v8::Object> m_fn;
  int m_eventType;
	fnNewEvent* NewEvent;
};

class NodeExEvtHandlerImpl {
public:
  friend class EventProxy;
  friend class wxNode_wxEvtHandler;

  NodeExEvtHandlerImpl();
  virtual ~NodeExEvtHandlerImpl();

protected:
  virtual void fireEvent(uint32_t iListener, wxEvent& event);
  virtual void addEventListener(wxEvtHandler* evtHandler, int eventType, v8::Local<v8::Object> fn, fnNewEvent* NewEvent);
  virtual void addCommandRangeListener(wxEvtHandler* evtHandler, int id, int lastId, int eventType, v8::Local<v8::Object> fn, fnNewEvent* NewEvent);
  virtual void addCommandListener(wxEvtHandler* evtHandler, int id, int eventType, v8::Local<v8::Object> fn, fnNewEvent* NewEvent);
  virtual void connect(wxEvtHandler* evtHandler, int id, int lastId, int eventType, v8::Local<v8::Object> fn, fnNewEvent* NewEvent);
  virtual void connect(wxEvtHandler* evtHandler, int eventType, v8::Local<v8::Object> fn, fnNewEvent* NewEvent);
  virtual void connect(wxEvtHandler* evtHandler, int id, int eventType, v8::Local<v8::Object> fn, void* userData, wxEvtHandler* eventSink, fnNewEvent* NewEvent);

  virtual v8::Handle<v8::Object> self() = 0;

  std::vector<ListenerData*>* m_listeners;
};

class NodeExEvtHandlerImplWrap : public wxNodeObject {
public:
  NodeExEvtHandlerImplWrap(v8::Handle<v8::Object>& obj) {
    m_self = v8::Persistent<v8::Object>::New(obj);
  }

  virtual v8::Handle<v8::Object> self() { return m_self; }
};

struct EventProxyData : public wxObject {
  NodeExEvtHandlerImpl* m_self;
  uint32_t m_iListener;
  void* m_userData;
};

class EventProxy : public wxEvtHandler
{
public:
	void forwardEvent(wxEvent& event);
};

class wxNode_wxEvtHandler : public wxEvtHandler, public wxNodeObject {
public:
  static void AddMethods(v8::Handle<v8::FunctionTemplate> func);
  static bool AssignableFrom(const v8::Handle<v8::String>& className) { return false; }
  static bool AssignableFrom(const char* className) { return false; }
  static v8::Handle<v8::Value> New(wxEvtHandler* obj) { return v8::Undefined(); }
  static v8::Handle<v8::Value> NewCopy(wxEvtHandler& obj) { return v8::Undefined(); }

protected:
  static v8::Handle<v8::Value> _EVT_MENU(const v8::Arguments& args);
  static v8::Handle<v8::Value> _EVT_IDLE(const v8::Arguments& args);
  static v8::Handle<v8::Value> _EVT_CLOSE(const v8::Arguments& args);
	static v8::Handle<v8::Value> _EVT_KEY_DOWN(const v8::Arguments& args);
  static v8::Handle<v8::Value> _connect(const v8::Arguments& args);
};

#endif
