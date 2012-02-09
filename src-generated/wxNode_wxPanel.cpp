
#include <sstream>
#include "wxNode_wxPanel.h"
#include "wxNode_wxEvtHandler.h"
#include "wxNode_wxNavigationEnabled.h"
#include "wxNode_wxWindow.h"
#include "wxNode_wxPoint.h"
#include "wxNode_wxSize.h"


/* static */ v8::Persistent<v8::FunctionTemplate> wxNode_wxPanel::s_ct;



wxNode_wxPanel::wxNode_wxPanel()
  : wxPanel()
{

}

wxNode_wxPanel::wxNode_wxPanel(wxWindow* parent, int winid, wxPoint& pos, wxSize& size, long int style, const wxString& name)
  : wxPanel(parent, winid, pos, size, style, name)
{

}

wxNode_wxPanel::wxNode_wxPanel(wxWindow* parent, int winid, wxPoint& pos, wxSize& size, long int style)
  : wxPanel(parent, winid, pos, size, style)
{

}

wxNode_wxPanel::wxNode_wxPanel(wxWindow* parent, int winid, wxPoint& pos, wxSize& size)
  : wxPanel(parent, winid, pos, size)
{

}

wxNode_wxPanel::wxNode_wxPanel(wxWindow* parent, int winid, wxPoint& pos)
  : wxPanel(parent, winid, pos)
{

}

wxNode_wxPanel::wxNode_wxPanel(wxWindow* parent, int winid)
  : wxPanel(parent, winid)
{

}

wxNode_wxPanel::wxNode_wxPanel(wxWindow* parent)
  : wxPanel(parent)
{

}

wxNode_wxPanel::wxNode_wxPanel(wxWindow* parent, int x, int y, int width, int height, long int style, const wxString& name)
  : wxPanel(parent, x, y, width, height, style, name)
{

}

wxNode_wxPanel::wxNode_wxPanel(wxWindow* parent, int x, int y, int width, int height, long int style)
  : wxPanel(parent, x, y, width, height, style)
{

}

wxNode_wxPanel::wxNode_wxPanel(wxWindow* parent, int x, int y, int width, int height)
  : wxPanel(parent, x, y, width, height)
{

}




/*static*/ void wxNode_wxPanel::Init(v8::Handle<v8::Object> target) {
  v8::HandleScope scope;

  v8::Local<v8::FunctionTemplate> t = v8::FunctionTemplate::New(wxNodeObject::NewFunc);
  s_ct = v8::Persistent<v8::FunctionTemplate>::New(t);
  s_ct->InstanceTemplate()->SetInternalFieldCount(2);
  s_ct->SetClassName(v8::String::NewSymbol("wxPanel"));

  NODE_SET_PROTOTYPE_METHOD(s_ct, "init", _init);
  AddMethods(s_ct);

  target->Set(v8::String::NewSymbol("wxPanel"), s_ct->GetFunction());
}

/*static*/ void wxNode_wxPanel::AddMethods(v8::Handle<v8::FunctionTemplate> target) {
  wxNode_wxNavigationEnabled::AddMethods(target);
  NODE_SET_PROTOTYPE_METHOD(target, "create", _Create);
  NODE_SET_PROTOTYPE_METHOD(target, "initDialog", _InitDialog);
  
}

/*static*/ v8::Handle<v8::Value> wxNode_wxPanel::New(const wxNode_wxPanel* obj) {
  v8::HandleScope scope;

  if(obj == NULL) {
    return scope.Close(v8::Null());
  }
  
  v8::Local<v8::FunctionTemplate> returnObjFt = v8::FunctionTemplate::New(wxNodeObject::NewFunc);
  returnObjFt->InstanceTemplate()->SetInternalFieldCount(2);
  returnObjFt->SetClassName(v8::String::NewSymbol("wxPanel"));
  wxNode_wxPanel::AddMethods(returnObjFt);

  v8::Local<v8::Function> returnObjFn = returnObjFt->GetFunction();
  v8::Handle<v8::Value> returnObjArgs[0];
  v8::Local<v8::Object> returnObj = returnObjFn->CallAsConstructor(0, returnObjArgs)->ToObject();
  returnObj->SetPointerInInternalField(0, (void*)obj);
  NodeExEvtHandlerImpl* evtHandler = dynamic_cast<NodeExEvtHandlerImpl*>((wxNode_wxPanel*)obj);
  returnObj->SetPointerInInternalField(1, evtHandler);

  return scope.Close(returnObj);
}

