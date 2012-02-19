
#include "wxnode.h"
#include "wxNodeObject.h"

v8::Handle<v8::Value> wxNodeObject::call(const char *fnName, int argc, v8::Handle<v8::Value> args[]) {
  v8::HandleScope scope;
  if(m_self.IsEmpty() || m_self->IsNull() || m_self->IsUndefined()) {
    // TODO: change to v8 error
    printf("ERROR: invalid object state. m_self is null\n");
  }
  v8::Local<v8::Value> fnObj = m_self->Get(v8::String::New(fnName));
  if(fnObj->IsNull() || fnObj->IsUndefined()) {
    // TODO: change to v8 error
    printf("ERROR: no method with name %s\n", fnName);
  }
  v8::Function *fn = v8::Function::Cast(*fnObj);
  return scope.Close(fn->Call(self(), argc, args));
}

/*static*/ void wxNodeObject::AddMethods(v8::Handle<v8::FunctionTemplate>& ct) {
  NODE_SET_METHOD(ct, "extend", extend);
}

/*static*/ v8::Handle<v8::Value> wxNodeObject::extendCallHandler(const v8::Arguments& args) {
  v8::HandleScope scope;
  v8::Local<v8::Object> result;

  v8::Local<v8::Object> argsData = args.Data()->ToObject();
  v8::Handle<v8::Object> baseClass = argsData->Get(v8::String::New("baseClass"))->ToObject();
  v8::Handle<v8::Object> subClass = argsData->Get(v8::String::New("subClass"))->ToObject();

  // create new object
  result = v8::Object::Cast(*baseClass->CallAsConstructor(0, new v8::Local<v8::Value>[0]));

  v8::Function* superWrapMethod = v8::Function::Cast(*v8::Context::GetCurrent()->Global()->Get(v8::String::New("__superWrapMethod")));

  // copy subClass methods
  v8::Local<v8::Array> subClassPropNames = subClass->GetPropertyNames();
  for(uint32_t i=0; i<subClassPropNames->Length(); i++) {
    v8::Local<v8::String> propName = subClassPropNames->Get(i)->ToString();
    v8::Local<v8::Value> propVal = subClass->Get(propName);
    v8::Local<v8::Value> basePropVal = result->Get(propName);

    if(propVal->IsFunction()) {
      v8::Local<v8::Value> superWrapArgv[2];
      superWrapArgv[0] = propVal;
      superWrapArgv[1] = basePropVal;
      propVal = superWrapMethod->Call(result, 2, superWrapArgv);
      result->Set(propName, propVal);
    } else {
      result->Set(propName, propVal);
    }
  }

  // call init
  int argc = args.Length();
  v8::Handle<v8::Value>* initArgs = new v8::Handle<v8::Value>[argc];
  for(int i=0; i<argc; i++) {
    initArgs[i] = args[i];
  }
  v8::Local<v8::Value> initObj = result->Get(v8::String::New("init"));

  v8::Function *initFn = v8::Function::Cast(*initObj);

  v8::TryCatch tryCatch;
  initFn->Call(result, argc, initArgs);
  if(tryCatch.HasCaught()) {
    v8::String::AsciiValue errorStr(tryCatch.Exception());
    printf("%s\n", *errorStr);
    return scope.Close(tryCatch.Exception()); // TODO: causes Seg fault
  }

  return scope.Close(result);
}


/*static*/ v8::Handle<v8::Value> wxNodeObject::extend(const v8::Arguments& args) {
  v8::HandleScope scope;
  v8::Handle<v8::Object> baseClass = args.This();
  v8::Handle<v8::Object> subClass = args[0]->ToObject();

  v8::Handle<v8::Object> data = v8::Object::New();
  data->Set(v8::String::New("baseClass"), baseClass);
  data->Set(v8::String::New("subClass"), subClass);

  v8::Local<v8::FunctionTemplate> t = v8::FunctionTemplate::New();
  t->SetCallHandler(extendCallHandler, data);
  t->InstanceTemplate()->SetInternalFieldCount(2);
  v8::Local<v8::Function> ctor = t->GetFunction();

  v8::Local<v8::FunctionTemplate> extend = v8::FunctionTemplate::New(wxNodeObject::extend);
  ctor->Set(v8::String::New("extend"), extend->GetFunction());

  // copy static method
  v8::Local<v8::Array> baseClassPropNames = baseClass->GetPropertyNames();
  for(uint32_t i=0; i<baseClassPropNames->Length(); i++) {
    v8::Local<v8::String> propName = baseClassPropNames->Get(i)->ToString();
    v8::String::AsciiValue propNameStr(propName);
    if(!strcmp(*propNameStr, "extend")) {
      continue;
    }
    v8::Local<v8::Value> propVal = baseClass->Get(propName);
    ctor->Set(propName, propVal);
  }

  return scope.Close(ctor);
}
