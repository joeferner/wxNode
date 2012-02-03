
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
  
  

  return v8::ThrowException(v8::String::New("Could not find matching constructor for arguments (class name: wxWindow)."));
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

    // TODO: handle return type
    return v8::Undefined();
  }
  
  /*
   * id: _42830
   */
  if(args.Length() == 0) {
    

    self->Close();

    // TODO: handle return type
    return v8::Undefined();
  }
  

  return v8::ThrowException(v8::String::New("Could not find matching method for arguments (method name: Close)."));
}

/*static*/ v8::Handle<v8::Value> wxNode_wxWindow::_Destroy(const v8::Arguments& args) {
  v8::HandleScope scope;
  wxNode_wxWindow* self = unwrap<wxNode_wxWindow>(args.This());

  
  /*
   * id: _42831
   */
  if(args.Length() == 0) {
    

    self->Destroy();

    // TODO: handle return type
    return v8::Undefined();
  }
  

  return v8::ThrowException(v8::String::New("Could not find matching method for arguments (method name: Destroy)."));
}

/*static*/ v8::Handle<v8::Value> wxNode_wxWindow::_DestroyChildren(const v8::Arguments& args) {
  v8::HandleScope scope;
  wxNode_wxWindow* self = unwrap<wxNode_wxWindow>(args.This());

  
  /*
   * id: _42832
   */
  if(args.Length() == 0) {
    

    self->DestroyChildren();

    // TODO: handle return type
    return v8::Undefined();
  }
  

  return v8::ThrowException(v8::String::New("Could not find matching method for arguments (method name: DestroyChildren)."));
}

/*static*/ v8::Handle<v8::Value> wxNode_wxWindow::_IsBeingDeleted(const v8::Arguments& args) {
  v8::HandleScope scope;
  wxNode_wxWindow* self = unwrap<wxNode_wxWindow>(args.This());

  
  /*
   * id: _42833
   */
  if(args.Length() == 0) {
    

    self->IsBeingDeleted();

    // TODO: handle return type
    return v8::Undefined();
  }
  

  return v8::ThrowException(v8::String::New("Could not find matching method for arguments (method name: IsBeingDeleted)."));
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

    // TODO: handle return type
    return v8::Undefined();
  }
  

  return v8::ThrowException(v8::String::New("Could not find matching method for arguments (method name: SetLabel)."));
}

/*static*/ v8::Handle<v8::Value> wxNode_wxWindow::_GetLabel(const v8::Arguments& args) {
  v8::HandleScope scope;
  wxNode_wxWindow* self = unwrap<wxNode_wxWindow>(args.This());

  
  /*
   * id: _42835
   */
  if(args.Length() == 0) {
    

    self->GetLabel();

    // TODO: handle return type
    return v8::Undefined();
  }
  

  return v8::ThrowException(v8::String::New("Could not find matching method for arguments (method name: GetLabel)."));
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

    // TODO: handle return type
    return v8::Undefined();
  }
  

  return v8::ThrowException(v8::String::New("Could not find matching method for arguments (method name: SetName)."));
}

/*static*/ v8::Handle<v8::Value> wxNode_wxWindow::_GetName(const v8::Arguments& args) {
  v8::HandleScope scope;
  wxNode_wxWindow* self = unwrap<wxNode_wxWindow>(args.This());

  
  /*
   * id: _42837
   */
  if(args.Length() == 0) {
    

    self->GetName();

    // TODO: handle return type
    return v8::Undefined();
  }
  

  return v8::ThrowException(v8::String::New("Could not find matching method for arguments (method name: GetName)."));
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

    // TODO: handle return type
    return v8::Undefined();
  }
  

  return v8::ThrowException(v8::String::New("Could not find matching method for arguments (method name: SetWindowVariant)."));
}

/*static*/ v8::Handle<v8::Value> wxNode_wxWindow::_GetWindowVariant(const v8::Arguments& args) {
  v8::HandleScope scope;
  wxNode_wxWindow* self = unwrap<wxNode_wxWindow>(args.This());

  
  /*
   * id: _42839
   */
  if(args.Length() == 0) {
    

    self->GetWindowVariant();

    // TODO: handle return type
    return v8::Undefined();
  }
  

  return v8::ThrowException(v8::String::New("Could not find matching method for arguments (method name: GetWindowVariant)."));
}

/*static*/ v8::Handle<v8::Value> wxNode_wxWindow::_GetLayoutDirection(const v8::Arguments& args) {
  v8::HandleScope scope;
  wxNode_wxWindow* self = unwrap<wxNode_wxWindow>(args.This());

  
  /*
   * id: _42840
   */
  if(args.Length() == 0) {
    

    self->GetLayoutDirection();

    // TODO: handle return type
    return v8::Undefined();
  }
  

  return v8::ThrowException(v8::String::New("Could not find matching method for arguments (method name: GetLayoutDirection)."));
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

    // TODO: handle return type
    return v8::Undefined();
  }
  

  return v8::ThrowException(v8::String::New("Could not find matching method for arguments (method name: SetLayoutDirection)."));
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

    // TODO: handle return type
    return v8::Undefined();
  }
  

  return v8::ThrowException(v8::String::New("Could not find matching method for arguments (method name: AdjustForLayoutDirection)."));
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

    // TODO: handle return type
    return v8::Undefined();
  }
  

  return v8::ThrowException(v8::String::New("Could not find matching method for arguments (method name: SetId)."));
}

/*static*/ v8::Handle<v8::Value> wxNode_wxWindow::_GetId(const v8::Arguments& args) {
  v8::HandleScope scope;
  wxNode_wxWindow* self = unwrap<wxNode_wxWindow>(args.This());

  
  /*
   * id: _42844
   */
  if(args.Length() == 0) {
    

    self->GetId();

    // TODO: handle return type
    return v8::Undefined();
  }
  

  return v8::ThrowException(v8::String::New("Could not find matching method for arguments (method name: GetId)."));
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

    // TODO: handle return type
    return v8::Undefined();
  }
  
  /*
   * id: _42845
   */
  if(args.Length() == 0) {
    

    self->NewControlId();

    // TODO: handle return type
    return v8::Undefined();
  }
  

  return v8::ThrowException(v8::String::New("Could not find matching method for arguments (method name: NewControlId)."));
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

    // TODO: handle return type
    return v8::Undefined();
  }
  
  /*
   * id: _42846
   */
  if(args.Length() == 1 && args[0]->IsNumber()) {
    int id = (int)args[0]->ToInt32()->Value(); /* type: _8633  */
    

    self->UnreserveControlId(id);

    // TODO: handle return type
    return v8::Undefined();
  }
  

  return v8::ThrowException(v8::String::New("Could not find matching method for arguments (method name: UnreserveControlId)."));
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

    // TODO: handle return type
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

    // TODO: handle return type
    return v8::Undefined();
  }
  
  /*
   * id: _42848
   */
  if(args.Length() == 2 && args[0]->IsNumber() && args[1]->IsNumber()) {
    int width = (int)args[0]->ToInt32()->Value(); /* type: _162  */
    int height = (int)args[1]->ToInt32()->Value(); /* type: _162  */
    

    self->SetSize(width, height);

    // TODO: handle return type
    return v8::Undefined();
  }
  
  /*
   * id: _42849
   */
  if(args.Length() == 1 && (args[0]->IsNull() || args[0]->IsObject())) {
    wxNode_wxSize* size = args[0]->IsNull() ? NULL : wxNodeObject::unwrap<wxNode_wxSize>(args[0]->ToObject()); /* type: _20522  */
    

    self->SetSize(*size);

    // TODO: handle return type
    return v8::Undefined();
  }
  
  /*
   * id: _42850
   */
  if(args.Length() == 2 && (args[0]->IsNull() || args[0]->IsObject()) && args[1]->IsNumber()) {
    wxNode_wxRect* rect = args[0]->IsNull() ? NULL : wxNodeObject::unwrap<wxNode_wxRect>(args[0]->ToObject()); /* type: _24778  */
    int sizeFlags = (int)args[1]->ToInt32()->Value(); /* type: _162  */
    

    self->SetSize(*rect, sizeFlags);

    // TODO: handle return type
    return v8::Undefined();
  }
  
  /*
   * id: _42850
   */
  if(args.Length() == 1 && (args[0]->IsNull() || args[0]->IsObject())) {
    wxNode_wxRect* rect = args[0]->IsNull() ? NULL : wxNodeObject::unwrap<wxNode_wxRect>(args[0]->ToObject()); /* type: _24778  */
    

    self->SetSize(*rect);

    // TODO: handle return type
    return v8::Undefined();
  }
  

  return v8::ThrowException(v8::String::New("Could not find matching method for arguments (method name: SetSize)."));
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

    // TODO: handle return type
    return v8::Undefined();
  }
  
  /*
   * id: _42851
   */
  if(args.Length() == 2 && args[0]->IsNumber() && args[1]->IsNumber()) {
    int x = (int)args[0]->ToInt32()->Value(); /* type: _162  */
    int y = (int)args[1]->ToInt32()->Value(); /* type: _162  */
    

    self->Move(x, y);

    // TODO: handle return type
    return v8::Undefined();
  }
  
  /*
   * id: _42852
   */
  if(args.Length() == 2 && (args[0]->IsNull() || args[0]->IsObject()) && args[1]->IsNumber()) {
    wxNode_wxPoint* pt = args[0]->IsNull() ? NULL : wxNodeObject::unwrap<wxNode_wxPoint>(args[0]->ToObject()); /* type: _20412  */
    int flags = (int)args[1]->ToInt32()->Value(); /* type: _162  */
    

    self->Move(*pt, flags);

    // TODO: handle return type
    return v8::Undefined();
  }
  
  /*
   * id: _42852
   */
  if(args.Length() == 1 && (args[0]->IsNull() || args[0]->IsObject())) {
    wxNode_wxPoint* pt = args[0]->IsNull() ? NULL : wxNodeObject::unwrap<wxNode_wxPoint>(args[0]->ToObject()); /* type: _20412  */
    

    self->Move(*pt);

    // TODO: handle return type
    return v8::Undefined();
  }
  

  return v8::ThrowException(v8::String::New("Could not find matching method for arguments (method name: Move)."));
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

    // TODO: handle return type
    return v8::Undefined();
  }
  

  return v8::ThrowException(v8::String::New("Could not find matching method for arguments (method name: SetPosition)."));
}

/*static*/ v8::Handle<v8::Value> wxNode_wxWindow::_Raise(const v8::Arguments& args) {
  v8::HandleScope scope;
  wxNode_wxWindow* self = unwrap<wxNode_wxWindow>(args.This());

  
  /*
   * id: _42854
   */
  if(args.Length() == 0) {
    

    self->Raise();

    // TODO: handle return type
    return v8::Undefined();
  }
  

  return v8::ThrowException(v8::String::New("Could not find matching method for arguments (method name: Raise)."));
}

/*static*/ v8::Handle<v8::Value> wxNode_wxWindow::_Lower(const v8::Arguments& args) {
  v8::HandleScope scope;
  wxNode_wxWindow* self = unwrap<wxNode_wxWindow>(args.This());

  
  /*
   * id: _42855
   */
  if(args.Length() == 0) {
    

    self->Lower();

    // TODO: handle return type
    return v8::Undefined();
  }
  

  return v8::ThrowException(v8::String::New("Could not find matching method for arguments (method name: Lower)."));
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

    // TODO: handle return type
    return v8::Undefined();
  }
  
  /*
   * id: _42857
   */
  if(args.Length() == 1 && (args[0]->IsNull() || args[0]->IsObject())) {
    wxNode_wxSize* size = args[0]->IsNull() ? NULL : wxNodeObject::unwrap<wxNode_wxSize>(args[0]->ToObject()); /* type: _20522  */
    

    self->SetClientSize(*size);

    // TODO: handle return type
    return v8::Undefined();
  }
  
  /*
   * id: _42858
   */
  if(args.Length() == 1 && (args[0]->IsNull() || args[0]->IsObject())) {
    wxNode_wxRect* rect = args[0]->IsNull() ? NULL : wxNodeObject::unwrap<wxNode_wxRect>(args[0]->ToObject()); /* type: _24778  */
    

    self->SetClientSize(*rect);

    // TODO: handle return type
    return v8::Undefined();
  }
  

  return v8::ThrowException(v8::String::New("Could not find matching method for arguments (method name: SetClientSize)."));
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

    // TODO: handle return type
    return v8::Undefined();
  }
  
  /*
   * id: _42860
   */
  if(args.Length() == 0) {
    

    self->GetPosition();

    // TODO: handle return type
    return v8::Undefined();
  }
  

  return v8::ThrowException(v8::String::New("Could not find matching method for arguments (method name: GetPosition)."));
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

    // TODO: handle return type
    return v8::Undefined();
  }
  
  /*
   * id: _42862
   */
  if(args.Length() == 0) {
    

    self->GetScreenPosition();

    // TODO: handle return type
    return v8::Undefined();
  }
  

  return v8::ThrowException(v8::String::New("Could not find matching method for arguments (method name: GetScreenPosition)."));
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

    // TODO: handle return type
    return v8::Undefined();
  }
  
  /*
   * id: _42864
   */
  if(args.Length() == 0) {
    

    self->GetSize();

    // TODO: handle return type
    return v8::Undefined();
  }
  

  return v8::ThrowException(v8::String::New("Could not find matching method for arguments (method name: GetSize)."));
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

    // TODO: handle return type
    return v8::Undefined();
  }
  
  /*
   * id: _42866
   */
  if(args.Length() == 0) {
    

    self->GetClientSize();

    // TODO: handle return type
    return v8::Undefined();
  }
  

  return v8::ThrowException(v8::String::New("Could not find matching method for arguments (method name: GetClientSize)."));
}

/*static*/ v8::Handle<v8::Value> wxNode_wxWindow::_GetRect(const v8::Arguments& args) {
  v8::HandleScope scope;
  wxNode_wxWindow* self = unwrap<wxNode_wxWindow>(args.This());

  
  /*
   * id: _42867
   */
  if(args.Length() == 0) {
    

    self->GetRect();

    // TODO: handle return type
    return v8::Undefined();
  }
  

  return v8::ThrowException(v8::String::New("Could not find matching method for arguments (method name: GetRect)."));
}