/*static*/ v8::Handle<v8::Value> wxNode_wxPanel::New(const wxPanel* obj) {
  v8::HandleScope scope;

  if(obj == NULL) {
    return scope.Close(v8::Null());
  }
  
  v8::Local<v8::FunctionTemplate> returnObjFt = v8::FunctionTemplate::New(wxNodeObject::NewFunc);
  returnObjFt->InstanceTemplate()->SetInternalFieldCount(2);
  returnObjFt->SetClassName(v8::String::NewSymbol("wxPanel"));
  wxNode_wxPanel::AddMethods(returnObjFt);

  v8::Local<v8::Function> returnObjFn = returnObjFt->GetFunction();
  v8::Handle<v8::Value> returnObjArgs[0];
  v8::Local<v8::Object> returnObj = returnObjFn->CallAsConstructor(0, returnObjArgs)->ToObject();
  returnObj->SetPointerInInternalField(0, (void*)obj);
  returnObj->SetPointerInInternalField(1, new NodeExEvtHandlerImplWrap(returnObj));

  return scope.Close(returnObj);
}

/*static*/ v8::Handle<v8::Value> wxNode_wxPanel::NewCopy(const wxPanel& obj) {
  v8::HandleScope scope;
  wxNode_wxPanel* returnVal = new wxNode_wxPanel();
  memcpy(dynamic_cast<wxPanel*>(returnVal), &obj, sizeof(wxPanel));
  return scope.Close(New(returnVal));

}

/*static*/ bool wxNode_wxPanel::AssignableFrom(const v8::Handle<v8::String>& className) {
  v8::String::AsciiValue classNameStr(className);
  return AssignableFrom(*classNameStr);
}

/*static*/ bool wxNode_wxPanel::AssignableFrom(const char* className) {
  if(!strcmp("wxPanel", className)) { return true; }
  
  if(!strcmp("wxPanel", className)) { return true; }

  if(!strcmp("wxScrolled<wxPanel>", className)) { return true; }

  if(!strcmp("wxScrolledWindow", className)) { return true; }

  if(!strcmp("wxPreviewCanvas", className)) { return true; }
  if(!strcmp("wxHtmlWindow", className)) { return true; }
  if(!strcmp("wxGrid", className)) { return true; }
  if(!strcmp("wxWizardPage", className)) { return true; }

  if(!strcmp("wxWizardPageSimple", className)) { return true; }
  if(!strcmp("wxRichTextDialogPage", className)) { return true; }

  if(!strcmp("wxRichTextFontPage", className)) { return true; }
  if(!strcmp("wxRichTextMarginsPage", className)) { return true; }
  if(!strcmp("wxRichTextStylePage", className)) { return true; }
  if(!strcmp("wxRichTextSizePage", className)) { return true; }
  if(!strcmp("wxRichTextListStylePage", className)) { return true; }
  if(!strcmp("wxRichTextTabsPage", className)) { return true; }
  if(!strcmp("wxRichTextBulletsPage", className)) { return true; }
  if(!strcmp("wxHVScrolledWindow", className)) { return true; }
  if(!strcmp("wxVScrolledWindow", className)) { return true; }

  if(!strcmp("wxSymbolListCtrl", className)) { return true; }
  if(!strcmp("wxVListBox", className)) { return true; }

  if(!strcmp("wxHtmlListBox", className)) { return true; }

  if(!strcmp("wxRichTextStyleListBox", className)) { return true; }

  if(!strcmp("wxRichTextStyleComboPopup", className)) { return true; }
  if(!strcmp("wxWindowWithItems<wxHtmlListBox,wxItemContainer>", className)) { return true; }

  if(!strcmp("wxSimpleHtmlListBox", className)) { return true; }
  if(!strcmp("wxRichTextFontListBox", className)) { return true; }
  if(!strcmp("wxVListBoxComboPopup", className)) { return true; }
  if(!strcmp("wxRearrangeCtrl", className)) { return true; }
  if(!strcmp("wxPreviewControlBar", className)) { return true; }
  if(!strcmp("wxEditableListBox", className)) { return true; }
  if(!strcmp("wxAuiMDIChildFrame", className)) { return true; }
  if(!strcmp("wxHScrolledWindow", className)) { return true; }


  return false;
}

