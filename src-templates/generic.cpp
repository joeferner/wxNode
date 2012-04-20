
#include <sstream>
{{#includes}}#include "{{{.}}}"
{{/includes}}

/* static */ v8::Persistent<v8::FunctionTemplate> wxNode_{{name}}::s_ct;

{{#constructors}}
{{#overloads}}
/*
 * id: {{id}}
 */
wxNode_{{parent.parent.name}}::wxNode_{{parent.parent.name}}({{{argDeclCode}}})
  : {{parent.parent.name}}({{{argConstructorCallCode}}})
{

}
{{/overloads}}
{{/constructors}}


/*static*/ void wxNode_{{name}}::Init(v8::Handle<v8::Object> target) {
  v8::HandleScope scope;

  v8::Local<v8::FunctionTemplate> t = v8::FunctionTemplate::New(wxNodeObject::NewFunc);
  s_ct = v8::Persistent<v8::FunctionTemplate>::New(t);
  s_ct->InstanceTemplate()->SetInternalFieldCount(2);
  s_ct->SetClassName(v8::String::NewSymbol("{{exportName}}"));

  NODE_SET_PROTOTYPE_METHOD(s_ct, "init", _init);
  AddMethods(s_ct);

  target->Set(v8::String::NewSymbol("{{exportName}}"), s_ct->GetFunction());
}

/*static*/ void wxNode_{{name}}::AddMethods(v8::Handle<v8::FunctionTemplate> target) {
  {{{baseClassAddMethodsCallCode}}}
  {{#methods}}{{{addMethodStmt}}}
  {{/methods}}
  {{#fields}}{{{addFieldStmt}}}
  {{/fields}}
}

/*static*/ v8::Handle<v8::Value> wxNode_{{name}}::New(const wxNode_{{name}}* obj) {
  v8::HandleScope scope;

  if(obj == NULL) {
    return scope.Close(v8::Null());
  }
  
  v8::Local<v8::FunctionTemplate> returnObjFt = v8::FunctionTemplate::New(wxNodeObject::NewFunc);
  returnObjFt->InstanceTemplate()->SetInternalFieldCount(2);
  returnObjFt->SetClassName(v8::String::NewSymbol("{{exportName}}"));
  wxNode_{{name}}::AddMethods(returnObjFt);

  v8::Local<v8::Function> returnObjFn = returnObjFt->GetFunction();

  v8::Local<v8::Object> returnObj = returnObjFn->CallAsConstructor(0, new v8::Local<v8::Value>[0])->ToObject();
  returnObj->SetPointerInInternalField(0, (void*)obj);
  NodeExEvtHandlerImpl* evtHandler = dynamic_cast<NodeExEvtHandlerImpl*>((wxNode_{{name}}*)obj);
  returnObj->SetPointerInInternalField(1, evtHandler);

  return scope.Close(returnObj);
}

/*static*/ v8::Handle<v8::Value> wxNode_{{name}}::New(const {{name}}* obj) {
  v8::HandleScope scope;

  if(obj == NULL) {
    return scope.Close(v8::Null());
  }
  
  v8::Local<v8::FunctionTemplate> returnObjFt = v8::FunctionTemplate::New(wxNodeObject::NewFunc);
  returnObjFt->InstanceTemplate()->SetInternalFieldCount(2);
  returnObjFt->SetClassName(v8::String::NewSymbol("{{exportName}}"));
  wxNode_{{name}}::AddMethods(returnObjFt);

  v8::Local<v8::Function> returnObjFn = returnObjFt->GetFunction();
  v8::Local<v8::Object> returnObj = returnObjFn->CallAsConstructor(0, new v8::Local<v8::Value>[0])->ToObject();
  returnObj->SetPointerInInternalField(0, (void*)obj);
  NodeExEvtHandlerImplWrap* wrap = new NodeExEvtHandlerImplWrap(returnObj);
  NodeExEvtHandlerImpl* evtHandler = dynamic_cast<NodeExEvtHandlerImpl*>(wrap);
  returnObj->SetPointerInInternalField(1, evtHandler);

  return scope.Close(returnObj);
}

/*static*/ v8::Handle<v8::Value> wxNode_{{name}}::NewCopy(const {{name}}& obj) {
  {{{newCopyCode}}}
}

/*static*/ bool wxNode_{{name}}::AssignableFrom(const v8::Handle<v8::String>& className) {
  v8::String::AsciiValue classNameStr(className);
  return AssignableFrom(*classNameStr);
}

/*static*/ bool wxNode_{{name}}::AssignableFrom(const char* className) {
  if(!strcmp("{{exportName}}", className)) { return true; }
  {{{assignableFromCode}}}

  return false;
}

/*static*/ v8::Handle<v8::Value> wxNode_{{name}}::_init(const v8::Arguments& args) {
  v8::HandleScope scope;

  {{#constructors}}
  {{#overloads}}
  /*
   * id: {{id}}
   */
  if({{{argTestCode}}}) {
    {{#args}}{{{argCode}}}
    {{/args}}

    wxNode_{{parent.parent.name}} *self = new wxNode_{{parent.parent.name}}({{{argCallCode}}});
    NodeExEvtHandlerImpl* evtHandler = dynamic_cast<NodeExEvtHandlerImpl*>(self);
    self->wrap(args.This(), self, evtHandler);
    return args.This();
  }
  {{/overloads}}
  {{/constructors}}

  std::ostringstream errStr;
  errStr << "Could not find matching constructor for arguments (class name: {{name}}).\n";
  errStr << "  arg count: " << args.Length() << "\n";
  for(int i = 0; i < args.Length(); i++) {
    v8::String::AsciiValue argStr(args[i]);
    errStr << "  arg[" << i << "]: " << *argStr << "\n";
  }
  return v8::ThrowException(v8::Exception::TypeError(v8::String::New(errStr.str().c_str())));
}

{{#methods}}
/*static*/ v8::Handle<v8::Value> wxNode_{{parent.name}}::_{{name}}(const v8::Arguments& args) {
  v8::HandleScope scope;
  wxNode_{{parent.name}}* self = unwrap<wxNode_{{parent.name}}>(args.This());

  {{#overloads}}
  /*
   * id: {{id}}
   */
  if({{{argTestCode}}}) {
    {{#args}}{{{argCode}}}
    {{/args}}

    {{{returnEq}}}{{{methodCallCtx}}}{{name}}({{{argCallCode}}});

    {{{returnStmt}}}
  }
  {{/overloads}}

  std::ostringstream errStr;
  errStr << "Could not find matching method for arguments (method name: {{parent.name}}::{{name}}).\n";
  errStr << "  arg count: " << args.Length() << "\n";
  for(int i = 0; i < args.Length(); i++) {
    v8::String::AsciiValue argStr(args[i]);
    errStr << "  arg[" << i << "]: " << *argStr << "\n";
  }
  return v8::ThrowException(v8::Exception::TypeError(v8::String::New(errStr.str().c_str())));
}
{{/methods}}

{{#fields}}
/*static*/ v8::Handle<v8::Value> wxNode_{{parent.name}}::_{{name}}Get(v8::Local<v8::String> name, const v8::AccessorInfo& info) {
  v8::HandleScope scope;
  wxNode_{{parent.name}}* self = unwrap<wxNode_{{parent.name}}>(info.This());

  return scope.Close(v8::Number::New(self->{{name}}));
}

/*static*/ void wxNode_{{parent.name}}::_{{name}}Set(v8::Local<v8::String> name, v8::Local<v8::Value> val, const v8::AccessorInfo& info) {
  v8::HandleScope scope;
  wxNode_{{parent.name}}* self = unwrap<wxNode_{{parent.name}}>(info.This());

  self->{{name}} = val->ToNumber()->Value();
}
{{/fields}}
