
{{#includes}}#include "{{.}}"
{{/includes}}

/* static */ v8::Persistent<v8::FunctionTemplate> wxNode_{{name}}::s_ct;

{{#constructors}}
{{#overloads}}
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
  s_ct->SetClassName(v8::String::NewSymbol("{{name}}"));

  NODE_SET_PROTOTYPE_METHOD(s_ct, "init", _init);
  AddMethods(s_ct);

  target->Set(v8::String::NewSymbol("{{name}}"), s_ct->GetFunction());
}

/*static*/ void wxNode_{{name}}::AddMethods(v8::Handle<v8::FunctionTemplate> target) {
  {{{baseClassAddMethodsCallCode}}}
  {{#methods}}NODE_SET_PROTOTYPE_METHOD(target, "{{jsName}}", _{{name}});
  {{/methods}}
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

  return v8::ThrowException(v8::String::New("Could not find matching constructor for arguments (class name: {{name}})."));
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

    self->{{name}}({{{argCallCode}}});

    // TODO: handle return type
    return v8::Undefined();
  }
  {{/overloads}}

  return v8::ThrowException(v8::String::New("Could not find matching method for arguments (method name: {{name}})."));
}
{{/methods}}