/*static*/ v8::Handle<v8::Value> wxNode_wxPanel::_init(const v8::Arguments& args) {
  v8::HandleScope scope;

  
  
  /*
   * id: _33572
   */
  if(args.Length() == 0) {
    

    wxNode_wxPanel *self = new wxNode_wxPanel();
    NodeExEvtHandlerImpl* evtHandler = dynamic_cast<NodeExEvtHandlerImpl*>(self);
    self->wrap(args.This(), self, evtHandler);
    return args.This();
  }
  
  /*
   * id: _33573
   */
  if(args.Length() == 6 && (args[0]->IsNull() || (args[0]->IsObject() && wxNode_wxWindow::AssignableFrom(args[0]->ToObject()->GetConstructorName()))) && args[1]->IsNumber() && (args[2]->IsNull() || (args[2]->IsObject() && wxNode_wxPoint::AssignableFrom(args[2]->ToObject()->GetConstructorName()))) && (args[3]->IsNull() || (args[3]->IsObject() && wxNode_wxSize::AssignableFrom(args[3]->ToObject()->GetConstructorName()))) && args[4]->IsNumber() && args[5]->IsString()) {
    wxNode_wxWindow* parent = args[0]->IsNull() ? NULL : wxNodeObject::unwrap<wxNode_wxWindow>(args[0]->ToObject()); /* type: _1326 * */
    int winid = (int)args[1]->ToInt32()->Value(); /* type: _11168  */
    wxNode_wxPoint* pos = args[2]->IsNull() ? NULL : wxNodeObject::unwrap<wxNode_wxPoint>(args[2]->ToObject()); /* type: _25270  */
    wxNode_wxSize* size = args[3]->IsNull() ? NULL : wxNodeObject::unwrap<wxNode_wxSize>(args[3]->ToObject()); /* type: _25379  */
    long int style = (long int)args[4]->ToInt32()->Value(); /* type: _766  */
    v8::String::AsciiValue name(args[5]->ToString()); /* type: _18997  */
    

    wxNode_wxPanel *self = new wxNode_wxPanel(parent, winid, *pos, *size, style, *name);
    NodeExEvtHandlerImpl* evtHandler = dynamic_cast<NodeExEvtHandlerImpl*>(self);
    self->wrap(args.This(), self, evtHandler);
    return args.This();
  }
  
  /*
   * id: _33573
   */
  if(args.Length() == 5 && (args[0]->IsNull() || (args[0]->IsObject() && wxNode_wxWindow::AssignableFrom(args[0]->ToObject()->GetConstructorName()))) && args[1]->IsNumber() && (args[2]->IsNull() || (args[2]->IsObject() && wxNode_wxPoint::AssignableFrom(args[2]->ToObject()->GetConstructorName()))) && (args[3]->IsNull() || (args[3]->IsObject() && wxNode_wxSize::AssignableFrom(args[3]->ToObject()->GetConstructorName()))) && args[4]->IsNumber()) {
    wxNode_wxWindow* parent = args[0]->IsNull() ? NULL : wxNodeObject::unwrap<wxNode_wxWindow>(args[0]->ToObject()); /* type: _1326 * */
    int winid = (int)args[1]->ToInt32()->Value(); /* type: _11168  */
    wxNode_wxPoint* pos = args[2]->IsNull() ? NULL : wxNodeObject::unwrap<wxNode_wxPoint>(args[2]->ToObject()); /* type: _25270  */
    wxNode_wxSize* size = args[3]->IsNull() ? NULL : wxNodeObject::unwrap<wxNode_wxSize>(args[3]->ToObject()); /* type: _25379  */
    long int style = (long int)args[4]->ToInt32()->Value(); /* type: _766  */
    

    wxNode_wxPanel *self = new wxNode_wxPanel(parent, winid, *pos, *size, style);
    NodeExEvtHandlerImpl* evtHandler = dynamic_cast<NodeExEvtHandlerImpl*>(self);
    self->wrap(args.This(), self, evtHandler);
    return args.This();
  }
  
  /*
   * id: _33573
   */
  if(args.Length() == 4 && (args[0]->IsNull() || (args[0]->IsObject() && wxNode_wxWindow::AssignableFrom(args[0]->ToObject()->GetConstructorName()))) && args[1]->IsNumber() && (args[2]->IsNull() || (args[2]->IsObject() && wxNode_wxPoint::AssignableFrom(args[2]->ToObject()->GetConstructorName()))) && (args[3]->IsNull() || (args[3]->IsObject() && wxNode_wxSize::AssignableFrom(args[3]->ToObject()->GetConstructorName())))) {
    wxNode_wxWindow* parent = args[0]->IsNull() ? NULL : wxNodeObject::unwrap<wxNode_wxWindow>(args[0]->ToObject()); /* type: _1326 * */
    int winid = (int)args[1]->ToInt32()->Value(); /* type: _11168  */
    wxNode_wxPoint* pos = args[2]->IsNull() ? NULL : wxNodeObject::unwrap<wxNode_wxPoint>(args[2]->ToObject()); /* type: _25270  */
    wxNode_wxSize* size = args[3]->IsNull() ? NULL : wxNodeObject::unwrap<wxNode_wxSize>(args[3]->ToObject()); /* type: _25379  */
    

    wxNode_wxPanel *self = new wxNode_wxPanel(parent, winid, *pos, *size);
    NodeExEvtHandlerImpl* evtHandler = dynamic_cast<NodeExEvtHandlerImpl*>(self);
    self->wrap(args.This(), self, evtHandler);
    return args.This();
  }
  
  /*
   * id: _33573
   */
  if(args.Length() == 3 && (args[0]->IsNull() || (args[0]->IsObject() && wxNode_wxWindow::AssignableFrom(args[0]->ToObject()->GetConstructorName()))) && args[1]->IsNumber() && (args[2]->IsNull() || (args[2]->IsObject() && wxNode_wxPoint::AssignableFrom(args[2]->ToObject()->GetConstructorName())))) {
    wxNode_wxWindow* parent = args[0]->IsNull() ? NULL : wxNodeObject::unwrap<wxNode_wxWindow>(args[0]->ToObject()); /* type: _1326 * */
    int winid = (int)args[1]->ToInt32()->Value(); /* type: _11168  */
    wxNode_wxPoint* pos = args[2]->IsNull() ? NULL : wxNodeObject::unwrap<wxNode_wxPoint>(args[2]->ToObject()); /* type: _25270  */
    

    wxNode_wxPanel *self = new wxNode_wxPanel(parent, winid, *pos);
    NodeExEvtHandlerImpl* evtHandler = dynamic_cast<NodeExEvtHandlerImpl*>(self);
    self->wrap(args.This(), self, evtHandler);
    return args.This();
  }
  
  /*
   * id: _33573
   */
  if(args.Length() == 2 && (args[0]->IsNull() || (args[0]->IsObject() && wxNode_wxWindow::AssignableFrom(args[0]->ToObject()->GetConstructorName()))) && args[1]->IsNumber()) {
    wxNode_wxWindow* parent = args[0]->IsNull() ? NULL : wxNodeObject::unwrap<wxNode_wxWindow>(args[0]->ToObject()); /* type: _1326 * */
    int winid = (int)args[1]->ToInt32()->Value(); /* type: _11168  */
    

    wxNode_wxPanel *self = new wxNode_wxPanel(parent, winid);
    NodeExEvtHandlerImpl* evtHandler = dynamic_cast<NodeExEvtHandlerImpl*>(self);
    self->wrap(args.This(), self, evtHandler);
    return args.This();
  }
  
  /*
   * id: _33573
   */
  if(args.Length() == 1 && (args[0]->IsNull() || (args[0]->IsObject() && wxNode_wxWindow::AssignableFrom(args[0]->ToObject()->GetConstructorName())))) {
    wxNode_wxWindow* parent = args[0]->IsNull() ? NULL : wxNodeObject::unwrap<wxNode_wxWindow>(args[0]->ToObject()); /* type: _1326 * */
    

    wxNode_wxPanel *self = new wxNode_wxPanel(parent);
    NodeExEvtHandlerImpl* evtHandler = dynamic_cast<NodeExEvtHandlerImpl*>(self);
    self->wrap(args.This(), self, evtHandler);
    return args.This();
  }
  
  /*
   * id: _33574
   */
  if(args.Length() == 7 && (args[0]->IsNull() || (args[0]->IsObject() && wxNode_wxWindow::AssignableFrom(args[0]->ToObject()->GetConstructorName()))) && args[1]->IsNumber() && args[2]->IsNumber() && args[3]->IsNumber() && args[4]->IsNumber() && args[5]->IsNumber() && args[6]->IsString()) {
    wxNode_wxWindow* parent = args[0]->IsNull() ? NULL : wxNodeObject::unwrap<wxNode_wxWindow>(args[0]->ToObject()); /* type: _1326 * */
    int x = (int)args[1]->ToInt32()->Value(); /* type: _233  */
    int y = (int)args[2]->ToInt32()->Value(); /* type: _233  */
    int width = (int)args[3]->ToInt32()->Value(); /* type: _233  */
    int height = (int)args[4]->ToInt32()->Value(); /* type: _233  */
    long int style = (long int)args[5]->ToInt32()->Value(); /* type: _766  */
    v8::String::AsciiValue name(args[6]->ToString()); /* type: _18997  */
    

    wxNode_wxPanel *self = new wxNode_wxPanel(parent, x, y, width, height, style, *name);
    NodeExEvtHandlerImpl* evtHandler = dynamic_cast<NodeExEvtHandlerImpl*>(self);
    self->wrap(args.This(), self, evtHandler);
    return args.This();
  }
  
  /*
   * id: _33574
   */
  if(args.Length() == 6 && (args[0]->IsNull() || (args[0]->IsObject() && wxNode_wxWindow::AssignableFrom(args[0]->ToObject()->GetConstructorName()))) && args[1]->IsNumber() && args[2]->IsNumber() && args[3]->IsNumber() && args[4]->IsNumber() && args[5]->IsNumber()) {
    wxNode_wxWindow* parent = args[0]->IsNull() ? NULL : wxNodeObject::unwrap<wxNode_wxWindow>(args[0]->ToObject()); /* type: _1326 * */
    int x = (int)args[1]->ToInt32()->Value(); /* type: _233  */
    int y = (int)args[2]->ToInt32()->Value(); /* type: _233  */
    int width = (int)args[3]->ToInt32()->Value(); /* type: _233  */
    int height = (int)args[4]->ToInt32()->Value(); /* type: _233  */
    long int style = (long int)args[5]->ToInt32()->Value(); /* type: _766  */
    

    wxNode_wxPanel *self = new wxNode_wxPanel(parent, x, y, width, height, style);
    NodeExEvtHandlerImpl* evtHandler = dynamic_cast<NodeExEvtHandlerImpl*>(self);
    self->wrap(args.This(), self, evtHandler);
    return args.This();
  }
  
  /*
   * id: _33574
   */
  if(args.Length() == 5 && (args[0]->IsNull() || (args[0]->IsObject() && wxNode_wxWindow::AssignableFrom(args[0]->ToObject()->GetConstructorName()))) && args[1]->IsNumber() && args[2]->IsNumber() && args[3]->IsNumber() && args[4]->IsNumber()) {
    wxNode_wxWindow* parent = args[0]->IsNull() ? NULL : wxNodeObject::unwrap<wxNode_wxWindow>(args[0]->ToObject()); /* type: _1326 * */
    int x = (int)args[1]->ToInt32()->Value(); /* type: _233  */
    int y = (int)args[2]->ToInt32()->Value(); /* type: _233  */
    int width = (int)args[3]->ToInt32()->Value(); /* type: _233  */
    int height = (int)args[4]->ToInt32()->Value(); /* type: _233  */
    

    wxNode_wxPanel *self = new wxNode_wxPanel(parent, x, y, width, height);
    NodeExEvtHandlerImpl* evtHandler = dynamic_cast<NodeExEvtHandlerImpl*>(self);
    self->wrap(args.This(), self, evtHandler);
    return args.This();
  }
  
  

  std::ostringstream errStr;
  errStr << "Could not find matching constructor for arguments (class name: wxPanel).\n";
  errStr << "  arg count: " << args.Length() << "\n";
  for(int i = 0; i < args.Length(); i++) {
    v8::String::AsciiValue argStr(args[i]);
    errStr << "  arg[" << i << "]: " << *argStr << "\n";
  }
  return v8::ThrowException(v8::Exception::TypeError(v8::String::New(errStr.str().c_str())));
}