/*static*/ v8::Handle<v8::Value> wxNode_wxWindow::_GetScreenRect(const v8::Arguments& args) {
  v8::HandleScope scope;
  wxNode_wxWindow* self = unwrap<wxNode_wxWindow>(args.This());

  
  /*
   * id: _42868
   */
  if(args.Length() == 0) {
    

    self->GetScreenRect();

    // TODO: handle return type
    return v8::Undefined();
  }
  

  return v8::ThrowException(v8::String::New("Could not find matching method for arguments (method name: GetScreenRect)."));
}

/*static*/ v8::Handle<v8::Value> wxNode_wxWindow::_GetClientAreaOrigin(const v8::Arguments& args) {
  v8::HandleScope scope;
  wxNode_wxWindow* self = unwrap<wxNode_wxWindow>(args.This());

  
  /*
   * id: _42869
   */
  if(args.Length() == 0) {
    

    self->GetClientAreaOrigin();

    // TODO: handle return type
    return v8::Undefined();
  }
  

  return v8::ThrowException(v8::String::New("Could not find matching method for arguments (method name: GetClientAreaOrigin)."));
}

/*static*/ v8::Handle<v8::Value> wxNode_wxWindow::_GetClientRect(const v8::Arguments& args) {
  v8::HandleScope scope;
  wxNode_wxWindow* self = unwrap<wxNode_wxWindow>(args.This());

  
  /*
   * id: _42870
   */
  if(args.Length() == 0) {
    

    self->GetClientRect();

    // TODO: handle return type
    return v8::Undefined();
  }
  

  return v8::ThrowException(v8::String::New("Could not find matching method for arguments (method name: GetClientRect)."));
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

    // TODO: handle return type
    return v8::Undefined();
  }
  

  return v8::ThrowException(v8::String::New("Could not find matching method for arguments (method name: ClientToWindowSize)."));
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

    // TODO: handle return type
    return v8::Undefined();
  }
  

  return v8::ThrowException(v8::String::New("Could not find matching method for arguments (method name: WindowToClientSize)."));
}

/*static*/ v8::Handle<v8::Value> wxNode_wxWindow::_GetBestSize(const v8::Arguments& args) {
  v8::HandleScope scope;
  wxNode_wxWindow* self = unwrap<wxNode_wxWindow>(args.This());

  
  /*
   * id: _42873
   */
  if(args.Length() == 0) {
    

    self->GetBestSize();

    // TODO: handle return type
    return v8::Undefined();
  }
  
  /*
   * id: _42874
   */
  if(args.Length() == 2 && false && false) {
    int w; /* type: _16500 * */
    int h; /* type: _16500 * */
    

    self->GetBestSize(&w, &h);

    // TODO: handle return type
    return v8::Undefined();
  }
  

  return v8::ThrowException(v8::String::New("Could not find matching method for arguments (method name: GetBestSize)."));
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

    // TODO: handle return type
    return v8::Undefined();
  }
  

  return v8::ThrowException(v8::String::New("Could not find matching method for arguments (method name: SetScrollHelper)."));
}

/*static*/ v8::Handle<v8::Value> wxNode_wxWindow::_GetScrollHelper(const v8::Arguments& args) {
  v8::HandleScope scope;
  wxNode_wxWindow* self = unwrap<wxNode_wxWindow>(args.This());

  
  /*
   * id: _42876
   */
  if(args.Length() == 0) {
    

    self->GetScrollHelper();

    // TODO: handle return type
    return v8::Undefined();
  }
  

  return v8::ThrowException(v8::String::New("Could not find matching method for arguments (method name: GetScrollHelper)."));
}

/*static*/ v8::Handle<v8::Value> wxNode_wxWindow::_InvalidateBestSize(const v8::Arguments& args) {
  v8::HandleScope scope;
  wxNode_wxWindow* self = unwrap<wxNode_wxWindow>(args.This());

  
  /*
   * id: _42877
   */
  if(args.Length() == 0) {
    

    self->InvalidateBestSize();

    // TODO: handle return type
    return v8::Undefined();
  }
  

  return v8::ThrowException(v8::String::New("Could not find matching method for arguments (method name: InvalidateBestSize)."));
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

    // TODO: handle return type
    return v8::Undefined();
  }
  

  return v8::ThrowException(v8::String::New("Could not find matching method for arguments (method name: CacheBestSize)."));
}

/*static*/ v8::Handle<v8::Value> wxNode_wxWindow::_GetEffectiveMinSize(const v8::Arguments& args) {
  v8::HandleScope scope;
  wxNode_wxWindow* self = unwrap<wxNode_wxWindow>(args.This());

  
  /*
   * id: _42879
   */
  if(args.Length() == 0) {
    

    self->GetEffectiveMinSize();

    // TODO: handle return type
    return v8::Undefined();
  }
  

  return v8::ThrowException(v8::String::New("Could not find matching method for arguments (method name: GetEffectiveMinSize)."));
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

    // TODO: handle return type
    return v8::Undefined();
  }
  
  /*
   * id: _42882
   */
  if(args.Length() == 0) {
    

    self->SetInitialSize();

    // TODO: handle return type
    return v8::Undefined();
  }
  

  return v8::ThrowException(v8::String::New("Could not find matching method for arguments (method name: SetInitialSize)."));
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

    // TODO: handle return type
    return v8::Undefined();
  }
  
  /*
   * id: _42884
   */
  if(args.Length() == 0) {
    

    self->Centre();

    // TODO: handle return type
    return v8::Undefined();
  }
  

  return v8::ThrowException(v8::String::New("Could not find matching method for arguments (method name: Centre)."));
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

    // TODO: handle return type
    return v8::Undefined();
  }
  
  /*
   * id: _42885
   */
  if(args.Length() == 0) {
    

    self->Center();

    // TODO: handle return type
    return v8::Undefined();
  }
  

  return v8::ThrowException(v8::String::New("Could not find matching method for arguments (method name: Center)."));
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

    // TODO: handle return type
    return v8::Undefined();
  }
  
  /*
   * id: _42886
   */
  if(args.Length() == 0) {
    

    self->CentreOnParent();

    // TODO: handle return type
    return v8::Undefined();
  }
  

  return v8::ThrowException(v8::String::New("Could not find matching method for arguments (method name: CentreOnParent)."));
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

    // TODO: handle return type
    return v8::Undefined();
  }
  
  /*
   * id: _42887
   */
  if(args.Length() == 0) {
    

    self->CenterOnParent();

    // TODO: handle return type
    return v8::Undefined();
  }
  

  return v8::ThrowException(v8::String::New("Could not find matching method for arguments (method name: CenterOnParent)."));
}

/*static*/ v8::Handle<v8::Value> wxNode_wxWindow::_Fit(const v8::Arguments& args) {
  v8::HandleScope scope;
  wxNode_wxWindow* self = unwrap<wxNode_wxWindow>(args.This());

  
  /*
   * id: _42888
   */
  if(args.Length() == 0) {
    

    self->Fit();

    // TODO: handle return type
    return v8::Undefined();
  }
  

  return v8::ThrowException(v8::String::New("Could not find matching method for arguments (method name: Fit)."));
}

/*static*/ v8::Handle<v8::Value> wxNode_wxWindow::_FitInside(const v8::Arguments& args) {
  v8::HandleScope scope;
  wxNode_wxWindow* self = unwrap<wxNode_wxWindow>(args.This());

  
  /*
   * id: _42889
   */
  if(args.Length() == 0) {
    

    self->FitInside();

    // TODO: handle return type
    return v8::Undefined();
  }
  

  return v8::ThrowException(v8::String::New("Could not find matching method for arguments (method name: FitInside)."));
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

    // TODO: handle return type
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

    // TODO: handle return type
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

    // TODO: handle return type
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

    // TODO: handle return type
    return v8::Undefined();
  }
  
  /*
   * id: _42890
   */
  if(args.Length() == 2 && args[0]->IsNumber() && args[1]->IsNumber()) {
    int minW = (int)args[0]->ToInt32()->Value(); /* type: _162  */
    int minH = (int)args[1]->ToInt32()->Value(); /* type: _162  */
    

    self->SetSizeHints(minW, minH);

    // TODO: handle return type
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

    // TODO: handle return type
    return v8::Undefined();
  }
  
  /*
   * id: _42891
   */
  if(args.Length() == 2 && (args[0]->IsNull() || args[0]->IsObject()) && (args[1]->IsNull() || args[1]->IsObject())) {
    wxNode_wxSize* minSize = args[0]->IsNull() ? NULL : wxNodeObject::unwrap<wxNode_wxSize>(args[0]->ToObject()); /* type: _20522  */
    wxNode_wxSize* maxSize = args[1]->IsNull() ? NULL : wxNodeObject::unwrap<wxNode_wxSize>(args[1]->ToObject()); /* type: _20522  */
    

    self->SetSizeHints(*minSize, *maxSize);

    // TODO: handle return type
    return v8::Undefined();
  }
  
  /*
   * id: _42891
   */
  if(args.Length() == 1 && (args[0]->IsNull() || args[0]->IsObject())) {
    wxNode_wxSize* minSize = args[0]->IsNull() ? NULL : wxNodeObject::unwrap<wxNode_wxSize>(args[0]->ToObject()); /* type: _20522  */
    

    self->SetSizeHints(*minSize);

    // TODO: handle return type
    return v8::Undefined();
  }
  

  return v8::ThrowException(v8::String::New("Could not find matching method for arguments (method name: SetSizeHints)."));
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

    // TODO: handle return type
    return v8::Undefined();
  }
  

  return v8::ThrowException(v8::String::New("Could not find matching method for arguments (method name: SetMinSize)."));
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

    // TODO: handle return type
    return v8::Undefined();
  }
  

  return v8::ThrowException(v8::String::New("Could not find matching method for arguments (method name: SetMaxSize)."));
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

    // TODO: handle return type
    return v8::Undefined();
  }
  

  return v8::ThrowException(v8::String::New("Could not find matching method for arguments (method name: SetMinClientSize)."));
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

    // TODO: handle return type
    return v8::Undefined();
  }
  

  return v8::ThrowException(v8::String::New("Could not find matching method for arguments (method name: SetMaxClientSize)."));
}

/*static*/ v8::Handle<v8::Value> wxNode_wxWindow::_GetMinSize(const v8::Arguments& args) {
  v8::HandleScope scope;
  wxNode_wxWindow* self = unwrap<wxNode_wxWindow>(args.This());

  
  /*
   * id: _42898
   */
  if(args.Length() == 0) {
    

    self->GetMinSize();

    // TODO: handle return type
    return v8::Undefined();
  }
  

  return v8::ThrowException(v8::String::New("Could not find matching method for arguments (method name: GetMinSize)."));
}

/*static*/ v8::Handle<v8::Value> wxNode_wxWindow::_GetMaxSize(const v8::Arguments& args) {
  v8::HandleScope scope;
  wxNode_wxWindow* self = unwrap<wxNode_wxWindow>(args.This());

  
  /*
   * id: _42899
   */
  if(args.Length() == 0) {
    

    self->GetMaxSize();

    // TODO: handle return type
    return v8::Undefined();
  }
  

  return v8::ThrowException(v8::String::New("Could not find matching method for arguments (method name: GetMaxSize)."));
}

/*static*/ v8::Handle<v8::Value> wxNode_wxWindow::_GetMinClientSize(const v8::Arguments& args) {
  v8::HandleScope scope;
  wxNode_wxWindow* self = unwrap<wxNode_wxWindow>(args.This());

  
  /*
   * id: _42900
   */
  if(args.Length() == 0) {
    

    self->GetMinClientSize();

    // TODO: handle return type
    return v8::Undefined();
  }
  

  return v8::ThrowException(v8::String::New("Could not find matching method for arguments (method name: GetMinClientSize)."));
}

/*static*/ v8::Handle<v8::Value> wxNode_wxWindow::_GetMaxClientSize(const v8::Arguments& args) {
  v8::HandleScope scope;
  wxNode_wxWindow* self = unwrap<wxNode_wxWindow>(args.This());

  
  /*
   * id: _42901
   */
  if(args.Length() == 0) {
    

    self->GetMaxClientSize();

    // TODO: handle return type
    return v8::Undefined();
  }
  

  return v8::ThrowException(v8::String::New("Could not find matching method for arguments (method name: GetMaxClientSize)."));
}

/*static*/ v8::Handle<v8::Value> wxNode_wxWindow::_GetMinWidth(const v8::Arguments& args) {
  v8::HandleScope scope;
  wxNode_wxWindow* self = unwrap<wxNode_wxWindow>(args.This());

  
  /*
   * id: _42902
   */
  if(args.Length() == 0) {
    

    self->GetMinWidth();

    // TODO: handle return type
    return v8::Undefined();
  }
  

  return v8::ThrowException(v8::String::New("Could not find matching method for arguments (method name: GetMinWidth)."));
}

/*static*/ v8::Handle<v8::Value> wxNode_wxWindow::_GetMinHeight(const v8::Arguments& args) {
  v8::HandleScope scope;
  wxNode_wxWindow* self = unwrap<wxNode_wxWindow>(args.This());

  
  /*
   * id: _42903
   */
  if(args.Length() == 0) {
    

    self->GetMinHeight();

    // TODO: handle return type
    return v8::Undefined();
  }
  

  return v8::ThrowException(v8::String::New("Could not find matching method for arguments (method name: GetMinHeight)."));
}

/*static*/ v8::Handle<v8::Value> wxNode_wxWindow::_GetMaxWidth(const v8::Arguments& args) {
  v8::HandleScope scope;
  wxNode_wxWindow* self = unwrap<wxNode_wxWindow>(args.This());

  
  /*
   * id: _42904
   */
  if(args.Length() == 0) {
    

    self->GetMaxWidth();

    // TODO: handle return type
    return v8::Undefined();
  }
  

  return v8::ThrowException(v8::String::New("Could not find matching method for arguments (method name: GetMaxWidth)."));
}

/*static*/ v8::Handle<v8::Value> wxNode_wxWindow::_GetMaxHeight(const v8::Arguments& args) {
  v8::HandleScope scope;
  wxNode_wxWindow* self = unwrap<wxNode_wxWindow>(args.This());

  
  /*
   * id: _42905
   */
  if(args.Length() == 0) {
    

    self->GetMaxHeight();

    // TODO: handle return type
    return v8::Undefined();
  }
  

  return v8::ThrowException(v8::String::New("Could not find matching method for arguments (method name: GetMaxHeight)."));
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

    // TODO: handle return type
    return v8::Undefined();
  }
  
  /*
   * id: _42907
   */
  if(args.Length() == 2 && args[0]->IsNumber() && args[1]->IsNumber()) {
    int x = (int)args[0]->ToInt32()->Value(); /* type: _162  */
    int y = (int)args[1]->ToInt32()->Value(); /* type: _162  */
    

    self->SetVirtualSize(x, y);

    // TODO: handle return type
    return v8::Undefined();
  }
  

  return v8::ThrowException(v8::String::New("Could not find matching method for arguments (method name: SetVirtualSize)."));
}

