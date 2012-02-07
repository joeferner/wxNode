
#include "wxNode_wxWindowWithItems_wxControl_wxItemContainer.h"
#include "wxNode_wxControl.h"
#include "wxNode_wxItemContainer.h"

/*static*/ void wxNode_wxWindowWithItems_wxControl_wxItemContainer::AddMethods(v8::Handle<v8::FunctionTemplate> target) {
  wxNode_wxControl::AddMethods(target);
  wxNode_wxItemContainer::AddMethods(target);
}