/*static*/ v8::Handle<v8::Value> wxNode_wxPanel::_Create(const v8::Arguments& args) {
  v8::HandleScope scope;
  wxNode_wxPanel* self = unwrap<wxNode_wxPanel>(args.This());

  
  /*
   * id: _38077
   */
  if(args.Length() == 6 && (args[0]->IsNull() || (args[0]->IsObject() && wxNode_wxWindow::AssignableFrom(args[0]->ToObject()->GetConstructorName()))) && args[1]->IsNumber() && (args[2]->IsNull() || (args[2]->IsObject() && wxNode_wxPoint::AssignableFrom(args[2]->ToObject()->GetConstructorName()))) && (args[3]->IsNull() || (args[3]->IsObject() && wxNode_wxSize::AssignableFrom(args[3]->ToObject()->GetConstructorName()))) && args[4]->IsNumber() && args[5]->IsString()) {
    wxNode_wxWindow* parent = args[0]->IsNull() ? NULL : wxNodeObject::unwrap<wxNode_wxWindow>(args[0]->ToObject()); /* type: _1326 * */
    int winid = (int)args[1]->ToInt32()->Value(); /* type: _11168  */
    wxNode_wxPoint* pos = args[2]->IsNull() ? NULL : wxNodeObject::unwrap<wxNode_wxPoint>(args[2]->ToObject()); /* type: _25270  */
    wxNode_wxSize* size = args[3]->IsNull() ? NULL : wxNodeObject::unwrap<wxNode_wxSize>(args[3]->ToObject()); /* type: _25379  */
    long int style = (long int)args[4]->ToInt32()->Value(); /* type: _766  */
    v8::String::AsciiValue name(args[5]->ToString()); /* type: _18997  */
    

    bool returnVal = self->Create(parent, winid, *pos, *size, style, *name);

    return scope.Close(v8::Boolean::New(returnVal));
  }
  
  /*
   * id: _38077
   */
  if(args.Length() == 5 && (args[0]->IsNull() || (args[0]->IsObject() && wxNode_wxWindow::AssignableFrom(args[0]->ToObject()->GetConstructorName()))) && args[1]->IsNumber() && (args[2]->IsNull() || (args[2]->IsObject() && wxNode_wxPoint::AssignableFrom(args[2]->ToObject()->GetConstructorName()))) && (args[3]->IsNull() || (args[3]->IsObject() && wxNode_wxSize::AssignableFrom(args[3]->ToObject()->GetConstructorName()))) && args[4]->IsNumber()) {
    wxNode_wxWindow* parent = args[0]->IsNull() ? NULL : wxNodeObject::unwrap<wxNode_wxWindow>(args[0]->ToObject()); /* type: _1326 * */
    int winid = (int)args[1]->ToInt32()->Value(); /* type: _11168  */
    wxNode_wxPoint* pos = args[2]->IsNull() ? NULL : wxNodeObject::unwrap<wxNode_wxPoint>(args[2]->ToObject()); /* type: _25270  */
    wxNode_wxSize* size = args[3]->IsNull() ? NULL : wxNodeObject::unwrap<wxNode_wxSize>(args[3]->ToObject()); /* type: _25379  */
    long int style = (long int)args[4]->ToInt32()->Value(); /* type: _766  */
    

    bool returnVal = self->Create(parent, winid, *pos, *size, style);

    return scope.Close(v8::Boolean::New(returnVal));
  }
  
  /*
   * id: _38077
   */
  if(args.Length() == 4 && (args[0]->IsNull() || (args[0]->IsObject() && wxNode_wxWindow::AssignableFrom(args[0]->ToObject()->GetConstructorName()))) && args[1]->IsNumber() && (args[2]->IsNull() || (args[2]->IsObject() && wxNode_wxPoint::AssignableFrom(args[2]->ToObject()->GetConstructorName()))) && (args[3]->IsNull() || (args[3]->IsObject() && wxNode_wxSize::AssignableFrom(args[3]->ToObject()->GetConstructorName())))) {
    wxNode_wxWindow* parent = args[0]->IsNull() ? NULL : wxNodeObject::unwrap<wxNode_wxWindow>(args[0]->ToObject()); /* type: _1326 * */
    int winid = (int)args[1]->ToInt32()->Value(); /* type: _11168  */
    wxNode_wxPoint* pos = args[2]->IsNull() ? NULL : wxNodeObject::unwrap<wxNode_wxPoint>(args[2]->ToObject()); /* type: _25270  */
    wxNode_wxSize* size = args[3]->IsNull() ? NULL : wxNodeObject::unwrap<wxNode_wxSize>(args[3]->ToObject()); /* type: _25379  */
    

    bool returnVal = self->Create(parent, winid, *pos, *size);

    return scope.Close(v8::Boolean::New(returnVal));
  }
  
  /*
   * id: _38077
   */
  if(args.Length() == 3 && (args[0]->IsNull() || (args[0]->IsObject() && wxNode_wxWindow::AssignableFrom(args[0]->ToObject()->GetConstructorName()))) && args[1]->IsNumber() && (args[2]->IsNull() || (args[2]->IsObject() && wxNode_wxPoint::AssignableFrom(args[2]->ToObject()->GetConstructorName())))) {
    wxNode_wxWindow* parent = args[0]->IsNull() ? NULL : wxNodeObject::unwrap<wxNode_wxWindow>(args[0]->ToObject()); /* type: _1326 * */
    int winid = (int)args[1]->ToInt32()->Value(); /* type: _11168  */
    wxNode_wxPoint* pos = args[2]->IsNull() ? NULL : wxNodeObject::unwrap<wxNode_wxPoint>(args[2]->ToObject()); /* type: _25270  */
    

    bool returnVal = self->Create(parent, winid, *pos);

    return scope.Close(v8::Boolean::New(returnVal));
  }
  
  /*
   * id: _38077
   */
  if(args.Length() == 2 && (args[0]->IsNull() || (args[0]->IsObject() && wxNode_wxWindow::AssignableFrom(args[0]->ToObject()->GetConstructorName()))) && args[1]->IsNumber()) {
    wxNode_wxWindow* parent = args[0]->IsNull() ? NULL : wxNodeObject::unwrap<wxNode_wxWindow>(args[0]->ToObject()); /* type: _1326 * */
    int winid = (int)args[1]->ToInt32()->Value(); /* type: _11168  */
    

    bool returnVal = self->Create(parent, winid);

    return scope.Close(v8::Boolean::New(returnVal));
  }
  
  /*
   * id: _38077
   */
  if(args.Length() == 1 && (args[0]->IsNull() || (args[0]->IsObject() && wxNode_wxWindow::AssignableFrom(args[0]->ToObject()->GetConstructorName())))) {
    wxNode_wxWindow* parent = args[0]->IsNull() ? NULL : wxNodeObject::unwrap<wxNode_wxWindow>(args[0]->ToObject()); /* type: _1326 * */
    

    bool returnVal = self->Create(parent);

    return scope.Close(v8::Boolean::New(returnVal));
  }
  

  std::ostringstream errStr;
  errStr << "Could not find matching method for arguments (method name: wxPanel::Create).\n";
  errStr << "  arg count: " << args.Length() << "\n";
  for(int i = 0; i < args.Length(); i++) {
    v8::String::AsciiValue argStr(args[i]);
    errStr << "  arg[" << i << "]: " << *argStr << "\n";
  }
  return v8::ThrowException(v8::Exception::TypeError(v8::String::New(errStr.str().c_str())));
}

/*static*/ v8::Handle<v8::Value> wxNode_wxPanel::_InitDialog(const v8::Arguments& args) {
  v8::HandleScope scope;
  wxNode_wxPanel* self = unwrap<wxNode_wxPanel>(args.This());

  
  /*
   * id: _38078
   */
  if(args.Length() == 0) {
    

    self->InitDialog();

    return v8::Undefined();
  }
  

  std::ostringstream errStr;
  errStr << "Could not find matching method for arguments (method name: wxPanel::InitDialog).\n";
  errStr << "  arg count: " << args.Length() << "\n";
  for(int i = 0; i < args.Length(); i++) {
    v8::String::AsciiValue argStr(args[i]);
    errStr << "  arg[" << i << "]: " << *argStr << "\n";
  }
  return v8::ThrowException(v8::Exception::TypeError(v8::String::New(errStr.str().c_str())));
}