/*static*/ v8::Handle<v8::Value> wxNode_wxWindow::_GetVirtualSize(const v8::Arguments& args) {
  v8::HandleScope scope;
  wxNode_wxWindow* self = unwrap<wxNode_wxWindow>(args.This());

  
  /*
   * id: _42908
   */
  if(args.Length() == 0) {
    

    self->GetVirtualSize();

    // TODO: handle return type
    return v8::Undefined();
  }
  
  /*
   * id: _42909
   */
  if(args.Length() == 2 && false && false) {
    int x; /* type: _16500 * */
    int y; /* type: _16500 * */
    

    self->GetVirtualSize(&x, &y);

    // TODO: handle return type
    return v8::Undefined();
  }
  

  return v8::ThrowException(v8::String::New("Could not find matching method for arguments (method name: GetVirtualSize)."));
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

    // TODO: handle return type
    return v8::Undefined();
  }
  

  return v8::ThrowException(v8::String::New("Could not find matching method for arguments (method name: DoSetVirtualSize)."));
}

/*static*/ v8::Handle<v8::Value> wxNode_wxWindow::_DoGetVirtualSize(const v8::Arguments& args) {
  v8::HandleScope scope;
  wxNode_wxWindow* self = unwrap<wxNode_wxWindow>(args.This());

  
  /*
   * id: _42911
   */
  if(args.Length() == 0) {
    

    self->DoGetVirtualSize();

    // TODO: handle return type
    return v8::Undefined();
  }
  

  return v8::ThrowException(v8::String::New("Could not find matching method for arguments (method name: DoGetVirtualSize)."));
}

/*static*/ v8::Handle<v8::Value> wxNode_wxWindow::_GetBestVirtualSize(const v8::Arguments& args) {
  v8::HandleScope scope;
  wxNode_wxWindow* self = unwrap<wxNode_wxWindow>(args.This());

  
  /*
   * id: _42912
   */
  if(args.Length() == 0) {
    

    self->GetBestVirtualSize();

    // TODO: handle return type
    return v8::Undefined();
  }
  

  return v8::ThrowException(v8::String::New("Could not find matching method for arguments (method name: GetBestVirtualSize)."));
}

/*static*/ v8::Handle<v8::Value> wxNode_wxWindow::_GetWindowBorderSize(const v8::Arguments& args) {
  v8::HandleScope scope;
  wxNode_wxWindow* self = unwrap<wxNode_wxWindow>(args.This());

  
  /*
   * id: _42913
   */
  if(args.Length() == 0) {
    

    self->GetWindowBorderSize();

    // TODO: handle return type
    return v8::Undefined();
  }
  

  return v8::ThrowException(v8::String::New("Could not find matching method for arguments (method name: GetWindowBorderSize)."));
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

    // TODO: handle return type
    return v8::Undefined();
  }
  

  return v8::ThrowException(v8::String::New("Could not find matching method for arguments (method name: InformFirstDirection)."));
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

    // TODO: handle return type
    return v8::Undefined();
  }
  
  /*
   * id: _42915
   */
  if(args.Length() == 0) {
    

    self->SendSizeEvent();

    // TODO: handle return type
    return v8::Undefined();
  }
  

  return v8::ThrowException(v8::String::New("Could not find matching method for arguments (method name: SendSizeEvent)."));
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

    // TODO: handle return type
    return v8::Undefined();
  }
  
  /*
   * id: _42916
   */
  if(args.Length() == 0) {
    

    self->SendSizeEventToParent();

    // TODO: handle return type
    return v8::Undefined();
  }
  

  return v8::ThrowException(v8::String::New("Could not find matching method for arguments (method name: SendSizeEventToParent)."));
}

/*static*/ v8::Handle<v8::Value> wxNode_wxWindow::_PostSizeEvent(const v8::Arguments& args) {
  v8::HandleScope scope;
  wxNode_wxWindow* self = unwrap<wxNode_wxWindow>(args.This());

  
  /*
   * id: _42917
   */
  if(args.Length() == 0) {
    

    self->PostSizeEvent();

    // TODO: handle return type
    return v8::Undefined();
  }
  

  return v8::ThrowException(v8::String::New("Could not find matching method for arguments (method name: PostSizeEvent)."));
}

/*static*/ v8::Handle<v8::Value> wxNode_wxWindow::_PostSizeEventToParent(const v8::Arguments& args) {
  v8::HandleScope scope;
  wxNode_wxWindow* self = unwrap<wxNode_wxWindow>(args.This());

  
  /*
   * id: _42918
   */
  if(args.Length() == 0) {
    

    self->PostSizeEventToParent();

    // TODO: handle return type
    return v8::Undefined();
  }
  

  return v8::ThrowException(v8::String::New("Could not find matching method for arguments (method name: PostSizeEventToParent)."));
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

    // TODO: handle return type
    return v8::Undefined();
  }
  
  /*
   * id: _42919
   */
  if(args.Length() == 0) {
    

    self->Show();

    // TODO: handle return type
    return v8::Undefined();
  }
  

  return v8::ThrowException(v8::String::New("Could not find matching method for arguments (method name: Show)."));
}

/*static*/ v8::Handle<v8::Value> wxNode_wxWindow::_Hide(const v8::Arguments& args) {
  v8::HandleScope scope;
  wxNode_wxWindow* self = unwrap<wxNode_wxWindow>(args.This());

  
  /*
   * id: _42920
   */
  if(args.Length() == 0) {
    

    self->Hide();

    // TODO: handle return type
    return v8::Undefined();
  }
  

  return v8::ThrowException(v8::String::New("Could not find matching method for arguments (method name: Hide)."));
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

    // TODO: handle return type
    return v8::Undefined();
  }
  
  /*
   * id: _42921
   */
  if(args.Length() == 1 && args[0]->IsNumber()) {
    wxShowEffect arg0; /* type: _4482  */
    

    self->ShowWithEffect(arg0);

    // TODO: handle return type
    return v8::Undefined();
  }
  

  return v8::ThrowException(v8::String::New("Could not find matching method for arguments (method name: ShowWithEffect)."));
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

    // TODO: handle return type
    return v8::Undefined();
  }
  
  /*
   * id: _42922
   */
  if(args.Length() == 1 && args[0]->IsNumber()) {
    wxShowEffect arg0; /* type: _4482  */
    

    self->HideWithEffect(arg0);

    // TODO: handle return type
    return v8::Undefined();
  }
  

  return v8::ThrowException(v8::String::New("Could not find matching method for arguments (method name: HideWithEffect)."));
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

    // TODO: handle return type
    return v8::Undefined();
  }
  
  /*
   * id: _42923
   */
  if(args.Length() == 0) {
    

    self->Enable();

    // TODO: handle return type
    return v8::Undefined();
  }
  

  return v8::ThrowException(v8::String::New("Could not find matching method for arguments (method name: Enable)."));
}

/*static*/ v8::Handle<v8::Value> wxNode_wxWindow::_Disable(const v8::Arguments& args) {
  v8::HandleScope scope;
  wxNode_wxWindow* self = unwrap<wxNode_wxWindow>(args.This());

  
  /*
   * id: _42924
   */
  if(args.Length() == 0) {
    

    self->Disable();

    // TODO: handle return type
    return v8::Undefined();
  }
  

  return v8::ThrowException(v8::String::New("Could not find matching method for arguments (method name: Disable)."));
}

/*static*/ v8::Handle<v8::Value> wxNode_wxWindow::_IsShown(const v8::Arguments& args) {
  v8::HandleScope scope;
  wxNode_wxWindow* self = unwrap<wxNode_wxWindow>(args.This());

  
  /*
   * id: _42925
   */
  if(args.Length() == 0) {
    

    self->IsShown();

    // TODO: handle return type
    return v8::Undefined();
  }
  

  return v8::ThrowException(v8::String::New("Could not find matching method for arguments (method name: IsShown)."));
}

/*static*/ v8::Handle<v8::Value> wxNode_wxWindow::_IsEnabled(const v8::Arguments& args) {
  v8::HandleScope scope;
  wxNode_wxWindow* self = unwrap<wxNode_wxWindow>(args.This());

  
  /*
   * id: _42926
   */
  if(args.Length() == 0) {
    

    self->IsEnabled();

    // TODO: handle return type
    return v8::Undefined();
  }
  

  return v8::ThrowException(v8::String::New("Could not find matching method for arguments (method name: IsEnabled)."));
}

/*static*/ v8::Handle<v8::Value> wxNode_wxWindow::_IsThisEnabled(const v8::Arguments& args) {
  v8::HandleScope scope;
  wxNode_wxWindow* self = unwrap<wxNode_wxWindow>(args.This());

  
  /*
   * id: _42927
   */
  if(args.Length() == 0) {
    

    self->IsThisEnabled();

    // TODO: handle return type
    return v8::Undefined();
  }
  

  return v8::ThrowException(v8::String::New("Could not find matching method for arguments (method name: IsThisEnabled)."));
}

/*static*/ v8::Handle<v8::Value> wxNode_wxWindow::_IsShownOnScreen(const v8::Arguments& args) {
  v8::HandleScope scope;
  wxNode_wxWindow* self = unwrap<wxNode_wxWindow>(args.This());

  
  /*
   * id: _42928
   */
  if(args.Length() == 0) {
    

    self->IsShownOnScreen();

    // TODO: handle return type
    return v8::Undefined();
  }
  

  return v8::ThrowException(v8::String::New("Could not find matching method for arguments (method name: IsShownOnScreen)."));
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

    // TODO: handle return type
    return v8::Undefined();
  }
  

  return v8::ThrowException(v8::String::New("Could not find matching method for arguments (method name: SetWindowStyleFlag)."));
}

/*static*/ v8::Handle<v8::Value> wxNode_wxWindow::_GetWindowStyleFlag(const v8::Arguments& args) {
  v8::HandleScope scope;
  wxNode_wxWindow* self = unwrap<wxNode_wxWindow>(args.This());

  
  /*
   * id: _42930
   */
  if(args.Length() == 0) {
    

    self->GetWindowStyleFlag();

    // TODO: handle return type
    return v8::Undefined();
  }
  

  return v8::ThrowException(v8::String::New("Could not find matching method for arguments (method name: GetWindowStyleFlag)."));
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

    // TODO: handle return type
    return v8::Undefined();
  }
  

  return v8::ThrowException(v8::String::New("Could not find matching method for arguments (method name: SetWindowStyle)."));
}

/*static*/ v8::Handle<v8::Value> wxNode_wxWindow::_GetWindowStyle(const v8::Arguments& args) {
  v8::HandleScope scope;
  wxNode_wxWindow* self = unwrap<wxNode_wxWindow>(args.This());

  
  /*
   * id: _42932
   */
  if(args.Length() == 0) {
    

    self->GetWindowStyle();

    // TODO: handle return type
    return v8::Undefined();
  }
  

  return v8::ThrowException(v8::String::New("Could not find matching method for arguments (method name: GetWindowStyle)."));
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

    // TODO: handle return type
    return v8::Undefined();
  }
  

  return v8::ThrowException(v8::String::New("Could not find matching method for arguments (method name: HasFlag)."));
}

/*static*/ v8::Handle<v8::Value> wxNode_wxWindow::_IsRetained(const v8::Arguments& args) {
  v8::HandleScope scope;
  wxNode_wxWindow* self = unwrap<wxNode_wxWindow>(args.This());

  
  /*
   * id: _42934
   */
  if(args.Length() == 0) {
    

    self->IsRetained();

    // TODO: handle return type
    return v8::Undefined();
  }
  

  return v8::ThrowException(v8::String::New("Could not find matching method for arguments (method name: IsRetained)."));
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

    // TODO: handle return type
    return v8::Undefined();
  }
  

  return v8::ThrowException(v8::String::New("Could not find matching method for arguments (method name: ToggleWindowStyle)."));
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

    // TODO: handle return type
    return v8::Undefined();
  }
  

  return v8::ThrowException(v8::String::New("Could not find matching method for arguments (method name: SetExtraStyle)."));
}

/*static*/ v8::Handle<v8::Value> wxNode_wxWindow::_GetExtraStyle(const v8::Arguments& args) {
  v8::HandleScope scope;
  wxNode_wxWindow* self = unwrap<wxNode_wxWindow>(args.This());

  
  /*
   * id: _42937
   */
  if(args.Length() == 0) {
    

    self->GetExtraStyle();

    // TODO: handle return type
    return v8::Undefined();
  }
  

  return v8::ThrowException(v8::String::New("Could not find matching method for arguments (method name: GetExtraStyle)."));
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

    // TODO: handle return type
    return v8::Undefined();
  }
  

  return v8::ThrowException(v8::String::New("Could not find matching method for arguments (method name: HasExtraStyle)."));
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

    // TODO: handle return type
    return v8::Undefined();
  }
  
  /*
   * id: _42939
   */
  if(args.Length() == 0) {
    

    self->MakeModal();

    // TODO: handle return type
    return v8::Undefined();
  }
  

  return v8::ThrowException(v8::String::New("Could not find matching method for arguments (method name: MakeModal)."));
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

    // TODO: handle return type
    return v8::Undefined();
  }
  

  return v8::ThrowException(v8::String::New("Could not find matching method for arguments (method name: SetThemeEnabled)."));
}

/*static*/ v8::Handle<v8::Value> wxNode_wxWindow::_GetThemeEnabled(const v8::Arguments& args) {
  v8::HandleScope scope;
  wxNode_wxWindow* self = unwrap<wxNode_wxWindow>(args.This());

  
  /*
   * id: _42941
   */
  if(args.Length() == 0) {
    

    self->GetThemeEnabled();

    // TODO: handle return type
    return v8::Undefined();
  }
  

  return v8::ThrowException(v8::String::New("Could not find matching method for arguments (method name: GetThemeEnabled)."));
}

/*static*/ v8::Handle<v8::Value> wxNode_wxWindow::_SetFocus(const v8::Arguments& args) {
  v8::HandleScope scope;
  wxNode_wxWindow* self = unwrap<wxNode_wxWindow>(args.This());

  
  /*
   * id: _42942
   */
  if(args.Length() == 0) {
    

    self->SetFocus();

    // TODO: handle return type
    return v8::Undefined();
  }
  

  return v8::ThrowException(v8::String::New("Could not find matching method for arguments (method name: SetFocus)."));
}

