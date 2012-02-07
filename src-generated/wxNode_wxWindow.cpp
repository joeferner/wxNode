
#include <sstream>
#include "wxNode_wxWindow.h"
#include "wxNode_wxEvtHandler.h"
#include "wxNode_wxPoint.h"
#include "wxNode_wxSize.h"
#include "wxNode_wxRect.h"
#include "wxNode_wxScrollHelper.h"
#include "wxNode_wxKeyEvent.h"
#include "wxNode_wxEvent.h"
#include "wxNode_wxValidator.h"
#include "wxNode_wxAcceleratorTable.h"
#include "wxNode_wxDC.h"
#include "wxNode_wxColour.h"
#include "wxNode_wxFont.h"
#include "wxNode_wxCursor.h"
#include "wxNode_wxCaret.h"
#include "wxNode_wxUpdateUIEvent.h"
#include "wxNode_wxMenu.h"
#include "wxNode_wxToolTip.h"
#include "wxNode_wxDropTarget.h"
#include "wxNode_wxLayoutConstraints.h"
#include "wxNode_wxSizer.h"
#include "wxNode_wxIdleEvent.h"
#include "wxNode_wxPalette.h"


/* static */ v8::Persistent<v8::FunctionTemplate> wxNode_wxWindow::s_ct;



wxNode_wxWindow::wxNode_wxWindow()
  : wxWindow()
{

}

wxNode_wxWindow::wxNode_wxWindow(wxNode_wxWindow* parent, int id, wxNode_wxPoint& pos, wxNode_wxSize& size, long int style, const wxString& name)
  : wxWindow(parent, id, pos, size, style, name)
{

}

wxNode_wxWindow::wxNode_wxWindow(wxNode_wxWindow* parent, int id, wxNode_wxPoint& pos, wxNode_wxSize& size, long int style)
  : wxWindow(parent, id, pos, size, style)
{

}

wxNode_wxWindow::wxNode_wxWindow(wxNode_wxWindow* parent, int id, wxNode_wxPoint& pos, wxNode_wxSize& size)
  : wxWindow(parent, id, pos, size)
{

}

wxNode_wxWindow::wxNode_wxWindow(wxNode_wxWindow* parent, int id, wxNode_wxPoint& pos)
  : wxWindow(parent, id, pos)
{

}

wxNode_wxWindow::wxNode_wxWindow(wxNode_wxWindow* parent, int id)
  : wxWindow(parent, id)
{

}




/*static*/ void wxNode_wxWindow::Init(v8::Handle<v8::Object> target) {
  v8::HandleScope scope;

  v8::Local<v8::FunctionTemplate> t = v8::FunctionTemplate::New(wxNodeObject::NewFunc);
  s_ct = v8::Persistent<v8::FunctionTemplate>::New(t);
  s_ct->InstanceTemplate()->SetInternalFieldCount(2);
  s_ct->SetClassName(v8::String::NewSymbol("wxWindow"));

  NODE_SET_PROTOTYPE_METHOD(s_ct, "init", _init);
  AddMethods(s_ct);

  target->Set(v8::String::NewSymbol("wxWindow"), s_ct->GetFunction());
}

/*static*/ void wxNode_wxWindow::AddMethods(v8::Handle<v8::FunctionTemplate> target) {
  wxNode_wxEvtHandler::AddMethods(target);
  NODE_SET_PROTOTYPE_METHOD(target, "close", _Close);
  NODE_SET_PROTOTYPE_METHOD(target, "destroy", _Destroy);
  NODE_SET_PROTOTYPE_METHOD(target, "destroyChildren", _DestroyChildren);
  NODE_SET_PROTOTYPE_METHOD(target, "isBeingDeleted", _IsBeingDeleted);
  NODE_SET_PROTOTYPE_METHOD(target, "setLabel", _SetLabel);
  NODE_SET_PROTOTYPE_METHOD(target, "getLabel", _GetLabel);
  NODE_SET_PROTOTYPE_METHOD(target, "setName", _SetName);
  NODE_SET_PROTOTYPE_METHOD(target, "getName", _GetName);
  NODE_SET_PROTOTYPE_METHOD(target, "setWindowVariant", _SetWindowVariant);
  NODE_SET_PROTOTYPE_METHOD(target, "getWindowVariant", _GetWindowVariant);
  NODE_SET_PROTOTYPE_METHOD(target, "getLayoutDirection", _GetLayoutDirection);
  NODE_SET_PROTOTYPE_METHOD(target, "setLayoutDirection", _SetLayoutDirection);
  NODE_SET_PROTOTYPE_METHOD(target, "adjustForLayoutDirection", _AdjustForLayoutDirection);
  NODE_SET_PROTOTYPE_METHOD(target, "setId", _SetId);
  NODE_SET_PROTOTYPE_METHOD(target, "getId", _GetId);
  NODE_SET_PROTOTYPE_METHOD(target, "newControlId", _NewControlId);
  NODE_SET_PROTOTYPE_METHOD(target, "unreserveControlId", _UnreserveControlId);
  NODE_SET_PROTOTYPE_METHOD(target, "setSize", _SetSize);
  NODE_SET_PROTOTYPE_METHOD(target, "move", _Move);
  NODE_SET_PROTOTYPE_METHOD(target, "setPosition", _SetPosition);
  NODE_SET_PROTOTYPE_METHOD(target, "raise", _Raise);
  NODE_SET_PROTOTYPE_METHOD(target, "lower", _Lower);
  NODE_SET_PROTOTYPE_METHOD(target, "setClientSize", _SetClientSize);
  NODE_SET_PROTOTYPE_METHOD(target, "getPosition", _GetPosition);
  NODE_SET_PROTOTYPE_METHOD(target, "getScreenPosition", _GetScreenPosition);
  NODE_SET_PROTOTYPE_METHOD(target, "getSize", _GetSize);
  NODE_SET_PROTOTYPE_METHOD(target, "getClientSize", _GetClientSize);
  NODE_SET_PROTOTYPE_METHOD(target, "getRect", _GetRect);
  NODE_SET_PROTOTYPE_METHOD(target, "getScreenRect", _GetScreenRect);
  NODE_SET_PROTOTYPE_METHOD(target, "getClientAreaOrigin", _GetClientAreaOrigin);
  NODE_SET_PROTOTYPE_METHOD(target, "getClientRect", _GetClientRect);
  NODE_SET_PROTOTYPE_METHOD(target, "clientToWindowSize", _ClientToWindowSize);
  NODE_SET_PROTOTYPE_METHOD(target, "windowToClientSize", _WindowToClientSize);
  NODE_SET_PROTOTYPE_METHOD(target, "getBestSize", _GetBestSize);
  NODE_SET_PROTOTYPE_METHOD(target, "setScrollHelper", _SetScrollHelper);
  NODE_SET_PROTOTYPE_METHOD(target, "getScrollHelper", _GetScrollHelper);
  NODE_SET_PROTOTYPE_METHOD(target, "invalidateBestSize", _InvalidateBestSize);
  NODE_SET_PROTOTYPE_METHOD(target, "cacheBestSize", _CacheBestSize);
  NODE_SET_PROTOTYPE_METHOD(target, "getEffectiveMinSize", _GetEffectiveMinSize);
  NODE_SET_PROTOTYPE_METHOD(target, "setInitialSize", _SetInitialSize);
  NODE_SET_PROTOTYPE_METHOD(target, "centre", _Centre);
  NODE_SET_PROTOTYPE_METHOD(target, "center", _Center);
  NODE_SET_PROTOTYPE_METHOD(target, "centreOnParent", _CentreOnParent);
  NODE_SET_PROTOTYPE_METHOD(target, "centerOnParent", _CenterOnParent);
  NODE_SET_PROTOTYPE_METHOD(target, "fit", _Fit);
  NODE_SET_PROTOTYPE_METHOD(target, "fitInside", _FitInside);
  NODE_SET_PROTOTYPE_METHOD(target, "setSizeHints", _SetSizeHints);
  NODE_SET_PROTOTYPE_METHOD(target, "setMinSize", _SetMinSize);
  NODE_SET_PROTOTYPE_METHOD(target, "setMaxSize", _SetMaxSize);
  NODE_SET_PROTOTYPE_METHOD(target, "setMinClientSize", _SetMinClientSize);
  NODE_SET_PROTOTYPE_METHOD(target, "setMaxClientSize", _SetMaxClientSize);
  NODE_SET_PROTOTYPE_METHOD(target, "getMinSize", _GetMinSize);
  NODE_SET_PROTOTYPE_METHOD(target, "getMaxSize", _GetMaxSize);
  NODE_SET_PROTOTYPE_METHOD(target, "getMinClientSize", _GetMinClientSize);
  NODE_SET_PROTOTYPE_METHOD(target, "getMaxClientSize", _GetMaxClientSize);
  NODE_SET_PROTOTYPE_METHOD(target, "getMinWidth", _GetMinWidth);
  NODE_SET_PROTOTYPE_METHOD(target, "getMinHeight", _GetMinHeight);
  NODE_SET_PROTOTYPE_METHOD(target, "getMaxWidth", _GetMaxWidth);
  NODE_SET_PROTOTYPE_METHOD(target, "getMaxHeight", _GetMaxHeight);
  NODE_SET_PROTOTYPE_METHOD(target, "setVirtualSize", _SetVirtualSize);
  NODE_SET_PROTOTYPE_METHOD(target, "getVirtualSize", _GetVirtualSize);
  NODE_SET_PROTOTYPE_METHOD(target, "doSetVirtualSize", _DoSetVirtualSize);
  NODE_SET_PROTOTYPE_METHOD(target, "doGetVirtualSize", _DoGetVirtualSize);
  NODE_SET_PROTOTYPE_METHOD(target, "getBestVirtualSize", _GetBestVirtualSize);
  NODE_SET_PROTOTYPE_METHOD(target, "getWindowBorderSize", _GetWindowBorderSize);
  NODE_SET_PROTOTYPE_METHOD(target, "informFirstDirection", _InformFirstDirection);
  NODE_SET_PROTOTYPE_METHOD(target, "sendSizeEvent", _SendSizeEvent);
  NODE_SET_PROTOTYPE_METHOD(target, "sendSizeEventToParent", _SendSizeEventToParent);
  NODE_SET_PROTOTYPE_METHOD(target, "postSizeEvent", _PostSizeEvent);
  NODE_SET_PROTOTYPE_METHOD(target, "postSizeEventToParent", _PostSizeEventToParent);
  NODE_SET_PROTOTYPE_METHOD(target, "show", _Show);
  NODE_SET_PROTOTYPE_METHOD(target, "hide", _Hide);
  NODE_SET_PROTOTYPE_METHOD(target, "showWithEffect", _ShowWithEffect);
  NODE_SET_PROTOTYPE_METHOD(target, "hideWithEffect", _HideWithEffect);
  NODE_SET_PROTOTYPE_METHOD(target, "enable", _Enable);
  NODE_SET_PROTOTYPE_METHOD(target, "disable", _Disable);
  NODE_SET_PROTOTYPE_METHOD(target, "isShown", _IsShown);
  NODE_SET_PROTOTYPE_METHOD(target, "isEnabled", _IsEnabled);
  NODE_SET_PROTOTYPE_METHOD(target, "isThisEnabled", _IsThisEnabled);
  NODE_SET_PROTOTYPE_METHOD(target, "isShownOnScreen", _IsShownOnScreen);
  NODE_SET_PROTOTYPE_METHOD(target, "setWindowStyleFlag", _SetWindowStyleFlag);
  NODE_SET_PROTOTYPE_METHOD(target, "getWindowStyleFlag", _GetWindowStyleFlag);
  NODE_SET_PROTOTYPE_METHOD(target, "setWindowStyle", _SetWindowStyle);
  NODE_SET_PROTOTYPE_METHOD(target, "getWindowStyle", _GetWindowStyle);
  NODE_SET_PROTOTYPE_METHOD(target, "hasFlag", _HasFlag);
  NODE_SET_PROTOTYPE_METHOD(target, "isRetained", _IsRetained);
  NODE_SET_PROTOTYPE_METHOD(target, "toggleWindowStyle", _ToggleWindowStyle);
  NODE_SET_PROTOTYPE_METHOD(target, "setExtraStyle", _SetExtraStyle);
  NODE_SET_PROTOTYPE_METHOD(target, "getExtraStyle", _GetExtraStyle);
  NODE_SET_PROTOTYPE_METHOD(target, "hasExtraStyle", _HasExtraStyle);
  NODE_SET_PROTOTYPE_METHOD(target, "makeModal", _MakeModal);
  NODE_SET_PROTOTYPE_METHOD(target, "setThemeEnabled", _SetThemeEnabled);
  NODE_SET_PROTOTYPE_METHOD(target, "getThemeEnabled", _GetThemeEnabled);
  NODE_SET_PROTOTYPE_METHOD(target, "setFocus", _SetFocus);
  NODE_SET_PROTOTYPE_METHOD(target, "setFocusFromKbd", _SetFocusFromKbd);
  NODE_SET_PROTOTYPE_METHOD(target, "findFocus", _FindFocus);
  NODE_SET_PROTOTYPE_METHOD(target, "doFindFocus", _DoFindFocus);
  NODE_SET_PROTOTYPE_METHOD(target, "hasFocus", _HasFocus);
  NODE_SET_PROTOTYPE_METHOD(target, "acceptsFocus", _AcceptsFocus);
  NODE_SET_PROTOTYPE_METHOD(target, "acceptsFocusRecursively", _AcceptsFocusRecursively);
  NODE_SET_PROTOTYPE_METHOD(target, "acceptsFocusFromKeyboard", _AcceptsFocusFromKeyboard);
  NODE_SET_PROTOTYPE_METHOD(target, "canBeFocused", _CanBeFocused);
  NODE_SET_PROTOTYPE_METHOD(target, "isFocusable", _IsFocusable);
  NODE_SET_PROTOTYPE_METHOD(target, "canAcceptFocus", _CanAcceptFocus);
  NODE_SET_PROTOTYPE_METHOD(target, "canAcceptFocusFromKeyboard", _CanAcceptFocusFromKeyboard);
  NODE_SET_PROTOTYPE_METHOD(target, "setCanFocus", _SetCanFocus);
  NODE_SET_PROTOTYPE_METHOD(target, "navigateIn", _NavigateIn);
  NODE_SET_PROTOTYPE_METHOD(target, "navigate", _Navigate);
  NODE_SET_PROTOTYPE_METHOD(target, "handleAsNavigationKey", _HandleAsNavigationKey);
  NODE_SET_PROTOTYPE_METHOD(target, "moveBeforeInTabOrder", _MoveBeforeInTabOrder);
  NODE_SET_PROTOTYPE_METHOD(target, "moveAfterInTabOrder", _MoveAfterInTabOrder);
  NODE_SET_PROTOTYPE_METHOD(target, "getChildren", _GetChildren);
  NODE_SET_PROTOTYPE_METHOD(target, "getWindowChildren", _GetWindowChildren);
  NODE_SET_PROTOTYPE_METHOD(target, "getPrevSibling", _GetPrevSibling);
  NODE_SET_PROTOTYPE_METHOD(target, "getNextSibling", _GetNextSibling);
  NODE_SET_PROTOTYPE_METHOD(target, "getParent", _GetParent);
  NODE_SET_PROTOTYPE_METHOD(target, "getGrandParent", _GetGrandParent);
  NODE_SET_PROTOTYPE_METHOD(target, "isTopLevel", _IsTopLevel);
  NODE_SET_PROTOTYPE_METHOD(target, "setParent", _SetParent);
  NODE_SET_PROTOTYPE_METHOD(target, "reparent", _Reparent);
  NODE_SET_PROTOTYPE_METHOD(target, "addChild", _AddChild);
  NODE_SET_PROTOTYPE_METHOD(target, "removeChild", _RemoveChild);
  NODE_SET_PROTOTYPE_METHOD(target, "isClientAreaChild", _IsClientAreaChild);
  NODE_SET_PROTOTYPE_METHOD(target, "findWindow", _FindWindow);
  NODE_SET_PROTOTYPE_METHOD(target, "findWindowById", _FindWindowById);
  NODE_SET_PROTOTYPE_METHOD(target, "findWindowByName", _FindWindowByName);
  NODE_SET_PROTOTYPE_METHOD(target, "findWindowByLabel", _FindWindowByLabel);
  NODE_SET_PROTOTYPE_METHOD(target, "getEventHandler", _GetEventHandler);
  NODE_SET_PROTOTYPE_METHOD(target, "setEventHandler", _SetEventHandler);
  NODE_SET_PROTOTYPE_METHOD(target, "pushEventHandler", _PushEventHandler);
  NODE_SET_PROTOTYPE_METHOD(target, "popEventHandler", _PopEventHandler);
  NODE_SET_PROTOTYPE_METHOD(target, "removeEventHandler", _RemoveEventHandler);
  NODE_SET_PROTOTYPE_METHOD(target, "processWindowEvent", _ProcessWindowEvent);
  NODE_SET_PROTOTYPE_METHOD(target, "processWindowEventLocally", _ProcessWindowEventLocally);
  NODE_SET_PROTOTYPE_METHOD(target, "handleWindowEvent", _HandleWindowEvent);
  NODE_SET_PROTOTYPE_METHOD(target, "setNextHandler", _SetNextHandler);
  NODE_SET_PROTOTYPE_METHOD(target, "setPreviousHandler", _SetPreviousHandler);
  NODE_SET_PROTOTYPE_METHOD(target, "setValidator", _SetValidator);
  NODE_SET_PROTOTYPE_METHOD(target, "getValidator", _GetValidator);
  NODE_SET_PROTOTYPE_METHOD(target, "validate", _Validate);
  NODE_SET_PROTOTYPE_METHOD(target, "transferDataToWindow", _TransferDataToWindow);
  NODE_SET_PROTOTYPE_METHOD(target, "transferDataFromWindow", _TransferDataFromWindow);
  NODE_SET_PROTOTYPE_METHOD(target, "initDialog", _InitDialog);
  NODE_SET_PROTOTYPE_METHOD(target, "setAcceleratorTable", _SetAcceleratorTable);
  NODE_SET_PROTOTYPE_METHOD(target, "getAcceleratorTable", _GetAcceleratorTable);
  NODE_SET_PROTOTYPE_METHOD(target, "convertPixelsToDialog", _ConvertPixelsToDialog);
  NODE_SET_PROTOTYPE_METHOD(target, "convertDialogToPixels", _ConvertDialogToPixels);
  NODE_SET_PROTOTYPE_METHOD(target, "warpPointer", _WarpPointer);
  NODE_SET_PROTOTYPE_METHOD(target, "captureMouse", _CaptureMouse);
  NODE_SET_PROTOTYPE_METHOD(target, "releaseMouse", _ReleaseMouse);
  NODE_SET_PROTOTYPE_METHOD(target, "getCapture", _GetCapture);
  NODE_SET_PROTOTYPE_METHOD(target, "hasCapture", _HasCapture);
  NODE_SET_PROTOTYPE_METHOD(target, "refresh", _Refresh);
  NODE_SET_PROTOTYPE_METHOD(target, "refreshRect", _RefreshRect);
  NODE_SET_PROTOTYPE_METHOD(target, "update", _Update);
  NODE_SET_PROTOTYPE_METHOD(target, "clearBackground", _ClearBackground);
  NODE_SET_PROTOTYPE_METHOD(target, "freeze", _Freeze);
  NODE_SET_PROTOTYPE_METHOD(target, "thaw", _Thaw);
  NODE_SET_PROTOTYPE_METHOD(target, "isFrozen", _IsFrozen);
  NODE_SET_PROTOTYPE_METHOD(target, "prepareDC", _PrepareDC);
  NODE_SET_PROTOTYPE_METHOD(target, "isDoubleBuffered", _IsDoubleBuffered);
  NODE_SET_PROTOTYPE_METHOD(target, "getUpdateRegion", _GetUpdateRegion);
  NODE_SET_PROTOTYPE_METHOD(target, "getUpdateClientRect", _GetUpdateClientRect);
  NODE_SET_PROTOTYPE_METHOD(target, "doIsExposed", _DoIsExposed);
  NODE_SET_PROTOTYPE_METHOD(target, "isExposed", _IsExposed);
  NODE_SET_PROTOTYPE_METHOD(target, "getDefaultAttributes", _GetDefaultAttributes);
  NODE_SET_PROTOTYPE_METHOD(target, "getClassDefaultAttributes", _GetClassDefaultAttributes);
  NODE_SET_PROTOTYPE_METHOD(target, "setBackgroundColour", _SetBackgroundColour);
  NODE_SET_PROTOTYPE_METHOD(target, "setOwnBackgroundColour", _SetOwnBackgroundColour);
  NODE_SET_PROTOTYPE_METHOD(target, "getBackgroundColour", _GetBackgroundColour);
  NODE_SET_PROTOTYPE_METHOD(target, "inheritsBackgroundColour", _InheritsBackgroundColour);
  NODE_SET_PROTOTYPE_METHOD(target, "useBgCol", _UseBgCol);
  NODE_SET_PROTOTYPE_METHOD(target, "setForegroundColour", _SetForegroundColour);
  NODE_SET_PROTOTYPE_METHOD(target, "setOwnForegroundColour", _SetOwnForegroundColour);
  NODE_SET_PROTOTYPE_METHOD(target, "getForegroundColour", _GetForegroundColour);
  NODE_SET_PROTOTYPE_METHOD(target, "setBackgroundStyle", _SetBackgroundStyle);
  NODE_SET_PROTOTYPE_METHOD(target, "getBackgroundStyle", _GetBackgroundStyle);
  NODE_SET_PROTOTYPE_METHOD(target, "hasTransparentBackground", _HasTransparentBackground);
  NODE_SET_PROTOTYPE_METHOD(target, "setFont", _SetFont);
  NODE_SET_PROTOTYPE_METHOD(target, "setOwnFont", _SetOwnFont);
  NODE_SET_PROTOTYPE_METHOD(target, "getFont", _GetFont);
  NODE_SET_PROTOTYPE_METHOD(target, "setCursor", _SetCursor);
  NODE_SET_PROTOTYPE_METHOD(target, "getCursor", _GetCursor);
  NODE_SET_PROTOTYPE_METHOD(target, "setCaret", _SetCaret);
  NODE_SET_PROTOTYPE_METHOD(target, "getCaret", _GetCaret);
  NODE_SET_PROTOTYPE_METHOD(target, "getCharHeight", _GetCharHeight);
  NODE_SET_PROTOTYPE_METHOD(target, "getCharWidth", _GetCharWidth);
  NODE_SET_PROTOTYPE_METHOD(target, "getTextExtent", _GetTextExtent);
  NODE_SET_PROTOTYPE_METHOD(target, "clientToScreen", _ClientToScreen);
  NODE_SET_PROTOTYPE_METHOD(target, "screenToClient", _ScreenToClient);
  NODE_SET_PROTOTYPE_METHOD(target, "hitTest", _HitTest);
  NODE_SET_PROTOTYPE_METHOD(target, "getBorder", _GetBorder);
  NODE_SET_PROTOTYPE_METHOD(target, "updateWindowUI", _UpdateWindowUI);
  NODE_SET_PROTOTYPE_METHOD(target, "doUpdateWindowUI", _DoUpdateWindowUI);
  NODE_SET_PROTOTYPE_METHOD(target, "popupMenu", _PopupMenu);
  NODE_SET_PROTOTYPE_METHOD(target, "getPopupMenuSelectionFromUser", _GetPopupMenuSelectionFromUser);
  NODE_SET_PROTOTYPE_METHOD(target, "hasMultiplePages", _HasMultiplePages);
  NODE_SET_PROTOTYPE_METHOD(target, "canScroll", _CanScroll);
  NODE_SET_PROTOTYPE_METHOD(target, "hasScrollbar", _HasScrollbar);
  NODE_SET_PROTOTYPE_METHOD(target, "setScrollbar", _SetScrollbar);
  NODE_SET_PROTOTYPE_METHOD(target, "setScrollPos", _SetScrollPos);
  NODE_SET_PROTOTYPE_METHOD(target, "getScrollPos", _GetScrollPos);
  NODE_SET_PROTOTYPE_METHOD(target, "getScrollThumb", _GetScrollThumb);
  NODE_SET_PROTOTYPE_METHOD(target, "getScrollRange", _GetScrollRange);
  NODE_SET_PROTOTYPE_METHOD(target, "scrollWindow", _ScrollWindow);
  NODE_SET_PROTOTYPE_METHOD(target, "scrollLines", _ScrollLines);
  NODE_SET_PROTOTYPE_METHOD(target, "scrollPages", _ScrollPages);
  NODE_SET_PROTOTYPE_METHOD(target, "lineUp", _LineUp);
  NODE_SET_PROTOTYPE_METHOD(target, "lineDown", _LineDown);
  NODE_SET_PROTOTYPE_METHOD(target, "pageUp", _PageUp);
  NODE_SET_PROTOTYPE_METHOD(target, "pageDown", _PageDown);
  NODE_SET_PROTOTYPE_METHOD(target, "alwaysShowScrollbars", _AlwaysShowScrollbars);
  NODE_SET_PROTOTYPE_METHOD(target, "isScrollbarAlwaysShown", _IsScrollbarAlwaysShown);
  NODE_SET_PROTOTYPE_METHOD(target, "setHelpText", _SetHelpText);
  NODE_SET_PROTOTYPE_METHOD(target, "getHelpText", _GetHelpText);
  NODE_SET_PROTOTYPE_METHOD(target, "setToolTip", _SetToolTip);
  NODE_SET_PROTOTYPE_METHOD(target, "unsetToolTip", _UnsetToolTip);
  NODE_SET_PROTOTYPE_METHOD(target, "getToolTip", _GetToolTip);
  NODE_SET_PROTOTYPE_METHOD(target, "getToolTipText", _GetToolTipText);
  NODE_SET_PROTOTYPE_METHOD(target, "copyToolTip", _CopyToolTip);
  NODE_SET_PROTOTYPE_METHOD(target, "setDropTarget", _SetDropTarget);
  NODE_SET_PROTOTYPE_METHOD(target, "getDropTarget", _GetDropTarget);
  NODE_SET_PROTOTYPE_METHOD(target, "dragAcceptFiles", _DragAcceptFiles);
  NODE_SET_PROTOTYPE_METHOD(target, "setConstraints", _SetConstraints);
  NODE_SET_PROTOTYPE_METHOD(target, "getConstraints", _GetConstraints);
  NODE_SET_PROTOTYPE_METHOD(target, "unsetConstraints", _UnsetConstraints);
  NODE_SET_PROTOTYPE_METHOD(target, "getConstraintsInvolvedIn", _GetConstraintsInvolvedIn);
  NODE_SET_PROTOTYPE_METHOD(target, "addConstraintReference", _AddConstraintReference);
  NODE_SET_PROTOTYPE_METHOD(target, "removeConstraintReference", _RemoveConstraintReference);
  NODE_SET_PROTOTYPE_METHOD(target, "deleteRelatedConstraints", _DeleteRelatedConstraints);
  NODE_SET_PROTOTYPE_METHOD(target, "resetConstraints", _ResetConstraints);
  NODE_SET_PROTOTYPE_METHOD(target, "setConstraintSizes", _SetConstraintSizes);
  NODE_SET_PROTOTYPE_METHOD(target, "layoutPhase1", _LayoutPhase1);
  NODE_SET_PROTOTYPE_METHOD(target, "layoutPhase2", _LayoutPhase2);
  NODE_SET_PROTOTYPE_METHOD(target, "doPhase", _DoPhase);
  NODE_SET_PROTOTYPE_METHOD(target, "setSizeConstraint", _SetSizeConstraint);
  NODE_SET_PROTOTYPE_METHOD(target, "moveConstraint", _MoveConstraint);
  NODE_SET_PROTOTYPE_METHOD(target, "getSizeConstraint", _GetSizeConstraint);
  NODE_SET_PROTOTYPE_METHOD(target, "getClientSizeConstraint", _GetClientSizeConstraint);
  NODE_SET_PROTOTYPE_METHOD(target, "getPositionConstraint", _GetPositionConstraint);
  NODE_SET_PROTOTYPE_METHOD(target, "setAutoLayout", _SetAutoLayout);
  NODE_SET_PROTOTYPE_METHOD(target, "getAutoLayout", _GetAutoLayout);
  NODE_SET_PROTOTYPE_METHOD(target, "layout", _Layout);
  NODE_SET_PROTOTYPE_METHOD(target, "setSizer", _SetSizer);
  NODE_SET_PROTOTYPE_METHOD(target, "setSizerAndFit", _SetSizerAndFit);
  NODE_SET_PROTOTYPE_METHOD(target, "getSizer", _GetSizer);
  NODE_SET_PROTOTYPE_METHOD(target, "setContainingSizer", _SetContainingSizer);
  NODE_SET_PROTOTYPE_METHOD(target, "getContainingSizer", _GetContainingSizer);
  NODE_SET_PROTOTYPE_METHOD(target, "setTransparent", _SetTransparent);
  NODE_SET_PROTOTYPE_METHOD(target, "canSetTransparent", _CanSetTransparent);
  NODE_SET_PROTOTYPE_METHOD(target, "onSysColourChanged", _OnSysColourChanged);
  NODE_SET_PROTOTYPE_METHOD(target, "onInitDialog", _OnInitDialog);
  NODE_SET_PROTOTYPE_METHOD(target, "onMiddleClick", _OnMiddleClick);
  NODE_SET_PROTOTYPE_METHOD(target, "onHelp", _OnHelp);
  NODE_SET_PROTOTYPE_METHOD(target, "onInternalIdle", _OnInternalIdle);
  NODE_SET_PROTOTYPE_METHOD(target, "sendIdleEvents", _SendIdleEvents);
  NODE_SET_PROTOTYPE_METHOD(target, "getHandle", _GetHandle);
  NODE_SET_PROTOTYPE_METHOD(target, "dissociateHandle", _DissociateHandle);
  NODE_SET_PROTOTYPE_METHOD(target, "getPalette", _GetPalette);
  NODE_SET_PROTOTYPE_METHOD(target, "setPalette", _SetPalette);
  NODE_SET_PROTOTYPE_METHOD(target, "hasCustomPalette", _HasCustomPalette);
  NODE_SET_PROTOTYPE_METHOD(target, "getAncestorWithCustomPalette", _GetAncestorWithCustomPalette);
  NODE_SET_PROTOTYPE_METHOD(target, "inheritAttributes", _InheritAttributes);
  NODE_SET_PROTOTYPE_METHOD(target, "shouldInheritColours", _ShouldInheritColours);
  NODE_SET_PROTOTYPE_METHOD(target, "canBeOutsideClientArea", _CanBeOutsideClientArea);
  NODE_SET_PROTOTYPE_METHOD(target, "canApplyThemeBorder", _CanApplyThemeBorder);
  NODE_SET_PROTOTYPE_METHOD(target, "getMainWindowOfCompositeControl", _GetMainWindowOfCompositeControl);
  NODE_SET_PROTOTYPE_METHOD(target, "isTopNavigationDomain", _IsTopNavigationDomain);
  NODE_SET_PROTOTYPE_METHOD(target, "getClassInfo", _GetClassInfo);
  
}

/*static*/ v8::Handle<v8::Value> wxNode_wxWindow::_init(const v8::Arguments& args) {
  v8::HandleScope scope;

  
  
  /*
   * id: _21131
   */
  if(args.Length() == 0) {
    

    wxNode_wxWindow *self = new wxNode_wxWindow();
    NodeExEvtHandlerImpl* evtHandler = dynamic_cast<NodeExEvtHandlerImpl*>(self);
    self->wrap(args.This(), self, evtHandler);
    return args.This();
  }
  
  /*
   * id: _21132
   */
  if(args.Length() == 6 && (args[0]->IsNull() || args[0]->IsObject()) && args[1]->IsNumber() && (args[2]->IsNull() || args[2]->IsObject()) && (args[3]->IsNull() || args[3]->IsObject()) && args[4]->IsNumber() && args[5]->IsString()) {
    wxNode_wxWindow* parent = args[0]->IsNull() ? NULL : wxNodeObject::unwrap<wxNode_wxWindow>(args[0]->ToObject()); /* type: _993 * */
    int id = (int)args[1]->ToInt32()->Value(); /* type: _8633  */
    wxNode_wxPoint* pos = args[2]->IsNull() ? NULL : wxNodeObject::unwrap<wxNode_wxPoint>(args[2]->ToObject()); /* type: _20412  */
    wxNode_wxSize* size = args[3]->IsNull() ? NULL : wxNodeObject::unwrap<wxNode_wxSize>(args[3]->ToObject()); /* type: _20522  */
    long int style = (long int)args[4]->ToInt32()->Value(); /* type: _586  */
    v8::String::AsciiValue name(args[5]->ToString()); /* type: _14808  */
    

    wxNode_wxWindow *self = new wxNode_wxWindow(parent, id, *pos, *size, style, *name);
    NodeExEvtHandlerImpl* evtHandler = dynamic_cast<NodeExEvtHandlerImpl*>(self);
    self->wrap(args.This(), self, evtHandler);
    return args.This();
  }
  
  /*
   * id: _21132
   */
  if(args.Length() == 5 && (args[0]->IsNull() || args[0]->IsObject()) && args[1]->IsNumber() && (args[2]->IsNull() || args[2]->IsObject()) && (args[3]->IsNull() || args[3]->IsObject()) && args[4]->IsNumber()) {
    wxNode_wxWindow* parent = args[0]->IsNull() ? NULL : wxNodeObject::unwrap<wxNode_wxWindow>(args[0]->ToObject()); /* type: _993 * */
    int id = (int)args[1]->ToInt32()->Value(); /* type: _8633  */
    wxNode_wxPoint* pos = args[2]->IsNull() ? NULL : wxNodeObject::unwrap<wxNode_wxPoint>(args[2]->ToObject()); /* type: _20412  */
    wxNode_wxSize* size = args[3]->IsNull() ? NULL : wxNodeObject::unwrap<wxNode_wxSize>(args[3]->ToObject()); /* type: _20522  */
    long int style = (long int)args[4]->ToInt32()->Value(); /* type: _586  */
    

    wxNode_wxWindow *self = new wxNode_wxWindow(parent, id, *pos, *size, style);
    NodeExEvtHandlerImpl* evtHandler = dynamic_cast<NodeExEvtHandlerImpl*>(self);
    self->wrap(args.This(), self, evtHandler);
    return args.This();
  }
  
  /*
   * id: _21132
   */
  if(args.Length() == 4 && (args[0]->IsNull() || args[0]->IsObject()) && args[1]->IsNumber() && (args[2]->IsNull() || args[2]->IsObject()) && (args[3]->IsNull() || args[3]->IsObject())) {
    wxNode_wxWindow* parent = args[0]->IsNull() ? NULL : wxNodeObject::unwrap<wxNode_wxWindow>(args[0]->ToObject()); /* type: _993 * */
    int id = (int)args[1]->ToInt32()->Value(); /* type: _8633  */
    wxNode_wxPoint* pos = args[2]->IsNull() ? NULL : wxNodeObject::unwrap<wxNode_wxPoint>(args[2]->ToObject()); /* type: _20412  */
    wxNode_wxSize* size = args[3]->IsNull() ? NULL : wxNodeObject::unwrap<wxNode_wxSize>(args[3]->ToObject()); /* type: _20522  */
    

    wxNode_wxWindow *self = new wxNode_wxWindow(parent, id, *pos, *size);
    NodeExEvtHandlerImpl* evtHandler = dynamic_cast<NodeExEvtHandlerImpl*>(self);
    self->wrap(args.This(), self, evtHandler);
    return args.This();
  }
  
  /*
   * id: _21132
   */
  if(args.Length() == 3 && (args[0]->IsNull() || args[0]->IsObject()) && args[1]->IsNumber() && (args[2]->IsNull() || args[2]->IsObject())) {
    wxNode_wxWindow* parent = args[0]->IsNull() ? NULL : wxNodeObject::unwrap<wxNode_wxWindow>(args[0]->ToObject()); /* type: _993 * */
    int id = (int)args[1]->ToInt32()->Value(); /* type: _8633  */
    wxNode_wxPoint* pos = args[2]->IsNull() ? NULL : wxNodeObject::unwrap<wxNode_wxPoint>(args[2]->ToObject()); /* type: _20412  */
    

    wxNode_wxWindow *self = new wxNode_wxWindow(parent, id, *pos);
    NodeExEvtHandlerImpl* evtHandler = dynamic_cast<NodeExEvtHandlerImpl*>(self);
    self->wrap(args.This(), self, evtHandler);
    return args.This();
  }
  
  /*
   * id: _21132
   */
  if(args.Length() == 2 && (args[0]->IsNull() || args[0]->IsObject()) && args[1]->IsNumber()) {
    wxNode_wxWindow* parent = args[0]->IsNull() ? NULL : wxNodeObject::unwrap<wxNode_wxWindow>(args[0]->ToObject()); /* type: _993 * */
    int id = (int)args[1]->ToInt32()->Value(); /* type: _8633  */
    

    wxNode_wxWindow *self = new wxNode_wxWindow(parent, id);
    NodeExEvtHandlerImpl* evtHandler = dynamic_cast<NodeExEvtHandlerImpl*>(self);
    self->wrap(args.This(), self, evtHandler);
    return args.This();
  }
  
  

  std::ostringstream errStr;
  errStr << "Could not find matching constructor for arguments (class name: wxWindow).\n";                           \
  errStr << "  arg count: " << args.Length() << "\n";
  for(int i = 0; i < args.Length(); i++) {
    v8::String::AsciiValue argStr(args[i]);
    errStr << "  arg[" << i << "]: " << *argStr << "\n";
  }
  return v8::ThrowException(v8::Exception::TypeError(v8::String::New(errStr.str().c_str())));
}


/*static*/ v8::Handle<v8::Value> wxNode_wxWindow::_Close(const v8::Arguments& args) {
  v8::HandleScope scope;
  wxNode_wxWindow* self = unwrap<wxNode_wxWindow>(args.This());

  
  /*
   * id: _42830
   */
  if(args.Length() == 1 && args[0]->IsBoolean()) {
    bool force = args[0]->ToBoolean()->Value(); /* type: _14666  */
    

    self->Close(force);

    return v8::Undefined();
  }
  
  /*
   * id: _42830
   */
  if(args.Length() == 0) {
    

    self->Close();

    return v8::Undefined();
  }
  

  std::ostringstream errStr;
  errStr << "Could not find matching method for arguments (method name: Close).\n";                           \
  errStr << "  arg count: " << args.Length() << "\n";
  for(int i = 0; i < args.Length(); i++) {
    v8::String::AsciiValue argStr(args[i]);
    errStr << "  arg[" << i << "]: " << *argStr << "\n";
  }
  return v8::ThrowException(v8::Exception::TypeError(v8::String::New(errStr.str().c_str())));
}

/*static*/ v8::Handle<v8::Value> wxNode_wxWindow::_Destroy(const v8::Arguments& args) {
  v8::HandleScope scope;
  wxNode_wxWindow* self = unwrap<wxNode_wxWindow>(args.This());

  
  /*
   * id: _42831
   */
  if(args.Length() == 0) {
    

    self->Destroy();

    return v8::Undefined();
  }
  

  std::ostringstream errStr;
  errStr << "Could not find matching method for arguments (method name: Destroy).\n";                           \
  errStr << "  arg count: " << args.Length() << "\n";
  for(int i = 0; i < args.Length(); i++) {
    v8::String::AsciiValue argStr(args[i]);
    errStr << "  arg[" << i << "]: " << *argStr << "\n";
  }
  return v8::ThrowException(v8::Exception::TypeError(v8::String::New(errStr.str().c_str())));
}

/*static*/ v8::Handle<v8::Value> wxNode_wxWindow::_DestroyChildren(const v8::Arguments& args) {
  v8::HandleScope scope;
  wxNode_wxWindow* self = unwrap<wxNode_wxWindow>(args.This());

  
  /*
   * id: _42832
   */
  if(args.Length() == 0) {
    

    self->DestroyChildren();

    return v8::Undefined();
  }
  

  std::ostringstream errStr;
  errStr << "Could not find matching method for arguments (method name: DestroyChildren).\n";                           \
  errStr << "  arg count: " << args.Length() << "\n";
  for(int i = 0; i < args.Length(); i++) {
    v8::String::AsciiValue argStr(args[i]);
    errStr << "  arg[" << i << "]: " << *argStr << "\n";
  }
  return v8::ThrowException(v8::Exception::TypeError(v8::String::New(errStr.str().c_str())));
}

/*static*/ v8::Handle<v8::Value> wxNode_wxWindow::_IsBeingDeleted(const v8::Arguments& args) {
  v8::HandleScope scope;
  wxNode_wxWindow* self = unwrap<wxNode_wxWindow>(args.This());

  
  /*
   * id: _42833
   */
  if(args.Length() == 0) {
    

    self->IsBeingDeleted();

    return v8::Undefined();
  }
  

  std::ostringstream errStr;
  errStr << "Could not find matching method for arguments (method name: IsBeingDeleted).\n";                           \
  errStr << "  arg count: " << args.Length() << "\n";
  for(int i = 0; i < args.Length(); i++) {
    v8::String::AsciiValue argStr(args[i]);
    errStr << "  arg[" << i << "]: " << *argStr << "\n";
  }
  return v8::ThrowException(v8::Exception::TypeError(v8::String::New(errStr.str().c_str())));
}

/*static*/ v8::Handle<v8::Value> wxNode_wxWindow::_SetLabel(const v8::Arguments& args) {
  v8::HandleScope scope;
  wxNode_wxWindow* self = unwrap<wxNode_wxWindow>(args.This());

  
  /*
   * id: _42834
   */
  if(args.Length() == 1 && args[0]->IsString()) {
    v8::String::AsciiValue label(args[0]->ToString()); /* type: _14808  */
    

    self->SetLabel(*label);

    return v8::Undefined();
  }
  

  std::ostringstream errStr;
  errStr << "Could not find matching method for arguments (method name: SetLabel).\n";                           \
  errStr << "  arg count: " << args.Length() << "\n";
  for(int i = 0; i < args.Length(); i++) {
    v8::String::AsciiValue argStr(args[i]);
    errStr << "  arg[" << i << "]: " << *argStr << "\n";
  }
  return v8::ThrowException(v8::Exception::TypeError(v8::String::New(errStr.str().c_str())));
}

/*static*/ v8::Handle<v8::Value> wxNode_wxWindow::_GetLabel(const v8::Arguments& args) {
  v8::HandleScope scope;
  wxNode_wxWindow* self = unwrap<wxNode_wxWindow>(args.This());

  
  /*
   * id: _42835
   */
  if(args.Length() == 0) {
    

    self->GetLabel();

    return v8::Undefined();
  }
  

  std::ostringstream errStr;
  errStr << "Could not find matching method for arguments (method name: GetLabel).\n";                           \
  errStr << "  arg count: " << args.Length() << "\n";
  for(int i = 0; i < args.Length(); i++) {
    v8::String::AsciiValue argStr(args[i]);
    errStr << "  arg[" << i << "]: " << *argStr << "\n";
  }
  return v8::ThrowException(v8::Exception::TypeError(v8::String::New(errStr.str().c_str())));
}

/*static*/ v8::Handle<v8::Value> wxNode_wxWindow::_SetName(const v8::Arguments& args) {
  v8::HandleScope scope;
  wxNode_wxWindow* self = unwrap<wxNode_wxWindow>(args.This());

  
  /*
   * id: _42836
   */
  if(args.Length() == 1 && args[0]->IsString()) {
    v8::String::AsciiValue name(args[0]->ToString()); /* type: _14808  */
    

    self->SetName(*name);

    return v8::Undefined();
  }
  

  std::ostringstream errStr;
  errStr << "Could not find matching method for arguments (method name: SetName).\n";                           \
  errStr << "  arg count: " << args.Length() << "\n";
  for(int i = 0; i < args.Length(); i++) {
    v8::String::AsciiValue argStr(args[i]);
    errStr << "  arg[" << i << "]: " << *argStr << "\n";
  }
  return v8::ThrowException(v8::Exception::TypeError(v8::String::New(errStr.str().c_str())));
}

/*static*/ v8::Handle<v8::Value> wxNode_wxWindow::_GetName(const v8::Arguments& args) {
  v8::HandleScope scope;
  wxNode_wxWindow* self = unwrap<wxNode_wxWindow>(args.This());

  
  /*
   * id: _42837
   */
  if(args.Length() == 0) {
    

    self->GetName();

    return v8::Undefined();
  }
  

  std::ostringstream errStr;
  errStr << "Could not find matching method for arguments (method name: GetName).\n";                           \
  errStr << "  arg count: " << args.Length() << "\n";
  for(int i = 0; i < args.Length(); i++) {
    v8::String::AsciiValue argStr(args[i]);
    errStr << "  arg[" << i << "]: " << *argStr << "\n";
  }
  return v8::ThrowException(v8::Exception::TypeError(v8::String::New(errStr.str().c_str())));
}

/*static*/ v8::Handle<v8::Value> wxNode_wxWindow::_SetWindowVariant(const v8::Arguments& args) {
  v8::HandleScope scope;
  wxNode_wxWindow* self = unwrap<wxNode_wxWindow>(args.This());

  
  /*
   * id: _42838
   */
  if(args.Length() == 1 && args[0]->IsNumber()) {
    wxWindowVariant variant; /* type: _10472  */
    

    self->SetWindowVariant(variant);

    return v8::Undefined();
  }
  

  std::ostringstream errStr;
  errStr << "Could not find matching method for arguments (method name: SetWindowVariant).\n";                           \
  errStr << "  arg count: " << args.Length() << "\n";
  for(int i = 0; i < args.Length(); i++) {
    v8::String::AsciiValue argStr(args[i]);
    errStr << "  arg[" << i << "]: " << *argStr << "\n";
  }
  return v8::ThrowException(v8::Exception::TypeError(v8::String::New(errStr.str().c_str())));
}

/*static*/ v8::Handle<v8::Value> wxNode_wxWindow::_GetWindowVariant(const v8::Arguments& args) {
  v8::HandleScope scope;
  wxNode_wxWindow* self = unwrap<wxNode_wxWindow>(args.This());

  
  /*
   * id: _42839
   */
  if(args.Length() == 0) {
    

    self->GetWindowVariant();

    return v8::Undefined();
  }
  

  std::ostringstream errStr;
  errStr << "Could not find matching method for arguments (method name: GetWindowVariant).\n";                           \
  errStr << "  arg count: " << args.Length() << "\n";
  for(int i = 0; i < args.Length(); i++) {
    v8::String::AsciiValue argStr(args[i]);
    errStr << "  arg[" << i << "]: " << *argStr << "\n";
  }
  return v8::ThrowException(v8::Exception::TypeError(v8::String::New(errStr.str().c_str())));
}

/*static*/ v8::Handle<v8::Value> wxNode_wxWindow::_GetLayoutDirection(const v8::Arguments& args) {
  v8::HandleScope scope;
  wxNode_wxWindow* self = unwrap<wxNode_wxWindow>(args.This());

  
  /*
   * id: _42840
   */
  if(args.Length() == 0) {
    

    self->GetLayoutDirection();

    return v8::Undefined();
  }
  

  std::ostringstream errStr;
  errStr << "Could not find matching method for arguments (method name: GetLayoutDirection).\n";                           \
  errStr << "  arg count: " << args.Length() << "\n";
  for(int i = 0; i < args.Length(); i++) {
    v8::String::AsciiValue argStr(args[i]);
    errStr << "  arg[" << i << "]: " << *argStr << "\n";
  }
  return v8::ThrowException(v8::Exception::TypeError(v8::String::New(errStr.str().c_str())));
}

/*static*/ v8::Handle<v8::Value> wxNode_wxWindow::_SetLayoutDirection(const v8::Arguments& args) {
  v8::HandleScope scope;
  wxNode_wxWindow* self = unwrap<wxNode_wxWindow>(args.This());

  
  /*
   * id: _42841
   */
  if(args.Length() == 1 && args[0]->IsNumber()) {
    wxLayoutDirection arg0; /* type: _6334  */
    

    self->SetLayoutDirection(arg0);

    return v8::Undefined();
  }
  

  std::ostringstream errStr;
  errStr << "Could not find matching method for arguments (method name: SetLayoutDirection).\n";                           \
  errStr << "  arg count: " << args.Length() << "\n";
  for(int i = 0; i < args.Length(); i++) {
    v8::String::AsciiValue argStr(args[i]);
    errStr << "  arg[" << i << "]: " << *argStr << "\n";
  }
  return v8::ThrowException(v8::Exception::TypeError(v8::String::New(errStr.str().c_str())));
}

/*static*/ v8::Handle<v8::Value> wxNode_wxWindow::_AdjustForLayoutDirection(const v8::Arguments& args) {
  v8::HandleScope scope;
  wxNode_wxWindow* self = unwrap<wxNode_wxWindow>(args.This());

  
  /*
   * id: _42842
   */
  if(args.Length() == 3 && args[0]->IsNumber() && args[1]->IsNumber() && args[2]->IsNumber()) {
    int x = (int)args[0]->ToInt32()->Value(); /* type: _12095  */
    int width = (int)args[1]->ToInt32()->Value(); /* type: _12095  */
    int widthTotal = (int)args[2]->ToInt32()->Value(); /* type: _12095  */
    

    self->AdjustForLayoutDirection(x, width, widthTotal);

    return v8::Undefined();
  }
  

  std::ostringstream errStr;
  errStr << "Could not find matching method for arguments (method name: AdjustForLayoutDirection).\n";                           \
  errStr << "  arg count: " << args.Length() << "\n";
  for(int i = 0; i < args.Length(); i++) {
    v8::String::AsciiValue argStr(args[i]);
    errStr << "  arg[" << i << "]: " << *argStr << "\n";
  }
  return v8::ThrowException(v8::Exception::TypeError(v8::String::New(errStr.str().c_str())));
}

/*static*/ v8::Handle<v8::Value> wxNode_wxWindow::_SetId(const v8::Arguments& args) {
  v8::HandleScope scope;
  wxNode_wxWindow* self = unwrap<wxNode_wxWindow>(args.This());

  
  /*
   * id: _42843
   */
  if(args.Length() == 1 && args[0]->IsNumber()) {
    int winid = (int)args[0]->ToInt32()->Value(); /* type: _8633  */
    

    self->SetId(winid);

    return v8::Undefined();
  }
  

  std::ostringstream errStr;
  errStr << "Could not find matching method for arguments (method name: SetId).\n";                           \
  errStr << "  arg count: " << args.Length() << "\n";
  for(int i = 0; i < args.Length(); i++) {
    v8::String::AsciiValue argStr(args[i]);
    errStr << "  arg[" << i << "]: " << *argStr << "\n";
  }
  return v8::ThrowException(v8::Exception::TypeError(v8::String::New(errStr.str().c_str())));
}

/*static*/ v8::Handle<v8::Value> wxNode_wxWindow::_GetId(const v8::Arguments& args) {
  v8::HandleScope scope;
  wxNode_wxWindow* self = unwrap<wxNode_wxWindow>(args.This());

  
  /*
   * id: _42844
   */
  if(args.Length() == 0) {
    

    self->GetId();

    return v8::Undefined();
  }
  

  std::ostringstream errStr;
  errStr << "Could not find matching method for arguments (method name: GetId).\n";                           \
  errStr << "  arg count: " << args.Length() << "\n";
  for(int i = 0; i < args.Length(); i++) {
    v8::String::AsciiValue argStr(args[i]);
    errStr << "  arg[" << i << "]: " << *argStr << "\n";
  }
  return v8::ThrowException(v8::Exception::TypeError(v8::String::New(errStr.str().c_str())));
}

/*static*/ v8::Handle<v8::Value> wxNode_wxWindow::_NewControlId(const v8::Arguments& args) {
  v8::HandleScope scope;
  wxNode_wxWindow* self = unwrap<wxNode_wxWindow>(args.This());

  
  /*
   * id: _42845
   */
  if(args.Length() == 1 && args[0]->IsNumber()) {
    int count = (int)args[0]->ToInt32()->Value(); /* type: _162  */
    

    self->NewControlId(count);

    return v8::Undefined();
  }
  
  /*
   * id: _42845
   */
  if(args.Length() == 0) {
    

    self->NewControlId();

    return v8::Undefined();
  }
  

  std::ostringstream errStr;
  errStr << "Could not find matching method for arguments (method name: NewControlId).\n";                           \
  errStr << "  arg count: " << args.Length() << "\n";
  for(int i = 0; i < args.Length(); i++) {
    v8::String::AsciiValue argStr(args[i]);
    errStr << "  arg[" << i << "]: " << *argStr << "\n";
  }
  return v8::ThrowException(v8::Exception::TypeError(v8::String::New(errStr.str().c_str())));
}

/*static*/ v8::Handle<v8::Value> wxNode_wxWindow::_UnreserveControlId(const v8::Arguments& args) {
  v8::HandleScope scope;
  wxNode_wxWindow* self = unwrap<wxNode_wxWindow>(args.This());

  
  /*
   * id: _42846
   */
  if(args.Length() == 2 && args[0]->IsNumber() && args[1]->IsNumber()) {
    int id = (int)args[0]->ToInt32()->Value(); /* type: _8633  */
    int count = (int)args[1]->ToInt32()->Value(); /* type: _162  */
    

    self->UnreserveControlId(id, count);

    return v8::Undefined();
  }
  
  /*
   * id: _42846
   */
  if(args.Length() == 1 && args[0]->IsNumber()) {
    int id = (int)args[0]->ToInt32()->Value(); /* type: _8633  */
    

    self->UnreserveControlId(id);

    return v8::Undefined();
  }
  

  std::ostringstream errStr;
  errStr << "Could not find matching method for arguments (method name: UnreserveControlId).\n";                           \
  errStr << "  arg count: " << args.Length() << "\n";
  for(int i = 0; i < args.Length(); i++) {
    v8::String::AsciiValue argStr(args[i]);
    errStr << "  arg[" << i << "]: " << *argStr << "\n";
  }
  return v8::ThrowException(v8::Exception::TypeError(v8::String::New(errStr.str().c_str())));
}

/*static*/ v8::Handle<v8::Value> wxNode_wxWindow::_SetSize(const v8::Arguments& args) {
  v8::HandleScope scope;
  wxNode_wxWindow* self = unwrap<wxNode_wxWindow>(args.This());

  
  /*
   * id: _42847
   */
  if(args.Length() == 5 && args[0]->IsNumber() && args[1]->IsNumber() && args[2]->IsNumber() && args[3]->IsNumber() && args[4]->IsNumber()) {
    int x = (int)args[0]->ToInt32()->Value(); /* type: _162  */
    int y = (int)args[1]->ToInt32()->Value(); /* type: _162  */
    int width = (int)args[2]->ToInt32()->Value(); /* type: _162  */
    int height = (int)args[3]->ToInt32()->Value(); /* type: _162  */
    int sizeFlags = (int)args[4]->ToInt32()->Value(); /* type: _162  */
    

    self->SetSize(x, y, width, height, sizeFlags);

    return v8::Undefined();
  }
  
  /*
   * id: _42847
   */
  if(args.Length() == 4 && args[0]->IsNumber() && args[1]->IsNumber() && args[2]->IsNumber() && args[3]->IsNumber()) {
    int x = (int)args[0]->ToInt32()->Value(); /* type: _162  */
    int y = (int)args[1]->ToInt32()->Value(); /* type: _162  */
    int width = (int)args[2]->ToInt32()->Value(); /* type: _162  */
    int height = (int)args[3]->ToInt32()->Value(); /* type: _162  */
    

    self->SetSize(x, y, width, height);

    return v8::Undefined();
  }
  
  /*
   * id: _42848
   */
  if(args.Length() == 2 && args[0]->IsNumber() && args[1]->IsNumber()) {
    int width = (int)args[0]->ToInt32()->Value(); /* type: _162  */
    int height = (int)args[1]->ToInt32()->Value(); /* type: _162  */
    

    self->SetSize(width, height);

    return v8::Undefined();
  }
  
  /*
   * id: _42849
   */
  if(args.Length() == 1 && (args[0]->IsNull() || args[0]->IsObject())) {
    wxNode_wxSize* size = args[0]->IsNull() ? NULL : wxNodeObject::unwrap<wxNode_wxSize>(args[0]->ToObject()); /* type: _20522  */
    

    self->SetSize(*size);

    return v8::Undefined();
  }
  
  /*
   * id: _42850
   */
  if(args.Length() == 2 && (args[0]->IsNull() || args[0]->IsObject()) && args[1]->IsNumber()) {
    wxNode_wxRect* rect = args[0]->IsNull() ? NULL : wxNodeObject::unwrap<wxNode_wxRect>(args[0]->ToObject()); /* type: _24778  */
    int sizeFlags = (int)args[1]->ToInt32()->Value(); /* type: _162  */
    

    self->SetSize(*rect, sizeFlags);

    return v8::Undefined();
  }
  
  /*
   * id: _42850
   */
  if(args.Length() == 1 && (args[0]->IsNull() || args[0]->IsObject())) {
    wxNode_wxRect* rect = args[0]->IsNull() ? NULL : wxNodeObject::unwrap<wxNode_wxRect>(args[0]->ToObject()); /* type: _24778  */
    

    self->SetSize(*rect);

    return v8::Undefined();
  }
  

  std::ostringstream errStr;
  errStr << "Could not find matching method for arguments (method name: SetSize).\n";                           \
  errStr << "  arg count: " << args.Length() << "\n";
  for(int i = 0; i < args.Length(); i++) {
    v8::String::AsciiValue argStr(args[i]);
    errStr << "  arg[" << i << "]: " << *argStr << "\n";
  }
  return v8::ThrowException(v8::Exception::TypeError(v8::String::New(errStr.str().c_str())));
}

/*static*/ v8::Handle<v8::Value> wxNode_wxWindow::_Move(const v8::Arguments& args) {
  v8::HandleScope scope;
  wxNode_wxWindow* self = unwrap<wxNode_wxWindow>(args.This());

  
  /*
   * id: _42851
   */
  if(args.Length() == 3 && args[0]->IsNumber() && args[1]->IsNumber() && args[2]->IsNumber()) {
    int x = (int)args[0]->ToInt32()->Value(); /* type: _162  */
    int y = (int)args[1]->ToInt32()->Value(); /* type: _162  */
    int flags = (int)args[2]->ToInt32()->Value(); /* type: _162  */
    

    self->Move(x, y, flags);

    return v8::Undefined();
  }
  
  /*
   * id: _42851
   */
  if(args.Length() == 2 && args[0]->IsNumber() && args[1]->IsNumber()) {
    int x = (int)args[0]->ToInt32()->Value(); /* type: _162  */
    int y = (int)args[1]->ToInt32()->Value(); /* type: _162  */
    

    self->Move(x, y);

    return v8::Undefined();
  }
  
  /*
   * id: _42852
   */
  if(args.Length() == 2 && (args[0]->IsNull() || args[0]->IsObject()) && args[1]->IsNumber()) {
    wxNode_wxPoint* pt = args[0]->IsNull() ? NULL : wxNodeObject::unwrap<wxNode_wxPoint>(args[0]->ToObject()); /* type: _20412  */
    int flags = (int)args[1]->ToInt32()->Value(); /* type: _162  */
    

    self->Move(*pt, flags);

    return v8::Undefined();
  }
  
  /*
   * id: _42852
   */
  if(args.Length() == 1 && (args[0]->IsNull() || args[0]->IsObject())) {
    wxNode_wxPoint* pt = args[0]->IsNull() ? NULL : wxNodeObject::unwrap<wxNode_wxPoint>(args[0]->ToObject()); /* type: _20412  */
    

    self->Move(*pt);

    return v8::Undefined();
  }
  

  std::ostringstream errStr;
  errStr << "Could not find matching method for arguments (method name: Move).\n";                           \
  errStr << "  arg count: " << args.Length() << "\n";
  for(int i = 0; i < args.Length(); i++) {
    v8::String::AsciiValue argStr(args[i]);
    errStr << "  arg[" << i << "]: " << *argStr << "\n";
  }
  return v8::ThrowException(v8::Exception::TypeError(v8::String::New(errStr.str().c_str())));
}

/*static*/ v8::Handle<v8::Value> wxNode_wxWindow::_SetPosition(const v8::Arguments& args) {
  v8::HandleScope scope;
  wxNode_wxWindow* self = unwrap<wxNode_wxWindow>(args.This());

  
  /*
   * id: _42853
   */
  if(args.Length() == 1 && (args[0]->IsNull() || args[0]->IsObject())) {
    wxNode_wxPoint* pt = args[0]->IsNull() ? NULL : wxNodeObject::unwrap<wxNode_wxPoint>(args[0]->ToObject()); /* type: _20412  */
    

    self->SetPosition(*pt);

    return v8::Undefined();
  }
  

  std::ostringstream errStr;
  errStr << "Could not find matching method for arguments (method name: SetPosition).\n";                           \
  errStr << "  arg count: " << args.Length() << "\n";
  for(int i = 0; i < args.Length(); i++) {
    v8::String::AsciiValue argStr(args[i]);
    errStr << "  arg[" << i << "]: " << *argStr << "\n";
  }
  return v8::ThrowException(v8::Exception::TypeError(v8::String::New(errStr.str().c_str())));
}

/*static*/ v8::Handle<v8::Value> wxNode_wxWindow::_Raise(const v8::Arguments& args) {
  v8::HandleScope scope;
  wxNode_wxWindow* self = unwrap<wxNode_wxWindow>(args.This());

  
  /*
   * id: _42854
   */
  if(args.Length() == 0) {
    

    self->Raise();

    return v8::Undefined();
  }
  

  std::ostringstream errStr;
  errStr << "Could not find matching method for arguments (method name: Raise).\n";                           \
  errStr << "  arg count: " << args.Length() << "\n";
  for(int i = 0; i < args.Length(); i++) {
    v8::String::AsciiValue argStr(args[i]);
    errStr << "  arg[" << i << "]: " << *argStr << "\n";
  }
  return v8::ThrowException(v8::Exception::TypeError(v8::String::New(errStr.str().c_str())));
}

/*static*/ v8::Handle<v8::Value> wxNode_wxWindow::_Lower(const v8::Arguments& args) {
  v8::HandleScope scope;
  wxNode_wxWindow* self = unwrap<wxNode_wxWindow>(args.This());

  
  /*
   * id: _42855
   */
  if(args.Length() == 0) {
    

    self->Lower();

    return v8::Undefined();
  }
  

  std::ostringstream errStr;
  errStr << "Could not find matching method for arguments (method name: Lower).\n";                           \
  errStr << "  arg count: " << args.Length() << "\n";
  for(int i = 0; i < args.Length(); i++) {
    v8::String::AsciiValue argStr(args[i]);
    errStr << "  arg[" << i << "]: " << *argStr << "\n";
  }
  return v8::ThrowException(v8::Exception::TypeError(v8::String::New(errStr.str().c_str())));
}

/*static*/ v8::Handle<v8::Value> wxNode_wxWindow::_SetClientSize(const v8::Arguments& args) {
  v8::HandleScope scope;
  wxNode_wxWindow* self = unwrap<wxNode_wxWindow>(args.This());

  
  /*
   * id: _42856
   */
  if(args.Length() == 2 && args[0]->IsNumber() && args[1]->IsNumber()) {
    int width = (int)args[0]->ToInt32()->Value(); /* type: _162  */
    int height = (int)args[1]->ToInt32()->Value(); /* type: _162  */
    

    self->SetClientSize(width, height);

    return v8::Undefined();
  }
  
  /*
   * id: _42857
   */
  if(args.Length() == 1 && (args[0]->IsNull() || args[0]->IsObject())) {
    wxNode_wxSize* size = args[0]->IsNull() ? NULL : wxNodeObject::unwrap<wxNode_wxSize>(args[0]->ToObject()); /* type: _20522  */
    

    self->SetClientSize(*size);

    return v8::Undefined();
  }
  
  /*
   * id: _42858
   */
  if(args.Length() == 1 && (args[0]->IsNull() || args[0]->IsObject())) {
    wxNode_wxRect* rect = args[0]->IsNull() ? NULL : wxNodeObject::unwrap<wxNode_wxRect>(args[0]->ToObject()); /* type: _24778  */
    

    self->SetClientSize(*rect);

    return v8::Undefined();
  }
  

  std::ostringstream errStr;
  errStr << "Could not find matching method for arguments (method name: SetClientSize).\n";                           \
  errStr << "  arg count: " << args.Length() << "\n";
  for(int i = 0; i < args.Length(); i++) {
    v8::String::AsciiValue argStr(args[i]);
    errStr << "  arg[" << i << "]: " << *argStr << "\n";
  }
  return v8::ThrowException(v8::Exception::TypeError(v8::String::New(errStr.str().c_str())));
}

/*static*/ v8::Handle<v8::Value> wxNode_wxWindow::_GetPosition(const v8::Arguments& args) {
  v8::HandleScope scope;
  wxNode_wxWindow* self = unwrap<wxNode_wxWindow>(args.This());

  
  /*
   * id: _42859
   */
  if(args.Length() == 2 && false && false) {
    int x; /* type: _16500 * */
    int y; /* type: _16500 * */
    

    self->GetPosition(&x, &y);

    return v8::Undefined();
  }
  
  /*
   * id: _42860
   */
  if(args.Length() == 0) {
    

    self->GetPosition();

    return v8::Undefined();
  }
  

  std::ostringstream errStr;
  errStr << "Could not find matching method for arguments (method name: GetPosition).\n";                           \
  errStr << "  arg count: " << args.Length() << "\n";
  for(int i = 0; i < args.Length(); i++) {
    v8::String::AsciiValue argStr(args[i]);
    errStr << "  arg[" << i << "]: " << *argStr << "\n";
  }
  return v8::ThrowException(v8::Exception::TypeError(v8::String::New(errStr.str().c_str())));
}

/*static*/ v8::Handle<v8::Value> wxNode_wxWindow::_GetScreenPosition(const v8::Arguments& args) {
  v8::HandleScope scope;
  wxNode_wxWindow* self = unwrap<wxNode_wxWindow>(args.This());

  
  /*
   * id: _42861
   */
  if(args.Length() == 2 && false && false) {
    int x; /* type: _16500 * */
    int y; /* type: _16500 * */
    

    self->GetScreenPosition(&x, &y);

    return v8::Undefined();
  }
  
  /*
   * id: _42862
   */
  if(args.Length() == 0) {
    

    self->GetScreenPosition();

    return v8::Undefined();
  }
  

  std::ostringstream errStr;
  errStr << "Could not find matching method for arguments (method name: GetScreenPosition).\n";                           \
  errStr << "  arg count: " << args.Length() << "\n";
  for(int i = 0; i < args.Length(); i++) {
    v8::String::AsciiValue argStr(args[i]);
    errStr << "  arg[" << i << "]: " << *argStr << "\n";
  }
  return v8::ThrowException(v8::Exception::TypeError(v8::String::New(errStr.str().c_str())));
}

/*static*/ v8::Handle<v8::Value> wxNode_wxWindow::_GetSize(const v8::Arguments& args) {
  v8::HandleScope scope;
  wxNode_wxWindow* self = unwrap<wxNode_wxWindow>(args.This());

  
  /*
   * id: _42863
   */
  if(args.Length() == 2 && false && false) {
    int w; /* type: _16500 * */
    int h; /* type: _16500 * */
    

    self->GetSize(&w, &h);

    return v8::Undefined();
  }
  
  /*
   * id: _42864
   */
  if(args.Length() == 0) {
    

    self->GetSize();

    return v8::Undefined();
  }
  

  std::ostringstream errStr;
  errStr << "Could not find matching method for arguments (method name: GetSize).\n";                           \
  errStr << "  arg count: " << args.Length() << "\n";
  for(int i = 0; i < args.Length(); i++) {
    v8::String::AsciiValue argStr(args[i]);
    errStr << "  arg[" << i << "]: " << *argStr << "\n";
  }
  return v8::ThrowException(v8::Exception::TypeError(v8::String::New(errStr.str().c_str())));
}

/*static*/ v8::Handle<v8::Value> wxNode_wxWindow::_GetClientSize(const v8::Arguments& args) {
  v8::HandleScope scope;
  wxNode_wxWindow* self = unwrap<wxNode_wxWindow>(args.This());

  
  /*
   * id: _42865
   */
  if(args.Length() == 2 && false && false) {
    int w; /* type: _16500 * */
    int h; /* type: _16500 * */
    

    self->GetClientSize(&w, &h);

    return v8::Undefined();
  }
  
  /*
   * id: _42866
   */
  if(args.Length() == 0) {
    

    self->GetClientSize();

    return v8::Undefined();
  }
  

  std::ostringstream errStr;
  errStr << "Could not find matching method for arguments (method name: GetClientSize).\n";                           \
  errStr << "  arg count: " << args.Length() << "\n";
  for(int i = 0; i < args.Length(); i++) {
    v8::String::AsciiValue argStr(args[i]);
    errStr << "  arg[" << i << "]: " << *argStr << "\n";
  }
  return v8::ThrowException(v8::Exception::TypeError(v8::String::New(errStr.str().c_str())));
}

/*static*/ v8::Handle<v8::Value> wxNode_wxWindow::_GetRect(const v8::Arguments& args) {
  v8::HandleScope scope;
  wxNode_wxWindow* self = unwrap<wxNode_wxWindow>(args.This());

  
  /*
   * id: _42867
   */
  if(args.Length() == 0) {
    

    self->GetRect();

    return v8::Undefined();
  }
  

  std::ostringstream errStr;
  errStr << "Could not find matching method for arguments (method name: GetRect).\n";                           \
  errStr << "  arg count: " << args.Length() << "\n";
  for(int i = 0; i < args.Length(); i++) {
    v8::String::AsciiValue argStr(args[i]);
    errStr << "  arg[" << i << "]: " << *argStr << "\n";
  }
  return v8::ThrowException(v8::Exception::TypeError(v8::String::New(errStr.str().c_str())));
}

/*static*/ v8::Handle<v8::Value> wxNode_wxWindow::_GetScreenRect(const v8::Arguments& args) {
  v8::HandleScope scope;
  wxNode_wxWindow* self = unwrap<wxNode_wxWindow>(args.This());

  
  /*
   * id: _42868
   */
  if(args.Length() == 0) {
    

    self->GetScreenRect();

    return v8::Undefined();
  }
  

  std::ostringstream errStr;
  errStr << "Could not find matching method for arguments (method name: GetScreenRect).\n";                           \
  errStr << "  arg count: " << args.Length() << "\n";
  for(int i = 0; i < args.Length(); i++) {
    v8::String::AsciiValue argStr(args[i]);
    errStr << "  arg[" << i << "]: " << *argStr << "\n";
  }
  return v8::ThrowException(v8::Exception::TypeError(v8::String::New(errStr.str().c_str())));
}

/*static*/ v8::Handle<v8::Value> wxNode_wxWindow::_GetClientAreaOrigin(const v8::Arguments& args) {
  v8::HandleScope scope;
  wxNode_wxWindow* self = unwrap<wxNode_wxWindow>(args.This());

  
  /*
   * id: _42869
   */
  if(args.Length() == 0) {
    

    self->GetClientAreaOrigin();

    return v8::Undefined();
  }
  

  std::ostringstream errStr;
  errStr << "Could not find matching method for arguments (method name: GetClientAreaOrigin).\n";                           \
  errStr << "  arg count: " << args.Length() << "\n";
  for(int i = 0; i < args.Length(); i++) {
    v8::String::AsciiValue argStr(args[i]);
    errStr << "  arg[" << i << "]: " << *argStr << "\n";
  }
  return v8::ThrowException(v8::Exception::TypeError(v8::String::New(errStr.str().c_str())));
}

/*static*/ v8::Handle<v8::Value> wxNode_wxWindow::_GetClientRect(const v8::Arguments& args) {
  v8::HandleScope scope;
  wxNode_wxWindow* self = unwrap<wxNode_wxWindow>(args.This());

  
  /*
   * id: _42870
   */
  if(args.Length() == 0) {
    

    self->GetClientRect();

    return v8::Undefined();
  }
  

  std::ostringstream errStr;
  errStr << "Could not find matching method for arguments (method name: GetClientRect).\n";                           \
  errStr << "  arg count: " << args.Length() << "\n";
  for(int i = 0; i < args.Length(); i++) {
    v8::String::AsciiValue argStr(args[i]);
    errStr << "  arg[" << i << "]: " << *argStr << "\n";
  }
  return v8::ThrowException(v8::Exception::TypeError(v8::String::New(errStr.str().c_str())));
}

/*static*/ v8::Handle<v8::Value> wxNode_wxWindow::_ClientToWindowSize(const v8::Arguments& args) {
  v8::HandleScope scope;
  wxNode_wxWindow* self = unwrap<wxNode_wxWindow>(args.This());

  
  /*
   * id: _42871
   */
  if(args.Length() == 1 && (args[0]->IsNull() || args[0]->IsObject())) {
    wxNode_wxSize* size = args[0]->IsNull() ? NULL : wxNodeObject::unwrap<wxNode_wxSize>(args[0]->ToObject()); /* type: _20522  */
    

    self->ClientToWindowSize(*size);

    return v8::Undefined();
  }
  

  std::ostringstream errStr;
  errStr << "Could not find matching method for arguments (method name: ClientToWindowSize).\n";                           \
  errStr << "  arg count: " << args.Length() << "\n";
  for(int i = 0; i < args.Length(); i++) {
    v8::String::AsciiValue argStr(args[i]);
    errStr << "  arg[" << i << "]: " << *argStr << "\n";
  }
  return v8::ThrowException(v8::Exception::TypeError(v8::String::New(errStr.str().c_str())));
}

/*static*/ v8::Handle<v8::Value> wxNode_wxWindow::_WindowToClientSize(const v8::Arguments& args) {
  v8::HandleScope scope;
  wxNode_wxWindow* self = unwrap<wxNode_wxWindow>(args.This());

  
  /*
   * id: _42872
   */
  if(args.Length() == 1 && (args[0]->IsNull() || args[0]->IsObject())) {
    wxNode_wxSize* size = args[0]->IsNull() ? NULL : wxNodeObject::unwrap<wxNode_wxSize>(args[0]->ToObject()); /* type: _20522  */
    

    self->WindowToClientSize(*size);

    return v8::Undefined();
  }
  

  std::ostringstream errStr;
  errStr << "Could not find matching method for arguments (method name: WindowToClientSize).\n";                           \
  errStr << "  arg count: " << args.Length() << "\n";
  for(int i = 0; i < args.Length(); i++) {
    v8::String::AsciiValue argStr(args[i]);
    errStr << "  arg[" << i << "]: " << *argStr << "\n";
  }
  return v8::ThrowException(v8::Exception::TypeError(v8::String::New(errStr.str().c_str())));
}

/*static*/ v8::Handle<v8::Value> wxNode_wxWindow::_GetBestSize(const v8::Arguments& args) {
  v8::HandleScope scope;
  wxNode_wxWindow* self = unwrap<wxNode_wxWindow>(args.This());

  
  /*
   * id: _42873
   */
  if(args.Length() == 0) {
    

    self->GetBestSize();

    return v8::Undefined();
  }
  
  /*
   * id: _42874
   */
  if(args.Length() == 2 && false && false) {
    int w; /* type: _16500 * */
    int h; /* type: _16500 * */
    

    self->GetBestSize(&w, &h);

    return v8::Undefined();
  }
  

  std::ostringstream errStr;
  errStr << "Could not find matching method for arguments (method name: GetBestSize).\n";                           \
  errStr << "  arg count: " << args.Length() << "\n";
  for(int i = 0; i < args.Length(); i++) {
    v8::String::AsciiValue argStr(args[i]);
    errStr << "  arg[" << i << "]: " << *argStr << "\n";
  }
  return v8::ThrowException(v8::Exception::TypeError(v8::String::New(errStr.str().c_str())));
}

/*static*/ v8::Handle<v8::Value> wxNode_wxWindow::_SetScrollHelper(const v8::Arguments& args) {
  v8::HandleScope scope;
  wxNode_wxWindow* self = unwrap<wxNode_wxWindow>(args.This());

  
  /*
   * id: _42875
   */
  if(args.Length() == 1 && (args[0]->IsNull() || args[0]->IsObject())) {
    wxNode_wxScrollHelper* sh = args[0]->IsNull() ? NULL : wxNodeObject::unwrap<wxNode_wxScrollHelper>(args[0]->ToObject()); /* type: _65956 * */
    

    self->SetScrollHelper(sh);

    return v8::Undefined();
  }
  

  std::ostringstream errStr;
  errStr << "Could not find matching method for arguments (method name: SetScrollHelper).\n";                           \
  errStr << "  arg count: " << args.Length() << "\n";
  for(int i = 0; i < args.Length(); i++) {
    v8::String::AsciiValue argStr(args[i]);
    errStr << "  arg[" << i << "]: " << *argStr << "\n";
  }
  return v8::ThrowException(v8::Exception::TypeError(v8::String::New(errStr.str().c_str())));
}

/*static*/ v8::Handle<v8::Value> wxNode_wxWindow::_GetScrollHelper(const v8::Arguments& args) {
  v8::HandleScope scope;
  wxNode_wxWindow* self = unwrap<wxNode_wxWindow>(args.This());

  
  /*
   * id: _42876
   */
  if(args.Length() == 0) {
    

    self->GetScrollHelper();

    return v8::Undefined();
  }
  

  std::ostringstream errStr;
  errStr << "Could not find matching method for arguments (method name: GetScrollHelper).\n";                           \
  errStr << "  arg count: " << args.Length() << "\n";
  for(int i = 0; i < args.Length(); i++) {
    v8::String::AsciiValue argStr(args[i]);
    errStr << "  arg[" << i << "]: " << *argStr << "\n";
  }
  return v8::ThrowException(v8::Exception::TypeError(v8::String::New(errStr.str().c_str())));
}

/*static*/ v8::Handle<v8::Value> wxNode_wxWindow::_InvalidateBestSize(const v8::Arguments& args) {
  v8::HandleScope scope;
  wxNode_wxWindow* self = unwrap<wxNode_wxWindow>(args.This());

  
  /*
   * id: _42877
   */
  if(args.Length() == 0) {
    

    self->InvalidateBestSize();

    return v8::Undefined();
  }
  

  std::ostringstream errStr;
  errStr << "Could not find matching method for arguments (method name: InvalidateBestSize).\n";                           \
  errStr << "  arg count: " << args.Length() << "\n";
  for(int i = 0; i < args.Length(); i++) {
    v8::String::AsciiValue argStr(args[i]);
    errStr << "  arg[" << i << "]: " << *argStr << "\n";
  }
  return v8::ThrowException(v8::Exception::TypeError(v8::String::New(errStr.str().c_str())));
}

/*static*/ v8::Handle<v8::Value> wxNode_wxWindow::_CacheBestSize(const v8::Arguments& args) {
  v8::HandleScope scope;
  wxNode_wxWindow* self = unwrap<wxNode_wxWindow>(args.This());

  
  /*
   * id: _42878
   */
  if(args.Length() == 1 && (args[0]->IsNull() || args[0]->IsObject())) {
    wxNode_wxSize* size = args[0]->IsNull() ? NULL : wxNodeObject::unwrap<wxNode_wxSize>(args[0]->ToObject()); /* type: _20522  */
    

    self->CacheBestSize(*size);

    return v8::Undefined();
  }
  

  std::ostringstream errStr;
  errStr << "Could not find matching method for arguments (method name: CacheBestSize).\n";                           \
  errStr << "  arg count: " << args.Length() << "\n";
  for(int i = 0; i < args.Length(); i++) {
    v8::String::AsciiValue argStr(args[i]);
    errStr << "  arg[" << i << "]: " << *argStr << "\n";
  }
  return v8::ThrowException(v8::Exception::TypeError(v8::String::New(errStr.str().c_str())));
}

/*static*/ v8::Handle<v8::Value> wxNode_wxWindow::_GetEffectiveMinSize(const v8::Arguments& args) {
  v8::HandleScope scope;
  wxNode_wxWindow* self = unwrap<wxNode_wxWindow>(args.This());

  
  /*
   * id: _42879
   */
  if(args.Length() == 0) {
    

    self->GetEffectiveMinSize();

    return v8::Undefined();
  }
  

  std::ostringstream errStr;
  errStr << "Could not find matching method for arguments (method name: GetEffectiveMinSize).\n";                           \
  errStr << "  arg count: " << args.Length() << "\n";
  for(int i = 0; i < args.Length(); i++) {
    v8::String::AsciiValue argStr(args[i]);
    errStr << "  arg[" << i << "]: " << *argStr << "\n";
  }
  return v8::ThrowException(v8::Exception::TypeError(v8::String::New(errStr.str().c_str())));
}

/*static*/ v8::Handle<v8::Value> wxNode_wxWindow::_SetInitialSize(const v8::Arguments& args) {
  v8::HandleScope scope;
  wxNode_wxWindow* self = unwrap<wxNode_wxWindow>(args.This());

  
  /*
   * id: _42882
   */
  if(args.Length() == 1 && (args[0]->IsNull() || args[0]->IsObject())) {
    wxNode_wxSize* size = args[0]->IsNull() ? NULL : wxNodeObject::unwrap<wxNode_wxSize>(args[0]->ToObject()); /* type: _20522  */
    

    self->SetInitialSize(*size);

    return v8::Undefined();
  }
  
  /*
   * id: _42882
   */
  if(args.Length() == 0) {
    

    self->SetInitialSize();

    return v8::Undefined();
  }
  

  std::ostringstream errStr;
  errStr << "Could not find matching method for arguments (method name: SetInitialSize).\n";                           \
  errStr << "  arg count: " << args.Length() << "\n";
  for(int i = 0; i < args.Length(); i++) {
    v8::String::AsciiValue argStr(args[i]);
    errStr << "  arg[" << i << "]: " << *argStr << "\n";
  }
  return v8::ThrowException(v8::Exception::TypeError(v8::String::New(errStr.str().c_str())));
}

/*static*/ v8::Handle<v8::Value> wxNode_wxWindow::_Centre(const v8::Arguments& args) {
  v8::HandleScope scope;
  wxNode_wxWindow* self = unwrap<wxNode_wxWindow>(args.This());

  
  /*
   * id: _42884
   */
  if(args.Length() == 1 && args[0]->IsNumber()) {
    int dir = (int)args[0]->ToInt32()->Value(); /* type: _162  */
    

    self->Centre(dir);

    return v8::Undefined();
  }
  
  /*
   * id: _42884
   */
  if(args.Length() == 0) {
    

    self->Centre();

    return v8::Undefined();
  }
  

  std::ostringstream errStr;
  errStr << "Could not find matching method for arguments (method name: Centre).\n";                           \
  errStr << "  arg count: " << args.Length() << "\n";
  for(int i = 0; i < args.Length(); i++) {
    v8::String::AsciiValue argStr(args[i]);
    errStr << "  arg[" << i << "]: " << *argStr << "\n";
  }
  return v8::ThrowException(v8::Exception::TypeError(v8::String::New(errStr.str().c_str())));
}

/*static*/ v8::Handle<v8::Value> wxNode_wxWindow::_Center(const v8::Arguments& args) {
  v8::HandleScope scope;
  wxNode_wxWindow* self = unwrap<wxNode_wxWindow>(args.This());

  
  /*
   * id: _42885
   */
  if(args.Length() == 1 && args[0]->IsNumber()) {
    int dir = (int)args[0]->ToInt32()->Value(); /* type: _162  */
    

    self->Center(dir);

    return v8::Undefined();
  }
  
  /*
   * id: _42885
   */
  if(args.Length() == 0) {
    

    self->Center();

    return v8::Undefined();
  }
  

  std::ostringstream errStr;
  errStr << "Could not find matching method for arguments (method name: Center).\n";                           \
  errStr << "  arg count: " << args.Length() << "\n";
  for(int i = 0; i < args.Length(); i++) {
    v8::String::AsciiValue argStr(args[i]);
    errStr << "  arg[" << i << "]: " << *argStr << "\n";
  }
  return v8::ThrowException(v8::Exception::TypeError(v8::String::New(errStr.str().c_str())));
}

/*static*/ v8::Handle<v8::Value> wxNode_wxWindow::_CentreOnParent(const v8::Arguments& args) {
  v8::HandleScope scope;
  wxNode_wxWindow* self = unwrap<wxNode_wxWindow>(args.This());

  
  /*
   * id: _42886
   */
  if(args.Length() == 1 && args[0]->IsNumber()) {
    int dir = (int)args[0]->ToInt32()->Value(); /* type: _162  */
    

    self->CentreOnParent(dir);

    return v8::Undefined();
  }
  
  /*
   * id: _42886
   */
  if(args.Length() == 0) {
    

    self->CentreOnParent();

    return v8::Undefined();
  }
  

  std::ostringstream errStr;
  errStr << "Could not find matching method for arguments (method name: CentreOnParent).\n";                           \
  errStr << "  arg count: " << args.Length() << "\n";
  for(int i = 0; i < args.Length(); i++) {
    v8::String::AsciiValue argStr(args[i]);
    errStr << "  arg[" << i << "]: " << *argStr << "\n";
  }
  return v8::ThrowException(v8::Exception::TypeError(v8::String::New(errStr.str().c_str())));
}

/*static*/ v8::Handle<v8::Value> wxNode_wxWindow::_CenterOnParent(const v8::Arguments& args) {
  v8::HandleScope scope;
  wxNode_wxWindow* self = unwrap<wxNode_wxWindow>(args.This());

  
  /*
   * id: _42887
   */
  if(args.Length() == 1 && args[0]->IsNumber()) {
    int dir = (int)args[0]->ToInt32()->Value(); /* type: _162  */
    

    self->CenterOnParent(dir);

    return v8::Undefined();
  }
  
  /*
   * id: _42887
   */
  if(args.Length() == 0) {
    

    self->CenterOnParent();

    return v8::Undefined();
  }
  

  std::ostringstream errStr;
  errStr << "Could not find matching method for arguments (method name: CenterOnParent).\n";                           \
  errStr << "  arg count: " << args.Length() << "\n";
  for(int i = 0; i < args.Length(); i++) {
    v8::String::AsciiValue argStr(args[i]);
    errStr << "  arg[" << i << "]: " << *argStr << "\n";
  }
  return v8::ThrowException(v8::Exception::TypeError(v8::String::New(errStr.str().c_str())));
}

/*static*/ v8::Handle<v8::Value> wxNode_wxWindow::_Fit(const v8::Arguments& args) {
  v8::HandleScope scope;
  wxNode_wxWindow* self = unwrap<wxNode_wxWindow>(args.This());

  
  /*
   * id: _42888
   */
  if(args.Length() == 0) {
    

    self->Fit();

    return v8::Undefined();
  }
  

  std::ostringstream errStr;
  errStr << "Could not find matching method for arguments (method name: Fit).\n";                           \
  errStr << "  arg count: " << args.Length() << "\n";
  for(int i = 0; i < args.Length(); i++) {
    v8::String::AsciiValue argStr(args[i]);
    errStr << "  arg[" << i << "]: " << *argStr << "\n";
  }
  return v8::ThrowException(v8::Exception::TypeError(v8::String::New(errStr.str().c_str())));
}

/*static*/ v8::Handle<v8::Value> wxNode_wxWindow::_FitInside(const v8::Arguments& args) {
  v8::HandleScope scope;
  wxNode_wxWindow* self = unwrap<wxNode_wxWindow>(args.This());

  
  /*
   * id: _42889
   */
  if(args.Length() == 0) {
    

    self->FitInside();

    return v8::Undefined();
  }
  

  std::ostringstream errStr;
  errStr << "Could not find matching method for arguments (method name: FitInside).\n";                           \
  errStr << "  arg count: " << args.Length() << "\n";
  for(int i = 0; i < args.Length(); i++) {
    v8::String::AsciiValue argStr(args[i]);
    errStr << "  arg[" << i << "]: " << *argStr << "\n";
  }
  return v8::ThrowException(v8::Exception::TypeError(v8::String::New(errStr.str().c_str())));
}

/*static*/ v8::Handle<v8::Value> wxNode_wxWindow::_SetSizeHints(const v8::Arguments& args) {
  v8::HandleScope scope;
  wxNode_wxWindow* self = unwrap<wxNode_wxWindow>(args.This());

  
  /*
   * id: _42890
   */
  if(args.Length() == 6 && args[0]->IsNumber() && args[1]->IsNumber() && args[2]->IsNumber() && args[3]->IsNumber() && args[4]->IsNumber() && args[5]->IsNumber()) {
    int minW = (int)args[0]->ToInt32()->Value(); /* type: _162  */
    int minH = (int)args[1]->ToInt32()->Value(); /* type: _162  */
    int maxW = (int)args[2]->ToInt32()->Value(); /* type: _162  */
    int maxH = (int)args[3]->ToInt32()->Value(); /* type: _162  */
    int incW = (int)args[4]->ToInt32()->Value(); /* type: _162  */
    int incH = (int)args[5]->ToInt32()->Value(); /* type: _162  */
    

    self->SetSizeHints(minW, minH, maxW, maxH, incW, incH);

    return v8::Undefined();
  }
  
  /*
   * id: _42890
   */
  if(args.Length() == 5 && args[0]->IsNumber() && args[1]->IsNumber() && args[2]->IsNumber() && args[3]->IsNumber() && args[4]->IsNumber()) {
    int minW = (int)args[0]->ToInt32()->Value(); /* type: _162  */
    int minH = (int)args[1]->ToInt32()->Value(); /* type: _162  */
    int maxW = (int)args[2]->ToInt32()->Value(); /* type: _162  */
    int maxH = (int)args[3]->ToInt32()->Value(); /* type: _162  */
    int incW = (int)args[4]->ToInt32()->Value(); /* type: _162  */
    

    self->SetSizeHints(minW, minH, maxW, maxH, incW);

    return v8::Undefined();
  }
  
  /*
   * id: _42890
   */
  if(args.Length() == 4 && args[0]->IsNumber() && args[1]->IsNumber() && args[2]->IsNumber() && args[3]->IsNumber()) {
    int minW = (int)args[0]->ToInt32()->Value(); /* type: _162  */
    int minH = (int)args[1]->ToInt32()->Value(); /* type: _162  */
    int maxW = (int)args[2]->ToInt32()->Value(); /* type: _162  */
    int maxH = (int)args[3]->ToInt32()->Value(); /* type: _162  */
    

    self->SetSizeHints(minW, minH, maxW, maxH);

    return v8::Undefined();
  }
  
  /*
   * id: _42890
   */
  if(args.Length() == 3 && args[0]->IsNumber() && args[1]->IsNumber() && args[2]->IsNumber()) {
    int minW = (int)args[0]->ToInt32()->Value(); /* type: _162  */
    int minH = (int)args[1]->ToInt32()->Value(); /* type: _162  */
    int maxW = (int)args[2]->ToInt32()->Value(); /* type: _162  */
    

    self->SetSizeHints(minW, minH, maxW);

    return v8::Undefined();
  }
  
  /*
   * id: _42890
   */
  if(args.Length() == 2 && args[0]->IsNumber() && args[1]->IsNumber()) {
    int minW = (int)args[0]->ToInt32()->Value(); /* type: _162  */
    int minH = (int)args[1]->ToInt32()->Value(); /* type: _162  */
    

    self->SetSizeHints(minW, minH);

    return v8::Undefined();
  }
  
  /*
   * id: _42891
   */
  if(args.Length() == 3 && (args[0]->IsNull() || args[0]->IsObject()) && (args[1]->IsNull() || args[1]->IsObject()) && (args[2]->IsNull() || args[2]->IsObject())) {
    wxNode_wxSize* minSize = args[0]->IsNull() ? NULL : wxNodeObject::unwrap<wxNode_wxSize>(args[0]->ToObject()); /* type: _20522  */
    wxNode_wxSize* maxSize = args[1]->IsNull() ? NULL : wxNodeObject::unwrap<wxNode_wxSize>(args[1]->ToObject()); /* type: _20522  */
    wxNode_wxSize* incSize = args[2]->IsNull() ? NULL : wxNodeObject::unwrap<wxNode_wxSize>(args[2]->ToObject()); /* type: _20522  */
    

    self->SetSizeHints(*minSize, *maxSize, *incSize);

    return v8::Undefined();
  }
  
  /*
   * id: _42891
   */
  if(args.Length() == 2 && (args[0]->IsNull() || args[0]->IsObject()) && (args[1]->IsNull() || args[1]->IsObject())) {
    wxNode_wxSize* minSize = args[0]->IsNull() ? NULL : wxNodeObject::unwrap<wxNode_wxSize>(args[0]->ToObject()); /* type: _20522  */
    wxNode_wxSize* maxSize = args[1]->IsNull() ? NULL : wxNodeObject::unwrap<wxNode_wxSize>(args[1]->ToObject()); /* type: _20522  */
    

    self->SetSizeHints(*minSize, *maxSize);

    return v8::Undefined();
  }
  
  /*
   * id: _42891
   */
  if(args.Length() == 1 && (args[0]->IsNull() || args[0]->IsObject())) {
    wxNode_wxSize* minSize = args[0]->IsNull() ? NULL : wxNodeObject::unwrap<wxNode_wxSize>(args[0]->ToObject()); /* type: _20522  */
    

    self->SetSizeHints(*minSize);

    return v8::Undefined();
  }
  

  std::ostringstream errStr;
  errStr << "Could not find matching method for arguments (method name: SetSizeHints).\n";                           \
  errStr << "  arg count: " << args.Length() << "\n";
  for(int i = 0; i < args.Length(); i++) {
    v8::String::AsciiValue argStr(args[i]);
    errStr << "  arg[" << i << "]: " << *argStr << "\n";
  }
  return v8::ThrowException(v8::Exception::TypeError(v8::String::New(errStr.str().c_str())));
}

/*static*/ v8::Handle<v8::Value> wxNode_wxWindow::_SetMinSize(const v8::Arguments& args) {
  v8::HandleScope scope;
  wxNode_wxWindow* self = unwrap<wxNode_wxWindow>(args.This());

  
  /*
   * id: _42894
   */
  if(args.Length() == 1 && (args[0]->IsNull() || args[0]->IsObject())) {
    wxNode_wxSize* minSize = args[0]->IsNull() ? NULL : wxNodeObject::unwrap<wxNode_wxSize>(args[0]->ToObject()); /* type: _20522  */
    

    self->SetMinSize(*minSize);

    return v8::Undefined();
  }
  

  std::ostringstream errStr;
  errStr << "Could not find matching method for arguments (method name: SetMinSize).\n";                           \
  errStr << "  arg count: " << args.Length() << "\n";
  for(int i = 0; i < args.Length(); i++) {
    v8::String::AsciiValue argStr(args[i]);
    errStr << "  arg[" << i << "]: " << *argStr << "\n";
  }
  return v8::ThrowException(v8::Exception::TypeError(v8::String::New(errStr.str().c_str())));
}

/*static*/ v8::Handle<v8::Value> wxNode_wxWindow::_SetMaxSize(const v8::Arguments& args) {
  v8::HandleScope scope;
  wxNode_wxWindow* self = unwrap<wxNode_wxWindow>(args.This());

  
  /*
   * id: _42895
   */
  if(args.Length() == 1 && (args[0]->IsNull() || args[0]->IsObject())) {
    wxNode_wxSize* maxSize = args[0]->IsNull() ? NULL : wxNodeObject::unwrap<wxNode_wxSize>(args[0]->ToObject()); /* type: _20522  */
    

    self->SetMaxSize(*maxSize);

    return v8::Undefined();
  }
  

  std::ostringstream errStr;
  errStr << "Could not find matching method for arguments (method name: SetMaxSize).\n";                           \
  errStr << "  arg count: " << args.Length() << "\n";
  for(int i = 0; i < args.Length(); i++) {
    v8::String::AsciiValue argStr(args[i]);
    errStr << "  arg[" << i << "]: " << *argStr << "\n";
  }
  return v8::ThrowException(v8::Exception::TypeError(v8::String::New(errStr.str().c_str())));
}

/*static*/ v8::Handle<v8::Value> wxNode_wxWindow::_SetMinClientSize(const v8::Arguments& args) {
  v8::HandleScope scope;
  wxNode_wxWindow* self = unwrap<wxNode_wxWindow>(args.This());

  
  /*
   * id: _42896
   */
  if(args.Length() == 1 && (args[0]->IsNull() || args[0]->IsObject())) {
    wxNode_wxSize* size = args[0]->IsNull() ? NULL : wxNodeObject::unwrap<wxNode_wxSize>(args[0]->ToObject()); /* type: _20522  */
    

    self->SetMinClientSize(*size);

    return v8::Undefined();
  }
  

  std::ostringstream errStr;
  errStr << "Could not find matching method for arguments (method name: SetMinClientSize).\n";                           \
  errStr << "  arg count: " << args.Length() << "\n";
  for(int i = 0; i < args.Length(); i++) {
    v8::String::AsciiValue argStr(args[i]);
    errStr << "  arg[" << i << "]: " << *argStr << "\n";
  }
  return v8::ThrowException(v8::Exception::TypeError(v8::String::New(errStr.str().c_str())));
}

/*static*/ v8::Handle<v8::Value> wxNode_wxWindow::_SetMaxClientSize(const v8::Arguments& args) {
  v8::HandleScope scope;
  wxNode_wxWindow* self = unwrap<wxNode_wxWindow>(args.This());

  
  /*
   * id: _42897
   */
  if(args.Length() == 1 && (args[0]->IsNull() || args[0]->IsObject())) {
    wxNode_wxSize* size = args[0]->IsNull() ? NULL : wxNodeObject::unwrap<wxNode_wxSize>(args[0]->ToObject()); /* type: _20522  */
    

    self->SetMaxClientSize(*size);

    return v8::Undefined();
  }
  

  std::ostringstream errStr;
  errStr << "Could not find matching method for arguments (method name: SetMaxClientSize).\n";                           \
  errStr << "  arg count: " << args.Length() << "\n";
  for(int i = 0; i < args.Length(); i++) {
    v8::String::AsciiValue argStr(args[i]);
    errStr << "  arg[" << i << "]: " << *argStr << "\n";
  }
  return v8::ThrowException(v8::Exception::TypeError(v8::String::New(errStr.str().c_str())));
}

/*static*/ v8::Handle<v8::Value> wxNode_wxWindow::_GetMinSize(const v8::Arguments& args) {
  v8::HandleScope scope;
  wxNode_wxWindow* self = unwrap<wxNode_wxWindow>(args.This());

  
  /*
   * id: _42898
   */
  if(args.Length() == 0) {
    

    self->GetMinSize();

    return v8::Undefined();
  }
  

  std::ostringstream errStr;
  errStr << "Could not find matching method for arguments (method name: GetMinSize).\n";                           \
  errStr << "  arg count: " << args.Length() << "\n";
  for(int i = 0; i < args.Length(); i++) {
    v8::String::AsciiValue argStr(args[i]);
    errStr << "  arg[" << i << "]: " << *argStr << "\n";
  }
  return v8::ThrowException(v8::Exception::TypeError(v8::String::New(errStr.str().c_str())));
}

/*static*/ v8::Handle<v8::Value> wxNode_wxWindow::_GetMaxSize(const v8::Arguments& args) {
  v8::HandleScope scope;
  wxNode_wxWindow* self = unwrap<wxNode_wxWindow>(args.This());

  
  /*
   * id: _42899
   */
  if(args.Length() == 0) {
    

    self->GetMaxSize();

    return v8::Undefined();
  }
  

  std::ostringstream errStr;
  errStr << "Could not find matching method for arguments (method name: GetMaxSize).\n";                           \
  errStr << "  arg count: " << args.Length() << "\n";
  for(int i = 0; i < args.Length(); i++) {
    v8::String::AsciiValue argStr(args[i]);
    errStr << "  arg[" << i << "]: " << *argStr << "\n";
  }
  return v8::ThrowException(v8::Exception::TypeError(v8::String::New(errStr.str().c_str())));
}

/*static*/ v8::Handle<v8::Value> wxNode_wxWindow::_GetMinClientSize(const v8::Arguments& args) {
  v8::HandleScope scope;
  wxNode_wxWindow* self = unwrap<wxNode_wxWindow>(args.This());

  
  /*
   * id: _42900
   */
  if(args.Length() == 0) {
    

    self->GetMinClientSize();

    return v8::Undefined();
  }
  

  std::ostringstream errStr;
  errStr << "Could not find matching method for arguments (method name: GetMinClientSize).\n";                           \
  errStr << "  arg count: " << args.Length() << "\n";
  for(int i = 0; i < args.Length(); i++) {
    v8::String::AsciiValue argStr(args[i]);
    errStr << "  arg[" << i << "]: " << *argStr << "\n";
  }
  return v8::ThrowException(v8::Exception::TypeError(v8::String::New(errStr.str().c_str())));
}

/*static*/ v8::Handle<v8::Value> wxNode_wxWindow::_GetMaxClientSize(const v8::Arguments& args) {
  v8::HandleScope scope;
  wxNode_wxWindow* self = unwrap<wxNode_wxWindow>(args.This());

  
  /*
   * id: _42901
   */
  if(args.Length() == 0) {
    

    self->GetMaxClientSize();

    return v8::Undefined();
  }
  

  std::ostringstream errStr;
  errStr << "Could not find matching method for arguments (method name: GetMaxClientSize).\n";                           \
  errStr << "  arg count: " << args.Length() << "\n";
  for(int i = 0; i < args.Length(); i++) {
    v8::String::AsciiValue argStr(args[i]);
    errStr << "  arg[" << i << "]: " << *argStr << "\n";
  }
  return v8::ThrowException(v8::Exception::TypeError(v8::String::New(errStr.str().c_str())));
}

/*static*/ v8::Handle<v8::Value> wxNode_wxWindow::_GetMinWidth(const v8::Arguments& args) {
  v8::HandleScope scope;
  wxNode_wxWindow* self = unwrap<wxNode_wxWindow>(args.This());

  
  /*
   * id: _42902
   */
  if(args.Length() == 0) {
    

    self->GetMinWidth();

    return v8::Undefined();
  }
  

  std::ostringstream errStr;
  errStr << "Could not find matching method for arguments (method name: GetMinWidth).\n";                           \
  errStr << "  arg count: " << args.Length() << "\n";
  for(int i = 0; i < args.Length(); i++) {
    v8::String::AsciiValue argStr(args[i]);
    errStr << "  arg[" << i << "]: " << *argStr << "\n";
  }
  return v8::ThrowException(v8::Exception::TypeError(v8::String::New(errStr.str().c_str())));
}

/*static*/ v8::Handle<v8::Value> wxNode_wxWindow::_GetMinHeight(const v8::Arguments& args) {
  v8::HandleScope scope;
  wxNode_wxWindow* self = unwrap<wxNode_wxWindow>(args.This());

  
  /*
   * id: _42903
   */
  if(args.Length() == 0) {
    

    self->GetMinHeight();

    return v8::Undefined();
  }
  

  std::ostringstream errStr;
  errStr << "Could not find matching method for arguments (method name: GetMinHeight).\n";                           \
  errStr << "  arg count: " << args.Length() << "\n";
  for(int i = 0; i < args.Length(); i++) {
    v8::String::AsciiValue argStr(args[i]);
    errStr << "  arg[" << i << "]: " << *argStr << "\n";
  }
  return v8::ThrowException(v8::Exception::TypeError(v8::String::New(errStr.str().c_str())));
}

/*static*/ v8::Handle<v8::Value> wxNode_wxWindow::_GetMaxWidth(const v8::Arguments& args) {
  v8::HandleScope scope;
  wxNode_wxWindow* self = unwrap<wxNode_wxWindow>(args.This());

  
  /*
   * id: _42904
   */
  if(args.Length() == 0) {
    

    self->GetMaxWidth();

    return v8::Undefined();
  }
  

  std::ostringstream errStr;
  errStr << "Could not find matching method for arguments (method name: GetMaxWidth).\n";                           \
  errStr << "  arg count: " << args.Length() << "\n";
  for(int i = 0; i < args.Length(); i++) {
    v8::String::AsciiValue argStr(args[i]);
    errStr << "  arg[" << i << "]: " << *argStr << "\n";
  }
  return v8::ThrowException(v8::Exception::TypeError(v8::String::New(errStr.str().c_str())));
}

/*static*/ v8::Handle<v8::Value> wxNode_wxWindow::_GetMaxHeight(const v8::Arguments& args) {
  v8::HandleScope scope;
  wxNode_wxWindow* self = unwrap<wxNode_wxWindow>(args.This());

  
  /*
   * id: _42905
   */
  if(args.Length() == 0) {
    

    self->GetMaxHeight();

    return v8::Undefined();
  }
  

  std::ostringstream errStr;
  errStr << "Could not find matching method for arguments (method name: GetMaxHeight).\n";                           \
  errStr << "  arg count: " << args.Length() << "\n";
  for(int i = 0; i < args.Length(); i++) {
    v8::String::AsciiValue argStr(args[i]);
    errStr << "  arg[" << i << "]: " << *argStr << "\n";
  }
  return v8::ThrowException(v8::Exception::TypeError(v8::String::New(errStr.str().c_str())));
}

/*static*/ v8::Handle<v8::Value> wxNode_wxWindow::_SetVirtualSize(const v8::Arguments& args) {
  v8::HandleScope scope;
  wxNode_wxWindow* self = unwrap<wxNode_wxWindow>(args.This());

  
  /*
   * id: _42906
   */
  if(args.Length() == 1 && (args[0]->IsNull() || args[0]->IsObject())) {
    wxNode_wxSize* size = args[0]->IsNull() ? NULL : wxNodeObject::unwrap<wxNode_wxSize>(args[0]->ToObject()); /* type: _20522  */
    

    self->SetVirtualSize(*size);

    return v8::Undefined();
  }
  
  /*
   * id: _42907
   */
  if(args.Length() == 2 && args[0]->IsNumber() && args[1]->IsNumber()) {
    int x = (int)args[0]->ToInt32()->Value(); /* type: _162  */
    int y = (int)args[1]->ToInt32()->Value(); /* type: _162  */
    

    self->SetVirtualSize(x, y);

    return v8::Undefined();
  }
  

  std::ostringstream errStr;
  errStr << "Could not find matching method for arguments (method name: SetVirtualSize).\n";                           \
  errStr << "  arg count: " << args.Length() << "\n";
  for(int i = 0; i < args.Length(); i++) {
    v8::String::AsciiValue argStr(args[i]);
    errStr << "  arg[" << i << "]: " << *argStr << "\n";
  }
  return v8::ThrowException(v8::Exception::TypeError(v8::String::New(errStr.str().c_str())));
}

/*static*/ v8::Handle<v8::Value> wxNode_wxWindow::_GetVirtualSize(const v8::Arguments& args) {
  v8::HandleScope scope;
  wxNode_wxWindow* self = unwrap<wxNode_wxWindow>(args.This());

  
  /*
   * id: _42908
   */
  if(args.Length() == 0) {
    

    self->GetVirtualSize();

    return v8::Undefined();
  }
  
  /*
   * id: _42909
   */
  if(args.Length() == 2 && false && false) {
    int x; /* type: _16500 * */
    int y; /* type: _16500 * */
    

    self->GetVirtualSize(&x, &y);

    return v8::Undefined();
  }
  

  std::ostringstream errStr;
  errStr << "Could not find matching method for arguments (method name: GetVirtualSize).\n";                           \
  errStr << "  arg count: " << args.Length() << "\n";
  for(int i = 0; i < args.Length(); i++) {
    v8::String::AsciiValue argStr(args[i]);
    errStr << "  arg[" << i << "]: " << *argStr << "\n";
  }
  return v8::ThrowException(v8::Exception::TypeError(v8::String::New(errStr.str().c_str())));
}

/*static*/ v8::Handle<v8::Value> wxNode_wxWindow::_DoSetVirtualSize(const v8::Arguments& args) {
  v8::HandleScope scope;
  wxNode_wxWindow* self = unwrap<wxNode_wxWindow>(args.This());

  
  /*
   * id: _42910
   */
  if(args.Length() == 2 && args[0]->IsNumber() && args[1]->IsNumber()) {
    int x = (int)args[0]->ToInt32()->Value(); /* type: _162  */
    int y = (int)args[1]->ToInt32()->Value(); /* type: _162  */
    

    self->DoSetVirtualSize(x, y);

    return v8::Undefined();
  }
  

  std::ostringstream errStr;
  errStr << "Could not find matching method for arguments (method name: DoSetVirtualSize).\n";                           \
  errStr << "  arg count: " << args.Length() << "\n";
  for(int i = 0; i < args.Length(); i++) {
    v8::String::AsciiValue argStr(args[i]);
    errStr << "  arg[" << i << "]: " << *argStr << "\n";
  }
  return v8::ThrowException(v8::Exception::TypeError(v8::String::New(errStr.str().c_str())));
}

/*static*/ v8::Handle<v8::Value> wxNode_wxWindow::_DoGetVirtualSize(const v8::Arguments& args) {
  v8::HandleScope scope;
  wxNode_wxWindow* self = unwrap<wxNode_wxWindow>(args.This());

  
  /*
   * id: _42911
   */
  if(args.Length() == 0) {
    

    self->DoGetVirtualSize();

    return v8::Undefined();
  }
  

  std::ostringstream errStr;
  errStr << "Could not find matching method for arguments (method name: DoGetVirtualSize).\n";                           \
  errStr << "  arg count: " << args.Length() << "\n";
  for(int i = 0; i < args.Length(); i++) {
    v8::String::AsciiValue argStr(args[i]);
    errStr << "  arg[" << i << "]: " << *argStr << "\n";
  }
  return v8::ThrowException(v8::Exception::TypeError(v8::String::New(errStr.str().c_str())));
}

/*static*/ v8::Handle<v8::Value> wxNode_wxWindow::_GetBestVirtualSize(const v8::Arguments& args) {
  v8::HandleScope scope;
  wxNode_wxWindow* self = unwrap<wxNode_wxWindow>(args.This());

  
  /*
   * id: _42912
   */
  if(args.Length() == 0) {
    

    self->GetBestVirtualSize();

    return v8::Undefined();
  }
  

  std::ostringstream errStr;
  errStr << "Could not find matching method for arguments (method name: GetBestVirtualSize).\n";                           \
  errStr << "  arg count: " << args.Length() << "\n";
  for(int i = 0; i < args.Length(); i++) {
    v8::String::AsciiValue argStr(args[i]);
    errStr << "  arg[" << i << "]: " << *argStr << "\n";
  }
  return v8::ThrowException(v8::Exception::TypeError(v8::String::New(errStr.str().c_str())));
}

/*static*/ v8::Handle<v8::Value> wxNode_wxWindow::_GetWindowBorderSize(const v8::Arguments& args) {
  v8::HandleScope scope;
  wxNode_wxWindow* self = unwrap<wxNode_wxWindow>(args.This());

  
  /*
   * id: _42913
   */
  if(args.Length() == 0) {
    

    self->GetWindowBorderSize();

    return v8::Undefined();
  }
  

  std::ostringstream errStr;
  errStr << "Could not find matching method for arguments (method name: GetWindowBorderSize).\n";                           \
  errStr << "  arg count: " << args.Length() << "\n";
  for(int i = 0; i < args.Length(); i++) {
    v8::String::AsciiValue argStr(args[i]);
    errStr << "  arg[" << i << "]: " << *argStr << "\n";
  }
  return v8::ThrowException(v8::Exception::TypeError(v8::String::New(errStr.str().c_str())));
}

/*static*/ v8::Handle<v8::Value> wxNode_wxWindow::_InformFirstDirection(const v8::Arguments& args) {
  v8::HandleScope scope;
  wxNode_wxWindow* self = unwrap<wxNode_wxWindow>(args.This());

  
  /*
   * id: _42914
   */
  if(args.Length() == 3 && args[0]->IsNumber() && args[1]->IsNumber() && args[2]->IsNumber()) {
    int direction = (int)args[0]->ToInt32()->Value(); /* type: _162  */
    int size = (int)args[1]->ToInt32()->Value(); /* type: _162  */
    int availableOtherDir = (int)args[2]->ToInt32()->Value(); /* type: _162  */
    

    self->InformFirstDirection(direction, size, availableOtherDir);

    return v8::Undefined();
  }
  

  std::ostringstream errStr;
  errStr << "Could not find matching method for arguments (method name: InformFirstDirection).\n";                           \
  errStr << "  arg count: " << args.Length() << "\n";
  for(int i = 0; i < args.Length(); i++) {
    v8::String::AsciiValue argStr(args[i]);
    errStr << "  arg[" << i << "]: " << *argStr << "\n";
  }
  return v8::ThrowException(v8::Exception::TypeError(v8::String::New(errStr.str().c_str())));
}

/*static*/ v8::Handle<v8::Value> wxNode_wxWindow::_SendSizeEvent(const v8::Arguments& args) {
  v8::HandleScope scope;
  wxNode_wxWindow* self = unwrap<wxNode_wxWindow>(args.This());

  
  /*
   * id: _42915
   */
  if(args.Length() == 1 && args[0]->IsNumber()) {
    int flags = (int)args[0]->ToInt32()->Value(); /* type: _162  */
    

    self->SendSizeEvent(flags);

    return v8::Undefined();
  }
  
  /*
   * id: _42915
   */
  if(args.Length() == 0) {
    

    self->SendSizeEvent();

    return v8::Undefined();
  }
  

  std::ostringstream errStr;
  errStr << "Could not find matching method for arguments (method name: SendSizeEvent).\n";                           \
  errStr << "  arg count: " << args.Length() << "\n";
  for(int i = 0; i < args.Length(); i++) {
    v8::String::AsciiValue argStr(args[i]);
    errStr << "  arg[" << i << "]: " << *argStr << "\n";
  }
  return v8::ThrowException(v8::Exception::TypeError(v8::String::New(errStr.str().c_str())));
}

/*static*/ v8::Handle<v8::Value> wxNode_wxWindow::_SendSizeEventToParent(const v8::Arguments& args) {
  v8::HandleScope scope;
  wxNode_wxWindow* self = unwrap<wxNode_wxWindow>(args.This());

  
  /*
   * id: _42916
   */
  if(args.Length() == 1 && args[0]->IsNumber()) {
    int flags = (int)args[0]->ToInt32()->Value(); /* type: _162  */
    

    self->SendSizeEventToParent(flags);

    return v8::Undefined();
  }
  
  /*
   * id: _42916
   */
  if(args.Length() == 0) {
    

    self->SendSizeEventToParent();

    return v8::Undefined();
  }
  

  std::ostringstream errStr;
  errStr << "Could not find matching method for arguments (method name: SendSizeEventToParent).\n";                           \
  errStr << "  arg count: " << args.Length() << "\n";
  for(int i = 0; i < args.Length(); i++) {
    v8::String::AsciiValue argStr(args[i]);
    errStr << "  arg[" << i << "]: " << *argStr << "\n";
  }
  return v8::ThrowException(v8::Exception::TypeError(v8::String::New(errStr.str().c_str())));
}

/*static*/ v8::Handle<v8::Value> wxNode_wxWindow::_PostSizeEvent(const v8::Arguments& args) {
  v8::HandleScope scope;
  wxNode_wxWindow* self = unwrap<wxNode_wxWindow>(args.This());

  
  /*
   * id: _42917
   */
  if(args.Length() == 0) {
    

    self->PostSizeEvent();

    return v8::Undefined();
  }
  

  std::ostringstream errStr;
  errStr << "Could not find matching method for arguments (method name: PostSizeEvent).\n";                           \
  errStr << "  arg count: " << args.Length() << "\n";
  for(int i = 0; i < args.Length(); i++) {
    v8::String::AsciiValue argStr(args[i]);
    errStr << "  arg[" << i << "]: " << *argStr << "\n";
  }
  return v8::ThrowException(v8::Exception::TypeError(v8::String::New(errStr.str().c_str())));
}

/*static*/ v8::Handle<v8::Value> wxNode_wxWindow::_PostSizeEventToParent(const v8::Arguments& args) {
  v8::HandleScope scope;
  wxNode_wxWindow* self = unwrap<wxNode_wxWindow>(args.This());

  
  /*
   * id: _42918
   */
  if(args.Length() == 0) {
    

    self->PostSizeEventToParent();

    return v8::Undefined();
  }
  

  std::ostringstream errStr;
  errStr << "Could not find matching method for arguments (method name: PostSizeEventToParent).\n";                           \
  errStr << "  arg count: " << args.Length() << "\n";
  for(int i = 0; i < args.Length(); i++) {
    v8::String::AsciiValue argStr(args[i]);
    errStr << "  arg[" << i << "]: " << *argStr << "\n";
  }
  return v8::ThrowException(v8::Exception::TypeError(v8::String::New(errStr.str().c_str())));
}

/*static*/ v8::Handle<v8::Value> wxNode_wxWindow::_Show(const v8::Arguments& args) {
  v8::HandleScope scope;
  wxNode_wxWindow* self = unwrap<wxNode_wxWindow>(args.This());

  
  /*
   * id: _42919
   */
  if(args.Length() == 1 && args[0]->IsBoolean()) {
    bool show = args[0]->ToBoolean()->Value(); /* type: _14666  */
    

    self->Show(show);

    return v8::Undefined();
  }
  
  /*
   * id: _42919
   */
  if(args.Length() == 0) {
    

    self->Show();

    return v8::Undefined();
  }
  

  std::ostringstream errStr;
  errStr << "Could not find matching method for arguments (method name: Show).\n";                           \
  errStr << "  arg count: " << args.Length() << "\n";
  for(int i = 0; i < args.Length(); i++) {
    v8::String::AsciiValue argStr(args[i]);
    errStr << "  arg[" << i << "]: " << *argStr << "\n";
  }
  return v8::ThrowException(v8::Exception::TypeError(v8::String::New(errStr.str().c_str())));
}

/*static*/ v8::Handle<v8::Value> wxNode_wxWindow::_Hide(const v8::Arguments& args) {
  v8::HandleScope scope;
  wxNode_wxWindow* self = unwrap<wxNode_wxWindow>(args.This());

  
  /*
   * id: _42920
   */
  if(args.Length() == 0) {
    

    self->Hide();

    return v8::Undefined();
  }
  

  std::ostringstream errStr;
  errStr << "Could not find matching method for arguments (method name: Hide).\n";                           \
  errStr << "  arg count: " << args.Length() << "\n";
  for(int i = 0; i < args.Length(); i++) {
    v8::String::AsciiValue argStr(args[i]);
    errStr << "  arg[" << i << "]: " << *argStr << "\n";
  }
  return v8::ThrowException(v8::Exception::TypeError(v8::String::New(errStr.str().c_str())));
}

/*static*/ v8::Handle<v8::Value> wxNode_wxWindow::_ShowWithEffect(const v8::Arguments& args) {
  v8::HandleScope scope;
  wxNode_wxWindow* self = unwrap<wxNode_wxWindow>(args.This());

  
  /*
   * id: _42921
   */
  if(args.Length() == 2 && args[0]->IsNumber() && args[1]->IsNumber()) {
    wxShowEffect arg0; /* type: _4482  */
    unsigned int arg1 = (unsigned int)args[1]->ToInt32()->Value(); /* type: _43  */
    

    self->ShowWithEffect(arg0, arg1);

    return v8::Undefined();
  }
  
  /*
   * id: _42921
   */
  if(args.Length() == 1 && args[0]->IsNumber()) {
    wxShowEffect arg0; /* type: _4482  */
    

    self->ShowWithEffect(arg0);

    return v8::Undefined();
  }
  

  std::ostringstream errStr;
  errStr << "Could not find matching method for arguments (method name: ShowWithEffect).\n";                           \
  errStr << "  arg count: " << args.Length() << "\n";
  for(int i = 0; i < args.Length(); i++) {
    v8::String::AsciiValue argStr(args[i]);
    errStr << "  arg[" << i << "]: " << *argStr << "\n";
  }
  return v8::ThrowException(v8::Exception::TypeError(v8::String::New(errStr.str().c_str())));
}

/*static*/ v8::Handle<v8::Value> wxNode_wxWindow::_HideWithEffect(const v8::Arguments& args) {
  v8::HandleScope scope;
  wxNode_wxWindow* self = unwrap<wxNode_wxWindow>(args.This());

  
  /*
   * id: _42922
   */
  if(args.Length() == 2 && args[0]->IsNumber() && args[1]->IsNumber()) {
    wxShowEffect arg0; /* type: _4482  */
    unsigned int arg1 = (unsigned int)args[1]->ToInt32()->Value(); /* type: _43  */
    

    self->HideWithEffect(arg0, arg1);

    return v8::Undefined();
  }
  
  /*
   * id: _42922
   */
  if(args.Length() == 1 && args[0]->IsNumber()) {
    wxShowEffect arg0; /* type: _4482  */
    

    self->HideWithEffect(arg0);

    return v8::Undefined();
  }
  

  std::ostringstream errStr;
  errStr << "Could not find matching method for arguments (method name: HideWithEffect).\n";                           \
  errStr << "  arg count: " << args.Length() << "\n";
  for(int i = 0; i < args.Length(); i++) {
    v8::String::AsciiValue argStr(args[i]);
    errStr << "  arg[" << i << "]: " << *argStr << "\n";
  }
  return v8::ThrowException(v8::Exception::TypeError(v8::String::New(errStr.str().c_str())));
}

/*static*/ v8::Handle<v8::Value> wxNode_wxWindow::_Enable(const v8::Arguments& args) {
  v8::HandleScope scope;
  wxNode_wxWindow* self = unwrap<wxNode_wxWindow>(args.This());

  
  /*
   * id: _42923
   */
  if(args.Length() == 1 && args[0]->IsBoolean()) {
    bool enable = args[0]->ToBoolean()->Value(); /* type: _14666  */
    

    self->Enable(enable);

    return v8::Undefined();
  }
  
  /*
   * id: _42923
   */
  if(args.Length() == 0) {
    

    self->Enable();

    return v8::Undefined();
  }
  

  std::ostringstream errStr;
  errStr << "Could not find matching method for arguments (method name: Enable).\n";                           \
  errStr << "  arg count: " << args.Length() << "\n";
  for(int i = 0; i < args.Length(); i++) {
    v8::String::AsciiValue argStr(args[i]);
    errStr << "  arg[" << i << "]: " << *argStr << "\n";
  }
  return v8::ThrowException(v8::Exception::TypeError(v8::String::New(errStr.str().c_str())));
}

/*static*/ v8::Handle<v8::Value> wxNode_wxWindow::_Disable(const v8::Arguments& args) {
  v8::HandleScope scope;
  wxNode_wxWindow* self = unwrap<wxNode_wxWindow>(args.This());

  
  /*
   * id: _42924
   */
  if(args.Length() == 0) {
    

    self->Disable();

    return v8::Undefined();
  }
  

  std::ostringstream errStr;
  errStr << "Could not find matching method for arguments (method name: Disable).\n";                           \
  errStr << "  arg count: " << args.Length() << "\n";
  for(int i = 0; i < args.Length(); i++) {
    v8::String::AsciiValue argStr(args[i]);
    errStr << "  arg[" << i << "]: " << *argStr << "\n";
  }
  return v8::ThrowException(v8::Exception::TypeError(v8::String::New(errStr.str().c_str())));
}

/*static*/ v8::Handle<v8::Value> wxNode_wxWindow::_IsShown(const v8::Arguments& args) {
  v8::HandleScope scope;
  wxNode_wxWindow* self = unwrap<wxNode_wxWindow>(args.This());

  
  /*
   * id: _42925
   */
  if(args.Length() == 0) {
    

    self->IsShown();

    return v8::Undefined();
  }
  

  std::ostringstream errStr;
  errStr << "Could not find matching method for arguments (method name: IsShown).\n";                           \
  errStr << "  arg count: " << args.Length() << "\n";
  for(int i = 0; i < args.Length(); i++) {
    v8::String::AsciiValue argStr(args[i]);
    errStr << "  arg[" << i << "]: " << *argStr << "\n";
  }
  return v8::ThrowException(v8::Exception::TypeError(v8::String::New(errStr.str().c_str())));
}

/*static*/ v8::Handle<v8::Value> wxNode_wxWindow::_IsEnabled(const v8::Arguments& args) {
  v8::HandleScope scope;
  wxNode_wxWindow* self = unwrap<wxNode_wxWindow>(args.This());

  
  /*
   * id: _42926
   */
  if(args.Length() == 0) {
    

    self->IsEnabled();

    return v8::Undefined();
  }
  

  std::ostringstream errStr;
  errStr << "Could not find matching method for arguments (method name: IsEnabled).\n";                           \
  errStr << "  arg count: " << args.Length() << "\n";
  for(int i = 0; i < args.Length(); i++) {
    v8::String::AsciiValue argStr(args[i]);
    errStr << "  arg[" << i << "]: " << *argStr << "\n";
  }
  return v8::ThrowException(v8::Exception::TypeError(v8::String::New(errStr.str().c_str())));
}

/*static*/ v8::Handle<v8::Value> wxNode_wxWindow::_IsThisEnabled(const v8::Arguments& args) {
  v8::HandleScope scope;
  wxNode_wxWindow* self = unwrap<wxNode_wxWindow>(args.This());

  
  /*
   * id: _42927
   */
  if(args.Length() == 0) {
    

    self->IsThisEnabled();

    return v8::Undefined();
  }
  

  std::ostringstream errStr;
  errStr << "Could not find matching method for arguments (method name: IsThisEnabled).\n";                           \
  errStr << "  arg count: " << args.Length() << "\n";
  for(int i = 0; i < args.Length(); i++) {
    v8::String::AsciiValue argStr(args[i]);
    errStr << "  arg[" << i << "]: " << *argStr << "\n";
  }
  return v8::ThrowException(v8::Exception::TypeError(v8::String::New(errStr.str().c_str())));
}

/*static*/ v8::Handle<v8::Value> wxNode_wxWindow::_IsShownOnScreen(const v8::Arguments& args) {
  v8::HandleScope scope;
  wxNode_wxWindow* self = unwrap<wxNode_wxWindow>(args.This());

  
  /*
   * id: _42928
   */
  if(args.Length() == 0) {
    

    self->IsShownOnScreen();

    return v8::Undefined();
  }
  

  std::ostringstream errStr;
  errStr << "Could not find matching method for arguments (method name: IsShownOnScreen).\n";                           \
  errStr << "  arg count: " << args.Length() << "\n";
  for(int i = 0; i < args.Length(); i++) {
    v8::String::AsciiValue argStr(args[i]);
    errStr << "  arg[" << i << "]: " << *argStr << "\n";
  }
  return v8::ThrowException(v8::Exception::TypeError(v8::String::New(errStr.str().c_str())));
}

/*static*/ v8::Handle<v8::Value> wxNode_wxWindow::_SetWindowStyleFlag(const v8::Arguments& args) {
  v8::HandleScope scope;
  wxNode_wxWindow* self = unwrap<wxNode_wxWindow>(args.This());

  
  /*
   * id: _42929
   */
  if(args.Length() == 1 && args[0]->IsNumber()) {
    long int style = (long int)args[0]->ToInt32()->Value(); /* type: _586  */
    

    self->SetWindowStyleFlag(style);

    return v8::Undefined();
  }
  

  std::ostringstream errStr;
  errStr << "Could not find matching method for arguments (method name: SetWindowStyleFlag).\n";                           \
  errStr << "  arg count: " << args.Length() << "\n";
  for(int i = 0; i < args.Length(); i++) {
    v8::String::AsciiValue argStr(args[i]);
    errStr << "  arg[" << i << "]: " << *argStr << "\n";
  }
  return v8::ThrowException(v8::Exception::TypeError(v8::String::New(errStr.str().c_str())));
}

/*static*/ v8::Handle<v8::Value> wxNode_wxWindow::_GetWindowStyleFlag(const v8::Arguments& args) {
  v8::HandleScope scope;
  wxNode_wxWindow* self = unwrap<wxNode_wxWindow>(args.This());

  
  /*
   * id: _42930
   */
  if(args.Length() == 0) {
    

    self->GetWindowStyleFlag();

    return v8::Undefined();
  }
  

  std::ostringstream errStr;
  errStr << "Could not find matching method for arguments (method name: GetWindowStyleFlag).\n";                           \
  errStr << "  arg count: " << args.Length() << "\n";
  for(int i = 0; i < args.Length(); i++) {
    v8::String::AsciiValue argStr(args[i]);
    errStr << "  arg[" << i << "]: " << *argStr << "\n";
  }
  return v8::ThrowException(v8::Exception::TypeError(v8::String::New(errStr.str().c_str())));
}

/*static*/ v8::Handle<v8::Value> wxNode_wxWindow::_SetWindowStyle(const v8::Arguments& args) {
  v8::HandleScope scope;
  wxNode_wxWindow* self = unwrap<wxNode_wxWindow>(args.This());

  
  /*
   * id: _42931
   */
  if(args.Length() == 1 && args[0]->IsNumber()) {
    long int style = (long int)args[0]->ToInt32()->Value(); /* type: _586  */
    

    self->SetWindowStyle(style);

    return v8::Undefined();
  }
  

  std::ostringstream errStr;
  errStr << "Could not find matching method for arguments (method name: SetWindowStyle).\n";                           \
  errStr << "  arg count: " << args.Length() << "\n";
  for(int i = 0; i < args.Length(); i++) {
    v8::String::AsciiValue argStr(args[i]);
    errStr << "  arg[" << i << "]: " << *argStr << "\n";
  }
  return v8::ThrowException(v8::Exception::TypeError(v8::String::New(errStr.str().c_str())));
}

/*static*/ v8::Handle<v8::Value> wxNode_wxWindow::_GetWindowStyle(const v8::Arguments& args) {
  v8::HandleScope scope;
  wxNode_wxWindow* self = unwrap<wxNode_wxWindow>(args.This());

  
  /*
   * id: _42932
   */
  if(args.Length() == 0) {
    

    self->GetWindowStyle();

    return v8::Undefined();
  }
  

  std::ostringstream errStr;
  errStr << "Could not find matching method for arguments (method name: GetWindowStyle).\n";                           \
  errStr << "  arg count: " << args.Length() << "\n";
  for(int i = 0; i < args.Length(); i++) {
    v8::String::AsciiValue argStr(args[i]);
    errStr << "  arg[" << i << "]: " << *argStr << "\n";
  }
  return v8::ThrowException(v8::Exception::TypeError(v8::String::New(errStr.str().c_str())));
}

/*static*/ v8::Handle<v8::Value> wxNode_wxWindow::_HasFlag(const v8::Arguments& args) {
  v8::HandleScope scope;
  wxNode_wxWindow* self = unwrap<wxNode_wxWindow>(args.This());

  
  /*
   * id: _42933
   */
  if(args.Length() == 1 && args[0]->IsNumber()) {
    int flag = (int)args[0]->ToInt32()->Value(); /* type: _162  */
    

    self->HasFlag(flag);

    return v8::Undefined();
  }
  

  std::ostringstream errStr;
  errStr << "Could not find matching method for arguments (method name: HasFlag).\n";                           \
  errStr << "  arg count: " << args.Length() << "\n";
  for(int i = 0; i < args.Length(); i++) {
    v8::String::AsciiValue argStr(args[i]);
    errStr << "  arg[" << i << "]: " << *argStr << "\n";
  }
  return v8::ThrowException(v8::Exception::TypeError(v8::String::New(errStr.str().c_str())));
}

/*static*/ v8::Handle<v8::Value> wxNode_wxWindow::_IsRetained(const v8::Arguments& args) {
  v8::HandleScope scope;
  wxNode_wxWindow* self = unwrap<wxNode_wxWindow>(args.This());

  
  /*
   * id: _42934
   */
  if(args.Length() == 0) {
    

    self->IsRetained();

    return v8::Undefined();
  }
  

  std::ostringstream errStr;
  errStr << "Could not find matching method for arguments (method name: IsRetained).\n";                           \
  errStr << "  arg count: " << args.Length() << "\n";
  for(int i = 0; i < args.Length(); i++) {
    v8::String::AsciiValue argStr(args[i]);
    errStr << "  arg[" << i << "]: " << *argStr << "\n";
  }
  return v8::ThrowException(v8::Exception::TypeError(v8::String::New(errStr.str().c_str())));
}

/*static*/ v8::Handle<v8::Value> wxNode_wxWindow::_ToggleWindowStyle(const v8::Arguments& args) {
  v8::HandleScope scope;
  wxNode_wxWindow* self = unwrap<wxNode_wxWindow>(args.This());

  
  /*
   * id: _42935
   */
  if(args.Length() == 1 && args[0]->IsNumber()) {
    int flag = (int)args[0]->ToInt32()->Value(); /* type: _162  */
    

    self->ToggleWindowStyle(flag);

    return v8::Undefined();
  }
  

  std::ostringstream errStr;
  errStr << "Could not find matching method for arguments (method name: ToggleWindowStyle).\n";                           \
  errStr << "  arg count: " << args.Length() << "\n";
  for(int i = 0; i < args.Length(); i++) {
    v8::String::AsciiValue argStr(args[i]);
    errStr << "  arg[" << i << "]: " << *argStr << "\n";
  }
  return v8::ThrowException(v8::Exception::TypeError(v8::String::New(errStr.str().c_str())));
}

/*static*/ v8::Handle<v8::Value> wxNode_wxWindow::_SetExtraStyle(const v8::Arguments& args) {
  v8::HandleScope scope;
  wxNode_wxWindow* self = unwrap<wxNode_wxWindow>(args.This());

  
  /*
   * id: _42936
   */
  if(args.Length() == 1 && args[0]->IsNumber()) {
    long int exStyle = (long int)args[0]->ToInt32()->Value(); /* type: _586  */
    

    self->SetExtraStyle(exStyle);

    return v8::Undefined();
  }
  

  std::ostringstream errStr;
  errStr << "Could not find matching method for arguments (method name: SetExtraStyle).\n";                           \
  errStr << "  arg count: " << args.Length() << "\n";
  for(int i = 0; i < args.Length(); i++) {
    v8::String::AsciiValue argStr(args[i]);
    errStr << "  arg[" << i << "]: " << *argStr << "\n";
  }
  return v8::ThrowException(v8::Exception::TypeError(v8::String::New(errStr.str().c_str())));
}

/*static*/ v8::Handle<v8::Value> wxNode_wxWindow::_GetExtraStyle(const v8::Arguments& args) {
  v8::HandleScope scope;
  wxNode_wxWindow* self = unwrap<wxNode_wxWindow>(args.This());

  
  /*
   * id: _42937
   */
  if(args.Length() == 0) {
    

    self->GetExtraStyle();

    return v8::Undefined();
  }
  

  std::ostringstream errStr;
  errStr << "Could not find matching method for arguments (method name: GetExtraStyle).\n";                           \
  errStr << "  arg count: " << args.Length() << "\n";
  for(int i = 0; i < args.Length(); i++) {
    v8::String::AsciiValue argStr(args[i]);
    errStr << "  arg[" << i << "]: " << *argStr << "\n";
  }
  return v8::ThrowException(v8::Exception::TypeError(v8::String::New(errStr.str().c_str())));
}

/*static*/ v8::Handle<v8::Value> wxNode_wxWindow::_HasExtraStyle(const v8::Arguments& args) {
  v8::HandleScope scope;
  wxNode_wxWindow* self = unwrap<wxNode_wxWindow>(args.This());

  
  /*
   * id: _42938
   */
  if(args.Length() == 1 && args[0]->IsNumber()) {
    int exFlag = (int)args[0]->ToInt32()->Value(); /* type: _162  */
    

    self->HasExtraStyle(exFlag);

    return v8::Undefined();
  }
  

  std::ostringstream errStr;
  errStr << "Could not find matching method for arguments (method name: HasExtraStyle).\n";                           \
  errStr << "  arg count: " << args.Length() << "\n";
  for(int i = 0; i < args.Length(); i++) {
    v8::String::AsciiValue argStr(args[i]);
    errStr << "  arg[" << i << "]: " << *argStr << "\n";
  }
  return v8::ThrowException(v8::Exception::TypeError(v8::String::New(errStr.str().c_str())));
}

/*static*/ v8::Handle<v8::Value> wxNode_wxWindow::_MakeModal(const v8::Arguments& args) {
  v8::HandleScope scope;
  wxNode_wxWindow* self = unwrap<wxNode_wxWindow>(args.This());

  
  /*
   * id: _42939
   */
  if(args.Length() == 1 && args[0]->IsBoolean()) {
    bool modal = args[0]->ToBoolean()->Value(); /* type: _14666  */
    

    self->MakeModal(modal);

    return v8::Undefined();
  }
  
  /*
   * id: _42939
   */
  if(args.Length() == 0) {
    

    self->MakeModal();

    return v8::Undefined();
  }
  

  std::ostringstream errStr;
  errStr << "Could not find matching method for arguments (method name: MakeModal).\n";                           \
  errStr << "  arg count: " << args.Length() << "\n";
  for(int i = 0; i < args.Length(); i++) {
    v8::String::AsciiValue argStr(args[i]);
    errStr << "  arg[" << i << "]: " << *argStr << "\n";
  }
  return v8::ThrowException(v8::Exception::TypeError(v8::String::New(errStr.str().c_str())));
}

/*static*/ v8::Handle<v8::Value> wxNode_wxWindow::_SetThemeEnabled(const v8::Arguments& args) {
  v8::HandleScope scope;
  wxNode_wxWindow* self = unwrap<wxNode_wxWindow>(args.This());

  
  /*
   * id: _42940
   */
  if(args.Length() == 1 && args[0]->IsBoolean()) {
    bool enableTheme = args[0]->ToBoolean()->Value(); /* type: _14666  */
    

    self->SetThemeEnabled(enableTheme);

    return v8::Undefined();
  }
  

  std::ostringstream errStr;
  errStr << "Could not find matching method for arguments (method name: SetThemeEnabled).\n";                           \
  errStr << "  arg count: " << args.Length() << "\n";
  for(int i = 0; i < args.Length(); i++) {
    v8::String::AsciiValue argStr(args[i]);
    errStr << "  arg[" << i << "]: " << *argStr << "\n";
  }
  return v8::ThrowException(v8::Exception::TypeError(v8::String::New(errStr.str().c_str())));
}

/*static*/ v8::Handle<v8::Value> wxNode_wxWindow::_GetThemeEnabled(const v8::Arguments& args) {
  v8::HandleScope scope;
  wxNode_wxWindow* self = unwrap<wxNode_wxWindow>(args.This());

  
  /*
   * id: _42941
   */
  if(args.Length() == 0) {
    

    self->GetThemeEnabled();

    return v8::Undefined();
  }
  

  std::ostringstream errStr;
  errStr << "Could not find matching method for arguments (method name: GetThemeEnabled).\n";                           \
  errStr << "  arg count: " << args.Length() << "\n";
  for(int i = 0; i < args.Length(); i++) {
    v8::String::AsciiValue argStr(args[i]);
    errStr << "  arg[" << i << "]: " << *argStr << "\n";
  }
  return v8::ThrowException(v8::Exception::TypeError(v8::String::New(errStr.str().c_str())));
}

/*static*/ v8::Handle<v8::Value> wxNode_wxWindow::_SetFocus(const v8::Arguments& args) {
  v8::HandleScope scope;
  wxNode_wxWindow* self = unwrap<wxNode_wxWindow>(args.This());

  
  /*
   * id: _42942
   */
  if(args.Length() == 0) {
    

    self->SetFocus();

    return v8::Undefined();
  }
  

  std::ostringstream errStr;
  errStr << "Could not find matching method for arguments (method name: SetFocus).\n";                           \
  errStr << "  arg count: " << args.Length() << "\n";
  for(int i = 0; i < args.Length(); i++) {
    v8::String::AsciiValue argStr(args[i]);
    errStr << "  arg[" << i << "]: " << *argStr << "\n";
  }
  return v8::ThrowException(v8::Exception::TypeError(v8::String::New(errStr.str().c_str())));
}

/*static*/ v8::Handle<v8::Value> wxNode_wxWindow::_SetFocusFromKbd(const v8::Arguments& args) {
  v8::HandleScope scope;
  wxNode_wxWindow* self = unwrap<wxNode_wxWindow>(args.This());

  
  /*
   * id: _42943
   */
  if(args.Length() == 0) {
    

    self->SetFocusFromKbd();

    return v8::Undefined();
  }
  

  std::ostringstream errStr;
  errStr << "Could not find matching method for arguments (method name: SetFocusFromKbd).\n";                           \
  errStr << "  arg count: " << args.Length() << "\n";
  for(int i = 0; i < args.Length(); i++) {
    v8::String::AsciiValue argStr(args[i]);
    errStr << "  arg[" << i << "]: " << *argStr << "\n";
  }
  return v8::ThrowException(v8::Exception::TypeError(v8::String::New(errStr.str().c_str())));
}

/*static*/ v8::Handle<v8::Value> wxNode_wxWindow::_FindFocus(const v8::Arguments& args) {
  v8::HandleScope scope;
  wxNode_wxWindow* self = unwrap<wxNode_wxWindow>(args.This());

  
  /*
   * id: _42944
   */
  if(args.Length() == 0) {
    

    self->FindFocus();

    return v8::Undefined();
  }
  

  std::ostringstream errStr;
  errStr << "Could not find matching method for arguments (method name: FindFocus).\n";                           \
  errStr << "  arg count: " << args.Length() << "\n";
  for(int i = 0; i < args.Length(); i++) {
    v8::String::AsciiValue argStr(args[i]);
    errStr << "  arg[" << i << "]: " << *argStr << "\n";
  }
  return v8::ThrowException(v8::Exception::TypeError(v8::String::New(errStr.str().c_str())));
}

/*static*/ v8::Handle<v8::Value> wxNode_wxWindow::_DoFindFocus(const v8::Arguments& args) {
  v8::HandleScope scope;
  wxNode_wxWindow* self = unwrap<wxNode_wxWindow>(args.This());

  
  /*
   * id: _42945
   */
  if(args.Length() == 0) {
    

    self->DoFindFocus();

    return v8::Undefined();
  }
  

  std::ostringstream errStr;
  errStr << "Could not find matching method for arguments (method name: DoFindFocus).\n";                           \
  errStr << "  arg count: " << args.Length() << "\n";
  for(int i = 0; i < args.Length(); i++) {
    v8::String::AsciiValue argStr(args[i]);
    errStr << "  arg[" << i << "]: " << *argStr << "\n";
  }
  return v8::ThrowException(v8::Exception::TypeError(v8::String::New(errStr.str().c_str())));
}

/*static*/ v8::Handle<v8::Value> wxNode_wxWindow::_HasFocus(const v8::Arguments& args) {
  v8::HandleScope scope;
  wxNode_wxWindow* self = unwrap<wxNode_wxWindow>(args.This());

  
  /*
   * id: _42946
   */
  if(args.Length() == 0) {
    

    self->HasFocus();

    return v8::Undefined();
  }
  

  std::ostringstream errStr;
  errStr << "Could not find matching method for arguments (method name: HasFocus).\n";                           \
  errStr << "  arg count: " << args.Length() << "\n";
  for(int i = 0; i < args.Length(); i++) {
    v8::String::AsciiValue argStr(args[i]);
    errStr << "  arg[" << i << "]: " << *argStr << "\n";
  }
  return v8::ThrowException(v8::Exception::TypeError(v8::String::New(errStr.str().c_str())));
}

/*static*/ v8::Handle<v8::Value> wxNode_wxWindow::_AcceptsFocus(const v8::Arguments& args) {
  v8::HandleScope scope;
  wxNode_wxWindow* self = unwrap<wxNode_wxWindow>(args.This());

  
  /*
   * id: _42947
   */
  if(args.Length() == 0) {
    

    self->AcceptsFocus();

    return v8::Undefined();
  }
  

  std::ostringstream errStr;
  errStr << "Could not find matching method for arguments (method name: AcceptsFocus).\n";                           \
  errStr << "  arg count: " << args.Length() << "\n";
  for(int i = 0; i < args.Length(); i++) {
    v8::String::AsciiValue argStr(args[i]);
    errStr << "  arg[" << i << "]: " << *argStr << "\n";
  }
  return v8::ThrowException(v8::Exception::TypeError(v8::String::New(errStr.str().c_str())));
}

/*static*/ v8::Handle<v8::Value> wxNode_wxWindow::_AcceptsFocusRecursively(const v8::Arguments& args) {
  v8::HandleScope scope;
  wxNode_wxWindow* self = unwrap<wxNode_wxWindow>(args.This());

  
  /*
   * id: _42948
   */
  if(args.Length() == 0) {
    

    self->AcceptsFocusRecursively();

    return v8::Undefined();
  }
  

  std::ostringstream errStr;
  errStr << "Could not find matching method for arguments (method name: AcceptsFocusRecursively).\n";                           \
  errStr << "  arg count: " << args.Length() << "\n";
  for(int i = 0; i < args.Length(); i++) {
    v8::String::AsciiValue argStr(args[i]);
    errStr << "  arg[" << i << "]: " << *argStr << "\n";
  }
  return v8::ThrowException(v8::Exception::TypeError(v8::String::New(errStr.str().c_str())));
}

/*static*/ v8::Handle<v8::Value> wxNode_wxWindow::_AcceptsFocusFromKeyboard(const v8::Arguments& args) {
  v8::HandleScope scope;
  wxNode_wxWindow* self = unwrap<wxNode_wxWindow>(args.This());

  
  /*
   * id: _42949
   */
  if(args.Length() == 0) {
    

    self->AcceptsFocusFromKeyboard();

    return v8::Undefined();
  }
  

  std::ostringstream errStr;
  errStr << "Could not find matching method for arguments (method name: AcceptsFocusFromKeyboard).\n";                           \
  errStr << "  arg count: " << args.Length() << "\n";
  for(int i = 0; i < args.Length(); i++) {
    v8::String::AsciiValue argStr(args[i]);
    errStr << "  arg[" << i << "]: " << *argStr << "\n";
  }
  return v8::ThrowException(v8::Exception::TypeError(v8::String::New(errStr.str().c_str())));
}

/*static*/ v8::Handle<v8::Value> wxNode_wxWindow::_CanBeFocused(const v8::Arguments& args) {
  v8::HandleScope scope;
  wxNode_wxWindow* self = unwrap<wxNode_wxWindow>(args.This());

  
  /*
   * id: _42950
   */
  if(args.Length() == 0) {
    

    self->CanBeFocused();

    return v8::Undefined();
  }
  

  std::ostringstream errStr;
  errStr << "Could not find matching method for arguments (method name: CanBeFocused).\n";                           \
  errStr << "  arg count: " << args.Length() << "\n";
  for(int i = 0; i < args.Length(); i++) {
    v8::String::AsciiValue argStr(args[i]);
    errStr << "  arg[" << i << "]: " << *argStr << "\n";
  }
  return v8::ThrowException(v8::Exception::TypeError(v8::String::New(errStr.str().c_str())));
}

/*static*/ v8::Handle<v8::Value> wxNode_wxWindow::_IsFocusable(const v8::Arguments& args) {
  v8::HandleScope scope;
  wxNode_wxWindow* self = unwrap<wxNode_wxWindow>(args.This());

  
  /*
   * id: _42951
   */
  if(args.Length() == 0) {
    

    self->IsFocusable();

    return v8::Undefined();
  }
  

  std::ostringstream errStr;
  errStr << "Could not find matching method for arguments (method name: IsFocusable).\n";                           \
  errStr << "  arg count: " << args.Length() << "\n";
  for(int i = 0; i < args.Length(); i++) {
    v8::String::AsciiValue argStr(args[i]);
    errStr << "  arg[" << i << "]: " << *argStr << "\n";
  }
  return v8::ThrowException(v8::Exception::TypeError(v8::String::New(errStr.str().c_str())));
}

/*static*/ v8::Handle<v8::Value> wxNode_wxWindow::_CanAcceptFocus(const v8::Arguments& args) {
  v8::HandleScope scope;
  wxNode_wxWindow* self = unwrap<wxNode_wxWindow>(args.This());

  
  /*
   * id: _42952
   */
  if(args.Length() == 0) {
    

    self->CanAcceptFocus();

    return v8::Undefined();
  }
  

  std::ostringstream errStr;
  errStr << "Could not find matching method for arguments (method name: CanAcceptFocus).\n";                           \
  errStr << "  arg count: " << args.Length() << "\n";
  for(int i = 0; i < args.Length(); i++) {
    v8::String::AsciiValue argStr(args[i]);
    errStr << "  arg[" << i << "]: " << *argStr << "\n";
  }
  return v8::ThrowException(v8::Exception::TypeError(v8::String::New(errStr.str().c_str())));
}

/*static*/ v8::Handle<v8::Value> wxNode_wxWindow::_CanAcceptFocusFromKeyboard(const v8::Arguments& args) {
  v8::HandleScope scope;
  wxNode_wxWindow* self = unwrap<wxNode_wxWindow>(args.This());

  
  /*
   * id: _42953
   */
  if(args.Length() == 0) {
    

    self->CanAcceptFocusFromKeyboard();

    return v8::Undefined();
  }
  

  std::ostringstream errStr;
  errStr << "Could not find matching method for arguments (method name: CanAcceptFocusFromKeyboard).\n";                           \
  errStr << "  arg count: " << args.Length() << "\n";
  for(int i = 0; i < args.Length(); i++) {
    v8::String::AsciiValue argStr(args[i]);
    errStr << "  arg[" << i << "]: " << *argStr << "\n";
  }
  return v8::ThrowException(v8::Exception::TypeError(v8::String::New(errStr.str().c_str())));
}

/*static*/ v8::Handle<v8::Value> wxNode_wxWindow::_SetCanFocus(const v8::Arguments& args) {
  v8::HandleScope scope;
  wxNode_wxWindow* self = unwrap<wxNode_wxWindow>(args.This());

  
  /*
   * id: _42954
   */
  if(args.Length() == 1 && args[0]->IsBoolean()) {
    bool arg0 = args[0]->ToBoolean()->Value(); /* type: _14666  */
    

    self->SetCanFocus(arg0);

    return v8::Undefined();
  }
  

  std::ostringstream errStr;
  errStr << "Could not find matching method for arguments (method name: SetCanFocus).\n";                           \
  errStr << "  arg count: " << args.Length() << "\n";
  for(int i = 0; i < args.Length(); i++) {
    v8::String::AsciiValue argStr(args[i]);
    errStr << "  arg[" << i << "]: " << *argStr << "\n";
  }
  return v8::ThrowException(v8::Exception::TypeError(v8::String::New(errStr.str().c_str())));
}

/*static*/ v8::Handle<v8::Value> wxNode_wxWindow::_NavigateIn(const v8::Arguments& args) {
  v8::HandleScope scope;
  wxNode_wxWindow* self = unwrap<wxNode_wxWindow>(args.This());

  
  /*
   * id: _42955
   */
  if(args.Length() == 1 && args[0]->IsNumber()) {
    int flags = (int)args[0]->ToInt32()->Value(); /* type: _162  */
    

    self->NavigateIn(flags);

    return v8::Undefined();
  }
  
  /*
   * id: _42955
   */
  if(args.Length() == 0) {
    

    self->NavigateIn();

    return v8::Undefined();
  }
  

  std::ostringstream errStr;
  errStr << "Could not find matching method for arguments (method name: NavigateIn).\n";                           \
  errStr << "  arg count: " << args.Length() << "\n";
  for(int i = 0; i < args.Length(); i++) {
    v8::String::AsciiValue argStr(args[i]);
    errStr << "  arg[" << i << "]: " << *argStr << "\n";
  }
  return v8::ThrowException(v8::Exception::TypeError(v8::String::New(errStr.str().c_str())));
}

/*static*/ v8::Handle<v8::Value> wxNode_wxWindow::_Navigate(const v8::Arguments& args) {
  v8::HandleScope scope;
  wxNode_wxWindow* self = unwrap<wxNode_wxWindow>(args.This());

  
  /*
   * id: _42956
   */
  if(args.Length() == 1 && args[0]->IsNumber()) {
    int flags = (int)args[0]->ToInt32()->Value(); /* type: _162  */
    

    self->Navigate(flags);

    return v8::Undefined();
  }
  
  /*
   * id: _42956
   */
  if(args.Length() == 0) {
    

    self->Navigate();

    return v8::Undefined();
  }
  

  std::ostringstream errStr;
  errStr << "Could not find matching method for arguments (method name: Navigate).\n";                           \
  errStr << "  arg count: " << args.Length() << "\n";
  for(int i = 0; i < args.Length(); i++) {
    v8::String::AsciiValue argStr(args[i]);
    errStr << "  arg[" << i << "]: " << *argStr << "\n";
  }
  return v8::ThrowException(v8::Exception::TypeError(v8::String::New(errStr.str().c_str())));
}

/*static*/ v8::Handle<v8::Value> wxNode_wxWindow::_HandleAsNavigationKey(const v8::Arguments& args) {
  v8::HandleScope scope;
  wxNode_wxWindow* self = unwrap<wxNode_wxWindow>(args.This());

  
  /*
   * id: _42957
   */
  if(args.Length() == 1 && (args[0]->IsNull() || args[0]->IsObject())) {
    wxNode_wxKeyEvent* event = args[0]->IsNull() ? NULL : wxNodeObject::unwrap<wxNode_wxKeyEvent>(args[0]->ToObject()); /* type: _61563  */
    

    self->HandleAsNavigationKey(*event);

    return v8::Undefined();
  }
  

  std::ostringstream errStr;
  errStr << "Could not find matching method for arguments (method name: HandleAsNavigationKey).\n";                           \
  errStr << "  arg count: " << args.Length() << "\n";
  for(int i = 0; i < args.Length(); i++) {
    v8::String::AsciiValue argStr(args[i]);
    errStr << "  arg[" << i << "]: " << *argStr << "\n";
  }
  return v8::ThrowException(v8::Exception::TypeError(v8::String::New(errStr.str().c_str())));
}

/*static*/ v8::Handle<v8::Value> wxNode_wxWindow::_MoveBeforeInTabOrder(const v8::Arguments& args) {
  v8::HandleScope scope;
  wxNode_wxWindow* self = unwrap<wxNode_wxWindow>(args.This());

  
  /*
   * id: _42958
   */
  if(args.Length() == 1 && (args[0]->IsNull() || args[0]->IsObject())) {
    wxNode_wxWindow* win = args[0]->IsNull() ? NULL : wxNodeObject::unwrap<wxNode_wxWindow>(args[0]->ToObject()); /* type: _993 * */
    

    self->MoveBeforeInTabOrder(win);

    return v8::Undefined();
  }
  

  std::ostringstream errStr;
  errStr << "Could not find matching method for arguments (method name: MoveBeforeInTabOrder).\n";                           \
  errStr << "  arg count: " << args.Length() << "\n";
  for(int i = 0; i < args.Length(); i++) {
    v8::String::AsciiValue argStr(args[i]);
    errStr << "  arg[" << i << "]: " << *argStr << "\n";
  }
  return v8::ThrowException(v8::Exception::TypeError(v8::String::New(errStr.str().c_str())));
}

/*static*/ v8::Handle<v8::Value> wxNode_wxWindow::_MoveAfterInTabOrder(const v8::Arguments& args) {
  v8::HandleScope scope;
  wxNode_wxWindow* self = unwrap<wxNode_wxWindow>(args.This());

  
  /*
   * id: _42959
   */
  if(args.Length() == 1 && (args[0]->IsNull() || args[0]->IsObject())) {
    wxNode_wxWindow* win = args[0]->IsNull() ? NULL : wxNodeObject::unwrap<wxNode_wxWindow>(args[0]->ToObject()); /* type: _993 * */
    

    self->MoveAfterInTabOrder(win);

    return v8::Undefined();
  }
  

  std::ostringstream errStr;
  errStr << "Could not find matching method for arguments (method name: MoveAfterInTabOrder).\n";                           \
  errStr << "  arg count: " << args.Length() << "\n";
  for(int i = 0; i < args.Length(); i++) {
    v8::String::AsciiValue argStr(args[i]);
    errStr << "  arg[" << i << "]: " << *argStr << "\n";
  }
  return v8::ThrowException(v8::Exception::TypeError(v8::String::New(errStr.str().c_str())));
}

/*static*/ v8::Handle<v8::Value> wxNode_wxWindow::_GetChildren(const v8::Arguments& args) {
  v8::HandleScope scope;
  wxNode_wxWindow* self = unwrap<wxNode_wxWindow>(args.This());

  
  /*
   * id: _42960
   */
  if(args.Length() == 0) {
    

    self->GetChildren();

    return v8::Undefined();
  }
  
  /*
   * id: _42961
   */
  if(args.Length() == 0) {
    

    self->GetChildren();

    return v8::Undefined();
  }
  

  std::ostringstream errStr;
  errStr << "Could not find matching method for arguments (method name: GetChildren).\n";                           \
  errStr << "  arg count: " << args.Length() << "\n";
  for(int i = 0; i < args.Length(); i++) {
    v8::String::AsciiValue argStr(args[i]);
    errStr << "  arg[" << i << "]: " << *argStr << "\n";
  }
  return v8::ThrowException(v8::Exception::TypeError(v8::String::New(errStr.str().c_str())));
}

/*static*/ v8::Handle<v8::Value> wxNode_wxWindow::_GetWindowChildren(const v8::Arguments& args) {
  v8::HandleScope scope;
  wxNode_wxWindow* self = unwrap<wxNode_wxWindow>(args.This());

  
  /*
   * id: _42962
   */
  if(args.Length() == 0) {
    

    self->GetWindowChildren();

    return v8::Undefined();
  }
  

  std::ostringstream errStr;
  errStr << "Could not find matching method for arguments (method name: GetWindowChildren).\n";                           \
  errStr << "  arg count: " << args.Length() << "\n";
  for(int i = 0; i < args.Length(); i++) {
    v8::String::AsciiValue argStr(args[i]);
    errStr << "  arg[" << i << "]: " << *argStr << "\n";
  }
  return v8::ThrowException(v8::Exception::TypeError(v8::String::New(errStr.str().c_str())));
}

/*static*/ v8::Handle<v8::Value> wxNode_wxWindow::_GetPrevSibling(const v8::Arguments& args) {
  v8::HandleScope scope;
  wxNode_wxWindow* self = unwrap<wxNode_wxWindow>(args.This());

  
  /*
   * id: _42963
   */
  if(args.Length() == 0) {
    

    self->GetPrevSibling();

    return v8::Undefined();
  }
  

  std::ostringstream errStr;
  errStr << "Could not find matching method for arguments (method name: GetPrevSibling).\n";                           \
  errStr << "  arg count: " << args.Length() << "\n";
  for(int i = 0; i < args.Length(); i++) {
    v8::String::AsciiValue argStr(args[i]);
    errStr << "  arg[" << i << "]: " << *argStr << "\n";
  }
  return v8::ThrowException(v8::Exception::TypeError(v8::String::New(errStr.str().c_str())));
}

/*static*/ v8::Handle<v8::Value> wxNode_wxWindow::_GetNextSibling(const v8::Arguments& args) {
  v8::HandleScope scope;
  wxNode_wxWindow* self = unwrap<wxNode_wxWindow>(args.This());

  
  /*
   * id: _42964
   */
  if(args.Length() == 0) {
    

    self->GetNextSibling();

    return v8::Undefined();
  }
  

  std::ostringstream errStr;
  errStr << "Could not find matching method for arguments (method name: GetNextSibling).\n";                           \
  errStr << "  arg count: " << args.Length() << "\n";
  for(int i = 0; i < args.Length(); i++) {
    v8::String::AsciiValue argStr(args[i]);
    errStr << "  arg[" << i << "]: " << *argStr << "\n";
  }
  return v8::ThrowException(v8::Exception::TypeError(v8::String::New(errStr.str().c_str())));
}

/*static*/ v8::Handle<v8::Value> wxNode_wxWindow::_GetParent(const v8::Arguments& args) {
  v8::HandleScope scope;
  wxNode_wxWindow* self = unwrap<wxNode_wxWindow>(args.This());

  
  /*
   * id: _42965
   */
  if(args.Length() == 0) {
    

    self->GetParent();

    return v8::Undefined();
  }
  

  std::ostringstream errStr;
  errStr << "Could not find matching method for arguments (method name: GetParent).\n";                           \
  errStr << "  arg count: " << args.Length() << "\n";
  for(int i = 0; i < args.Length(); i++) {
    v8::String::AsciiValue argStr(args[i]);
    errStr << "  arg[" << i << "]: " << *argStr << "\n";
  }
  return v8::ThrowException(v8::Exception::TypeError(v8::String::New(errStr.str().c_str())));
}

/*static*/ v8::Handle<v8::Value> wxNode_wxWindow::_GetGrandParent(const v8::Arguments& args) {
  v8::HandleScope scope;
  wxNode_wxWindow* self = unwrap<wxNode_wxWindow>(args.This());

  
  /*
   * id: _42966
   */
  if(args.Length() == 0) {
    

    self->GetGrandParent();

    return v8::Undefined();
  }
  

  std::ostringstream errStr;
  errStr << "Could not find matching method for arguments (method name: GetGrandParent).\n";                           \
  errStr << "  arg count: " << args.Length() << "\n";
  for(int i = 0; i < args.Length(); i++) {
    v8::String::AsciiValue argStr(args[i]);
    errStr << "  arg[" << i << "]: " << *argStr << "\n";
  }
  return v8::ThrowException(v8::Exception::TypeError(v8::String::New(errStr.str().c_str())));
}

/*static*/ v8::Handle<v8::Value> wxNode_wxWindow::_IsTopLevel(const v8::Arguments& args) {
  v8::HandleScope scope;
  wxNode_wxWindow* self = unwrap<wxNode_wxWindow>(args.This());

  
  /*
   * id: _42967
   */
  if(args.Length() == 0) {
    

    self->IsTopLevel();

    return v8::Undefined();
  }
  

  std::ostringstream errStr;
  errStr << "Could not find matching method for arguments (method name: IsTopLevel).\n";                           \
  errStr << "  arg count: " << args.Length() << "\n";
  for(int i = 0; i < args.Length(); i++) {
    v8::String::AsciiValue argStr(args[i]);
    errStr << "  arg[" << i << "]: " << *argStr << "\n";
  }
  return v8::ThrowException(v8::Exception::TypeError(v8::String::New(errStr.str().c_str())));
}

/*static*/ v8::Handle<v8::Value> wxNode_wxWindow::_SetParent(const v8::Arguments& args) {
  v8::HandleScope scope;
  wxNode_wxWindow* self = unwrap<wxNode_wxWindow>(args.This());

  
  /*
   * id: _42968
   */
  if(args.Length() == 1 && (args[0]->IsNull() || args[0]->IsObject())) {
    wxNode_wxWindow* parent = args[0]->IsNull() ? NULL : wxNodeObject::unwrap<wxNode_wxWindow>(args[0]->ToObject()); /* type: _51604 * */
    

    self->SetParent(parent);

    return v8::Undefined();
  }
  

  std::ostringstream errStr;
  errStr << "Could not find matching method for arguments (method name: SetParent).\n";                           \
  errStr << "  arg count: " << args.Length() << "\n";
  for(int i = 0; i < args.Length(); i++) {
    v8::String::AsciiValue argStr(args[i]);
    errStr << "  arg[" << i << "]: " << *argStr << "\n";
  }
  return v8::ThrowException(v8::Exception::TypeError(v8::String::New(errStr.str().c_str())));
}

/*static*/ v8::Handle<v8::Value> wxNode_wxWindow::_Reparent(const v8::Arguments& args) {
  v8::HandleScope scope;
  wxNode_wxWindow* self = unwrap<wxNode_wxWindow>(args.This());

  
  /*
   * id: _42969
   */
  if(args.Length() == 1 && (args[0]->IsNull() || args[0]->IsObject())) {
    wxNode_wxWindow* newParent = args[0]->IsNull() ? NULL : wxNodeObject::unwrap<wxNode_wxWindow>(args[0]->ToObject()); /* type: _51604 * */
    

    self->Reparent(newParent);

    return v8::Undefined();
  }
  

  std::ostringstream errStr;
  errStr << "Could not find matching method for arguments (method name: Reparent).\n";                           \
  errStr << "  arg count: " << args.Length() << "\n";
  for(int i = 0; i < args.Length(); i++) {
    v8::String::AsciiValue argStr(args[i]);
    errStr << "  arg[" << i << "]: " << *argStr << "\n";
  }
  return v8::ThrowException(v8::Exception::TypeError(v8::String::New(errStr.str().c_str())));
}

/*static*/ v8::Handle<v8::Value> wxNode_wxWindow::_AddChild(const v8::Arguments& args) {
  v8::HandleScope scope;
  wxNode_wxWindow* self = unwrap<wxNode_wxWindow>(args.This());

  
  /*
   * id: _42970
   */
  if(args.Length() == 1 && (args[0]->IsNull() || args[0]->IsObject())) {
    wxNode_wxWindow* child = args[0]->IsNull() ? NULL : wxNodeObject::unwrap<wxNode_wxWindow>(args[0]->ToObject()); /* type: _51604 * */
    

    self->AddChild(child);

    return v8::Undefined();
  }
  

  std::ostringstream errStr;
  errStr << "Could not find matching method for arguments (method name: AddChild).\n";                           \
  errStr << "  arg count: " << args.Length() << "\n";
  for(int i = 0; i < args.Length(); i++) {
    v8::String::AsciiValue argStr(args[i]);
    errStr << "  arg[" << i << "]: " << *argStr << "\n";
  }
  return v8::ThrowException(v8::Exception::TypeError(v8::String::New(errStr.str().c_str())));
}

/*static*/ v8::Handle<v8::Value> wxNode_wxWindow::_RemoveChild(const v8::Arguments& args) {
  v8::HandleScope scope;
  wxNode_wxWindow* self = unwrap<wxNode_wxWindow>(args.This());

  
  /*
   * id: _42971
   */
  if(args.Length() == 1 && (args[0]->IsNull() || args[0]->IsObject())) {
    wxNode_wxWindow* child = args[0]->IsNull() ? NULL : wxNodeObject::unwrap<wxNode_wxWindow>(args[0]->ToObject()); /* type: _51604 * */
    

    self->RemoveChild(child);

    return v8::Undefined();
  }
  

  std::ostringstream errStr;
  errStr << "Could not find matching method for arguments (method name: RemoveChild).\n";                           \
  errStr << "  arg count: " << args.Length() << "\n";
  for(int i = 0; i < args.Length(); i++) {
    v8::String::AsciiValue argStr(args[i]);
    errStr << "  arg[" << i << "]: " << *argStr << "\n";
  }
  return v8::ThrowException(v8::Exception::TypeError(v8::String::New(errStr.str().c_str())));
}

/*static*/ v8::Handle<v8::Value> wxNode_wxWindow::_IsClientAreaChild(const v8::Arguments& args) {
  v8::HandleScope scope;
  wxNode_wxWindow* self = unwrap<wxNode_wxWindow>(args.This());

  
  /*
   * id: _42972
   */
  if(args.Length() == 1 && (args[0]->IsNull() || args[0]->IsObject())) {
    wxNode_wxWindow* arg0 = args[0]->IsNull() ? NULL : wxNodeObject::unwrap<wxNode_wxWindow>(args[0]->ToObject()); /* type: _62099 * */
    

    self->IsClientAreaChild(arg0);

    return v8::Undefined();
  }
  

  std::ostringstream errStr;
  errStr << "Could not find matching method for arguments (method name: IsClientAreaChild).\n";                           \
  errStr << "  arg count: " << args.Length() << "\n";
  for(int i = 0; i < args.Length(); i++) {
    v8::String::AsciiValue argStr(args[i]);
    errStr << "  arg[" << i << "]: " << *argStr << "\n";
  }
  return v8::ThrowException(v8::Exception::TypeError(v8::String::New(errStr.str().c_str())));
}

/*static*/ v8::Handle<v8::Value> wxNode_wxWindow::_FindWindow(const v8::Arguments& args) {
  v8::HandleScope scope;
  wxNode_wxWindow* self = unwrap<wxNode_wxWindow>(args.This());

  
  /*
   * id: _42973
   */
  if(args.Length() == 1 && args[0]->IsNumber()) {
    long int winid = (long int)args[0]->ToInt32()->Value(); /* type: _586  */
    

    self->FindWindow(winid);

    return v8::Undefined();
  }
  
  /*
   * id: _42974
   */
  if(args.Length() == 1 && args[0]->IsString()) {
    v8::String::AsciiValue name(args[0]->ToString()); /* type: _14808  */
    

    self->FindWindow(*name);

    return v8::Undefined();
  }
  

  std::ostringstream errStr;
  errStr << "Could not find matching method for arguments (method name: FindWindow).\n";                           \
  errStr << "  arg count: " << args.Length() << "\n";
  for(int i = 0; i < args.Length(); i++) {
    v8::String::AsciiValue argStr(args[i]);
    errStr << "  arg[" << i << "]: " << *argStr << "\n";
  }
  return v8::ThrowException(v8::Exception::TypeError(v8::String::New(errStr.str().c_str())));
}

/*static*/ v8::Handle<v8::Value> wxNode_wxWindow::_FindWindowById(const v8::Arguments& args) {
  v8::HandleScope scope;
  wxNode_wxWindow* self = unwrap<wxNode_wxWindow>(args.This());

  
  /*
   * id: _42975
   */
  if(args.Length() == 2 && args[0]->IsNumber() && (args[1]->IsNull() || args[1]->IsObject())) {
    long int winid = (long int)args[0]->ToInt32()->Value(); /* type: _586  */
    wxNode_wxWindow* parent = args[1]->IsNull() ? NULL : wxNodeObject::unwrap<wxNode_wxWindow>(args[1]->ToObject()); /* type: _62099 * */
    

    self->FindWindowById(winid, parent);

    return v8::Undefined();
  }
  
  /*
   * id: _42975
   */
  if(args.Length() == 1 && args[0]->IsNumber()) {
    long int winid = (long int)args[0]->ToInt32()->Value(); /* type: _586  */
    

    self->FindWindowById(winid);

    return v8::Undefined();
  }
  

  std::ostringstream errStr;
  errStr << "Could not find matching method for arguments (method name: FindWindowById).\n";                           \
  errStr << "  arg count: " << args.Length() << "\n";
  for(int i = 0; i < args.Length(); i++) {
    v8::String::AsciiValue argStr(args[i]);
    errStr << "  arg[" << i << "]: " << *argStr << "\n";
  }
  return v8::ThrowException(v8::Exception::TypeError(v8::String::New(errStr.str().c_str())));
}

/*static*/ v8::Handle<v8::Value> wxNode_wxWindow::_FindWindowByName(const v8::Arguments& args) {
  v8::HandleScope scope;
  wxNode_wxWindow* self = unwrap<wxNode_wxWindow>(args.This());

  
  /*
   * id: _42976
   */
  if(args.Length() == 2 && args[0]->IsString() && (args[1]->IsNull() || args[1]->IsObject())) {
    v8::String::AsciiValue name(args[0]->ToString()); /* type: _14808  */
    wxNode_wxWindow* parent = args[1]->IsNull() ? NULL : wxNodeObject::unwrap<wxNode_wxWindow>(args[1]->ToObject()); /* type: _62099 * */
    

    self->FindWindowByName(*name, parent);

    return v8::Undefined();
  }
  
  /*
   * id: _42976
   */
  if(args.Length() == 1 && args[0]->IsString()) {
    v8::String::AsciiValue name(args[0]->ToString()); /* type: _14808  */
    

    self->FindWindowByName(*name);

    return v8::Undefined();
  }
  

  std::ostringstream errStr;
  errStr << "Could not find matching method for arguments (method name: FindWindowByName).\n";                           \
  errStr << "  arg count: " << args.Length() << "\n";
  for(int i = 0; i < args.Length(); i++) {
    v8::String::AsciiValue argStr(args[i]);
    errStr << "  arg[" << i << "]: " << *argStr << "\n";
  }
  return v8::ThrowException(v8::Exception::TypeError(v8::String::New(errStr.str().c_str())));
}

/*static*/ v8::Handle<v8::Value> wxNode_wxWindow::_FindWindowByLabel(const v8::Arguments& args) {
  v8::HandleScope scope;
  wxNode_wxWindow* self = unwrap<wxNode_wxWindow>(args.This());

  
  /*
   * id: _42977
   */
  if(args.Length() == 2 && args[0]->IsString() && (args[1]->IsNull() || args[1]->IsObject())) {
    v8::String::AsciiValue label(args[0]->ToString()); /* type: _14808  */
    wxNode_wxWindow* parent = args[1]->IsNull() ? NULL : wxNodeObject::unwrap<wxNode_wxWindow>(args[1]->ToObject()); /* type: _62099 * */
    

    self->FindWindowByLabel(*label, parent);

    return v8::Undefined();
  }
  
  /*
   * id: _42977
   */
  if(args.Length() == 1 && args[0]->IsString()) {
    v8::String::AsciiValue label(args[0]->ToString()); /* type: _14808  */
    

    self->FindWindowByLabel(*label);

    return v8::Undefined();
  }
  

  std::ostringstream errStr;
  errStr << "Could not find matching method for arguments (method name: FindWindowByLabel).\n";                           \
  errStr << "  arg count: " << args.Length() << "\n";
  for(int i = 0; i < args.Length(); i++) {
    v8::String::AsciiValue argStr(args[i]);
    errStr << "  arg[" << i << "]: " << *argStr << "\n";
  }
  return v8::ThrowException(v8::Exception::TypeError(v8::String::New(errStr.str().c_str())));
}

/*static*/ v8::Handle<v8::Value> wxNode_wxWindow::_GetEventHandler(const v8::Arguments& args) {
  v8::HandleScope scope;
  wxNode_wxWindow* self = unwrap<wxNode_wxWindow>(args.This());

  
  /*
   * id: _42978
   */
  if(args.Length() == 0) {
    

    self->GetEventHandler();

    return v8::Undefined();
  }
  

  std::ostringstream errStr;
  errStr << "Could not find matching method for arguments (method name: GetEventHandler).\n";                           \
  errStr << "  arg count: " << args.Length() << "\n";
  for(int i = 0; i < args.Length(); i++) {
    v8::String::AsciiValue argStr(args[i]);
    errStr << "  arg[" << i << "]: " << *argStr << "\n";
  }
  return v8::ThrowException(v8::Exception::TypeError(v8::String::New(errStr.str().c_str())));
}

/*static*/ v8::Handle<v8::Value> wxNode_wxWindow::_SetEventHandler(const v8::Arguments& args) {
  v8::HandleScope scope;
  wxNode_wxWindow* self = unwrap<wxNode_wxWindow>(args.This());

  
  /*
   * id: _42979
   */
  if(args.Length() == 1 && (args[0]->IsNull() || args[0]->IsObject())) {
    wxNode_wxEvtHandler* handler = args[0]->IsNull() ? NULL : wxNodeObject::unwrap<wxNode_wxEvtHandler>(args[0]->ToObject()); /* type: _1665 * */
    

    self->SetEventHandler(handler);

    return v8::Undefined();
  }
  

  std::ostringstream errStr;
  errStr << "Could not find matching method for arguments (method name: SetEventHandler).\n";                           \
  errStr << "  arg count: " << args.Length() << "\n";
  for(int i = 0; i < args.Length(); i++) {
    v8::String::AsciiValue argStr(args[i]);
    errStr << "  arg[" << i << "]: " << *argStr << "\n";
  }
  return v8::ThrowException(v8::Exception::TypeError(v8::String::New(errStr.str().c_str())));
}

/*static*/ v8::Handle<v8::Value> wxNode_wxWindow::_PushEventHandler(const v8::Arguments& args) {
  v8::HandleScope scope;
  wxNode_wxWindow* self = unwrap<wxNode_wxWindow>(args.This());

  
  /*
   * id: _42980
   */
  if(args.Length() == 1 && (args[0]->IsNull() || args[0]->IsObject())) {
    wxNode_wxEvtHandler* handler = args[0]->IsNull() ? NULL : wxNodeObject::unwrap<wxNode_wxEvtHandler>(args[0]->ToObject()); /* type: _1665 * */
    

    self->PushEventHandler(handler);

    return v8::Undefined();
  }
  

  std::ostringstream errStr;
  errStr << "Could not find matching method for arguments (method name: PushEventHandler).\n";                           \
  errStr << "  arg count: " << args.Length() << "\n";
  for(int i = 0; i < args.Length(); i++) {
    v8::String::AsciiValue argStr(args[i]);
    errStr << "  arg[" << i << "]: " << *argStr << "\n";
  }
  return v8::ThrowException(v8::Exception::TypeError(v8::String::New(errStr.str().c_str())));
}

/*static*/ v8::Handle<v8::Value> wxNode_wxWindow::_PopEventHandler(const v8::Arguments& args) {
  v8::HandleScope scope;
  wxNode_wxWindow* self = unwrap<wxNode_wxWindow>(args.This());

  
  /*
   * id: _42981
   */
  if(args.Length() == 1 && args[0]->IsBoolean()) {
    bool deleteHandler = args[0]->ToBoolean()->Value(); /* type: _14666  */
    

    self->PopEventHandler(deleteHandler);

    return v8::Undefined();
  }
  
  /*
   * id: _42981
   */
  if(args.Length() == 0) {
    

    self->PopEventHandler();

    return v8::Undefined();
  }
  

  std::ostringstream errStr;
  errStr << "Could not find matching method for arguments (method name: PopEventHandler).\n";                           \
  errStr << "  arg count: " << args.Length() << "\n";
  for(int i = 0; i < args.Length(); i++) {
    v8::String::AsciiValue argStr(args[i]);
    errStr << "  arg[" << i << "]: " << *argStr << "\n";
  }
  return v8::ThrowException(v8::Exception::TypeError(v8::String::New(errStr.str().c_str())));
}

/*static*/ v8::Handle<v8::Value> wxNode_wxWindow::_RemoveEventHandler(const v8::Arguments& args) {
  v8::HandleScope scope;
  wxNode_wxWindow* self = unwrap<wxNode_wxWindow>(args.This());

  
  /*
   * id: _42982
   */
  if(args.Length() == 1 && (args[0]->IsNull() || args[0]->IsObject())) {
    wxNode_wxEvtHandler* handler = args[0]->IsNull() ? NULL : wxNodeObject::unwrap<wxNode_wxEvtHandler>(args[0]->ToObject()); /* type: _1665 * */
    

    self->RemoveEventHandler(handler);

    return v8::Undefined();
  }
  

  std::ostringstream errStr;
  errStr << "Could not find matching method for arguments (method name: RemoveEventHandler).\n";                           \
  errStr << "  arg count: " << args.Length() << "\n";
  for(int i = 0; i < args.Length(); i++) {
    v8::String::AsciiValue argStr(args[i]);
    errStr << "  arg[" << i << "]: " << *argStr << "\n";
  }
  return v8::ThrowException(v8::Exception::TypeError(v8::String::New(errStr.str().c_str())));
}

/*static*/ v8::Handle<v8::Value> wxNode_wxWindow::_ProcessWindowEvent(const v8::Arguments& args) {
  v8::HandleScope scope;
  wxNode_wxWindow* self = unwrap<wxNode_wxWindow>(args.This());

  
  /*
   * id: _42983
   */
  if(args.Length() == 1 && (args[0]->IsNull() || args[0]->IsObject())) {
    wxNode_wxEvent* event = args[0]->IsNull() ? NULL : wxNodeObject::unwrap<wxNode_wxEvent>(args[0]->ToObject()); /* type: _59065  */
    

    self->ProcessWindowEvent(*event);

    return v8::Undefined();
  }
  

  std::ostringstream errStr;
  errStr << "Could not find matching method for arguments (method name: ProcessWindowEvent).\n";                           \
  errStr << "  arg count: " << args.Length() << "\n";
  for(int i = 0; i < args.Length(); i++) {
    v8::String::AsciiValue argStr(args[i]);
    errStr << "  arg[" << i << "]: " << *argStr << "\n";
  }
  return v8::ThrowException(v8::Exception::TypeError(v8::String::New(errStr.str().c_str())));
}

/*static*/ v8::Handle<v8::Value> wxNode_wxWindow::_ProcessWindowEventLocally(const v8::Arguments& args) {
  v8::HandleScope scope;
  wxNode_wxWindow* self = unwrap<wxNode_wxWindow>(args.This());

  
  /*
   * id: _42984
   */
  if(args.Length() == 1 && (args[0]->IsNull() || args[0]->IsObject())) {
    wxNode_wxEvent* event = args[0]->IsNull() ? NULL : wxNodeObject::unwrap<wxNode_wxEvent>(args[0]->ToObject()); /* type: _59065  */
    

    self->ProcessWindowEventLocally(*event);

    return v8::Undefined();
  }
  

  std::ostringstream errStr;
  errStr << "Could not find matching method for arguments (method name: ProcessWindowEventLocally).\n";                           \
  errStr << "  arg count: " << args.Length() << "\n";
  for(int i = 0; i < args.Length(); i++) {
    v8::String::AsciiValue argStr(args[i]);
    errStr << "  arg[" << i << "]: " << *argStr << "\n";
  }
  return v8::ThrowException(v8::Exception::TypeError(v8::String::New(errStr.str().c_str())));
}

/*static*/ v8::Handle<v8::Value> wxNode_wxWindow::_HandleWindowEvent(const v8::Arguments& args) {
  v8::HandleScope scope;
  wxNode_wxWindow* self = unwrap<wxNode_wxWindow>(args.This());

  
  /*
   * id: _42985
   */
  if(args.Length() == 1 && (args[0]->IsNull() || args[0]->IsObject())) {
    wxNode_wxEvent* event = args[0]->IsNull() ? NULL : wxNodeObject::unwrap<wxNode_wxEvent>(args[0]->ToObject()); /* type: _59065  */
    

    self->HandleWindowEvent(*event);

    return v8::Undefined();
  }
  

  std::ostringstream errStr;
  errStr << "Could not find matching method for arguments (method name: HandleWindowEvent).\n";                           \
  errStr << "  arg count: " << args.Length() << "\n";
  for(int i = 0; i < args.Length(); i++) {
    v8::String::AsciiValue argStr(args[i]);
    errStr << "  arg[" << i << "]: " << *argStr << "\n";
  }
  return v8::ThrowException(v8::Exception::TypeError(v8::String::New(errStr.str().c_str())));
}

/*static*/ v8::Handle<v8::Value> wxNode_wxWindow::_SetNextHandler(const v8::Arguments& args) {
  v8::HandleScope scope;
  wxNode_wxWindow* self = unwrap<wxNode_wxWindow>(args.This());

  
  /*
   * id: _42986
   */
  if(args.Length() == 1 && (args[0]->IsNull() || args[0]->IsObject())) {
    wxNode_wxEvtHandler* handler = args[0]->IsNull() ? NULL : wxNodeObject::unwrap<wxNode_wxEvtHandler>(args[0]->ToObject()); /* type: _1665 * */
    

    self->SetNextHandler(handler);

    return v8::Undefined();
  }
  

  std::ostringstream errStr;
  errStr << "Could not find matching method for arguments (method name: SetNextHandler).\n";                           \
  errStr << "  arg count: " << args.Length() << "\n";
  for(int i = 0; i < args.Length(); i++) {
    v8::String::AsciiValue argStr(args[i]);
    errStr << "  arg[" << i << "]: " << *argStr << "\n";
  }
  return v8::ThrowException(v8::Exception::TypeError(v8::String::New(errStr.str().c_str())));
}

/*static*/ v8::Handle<v8::Value> wxNode_wxWindow::_SetPreviousHandler(const v8::Arguments& args) {
  v8::HandleScope scope;
  wxNode_wxWindow* self = unwrap<wxNode_wxWindow>(args.This());

  
  /*
   * id: _42987
   */
  if(args.Length() == 1 && (args[0]->IsNull() || args[0]->IsObject())) {
    wxNode_wxEvtHandler* handler = args[0]->IsNull() ? NULL : wxNodeObject::unwrap<wxNode_wxEvtHandler>(args[0]->ToObject()); /* type: _1665 * */
    

    self->SetPreviousHandler(handler);

    return v8::Undefined();
  }
  

  std::ostringstream errStr;
  errStr << "Could not find matching method for arguments (method name: SetPreviousHandler).\n";                           \
  errStr << "  arg count: " << args.Length() << "\n";
  for(int i = 0; i < args.Length(); i++) {
    v8::String::AsciiValue argStr(args[i]);
    errStr << "  arg[" << i << "]: " << *argStr << "\n";
  }
  return v8::ThrowException(v8::Exception::TypeError(v8::String::New(errStr.str().c_str())));
}

/*static*/ v8::Handle<v8::Value> wxNode_wxWindow::_SetValidator(const v8::Arguments& args) {
  v8::HandleScope scope;
  wxNode_wxWindow* self = unwrap<wxNode_wxWindow>(args.This());

  
  /*
   * id: _42988
   */
  if(args.Length() == 1 && (args[0]->IsNull() || args[0]->IsObject())) {
    wxNode_wxValidator* validator = args[0]->IsNull() ? NULL : wxNodeObject::unwrap<wxNode_wxValidator>(args[0]->ToObject()); /* type: _59059  */
    

    self->SetValidator(*validator);

    return v8::Undefined();
  }
  

  std::ostringstream errStr;
  errStr << "Could not find matching method for arguments (method name: SetValidator).\n";                           \
  errStr << "  arg count: " << args.Length() << "\n";
  for(int i = 0; i < args.Length(); i++) {
    v8::String::AsciiValue argStr(args[i]);
    errStr << "  arg[" << i << "]: " << *argStr << "\n";
  }
  return v8::ThrowException(v8::Exception::TypeError(v8::String::New(errStr.str().c_str())));
}

/*static*/ v8::Handle<v8::Value> wxNode_wxWindow::_GetValidator(const v8::Arguments& args) {
  v8::HandleScope scope;
  wxNode_wxWindow* self = unwrap<wxNode_wxWindow>(args.This());

  
  /*
   * id: _42989
   */
  if(args.Length() == 0) {
    

    self->GetValidator();

    return v8::Undefined();
  }
  

  std::ostringstream errStr;
  errStr << "Could not find matching method for arguments (method name: GetValidator).\n";                           \
  errStr << "  arg count: " << args.Length() << "\n";
  for(int i = 0; i < args.Length(); i++) {
    v8::String::AsciiValue argStr(args[i]);
    errStr << "  arg[" << i << "]: " << *argStr << "\n";
  }
  return v8::ThrowException(v8::Exception::TypeError(v8::String::New(errStr.str().c_str())));
}

/*static*/ v8::Handle<v8::Value> wxNode_wxWindow::_Validate(const v8::Arguments& args) {
  v8::HandleScope scope;
  wxNode_wxWindow* self = unwrap<wxNode_wxWindow>(args.This());

  
  /*
   * id: _42990
   */
  if(args.Length() == 0) {
    

    self->Validate();

    return v8::Undefined();
  }
  

  std::ostringstream errStr;
  errStr << "Could not find matching method for arguments (method name: Validate).\n";                           \
  errStr << "  arg count: " << args.Length() << "\n";
  for(int i = 0; i < args.Length(); i++) {
    v8::String::AsciiValue argStr(args[i]);
    errStr << "  arg[" << i << "]: " << *argStr << "\n";
  }
  return v8::ThrowException(v8::Exception::TypeError(v8::String::New(errStr.str().c_str())));
}

/*static*/ v8::Handle<v8::Value> wxNode_wxWindow::_TransferDataToWindow(const v8::Arguments& args) {
  v8::HandleScope scope;
  wxNode_wxWindow* self = unwrap<wxNode_wxWindow>(args.This());

  
  /*
   * id: _42991
   */
  if(args.Length() == 0) {
    

    self->TransferDataToWindow();

    return v8::Undefined();
  }
  

  std::ostringstream errStr;
  errStr << "Could not find matching method for arguments (method name: TransferDataToWindow).\n";                           \
  errStr << "  arg count: " << args.Length() << "\n";
  for(int i = 0; i < args.Length(); i++) {
    v8::String::AsciiValue argStr(args[i]);
    errStr << "  arg[" << i << "]: " << *argStr << "\n";
  }
  return v8::ThrowException(v8::Exception::TypeError(v8::String::New(errStr.str().c_str())));
}

/*static*/ v8::Handle<v8::Value> wxNode_wxWindow::_TransferDataFromWindow(const v8::Arguments& args) {
  v8::HandleScope scope;
  wxNode_wxWindow* self = unwrap<wxNode_wxWindow>(args.This());

  
  /*
   * id: _42992
   */
  if(args.Length() == 0) {
    

    self->TransferDataFromWindow();

    return v8::Undefined();
  }
  

  std::ostringstream errStr;
  errStr << "Could not find matching method for arguments (method name: TransferDataFromWindow).\n";                           \
  errStr << "  arg count: " << args.Length() << "\n";
  for(int i = 0; i < args.Length(); i++) {
    v8::String::AsciiValue argStr(args[i]);
    errStr << "  arg[" << i << "]: " << *argStr << "\n";
  }
  return v8::ThrowException(v8::Exception::TypeError(v8::String::New(errStr.str().c_str())));
}

/*static*/ v8::Handle<v8::Value> wxNode_wxWindow::_InitDialog(const v8::Arguments& args) {
  v8::HandleScope scope;
  wxNode_wxWindow* self = unwrap<wxNode_wxWindow>(args.This());

  
  /*
   * id: _42993
   */
  if(args.Length() == 0) {
    

    self->InitDialog();

    return v8::Undefined();
  }
  

  std::ostringstream errStr;
  errStr << "Could not find matching method for arguments (method name: InitDialog).\n";                           \
  errStr << "  arg count: " << args.Length() << "\n";
  for(int i = 0; i < args.Length(); i++) {
    v8::String::AsciiValue argStr(args[i]);
    errStr << "  arg[" << i << "]: " << *argStr << "\n";
  }
  return v8::ThrowException(v8::Exception::TypeError(v8::String::New(errStr.str().c_str())));
}

/*static*/ v8::Handle<v8::Value> wxNode_wxWindow::_SetAcceleratorTable(const v8::Arguments& args) {
  v8::HandleScope scope;
  wxNode_wxWindow* self = unwrap<wxNode_wxWindow>(args.This());

  
  /*
   * id: _42994
   */
  if(args.Length() == 1 && (args[0]->IsNull() || args[0]->IsObject())) {
    wxNode_wxAcceleratorTable* accel = args[0]->IsNull() ? NULL : wxNodeObject::unwrap<wxNode_wxAcceleratorTable>(args[0]->ToObject()); /* type: _64755  */
    

    self->SetAcceleratorTable(*accel);

    return v8::Undefined();
  }
  

  std::ostringstream errStr;
  errStr << "Could not find matching method for arguments (method name: SetAcceleratorTable).\n";                           \
  errStr << "  arg count: " << args.Length() << "\n";
  for(int i = 0; i < args.Length(); i++) {
    v8::String::AsciiValue argStr(args[i]);
    errStr << "  arg[" << i << "]: " << *argStr << "\n";
  }
  return v8::ThrowException(v8::Exception::TypeError(v8::String::New(errStr.str().c_str())));
}

/*static*/ v8::Handle<v8::Value> wxNode_wxWindow::_GetAcceleratorTable(const v8::Arguments& args) {
  v8::HandleScope scope;
  wxNode_wxWindow* self = unwrap<wxNode_wxWindow>(args.This());

  
  /*
   * id: _42995
   */
  if(args.Length() == 0) {
    

    self->GetAcceleratorTable();

    return v8::Undefined();
  }
  

  std::ostringstream errStr;
  errStr << "Could not find matching method for arguments (method name: GetAcceleratorTable).\n";                           \
  errStr << "  arg count: " << args.Length() << "\n";
  for(int i = 0; i < args.Length(); i++) {
    v8::String::AsciiValue argStr(args[i]);
    errStr << "  arg[" << i << "]: " << *argStr << "\n";
  }
  return v8::ThrowException(v8::Exception::TypeError(v8::String::New(errStr.str().c_str())));
}

/*static*/ v8::Handle<v8::Value> wxNode_wxWindow::_ConvertPixelsToDialog(const v8::Arguments& args) {
  v8::HandleScope scope;
  wxNode_wxWindow* self = unwrap<wxNode_wxWindow>(args.This());

  
  /*
   * id: _42996
   */
  if(args.Length() == 1 && (args[0]->IsNull() || args[0]->IsObject())) {
    wxNode_wxPoint* pt = args[0]->IsNull() ? NULL : wxNodeObject::unwrap<wxNode_wxPoint>(args[0]->ToObject()); /* type: _20412  */
    

    self->ConvertPixelsToDialog(*pt);

    return v8::Undefined();
  }
  
  /*
   * id: _42998
   */
  if(args.Length() == 1 && (args[0]->IsNull() || args[0]->IsObject())) {
    wxNode_wxSize* sz = args[0]->IsNull() ? NULL : wxNodeObject::unwrap<wxNode_wxSize>(args[0]->ToObject()); /* type: _20522  */
    

    self->ConvertPixelsToDialog(*sz);

    return v8::Undefined();
  }
  

  std::ostringstream errStr;
  errStr << "Could not find matching method for arguments (method name: ConvertPixelsToDialog).\n";                           \
  errStr << "  arg count: " << args.Length() << "\n";
  for(int i = 0; i < args.Length(); i++) {
    v8::String::AsciiValue argStr(args[i]);
    errStr << "  arg[" << i << "]: " << *argStr << "\n";
  }
  return v8::ThrowException(v8::Exception::TypeError(v8::String::New(errStr.str().c_str())));
}

/*static*/ v8::Handle<v8::Value> wxNode_wxWindow::_ConvertDialogToPixels(const v8::Arguments& args) {
  v8::HandleScope scope;
  wxNode_wxWindow* self = unwrap<wxNode_wxWindow>(args.This());

  
  /*
   * id: _42997
   */
  if(args.Length() == 1 && (args[0]->IsNull() || args[0]->IsObject())) {
    wxNode_wxPoint* pt = args[0]->IsNull() ? NULL : wxNodeObject::unwrap<wxNode_wxPoint>(args[0]->ToObject()); /* type: _20412  */
    

    self->ConvertDialogToPixels(*pt);

    return v8::Undefined();
  }
  
  /*
   * id: _42999
   */
  if(args.Length() == 1 && (args[0]->IsNull() || args[0]->IsObject())) {
    wxNode_wxSize* sz = args[0]->IsNull() ? NULL : wxNodeObject::unwrap<wxNode_wxSize>(args[0]->ToObject()); /* type: _20522  */
    

    self->ConvertDialogToPixels(*sz);

    return v8::Undefined();
  }
  

  std::ostringstream errStr;
  errStr << "Could not find matching method for arguments (method name: ConvertDialogToPixels).\n";                           \
  errStr << "  arg count: " << args.Length() << "\n";
  for(int i = 0; i < args.Length(); i++) {
    v8::String::AsciiValue argStr(args[i]);
    errStr << "  arg[" << i << "]: " << *argStr << "\n";
  }
  return v8::ThrowException(v8::Exception::TypeError(v8::String::New(errStr.str().c_str())));
}

/*static*/ v8::Handle<v8::Value> wxNode_wxWindow::_WarpPointer(const v8::Arguments& args) {
  v8::HandleScope scope;
  wxNode_wxWindow* self = unwrap<wxNode_wxWindow>(args.This());

  
  /*
   * id: _43000
   */
  if(args.Length() == 2 && args[0]->IsNumber() && args[1]->IsNumber()) {
    int x = (int)args[0]->ToInt32()->Value(); /* type: _162  */
    int y = (int)args[1]->ToInt32()->Value(); /* type: _162  */
    

    self->WarpPointer(x, y);

    return v8::Undefined();
  }
  

  std::ostringstream errStr;
  errStr << "Could not find matching method for arguments (method name: WarpPointer).\n";                           \
  errStr << "  arg count: " << args.Length() << "\n";
  for(int i = 0; i < args.Length(); i++) {
    v8::String::AsciiValue argStr(args[i]);
    errStr << "  arg[" << i << "]: " << *argStr << "\n";
  }
  return v8::ThrowException(v8::Exception::TypeError(v8::String::New(errStr.str().c_str())));
}

/*static*/ v8::Handle<v8::Value> wxNode_wxWindow::_CaptureMouse(const v8::Arguments& args) {
  v8::HandleScope scope;
  wxNode_wxWindow* self = unwrap<wxNode_wxWindow>(args.This());

  
  /*
   * id: _43001
   */
  if(args.Length() == 0) {
    

    self->CaptureMouse();

    return v8::Undefined();
  }
  

  std::ostringstream errStr;
  errStr << "Could not find matching method for arguments (method name: CaptureMouse).\n";                           \
  errStr << "  arg count: " << args.Length() << "\n";
  for(int i = 0; i < args.Length(); i++) {
    v8::String::AsciiValue argStr(args[i]);
    errStr << "  arg[" << i << "]: " << *argStr << "\n";
  }
  return v8::ThrowException(v8::Exception::TypeError(v8::String::New(errStr.str().c_str())));
}

/*static*/ v8::Handle<v8::Value> wxNode_wxWindow::_ReleaseMouse(const v8::Arguments& args) {
  v8::HandleScope scope;
  wxNode_wxWindow* self = unwrap<wxNode_wxWindow>(args.This());

  
  /*
   * id: _43002
   */
  if(args.Length() == 0) {
    

    self->ReleaseMouse();

    return v8::Undefined();
  }
  

  std::ostringstream errStr;
  errStr << "Could not find matching method for arguments (method name: ReleaseMouse).\n";                           \
  errStr << "  arg count: " << args.Length() << "\n";
  for(int i = 0; i < args.Length(); i++) {
    v8::String::AsciiValue argStr(args[i]);
    errStr << "  arg[" << i << "]: " << *argStr << "\n";
  }
  return v8::ThrowException(v8::Exception::TypeError(v8::String::New(errStr.str().c_str())));
}

/*static*/ v8::Handle<v8::Value> wxNode_wxWindow::_GetCapture(const v8::Arguments& args) {
  v8::HandleScope scope;
  wxNode_wxWindow* self = unwrap<wxNode_wxWindow>(args.This());

  
  /*
   * id: _43003
   */
  if(args.Length() == 0) {
    

    self->GetCapture();

    return v8::Undefined();
  }
  

  std::ostringstream errStr;
  errStr << "Could not find matching method for arguments (method name: GetCapture).\n";                           \
  errStr << "  arg count: " << args.Length() << "\n";
  for(int i = 0; i < args.Length(); i++) {
    v8::String::AsciiValue argStr(args[i]);
    errStr << "  arg[" << i << "]: " << *argStr << "\n";
  }
  return v8::ThrowException(v8::Exception::TypeError(v8::String::New(errStr.str().c_str())));
}

/*static*/ v8::Handle<v8::Value> wxNode_wxWindow::_HasCapture(const v8::Arguments& args) {
  v8::HandleScope scope;
  wxNode_wxWindow* self = unwrap<wxNode_wxWindow>(args.This());

  
  /*
   * id: _43004
   */
  if(args.Length() == 0) {
    

    self->HasCapture();

    return v8::Undefined();
  }
  

  std::ostringstream errStr;
  errStr << "Could not find matching method for arguments (method name: HasCapture).\n";                           \
  errStr << "  arg count: " << args.Length() << "\n";
  for(int i = 0; i < args.Length(); i++) {
    v8::String::AsciiValue argStr(args[i]);
    errStr << "  arg[" << i << "]: " << *argStr << "\n";
  }
  return v8::ThrowException(v8::Exception::TypeError(v8::String::New(errStr.str().c_str())));
}

/*static*/ v8::Handle<v8::Value> wxNode_wxWindow::_Refresh(const v8::Arguments& args) {
  v8::HandleScope scope;
  wxNode_wxWindow* self = unwrap<wxNode_wxWindow>(args.This());

  
  /*
   * id: _43005
   */
  if(args.Length() == 2 && args[0]->IsBoolean() && (args[1]->IsNull() || args[1]->IsObject())) {
    bool eraseBackground = args[0]->ToBoolean()->Value(); /* type: _14666  */
    wxNode_wxRect* rect = args[1]->IsNull() ? NULL : wxNodeObject::unwrap<wxNode_wxRect>(args[1]->ToObject()); /* type: _59913 * */
    

    self->Refresh(eraseBackground, rect);

    return v8::Undefined();
  }
  
  /*
   * id: _43005
   */
  if(args.Length() == 1 && args[0]->IsBoolean()) {
    bool eraseBackground = args[0]->ToBoolean()->Value(); /* type: _14666  */
    

    self->Refresh(eraseBackground);

    return v8::Undefined();
  }
  
  /*
   * id: _43005
   */
  if(args.Length() == 0) {
    

    self->Refresh();

    return v8::Undefined();
  }
  

  std::ostringstream errStr;
  errStr << "Could not find matching method for arguments (method name: Refresh).\n";                           \
  errStr << "  arg count: " << args.Length() << "\n";
  for(int i = 0; i < args.Length(); i++) {
    v8::String::AsciiValue argStr(args[i]);
    errStr << "  arg[" << i << "]: " << *argStr << "\n";
  }
  return v8::ThrowException(v8::Exception::TypeError(v8::String::New(errStr.str().c_str())));
}

/*static*/ v8::Handle<v8::Value> wxNode_wxWindow::_RefreshRect(const v8::Arguments& args) {
  v8::HandleScope scope;
  wxNode_wxWindow* self = unwrap<wxNode_wxWindow>(args.This());

  
  /*
   * id: _43006
   */
  if(args.Length() == 2 && (args[0]->IsNull() || args[0]->IsObject()) && args[1]->IsBoolean()) {
    wxNode_wxRect* rect = args[0]->IsNull() ? NULL : wxNodeObject::unwrap<wxNode_wxRect>(args[0]->ToObject()); /* type: _24778  */
    bool eraseBackground = args[1]->ToBoolean()->Value(); /* type: _14666  */
    

    self->RefreshRect(*rect, eraseBackground);

    return v8::Undefined();
  }
  
  /*
   * id: _43006
   */
  if(args.Length() == 1 && (args[0]->IsNull() || args[0]->IsObject())) {
    wxNode_wxRect* rect = args[0]->IsNull() ? NULL : wxNodeObject::unwrap<wxNode_wxRect>(args[0]->ToObject()); /* type: _24778  */
    

    self->RefreshRect(*rect);

    return v8::Undefined();
  }
  

  std::ostringstream errStr;
  errStr << "Could not find matching method for arguments (method name: RefreshRect).\n";                           \
  errStr << "  arg count: " << args.Length() << "\n";
  for(int i = 0; i < args.Length(); i++) {
    v8::String::AsciiValue argStr(args[i]);
    errStr << "  arg[" << i << "]: " << *argStr << "\n";
  }
  return v8::ThrowException(v8::Exception::TypeError(v8::String::New(errStr.str().c_str())));
}

/*static*/ v8::Handle<v8::Value> wxNode_wxWindow::_Update(const v8::Arguments& args) {
  v8::HandleScope scope;
  wxNode_wxWindow* self = unwrap<wxNode_wxWindow>(args.This());

  
  /*
   * id: _43007
   */
  if(args.Length() == 0) {
    

    self->Update();

    return v8::Undefined();
  }
  

  std::ostringstream errStr;
  errStr << "Could not find matching method for arguments (method name: Update).\n";                           \
  errStr << "  arg count: " << args.Length() << "\n";
  for(int i = 0; i < args.Length(); i++) {
    v8::String::AsciiValue argStr(args[i]);
    errStr << "  arg[" << i << "]: " << *argStr << "\n";
  }
  return v8::ThrowException(v8::Exception::TypeError(v8::String::New(errStr.str().c_str())));
}

/*static*/ v8::Handle<v8::Value> wxNode_wxWindow::_ClearBackground(const v8::Arguments& args) {
  v8::HandleScope scope;
  wxNode_wxWindow* self = unwrap<wxNode_wxWindow>(args.This());

  
  /*
   * id: _43008
   */
  if(args.Length() == 0) {
    

    self->ClearBackground();

    return v8::Undefined();
  }
  

  std::ostringstream errStr;
  errStr << "Could not find matching method for arguments (method name: ClearBackground).\n";                           \
  errStr << "  arg count: " << args.Length() << "\n";
  for(int i = 0; i < args.Length(); i++) {
    v8::String::AsciiValue argStr(args[i]);
    errStr << "  arg[" << i << "]: " << *argStr << "\n";
  }
  return v8::ThrowException(v8::Exception::TypeError(v8::String::New(errStr.str().c_str())));
}

/*static*/ v8::Handle<v8::Value> wxNode_wxWindow::_Freeze(const v8::Arguments& args) {
  v8::HandleScope scope;
  wxNode_wxWindow* self = unwrap<wxNode_wxWindow>(args.This());

  
  /*
   * id: _43009
   */
  if(args.Length() == 0) {
    

    self->Freeze();

    return v8::Undefined();
  }
  

  std::ostringstream errStr;
  errStr << "Could not find matching method for arguments (method name: Freeze).\n";                           \
  errStr << "  arg count: " << args.Length() << "\n";
  for(int i = 0; i < args.Length(); i++) {
    v8::String::AsciiValue argStr(args[i]);
    errStr << "  arg[" << i << "]: " << *argStr << "\n";
  }
  return v8::ThrowException(v8::Exception::TypeError(v8::String::New(errStr.str().c_str())));
}

/*static*/ v8::Handle<v8::Value> wxNode_wxWindow::_Thaw(const v8::Arguments& args) {
  v8::HandleScope scope;
  wxNode_wxWindow* self = unwrap<wxNode_wxWindow>(args.This());

  
  /*
   * id: _43010
   */
  if(args.Length() == 0) {
    

    self->Thaw();

    return v8::Undefined();
  }
  

  std::ostringstream errStr;
  errStr << "Could not find matching method for arguments (method name: Thaw).\n";                           \
  errStr << "  arg count: " << args.Length() << "\n";
  for(int i = 0; i < args.Length(); i++) {
    v8::String::AsciiValue argStr(args[i]);
    errStr << "  arg[" << i << "]: " << *argStr << "\n";
  }
  return v8::ThrowException(v8::Exception::TypeError(v8::String::New(errStr.str().c_str())));
}

/*static*/ v8::Handle<v8::Value> wxNode_wxWindow::_IsFrozen(const v8::Arguments& args) {
  v8::HandleScope scope;
  wxNode_wxWindow* self = unwrap<wxNode_wxWindow>(args.This());

  
  /*
   * id: _43011
   */
  if(args.Length() == 0) {
    

    self->IsFrozen();

    return v8::Undefined();
  }
  

  std::ostringstream errStr;
  errStr << "Could not find matching method for arguments (method name: IsFrozen).\n";                           \
  errStr << "  arg count: " << args.Length() << "\n";
  for(int i = 0; i < args.Length(); i++) {
    v8::String::AsciiValue argStr(args[i]);
    errStr << "  arg[" << i << "]: " << *argStr << "\n";
  }
  return v8::ThrowException(v8::Exception::TypeError(v8::String::New(errStr.str().c_str())));
}

/*static*/ v8::Handle<v8::Value> wxNode_wxWindow::_PrepareDC(const v8::Arguments& args) {
  v8::HandleScope scope;
  wxNode_wxWindow* self = unwrap<wxNode_wxWindow>(args.This());

  
  /*
   * id: _43012
   */
  if(args.Length() == 1 && (args[0]->IsNull() || args[0]->IsObject())) {
    wxNode_wxDC* arg0 = args[0]->IsNull() ? NULL : wxNodeObject::unwrap<wxNode_wxDC>(args[0]->ToObject()); /* type: _58612  */
    

    self->PrepareDC(*arg0);

    return v8::Undefined();
  }
  

  std::ostringstream errStr;
  errStr << "Could not find matching method for arguments (method name: PrepareDC).\n";                           \
  errStr << "  arg count: " << args.Length() << "\n";
  for(int i = 0; i < args.Length(); i++) {
    v8::String::AsciiValue argStr(args[i]);
    errStr << "  arg[" << i << "]: " << *argStr << "\n";
  }
  return v8::ThrowException(v8::Exception::TypeError(v8::String::New(errStr.str().c_str())));
}

/*static*/ v8::Handle<v8::Value> wxNode_wxWindow::_IsDoubleBuffered(const v8::Arguments& args) {
  v8::HandleScope scope;
  wxNode_wxWindow* self = unwrap<wxNode_wxWindow>(args.This());

  
  /*
   * id: _43013
   */
  if(args.Length() == 0) {
    

    self->IsDoubleBuffered();

    return v8::Undefined();
  }
  

  std::ostringstream errStr;
  errStr << "Could not find matching method for arguments (method name: IsDoubleBuffered).\n";                           \
  errStr << "  arg count: " << args.Length() << "\n";
  for(int i = 0; i < args.Length(); i++) {
    v8::String::AsciiValue argStr(args[i]);
    errStr << "  arg[" << i << "]: " << *argStr << "\n";
  }
  return v8::ThrowException(v8::Exception::TypeError(v8::String::New(errStr.str().c_str())));
}

/*static*/ v8::Handle<v8::Value> wxNode_wxWindow::_GetUpdateRegion(const v8::Arguments& args) {
  v8::HandleScope scope;
  wxNode_wxWindow* self = unwrap<wxNode_wxWindow>(args.This());

  
  /*
   * id: _43014
   */
  if(args.Length() == 0) {
    

    self->GetUpdateRegion();

    return v8::Undefined();
  }
  
  /*
   * id: _43015
   */
  if(args.Length() == 0) {
    

    self->GetUpdateRegion();

    return v8::Undefined();
  }
  

  std::ostringstream errStr;
  errStr << "Could not find matching method for arguments (method name: GetUpdateRegion).\n";                           \
  errStr << "  arg count: " << args.Length() << "\n";
  for(int i = 0; i < args.Length(); i++) {
    v8::String::AsciiValue argStr(args[i]);
    errStr << "  arg[" << i << "]: " << *argStr << "\n";
  }
  return v8::ThrowException(v8::Exception::TypeError(v8::String::New(errStr.str().c_str())));
}

/*static*/ v8::Handle<v8::Value> wxNode_wxWindow::_GetUpdateClientRect(const v8::Arguments& args) {
  v8::HandleScope scope;
  wxNode_wxWindow* self = unwrap<wxNode_wxWindow>(args.This());

  
  /*
   * id: _43016
   */
  if(args.Length() == 0) {
    

    self->GetUpdateClientRect();

    return v8::Undefined();
  }
  

  std::ostringstream errStr;
  errStr << "Could not find matching method for arguments (method name: GetUpdateClientRect).\n";                           \
  errStr << "  arg count: " << args.Length() << "\n";
  for(int i = 0; i < args.Length(); i++) {
    v8::String::AsciiValue argStr(args[i]);
    errStr << "  arg[" << i << "]: " << *argStr << "\n";
  }
  return v8::ThrowException(v8::Exception::TypeError(v8::String::New(errStr.str().c_str())));
}

/*static*/ v8::Handle<v8::Value> wxNode_wxWindow::_DoIsExposed(const v8::Arguments& args) {
  v8::HandleScope scope;
  wxNode_wxWindow* self = unwrap<wxNode_wxWindow>(args.This());

  
  /*
   * id: _43017
   */
  if(args.Length() == 2 && args[0]->IsNumber() && args[1]->IsNumber()) {
    int x = (int)args[0]->ToInt32()->Value(); /* type: _162  */
    int y = (int)args[1]->ToInt32()->Value(); /* type: _162  */
    

    self->DoIsExposed(x, y);

    return v8::Undefined();
  }
  
  /*
   * id: _43018
   */
  if(args.Length() == 4 && args[0]->IsNumber() && args[1]->IsNumber() && args[2]->IsNumber() && args[3]->IsNumber()) {
    int x = (int)args[0]->ToInt32()->Value(); /* type: _162  */
    int y = (int)args[1]->ToInt32()->Value(); /* type: _162  */
    int w = (int)args[2]->ToInt32()->Value(); /* type: _162  */
    int h = (int)args[3]->ToInt32()->Value(); /* type: _162  */
    

    self->DoIsExposed(x, y, w, h);

    return v8::Undefined();
  }
  

  std::ostringstream errStr;
  errStr << "Could not find matching method for arguments (method name: DoIsExposed).\n";                           \
  errStr << "  arg count: " << args.Length() << "\n";
  for(int i = 0; i < args.Length(); i++) {
    v8::String::AsciiValue argStr(args[i]);
    errStr << "  arg[" << i << "]: " << *argStr << "\n";
  }
  return v8::ThrowException(v8::Exception::TypeError(v8::String::New(errStr.str().c_str())));
}

/*static*/ v8::Handle<v8::Value> wxNode_wxWindow::_IsExposed(const v8::Arguments& args) {
  v8::HandleScope scope;
  wxNode_wxWindow* self = unwrap<wxNode_wxWindow>(args.This());

  
  /*
   * id: _43019
   */
  if(args.Length() == 2 && args[0]->IsNumber() && args[1]->IsNumber()) {
    int x = (int)args[0]->ToInt32()->Value(); /* type: _162  */
    int y = (int)args[1]->ToInt32()->Value(); /* type: _162  */
    

    self->IsExposed(x, y);

    return v8::Undefined();
  }
  
  /*
   * id: _43020
   */
  if(args.Length() == 4 && args[0]->IsNumber() && args[1]->IsNumber() && args[2]->IsNumber() && args[3]->IsNumber()) {
    int x = (int)args[0]->ToInt32()->Value(); /* type: _162  */
    int y = (int)args[1]->ToInt32()->Value(); /* type: _162  */
    int w = (int)args[2]->ToInt32()->Value(); /* type: _162  */
    int h = (int)args[3]->ToInt32()->Value(); /* type: _162  */
    

    self->IsExposed(x, y, w, h);

    return v8::Undefined();
  }
  
  /*
   * id: _43021
   */
  if(args.Length() == 1 && (args[0]->IsNull() || args[0]->IsObject())) {
    wxNode_wxPoint* pt = args[0]->IsNull() ? NULL : wxNodeObject::unwrap<wxNode_wxPoint>(args[0]->ToObject()); /* type: _20412  */
    

    self->IsExposed(*pt);

    return v8::Undefined();
  }
  
  /*
   * id: _43022
   */
  if(args.Length() == 1 && (args[0]->IsNull() || args[0]->IsObject())) {
    wxNode_wxRect* rect = args[0]->IsNull() ? NULL : wxNodeObject::unwrap<wxNode_wxRect>(args[0]->ToObject()); /* type: _24778  */
    

    self->IsExposed(*rect);

    return v8::Undefined();
  }
  

  std::ostringstream errStr;
  errStr << "Could not find matching method for arguments (method name: IsExposed).\n";                           \
  errStr << "  arg count: " << args.Length() << "\n";
  for(int i = 0; i < args.Length(); i++) {
    v8::String::AsciiValue argStr(args[i]);
    errStr << "  arg[" << i << "]: " << *argStr << "\n";
  }
  return v8::ThrowException(v8::Exception::TypeError(v8::String::New(errStr.str().c_str())));
}

/*static*/ v8::Handle<v8::Value> wxNode_wxWindow::_GetDefaultAttributes(const v8::Arguments& args) {
  v8::HandleScope scope;
  wxNode_wxWindow* self = unwrap<wxNode_wxWindow>(args.This());

  
  /*
   * id: _43023
   */
  if(args.Length() == 0) {
    

    self->GetDefaultAttributes();

    return v8::Undefined();
  }
  

  std::ostringstream errStr;
  errStr << "Could not find matching method for arguments (method name: GetDefaultAttributes).\n";                           \
  errStr << "  arg count: " << args.Length() << "\n";
  for(int i = 0; i < args.Length(); i++) {
    v8::String::AsciiValue argStr(args[i]);
    errStr << "  arg[" << i << "]: " << *argStr << "\n";
  }
  return v8::ThrowException(v8::Exception::TypeError(v8::String::New(errStr.str().c_str())));
}

/*static*/ v8::Handle<v8::Value> wxNode_wxWindow::_GetClassDefaultAttributes(const v8::Arguments& args) {
  v8::HandleScope scope;
  wxNode_wxWindow* self = unwrap<wxNode_wxWindow>(args.This());

  
  /*
   * id: _43024
   */
  if(args.Length() == 1 && args[0]->IsNumber()) {
    wxWindowVariant variant; /* type: _10472  */
    

    self->GetClassDefaultAttributes(variant);

    return v8::Undefined();
  }
  
  /*
   * id: _43024
   */
  if(args.Length() == 0) {
    

    self->GetClassDefaultAttributes();

    return v8::Undefined();
  }
  

  std::ostringstream errStr;
  errStr << "Could not find matching method for arguments (method name: GetClassDefaultAttributes).\n";                           \
  errStr << "  arg count: " << args.Length() << "\n";
  for(int i = 0; i < args.Length(); i++) {
    v8::String::AsciiValue argStr(args[i]);
    errStr << "  arg[" << i << "]: " << *argStr << "\n";
  }
  return v8::ThrowException(v8::Exception::TypeError(v8::String::New(errStr.str().c_str())));
}

/*static*/ v8::Handle<v8::Value> wxNode_wxWindow::_SetBackgroundColour(const v8::Arguments& args) {
  v8::HandleScope scope;
  wxNode_wxWindow* self = unwrap<wxNode_wxWindow>(args.This());

  
  /*
   * id: _43025
   */
  if(args.Length() == 1 && (args[0]->IsNull() || args[0]->IsObject())) {
    wxNode_wxColour* colour = args[0]->IsNull() ? NULL : wxNodeObject::unwrap<wxNode_wxColour>(args[0]->ToObject()); /* type: _15512  */
    

    self->SetBackgroundColour(*colour);

    return v8::Undefined();
  }
  

  std::ostringstream errStr;
  errStr << "Could not find matching method for arguments (method name: SetBackgroundColour).\n";                           \
  errStr << "  arg count: " << args.Length() << "\n";
  for(int i = 0; i < args.Length(); i++) {
    v8::String::AsciiValue argStr(args[i]);
    errStr << "  arg[" << i << "]: " << *argStr << "\n";
  }
  return v8::ThrowException(v8::Exception::TypeError(v8::String::New(errStr.str().c_str())));
}

/*static*/ v8::Handle<v8::Value> wxNode_wxWindow::_SetOwnBackgroundColour(const v8::Arguments& args) {
  v8::HandleScope scope;
  wxNode_wxWindow* self = unwrap<wxNode_wxWindow>(args.This());

  
  /*
   * id: _43026
   */
  if(args.Length() == 1 && (args[0]->IsNull() || args[0]->IsObject())) {
    wxNode_wxColour* colour = args[0]->IsNull() ? NULL : wxNodeObject::unwrap<wxNode_wxColour>(args[0]->ToObject()); /* type: _15512  */
    

    self->SetOwnBackgroundColour(*colour);

    return v8::Undefined();
  }
  

  std::ostringstream errStr;
  errStr << "Could not find matching method for arguments (method name: SetOwnBackgroundColour).\n";                           \
  errStr << "  arg count: " << args.Length() << "\n";
  for(int i = 0; i < args.Length(); i++) {
    v8::String::AsciiValue argStr(args[i]);
    errStr << "  arg[" << i << "]: " << *argStr << "\n";
  }
  return v8::ThrowException(v8::Exception::TypeError(v8::String::New(errStr.str().c_str())));
}

/*static*/ v8::Handle<v8::Value> wxNode_wxWindow::_GetBackgroundColour(const v8::Arguments& args) {
  v8::HandleScope scope;
  wxNode_wxWindow* self = unwrap<wxNode_wxWindow>(args.This());

  
  /*
   * id: _43027
   */
  if(args.Length() == 0) {
    

    self->GetBackgroundColour();

    return v8::Undefined();
  }
  

  std::ostringstream errStr;
  errStr << "Could not find matching method for arguments (method name: GetBackgroundColour).\n";                           \
  errStr << "  arg count: " << args.Length() << "\n";
  for(int i = 0; i < args.Length(); i++) {
    v8::String::AsciiValue argStr(args[i]);
    errStr << "  arg[" << i << "]: " << *argStr << "\n";
  }
  return v8::ThrowException(v8::Exception::TypeError(v8::String::New(errStr.str().c_str())));
}

/*static*/ v8::Handle<v8::Value> wxNode_wxWindow::_InheritsBackgroundColour(const v8::Arguments& args) {
  v8::HandleScope scope;
  wxNode_wxWindow* self = unwrap<wxNode_wxWindow>(args.This());

  
  /*
   * id: _43028
   */
  if(args.Length() == 0) {
    

    self->InheritsBackgroundColour();

    return v8::Undefined();
  }
  

  std::ostringstream errStr;
  errStr << "Could not find matching method for arguments (method name: InheritsBackgroundColour).\n";                           \
  errStr << "  arg count: " << args.Length() << "\n";
  for(int i = 0; i < args.Length(); i++) {
    v8::String::AsciiValue argStr(args[i]);
    errStr << "  arg[" << i << "]: " << *argStr << "\n";
  }
  return v8::ThrowException(v8::Exception::TypeError(v8::String::New(errStr.str().c_str())));
}

/*static*/ v8::Handle<v8::Value> wxNode_wxWindow::_UseBgCol(const v8::Arguments& args) {
  v8::HandleScope scope;
  wxNode_wxWindow* self = unwrap<wxNode_wxWindow>(args.This());

  
  /*
   * id: _43029
   */
  if(args.Length() == 0) {
    

    self->UseBgCol();

    return v8::Undefined();
  }
  

  std::ostringstream errStr;
  errStr << "Could not find matching method for arguments (method name: UseBgCol).\n";                           \
  errStr << "  arg count: " << args.Length() << "\n";
  for(int i = 0; i < args.Length(); i++) {
    v8::String::AsciiValue argStr(args[i]);
    errStr << "  arg[" << i << "]: " << *argStr << "\n";
  }
  return v8::ThrowException(v8::Exception::TypeError(v8::String::New(errStr.str().c_str())));
}

/*static*/ v8::Handle<v8::Value> wxNode_wxWindow::_SetForegroundColour(const v8::Arguments& args) {
  v8::HandleScope scope;
  wxNode_wxWindow* self = unwrap<wxNode_wxWindow>(args.This());

  
  /*
   * id: _43030
   */
  if(args.Length() == 1 && (args[0]->IsNull() || args[0]->IsObject())) {
    wxNode_wxColour* colour = args[0]->IsNull() ? NULL : wxNodeObject::unwrap<wxNode_wxColour>(args[0]->ToObject()); /* type: _15512  */
    

    self->SetForegroundColour(*colour);

    return v8::Undefined();
  }
  

  std::ostringstream errStr;
  errStr << "Could not find matching method for arguments (method name: SetForegroundColour).\n";                           \
  errStr << "  arg count: " << args.Length() << "\n";
  for(int i = 0; i < args.Length(); i++) {
    v8::String::AsciiValue argStr(args[i]);
    errStr << "  arg[" << i << "]: " << *argStr << "\n";
  }
  return v8::ThrowException(v8::Exception::TypeError(v8::String::New(errStr.str().c_str())));
}

/*static*/ v8::Handle<v8::Value> wxNode_wxWindow::_SetOwnForegroundColour(const v8::Arguments& args) {
  v8::HandleScope scope;
  wxNode_wxWindow* self = unwrap<wxNode_wxWindow>(args.This());

  
  /*
   * id: _43031
   */
  if(args.Length() == 1 && (args[0]->IsNull() || args[0]->IsObject())) {
    wxNode_wxColour* colour = args[0]->IsNull() ? NULL : wxNodeObject::unwrap<wxNode_wxColour>(args[0]->ToObject()); /* type: _15512  */
    

    self->SetOwnForegroundColour(*colour);

    return v8::Undefined();
  }
  

  std::ostringstream errStr;
  errStr << "Could not find matching method for arguments (method name: SetOwnForegroundColour).\n";                           \
  errStr << "  arg count: " << args.Length() << "\n";
  for(int i = 0; i < args.Length(); i++) {
    v8::String::AsciiValue argStr(args[i]);
    errStr << "  arg[" << i << "]: " << *argStr << "\n";
  }
  return v8::ThrowException(v8::Exception::TypeError(v8::String::New(errStr.str().c_str())));
}

/*static*/ v8::Handle<v8::Value> wxNode_wxWindow::_GetForegroundColour(const v8::Arguments& args) {
  v8::HandleScope scope;
  wxNode_wxWindow* self = unwrap<wxNode_wxWindow>(args.This());

  
  /*
   * id: _43032
   */
  if(args.Length() == 0) {
    

    self->GetForegroundColour();

    return v8::Undefined();
  }
  

  std::ostringstream errStr;
  errStr << "Could not find matching method for arguments (method name: GetForegroundColour).\n";                           \
  errStr << "  arg count: " << args.Length() << "\n";
  for(int i = 0; i < args.Length(); i++) {
    v8::String::AsciiValue argStr(args[i]);
    errStr << "  arg[" << i << "]: " << *argStr << "\n";
  }
  return v8::ThrowException(v8::Exception::TypeError(v8::String::New(errStr.str().c_str())));
}

/*static*/ v8::Handle<v8::Value> wxNode_wxWindow::_SetBackgroundStyle(const v8::Arguments& args) {
  v8::HandleScope scope;
  wxNode_wxWindow* self = unwrap<wxNode_wxWindow>(args.This());

  
  /*
   * id: _43033
   */
  if(args.Length() == 1 && args[0]->IsNumber()) {
    wxBackgroundStyle style; /* type: _7585  */
    

    self->SetBackgroundStyle(style);

    return v8::Undefined();
  }
  

  std::ostringstream errStr;
  errStr << "Could not find matching method for arguments (method name: SetBackgroundStyle).\n";                           \
  errStr << "  arg count: " << args.Length() << "\n";
  for(int i = 0; i < args.Length(); i++) {
    v8::String::AsciiValue argStr(args[i]);
    errStr << "  arg[" << i << "]: " << *argStr << "\n";
  }
  return v8::ThrowException(v8::Exception::TypeError(v8::String::New(errStr.str().c_str())));
}

/*static*/ v8::Handle<v8::Value> wxNode_wxWindow::_GetBackgroundStyle(const v8::Arguments& args) {
  v8::HandleScope scope;
  wxNode_wxWindow* self = unwrap<wxNode_wxWindow>(args.This());

  
  /*
   * id: _43034
   */
  if(args.Length() == 0) {
    

    self->GetBackgroundStyle();

    return v8::Undefined();
  }
  

  std::ostringstream errStr;
  errStr << "Could not find matching method for arguments (method name: GetBackgroundStyle).\n";                           \
  errStr << "  arg count: " << args.Length() << "\n";
  for(int i = 0; i < args.Length(); i++) {
    v8::String::AsciiValue argStr(args[i]);
    errStr << "  arg[" << i << "]: " << *argStr << "\n";
  }
  return v8::ThrowException(v8::Exception::TypeError(v8::String::New(errStr.str().c_str())));
}

/*static*/ v8::Handle<v8::Value> wxNode_wxWindow::_HasTransparentBackground(const v8::Arguments& args) {
  v8::HandleScope scope;
  wxNode_wxWindow* self = unwrap<wxNode_wxWindow>(args.This());

  
  /*
   * id: _43035
   */
  if(args.Length() == 0) {
    

    self->HasTransparentBackground();

    return v8::Undefined();
  }
  

  std::ostringstream errStr;
  errStr << "Could not find matching method for arguments (method name: HasTransparentBackground).\n";                           \
  errStr << "  arg count: " << args.Length() << "\n";
  for(int i = 0; i < args.Length(); i++) {
    v8::String::AsciiValue argStr(args[i]);
    errStr << "  arg[" << i << "]: " << *argStr << "\n";
  }
  return v8::ThrowException(v8::Exception::TypeError(v8::String::New(errStr.str().c_str())));
}

/*static*/ v8::Handle<v8::Value> wxNode_wxWindow::_SetFont(const v8::Arguments& args) {
  v8::HandleScope scope;
  wxNode_wxWindow* self = unwrap<wxNode_wxWindow>(args.This());

  
  /*
   * id: _43036
   */
  if(args.Length() == 1 && (args[0]->IsNull() || args[0]->IsObject())) {
    wxNode_wxFont* font = args[0]->IsNull() ? NULL : wxNodeObject::unwrap<wxNode_wxFont>(args[0]->ToObject()); /* type: _33020  */
    

    self->SetFont(*font);

    return v8::Undefined();
  }
  

  std::ostringstream errStr;
  errStr << "Could not find matching method for arguments (method name: SetFont).\n";                           \
  errStr << "  arg count: " << args.Length() << "\n";
  for(int i = 0; i < args.Length(); i++) {
    v8::String::AsciiValue argStr(args[i]);
    errStr << "  arg[" << i << "]: " << *argStr << "\n";
  }
  return v8::ThrowException(v8::Exception::TypeError(v8::String::New(errStr.str().c_str())));
}

/*static*/ v8::Handle<v8::Value> wxNode_wxWindow::_SetOwnFont(const v8::Arguments& args) {
  v8::HandleScope scope;
  wxNode_wxWindow* self = unwrap<wxNode_wxWindow>(args.This());

  
  /*
   * id: _43037
   */
  if(args.Length() == 1 && (args[0]->IsNull() || args[0]->IsObject())) {
    wxNode_wxFont* font = args[0]->IsNull() ? NULL : wxNodeObject::unwrap<wxNode_wxFont>(args[0]->ToObject()); /* type: _33020  */
    

    self->SetOwnFont(*font);

    return v8::Undefined();
  }
  

  std::ostringstream errStr;
  errStr << "Could not find matching method for arguments (method name: SetOwnFont).\n";                           \
  errStr << "  arg count: " << args.Length() << "\n";
  for(int i = 0; i < args.Length(); i++) {
    v8::String::AsciiValue argStr(args[i]);
    errStr << "  arg[" << i << "]: " << *argStr << "\n";
  }
  return v8::ThrowException(v8::Exception::TypeError(v8::String::New(errStr.str().c_str())));
}

/*static*/ v8::Handle<v8::Value> wxNode_wxWindow::_GetFont(const v8::Arguments& args) {
  v8::HandleScope scope;
  wxNode_wxWindow* self = unwrap<wxNode_wxWindow>(args.This());

  
  /*
   * id: _43038
   */
  if(args.Length() == 0) {
    

    self->GetFont();

    return v8::Undefined();
  }
  

  std::ostringstream errStr;
  errStr << "Could not find matching method for arguments (method name: GetFont).\n";                           \
  errStr << "  arg count: " << args.Length() << "\n";
  for(int i = 0; i < args.Length(); i++) {
    v8::String::AsciiValue argStr(args[i]);
    errStr << "  arg[" << i << "]: " << *argStr << "\n";
  }
  return v8::ThrowException(v8::Exception::TypeError(v8::String::New(errStr.str().c_str())));
}

/*static*/ v8::Handle<v8::Value> wxNode_wxWindow::_SetCursor(const v8::Arguments& args) {
  v8::HandleScope scope;
  wxNode_wxWindow* self = unwrap<wxNode_wxWindow>(args.This());

  
  /*
   * id: _43039
   */
  if(args.Length() == 1 && (args[0]->IsNull() || args[0]->IsObject())) {
    wxNode_wxCursor* cursor = args[0]->IsNull() ? NULL : wxNodeObject::unwrap<wxNode_wxCursor>(args[0]->ToObject()); /* type: _41950  */
    

    self->SetCursor(*cursor);

    return v8::Undefined();
  }
  

  std::ostringstream errStr;
  errStr << "Could not find matching method for arguments (method name: SetCursor).\n";                           \
  errStr << "  arg count: " << args.Length() << "\n";
  for(int i = 0; i < args.Length(); i++) {
    v8::String::AsciiValue argStr(args[i]);
    errStr << "  arg[" << i << "]: " << *argStr << "\n";
  }
  return v8::ThrowException(v8::Exception::TypeError(v8::String::New(errStr.str().c_str())));
}

/*static*/ v8::Handle<v8::Value> wxNode_wxWindow::_GetCursor(const v8::Arguments& args) {
  v8::HandleScope scope;
  wxNode_wxWindow* self = unwrap<wxNode_wxWindow>(args.This());

  
  /*
   * id: _43040
   */
  if(args.Length() == 0) {
    

    self->GetCursor();

    return v8::Undefined();
  }
  

  std::ostringstream errStr;
  errStr << "Could not find matching method for arguments (method name: GetCursor).\n";                           \
  errStr << "  arg count: " << args.Length() << "\n";
  for(int i = 0; i < args.Length(); i++) {
    v8::String::AsciiValue argStr(args[i]);
    errStr << "  arg[" << i << "]: " << *argStr << "\n";
  }
  return v8::ThrowException(v8::Exception::TypeError(v8::String::New(errStr.str().c_str())));
}

/*static*/ v8::Handle<v8::Value> wxNode_wxWindow::_SetCaret(const v8::Arguments& args) {
  v8::HandleScope scope;
  wxNode_wxWindow* self = unwrap<wxNode_wxWindow>(args.This());

  
  /*
   * id: _43041
   */
  if(args.Length() == 1 && (args[0]->IsNull() || args[0]->IsObject())) {
    wxNode_wxCaret* caret = args[0]->IsNull() ? NULL : wxNodeObject::unwrap<wxNode_wxCaret>(args[0]->ToObject()); /* type: _65279 * */
    

    self->SetCaret(caret);

    return v8::Undefined();
  }
  

  std::ostringstream errStr;
  errStr << "Could not find matching method for arguments (method name: SetCaret).\n";                           \
  errStr << "  arg count: " << args.Length() << "\n";
  for(int i = 0; i < args.Length(); i++) {
    v8::String::AsciiValue argStr(args[i]);
    errStr << "  arg[" << i << "]: " << *argStr << "\n";
  }
  return v8::ThrowException(v8::Exception::TypeError(v8::String::New(errStr.str().c_str())));
}

/*static*/ v8::Handle<v8::Value> wxNode_wxWindow::_GetCaret(const v8::Arguments& args) {
  v8::HandleScope scope;
  wxNode_wxWindow* self = unwrap<wxNode_wxWindow>(args.This());

  
  /*
   * id: _43042
   */
  if(args.Length() == 0) {
    

    self->GetCaret();

    return v8::Undefined();
  }
  

  std::ostringstream errStr;
  errStr << "Could not find matching method for arguments (method name: GetCaret).\n";                           \
  errStr << "  arg count: " << args.Length() << "\n";
  for(int i = 0; i < args.Length(); i++) {
    v8::String::AsciiValue argStr(args[i]);
    errStr << "  arg[" << i << "]: " << *argStr << "\n";
  }
  return v8::ThrowException(v8::Exception::TypeError(v8::String::New(errStr.str().c_str())));
}

/*static*/ v8::Handle<v8::Value> wxNode_wxWindow::_GetCharHeight(const v8::Arguments& args) {
  v8::HandleScope scope;
  wxNode_wxWindow* self = unwrap<wxNode_wxWindow>(args.This());

  
  /*
   * id: _43043
   */
  if(args.Length() == 0) {
    

    self->GetCharHeight();

    return v8::Undefined();
  }
  

  std::ostringstream errStr;
  errStr << "Could not find matching method for arguments (method name: GetCharHeight).\n";                           \
  errStr << "  arg count: " << args.Length() << "\n";
  for(int i = 0; i < args.Length(); i++) {
    v8::String::AsciiValue argStr(args[i]);
    errStr << "  arg[" << i << "]: " << *argStr << "\n";
  }
  return v8::ThrowException(v8::Exception::TypeError(v8::String::New(errStr.str().c_str())));
}

/*static*/ v8::Handle<v8::Value> wxNode_wxWindow::_GetCharWidth(const v8::Arguments& args) {
  v8::HandleScope scope;
  wxNode_wxWindow* self = unwrap<wxNode_wxWindow>(args.This());

  
  /*
   * id: _43044
   */
  if(args.Length() == 0) {
    

    self->GetCharWidth();

    return v8::Undefined();
  }
  

  std::ostringstream errStr;
  errStr << "Could not find matching method for arguments (method name: GetCharWidth).\n";                           \
  errStr << "  arg count: " << args.Length() << "\n";
  for(int i = 0; i < args.Length(); i++) {
    v8::String::AsciiValue argStr(args[i]);
    errStr << "  arg[" << i << "]: " << *argStr << "\n";
  }
  return v8::ThrowException(v8::Exception::TypeError(v8::String::New(errStr.str().c_str())));
}

/*static*/ v8::Handle<v8::Value> wxNode_wxWindow::_GetTextExtent(const v8::Arguments& args) {
  v8::HandleScope scope;
  wxNode_wxWindow* self = unwrap<wxNode_wxWindow>(args.This());

  
  /*
   * id: _43045
   */
  if(args.Length() == 6 && args[0]->IsString() && false && false && false && false && (args[5]->IsNull() || args[5]->IsObject())) {
    v8::String::AsciiValue string(args[0]->ToString()); /* type: _14808  */
    int x; /* type: _16500 * */
    int y; /* type: _16500 * */
    int descent; /* type: _16500 * */
    int externalLeading; /* type: _16500 * */
    wxNode_wxFont* font = args[5]->IsNull() ? NULL : wxNodeObject::unwrap<wxNode_wxFont>(args[5]->ToObject()); /* type: _61039 * */
    

    self->GetTextExtent(*string, &x, &y, &descent, &externalLeading, font);

    return v8::Undefined();
  }
  
  /*
   * id: _43045
   */
  if(args.Length() == 5 && args[0]->IsString() && false && false && false && false) {
    v8::String::AsciiValue string(args[0]->ToString()); /* type: _14808  */
    int x; /* type: _16500 * */
    int y; /* type: _16500 * */
    int descent; /* type: _16500 * */
    int externalLeading; /* type: _16500 * */
    

    self->GetTextExtent(*string, &x, &y, &descent, &externalLeading);

    return v8::Undefined();
  }
  
  /*
   * id: _43045
   */
  if(args.Length() == 4 && args[0]->IsString() && false && false && false) {
    v8::String::AsciiValue string(args[0]->ToString()); /* type: _14808  */
    int x; /* type: _16500 * */
    int y; /* type: _16500 * */
    int descent; /* type: _16500 * */
    

    self->GetTextExtent(*string, &x, &y, &descent);

    return v8::Undefined();
  }
  
  /*
   * id: _43045
   */
  if(args.Length() == 3 && args[0]->IsString() && false && false) {
    v8::String::AsciiValue string(args[0]->ToString()); /* type: _14808  */
    int x; /* type: _16500 * */
    int y; /* type: _16500 * */
    

    self->GetTextExtent(*string, &x, &y);

    return v8::Undefined();
  }
  
  /*
   * id: _43046
   */
  if(args.Length() == 1 && args[0]->IsString()) {
    v8::String::AsciiValue string(args[0]->ToString()); /* type: _14808  */
    

    self->GetTextExtent(*string);

    return v8::Undefined();
  }
  

  std::ostringstream errStr;
  errStr << "Could not find matching method for arguments (method name: GetTextExtent).\n";                           \
  errStr << "  arg count: " << args.Length() << "\n";
  for(int i = 0; i < args.Length(); i++) {
    v8::String::AsciiValue argStr(args[i]);
    errStr << "  arg[" << i << "]: " << *argStr << "\n";
  }
  return v8::ThrowException(v8::Exception::TypeError(v8::String::New(errStr.str().c_str())));
}

/*static*/ v8::Handle<v8::Value> wxNode_wxWindow::_ClientToScreen(const v8::Arguments& args) {
  v8::HandleScope scope;
  wxNode_wxWindow* self = unwrap<wxNode_wxWindow>(args.This());

  
  /*
   * id: _43047
   */
  if(args.Length() == 2 && false && false) {
    int x; /* type: _16500 * */
    int y; /* type: _16500 * */
    

    self->ClientToScreen(&x, &y);

    return v8::Undefined();
  }
  
  /*
   * id: _43049
   */
  if(args.Length() == 1 && (args[0]->IsNull() || args[0]->IsObject())) {
    wxNode_wxPoint* pt = args[0]->IsNull() ? NULL : wxNodeObject::unwrap<wxNode_wxPoint>(args[0]->ToObject()); /* type: _20412  */
    

    self->ClientToScreen(*pt);

    return v8::Undefined();
  }
  

  std::ostringstream errStr;
  errStr << "Could not find matching method for arguments (method name: ClientToScreen).\n";                           \
  errStr << "  arg count: " << args.Length() << "\n";
  for(int i = 0; i < args.Length(); i++) {
    v8::String::AsciiValue argStr(args[i]);
    errStr << "  arg[" << i << "]: " << *argStr << "\n";
  }
  return v8::ThrowException(v8::Exception::TypeError(v8::String::New(errStr.str().c_str())));
}

/*static*/ v8::Handle<v8::Value> wxNode_wxWindow::_ScreenToClient(const v8::Arguments& args) {
  v8::HandleScope scope;
  wxNode_wxWindow* self = unwrap<wxNode_wxWindow>(args.This());

  
  /*
   * id: _43048
   */
  if(args.Length() == 2 && false && false) {
    int x; /* type: _16500 * */
    int y; /* type: _16500 * */
    

    self->ScreenToClient(&x, &y);

    return v8::Undefined();
  }
  
  /*
   * id: _43050
   */
  if(args.Length() == 1 && (args[0]->IsNull() || args[0]->IsObject())) {
    wxNode_wxPoint* pt = args[0]->IsNull() ? NULL : wxNodeObject::unwrap<wxNode_wxPoint>(args[0]->ToObject()); /* type: _20412  */
    

    self->ScreenToClient(*pt);

    return v8::Undefined();
  }
  

  std::ostringstream errStr;
  errStr << "Could not find matching method for arguments (method name: ScreenToClient).\n";                           \
  errStr << "  arg count: " << args.Length() << "\n";
  for(int i = 0; i < args.Length(); i++) {
    v8::String::AsciiValue argStr(args[i]);
    errStr << "  arg[" << i << "]: " << *argStr << "\n";
  }
  return v8::ThrowException(v8::Exception::TypeError(v8::String::New(errStr.str().c_str())));
}

/*static*/ v8::Handle<v8::Value> wxNode_wxWindow::_HitTest(const v8::Arguments& args) {
  v8::HandleScope scope;
  wxNode_wxWindow* self = unwrap<wxNode_wxWindow>(args.This());

  
  /*
   * id: _43051
   */
  if(args.Length() == 2 && args[0]->IsNumber() && args[1]->IsNumber()) {
    int x = (int)args[0]->ToInt32()->Value(); /* type: _12095  */
    int y = (int)args[1]->ToInt32()->Value(); /* type: _12095  */
    

    self->HitTest(x, y);

    return v8::Undefined();
  }
  
  /*
   * id: _43052
   */
  if(args.Length() == 1 && (args[0]->IsNull() || args[0]->IsObject())) {
    wxNode_wxPoint* pt = args[0]->IsNull() ? NULL : wxNodeObject::unwrap<wxNode_wxPoint>(args[0]->ToObject()); /* type: _20412  */
    

    self->HitTest(*pt);

    return v8::Undefined();
  }
  

  std::ostringstream errStr;
  errStr << "Could not find matching method for arguments (method name: HitTest).\n";                           \
  errStr << "  arg count: " << args.Length() << "\n";
  for(int i = 0; i < args.Length(); i++) {
    v8::String::AsciiValue argStr(args[i]);
    errStr << "  arg[" << i << "]: " << *argStr << "\n";
  }
  return v8::ThrowException(v8::Exception::TypeError(v8::String::New(errStr.str().c_str())));
}

/*static*/ v8::Handle<v8::Value> wxNode_wxWindow::_GetBorder(const v8::Arguments& args) {
  v8::HandleScope scope;
  wxNode_wxWindow* self = unwrap<wxNode_wxWindow>(args.This());

  
  /*
   * id: _43053
   */
  if(args.Length() == 1 && args[0]->IsNumber()) {
    long int flags = (long int)args[0]->ToInt32()->Value(); /* type: _586  */
    

    self->GetBorder(flags);

    return v8::Undefined();
  }
  
  /*
   * id: _43054
   */
  if(args.Length() == 0) {
    

    self->GetBorder();

    return v8::Undefined();
  }
  

  std::ostringstream errStr;
  errStr << "Could not find matching method for arguments (method name: GetBorder).\n";                           \
  errStr << "  arg count: " << args.Length() << "\n";
  for(int i = 0; i < args.Length(); i++) {
    v8::String::AsciiValue argStr(args[i]);
    errStr << "  arg[" << i << "]: " << *argStr << "\n";
  }
  return v8::ThrowException(v8::Exception::TypeError(v8::String::New(errStr.str().c_str())));
}

/*static*/ v8::Handle<v8::Value> wxNode_wxWindow::_UpdateWindowUI(const v8::Arguments& args) {
  v8::HandleScope scope;
  wxNode_wxWindow* self = unwrap<wxNode_wxWindow>(args.This());

  
  /*
   * id: _43055
   */
  if(args.Length() == 1 && args[0]->IsNumber()) {
    long int flags = (long int)args[0]->ToInt32()->Value(); /* type: _586  */
    

    self->UpdateWindowUI(flags);

    return v8::Undefined();
  }
  
  /*
   * id: _43055
   */
  if(args.Length() == 0) {
    

    self->UpdateWindowUI();

    return v8::Undefined();
  }
  

  std::ostringstream errStr;
  errStr << "Could not find matching method for arguments (method name: UpdateWindowUI).\n";                           \
  errStr << "  arg count: " << args.Length() << "\n";
  for(int i = 0; i < args.Length(); i++) {
    v8::String::AsciiValue argStr(args[i]);
    errStr << "  arg[" << i << "]: " << *argStr << "\n";
  }
  return v8::ThrowException(v8::Exception::TypeError(v8::String::New(errStr.str().c_str())));
}

/*static*/ v8::Handle<v8::Value> wxNode_wxWindow::_DoUpdateWindowUI(const v8::Arguments& args) {
  v8::HandleScope scope;
  wxNode_wxWindow* self = unwrap<wxNode_wxWindow>(args.This());

  
  /*
   * id: _43056
   */
  if(args.Length() == 1 && (args[0]->IsNull() || args[0]->IsObject())) {
    wxNode_wxUpdateUIEvent* event = args[0]->IsNull() ? NULL : wxNodeObject::unwrap<wxNode_wxUpdateUIEvent>(args[0]->ToObject()); /* type: _59566  */
    

    self->DoUpdateWindowUI(*event);

    return v8::Undefined();
  }
  

  std::ostringstream errStr;
  errStr << "Could not find matching method for arguments (method name: DoUpdateWindowUI).\n";                           \
  errStr << "  arg count: " << args.Length() << "\n";
  for(int i = 0; i < args.Length(); i++) {
    v8::String::AsciiValue argStr(args[i]);
    errStr << "  arg[" << i << "]: " << *argStr << "\n";
  }
  return v8::ThrowException(v8::Exception::TypeError(v8::String::New(errStr.str().c_str())));
}

/*static*/ v8::Handle<v8::Value> wxNode_wxWindow::_PopupMenu(const v8::Arguments& args) {
  v8::HandleScope scope;
  wxNode_wxWindow* self = unwrap<wxNode_wxWindow>(args.This());

  
  /*
   * id: _43057
   */
  if(args.Length() == 2 && (args[0]->IsNull() || args[0]->IsObject()) && (args[1]->IsNull() || args[1]->IsObject())) {
    wxNode_wxMenu* menu = args[0]->IsNull() ? NULL : wxNodeObject::unwrap<wxNode_wxMenu>(args[0]->ToObject()); /* type: _52838 * */
    wxNode_wxPoint* pos = args[1]->IsNull() ? NULL : wxNodeObject::unwrap<wxNode_wxPoint>(args[1]->ToObject()); /* type: _20412  */
    

    self->PopupMenu(menu, *pos);

    return v8::Undefined();
  }
  
  /*
   * id: _43057
   */
  if(args.Length() == 1 && (args[0]->IsNull() || args[0]->IsObject())) {
    wxNode_wxMenu* menu = args[0]->IsNull() ? NULL : wxNodeObject::unwrap<wxNode_wxMenu>(args[0]->ToObject()); /* type: _52838 * */
    

    self->PopupMenu(menu);

    return v8::Undefined();
  }
  
  /*
   * id: _43058
   */
  if(args.Length() == 3 && (args[0]->IsNull() || args[0]->IsObject()) && args[1]->IsNumber() && args[2]->IsNumber()) {
    wxNode_wxMenu* menu = args[0]->IsNull() ? NULL : wxNodeObject::unwrap<wxNode_wxMenu>(args[0]->ToObject()); /* type: _52838 * */
    int x = (int)args[1]->ToInt32()->Value(); /* type: _162  */
    int y = (int)args[2]->ToInt32()->Value(); /* type: _162  */
    

    self->PopupMenu(menu, x, y);

    return v8::Undefined();
  }
  

  std::ostringstream errStr;
  errStr << "Could not find matching method for arguments (method name: PopupMenu).\n";                           \
  errStr << "  arg count: " << args.Length() << "\n";
  for(int i = 0; i < args.Length(); i++) {
    v8::String::AsciiValue argStr(args[i]);
    errStr << "  arg[" << i << "]: " << *argStr << "\n";
  }
  return v8::ThrowException(v8::Exception::TypeError(v8::String::New(errStr.str().c_str())));
}

/*static*/ v8::Handle<v8::Value> wxNode_wxWindow::_GetPopupMenuSelectionFromUser(const v8::Arguments& args) {
  v8::HandleScope scope;
  wxNode_wxWindow* self = unwrap<wxNode_wxWindow>(args.This());

  
  /*
   * id: _43059
   */
  if(args.Length() == 2 && (args[0]->IsNull() || args[0]->IsObject()) && (args[1]->IsNull() || args[1]->IsObject())) {
    wxNode_wxMenu* menu = args[0]->IsNull() ? NULL : wxNodeObject::unwrap<wxNode_wxMenu>(args[0]->ToObject()); /* type: _62015  */
    wxNode_wxPoint* pos = args[1]->IsNull() ? NULL : wxNodeObject::unwrap<wxNode_wxPoint>(args[1]->ToObject()); /* type: _20412  */
    

    self->GetPopupMenuSelectionFromUser(*menu, *pos);

    return v8::Undefined();
  }
  
  /*
   * id: _43059
   */
  if(args.Length() == 1 && (args[0]->IsNull() || args[0]->IsObject())) {
    wxNode_wxMenu* menu = args[0]->IsNull() ? NULL : wxNodeObject::unwrap<wxNode_wxMenu>(args[0]->ToObject()); /* type: _62015  */
    

    self->GetPopupMenuSelectionFromUser(*menu);

    return v8::Undefined();
  }
  
  /*
   * id: _43060
   */
  if(args.Length() == 3 && (args[0]->IsNull() || args[0]->IsObject()) && args[1]->IsNumber() && args[2]->IsNumber()) {
    wxNode_wxMenu* menu = args[0]->IsNull() ? NULL : wxNodeObject::unwrap<wxNode_wxMenu>(args[0]->ToObject()); /* type: _62015  */
    int x = (int)args[1]->ToInt32()->Value(); /* type: _162  */
    int y = (int)args[2]->ToInt32()->Value(); /* type: _162  */
    

    self->GetPopupMenuSelectionFromUser(*menu, x, y);

    return v8::Undefined();
  }
  

  std::ostringstream errStr;
  errStr << "Could not find matching method for arguments (method name: GetPopupMenuSelectionFromUser).\n";                           \
  errStr << "  arg count: " << args.Length() << "\n";
  for(int i = 0; i < args.Length(); i++) {
    v8::String::AsciiValue argStr(args[i]);
    errStr << "  arg[" << i << "]: " << *argStr << "\n";
  }
  return v8::ThrowException(v8::Exception::TypeError(v8::String::New(errStr.str().c_str())));
}

/*static*/ v8::Handle<v8::Value> wxNode_wxWindow::_HasMultiplePages(const v8::Arguments& args) {
  v8::HandleScope scope;
  wxNode_wxWindow* self = unwrap<wxNode_wxWindow>(args.This());

  
  /*
   * id: _43061
   */
  if(args.Length() == 0) {
    

    self->HasMultiplePages();

    return v8::Undefined();
  }
  

  std::ostringstream errStr;
  errStr << "Could not find matching method for arguments (method name: HasMultiplePages).\n";                           \
  errStr << "  arg count: " << args.Length() << "\n";
  for(int i = 0; i < args.Length(); i++) {
    v8::String::AsciiValue argStr(args[i]);
    errStr << "  arg[" << i << "]: " << *argStr << "\n";
  }
  return v8::ThrowException(v8::Exception::TypeError(v8::String::New(errStr.str().c_str())));
}

/*static*/ v8::Handle<v8::Value> wxNode_wxWindow::_CanScroll(const v8::Arguments& args) {
  v8::HandleScope scope;
  wxNode_wxWindow* self = unwrap<wxNode_wxWindow>(args.This());

  
  /*
   * id: _43062
   */
  if(args.Length() == 1 && args[0]->IsNumber()) {
    int orient = (int)args[0]->ToInt32()->Value(); /* type: _162  */
    

    self->CanScroll(orient);

    return v8::Undefined();
  }
  

  std::ostringstream errStr;
  errStr << "Could not find matching method for arguments (method name: CanScroll).\n";                           \
  errStr << "  arg count: " << args.Length() << "\n";
  for(int i = 0; i < args.Length(); i++) {
    v8::String::AsciiValue argStr(args[i]);
    errStr << "  arg[" << i << "]: " << *argStr << "\n";
  }
  return v8::ThrowException(v8::Exception::TypeError(v8::String::New(errStr.str().c_str())));
}

/*static*/ v8::Handle<v8::Value> wxNode_wxWindow::_HasScrollbar(const v8::Arguments& args) {
  v8::HandleScope scope;
  wxNode_wxWindow* self = unwrap<wxNode_wxWindow>(args.This());

  
  /*
   * id: _43063
   */
  if(args.Length() == 1 && args[0]->IsNumber()) {
    int orient = (int)args[0]->ToInt32()->Value(); /* type: _162  */
    

    self->HasScrollbar(orient);

    return v8::Undefined();
  }
  

  std::ostringstream errStr;
  errStr << "Could not find matching method for arguments (method name: HasScrollbar).\n";                           \
  errStr << "  arg count: " << args.Length() << "\n";
  for(int i = 0; i < args.Length(); i++) {
    v8::String::AsciiValue argStr(args[i]);
    errStr << "  arg[" << i << "]: " << *argStr << "\n";
  }
  return v8::ThrowException(v8::Exception::TypeError(v8::String::New(errStr.str().c_str())));
}

/*static*/ v8::Handle<v8::Value> wxNode_wxWindow::_SetScrollbar(const v8::Arguments& args) {
  v8::HandleScope scope;
  wxNode_wxWindow* self = unwrap<wxNode_wxWindow>(args.This());

  
  /*
   * id: _43064
   */
  if(args.Length() == 5 && args[0]->IsNumber() && args[1]->IsNumber() && args[2]->IsNumber() && args[3]->IsNumber() && args[4]->IsBoolean()) {
    int orient = (int)args[0]->ToInt32()->Value(); /* type: _162  */
    int pos = (int)args[1]->ToInt32()->Value(); /* type: _162  */
    int thumbvisible = (int)args[2]->ToInt32()->Value(); /* type: _162  */
    int range = (int)args[3]->ToInt32()->Value(); /* type: _162  */
    bool refresh = args[4]->ToBoolean()->Value(); /* type: _14666  */
    

    self->SetScrollbar(orient, pos, thumbvisible, range, refresh);

    return v8::Undefined();
  }
  
  /*
   * id: _43064
   */
  if(args.Length() == 4 && args[0]->IsNumber() && args[1]->IsNumber() && args[2]->IsNumber() && args[3]->IsNumber()) {
    int orient = (int)args[0]->ToInt32()->Value(); /* type: _162  */
    int pos = (int)args[1]->ToInt32()->Value(); /* type: _162  */
    int thumbvisible = (int)args[2]->ToInt32()->Value(); /* type: _162  */
    int range = (int)args[3]->ToInt32()->Value(); /* type: _162  */
    

    self->SetScrollbar(orient, pos, thumbvisible, range);

    return v8::Undefined();
  }
  

  std::ostringstream errStr;
  errStr << "Could not find matching method for arguments (method name: SetScrollbar).\n";                           \
  errStr << "  arg count: " << args.Length() << "\n";
  for(int i = 0; i < args.Length(); i++) {
    v8::String::AsciiValue argStr(args[i]);
    errStr << "  arg[" << i << "]: " << *argStr << "\n";
  }
  return v8::ThrowException(v8::Exception::TypeError(v8::String::New(errStr.str().c_str())));
}

/*static*/ v8::Handle<v8::Value> wxNode_wxWindow::_SetScrollPos(const v8::Arguments& args) {
  v8::HandleScope scope;
  wxNode_wxWindow* self = unwrap<wxNode_wxWindow>(args.This());

  
  /*
   * id: _43065
   */
  if(args.Length() == 3 && args[0]->IsNumber() && args[1]->IsNumber() && args[2]->IsBoolean()) {
    int orient = (int)args[0]->ToInt32()->Value(); /* type: _162  */
    int pos = (int)args[1]->ToInt32()->Value(); /* type: _162  */
    bool refresh = args[2]->ToBoolean()->Value(); /* type: _14666  */
    

    self->SetScrollPos(orient, pos, refresh);

    return v8::Undefined();
  }
  
  /*
   * id: _43065
   */
  if(args.Length() == 2 && args[0]->IsNumber() && args[1]->IsNumber()) {
    int orient = (int)args[0]->ToInt32()->Value(); /* type: _162  */
    int pos = (int)args[1]->ToInt32()->Value(); /* type: _162  */
    

    self->SetScrollPos(orient, pos);

    return v8::Undefined();
  }
  

  std::ostringstream errStr;
  errStr << "Could not find matching method for arguments (method name: SetScrollPos).\n";                           \
  errStr << "  arg count: " << args.Length() << "\n";
  for(int i = 0; i < args.Length(); i++) {
    v8::String::AsciiValue argStr(args[i]);
    errStr << "  arg[" << i << "]: " << *argStr << "\n";
  }
  return v8::ThrowException(v8::Exception::TypeError(v8::String::New(errStr.str().c_str())));
}

/*static*/ v8::Handle<v8::Value> wxNode_wxWindow::_GetScrollPos(const v8::Arguments& args) {
  v8::HandleScope scope;
  wxNode_wxWindow* self = unwrap<wxNode_wxWindow>(args.This());

  
  /*
   * id: _43066
   */
  if(args.Length() == 1 && args[0]->IsNumber()) {
    int orient = (int)args[0]->ToInt32()->Value(); /* type: _162  */
    

    self->GetScrollPos(orient);

    return v8::Undefined();
  }
  

  std::ostringstream errStr;
  errStr << "Could not find matching method for arguments (method name: GetScrollPos).\n";                           \
  errStr << "  arg count: " << args.Length() << "\n";
  for(int i = 0; i < args.Length(); i++) {
    v8::String::AsciiValue argStr(args[i]);
    errStr << "  arg[" << i << "]: " << *argStr << "\n";
  }
  return v8::ThrowException(v8::Exception::TypeError(v8::String::New(errStr.str().c_str())));
}

/*static*/ v8::Handle<v8::Value> wxNode_wxWindow::_GetScrollThumb(const v8::Arguments& args) {
  v8::HandleScope scope;
  wxNode_wxWindow* self = unwrap<wxNode_wxWindow>(args.This());

  
  /*
   * id: _43067
   */
  if(args.Length() == 1 && args[0]->IsNumber()) {
    int orient = (int)args[0]->ToInt32()->Value(); /* type: _162  */
    

    self->GetScrollThumb(orient);

    return v8::Undefined();
  }
  

  std::ostringstream errStr;
  errStr << "Could not find matching method for arguments (method name: GetScrollThumb).\n";                           \
  errStr << "  arg count: " << args.Length() << "\n";
  for(int i = 0; i < args.Length(); i++) {
    v8::String::AsciiValue argStr(args[i]);
    errStr << "  arg[" << i << "]: " << *argStr << "\n";
  }
  return v8::ThrowException(v8::Exception::TypeError(v8::String::New(errStr.str().c_str())));
}

/*static*/ v8::Handle<v8::Value> wxNode_wxWindow::_GetScrollRange(const v8::Arguments& args) {
  v8::HandleScope scope;
  wxNode_wxWindow* self = unwrap<wxNode_wxWindow>(args.This());

  
  /*
   * id: _43068
   */
  if(args.Length() == 1 && args[0]->IsNumber()) {
    int orient = (int)args[0]->ToInt32()->Value(); /* type: _162  */
    

    self->GetScrollRange(orient);

    return v8::Undefined();
  }
  

  std::ostringstream errStr;
  errStr << "Could not find matching method for arguments (method name: GetScrollRange).\n";                           \
  errStr << "  arg count: " << args.Length() << "\n";
  for(int i = 0; i < args.Length(); i++) {
    v8::String::AsciiValue argStr(args[i]);
    errStr << "  arg[" << i << "]: " << *argStr << "\n";
  }
  return v8::ThrowException(v8::Exception::TypeError(v8::String::New(errStr.str().c_str())));
}

/*static*/ v8::Handle<v8::Value> wxNode_wxWindow::_ScrollWindow(const v8::Arguments& args) {
  v8::HandleScope scope;
  wxNode_wxWindow* self = unwrap<wxNode_wxWindow>(args.This());

  
  /*
   * id: _43069
   */
  if(args.Length() == 3 && args[0]->IsNumber() && args[1]->IsNumber() && (args[2]->IsNull() || args[2]->IsObject())) {
    int dx = (int)args[0]->ToInt32()->Value(); /* type: _162  */
    int dy = (int)args[1]->ToInt32()->Value(); /* type: _162  */
    wxNode_wxRect* rect = args[2]->IsNull() ? NULL : wxNodeObject::unwrap<wxNode_wxRect>(args[2]->ToObject()); /* type: _59913 * */
    

    self->ScrollWindow(dx, dy, rect);

    return v8::Undefined();
  }
  
  /*
   * id: _43069
   */
  if(args.Length() == 2 && args[0]->IsNumber() && args[1]->IsNumber()) {
    int dx = (int)args[0]->ToInt32()->Value(); /* type: _162  */
    int dy = (int)args[1]->ToInt32()->Value(); /* type: _162  */
    

    self->ScrollWindow(dx, dy);

    return v8::Undefined();
  }
  

  std::ostringstream errStr;
  errStr << "Could not find matching method for arguments (method name: ScrollWindow).\n";                           \
  errStr << "  arg count: " << args.Length() << "\n";
  for(int i = 0; i < args.Length(); i++) {
    v8::String::AsciiValue argStr(args[i]);
    errStr << "  arg[" << i << "]: " << *argStr << "\n";
  }
  return v8::ThrowException(v8::Exception::TypeError(v8::String::New(errStr.str().c_str())));
}

/*static*/ v8::Handle<v8::Value> wxNode_wxWindow::_ScrollLines(const v8::Arguments& args) {
  v8::HandleScope scope;
  wxNode_wxWindow* self = unwrap<wxNode_wxWindow>(args.This());

  
  /*
   * id: _43070
   */
  if(args.Length() == 1 && args[0]->IsNumber()) {
    int arg0 = (int)args[0]->ToInt32()->Value(); /* type: _162  */
    

    self->ScrollLines(arg0);

    return v8::Undefined();
  }
  

  std::ostringstream errStr;
  errStr << "Could not find matching method for arguments (method name: ScrollLines).\n";                           \
  errStr << "  arg count: " << args.Length() << "\n";
  for(int i = 0; i < args.Length(); i++) {
    v8::String::AsciiValue argStr(args[i]);
    errStr << "  arg[" << i << "]: " << *argStr << "\n";
  }
  return v8::ThrowException(v8::Exception::TypeError(v8::String::New(errStr.str().c_str())));
}

/*static*/ v8::Handle<v8::Value> wxNode_wxWindow::_ScrollPages(const v8::Arguments& args) {
  v8::HandleScope scope;
  wxNode_wxWindow* self = unwrap<wxNode_wxWindow>(args.This());

  
  /*
   * id: _43071
   */
  if(args.Length() == 1 && args[0]->IsNumber()) {
    int arg0 = (int)args[0]->ToInt32()->Value(); /* type: _162  */
    

    self->ScrollPages(arg0);

    return v8::Undefined();
  }
  

  std::ostringstream errStr;
  errStr << "Could not find matching method for arguments (method name: ScrollPages).\n";                           \
  errStr << "  arg count: " << args.Length() << "\n";
  for(int i = 0; i < args.Length(); i++) {
    v8::String::AsciiValue argStr(args[i]);
    errStr << "  arg[" << i << "]: " << *argStr << "\n";
  }
  return v8::ThrowException(v8::Exception::TypeError(v8::String::New(errStr.str().c_str())));
}

/*static*/ v8::Handle<v8::Value> wxNode_wxWindow::_LineUp(const v8::Arguments& args) {
  v8::HandleScope scope;
  wxNode_wxWindow* self = unwrap<wxNode_wxWindow>(args.This());

  
  /*
   * id: _43072
   */
  if(args.Length() == 0) {
    

    self->LineUp();

    return v8::Undefined();
  }
  

  std::ostringstream errStr;
  errStr << "Could not find matching method for arguments (method name: LineUp).\n";                           \
  errStr << "  arg count: " << args.Length() << "\n";
  for(int i = 0; i < args.Length(); i++) {
    v8::String::AsciiValue argStr(args[i]);
    errStr << "  arg[" << i << "]: " << *argStr << "\n";
  }
  return v8::ThrowException(v8::Exception::TypeError(v8::String::New(errStr.str().c_str())));
}

/*static*/ v8::Handle<v8::Value> wxNode_wxWindow::_LineDown(const v8::Arguments& args) {
  v8::HandleScope scope;
  wxNode_wxWindow* self = unwrap<wxNode_wxWindow>(args.This());

  
  /*
   * id: _43073
   */
  if(args.Length() == 0) {
    

    self->LineDown();

    return v8::Undefined();
  }
  

  std::ostringstream errStr;
  errStr << "Could not find matching method for arguments (method name: LineDown).\n";                           \
  errStr << "  arg count: " << args.Length() << "\n";
  for(int i = 0; i < args.Length(); i++) {
    v8::String::AsciiValue argStr(args[i]);
    errStr << "  arg[" << i << "]: " << *argStr << "\n";
  }
  return v8::ThrowException(v8::Exception::TypeError(v8::String::New(errStr.str().c_str())));
}

/*static*/ v8::Handle<v8::Value> wxNode_wxWindow::_PageUp(const v8::Arguments& args) {
  v8::HandleScope scope;
  wxNode_wxWindow* self = unwrap<wxNode_wxWindow>(args.This());

  
  /*
   * id: _43074
   */
  if(args.Length() == 0) {
    

    self->PageUp();

    return v8::Undefined();
  }
  

  std::ostringstream errStr;
  errStr << "Could not find matching method for arguments (method name: PageUp).\n";                           \
  errStr << "  arg count: " << args.Length() << "\n";
  for(int i = 0; i < args.Length(); i++) {
    v8::String::AsciiValue argStr(args[i]);
    errStr << "  arg[" << i << "]: " << *argStr << "\n";
  }
  return v8::ThrowException(v8::Exception::TypeError(v8::String::New(errStr.str().c_str())));
}

/*static*/ v8::Handle<v8::Value> wxNode_wxWindow::_PageDown(const v8::Arguments& args) {
  v8::HandleScope scope;
  wxNode_wxWindow* self = unwrap<wxNode_wxWindow>(args.This());

  
  /*
   * id: _43075
   */
  if(args.Length() == 0) {
    

    self->PageDown();

    return v8::Undefined();
  }
  

  std::ostringstream errStr;
  errStr << "Could not find matching method for arguments (method name: PageDown).\n";                           \
  errStr << "  arg count: " << args.Length() << "\n";
  for(int i = 0; i < args.Length(); i++) {
    v8::String::AsciiValue argStr(args[i]);
    errStr << "  arg[" << i << "]: " << *argStr << "\n";
  }
  return v8::ThrowException(v8::Exception::TypeError(v8::String::New(errStr.str().c_str())));
}

/*static*/ v8::Handle<v8::Value> wxNode_wxWindow::_AlwaysShowScrollbars(const v8::Arguments& args) {
  v8::HandleScope scope;
  wxNode_wxWindow* self = unwrap<wxNode_wxWindow>(args.This());

  
  /*
   * id: _43076
   */
  if(args.Length() == 2 && args[0]->IsBoolean() && args[1]->IsBoolean()) {
    bool arg0 = args[0]->ToBoolean()->Value(); /* type: _14666  */
    bool arg1 = args[1]->ToBoolean()->Value(); /* type: _14666  */
    

    self->AlwaysShowScrollbars(arg0, arg1);

    return v8::Undefined();
  }
  
  /*
   * id: _43076
   */
  if(args.Length() == 1 && args[0]->IsBoolean()) {
    bool arg0 = args[0]->ToBoolean()->Value(); /* type: _14666  */
    

    self->AlwaysShowScrollbars(arg0);

    return v8::Undefined();
  }
  
  /*
   * id: _43076
   */
  if(args.Length() == 0) {
    

    self->AlwaysShowScrollbars();

    return v8::Undefined();
  }
  

  std::ostringstream errStr;
  errStr << "Could not find matching method for arguments (method name: AlwaysShowScrollbars).\n";                           \
  errStr << "  arg count: " << args.Length() << "\n";
  for(int i = 0; i < args.Length(); i++) {
    v8::String::AsciiValue argStr(args[i]);
    errStr << "  arg[" << i << "]: " << *argStr << "\n";
  }
  return v8::ThrowException(v8::Exception::TypeError(v8::String::New(errStr.str().c_str())));
}

/*static*/ v8::Handle<v8::Value> wxNode_wxWindow::_IsScrollbarAlwaysShown(const v8::Arguments& args) {
  v8::HandleScope scope;
  wxNode_wxWindow* self = unwrap<wxNode_wxWindow>(args.This());

  
  /*
   * id: _43077
   */
  if(args.Length() == 1 && args[0]->IsNumber()) {
    int arg0 = (int)args[0]->ToInt32()->Value(); /* type: _162  */
    

    self->IsScrollbarAlwaysShown(arg0);

    return v8::Undefined();
  }
  

  std::ostringstream errStr;
  errStr << "Could not find matching method for arguments (method name: IsScrollbarAlwaysShown).\n";                           \
  errStr << "  arg count: " << args.Length() << "\n";
  for(int i = 0; i < args.Length(); i++) {
    v8::String::AsciiValue argStr(args[i]);
    errStr << "  arg[" << i << "]: " << *argStr << "\n";
  }
  return v8::ThrowException(v8::Exception::TypeError(v8::String::New(errStr.str().c_str())));
}

/*static*/ v8::Handle<v8::Value> wxNode_wxWindow::_SetHelpText(const v8::Arguments& args) {
  v8::HandleScope scope;
  wxNode_wxWindow* self = unwrap<wxNode_wxWindow>(args.This());

  
  /*
   * id: _43078
   */
  if(args.Length() == 1 && args[0]->IsString()) {
    v8::String::AsciiValue text(args[0]->ToString()); /* type: _14808  */
    

    self->SetHelpText(*text);

    return v8::Undefined();
  }
  

  std::ostringstream errStr;
  errStr << "Could not find matching method for arguments (method name: SetHelpText).\n";                           \
  errStr << "  arg count: " << args.Length() << "\n";
  for(int i = 0; i < args.Length(); i++) {
    v8::String::AsciiValue argStr(args[i]);
    errStr << "  arg[" << i << "]: " << *argStr << "\n";
  }
  return v8::ThrowException(v8::Exception::TypeError(v8::String::New(errStr.str().c_str())));
}

/*static*/ v8::Handle<v8::Value> wxNode_wxWindow::_GetHelpText(const v8::Arguments& args) {
  v8::HandleScope scope;
  wxNode_wxWindow* self = unwrap<wxNode_wxWindow>(args.This());

  
  /*
   * id: _43081
   */
  if(args.Length() == 0) {
    

    self->GetHelpText();

    return v8::Undefined();
  }
  

  std::ostringstream errStr;
  errStr << "Could not find matching method for arguments (method name: GetHelpText).\n";                           \
  errStr << "  arg count: " << args.Length() << "\n";
  for(int i = 0; i < args.Length(); i++) {
    v8::String::AsciiValue argStr(args[i]);
    errStr << "  arg[" << i << "]: " << *argStr << "\n";
  }
  return v8::ThrowException(v8::Exception::TypeError(v8::String::New(errStr.str().c_str())));
}

/*static*/ v8::Handle<v8::Value> wxNode_wxWindow::_SetToolTip(const v8::Arguments& args) {
  v8::HandleScope scope;
  wxNode_wxWindow* self = unwrap<wxNode_wxWindow>(args.This());

  
  /*
   * id: _43082
   */
  if(args.Length() == 1 && args[0]->IsString()) {
    v8::String::AsciiValue tip(args[0]->ToString()); /* type: _14808  */
    

    self->SetToolTip(*tip);

    return v8::Undefined();
  }
  
  /*
   * id: _43083
   */
  if(args.Length() == 1 && (args[0]->IsNull() || args[0]->IsObject())) {
    wxNode_wxToolTip* tip = args[0]->IsNull() ? NULL : wxNodeObject::unwrap<wxNode_wxToolTip>(args[0]->ToObject()); /* type: _6541 * */
    

    self->SetToolTip(tip);

    return v8::Undefined();
  }
  

  std::ostringstream errStr;
  errStr << "Could not find matching method for arguments (method name: SetToolTip).\n";                           \
  errStr << "  arg count: " << args.Length() << "\n";
  for(int i = 0; i < args.Length(); i++) {
    v8::String::AsciiValue argStr(args[i]);
    errStr << "  arg[" << i << "]: " << *argStr << "\n";
  }
  return v8::ThrowException(v8::Exception::TypeError(v8::String::New(errStr.str().c_str())));
}

/*static*/ v8::Handle<v8::Value> wxNode_wxWindow::_UnsetToolTip(const v8::Arguments& args) {
  v8::HandleScope scope;
  wxNode_wxWindow* self = unwrap<wxNode_wxWindow>(args.This());

  
  /*
   * id: _43084
   */
  if(args.Length() == 0) {
    

    self->UnsetToolTip();

    return v8::Undefined();
  }
  

  std::ostringstream errStr;
  errStr << "Could not find matching method for arguments (method name: UnsetToolTip).\n";                           \
  errStr << "  arg count: " << args.Length() << "\n";
  for(int i = 0; i < args.Length(); i++) {
    v8::String::AsciiValue argStr(args[i]);
    errStr << "  arg[" << i << "]: " << *argStr << "\n";
  }
  return v8::ThrowException(v8::Exception::TypeError(v8::String::New(errStr.str().c_str())));
}

/*static*/ v8::Handle<v8::Value> wxNode_wxWindow::_GetToolTip(const v8::Arguments& args) {
  v8::HandleScope scope;
  wxNode_wxWindow* self = unwrap<wxNode_wxWindow>(args.This());

  
  /*
   * id: _43085
   */
  if(args.Length() == 0) {
    

    self->GetToolTip();

    return v8::Undefined();
  }
  

  std::ostringstream errStr;
  errStr << "Could not find matching method for arguments (method name: GetToolTip).\n";                           \
  errStr << "  arg count: " << args.Length() << "\n";
  for(int i = 0; i < args.Length(); i++) {
    v8::String::AsciiValue argStr(args[i]);
    errStr << "  arg[" << i << "]: " << *argStr << "\n";
  }
  return v8::ThrowException(v8::Exception::TypeError(v8::String::New(errStr.str().c_str())));
}

/*static*/ v8::Handle<v8::Value> wxNode_wxWindow::_GetToolTipText(const v8::Arguments& args) {
  v8::HandleScope scope;
  wxNode_wxWindow* self = unwrap<wxNode_wxWindow>(args.This());

  
  /*
   * id: _43086
   */
  if(args.Length() == 0) {
    

    self->GetToolTipText();

    return v8::Undefined();
  }
  

  std::ostringstream errStr;
  errStr << "Could not find matching method for arguments (method name: GetToolTipText).\n";                           \
  errStr << "  arg count: " << args.Length() << "\n";
  for(int i = 0; i < args.Length(); i++) {
    v8::String::AsciiValue argStr(args[i]);
    errStr << "  arg[" << i << "]: " << *argStr << "\n";
  }
  return v8::ThrowException(v8::Exception::TypeError(v8::String::New(errStr.str().c_str())));
}

/*static*/ v8::Handle<v8::Value> wxNode_wxWindow::_CopyToolTip(const v8::Arguments& args) {
  v8::HandleScope scope;
  wxNode_wxWindow* self = unwrap<wxNode_wxWindow>(args.This());

  
  /*
   * id: _43087
   */
  if(args.Length() == 1 && (args[0]->IsNull() || args[0]->IsObject())) {
    wxNode_wxToolTip* tip = args[0]->IsNull() ? NULL : wxNodeObject::unwrap<wxNode_wxToolTip>(args[0]->ToObject()); /* type: _6541 * */
    

    self->CopyToolTip(tip);

    return v8::Undefined();
  }
  

  std::ostringstream errStr;
  errStr << "Could not find matching method for arguments (method name: CopyToolTip).\n";                           \
  errStr << "  arg count: " << args.Length() << "\n";
  for(int i = 0; i < args.Length(); i++) {
    v8::String::AsciiValue argStr(args[i]);
    errStr << "  arg[" << i << "]: " << *argStr << "\n";
  }
  return v8::ThrowException(v8::Exception::TypeError(v8::String::New(errStr.str().c_str())));
}

/*static*/ v8::Handle<v8::Value> wxNode_wxWindow::_SetDropTarget(const v8::Arguments& args) {
  v8::HandleScope scope;
  wxNode_wxWindow* self = unwrap<wxNode_wxWindow>(args.This());

  
  /*
   * id: _43088
   */
  if(args.Length() == 1 && (args[0]->IsNull() || args[0]->IsObject())) {
    wxNode_wxDropTarget* dropTarget = args[0]->IsNull() ? NULL : wxNodeObject::unwrap<wxNode_wxDropTarget>(args[0]->ToObject()); /* type: _61035 * */
    

    self->SetDropTarget(dropTarget);

    return v8::Undefined();
  }
  

  std::ostringstream errStr;
  errStr << "Could not find matching method for arguments (method name: SetDropTarget).\n";                           \
  errStr << "  arg count: " << args.Length() << "\n";
  for(int i = 0; i < args.Length(); i++) {
    v8::String::AsciiValue argStr(args[i]);
    errStr << "  arg[" << i << "]: " << *argStr << "\n";
  }
  return v8::ThrowException(v8::Exception::TypeError(v8::String::New(errStr.str().c_str())));
}

/*static*/ v8::Handle<v8::Value> wxNode_wxWindow::_GetDropTarget(const v8::Arguments& args) {
  v8::HandleScope scope;
  wxNode_wxWindow* self = unwrap<wxNode_wxWindow>(args.This());

  
  /*
   * id: _43089
   */
  if(args.Length() == 0) {
    

    self->GetDropTarget();

    return v8::Undefined();
  }
  

  std::ostringstream errStr;
  errStr << "Could not find matching method for arguments (method name: GetDropTarget).\n";                           \
  errStr << "  arg count: " << args.Length() << "\n";
  for(int i = 0; i < args.Length(); i++) {
    v8::String::AsciiValue argStr(args[i]);
    errStr << "  arg[" << i << "]: " << *argStr << "\n";
  }
  return v8::ThrowException(v8::Exception::TypeError(v8::String::New(errStr.str().c_str())));
}

/*static*/ v8::Handle<v8::Value> wxNode_wxWindow::_DragAcceptFiles(const v8::Arguments& args) {
  v8::HandleScope scope;
  wxNode_wxWindow* self = unwrap<wxNode_wxWindow>(args.This());

  
  /*
   * id: _43090
   */
  if(args.Length() == 1 && args[0]->IsBoolean()) {
    bool accept = args[0]->ToBoolean()->Value(); /* type: _14666  */
    

    self->DragAcceptFiles(accept);

    return v8::Undefined();
  }
  

  std::ostringstream errStr;
  errStr << "Could not find matching method for arguments (method name: DragAcceptFiles).\n";                           \
  errStr << "  arg count: " << args.Length() << "\n";
  for(int i = 0; i < args.Length(); i++) {
    v8::String::AsciiValue argStr(args[i]);
    errStr << "  arg[" << i << "]: " << *argStr << "\n";
  }
  return v8::ThrowException(v8::Exception::TypeError(v8::String::New(errStr.str().c_str())));
}

/*static*/ v8::Handle<v8::Value> wxNode_wxWindow::_SetConstraints(const v8::Arguments& args) {
  v8::HandleScope scope;
  wxNode_wxWindow* self = unwrap<wxNode_wxWindow>(args.This());

  
  /*
   * id: _43091
   */
  if(args.Length() == 1 && (args[0]->IsNull() || args[0]->IsObject())) {
    wxNode_wxLayoutConstraints* constraints = args[0]->IsNull() ? NULL : wxNodeObject::unwrap<wxNode_wxLayoutConstraints>(args[0]->ToObject()); /* type: _64237 * */
    

    self->SetConstraints(constraints);

    return v8::Undefined();
  }
  

  std::ostringstream errStr;
  errStr << "Could not find matching method for arguments (method name: SetConstraints).\n";                           \
  errStr << "  arg count: " << args.Length() << "\n";
  for(int i = 0; i < args.Length(); i++) {
    v8::String::AsciiValue argStr(args[i]);
    errStr << "  arg[" << i << "]: " << *argStr << "\n";
  }
  return v8::ThrowException(v8::Exception::TypeError(v8::String::New(errStr.str().c_str())));
}

/*static*/ v8::Handle<v8::Value> wxNode_wxWindow::_GetConstraints(const v8::Arguments& args) {
  v8::HandleScope scope;
  wxNode_wxWindow* self = unwrap<wxNode_wxWindow>(args.This());

  
  /*
   * id: _43092
   */
  if(args.Length() == 0) {
    

    self->GetConstraints();

    return v8::Undefined();
  }
  

  std::ostringstream errStr;
  errStr << "Could not find matching method for arguments (method name: GetConstraints).\n";                           \
  errStr << "  arg count: " << args.Length() << "\n";
  for(int i = 0; i < args.Length(); i++) {
    v8::String::AsciiValue argStr(args[i]);
    errStr << "  arg[" << i << "]: " << *argStr << "\n";
  }
  return v8::ThrowException(v8::Exception::TypeError(v8::String::New(errStr.str().c_str())));
}

/*static*/ v8::Handle<v8::Value> wxNode_wxWindow::_UnsetConstraints(const v8::Arguments& args) {
  v8::HandleScope scope;
  wxNode_wxWindow* self = unwrap<wxNode_wxWindow>(args.This());

  
  /*
   * id: _43093
   */
  if(args.Length() == 1 && (args[0]->IsNull() || args[0]->IsObject())) {
    wxNode_wxLayoutConstraints* c = args[0]->IsNull() ? NULL : wxNodeObject::unwrap<wxNode_wxLayoutConstraints>(args[0]->ToObject()); /* type: _64237 * */
    

    self->UnsetConstraints(c);

    return v8::Undefined();
  }
  

  std::ostringstream errStr;
  errStr << "Could not find matching method for arguments (method name: UnsetConstraints).\n";                           \
  errStr << "  arg count: " << args.Length() << "\n";
  for(int i = 0; i < args.Length(); i++) {
    v8::String::AsciiValue argStr(args[i]);
    errStr << "  arg[" << i << "]: " << *argStr << "\n";
  }
  return v8::ThrowException(v8::Exception::TypeError(v8::String::New(errStr.str().c_str())));
}

/*static*/ v8::Handle<v8::Value> wxNode_wxWindow::_GetConstraintsInvolvedIn(const v8::Arguments& args) {
  v8::HandleScope scope;
  wxNode_wxWindow* self = unwrap<wxNode_wxWindow>(args.This());

  
  /*
   * id: _43094
   */
  if(args.Length() == 0) {
    

    self->GetConstraintsInvolvedIn();

    return v8::Undefined();
  }
  

  std::ostringstream errStr;
  errStr << "Could not find matching method for arguments (method name: GetConstraintsInvolvedIn).\n";                           \
  errStr << "  arg count: " << args.Length() << "\n";
  for(int i = 0; i < args.Length(); i++) {
    v8::String::AsciiValue argStr(args[i]);
    errStr << "  arg[" << i << "]: " << *argStr << "\n";
  }
  return v8::ThrowException(v8::Exception::TypeError(v8::String::New(errStr.str().c_str())));
}

/*static*/ v8::Handle<v8::Value> wxNode_wxWindow::_AddConstraintReference(const v8::Arguments& args) {
  v8::HandleScope scope;
  wxNode_wxWindow* self = unwrap<wxNode_wxWindow>(args.This());

  
  /*
   * id: _43095
   */
  if(args.Length() == 1 && (args[0]->IsNull() || args[0]->IsObject())) {
    wxNode_wxWindow* otherWin = args[0]->IsNull() ? NULL : wxNodeObject::unwrap<wxNode_wxWindow>(args[0]->ToObject()); /* type: _51604 * */
    

    self->AddConstraintReference(otherWin);

    return v8::Undefined();
  }
  

  std::ostringstream errStr;
  errStr << "Could not find matching method for arguments (method name: AddConstraintReference).\n";                           \
  errStr << "  arg count: " << args.Length() << "\n";
  for(int i = 0; i < args.Length(); i++) {
    v8::String::AsciiValue argStr(args[i]);
    errStr << "  arg[" << i << "]: " << *argStr << "\n";
  }
  return v8::ThrowException(v8::Exception::TypeError(v8::String::New(errStr.str().c_str())));
}

/*static*/ v8::Handle<v8::Value> wxNode_wxWindow::_RemoveConstraintReference(const v8::Arguments& args) {
  v8::HandleScope scope;
  wxNode_wxWindow* self = unwrap<wxNode_wxWindow>(args.This());

  
  /*
   * id: _43096
   */
  if(args.Length() == 1 && (args[0]->IsNull() || args[0]->IsObject())) {
    wxNode_wxWindow* otherWin = args[0]->IsNull() ? NULL : wxNodeObject::unwrap<wxNode_wxWindow>(args[0]->ToObject()); /* type: _51604 * */
    

    self->RemoveConstraintReference(otherWin);

    return v8::Undefined();
  }
  

  std::ostringstream errStr;
  errStr << "Could not find matching method for arguments (method name: RemoveConstraintReference).\n";                           \
  errStr << "  arg count: " << args.Length() << "\n";
  for(int i = 0; i < args.Length(); i++) {
    v8::String::AsciiValue argStr(args[i]);
    errStr << "  arg[" << i << "]: " << *argStr << "\n";
  }
  return v8::ThrowException(v8::Exception::TypeError(v8::String::New(errStr.str().c_str())));
}

/*static*/ v8::Handle<v8::Value> wxNode_wxWindow::_DeleteRelatedConstraints(const v8::Arguments& args) {
  v8::HandleScope scope;
  wxNode_wxWindow* self = unwrap<wxNode_wxWindow>(args.This());

  
  /*
   * id: _43097
   */
  if(args.Length() == 0) {
    

    self->DeleteRelatedConstraints();

    return v8::Undefined();
  }
  

  std::ostringstream errStr;
  errStr << "Could not find matching method for arguments (method name: DeleteRelatedConstraints).\n";                           \
  errStr << "  arg count: " << args.Length() << "\n";
  for(int i = 0; i < args.Length(); i++) {
    v8::String::AsciiValue argStr(args[i]);
    errStr << "  arg[" << i << "]: " << *argStr << "\n";
  }
  return v8::ThrowException(v8::Exception::TypeError(v8::String::New(errStr.str().c_str())));
}

/*static*/ v8::Handle<v8::Value> wxNode_wxWindow::_ResetConstraints(const v8::Arguments& args) {
  v8::HandleScope scope;
  wxNode_wxWindow* self = unwrap<wxNode_wxWindow>(args.This());

  
  /*
   * id: _43098
   */
  if(args.Length() == 0) {
    

    self->ResetConstraints();

    return v8::Undefined();
  }
  

  std::ostringstream errStr;
  errStr << "Could not find matching method for arguments (method name: ResetConstraints).\n";                           \
  errStr << "  arg count: " << args.Length() << "\n";
  for(int i = 0; i < args.Length(); i++) {
    v8::String::AsciiValue argStr(args[i]);
    errStr << "  arg[" << i << "]: " << *argStr << "\n";
  }
  return v8::ThrowException(v8::Exception::TypeError(v8::String::New(errStr.str().c_str())));
}

/*static*/ v8::Handle<v8::Value> wxNode_wxWindow::_SetConstraintSizes(const v8::Arguments& args) {
  v8::HandleScope scope;
  wxNode_wxWindow* self = unwrap<wxNode_wxWindow>(args.This());

  
  /*
   * id: _43099
   */
  if(args.Length() == 1 && args[0]->IsBoolean()) {
    bool recurse = args[0]->ToBoolean()->Value(); /* type: _14666  */
    

    self->SetConstraintSizes(recurse);

    return v8::Undefined();
  }
  
  /*
   * id: _43099
   */
  if(args.Length() == 0) {
    

    self->SetConstraintSizes();

    return v8::Undefined();
  }
  

  std::ostringstream errStr;
  errStr << "Could not find matching method for arguments (method name: SetConstraintSizes).\n";                           \
  errStr << "  arg count: " << args.Length() << "\n";
  for(int i = 0; i < args.Length(); i++) {
    v8::String::AsciiValue argStr(args[i]);
    errStr << "  arg[" << i << "]: " << *argStr << "\n";
  }
  return v8::ThrowException(v8::Exception::TypeError(v8::String::New(errStr.str().c_str())));
}

/*static*/ v8::Handle<v8::Value> wxNode_wxWindow::_LayoutPhase1(const v8::Arguments& args) {
  v8::HandleScope scope;
  wxNode_wxWindow* self = unwrap<wxNode_wxWindow>(args.This());

  
  /*
   * id: _43100
   */
  if(args.Length() == 1 && false) {
    int noChanges; /* type: _16500 * */
    

    self->LayoutPhase1(&noChanges);

    return v8::Undefined();
  }
  

  std::ostringstream errStr;
  errStr << "Could not find matching method for arguments (method name: LayoutPhase1).\n";                           \
  errStr << "  arg count: " << args.Length() << "\n";
  for(int i = 0; i < args.Length(); i++) {
    v8::String::AsciiValue argStr(args[i]);
    errStr << "  arg[" << i << "]: " << *argStr << "\n";
  }
  return v8::ThrowException(v8::Exception::TypeError(v8::String::New(errStr.str().c_str())));
}

/*static*/ v8::Handle<v8::Value> wxNode_wxWindow::_LayoutPhase2(const v8::Arguments& args) {
  v8::HandleScope scope;
  wxNode_wxWindow* self = unwrap<wxNode_wxWindow>(args.This());

  
  /*
   * id: _43101
   */
  if(args.Length() == 1 && false) {
    int noChanges; /* type: _16500 * */
    

    self->LayoutPhase2(&noChanges);

    return v8::Undefined();
  }
  

  std::ostringstream errStr;
  errStr << "Could not find matching method for arguments (method name: LayoutPhase2).\n";                           \
  errStr << "  arg count: " << args.Length() << "\n";
  for(int i = 0; i < args.Length(); i++) {
    v8::String::AsciiValue argStr(args[i]);
    errStr << "  arg[" << i << "]: " << *argStr << "\n";
  }
  return v8::ThrowException(v8::Exception::TypeError(v8::String::New(errStr.str().c_str())));
}

/*static*/ v8::Handle<v8::Value> wxNode_wxWindow::_DoPhase(const v8::Arguments& args) {
  v8::HandleScope scope;
  wxNode_wxWindow* self = unwrap<wxNode_wxWindow>(args.This());

  
  /*
   * id: _43102
   */
  if(args.Length() == 1 && args[0]->IsNumber()) {
    int phase = (int)args[0]->ToInt32()->Value(); /* type: _162  */
    

    self->DoPhase(phase);

    return v8::Undefined();
  }
  

  std::ostringstream errStr;
  errStr << "Could not find matching method for arguments (method name: DoPhase).\n";                           \
  errStr << "  arg count: " << args.Length() << "\n";
  for(int i = 0; i < args.Length(); i++) {
    v8::String::AsciiValue argStr(args[i]);
    errStr << "  arg[" << i << "]: " << *argStr << "\n";
  }
  return v8::ThrowException(v8::Exception::TypeError(v8::String::New(errStr.str().c_str())));
}

/*static*/ v8::Handle<v8::Value> wxNode_wxWindow::_SetSizeConstraint(const v8::Arguments& args) {
  v8::HandleScope scope;
  wxNode_wxWindow* self = unwrap<wxNode_wxWindow>(args.This());

  
  /*
   * id: _43103
   */
  if(args.Length() == 4 && args[0]->IsNumber() && args[1]->IsNumber() && args[2]->IsNumber() && args[3]->IsNumber()) {
    int x = (int)args[0]->ToInt32()->Value(); /* type: _162  */
    int y = (int)args[1]->ToInt32()->Value(); /* type: _162  */
    int w = (int)args[2]->ToInt32()->Value(); /* type: _162  */
    int h = (int)args[3]->ToInt32()->Value(); /* type: _162  */
    

    self->SetSizeConstraint(x, y, w, h);

    return v8::Undefined();
  }
  

  std::ostringstream errStr;
  errStr << "Could not find matching method for arguments (method name: SetSizeConstraint).\n";                           \
  errStr << "  arg count: " << args.Length() << "\n";
  for(int i = 0; i < args.Length(); i++) {
    v8::String::AsciiValue argStr(args[i]);
    errStr << "  arg[" << i << "]: " << *argStr << "\n";
  }
  return v8::ThrowException(v8::Exception::TypeError(v8::String::New(errStr.str().c_str())));
}

/*static*/ v8::Handle<v8::Value> wxNode_wxWindow::_MoveConstraint(const v8::Arguments& args) {
  v8::HandleScope scope;
  wxNode_wxWindow* self = unwrap<wxNode_wxWindow>(args.This());

  
  /*
   * id: _43104
   */
  if(args.Length() == 2 && args[0]->IsNumber() && args[1]->IsNumber()) {
    int x = (int)args[0]->ToInt32()->Value(); /* type: _162  */
    int y = (int)args[1]->ToInt32()->Value(); /* type: _162  */
    

    self->MoveConstraint(x, y);

    return v8::Undefined();
  }
  

  std::ostringstream errStr;
  errStr << "Could not find matching method for arguments (method name: MoveConstraint).\n";                           \
  errStr << "  arg count: " << args.Length() << "\n";
  for(int i = 0; i < args.Length(); i++) {
    v8::String::AsciiValue argStr(args[i]);
    errStr << "  arg[" << i << "]: " << *argStr << "\n";
  }
  return v8::ThrowException(v8::Exception::TypeError(v8::String::New(errStr.str().c_str())));
}

/*static*/ v8::Handle<v8::Value> wxNode_wxWindow::_GetSizeConstraint(const v8::Arguments& args) {
  v8::HandleScope scope;
  wxNode_wxWindow* self = unwrap<wxNode_wxWindow>(args.This());

  
  /*
   * id: _43105
   */
  if(args.Length() == 2 && false && false) {
    int w; /* type: _16500 * */
    int h; /* type: _16500 * */
    

    self->GetSizeConstraint(&w, &h);

    return v8::Undefined();
  }
  

  std::ostringstream errStr;
  errStr << "Could not find matching method for arguments (method name: GetSizeConstraint).\n";                           \
  errStr << "  arg count: " << args.Length() << "\n";
  for(int i = 0; i < args.Length(); i++) {
    v8::String::AsciiValue argStr(args[i]);
    errStr << "  arg[" << i << "]: " << *argStr << "\n";
  }
  return v8::ThrowException(v8::Exception::TypeError(v8::String::New(errStr.str().c_str())));
}

/*static*/ v8::Handle<v8::Value> wxNode_wxWindow::_GetClientSizeConstraint(const v8::Arguments& args) {
  v8::HandleScope scope;
  wxNode_wxWindow* self = unwrap<wxNode_wxWindow>(args.This());

  
  /*
   * id: _43106
   */
  if(args.Length() == 2 && false && false) {
    int w; /* type: _16500 * */
    int h; /* type: _16500 * */
    

    self->GetClientSizeConstraint(&w, &h);

    return v8::Undefined();
  }
  

  std::ostringstream errStr;
  errStr << "Could not find matching method for arguments (method name: GetClientSizeConstraint).\n";                           \
  errStr << "  arg count: " << args.Length() << "\n";
  for(int i = 0; i < args.Length(); i++) {
    v8::String::AsciiValue argStr(args[i]);
    errStr << "  arg[" << i << "]: " << *argStr << "\n";
  }
  return v8::ThrowException(v8::Exception::TypeError(v8::String::New(errStr.str().c_str())));
}

/*static*/ v8::Handle<v8::Value> wxNode_wxWindow::_GetPositionConstraint(const v8::Arguments& args) {
  v8::HandleScope scope;
  wxNode_wxWindow* self = unwrap<wxNode_wxWindow>(args.This());

  
  /*
   * id: _43107
   */
  if(args.Length() == 2 && false && false) {
    int x; /* type: _16500 * */
    int y; /* type: _16500 * */
    

    self->GetPositionConstraint(&x, &y);

    return v8::Undefined();
  }
  

  std::ostringstream errStr;
  errStr << "Could not find matching method for arguments (method name: GetPositionConstraint).\n";                           \
  errStr << "  arg count: " << args.Length() << "\n";
  for(int i = 0; i < args.Length(); i++) {
    v8::String::AsciiValue argStr(args[i]);
    errStr << "  arg[" << i << "]: " << *argStr << "\n";
  }
  return v8::ThrowException(v8::Exception::TypeError(v8::String::New(errStr.str().c_str())));
}

/*static*/ v8::Handle<v8::Value> wxNode_wxWindow::_SetAutoLayout(const v8::Arguments& args) {
  v8::HandleScope scope;
  wxNode_wxWindow* self = unwrap<wxNode_wxWindow>(args.This());

  
  /*
   * id: _43108
   */
  if(args.Length() == 1 && args[0]->IsBoolean()) {
    bool autoLayout = args[0]->ToBoolean()->Value(); /* type: _14666  */
    

    self->SetAutoLayout(autoLayout);

    return v8::Undefined();
  }
  

  std::ostringstream errStr;
  errStr << "Could not find matching method for arguments (method name: SetAutoLayout).\n";                           \
  errStr << "  arg count: " << args.Length() << "\n";
  for(int i = 0; i < args.Length(); i++) {
    v8::String::AsciiValue argStr(args[i]);
    errStr << "  arg[" << i << "]: " << *argStr << "\n";
  }
  return v8::ThrowException(v8::Exception::TypeError(v8::String::New(errStr.str().c_str())));
}

/*static*/ v8::Handle<v8::Value> wxNode_wxWindow::_GetAutoLayout(const v8::Arguments& args) {
  v8::HandleScope scope;
  wxNode_wxWindow* self = unwrap<wxNode_wxWindow>(args.This());

  
  /*
   * id: _43109
   */
  if(args.Length() == 0) {
    

    self->GetAutoLayout();

    return v8::Undefined();
  }
  

  std::ostringstream errStr;
  errStr << "Could not find matching method for arguments (method name: GetAutoLayout).\n";                           \
  errStr << "  arg count: " << args.Length() << "\n";
  for(int i = 0; i < args.Length(); i++) {
    v8::String::AsciiValue argStr(args[i]);
    errStr << "  arg[" << i << "]: " << *argStr << "\n";
  }
  return v8::ThrowException(v8::Exception::TypeError(v8::String::New(errStr.str().c_str())));
}

/*static*/ v8::Handle<v8::Value> wxNode_wxWindow::_Layout(const v8::Arguments& args) {
  v8::HandleScope scope;
  wxNode_wxWindow* self = unwrap<wxNode_wxWindow>(args.This());

  
  /*
   * id: _43110
   */
  if(args.Length() == 0) {
    

    self->Layout();

    return v8::Undefined();
  }
  

  std::ostringstream errStr;
  errStr << "Could not find matching method for arguments (method name: Layout).\n";                           \
  errStr << "  arg count: " << args.Length() << "\n";
  for(int i = 0; i < args.Length(); i++) {
    v8::String::AsciiValue argStr(args[i]);
    errStr << "  arg[" << i << "]: " << *argStr << "\n";
  }
  return v8::ThrowException(v8::Exception::TypeError(v8::String::New(errStr.str().c_str())));
}

/*static*/ v8::Handle<v8::Value> wxNode_wxWindow::_SetSizer(const v8::Arguments& args) {
  v8::HandleScope scope;
  wxNode_wxWindow* self = unwrap<wxNode_wxWindow>(args.This());

  
  /*
   * id: _43111
   */
  if(args.Length() == 2 && (args[0]->IsNull() || args[0]->IsObject()) && args[1]->IsBoolean()) {
    wxNode_wxSizer* sizer = args[0]->IsNull() ? NULL : wxNodeObject::unwrap<wxNode_wxSizer>(args[0]->ToObject()); /* type: _58725 * */
    bool deleteOld = args[1]->ToBoolean()->Value(); /* type: _14666  */
    

    self->SetSizer(sizer, deleteOld);

    return v8::Undefined();
  }
  
  /*
   * id: _43111
   */
  if(args.Length() == 1 && (args[0]->IsNull() || args[0]->IsObject())) {
    wxNode_wxSizer* sizer = args[0]->IsNull() ? NULL : wxNodeObject::unwrap<wxNode_wxSizer>(args[0]->ToObject()); /* type: _58725 * */
    

    self->SetSizer(sizer);

    return v8::Undefined();
  }
  

  std::ostringstream errStr;
  errStr << "Could not find matching method for arguments (method name: SetSizer).\n";                           \
  errStr << "  arg count: " << args.Length() << "\n";
  for(int i = 0; i < args.Length(); i++) {
    v8::String::AsciiValue argStr(args[i]);
    errStr << "  arg[" << i << "]: " << *argStr << "\n";
  }
  return v8::ThrowException(v8::Exception::TypeError(v8::String::New(errStr.str().c_str())));
}

/*static*/ v8::Handle<v8::Value> wxNode_wxWindow::_SetSizerAndFit(const v8::Arguments& args) {
  v8::HandleScope scope;
  wxNode_wxWindow* self = unwrap<wxNode_wxWindow>(args.This());

  
  /*
   * id: _43112
   */
  if(args.Length() == 2 && (args[0]->IsNull() || args[0]->IsObject()) && args[1]->IsBoolean()) {
    wxNode_wxSizer* sizer = args[0]->IsNull() ? NULL : wxNodeObject::unwrap<wxNode_wxSizer>(args[0]->ToObject()); /* type: _58725 * */
    bool deleteOld = args[1]->ToBoolean()->Value(); /* type: _14666  */
    

    self->SetSizerAndFit(sizer, deleteOld);

    return v8::Undefined();
  }
  
  /*
   * id: _43112
   */
  if(args.Length() == 1 && (args[0]->IsNull() || args[0]->IsObject())) {
    wxNode_wxSizer* sizer = args[0]->IsNull() ? NULL : wxNodeObject::unwrap<wxNode_wxSizer>(args[0]->ToObject()); /* type: _58725 * */
    

    self->SetSizerAndFit(sizer);

    return v8::Undefined();
  }
  

  std::ostringstream errStr;
  errStr << "Could not find matching method for arguments (method name: SetSizerAndFit).\n";                           \
  errStr << "  arg count: " << args.Length() << "\n";
  for(int i = 0; i < args.Length(); i++) {
    v8::String::AsciiValue argStr(args[i]);
    errStr << "  arg[" << i << "]: " << *argStr << "\n";
  }
  return v8::ThrowException(v8::Exception::TypeError(v8::String::New(errStr.str().c_str())));
}

/*static*/ v8::Handle<v8::Value> wxNode_wxWindow::_GetSizer(const v8::Arguments& args) {
  v8::HandleScope scope;
  wxNode_wxWindow* self = unwrap<wxNode_wxWindow>(args.This());

  
  /*
   * id: _43113
   */
  if(args.Length() == 0) {
    

    self->GetSizer();

    return v8::Undefined();
  }
  

  std::ostringstream errStr;
  errStr << "Could not find matching method for arguments (method name: GetSizer).\n";                           \
  errStr << "  arg count: " << args.Length() << "\n";
  for(int i = 0; i < args.Length(); i++) {
    v8::String::AsciiValue argStr(args[i]);
    errStr << "  arg[" << i << "]: " << *argStr << "\n";
  }
  return v8::ThrowException(v8::Exception::TypeError(v8::String::New(errStr.str().c_str())));
}

/*static*/ v8::Handle<v8::Value> wxNode_wxWindow::_SetContainingSizer(const v8::Arguments& args) {
  v8::HandleScope scope;
  wxNode_wxWindow* self = unwrap<wxNode_wxWindow>(args.This());

  
  /*
   * id: _43114
   */
  if(args.Length() == 1 && (args[0]->IsNull() || args[0]->IsObject())) {
    wxNode_wxSizer* sizer = args[0]->IsNull() ? NULL : wxNodeObject::unwrap<wxNode_wxSizer>(args[0]->ToObject()); /* type: _58725 * */
    

    self->SetContainingSizer(sizer);

    return v8::Undefined();
  }
  

  std::ostringstream errStr;
  errStr << "Could not find matching method for arguments (method name: SetContainingSizer).\n";                           \
  errStr << "  arg count: " << args.Length() << "\n";
  for(int i = 0; i < args.Length(); i++) {
    v8::String::AsciiValue argStr(args[i]);
    errStr << "  arg[" << i << "]: " << *argStr << "\n";
  }
  return v8::ThrowException(v8::Exception::TypeError(v8::String::New(errStr.str().c_str())));
}

/*static*/ v8::Handle<v8::Value> wxNode_wxWindow::_GetContainingSizer(const v8::Arguments& args) {
  v8::HandleScope scope;
  wxNode_wxWindow* self = unwrap<wxNode_wxWindow>(args.This());

  
  /*
   * id: _43115
   */
  if(args.Length() == 0) {
    

    self->GetContainingSizer();

    return v8::Undefined();
  }
  

  std::ostringstream errStr;
  errStr << "Could not find matching method for arguments (method name: GetContainingSizer).\n";                           \
  errStr << "  arg count: " << args.Length() << "\n";
  for(int i = 0; i < args.Length(); i++) {
    v8::String::AsciiValue argStr(args[i]);
    errStr << "  arg[" << i << "]: " << *argStr << "\n";
  }
  return v8::ThrowException(v8::Exception::TypeError(v8::String::New(errStr.str().c_str())));
}

/*static*/ v8::Handle<v8::Value> wxNode_wxWindow::_SetTransparent(const v8::Arguments& args) {
  v8::HandleScope scope;
  wxNode_wxWindow* self = unwrap<wxNode_wxWindow>(args.This());

  
  /*
   * id: _43116
   */
  if(args.Length() == 1 && args[0]->IsNumber()) {
    unsigned char arg0 = args[0]->ToInt32()->Value(); /* type: _9908  */
    

    self->SetTransparent(arg0);

    return v8::Undefined();
  }
  

  std::ostringstream errStr;
  errStr << "Could not find matching method for arguments (method name: SetTransparent).\n";                           \
  errStr << "  arg count: " << args.Length() << "\n";
  for(int i = 0; i < args.Length(); i++) {
    v8::String::AsciiValue argStr(args[i]);
    errStr << "  arg[" << i << "]: " << *argStr << "\n";
  }
  return v8::ThrowException(v8::Exception::TypeError(v8::String::New(errStr.str().c_str())));
}

/*static*/ v8::Handle<v8::Value> wxNode_wxWindow::_CanSetTransparent(const v8::Arguments& args) {
  v8::HandleScope scope;
  wxNode_wxWindow* self = unwrap<wxNode_wxWindow>(args.This());

  
  /*
   * id: _43117
   */
  if(args.Length() == 0) {
    

    self->CanSetTransparent();

    return v8::Undefined();
  }
  

  std::ostringstream errStr;
  errStr << "Could not find matching method for arguments (method name: CanSetTransparent).\n";                           \
  errStr << "  arg count: " << args.Length() << "\n";
  for(int i = 0; i < args.Length(); i++) {
    v8::String::AsciiValue argStr(args[i]);
    errStr << "  arg[" << i << "]: " << *argStr << "\n";
  }
  return v8::ThrowException(v8::Exception::TypeError(v8::String::New(errStr.str().c_str())));
}

/*static*/ v8::Handle<v8::Value> wxNode_wxWindow::_OnSysColourChanged(const v8::Arguments& args) {
  v8::HandleScope scope;
  wxNode_wxWindow* self = unwrap<wxNode_wxWindow>(args.This());

  

  std::ostringstream errStr;
  errStr << "Could not find matching method for arguments (method name: OnSysColourChanged).\n";                           \
  errStr << "  arg count: " << args.Length() << "\n";
  for(int i = 0; i < args.Length(); i++) {
    v8::String::AsciiValue argStr(args[i]);
    errStr << "  arg[" << i << "]: " << *argStr << "\n";
  }
  return v8::ThrowException(v8::Exception::TypeError(v8::String::New(errStr.str().c_str())));
}

/*static*/ v8::Handle<v8::Value> wxNode_wxWindow::_OnInitDialog(const v8::Arguments& args) {
  v8::HandleScope scope;
  wxNode_wxWindow* self = unwrap<wxNode_wxWindow>(args.This());

  

  std::ostringstream errStr;
  errStr << "Could not find matching method for arguments (method name: OnInitDialog).\n";                           \
  errStr << "  arg count: " << args.Length() << "\n";
  for(int i = 0; i < args.Length(); i++) {
    v8::String::AsciiValue argStr(args[i]);
    errStr << "  arg[" << i << "]: " << *argStr << "\n";
  }
  return v8::ThrowException(v8::Exception::TypeError(v8::String::New(errStr.str().c_str())));
}

/*static*/ v8::Handle<v8::Value> wxNode_wxWindow::_OnMiddleClick(const v8::Arguments& args) {
  v8::HandleScope scope;
  wxNode_wxWindow* self = unwrap<wxNode_wxWindow>(args.This());

  

  std::ostringstream errStr;
  errStr << "Could not find matching method for arguments (method name: OnMiddleClick).\n";                           \
  errStr << "  arg count: " << args.Length() << "\n";
  for(int i = 0; i < args.Length(); i++) {
    v8::String::AsciiValue argStr(args[i]);
    errStr << "  arg[" << i << "]: " << *argStr << "\n";
  }
  return v8::ThrowException(v8::Exception::TypeError(v8::String::New(errStr.str().c_str())));
}

/*static*/ v8::Handle<v8::Value> wxNode_wxWindow::_OnHelp(const v8::Arguments& args) {
  v8::HandleScope scope;
  wxNode_wxWindow* self = unwrap<wxNode_wxWindow>(args.This());

  

  std::ostringstream errStr;
  errStr << "Could not find matching method for arguments (method name: OnHelp).\n";                           \
  errStr << "  arg count: " << args.Length() << "\n";
  for(int i = 0; i < args.Length(); i++) {
    v8::String::AsciiValue argStr(args[i]);
    errStr << "  arg[" << i << "]: " << *argStr << "\n";
  }
  return v8::ThrowException(v8::Exception::TypeError(v8::String::New(errStr.str().c_str())));
}

/*static*/ v8::Handle<v8::Value> wxNode_wxWindow::_OnInternalIdle(const v8::Arguments& args) {
  v8::HandleScope scope;
  wxNode_wxWindow* self = unwrap<wxNode_wxWindow>(args.This());

  

  std::ostringstream errStr;
  errStr << "Could not find matching method for arguments (method name: OnInternalIdle).\n";                           \
  errStr << "  arg count: " << args.Length() << "\n";
  for(int i = 0; i < args.Length(); i++) {
    v8::String::AsciiValue argStr(args[i]);
    errStr << "  arg[" << i << "]: " << *argStr << "\n";
  }
  return v8::ThrowException(v8::Exception::TypeError(v8::String::New(errStr.str().c_str())));
}

/*static*/ v8::Handle<v8::Value> wxNode_wxWindow::_SendIdleEvents(const v8::Arguments& args) {
  v8::HandleScope scope;
  wxNode_wxWindow* self = unwrap<wxNode_wxWindow>(args.This());

  
  /*
   * id: _43123
   */
  if(args.Length() == 1 && (args[0]->IsNull() || args[0]->IsObject())) {
    wxNode_wxIdleEvent* event = args[0]->IsNull() ? NULL : wxNodeObject::unwrap<wxNode_wxIdleEvent>(args[0]->ToObject()); /* type: _61036  */
    

    self->SendIdleEvents(*event);

    return v8::Undefined();
  }
  

  std::ostringstream errStr;
  errStr << "Could not find matching method for arguments (method name: SendIdleEvents).\n";                           \
  errStr << "  arg count: " << args.Length() << "\n";
  for(int i = 0; i < args.Length(); i++) {
    v8::String::AsciiValue argStr(args[i]);
    errStr << "  arg[" << i << "]: " << *argStr << "\n";
  }
  return v8::ThrowException(v8::Exception::TypeError(v8::String::New(errStr.str().c_str())));
}

/*static*/ v8::Handle<v8::Value> wxNode_wxWindow::_GetHandle(const v8::Arguments& args) {
  v8::HandleScope scope;
  wxNode_wxWindow* self = unwrap<wxNode_wxWindow>(args.This());

  
  /*
   * id: _43124
   */
  if(args.Length() == 0) {
    

    self->GetHandle();

    return v8::Undefined();
  }
  

  std::ostringstream errStr;
  errStr << "Could not find matching method for arguments (method name: GetHandle).\n";                           \
  errStr << "  arg count: " << args.Length() << "\n";
  for(int i = 0; i < args.Length(); i++) {
    v8::String::AsciiValue argStr(args[i]);
    errStr << "  arg[" << i << "]: " << *argStr << "\n";
  }
  return v8::ThrowException(v8::Exception::TypeError(v8::String::New(errStr.str().c_str())));
}

/*static*/ v8::Handle<v8::Value> wxNode_wxWindow::_DissociateHandle(const v8::Arguments& args) {
  v8::HandleScope scope;
  wxNode_wxWindow* self = unwrap<wxNode_wxWindow>(args.This());

  
  /*
   * id: _43126
   */
  if(args.Length() == 0) {
    

    self->DissociateHandle();

    return v8::Undefined();
  }
  

  std::ostringstream errStr;
  errStr << "Could not find matching method for arguments (method name: DissociateHandle).\n";                           \
  errStr << "  arg count: " << args.Length() << "\n";
  for(int i = 0; i < args.Length(); i++) {
    v8::String::AsciiValue argStr(args[i]);
    errStr << "  arg[" << i << "]: " << *argStr << "\n";
  }
  return v8::ThrowException(v8::Exception::TypeError(v8::String::New(errStr.str().c_str())));
}

/*static*/ v8::Handle<v8::Value> wxNode_wxWindow::_GetPalette(const v8::Arguments& args) {
  v8::HandleScope scope;
  wxNode_wxWindow* self = unwrap<wxNode_wxWindow>(args.This());

  
  /*
   * id: _43127
   */
  if(args.Length() == 0) {
    

    self->GetPalette();

    return v8::Undefined();
  }
  

  std::ostringstream errStr;
  errStr << "Could not find matching method for arguments (method name: GetPalette).\n";                           \
  errStr << "  arg count: " << args.Length() << "\n";
  for(int i = 0; i < args.Length(); i++) {
    v8::String::AsciiValue argStr(args[i]);
    errStr << "  arg[" << i << "]: " << *argStr << "\n";
  }
  return v8::ThrowException(v8::Exception::TypeError(v8::String::New(errStr.str().c_str())));
}

/*static*/ v8::Handle<v8::Value> wxNode_wxWindow::_SetPalette(const v8::Arguments& args) {
  v8::HandleScope scope;
  wxNode_wxWindow* self = unwrap<wxNode_wxWindow>(args.This());

  
  /*
   * id: _43128
   */
  if(args.Length() == 1 && (args[0]->IsNull() || args[0]->IsObject())) {
    wxNode_wxPalette* pal = args[0]->IsNull() ? NULL : wxNodeObject::unwrap<wxNode_wxPalette>(args[0]->ToObject()); /* type: _59271  */
    

    self->SetPalette(*pal);

    return v8::Undefined();
  }
  

  std::ostringstream errStr;
  errStr << "Could not find matching method for arguments (method name: SetPalette).\n";                           \
  errStr << "  arg count: " << args.Length() << "\n";
  for(int i = 0; i < args.Length(); i++) {
    v8::String::AsciiValue argStr(args[i]);
    errStr << "  arg[" << i << "]: " << *argStr << "\n";
  }
  return v8::ThrowException(v8::Exception::TypeError(v8::String::New(errStr.str().c_str())));
}

/*static*/ v8::Handle<v8::Value> wxNode_wxWindow::_HasCustomPalette(const v8::Arguments& args) {
  v8::HandleScope scope;
  wxNode_wxWindow* self = unwrap<wxNode_wxWindow>(args.This());

  
  /*
   * id: _43129
   */
  if(args.Length() == 0) {
    

    self->HasCustomPalette();

    return v8::Undefined();
  }
  

  std::ostringstream errStr;
  errStr << "Could not find matching method for arguments (method name: HasCustomPalette).\n";                           \
  errStr << "  arg count: " << args.Length() << "\n";
  for(int i = 0; i < args.Length(); i++) {
    v8::String::AsciiValue argStr(args[i]);
    errStr << "  arg[" << i << "]: " << *argStr << "\n";
  }
  return v8::ThrowException(v8::Exception::TypeError(v8::String::New(errStr.str().c_str())));
}

/*static*/ v8::Handle<v8::Value> wxNode_wxWindow::_GetAncestorWithCustomPalette(const v8::Arguments& args) {
  v8::HandleScope scope;
  wxNode_wxWindow* self = unwrap<wxNode_wxWindow>(args.This());

  
  /*
   * id: _43130
   */
  if(args.Length() == 0) {
    

    self->GetAncestorWithCustomPalette();

    return v8::Undefined();
  }
  

  std::ostringstream errStr;
  errStr << "Could not find matching method for arguments (method name: GetAncestorWithCustomPalette).\n";                           \
  errStr << "  arg count: " << args.Length() << "\n";
  for(int i = 0; i < args.Length(); i++) {
    v8::String::AsciiValue argStr(args[i]);
    errStr << "  arg[" << i << "]: " << *argStr << "\n";
  }
  return v8::ThrowException(v8::Exception::TypeError(v8::String::New(errStr.str().c_str())));
}

/*static*/ v8::Handle<v8::Value> wxNode_wxWindow::_InheritAttributes(const v8::Arguments& args) {
  v8::HandleScope scope;
  wxNode_wxWindow* self = unwrap<wxNode_wxWindow>(args.This());

  
  /*
   * id: _43131
   */
  if(args.Length() == 0) {
    

    self->InheritAttributes();

    return v8::Undefined();
  }
  

  std::ostringstream errStr;
  errStr << "Could not find matching method for arguments (method name: InheritAttributes).\n";                           \
  errStr << "  arg count: " << args.Length() << "\n";
  for(int i = 0; i < args.Length(); i++) {
    v8::String::AsciiValue argStr(args[i]);
    errStr << "  arg[" << i << "]: " << *argStr << "\n";
  }
  return v8::ThrowException(v8::Exception::TypeError(v8::String::New(errStr.str().c_str())));
}

/*static*/ v8::Handle<v8::Value> wxNode_wxWindow::_ShouldInheritColours(const v8::Arguments& args) {
  v8::HandleScope scope;
  wxNode_wxWindow* self = unwrap<wxNode_wxWindow>(args.This());

  
  /*
   * id: _43132
   */
  if(args.Length() == 0) {
    

    self->ShouldInheritColours();

    return v8::Undefined();
  }
  

  std::ostringstream errStr;
  errStr << "Could not find matching method for arguments (method name: ShouldInheritColours).\n";                           \
  errStr << "  arg count: " << args.Length() << "\n";
  for(int i = 0; i < args.Length(); i++) {
    v8::String::AsciiValue argStr(args[i]);
    errStr << "  arg[" << i << "]: " << *argStr << "\n";
  }
  return v8::ThrowException(v8::Exception::TypeError(v8::String::New(errStr.str().c_str())));
}

/*static*/ v8::Handle<v8::Value> wxNode_wxWindow::_CanBeOutsideClientArea(const v8::Arguments& args) {
  v8::HandleScope scope;
  wxNode_wxWindow* self = unwrap<wxNode_wxWindow>(args.This());

  
  /*
   * id: _43133
   */
  if(args.Length() == 0) {
    

    self->CanBeOutsideClientArea();

    return v8::Undefined();
  }
  

  std::ostringstream errStr;
  errStr << "Could not find matching method for arguments (method name: CanBeOutsideClientArea).\n";                           \
  errStr << "  arg count: " << args.Length() << "\n";
  for(int i = 0; i < args.Length(); i++) {
    v8::String::AsciiValue argStr(args[i]);
    errStr << "  arg[" << i << "]: " << *argStr << "\n";
  }
  return v8::ThrowException(v8::Exception::TypeError(v8::String::New(errStr.str().c_str())));
}

/*static*/ v8::Handle<v8::Value> wxNode_wxWindow::_CanApplyThemeBorder(const v8::Arguments& args) {
  v8::HandleScope scope;
  wxNode_wxWindow* self = unwrap<wxNode_wxWindow>(args.This());

  
  /*
   * id: _43134
   */
  if(args.Length() == 0) {
    

    self->CanApplyThemeBorder();

    return v8::Undefined();
  }
  

  std::ostringstream errStr;
  errStr << "Could not find matching method for arguments (method name: CanApplyThemeBorder).\n";                           \
  errStr << "  arg count: " << args.Length() << "\n";
  for(int i = 0; i < args.Length(); i++) {
    v8::String::AsciiValue argStr(args[i]);
    errStr << "  arg[" << i << "]: " << *argStr << "\n";
  }
  return v8::ThrowException(v8::Exception::TypeError(v8::String::New(errStr.str().c_str())));
}

/*static*/ v8::Handle<v8::Value> wxNode_wxWindow::_GetMainWindowOfCompositeControl(const v8::Arguments& args) {
  v8::HandleScope scope;
  wxNode_wxWindow* self = unwrap<wxNode_wxWindow>(args.This());

  
  /*
   * id: _43135
   */
  if(args.Length() == 0) {
    

    self->GetMainWindowOfCompositeControl();

    return v8::Undefined();
  }
  

  std::ostringstream errStr;
  errStr << "Could not find matching method for arguments (method name: GetMainWindowOfCompositeControl).\n";                           \
  errStr << "  arg count: " << args.Length() << "\n";
  for(int i = 0; i < args.Length(); i++) {
    v8::String::AsciiValue argStr(args[i]);
    errStr << "  arg[" << i << "]: " << *argStr << "\n";
  }
  return v8::ThrowException(v8::Exception::TypeError(v8::String::New(errStr.str().c_str())));
}

/*static*/ v8::Handle<v8::Value> wxNode_wxWindow::_IsTopNavigationDomain(const v8::Arguments& args) {
  v8::HandleScope scope;
  wxNode_wxWindow* self = unwrap<wxNode_wxWindow>(args.This());

  
  /*
   * id: _43136
   */
  if(args.Length() == 0) {
    

    self->IsTopNavigationDomain();

    return v8::Undefined();
  }
  

  std::ostringstream errStr;
  errStr << "Could not find matching method for arguments (method name: IsTopNavigationDomain).\n";                           \
  errStr << "  arg count: " << args.Length() << "\n";
  for(int i = 0; i < args.Length(); i++) {
    v8::String::AsciiValue argStr(args[i]);
    errStr << "  arg[" << i << "]: " << *argStr << "\n";
  }
  return v8::ThrowException(v8::Exception::TypeError(v8::String::New(errStr.str().c_str())));
}

/*static*/ v8::Handle<v8::Value> wxNode_wxWindow::_GetClassInfo(const v8::Arguments& args) {
  v8::HandleScope scope;
  wxNode_wxWindow* self = unwrap<wxNode_wxWindow>(args.This());

  
  /*
   * id: _43185
   */
  if(args.Length() == 0) {
    

    self->GetClassInfo();

    return v8::Undefined();
  }
  

  std::ostringstream errStr;
  errStr << "Could not find matching method for arguments (method name: GetClassInfo).\n";                           \
  errStr << "  arg count: " << args.Length() << "\n";
  for(int i = 0; i < args.Length(); i++) {
    v8::String::AsciiValue argStr(args[i]);
    errStr << "  arg[" << i << "]: " << *argStr << "\n";
  }
  return v8::ThrowException(v8::Exception::TypeError(v8::String::New(errStr.str().c_str())));
}

