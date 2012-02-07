
#ifndef _wxNode_wxGraphicsPath_
#define _wxNode_wxGraphicsPath_

#include <wx/graphics.h>

class  wxNode_wxGraphicsPath : public wxGraphicsPath {
public:
  static bool AssignableFrom(const v8::Handle<v8::String>& className) { return false; }
  static bool AssignableFrom(const char* className) { return false; }

};

#endif