/*static*/ v8::Handle<v8::Value> wxNode_wxWindow::_SetFocusFromKbd(const v8::Arguments& args) {
  v8::HandleScope scope;
  wxNode_wxWindow* self = unwrap<wxNode_wxWindow>(args.This());

  
  /*
   * id: _42943
   */
  if(args.Length() == 0) {
    

    self->SetFocusFromKbd();

    // TODO: handle return type
    return v8::Undefined();
  }
  

  return v8::ThrowException(v8::String::New("Could not find matching method for arguments (method name: SetFocusFromKbd)."));
}

/*static*/ v8::Handle<v8::Value> wxNode_wxWindow::_FindFocus(const v8::Arguments& args) {
  v8::HandleScope scope;
  wxNode_wxWindow* self = unwrap<wxNode_wxWindow>(args.This());

  
  /*
   * id: _42944
   */
  if(args.Length() == 0) {
    

    self->FindFocus();

    // TODO: handle return type
    return v8::Undefined();
  }
  

  return v8::ThrowException(v8::String::New("Could not find matching method for arguments (method name: FindFocus)."));
}

/*static*/ v8::Handle<v8::Value> wxNode_wxWindow::_DoFindFocus(const v8::Arguments& args) {
  v8::HandleScope scope;
  wxNode_wxWindow* self = unwrap<wxNode_wxWindow>(args.This());

  
  /*
   * id: _42945
   */
  if(args.Length() == 0) {
    

    self->DoFindFocus();

    // TODO: handle return type
    return v8::Undefined();
  }
  

  return v8::ThrowException(v8::String::New("Could not find matching method for arguments (method name: DoFindFocus)."));
}

/*static*/ v8::Handle<v8::Value> wxNode_wxWindow::_HasFocus(const v8::Arguments& args) {
  v8::HandleScope scope;
  wxNode_wxWindow* self = unwrap<wxNode_wxWindow>(args.This());

  
  /*
   * id: _42946
   */
  if(args.Length() == 0) {
    

    self->HasFocus();

    // TODO: handle return type
    return v8::Undefined();
  }
  

  return v8::ThrowException(v8::String::New("Could not find matching method for arguments (method name: HasFocus)."));
}

/*static*/ v8::Handle<v8::Value> wxNode_wxWindow::_AcceptsFocus(const v8::Arguments& args) {
  v8::HandleScope scope;
  wxNode_wxWindow* self = unwrap<wxNode_wxWindow>(args.This());

  
  /*
   * id: _42947
   */
  if(args.Length() == 0) {
    

    self->AcceptsFocus();

    // TODO: handle return type
    return v8::Undefined();
  }
  

  return v8::ThrowException(v8::String::New("Could not find matching method for arguments (method name: AcceptsFocus)."));
}

/*static*/ v8::Handle<v8::Value> wxNode_wxWindow::_AcceptsFocusRecursively(const v8::Arguments& args) {
  v8::HandleScope scope;
  wxNode_wxWindow* self = unwrap<wxNode_wxWindow>(args.This());

  
  /*
   * id: _42948
   */
  if(args.Length() == 0) {
    

    self->AcceptsFocusRecursively();

    // TODO: handle return type
    return v8::Undefined();
  }
  

  return v8::ThrowException(v8::String::New("Could not find matching method for arguments (method name: AcceptsFocusRecursively)."));
}

/*static*/ v8::Handle<v8::Value> wxNode_wxWindow::_AcceptsFocusFromKeyboard(const v8::Arguments& args) {
  v8::HandleScope scope;
  wxNode_wxWindow* self = unwrap<wxNode_wxWindow>(args.This());

  
  /*
   * id: _42949
   */
  if(args.Length() == 0) {
    

    self->AcceptsFocusFromKeyboard();

    // TODO: handle return type
    return v8::Undefined();
  }
  

  return v8::ThrowException(v8::String::New("Could not find matching method for arguments (method name: AcceptsFocusFromKeyboard)."));
}

/*static*/ v8::Handle<v8::Value> wxNode_wxWindow::_CanBeFocused(const v8::Arguments& args) {
  v8::HandleScope scope;
  wxNode_wxWindow* self = unwrap<wxNode_wxWindow>(args.This());

  
  /*
   * id: _42950
   */
  if(args.Length() == 0) {
    

    self->CanBeFocused();

    // TODO: handle return type
    return v8::Undefined();
  }
  

  return v8::ThrowException(v8::String::New("Could not find matching method for arguments (method name: CanBeFocused)."));
}

/*static*/ v8::Handle<v8::Value> wxNode_wxWindow::_IsFocusable(const v8::Arguments& args) {
  v8::HandleScope scope;
  wxNode_wxWindow* self = unwrap<wxNode_wxWindow>(args.This());

  
  /*
   * id: _42951
   */
  if(args.Length() == 0) {
    

    self->IsFocusable();

    // TODO: handle return type
    return v8::Undefined();
  }
  

  return v8::ThrowException(v8::String::New("Could not find matching method for arguments (method name: IsFocusable)."));
}

/*static*/ v8::Handle<v8::Value> wxNode_wxWindow::_CanAcceptFocus(const v8::Arguments& args) {
  v8::HandleScope scope;
  wxNode_wxWindow* self = unwrap<wxNode_wxWindow>(args.This());

  
  /*
   * id: _42952
   */
  if(args.Length() == 0) {
    

    self->CanAcceptFocus();

    // TODO: handle return type
    return v8::Undefined();
  }
  

  return v8::ThrowException(v8::String::New("Could not find matching method for arguments (method name: CanAcceptFocus)."));
}

/*static*/ v8::Handle<v8::Value> wxNode_wxWindow::_CanAcceptFocusFromKeyboard(const v8::Arguments& args) {
  v8::HandleScope scope;
  wxNode_wxWindow* self = unwrap<wxNode_wxWindow>(args.This());

  
  /*
   * id: _42953
   */
  if(args.Length() == 0) {
    

    self->CanAcceptFocusFromKeyboard();

    // TODO: handle return type
    return v8::Undefined();
  }
  

  return v8::ThrowException(v8::String::New("Could not find matching method for arguments (method name: CanAcceptFocusFromKeyboard)."));
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

    // TODO: handle return type
    return v8::Undefined();
  }
  

  return v8::ThrowException(v8::String::New("Could not find matching method for arguments (method name: SetCanFocus)."));
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

    // TODO: handle return type
    return v8::Undefined();
  }
  
  /*
   * id: _42955
   */
  if(args.Length() == 0) {
    

    self->NavigateIn();

    // TODO: handle return type
    return v8::Undefined();
  }
  

  return v8::ThrowException(v8::String::New("Could not find matching method for arguments (method name: NavigateIn)."));
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

    // TODO: handle return type
    return v8::Undefined();
  }
  
  /*
   * id: _42956
   */
  if(args.Length() == 0) {
    

    self->Navigate();

    // TODO: handle return type
    return v8::Undefined();
  }
  

  return v8::ThrowException(v8::String::New("Could not find matching method for arguments (method name: Navigate)."));
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

    // TODO: handle return type
    return v8::Undefined();
  }
  

  return v8::ThrowException(v8::String::New("Could not find matching method for arguments (method name: HandleAsNavigationKey)."));
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

    // TODO: handle return type
    return v8::Undefined();
  }
  

  return v8::ThrowException(v8::String::New("Could not find matching method for arguments (method name: MoveBeforeInTabOrder)."));
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

    // TODO: handle return type
    return v8::Undefined();
  }
  

  return v8::ThrowException(v8::String::New("Could not find matching method for arguments (method name: MoveAfterInTabOrder)."));
}

/*static*/ v8::Handle<v8::Value> wxNode_wxWindow::_GetChildren(const v8::Arguments& args) {
  v8::HandleScope scope;
  wxNode_wxWindow* self = unwrap<wxNode_wxWindow>(args.This());

  
  /*
   * id: _42960
   */
  if(args.Length() == 0) {
    

    self->GetChildren();

    // TODO: handle return type
    return v8::Undefined();
  }
  
  /*
   * id: _42961
   */
  if(args.Length() == 0) {
    

    self->GetChildren();

    // TODO: handle return type
    return v8::Undefined();
  }
  

  return v8::ThrowException(v8::String::New("Could not find matching method for arguments (method name: GetChildren)."));
}

/*static*/ v8::Handle<v8::Value> wxNode_wxWindow::_GetWindowChildren(const v8::Arguments& args) {
  v8::HandleScope scope;
  wxNode_wxWindow* self = unwrap<wxNode_wxWindow>(args.This());

  
  /*
   * id: _42962
   */
  if(args.Length() == 0) {
    

    self->GetWindowChildren();

    // TODO: handle return type
    return v8::Undefined();
  }
  

  return v8::ThrowException(v8::String::New("Could not find matching method for arguments (method name: GetWindowChildren)."));
}

/*static*/ v8::Handle<v8::Value> wxNode_wxWindow::_GetPrevSibling(const v8::Arguments& args) {
  v8::HandleScope scope;
  wxNode_wxWindow* self = unwrap<wxNode_wxWindow>(args.This());

  
  /*
   * id: _42963
   */
  if(args.Length() == 0) {
    

    self->GetPrevSibling();

    // TODO: handle return type
    return v8::Undefined();
  }
  

  return v8::ThrowException(v8::String::New("Could not find matching method for arguments (method name: GetPrevSibling)."));
}

/*static*/ v8::Handle<v8::Value> wxNode_wxWindow::_GetNextSibling(const v8::Arguments& args) {
  v8::HandleScope scope;
  wxNode_wxWindow* self = unwrap<wxNode_wxWindow>(args.This());

  
  /*
   * id: _42964
   */
  if(args.Length() == 0) {
    

    self->GetNextSibling();

    // TODO: handle return type
    return v8::Undefined();
  }
  

  return v8::ThrowException(v8::String::New("Could not find matching method for arguments (method name: GetNextSibling)."));
}

/*static*/ v8::Handle<v8::Value> wxNode_wxWindow::_GetParent(const v8::Arguments& args) {
  v8::HandleScope scope;
  wxNode_wxWindow* self = unwrap<wxNode_wxWindow>(args.This());

  
  /*
   * id: _42965
   */
  if(args.Length() == 0) {
    

    self->GetParent();

    // TODO: handle return type
    return v8::Undefined();
  }
  

  return v8::ThrowException(v8::String::New("Could not find matching method for arguments (method name: GetParent)."));
}

/*static*/ v8::Handle<v8::Value> wxNode_wxWindow::_GetGrandParent(const v8::Arguments& args) {
  v8::HandleScope scope;
  wxNode_wxWindow* self = unwrap<wxNode_wxWindow>(args.This());

  
  /*
   * id: _42966
   */
  if(args.Length() == 0) {
    

    self->GetGrandParent();

    // TODO: handle return type
    return v8::Undefined();
  }
  

  return v8::ThrowException(v8::String::New("Could not find matching method for arguments (method name: GetGrandParent)."));
}

/*static*/ v8::Handle<v8::Value> wxNode_wxWindow::_IsTopLevel(const v8::Arguments& args) {
  v8::HandleScope scope;
  wxNode_wxWindow* self = unwrap<wxNode_wxWindow>(args.This());

  
  /*
   * id: _42967
   */
  if(args.Length() == 0) {
    

    self->IsTopLevel();

    // TODO: handle return type
    return v8::Undefined();
  }
  

  return v8::ThrowException(v8::String::New("Could not find matching method for arguments (method name: IsTopLevel)."));
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

    // TODO: handle return type
    return v8::Undefined();
  }
  

  return v8::ThrowException(v8::String::New("Could not find matching method for arguments (method name: SetParent)."));
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

    // TODO: handle return type
    return v8::Undefined();
  }
  

  return v8::ThrowException(v8::String::New("Could not find matching method for arguments (method name: Reparent)."));
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

    // TODO: handle return type
    return v8::Undefined();
  }
  

  return v8::ThrowException(v8::String::New("Could not find matching method for arguments (method name: AddChild)."));
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

    // TODO: handle return type
    return v8::Undefined();
  }
  

  return v8::ThrowException(v8::String::New("Could not find matching method for arguments (method name: RemoveChild)."));
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

    // TODO: handle return type
    return v8::Undefined();
  }
  

  return v8::ThrowException(v8::String::New("Could not find matching method for arguments (method name: IsClientAreaChild)."));
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

    // TODO: handle return type
    return v8::Undefined();
  }
  
  /*
   * id: _42974
   */
  if(args.Length() == 1 && args[0]->IsString()) {
    v8::String::AsciiValue name(args[0]->ToString()); /* type: _14808  */
    

    self->FindWindow(*name);

    // TODO: handle return type
    return v8::Undefined();
  }
  

  return v8::ThrowException(v8::String::New("Could not find matching method for arguments (method name: FindWindow)."));
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

    // TODO: handle return type
    return v8::Undefined();
  }
  
  /*
   * id: _42975
   */
  if(args.Length() == 1 && args[0]->IsNumber()) {
    long int winid = (long int)args[0]->ToInt32()->Value(); /* type: _586  */
    

    self->FindWindowById(winid);

    // TODO: handle return type
    return v8::Undefined();
  }
  

  return v8::ThrowException(v8::String::New("Could not find matching method for arguments (method name: FindWindowById)."));
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

    // TODO: handle return type
    return v8::Undefined();
  }
  
  /*
   * id: _42976
   */
  if(args.Length() == 1 && args[0]->IsString()) {
    v8::String::AsciiValue name(args[0]->ToString()); /* type: _14808  */
    

    self->FindWindowByName(*name);

    // TODO: handle return type
    return v8::Undefined();
  }
  

  return v8::ThrowException(v8::String::New("Could not find matching method for arguments (method name: FindWindowByName)."));
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

    // TODO: handle return type
    return v8::Undefined();
  }
  
  /*
   * id: _42977
   */
  if(args.Length() == 1 && args[0]->IsString()) {
    v8::String::AsciiValue label(args[0]->ToString()); /* type: _14808  */
    

    self->FindWindowByLabel(*label);

    // TODO: handle return type
    return v8::Undefined();
  }
  

  return v8::ThrowException(v8::String::New("Could not find matching method for arguments (method name: FindWindowByLabel)."));
}

