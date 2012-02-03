
#include "wxnode.h"
#include "wxNode_wxNavigationEnabled.h"
#include "wxNode_wxWindow.h"

/*static*/ void wxNode_wxNavigationEnabled::AddMethods(v8::Handle<v8::FunctionTemplate> target) {
  wxNode_wxWindow::AddMethods(target);
}
