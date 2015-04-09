#include <nan.h>

using namespace v8;

//NAN_METHOD(MyFunction) {
//  NanScope();
//  NanReturnValue(NanNew("hello world"));
//}



NAN_METHOD(CreateFunction) {
  NanScope();
  unsigned int size;
  Local<Object> obj = args[0].As<Object>();
  if (obj->HasIndexedPropertiesInExternalArrayData()) {
      size = obj->GetIndexedPropertiesExternalArrayDataLength();
  }
  // omit this to make it anonymous
  //fn->SetName(NanNew("theFunction"));
  NanReturnValue(size);
  //NanReturnValue(1);
}

void Init(Handle<Object> exports, Handle<Object> module) {
  NODE_SET_METHOD(module, "exports", CreateFunction);
}

NODE_MODULE(addon, Init)