/*static*/ v8::Handle<v8::Value> wxNode_wxWindow::_GetEventHandler(const v8::Arguments& args) {
  v8::HandleScope scope;
  wxNode_wxWindow* self = unwrap<wxNode_wxWindow>(args.This());

  
  /*
   * id: _42978
   */
  if(args.Length() == 0) {
    

    self->GetEventHandler();

    // TODO: handle return type
    return v8::Undefined();
  }
  

  return v8::ThrowException(v8::String::New("Could not find matching method for arguments (method name: GetEventHandler)."));
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

    // TODO: handle return type
    return v8::Undefined();
  }
  

  return v8::ThrowException(v8::String::New("Could not find matching method for arguments (method name: SetEventHandler)."));
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

    // TODO: handle return type
    return v8::Undefined();
  }
  

  return v8::ThrowException(v8::String::New("Could not find matching method for arguments (method name: PushEventHandler)."));
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

    // TODO: handle return type
    return v8::Undefined();
  }
  
  /*
   * id: _42981
   */
  if(args.Length() == 0) {
    

    self->PopEventHandler();

    // TODO: handle return type
    return v8::Undefined();
  }
  

  return v8::ThrowException(v8::String::New("Could not find matching method for arguments (method name: PopEventHandler)."));
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

    // TODO: handle return type
    return v8::Undefined();
  }
  

  return v8::ThrowException(v8::String::New("Could not find matching method for arguments (method name: RemoveEventHandler)."));
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

    // TODO: handle return type
    return v8::Undefined();
  }
  

  return v8::ThrowException(v8::String::New("Could not find matching method for arguments (method name: ProcessWindowEvent)."));
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

    // TODO: handle return type
    return v8::Undefined();
  }
  

  return v8::ThrowException(v8::String::New("Could not find matching method for arguments (method name: ProcessWindowEventLocally)."));
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

    // TODO: handle return type
    return v8::Undefined();
  }
  

  return v8::ThrowException(v8::String::New("Could not find matching method for arguments (method name: HandleWindowEvent)."));
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

    // TODO: handle return type
    return v8::Undefined();
  }
  

  return v8::ThrowException(v8::String::New("Could not find matching method for arguments (method name: SetNextHandler)."));
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

    // TODO: handle return type
    return v8::Undefined();
  }
  

  return v8::ThrowException(v8::String::New("Could not find matching method for arguments (method name: SetPreviousHandler)."));
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

    // TODO: handle return type
    return v8::Undefined();
  }
  

  return v8::ThrowException(v8::String::New("Could not find matching method for arguments (method name: SetValidator)."));
}

/*static*/ v8::Handle<v8::Value> wxNode_wxWindow::_GetValidator(const v8::Arguments& args) {
  v8::HandleScope scope;
  wxNode_wxWindow* self = unwrap<wxNode_wxWindow>(args.This());

  
  /*
   * id: _42989
   */
  if(args.Length() == 0) {
    

    self->GetValidator();

    // TODO: handle return type
    return v8::Undefined();
  }
  

  return v8::ThrowException(v8::String::New("Could not find matching method for arguments (method name: GetValidator)."));
}

/*static*/ v8::Handle<v8::Value> wxNode_wxWindow::_Validate(const v8::Arguments& args) {
  v8::HandleScope scope;
  wxNode_wxWindow* self = unwrap<wxNode_wxWindow>(args.This());

  
  /*
   * id: _42990
   */
  if(args.Length() == 0) {
    

    self->Validate();

    // TODO: handle return type
    return v8::Undefined();
  }
  

  return v8::ThrowException(v8::String::New("Could not find matching method for arguments (method name: Validate)."));
}

/*static*/ v8::Handle<v8::Value> wxNode_wxWindow::_TransferDataToWindow(const v8::Arguments& args) {
  v8::HandleScope scope;
  wxNode_wxWindow* self = unwrap<wxNode_wxWindow>(args.This());

  
  /*
   * id: _42991
   */
  if(args.Length() == 0) {
    

    self->TransferDataToWindow();

    // TODO: handle return type
    return v8::Undefined();
  }
  

  return v8::ThrowException(v8::String::New("Could not find matching method for arguments (method name: TransferDataToWindow)."));
}

/*static*/ v8::Handle<v8::Value> wxNode_wxWindow::_TransferDataFromWindow(const v8::Arguments& args) {
  v8::HandleScope scope;
  wxNode_wxWindow* self = unwrap<wxNode_wxWindow>(args.This());

  
  /*
   * id: _42992
   */
  if(args.Length() == 0) {
    

    self->TransferDataFromWindow();

    // TODO: handle return type
    return v8::Undefined();
  }
  

  return v8::ThrowException(v8::String::New("Could not find matching method for arguments (method name: TransferDataFromWindow)."));
}

/*static*/ v8::Handle<v8::Value> wxNode_wxWindow::_InitDialog(const v8::Arguments& args) {
  v8::HandleScope scope;
  wxNode_wxWindow* self = unwrap<wxNode_wxWindow>(args.This());

  
  /*
   * id: _42993
   */
  if(args.Length() == 0) {
    

    self->InitDialog();

    // TODO: handle return type
    return v8::Undefined();
  }
  

  return v8::ThrowException(v8::String::New("Could not find matching method for arguments (method name: InitDialog)."));
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

    // TODO: handle return type
    return v8::Undefined();
  }
  

  return v8::ThrowException(v8::String::New("Could not find matching method for arguments (method name: SetAcceleratorTable)."));
}

/*static*/ v8::Handle<v8::Value> wxNode_wxWindow::_GetAcceleratorTable(const v8::Arguments& args) {
  v8::HandleScope scope;
  wxNode_wxWindow* self = unwrap<wxNode_wxWindow>(args.This());

  
  /*
   * id: _42995
   */
  if(args.Length() == 0) {
    

    self->GetAcceleratorTable();

    // TODO: handle return type
    return v8::Undefined();
  }
  

  return v8::ThrowException(v8::String::New("Could not find matching method for arguments (method name: GetAcceleratorTable)."));
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

    // TODO: handle return type
    return v8::Undefined();
  }
  
  /*
   * id: _42998
   */
  if(args.Length() == 1 && (args[0]->IsNull() || args[0]->IsObject())) {
    wxNode_wxSize* sz = args[0]->IsNull() ? NULL : wxNodeObject::unwrap<wxNode_wxSize>(args[0]->ToObject()); /* type: _20522  */
    

    self->ConvertPixelsToDialog(*sz);

    // TODO: handle return type
    return v8::Undefined();
  }
  

  return v8::ThrowException(v8::String::New("Could not find matching method for arguments (method name: ConvertPixelsToDialog)."));
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

    // TODO: handle return type
    return v8::Undefined();
  }
  
  /*
   * id: _42999
   */
  if(args.Length() == 1 && (args[0]->IsNull() || args[0]->IsObject())) {
    wxNode_wxSize* sz = args[0]->IsNull() ? NULL : wxNodeObject::unwrap<wxNode_wxSize>(args[0]->ToObject()); /* type: _20522  */
    

    self->ConvertDialogToPixels(*sz);

    // TODO: handle return type
    return v8::Undefined();
  }
  

  return v8::ThrowException(v8::String::New("Could not find matching method for arguments (method name: ConvertDialogToPixels)."));
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

    // TODO: handle return type
    return v8::Undefined();
  }
  

  return v8::ThrowException(v8::String::New("Could not find matching method for arguments (method name: WarpPointer)."));
}

/*static*/ v8::Handle<v8::Value> wxNode_wxWindow::_CaptureMouse(const v8::Arguments& args) {
  v8::HandleScope scope;
  wxNode_wxWindow* self = unwrap<wxNode_wxWindow>(args.This());

  
  /*
   * id: _43001
   */
  if(args.Length() == 0) {
    

    self->CaptureMouse();

    // TODO: handle return type
    return v8::Undefined();
  }
  

  return v8::ThrowException(v8::String::New("Could not find matching method for arguments (method name: CaptureMouse)."));
}

/*static*/ v8::Handle<v8::Value> wxNode_wxWindow::_ReleaseMouse(const v8::Arguments& args) {
  v8::HandleScope scope;
  wxNode_wxWindow* self = unwrap<wxNode_wxWindow>(args.This());

  
  /*
   * id: _43002
   */
  if(args.Length() == 0) {
    

    self->ReleaseMouse();

    // TODO: handle return type
    return v8::Undefined();
  }
  

  return v8::ThrowException(v8::String::New("Could not find matching method for arguments (method name: ReleaseMouse)."));
}

/*static*/ v8::Handle<v8::Value> wxNode_wxWindow::_GetCapture(const v8::Arguments& args) {
  v8::HandleScope scope;
  wxNode_wxWindow* self = unwrap<wxNode_wxWindow>(args.This());

  
  /*
   * id: _43003
   */
  if(args.Length() == 0) {
    

    self->GetCapture();

    // TODO: handle return type
    return v8::Undefined();
  }
  

  return v8::ThrowException(v8::String::New("Could not find matching method for arguments (method name: GetCapture)."));
}

/*static*/ v8::Handle<v8::Value> wxNode_wxWindow::_HasCapture(const v8::Arguments& args) {
  v8::HandleScope scope;
  wxNode_wxWindow* self = unwrap<wxNode_wxWindow>(args.This());

  
  /*
   * id: _43004
   */
  if(args.Length() == 0) {
    

    self->HasCapture();

    // TODO: handle return type
    return v8::Undefined();
  }
  

  return v8::ThrowException(v8::String::New("Could not find matching method for arguments (method name: HasCapture)."));
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

    // TODO: handle return type
    return v8::Undefined();
  }
  
  /*
   * id: _43005
   */
  if(args.Length() == 1 && args[0]->IsBoolean()) {
    bool eraseBackground = args[0]->ToBoolean()->Value(); /* type: _14666  */
    

    self->Refresh(eraseBackground);

    // TODO: handle return type
    return v8::Undefined();
  }
  
  /*
   * id: _43005
   */
  if(args.Length() == 0) {
    

    self->Refresh();

    // TODO: handle return type
    return v8::Undefined();
  }
  

  return v8::ThrowException(v8::String::New("Could not find matching method for arguments (method name: Refresh)."));
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

    // TODO: handle return type
    return v8::Undefined();
  }
  
  /*
   * id: _43006
   */
  if(args.Length() == 1 && (args[0]->IsNull() || args[0]->IsObject())) {
    wxNode_wxRect* rect = args[0]->IsNull() ? NULL : wxNodeObject::unwrap<wxNode_wxRect>(args[0]->ToObject()); /* type: _24778  */
    

    self->RefreshRect(*rect);

    // TODO: handle return type
    return v8::Undefined();
  }
  

  return v8::ThrowException(v8::String::New("Could not find matching method for arguments (method name: RefreshRect)."));
}

/*static*/ v8::Handle<v8::Value> wxNode_wxWindow::_Update(const v8::Arguments& args) {
  v8::HandleScope scope;
  wxNode_wxWindow* self = unwrap<wxNode_wxWindow>(args.This());

  
  /*
   * id: _43007
   */
  if(args.Length() == 0) {
    

    self->Update();

    // TODO: handle return type
    return v8::Undefined();
  }
  

  return v8::ThrowException(v8::String::New("Could not find matching method for arguments (method name: Update)."));
}

/*static*/ v8::Handle<v8::Value> wxNode_wxWindow::_ClearBackground(const v8::Arguments& args) {
  v8::HandleScope scope;
  wxNode_wxWindow* self = unwrap<wxNode_wxWindow>(args.This());

  
  /*
   * id: _43008
   */
  if(args.Length() == 0) {
    

    self->ClearBackground();

    // TODO: handle return type
    return v8::Undefined();
  }
  

  return v8::ThrowException(v8::String::New("Could not find matching method for arguments (method name: ClearBackground)."));
}

/*static*/ v8::Handle<v8::Value> wxNode_wxWindow::_Freeze(const v8::Arguments& args) {
  v8::HandleScope scope;
  wxNode_wxWindow* self = unwrap<wxNode_wxWindow>(args.This());

  
  /*
   * id: _43009
   */
  if(args.Length() == 0) {
    

    self->Freeze();

    // TODO: handle return type
    return v8::Undefined();
  }
  

  return v8::ThrowException(v8::String::New("Could not find matching method for arguments (method name: Freeze)."));
}

/*static*/ v8::Handle<v8::Value> wxNode_wxWindow::_Thaw(const v8::Arguments& args) {
  v8::HandleScope scope;
  wxNode_wxWindow* self = unwrap<wxNode_wxWindow>(args.This());

  
  /*
   * id: _43010
   */
  if(args.Length() == 0) {
    

    self->Thaw();

    // TODO: handle return type
    return v8::Undefined();
  }
  

  return v8::ThrowException(v8::String::New("Could not find matching method for arguments (method name: Thaw)."));
}

/*static*/ v8::Handle<v8::Value> wxNode_wxWindow::_IsFrozen(const v8::Arguments& args) {
  v8::HandleScope scope;
  wxNode_wxWindow* self = unwrap<wxNode_wxWindow>(args.This());

  
  /*
   * id: _43011
   */
  if(args.Length() == 0) {
    

    self->IsFrozen();

    // TODO: handle return type
    return v8::Undefined();
  }
  

  return v8::ThrowException(v8::String::New("Could not find matching method for arguments (method name: IsFrozen)."));
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

    // TODO: handle return type
    return v8::Undefined();
  }
  

  return v8::ThrowException(v8::String::New("Could not find matching method for arguments (method name: PrepareDC)."));
}

/*static*/ v8::Handle<v8::Value> wxNode_wxWindow::_IsDoubleBuffered(const v8::Arguments& args) {
  v8::HandleScope scope;
  wxNode_wxWindow* self = unwrap<wxNode_wxWindow>(args.This());

  
  /*
   * id: _43013
   */
  if(args.Length() == 0) {
    

    self->IsDoubleBuffered();

    // TODO: handle return type
    return v8::Undefined();
  }
  

  return v8::ThrowException(v8::String::New("Could not find matching method for arguments (method name: IsDoubleBuffered)."));
}

/*static*/ v8::Handle<v8::Value> wxNode_wxWindow::_GetUpdateRegion(const v8::Arguments& args) {
  v8::HandleScope scope;
  wxNode_wxWindow* self = unwrap<wxNode_wxWindow>(args.This());

  
  /*
   * id: _43014
   */
  if(args.Length() == 0) {
    

    self->GetUpdateRegion();

    // TODO: handle return type
    return v8::Undefined();
  }
  
  /*
   * id: _43015
   */
  if(args.Length() == 0) {
    

    self->GetUpdateRegion();

    // TODO: handle return type
    return v8::Undefined();
  }
  

  return v8::ThrowException(v8::String::New("Could not find matching method for arguments (method name: GetUpdateRegion)."));
}

/*static*/ v8::Handle<v8::Value> wxNode_wxWindow::_GetUpdateClientRect(const v8::Arguments& args) {
  v8::HandleScope scope;
  wxNode_wxWindow* self = unwrap<wxNode_wxWindow>(args.This());

  
  /*
   * id: _43016
   */
  if(args.Length() == 0) {
    

    self->GetUpdateClientRect();

    // TODO: handle return type
    return v8::Undefined();
  }
  

  return v8::ThrowException(v8::String::New("Could not find matching method for arguments (method name: GetUpdateClientRect)."));
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

    // TODO: handle return type
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

    // TODO: handle return type
    return v8::Undefined();
  }
  

  return v8::ThrowException(v8::String::New("Could not find matching method for arguments (method name: DoIsExposed)."));
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

    // TODO: handle return type
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

    // TODO: handle return type
    return v8::Undefined();
  }
  
  /*
   * id: _43021
   */
  if(args.Length() == 1 && (args[0]->IsNull() || args[0]->IsObject())) {
    wxNode_wxPoint* pt = args[0]->IsNull() ? NULL : wxNodeObject::unwrap<wxNode_wxPoint>(args[0]->ToObject()); /* type: _20412  */
    

    self->IsExposed(*pt);

    // TODO: handle return type
    return v8::Undefined();
  }
  
  /*
   * id: _43022
   */
  if(args.Length() == 1 && (args[0]->IsNull() || args[0]->IsObject())) {
    wxNode_wxRect* rect = args[0]->IsNull() ? NULL : wxNodeObject::unwrap<wxNode_wxRect>(args[0]->ToObject()); /* type: _24778  */
    

    self->IsExposed(*rect);

    // TODO: handle return type
    return v8::Undefined();
  }
  

  return v8::ThrowException(v8::String::New("Could not find matching method for arguments (method name: IsExposed)."));
}

/*static*/ v8::Handle<v8::Value> wxNode_wxWindow::_GetDefaultAttributes(const v8::Arguments& args) {
  v8::HandleScope scope;
  wxNode_wxWindow* self = unwrap<wxNode_wxWindow>(args.This());

  
  /*
   * id: _43023
   */
  if(args.Length() == 0) {
    

    self->GetDefaultAttributes();

    // TODO: handle return type
    return v8::Undefined();
  }
  

  return v8::ThrowException(v8::String::New("Could not find matching method for arguments (method name: GetDefaultAttributes)."));
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

    // TODO: handle return type
    return v8::Undefined();
  }
  
  /*
   * id: _43024
   */
  if(args.Length() == 0) {
    

    self->GetClassDefaultAttributes();

    // TODO: handle return type
    return v8::Undefined();
  }
  

  return v8::ThrowException(v8::String::New("Could not find matching method for arguments (method name: GetClassDefaultAttributes)."));
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

    // TODO: handle return type
    return v8::Undefined();
  }
  

  return v8::ThrowException(v8::String::New("Could not find matching method for arguments (method name: SetBackgroundColour)."));
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

    // TODO: handle return type
    return v8::Undefined();
  }
  

  return v8::ThrowException(v8::String::New("Could not find matching method for arguments (method name: SetOwnBackgroundColour)."));
}

/*static*/ v8::Handle<v8::Value> wxNode_wxWindow::_GetBackgroundColour(const v8::Arguments& args) {
  v8::HandleScope scope;
  wxNode_wxWindow* self = unwrap<wxNode_wxWindow>(args.This());

  
  /*
   * id: _43027
   */
  if(args.Length() == 0) {
    

    self->GetBackgroundColour();

    // TODO: handle return type
    return v8::Undefined();
  }
  

  return v8::ThrowException(v8::String::New("Could not find matching method for arguments (method name: GetBackgroundColour)."));
}

/*static*/ v8::Handle<v8::Value> wxNode_wxWindow::_InheritsBackgroundColour(const v8::Arguments& args) {
  v8::HandleScope scope;
  wxNode_wxWindow* self = unwrap<wxNode_wxWindow>(args.This());

  
  /*
   * id: _43028
   */
  if(args.Length() == 0) {
    

    self->InheritsBackgroundColour();

    // TODO: handle return type
    return v8::Undefined();
  }
  

  return v8::ThrowException(v8::String::New("Could not find matching method for arguments (method name: InheritsBackgroundColour)."));
}

/*static*/ v8::Handle<v8::Value> wxNode_wxWindow::_UseBgCol(const v8::Arguments& args) {
  v8::HandleScope scope;
  wxNode_wxWindow* self = unwrap<wxNode_wxWindow>(args.This());

  
  /*
   * id: _43029
   */
  if(args.Length() == 0) {
    

    self->UseBgCol();

    // TODO: handle return type
    return v8::Undefined();
  }
  

  return v8::ThrowException(v8::String::New("Could not find matching method for arguments (method name: UseBgCol)."));
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

    // TODO: handle return type
    return v8::Undefined();
  }
  

  return v8::ThrowException(v8::String::New("Could not find matching method for arguments (method name: SetForegroundColour)."));
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

    // TODO: handle return type
    return v8::Undefined();
  }
  

  return v8::ThrowException(v8::String::New("Could not find matching method for arguments (method name: SetOwnForegroundColour)."));
}

/*static*/ v8::Handle<v8::Value> wxNode_wxWindow::_GetForegroundColour(const v8::Arguments& args) {
  v8::HandleScope scope;
  wxNode_wxWindow* self = unwrap<wxNode_wxWindow>(args.This());

  
  /*
   * id: _43032
   */
  if(args.Length() == 0) {
    

    self->GetForegroundColour();

    // TODO: handle return type
    return v8::Undefined();
  }
  

  return v8::ThrowException(v8::String::New("Could not find matching method for arguments (method name: GetForegroundColour)."));
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

    // TODO: handle return type
    return v8::Undefined();
  }
  

  return v8::ThrowException(v8::String::New("Could not find matching method for arguments (method name: SetBackgroundStyle)."));
}

/*static*/ v8::Handle<v8::Value> wxNode_wxWindow::_GetBackgroundStyle(const v8::Arguments& args) {
  v8::HandleScope scope;
  wxNode_wxWindow* self = unwrap<wxNode_wxWindow>(args.This());

  
  /*
   * id: _43034
   */
  if(args.Length() == 0) {
    

    self->GetBackgroundStyle();

    // TODO: handle return type
    return v8::Undefined();
  }
  

  return v8::ThrowException(v8::String::New("Could not find matching method for arguments (method name: GetBackgroundStyle)."));
}

/*static*/ v8::Handle<v8::Value> wxNode_wxWindow::_HasTransparentBackground(const v8::Arguments& args) {
  v8::HandleScope scope;
  wxNode_wxWindow* self = unwrap<wxNode_wxWindow>(args.This());

  
  /*
   * id: _43035
   */
  if(args.Length() == 0) {
    

    self->HasTransparentBackground();

    // TODO: handle return type
    return v8::Undefined();
  }
  

  return v8::ThrowException(v8::String::New("Could not find matching method for arguments (method name: HasTransparentBackground)."));
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

    // TODO: handle return type
    return v8::Undefined();
  }
  

  return v8::ThrowException(v8::String::New("Could not find matching method for arguments (method name: SetFont)."));
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

    // TODO: handle return type
    return v8::Undefined();
  }
  

  return v8::ThrowException(v8::String::New("Could not find matching method for arguments (method name: SetOwnFont)."));
}

/*static*/ v8::Handle<v8::Value> wxNode_wxWindow::_GetFont(const v8::Arguments& args) {
  v8::HandleScope scope;
  wxNode_wxWindow* self = unwrap<wxNode_wxWindow>(args.This());

  
  /*
   * id: _43038
   */
  if(args.Length() == 0) {
    

    self->GetFont();

    // TODO: handle return type
    return v8::Undefined();
  }
  

  return v8::ThrowException(v8::String::New("Could not find matching method for arguments (method name: GetFont)."));
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

    // TODO: handle return type
    return v8::Undefined();
  }
  

  return v8::ThrowException(v8::String::New("Could not find matching method for arguments (method name: SetCursor)."));
}

/*static*/ v8::Handle<v8::Value> wxNode_wxWindow::_GetCursor(const v8::Arguments& args) {
  v8::HandleScope scope;
  wxNode_wxWindow* self = unwrap<wxNode_wxWindow>(args.This());

  
  /*
   * id: _43040
   */
  if(args.Length() == 0) {
    

    self->GetCursor();

    // TODO: handle return type
    return v8::Undefined();
  }
  

  return v8::ThrowException(v8::String::New("Could not find matching method for arguments (method name: GetCursor)."));
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

    // TODO: handle return type
    return v8::Undefined();
  }
  

  return v8::ThrowException(v8::String::New("Could not find matching method for arguments (method name: SetCaret)."));
}

/*static*/ v8::Handle<v8::Value> wxNode_wxWindow::_GetCaret(const v8::Arguments& args) {
  v8::HandleScope scope;
  wxNode_wxWindow* self = unwrap<wxNode_wxWindow>(args.This());

  
  /*
   * id: _43042
   */
  if(args.Length() == 0) {
    

    self->GetCaret();

    // TODO: handle return type
    return v8::Undefined();
  }
  

  return v8::ThrowException(v8::String::New("Could not find matching method for arguments (method name: GetCaret)."));
}

/*static*/ v8::Handle<v8::Value> wxNode_wxWindow::_GetCharHeight(const v8::Arguments& args) {
  v8::HandleScope scope;
  wxNode_wxWindow* self = unwrap<wxNode_wxWindow>(args.This());

  
  /*
   * id: _43043
   */
  if(args.Length() == 0) {
    

    self->GetCharHeight();

    // TODO: handle return type
    return v8::Undefined();
  }
  

  return v8::ThrowException(v8::String::New("Could not find matching method for arguments (method name: GetCharHeight)."));
}

/*static*/ v8::Handle<v8::Value> wxNode_wxWindow::_GetCharWidth(const v8::Arguments& args) {
  v8::HandleScope scope;
  wxNode_wxWindow* self = unwrap<wxNode_wxWindow>(args.This());

  
  /*
   * id: _43044
   */
  if(args.Length() == 0) {
    

    self->GetCharWidth();

    // TODO: handle return type
    return v8::Undefined();
  }
  

  return v8::ThrowException(v8::String::New("Could not find matching method for arguments (method name: GetCharWidth)."));
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

    // TODO: handle return type
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

    // TODO: handle return type
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

    // TODO: handle return type
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

    // TODO: handle return type
    return v8::Undefined();
  }
  
  /*
   * id: _43046
   */
  if(args.Length() == 1 && args[0]->IsString()) {
    v8::String::AsciiValue string(args[0]->ToString()); /* type: _14808  */
    

    self->GetTextExtent(*string);

    // TODO: handle return type
    return v8::Undefined();
  }
  

  return v8::ThrowException(v8::String::New("Could not find matching method for arguments (method name: GetTextExtent)."));
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

    // TODO: handle return type
    return v8::Undefined();
  }
  
  /*
   * id: _43049
   */
  if(args.Length() == 1 && (args[0]->IsNull() || args[0]->IsObject())) {
    wxNode_wxPoint* pt = args[0]->IsNull() ? NULL : wxNodeObject::unwrap<wxNode_wxPoint>(args[0]->ToObject()); /* type: _20412  */
    

    self->ClientToScreen(*pt);

    // TODO: handle return type
    return v8::Undefined();
  }
  

  return v8::ThrowException(v8::String::New("Could not find matching method for arguments (method name: ClientToScreen)."));
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

    // TODO: handle return type
    return v8::Undefined();
  }
  
  /*
   * id: _43050
   */
  if(args.Length() == 1 && (args[0]->IsNull() || args[0]->IsObject())) {
    wxNode_wxPoint* pt = args[0]->IsNull() ? NULL : wxNodeObject::unwrap<wxNode_wxPoint>(args[0]->ToObject()); /* type: _20412  */
    

    self->ScreenToClient(*pt);

    // TODO: handle return type
    return v8::Undefined();
  }
  

  return v8::ThrowException(v8::String::New("Could not find matching method for arguments (method name: ScreenToClient)."));
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

    // TODO: handle return type
    return v8::Undefined();
  }
  
  /*
   * id: _43052
   */
  if(args.Length() == 1 && (args[0]->IsNull() || args[0]->IsObject())) {
    wxNode_wxPoint* pt = args[0]->IsNull() ? NULL : wxNodeObject::unwrap<wxNode_wxPoint>(args[0]->ToObject()); /* type: _20412  */
    

    self->HitTest(*pt);

    // TODO: handle return type
    return v8::Undefined();
  }
  

  return v8::ThrowException(v8::String::New("Could not find matching method for arguments (method name: HitTest)."));
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

    // TODO: handle return type
    return v8::Undefined();
  }
  
  /*
   * id: _43054
   */
  if(args.Length() == 0) {
    

    self->GetBorder();

    // TODO: handle return type
    return v8::Undefined();
  }
  

  return v8::ThrowException(v8::String::New("Could not find matching method for arguments (method name: GetBorder)."));
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

    // TODO: handle return type
    return v8::Undefined();
  }
  
  /*
   * id: _43055
   */
  if(args.Length() == 0) {
    

    self->UpdateWindowUI();

    // TODO: handle return type
    return v8::Undefined();
  }
  

  return v8::ThrowException(v8::String::New("Could not find matching method for arguments (method name: UpdateWindowUI)."));
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

    // TODO: handle return type
    return v8::Undefined();
  }
  

  return v8::ThrowException(v8::String::New("Could not find matching method for arguments (method name: DoUpdateWindowUI)."));
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

    // TODO: handle return type
    return v8::Undefined();
  }
  
  /*
   * id: _43057
   */
  if(args.Length() == 1 && (args[0]->IsNull() || args[0]->IsObject())) {
    wxNode_wxMenu* menu = args[0]->IsNull() ? NULL : wxNodeObject::unwrap<wxNode_wxMenu>(args[0]->ToObject()); /* type: _52838 * */
    

    self->PopupMenu(menu);

    // TODO: handle return type
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

    // TODO: handle return type
    return v8::Undefined();
  }
  

  return v8::ThrowException(v8::String::New("Could not find matching method for arguments (method name: PopupMenu)."));
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

    // TODO: handle return type
    return v8::Undefined();
  }
  
  /*
   * id: _43059
   */
  if(args.Length() == 1 && (args[0]->IsNull() || args[0]->IsObject())) {
    wxNode_wxMenu* menu = args[0]->IsNull() ? NULL : wxNodeObject::unwrap<wxNode_wxMenu>(args[0]->ToObject()); /* type: _62015  */
    

    self->GetPopupMenuSelectionFromUser(*menu);

    // TODO: handle return type
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

    // TODO: handle return type
    return v8::Undefined();
  }
  

  return v8::ThrowException(v8::String::New("Could not find matching method for arguments (method name: GetPopupMenuSelectionFromUser)."));
}

/*static*/ v8::Handle<v8::Value> wxNode_wxWindow::_HasMultiplePages(const v8::Arguments& args) {
  v8::HandleScope scope;
  wxNode_wxWindow* self = unwrap<wxNode_wxWindow>(args.This());

  
  /*
   * id: _43061
   */
  if(args.Length() == 0) {
    

    self->HasMultiplePages();

    // TODO: handle return type
    return v8::Undefined();
  }
  

  return v8::ThrowException(v8::String::New("Could not find matching method for arguments (method name: HasMultiplePages)."));
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

    // TODO: handle return type
    return v8::Undefined();
  }
  

  return v8::ThrowException(v8::String::New("Could not find matching method for arguments (method name: CanScroll)."));
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

    // TODO: handle return type
    return v8::Undefined();
  }
  

  return v8::ThrowException(v8::String::New("Could not find matching method for arguments (method name: HasScrollbar)."));
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

    // TODO: handle return type
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

    // TODO: handle return type
    return v8::Undefined();
  }
  

  return v8::ThrowException(v8::String::New("Could not find matching method for arguments (method name: SetScrollbar)."));
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

    // TODO: handle return type
    return v8::Undefined();
  }
  
  /*
   * id: _43065
   */
  if(args.Length() == 2 && args[0]->IsNumber() && args[1]->IsNumber()) {
    int orient = (int)args[0]->ToInt32()->Value(); /* type: _162  */
    int pos = (int)args[1]->ToInt32()->Value(); /* type: _162  */
    

    self->SetScrollPos(orient, pos);

    // TODO: handle return type
    return v8::Undefined();
  }
  

  return v8::ThrowException(v8::String::New("Could not find matching method for arguments (method name: SetScrollPos)."));
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

    // TODO: handle return type
    return v8::Undefined();
  }
  

  return v8::ThrowException(v8::String::New("Could not find matching method for arguments (method name: GetScrollPos)."));
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

    // TODO: handle return type
    return v8::Undefined();
  }
  

  return v8::ThrowException(v8::String::New("Could not find matching method for arguments (method name: GetScrollThumb)."));
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

    // TODO: handle return type
    return v8::Undefined();
  }
  

  return v8::ThrowException(v8::String::New("Could not find matching method for arguments (method name: GetScrollRange)."));
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

    // TODO: handle return type
    return v8::Undefined();
  }
  
  /*
   * id: _43069
   */
  if(args.Length() == 2 && args[0]->IsNumber() && args[1]->IsNumber()) {
    int dx = (int)args[0]->ToInt32()->Value(); /* type: _162  */
    int dy = (int)args[1]->ToInt32()->Value(); /* type: _162  */
    

    self->ScrollWindow(dx, dy);

    // TODO: handle return type
    return v8::Undefined();
  }
  

  return v8::ThrowException(v8::String::New("Could not find matching method for arguments (method name: ScrollWindow)."));
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

    // TODO: handle return type
    return v8::Undefined();
  }
  

  return v8::ThrowException(v8::String::New("Could not find matching method for arguments (method name: ScrollLines)."));
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

    // TODO: handle return type
    return v8::Undefined();
  }
  

  return v8::ThrowException(v8::String::New("Could not find matching method for arguments (method name: ScrollPages)."));
}

/*static*/ v8::Handle<v8::Value> wxNode_wxWindow::_LineUp(const v8::Arguments& args) {
  v8::HandleScope scope;
  wxNode_wxWindow* self = unwrap<wxNode_wxWindow>(args.This());

  
  /*
   * id: _43072
   */
  if(args.Length() == 0) {
    

    self->LineUp();

    // TODO: handle return type
    return v8::Undefined();
  }
  

  return v8::ThrowException(v8::String::New("Could not find matching method for arguments (method name: LineUp)."));
}

/*static*/ v8::Handle<v8::Value> wxNode_wxWindow::_LineDown(const v8::Arguments& args) {
  v8::HandleScope scope;
  wxNode_wxWindow* self = unwrap<wxNode_wxWindow>(args.This());

  
  /*
   * id: _43073
   */
  if(args.Length() == 0) {
    

    self->LineDown();

    // TODO: handle return type
    return v8::Undefined();
  }
  

  return v8::ThrowException(v8::String::New("Could not find matching method for arguments (method name: LineDown)."));
}

/*static*/ v8::Handle<v8::Value> wxNode_wxWindow::_PageUp(const v8::Arguments& args) {
  v8::HandleScope scope;
  wxNode_wxWindow* self = unwrap<wxNode_wxWindow>(args.This());

  
  /*
   * id: _43074
   */
  if(args.Length() == 0) {
    

    self->PageUp();

    // TODO: handle return type
    return v8::Undefined();
  }
  

  return v8::ThrowException(v8::String::New("Could not find matching method for arguments (method name: PageUp)."));
}

/*static*/ v8::Handle<v8::Value> wxNode_wxWindow::_PageDown(const v8::Arguments& args) {
  v8::HandleScope scope;
  wxNode_wxWindow* self = unwrap<wxNode_wxWindow>(args.This());

  
  /*
   * id: _43075
   */
  if(args.Length() == 0) {
    

    self->PageDown();

    // TODO: handle return type
    return v8::Undefined();
  }
  

  return v8::ThrowException(v8::String::New("Could not find matching method for arguments (method name: PageDown)."));
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

    // TODO: handle return type
    return v8::Undefined();
  }
  
  /*
   * id: _43076
   */
  if(args.Length() == 1 && args[0]->IsBoolean()) {
    bool arg0 = args[0]->ToBoolean()->Value(); /* type: _14666  */
    

    self->AlwaysShowScrollbars(arg0);

    // TODO: handle return type
    return v8::Undefined();
  }
  
  /*
   * id: _43076
   */
  if(args.Length() == 0) {
    

    self->AlwaysShowScrollbars();

    // TODO: handle return type
    return v8::Undefined();
  }
  

  return v8::ThrowException(v8::String::New("Could not find matching method for arguments (method name: AlwaysShowScrollbars)."));
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

    // TODO: handle return type
    return v8::Undefined();
  }
  

  return v8::ThrowException(v8::String::New("Could not find matching method for arguments (method name: IsScrollbarAlwaysShown)."));
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

    // TODO: handle return type
    return v8::Undefined();
  }
  

  return v8::ThrowException(v8::String::New("Could not find matching method for arguments (method name: SetHelpText)."));
}

/*static*/ v8::Handle<v8::Value> wxNode_wxWindow::_GetHelpText(const v8::Arguments& args) {
  v8::HandleScope scope;
  wxNode_wxWindow* self = unwrap<wxNode_wxWindow>(args.This());

  
  /*
   * id: _43081
   */
  if(args.Length() == 0) {
    

    self->GetHelpText();

    // TODO: handle return type
    return v8::Undefined();
  }
  

  return v8::ThrowException(v8::String::New("Could not find matching method for arguments (method name: GetHelpText)."));
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

    // TODO: handle return type
    return v8::Undefined();
  }
  
  /*
   * id: _43083
   */
  if(args.Length() == 1 && (args[0]->IsNull() || args[0]->IsObject())) {
    wxNode_wxToolTip* tip = args[0]->IsNull() ? NULL : wxNodeObject::unwrap<wxNode_wxToolTip>(args[0]->ToObject()); /* type: _6541 * */
    

    self->SetToolTip(tip);

    // TODO: handle return type
    return v8::Undefined();
  }
  

  return v8::ThrowException(v8::String::New("Could not find matching method for arguments (method name: SetToolTip)."));
}

/*static*/ v8::Handle<v8::Value> wxNode_wxWindow::_UnsetToolTip(const v8::Arguments& args) {
  v8::HandleScope scope;
  wxNode_wxWindow* self = unwrap<wxNode_wxWindow>(args.This());

  
  /*
   * id: _43084
   */
  if(args.Length() == 0) {
    

    self->UnsetToolTip();

    // TODO: handle return type
    return v8::Undefined();
  }
  

  return v8::ThrowException(v8::String::New("Could not find matching method for arguments (method name: UnsetToolTip)."));
}

/*static*/ v8::Handle<v8::Value> wxNode_wxWindow::_GetToolTip(const v8::Arguments& args) {
  v8::HandleScope scope;
  wxNode_wxWindow* self = unwrap<wxNode_wxWindow>(args.This());

  
  /*
   * id: _43085
   */
  if(args.Length() == 0) {
    

    self->GetToolTip();

    // TODO: handle return type
    return v8::Undefined();
  }
  

  return v8::ThrowException(v8::String::New("Could not find matching method for arguments (method name: GetToolTip)."));
}

/*static*/ v8::Handle<v8::Value> wxNode_wxWindow::_GetToolTipText(const v8::Arguments& args) {
  v8::HandleScope scope;
  wxNode_wxWindow* self = unwrap<wxNode_wxWindow>(args.This());

  
  /*
   * id: _43086
   */
  if(args.Length() == 0) {
    

    self->GetToolTipText();

    // TODO: handle return type
    return v8::Undefined();
  }
  

  return v8::ThrowException(v8::String::New("Could not find matching method for arguments (method name: GetToolTipText)."));
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

    // TODO: handle return type
    return v8::Undefined();
  }
  

  return v8::ThrowException(v8::String::New("Could not find matching method for arguments (method name: CopyToolTip)."));
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

    // TODO: handle return type
    return v8::Undefined();
  }
  

  return v8::ThrowException(v8::String::New("Could not find matching method for arguments (method name: SetDropTarget)."));
}

/*static*/ v8::Handle<v8::Value> wxNode_wxWindow::_GetDropTarget(const v8::Arguments& args) {
  v8::HandleScope scope;
  wxNode_wxWindow* self = unwrap<wxNode_wxWindow>(args.This());

  
  /*
   * id: _43089
   */
  if(args.Length() == 0) {
    

    self->GetDropTarget();

    // TODO: handle return type
    return v8::Undefined();
  }
  

  return v8::ThrowException(v8::String::New("Could not find matching method for arguments (method name: GetDropTarget)."));
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

    // TODO: handle return type
    return v8::Undefined();
  }
  

  return v8::ThrowException(v8::String::New("Could not find matching method for arguments (method name: DragAcceptFiles)."));
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

    // TODO: handle return type
    return v8::Undefined();
  }
  

  return v8::ThrowException(v8::String::New("Could not find matching method for arguments (method name: SetConstraints)."));
}

/*static*/ v8::Handle<v8::Value> wxNode_wxWindow::_GetConstraints(const v8::Arguments& args) {
  v8::HandleScope scope;
  wxNode_wxWindow* self = unwrap<wxNode_wxWindow>(args.This());

  
  /*
   * id: _43092
   */
  if(args.Length() == 0) {
    

    self->GetConstraints();

    // TODO: handle return type
    return v8::Undefined();
  }
  

  return v8::ThrowException(v8::String::New("Could not find matching method for arguments (method name: GetConstraints)."));
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

    // TODO: handle return type
    return v8::Undefined();
  }
  

  return v8::ThrowException(v8::String::New("Could not find matching method for arguments (method name: UnsetConstraints)."));
}

/*static*/ v8::Handle<v8::Value> wxNode_wxWindow::_GetConstraintsInvolvedIn(const v8::Arguments& args) {
  v8::HandleScope scope;
  wxNode_wxWindow* self = unwrap<wxNode_wxWindow>(args.This());

  
  /*
   * id: _43094
   */
  if(args.Length() == 0) {
    

    self->GetConstraintsInvolvedIn();

    // TODO: handle return type
    return v8::Undefined();
  }
  

  return v8::ThrowException(v8::String::New("Could not find matching method for arguments (method name: GetConstraintsInvolvedIn)."));
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

    // TODO: handle return type
    return v8::Undefined();
  }
  

  return v8::ThrowException(v8::String::New("Could not find matching method for arguments (method name: AddConstraintReference)."));
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

    // TODO: handle return type
    return v8::Undefined();
  }
  

  return v8::ThrowException(v8::String::New("Could not find matching method for arguments (method name: RemoveConstraintReference)."));
}

/*static*/ v8::Handle<v8::Value> wxNode_wxWindow::_DeleteRelatedConstraints(const v8::Arguments& args) {
  v8::HandleScope scope;
  wxNode_wxWindow* self = unwrap<wxNode_wxWindow>(args.This());

  
  /*
   * id: _43097
   */
  if(args.Length() == 0) {
    

    self->DeleteRelatedConstraints();

    // TODO: handle return type
    return v8::Undefined();
  }
  

  return v8::ThrowException(v8::String::New("Could not find matching method for arguments (method name: DeleteRelatedConstraints)."));
}

/*static*/ v8::Handle<v8::Value> wxNode_wxWindow::_ResetConstraints(const v8::Arguments& args) {
  v8::HandleScope scope;
  wxNode_wxWindow* self = unwrap<wxNode_wxWindow>(args.This());

  
  /*
   * id: _43098
   */
  if(args.Length() == 0) {
    

    self->ResetConstraints();

    // TODO: handle return type
    return v8::Undefined();
  }
  

  return v8::ThrowException(v8::String::New("Could not find matching method for arguments (method name: ResetConstraints)."));
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

    // TODO: handle return type
    return v8::Undefined();
  }
  
  /*
   * id: _43099
   */
  if(args.Length() == 0) {
    

    self->SetConstraintSizes();

    // TODO: handle return type
    return v8::Undefined();
  }
  

  return v8::ThrowException(v8::String::New("Could not find matching method for arguments (method name: SetConstraintSizes)."));
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

    // TODO: handle return type
    return v8::Undefined();
  }
  

  return v8::ThrowException(v8::String::New("Could not find matching method for arguments (method name: LayoutPhase1)."));
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

    // TODO: handle return type
    return v8::Undefined();
  }
  

  return v8::ThrowException(v8::String::New("Could not find matching method for arguments (method name: LayoutPhase2)."));
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

    // TODO: handle return type
    return v8::Undefined();
  }
  

  return v8::ThrowException(v8::String::New("Could not find matching method for arguments (method name: DoPhase)."));
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

    // TODO: handle return type
    return v8::Undefined();
  }
  

  return v8::ThrowException(v8::String::New("Could not find matching method for arguments (method name: SetSizeConstraint)."));
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

    // TODO: handle return type
    return v8::Undefined();
  }
  

  return v8::ThrowException(v8::String::New("Could not find matching method for arguments (method name: MoveConstraint)."));
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

    // TODO: handle return type
    return v8::Undefined();
  }
  

  return v8::ThrowException(v8::String::New("Could not find matching method for arguments (method name: GetSizeConstraint)."));
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

    // TODO: handle return type
    return v8::Undefined();
  }
  

  return v8::ThrowException(v8::String::New("Could not find matching method for arguments (method name: GetClientSizeConstraint)."));
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

    // TODO: handle return type
    return v8::Undefined();
  }
  

  return v8::ThrowException(v8::String::New("Could not find matching method for arguments (method name: GetPositionConstraint)."));
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

    // TODO: handle return type
    return v8::Undefined();
  }
  

  return v8::ThrowException(v8::String::New("Could not find matching method for arguments (method name: SetAutoLayout)."));
}

/*static*/ v8::Handle<v8::Value> wxNode_wxWindow::_GetAutoLayout(const v8::Arguments& args) {
  v8::HandleScope scope;
  wxNode_wxWindow* self = unwrap<wxNode_wxWindow>(args.This());

  
  /*
   * id: _43109
   */
  if(args.Length() == 0) {
    

    self->GetAutoLayout();

    // TODO: handle return type
    return v8::Undefined();
  }
  

  return v8::ThrowException(v8::String::New("Could not find matching method for arguments (method name: GetAutoLayout)."));
}

/*static*/ v8::Handle<v8::Value> wxNode_wxWindow::_Layout(const v8::Arguments& args) {
  v8::HandleScope scope;
  wxNode_wxWindow* self = unwrap<wxNode_wxWindow>(args.This());

  
  /*
   * id: _43110
   */
  if(args.Length() == 0) {
    

    self->Layout();

    // TODO: handle return type
    return v8::Undefined();
  }
  

  return v8::ThrowException(v8::String::New("Could not find matching method for arguments (method name: Layout)."));
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

    // TODO: handle return type
    return v8::Undefined();
  }
  
  /*
   * id: _43111
   */
  if(args.Length() == 1 && (args[0]->IsNull() || args[0]->IsObject())) {
    wxNode_wxSizer* sizer = args[0]->IsNull() ? NULL : wxNodeObject::unwrap<wxNode_wxSizer>(args[0]->ToObject()); /* type: _58725 * */
    

    self->SetSizer(sizer);

    // TODO: handle return type
    return v8::Undefined();
  }
  

  return v8::ThrowException(v8::String::New("Could not find matching method for arguments (method name: SetSizer)."));
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

    // TODO: handle return type
    return v8::Undefined();
  }
  
  /*
   * id: _43112
   */
  if(args.Length() == 1 && (args[0]->IsNull() || args[0]->IsObject())) {
    wxNode_wxSizer* sizer = args[0]->IsNull() ? NULL : wxNodeObject::unwrap<wxNode_wxSizer>(args[0]->ToObject()); /* type: _58725 * */
    

    self->SetSizerAndFit(sizer);

    // TODO: handle return type
    return v8::Undefined();
  }
  

  return v8::ThrowException(v8::String::New("Could not find matching method for arguments (method name: SetSizerAndFit)."));
}

/*static*/ v8::Handle<v8::Value> wxNode_wxWindow::_GetSizer(const v8::Arguments& args) {
  v8::HandleScope scope;
  wxNode_wxWindow* self = unwrap<wxNode_wxWindow>(args.This());

  
  /*
   * id: _43113
   */
  if(args.Length() == 0) {
    

    self->GetSizer();

    // TODO: handle return type
    return v8::Undefined();
  }
  

  return v8::ThrowException(v8::String::New("Could not find matching method for arguments (method name: GetSizer)."));
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

    // TODO: handle return type
    return v8::Undefined();
  }
  

  return v8::ThrowException(v8::String::New("Could not find matching method for arguments (method name: SetContainingSizer)."));
}

/*static*/ v8::Handle<v8::Value> wxNode_wxWindow::_GetContainingSizer(const v8::Arguments& args) {
  v8::HandleScope scope;
  wxNode_wxWindow* self = unwrap<wxNode_wxWindow>(args.This());

  
  /*
   * id: _43115
   */
  if(args.Length() == 0) {
    

    self->GetContainingSizer();

    // TODO: handle return type
    return v8::Undefined();
  }
  

  return v8::ThrowException(v8::String::New("Could not find matching method for arguments (method name: GetContainingSizer)."));
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

    // TODO: handle return type
    return v8::Undefined();
  }
  

  return v8::ThrowException(v8::String::New("Could not find matching method for arguments (method name: SetTransparent)."));
}

/*static*/ v8::Handle<v8::Value> wxNode_wxWindow::_CanSetTransparent(const v8::Arguments& args) {
  v8::HandleScope scope;
  wxNode_wxWindow* self = unwrap<wxNode_wxWindow>(args.This());

  
  /*
   * id: _43117
   */
  if(args.Length() == 0) {
    

    self->CanSetTransparent();

    // TODO: handle return type
    return v8::Undefined();
  }
  

  return v8::ThrowException(v8::String::New("Could not find matching method for arguments (method name: CanSetTransparent)."));
}

/*static*/ v8::Handle<v8::Value> wxNode_wxWindow::_OnSysColourChanged(const v8::Arguments& args) {
  v8::HandleScope scope;
  wxNode_wxWindow* self = unwrap<wxNode_wxWindow>(args.This());

  

  return v8::ThrowException(v8::String::New("Could not find matching method for arguments (method name: OnSysColourChanged)."));
}

/*static*/ v8::Handle<v8::Value> wxNode_wxWindow::_OnInitDialog(const v8::Arguments& args) {
  v8::HandleScope scope;
  wxNode_wxWindow* self = unwrap<wxNode_wxWindow>(args.This());

  

  return v8::ThrowException(v8::String::New("Could not find matching method for arguments (method name: OnInitDialog)."));
}

/*static*/ v8::Handle<v8::Value> wxNode_wxWindow::_OnMiddleClick(const v8::Arguments& args) {
  v8::HandleScope scope;
  wxNode_wxWindow* self = unwrap<wxNode_wxWindow>(args.This());

  

  return v8::ThrowException(v8::String::New("Could not find matching method for arguments (method name: OnMiddleClick)."));
}

/*static*/ v8::Handle<v8::Value> wxNode_wxWindow::_OnHelp(const v8::Arguments& args) {
  v8::HandleScope scope;
  wxNode_wxWindow* self = unwrap<wxNode_wxWindow>(args.This());

  

  return v8::ThrowException(v8::String::New("Could not find matching method for arguments (method name: OnHelp)."));
}

/*static*/ v8::Handle<v8::Value> wxNode_wxWindow::_OnInternalIdle(const v8::Arguments& args) {
  v8::HandleScope scope;
  wxNode_wxWindow* self = unwrap<wxNode_wxWindow>(args.This());

  

  return v8::ThrowException(v8::String::New("Could not find matching method for arguments (method name: OnInternalIdle)."));
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

    // TODO: handle return type
    return v8::Undefined();
  }
  

  return v8::ThrowException(v8::String::New("Could not find matching method for arguments (method name: SendIdleEvents)."));
}

/*static*/ v8::Handle<v8::Value> wxNode_wxWindow::_GetHandle(const v8::Arguments& args) {
  v8::HandleScope scope;
  wxNode_wxWindow* self = unwrap<wxNode_wxWindow>(args.This());

  
  /*
   * id: _43124
   */
  if(args.Length() == 0) {
    

    self->GetHandle();

    // TODO: handle return type
    return v8::Undefined();
  }
  

  return v8::ThrowException(v8::String::New("Could not find matching method for arguments (method name: GetHandle)."));
}

/*static*/ v8::Handle<v8::Value> wxNode_wxWindow::_DissociateHandle(const v8::Arguments& args) {
  v8::HandleScope scope;
  wxNode_wxWindow* self = unwrap<wxNode_wxWindow>(args.This());

  
  /*
   * id: _43126
   */
  if(args.Length() == 0) {
    

    self->DissociateHandle();

    // TODO: handle return type
    return v8::Undefined();
  }
  

  return v8::ThrowException(v8::String::New("Could not find matching method for arguments (method name: DissociateHandle)."));
}

/*static*/ v8::Handle<v8::Value> wxNode_wxWindow::_GetPalette(const v8::Arguments& args) {
  v8::HandleScope scope;
  wxNode_wxWindow* self = unwrap<wxNode_wxWindow>(args.This());

  
  /*
   * id: _43127
   */
  if(args.Length() == 0) {
    

    self->GetPalette();

    // TODO: handle return type
    return v8::Undefined();
  }
  

  return v8::ThrowException(v8::String::New("Could not find matching method for arguments (method name: GetPalette)."));
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

    // TODO: handle return type
    return v8::Undefined();
  }
  

  return v8::ThrowException(v8::String::New("Could not find matching method for arguments (method name: SetPalette)."));
}

/*static*/ v8::Handle<v8::Value> wxNode_wxWindow::_HasCustomPalette(const v8::Arguments& args) {
  v8::HandleScope scope;
  wxNode_wxWindow* self = unwrap<wxNode_wxWindow>(args.This());

  
  /*
   * id: _43129
   */
  if(args.Length() == 0) {
    

    self->HasCustomPalette();

    // TODO: handle return type
    return v8::Undefined();
  }
  

  return v8::ThrowException(v8::String::New("Could not find matching method for arguments (method name: HasCustomPalette)."));
}

/*static*/ v8::Handle<v8::Value> wxNode_wxWindow::_GetAncestorWithCustomPalette(const v8::Arguments& args) {
  v8::HandleScope scope;
  wxNode_wxWindow* self = unwrap<wxNode_wxWindow>(args.This());

  
  /*
   * id: _43130
   */
  if(args.Length() == 0) {
    

    self->GetAncestorWithCustomPalette();

    // TODO: handle return type
    return v8::Undefined();
  }
  

  return v8::ThrowException(v8::String::New("Could not find matching method for arguments (method name: GetAncestorWithCustomPalette)."));
}

/*static*/ v8::Handle<v8::Value> wxNode_wxWindow::_InheritAttributes(const v8::Arguments& args) {
  v8::HandleScope scope;
  wxNode_wxWindow* self = unwrap<wxNode_wxWindow>(args.This());

  
  /*
   * id: _43131
   */
  if(args.Length() == 0) {
    

    self->InheritAttributes();

    // TODO: handle return type
    return v8::Undefined();
  }
  

  return v8::ThrowException(v8::String::New("Could not find matching method for arguments (method name: InheritAttributes)."));
}

/*static*/ v8::Handle<v8::Value> wxNode_wxWindow::_ShouldInheritColours(const v8::Arguments& args) {
  v8::HandleScope scope;
  wxNode_wxWindow* self = unwrap<wxNode_wxWindow>(args.This());

  
  /*
   * id: _43132
   */
  if(args.Length() == 0) {
    

    self->ShouldInheritColours();

    // TODO: handle return type
    return v8::Undefined();
  }
  

  return v8::ThrowException(v8::String::New("Could not find matching method for arguments (method name: ShouldInheritColours)."));
}

/*static*/ v8::Handle<v8::Value> wxNode_wxWindow::_CanBeOutsideClientArea(const v8::Arguments& args) {
  v8::HandleScope scope;
  wxNode_wxWindow* self = unwrap<wxNode_wxWindow>(args.This());

  
  /*
   * id: _43133
   */
  if(args.Length() == 0) {
    

    self->CanBeOutsideClientArea();

    // TODO: handle return type
    return v8::Undefined();
  }
  

  return v8::ThrowException(v8::String::New("Could not find matching method for arguments (method name: CanBeOutsideClientArea)."));
}

/*static*/ v8::Handle<v8::Value> wxNode_wxWindow::_CanApplyThemeBorder(const v8::Arguments& args) {
  v8::HandleScope scope;
  wxNode_wxWindow* self = unwrap<wxNode_wxWindow>(args.This());

  
  /*
   * id: _43134
   */
  if(args.Length() == 0) {
    

    self->CanApplyThemeBorder();

    // TODO: handle return type
    return v8::Undefined();
  }
  

  return v8::ThrowException(v8::String::New("Could not find matching method for arguments (method name: CanApplyThemeBorder)."));
}

/*static*/ v8::Handle<v8::Value> wxNode_wxWindow::_GetMainWindowOfCompositeControl(const v8::Arguments& args) {
  v8::HandleScope scope;
  wxNode_wxWindow* self = unwrap<wxNode_wxWindow>(args.This());

  
  /*
   * id: _43135
   */
  if(args.Length() == 0) {
    

    self->GetMainWindowOfCompositeControl();

    // TODO: handle return type
    return v8::Undefined();
  }
  

  return v8::ThrowException(v8::String::New("Could not find matching method for arguments (method name: GetMainWindowOfCompositeControl)."));
}

/*static*/ v8::Handle<v8::Value> wxNode_wxWindow::_IsTopNavigationDomain(const v8::Arguments& args) {
  v8::HandleScope scope;
  wxNode_wxWindow* self = unwrap<wxNode_wxWindow>(args.This());

  
  /*
   * id: _43136
   */
  if(args.Length() == 0) {
    

    self->IsTopNavigationDomain();

    // TODO: handle return type
    return v8::Undefined();
  }
  

  return v8::ThrowException(v8::String::New("Could not find matching method for arguments (method name: IsTopNavigationDomain)."));
}

/*static*/ v8::Handle<v8::Value> wxNode_wxWindow::_GetClassInfo(const v8::Arguments& args) {
  v8::HandleScope scope;
  wxNode_wxWindow* self = unwrap<wxNode_wxWindow>(args.This());

  
  /*
   * id: _43185
   */
  if(args.Length() == 0) {
    

    self->GetClassInfo();

    // TODO: handle return type
    return v8::Undefined();
  }
  

  return v8::ThrowException(v8::String::New("Could not find matching method for arguments (method name: GetClassInfo)."));
}

