
#include <sstream>
#include "wxNode_wxWindow.h"
#include "wxNode_wxEvtHandler.h"
#include "wxNode_wxPoint.h"
#include "wxNode_wxSize.h"
#include "wxNode_wxRect.h"
#include "wxNode_wxScrollHelper.h"
#include "wxNode_wxKeyEvent.h"
#include "wxNode_wxWindowList.h"
#include "wxNode_wxEvent.h"
#include "wxNode_wxValidator.h"
#include "wxNode_wxAcceleratorTable.h"
#include "wxNode_wxDC.h"
#include "wxNode_wxRegion.h"
#include "wxNode_wxVisualAttributes.h"
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
#include "wxNode_wxClassInfo.h"


/* static */ v8::Persistent<v8::FunctionTemplate> wxNode_wxWindow::s_ct;



wxNode_wxWindow::wxNode_wxWindow()
  : wxWindow()
{

}

wxNode_wxWindow::wxNode_wxWindow(wxWindow* parent, int id, wxPoint& pos, wxSize& size, long int style, const wxString& name)
  : wxWindow(parent, id, pos, size, style, name)
{

}

wxNode_wxWindow::wxNode_wxWindow(wxWindow* parent, int id, wxPoint& pos, wxSize& size, long int style)
  : wxWindow(parent, id, pos, size, style)
{

}

wxNode_wxWindow::wxNode_wxWindow(wxWindow* parent, int id, wxPoint& pos, wxSize& size)
  : wxWindow(parent, id, pos, size)
{

}

wxNode_wxWindow::wxNode_wxWindow(wxWindow* parent, int id, wxPoint& pos)
  : wxWindow(parent, id, pos)
{

}

wxNode_wxWindow::wxNode_wxWindow(wxWindow* parent, int id)
  : wxWindow(parent, id)
{

}




/*static*/ void wxNode_wxWindow::Init(v8::Handle<v8::Object> target) {
  v8::HandleScope scope;

  v8::Local<v8::FunctionTemplate> t = v8::FunctionTemplate::New(wxNodeObject::NewFunc);
  s_ct = v8::Persistent<v8::FunctionTemplate>::New(t);
  s_ct->InstanceTemplate()->SetInternalFieldCount(2);
  s_ct->SetClassName(v8::String::NewSymbol("Window"));

  NODE_SET_PROTOTYPE_METHOD(s_ct, "init", _init);
  AddMethods(s_ct);

  target->Set(v8::String::NewSymbol("Window"), s_ct->GetFunction());
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
  NODE_SET_METHOD(target, "newControlId", _NewControlId);
  NODE_SET_METHOD(target, "unreserveControlId", _UnreserveControlId);
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
  NODE_SET_METHOD(target, "findFocus", _FindFocus);
  NODE_SET_METHOD(target, "doFindFocus", _DoFindFocus);
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
  NODE_SET_METHOD(target, "findWindowById", _FindWindowById);
  NODE_SET_METHOD(target, "findWindowByName", _FindWindowByName);
  NODE_SET_METHOD(target, "findWindowByLabel", _FindWindowByLabel);
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
  NODE_SET_METHOD(target, "getCapture", _GetCapture);
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
  NODE_SET_METHOD(target, "getClassDefaultAttributes", _GetClassDefaultAttributes);
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
  NODE_SET_PROTOTYPE_METHOD(target, "getHelpTextAtPoint", _GetHelpTextAtPoint);
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
  NODE_SET_PROTOTYPE_METHOD(target, "associateHandle", _AssociateHandle);
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

/*static*/ v8::Handle<v8::Value> wxNode_wxWindow::New(const wxNode_wxWindow* obj) {
  v8::HandleScope scope;

  if(obj == NULL) {
    return scope.Close(v8::Null());
  }
  
  v8::Local<v8::FunctionTemplate> returnObjFt = v8::FunctionTemplate::New(wxNodeObject::NewFunc);
  returnObjFt->InstanceTemplate()->SetInternalFieldCount(2);
  returnObjFt->SetClassName(v8::String::NewSymbol("Window"));
  wxNode_wxWindow::AddMethods(returnObjFt);

  v8::Local<v8::Function> returnObjFn = returnObjFt->GetFunction();
  v8::Handle<v8::Value> returnObjArgs[0];
  v8::Local<v8::Object> returnObj = returnObjFn->CallAsConstructor(0, returnObjArgs)->ToObject();
  returnObj->SetPointerInInternalField(0, (void*)obj);
  NodeExEvtHandlerImpl* evtHandler = dynamic_cast<NodeExEvtHandlerImpl*>((wxNode_wxWindow*)obj);
  returnObj->SetPointerInInternalField(1, evtHandler);

  return scope.Close(returnObj);
}

/*static*/ v8::Handle<v8::Value> wxNode_wxWindow::New(const wxWindow* obj) {
  v8::HandleScope scope;

  if(obj == NULL) {
    return scope.Close(v8::Null());
  }
  
  v8::Local<v8::FunctionTemplate> returnObjFt = v8::FunctionTemplate::New(wxNodeObject::NewFunc);
  returnObjFt->InstanceTemplate()->SetInternalFieldCount(2);
  returnObjFt->SetClassName(v8::String::NewSymbol("Window"));
  wxNode_wxWindow::AddMethods(returnObjFt);

  v8::Local<v8::Function> returnObjFn = returnObjFt->GetFunction();
  v8::Handle<v8::Value> returnObjArgs[0];
  v8::Local<v8::Object> returnObj = returnObjFn->CallAsConstructor(0, returnObjArgs)->ToObject();
  returnObj->SetPointerInInternalField(0, (void*)obj);
  returnObj->SetPointerInInternalField(1, new NodeExEvtHandlerImplWrap(returnObj));

  return scope.Close(returnObj);
}

/*static*/ v8::Handle<v8::Value> wxNode_wxWindow::NewCopy(const wxWindow& obj) {
  v8::HandleScope scope;
  wxNode_wxWindow* returnVal = new wxNode_wxWindow();
  memcpy(dynamic_cast<wxWindow*>(returnVal), &obj, sizeof(wxWindow));
  return scope.Close(New(returnVal));

}

/*static*/ bool wxNode_wxWindow::AssignableFrom(const v8::Handle<v8::String>& className) {
  v8::String::AsciiValue classNameStr(className);
  return AssignableFrom(*classNameStr);
}

/*static*/ bool wxNode_wxWindow::AssignableFrom(const char* className) {
  if(!strcmp("Window", className)) { return true; }
  
  if(!strcmp("Window", className)) { return true; }

  if(!strcmp("RichTextFontPreviewCtrl", className)) { return true; }
  if(!strcmp("NavigationEnabled<wxWindow>", className)) { return true; }

  if(!strcmp("PanelBase", className)) { return true; }

  if(!strcmp("Panel", className)) { return true; }

  if(!strcmp("Scrolled<wxPanel>", className)) { return true; }

  if(!strcmp("ScrolledWindow", className)) { return true; }

  if(!strcmp("PreviewCanvas", className)) { return true; }
  if(!strcmp("HtmlWindow", className)) { return true; }
  if(!strcmp("Grid", className)) { return true; }
  if(!strcmp("WizardPage", className)) { return true; }

  if(!strcmp("WizardPageSimple", className)) { return true; }
  if(!strcmp("RichTextDialogPage", className)) { return true; }

  if(!strcmp("RichTextFontPage", className)) { return true; }
  if(!strcmp("RichTextMarginsPage", className)) { return true; }
  if(!strcmp("RichTextStylePage", className)) { return true; }
  if(!strcmp("RichTextSizePage", className)) { return true; }
  if(!strcmp("RichTextListStylePage", className)) { return true; }
  if(!strcmp("RichTextTabsPage", className)) { return true; }
  if(!strcmp("RichTextBulletsPage", className)) { return true; }
  if(!strcmp("HVScrolledWindow", className)) { return true; }
  if(!strcmp("HScrolledWindow", className)) { return true; }
  if(!strcmp("VScrolledWindow", className)) { return true; }

  if(!strcmp("SymbolListCtrl", className)) { return true; }
  if(!strcmp("VListBox", className)) { return true; }

  if(!strcmp("VListBoxComboPopup", className)) { return true; }
  if(!strcmp("HtmlListBox", className)) { return true; }

  if(!strcmp("RichTextStyleListBox", className)) { return true; }

  if(!strcmp("RichTextStyleComboPopup", className)) { return true; }
  if(!strcmp("WindowWithItems<wxHtmlListBox,wxItemContainer>", className)) { return true; }

  if(!strcmp("SimpleHtmlListBox", className)) { return true; }
  if(!strcmp("RichTextFontListBox", className)) { return true; }
  if(!strcmp("RearrangeCtrl", className)) { return true; }
  if(!strcmp("EditableListBox", className)) { return true; }
  if(!strcmp("PreviewControlBar", className)) { return true; }
  if(!strcmp("AuiMDIChildFrame", className)) { return true; }
  if(!strcmp("SplitterWindow", className)) { return true; }
  if(!strcmp("CompositeWindow<wxNavigationEnabled<wxWindow> >", className)) { return true; }

  if(!strcmp("TreeListCtrl", className)) { return true; }
  if(!strcmp("BannerWindow", className)) { return true; }
  if(!strcmp("NonOwnedWindowBase", className)) { return true; }

  if(!strcmp("NonOwnedWindow", className)) { return true; }

  if(!strcmp("NavigationEnabled<wxNonOwnedWindow>", className)) { return true; }

  if(!strcmp("TopLevelWindowBase", className)) { return true; }

  if(!strcmp("TopLevelWindowGTK", className)) { return true; }

  if(!strcmp("TopLevelWindow", className)) { return true; }

  if(!strcmp("NativeContainerWindow", className)) { return true; }
  if(!strcmp("FrameBase", className)) { return true; }

  if(!strcmp("Frame", className)) { return true; }

  if(!strcmp("PreviewFrame", className)) { return true; }
  if(!strcmp("AuiMDIParentFrame", className)) { return true; }
  if(!strcmp("DocChildFrameAny<wxFrame,wxFrame>", className)) { return true; }

  if(!strcmp("DocChildFrame", className)) { return true; }
  if(!strcmp("SplashScreen", className)) { return true; }
  if(!strcmp("HtmlHelpFrame", className)) { return true; }
  if(!strcmp("MDIChildFrameBase", className)) { return true; }

  if(!strcmp("TDIChildFrame", className)) { return true; }

  if(!strcmp("MDIChildFrame", className)) { return true; }

  if(!strcmp("DocChildFrameAny<wxMDIChildFrame,wxMDIParentFrame>", className)) { return true; }

  if(!strcmp("DocMDIChildFrame", className)) { return true; }
  if(!strcmp("DocParentFrameAny<wxFrame>", className)) { return true; }

  if(!strcmp("DocParentFrame", className)) { return true; }
  if(!strcmp("MiniFrame", className)) { return true; }

  if(!strcmp("AuiFloatingFrame", className)) { return true; }
  if(!strcmp("MDIParentFrameBase", className)) { return true; }

  if(!strcmp("MDIParentFrame", className)) { return true; }

  if(!strcmp("DocParentFrameAny<wxMDIParentFrame>", className)) { return true; }

  if(!strcmp("DocMDIParentFrame", className)) { return true; }
  if(!strcmp("DialogBase", className)) { return true; }

  if(!strcmp("Dialog", className)) { return true; }

  if(!strcmp("FontDialogBase", className)) { return true; }

  if(!strcmp("FontDialog", className)) { return true; }
  if(!strcmp("RearrangeDialog", className)) { return true; }
  if(!strcmp("DirDialogBase", className)) { return true; }

  if(!strcmp("DirDialog", className)) { return true; }
  if(!strcmp("WizardBase", className)) { return true; }

  if(!strcmp("Wizard", className)) { return true; }
  if(!strcmp("MessageDialogBase", className)) { return true; }

  if(!strcmp("MessageDialog", className)) { return true; }
  if(!strcmp("GenericMessageDialog", className)) { return true; }

  if(!strcmp("RichMessageDialogBase", className)) { return true; }

  if(!strcmp("GenericRichMessageDialog", className)) { return true; }

  if(!strcmp("RichMessageDialog", className)) { return true; }
  if(!strcmp("ColourDialog", className)) { return true; }
  if(!strcmp("HtmlHelpDialog", className)) { return true; }
  if(!strcmp("FindReplaceDialogBase", className)) { return true; }

  if(!strcmp("FindReplaceDialog", className)) { return true; }
  if(!strcmp("PrintAbortDialog", className)) { return true; }
  if(!strcmp("AnyChoiceDialog", className)) { return true; }

  if(!strcmp("SingleChoiceDialog", className)) { return true; }
  if(!strcmp("MultiChoiceDialog", className)) { return true; }
  if(!strcmp("TextEntryDialog", className)) { return true; }

  if(!strcmp("PasswordEntryDialog", className)) { return true; }
  if(!strcmp("RichTextStyleOrganiserDialog", className)) { return true; }
  if(!strcmp("PrintDialogBase", className)) { return true; }
  if(!strcmp("PageSetupDialogBase", className)) { return true; }
  if(!strcmp("SymbolPickerDialog", className)) { return true; }
  if(!strcmp("FileDialogBase", className)) { return true; }

  if(!strcmp("FileDialog", className)) { return true; }
  if(!strcmp("NumberEntryDialog", className)) { return true; }
  if(!strcmp("PropertySheetDialog", className)) { return true; }

  if(!strcmp("RichTextFormattingDialog", className)) { return true; }
  if(!strcmp("GenericProgressDialog", className)) { return true; }

  if(!strcmp("ProgressDialog", className)) { return true; }
  if(!strcmp("PopupWindowBase", className)) { return true; }

  if(!strcmp("PopupWindow", className)) { return true; }

  if(!strcmp("PopupTransientWindow", className)) { return true; }

  if(!strcmp("TipWindow", className)) { return true; }
  if(!strcmp("MDIClientWindowBase", className)) { return true; }

  if(!strcmp("MDIClientWindow", className)) { return true; }
  if(!strcmp("SplashScreenWindow", className)) { return true; }
  if(!strcmp("MenuBarBase", className)) { return true; }

  if(!strcmp("MenuBar", className)) { return true; }
  if(!strcmp("HtmlHelpWindow", className)) { return true; }
  if(!strcmp("SashWindow", className)) { return true; }

  if(!strcmp("SashLayoutWindow", className)) { return true; }
  if(!strcmp("ControlBase", className)) { return true; }

  if(!strcmp("Control", className)) { return true; }

  if(!strcmp("DateTimePickerCtrlBase", className)) { return true; }

  if(!strcmp("DatePickerCtrlBase", className)) { return true; }

  if(!strcmp("CompositeWindow<wxDatePickerCtrlBase>", className)) { return true; }

  if(!strcmp("DatePickerCtrlGeneric", className)) { return true; }

  if(!strcmp("DatePickerCtrl", className)) { return true; }
  if(!strcmp("TimePickerCtrlBase", className)) { return true; }

  if(!strcmp("NavigationEnabled<wxTimePickerCtrlBase>", className)) { return true; }

  if(!strcmp("CompositeWindow<wxNavigationEnabled<wxTimePickerCtrlBase> >", className)) { return true; }

  if(!strcmp("TimePickerCtrlGeneric", className)) { return true; }

  if(!strcmp("TimePickerCtrl", className)) { return true; }
  if(!strcmp("GaugeBase", className)) { return true; }
  if(!strcmp("ComboCtrlBase", className)) { return true; }

  if(!strcmp("GenericComboCtrl", className)) { return true; }

  if(!strcmp("ComboCtrl", className)) { return true; }

  if(!strcmp("RichTextStyleComboCtrl", className)) { return true; }
  if(!strcmp("WindowWithItems<wxComboCtrl,wxItemContainer>", className)) { return true; }

  if(!strcmp("OwnerDrawnComboBox", className)) { return true; }
  if(!strcmp("NavigationEnabled<wxControl>", className)) { return true; }

  if(!strcmp("PickerBase", className)) { return true; }

  if(!strcmp("ColourPickerCtrl", className)) { return true; }
  if(!strcmp("FontPickerCtrl", className)) { return true; }
  if(!strcmp("FileDirPickerCtrlBase", className)) { return true; }

  if(!strcmp("DirPickerCtrl", className)) { return true; }
  if(!strcmp("FilePickerCtrl", className)) { return true; }
  if(!strcmp("CompositeWindow<wxNavigationEnabled<wxControl> >", className)) { return true; }

  if(!strcmp("SearchCtrlBaseBaseClass", className)) { return true; }

  if(!strcmp("SearchCtrlBase", className)) { return true; }

  if(!strcmp("SearchCtrl", className)) { return true; }
  if(!strcmp("InfoBarBase", className)) { return true; }

  if(!strcmp("InfoBarGeneric", className)) { return true; }

  if(!strcmp("InfoBar", className)) { return true; }
  if(!strcmp("BookCtrlBase", className)) { return true; }

  if(!strcmp("Toolbook", className)) { return true; }
  if(!strcmp("NavigationEnabled<wxBookCtrlBase>", className)) { return true; }

  if(!strcmp("AuiNotebook", className)) { return true; }

  if(!strcmp("AuiMDIClientWindow", className)) { return true; }
  if(!strcmp("Choicebook", className)) { return true; }
  if(!strcmp("NotebookBase", className)) { return true; }

  if(!strcmp("Notebook", className)) { return true; }
  if(!strcmp("Treebook", className)) { return true; }
  if(!strcmp("Listbook", className)) { return true; }
  if(!strcmp("TextCtrlBase", className)) { return true; }

  if(!strcmp("TextCtrl", className)) { return true; }
  if(!strcmp("RadioBox", className)) { return true; }
  if(!strcmp("AnimationCtrlBase", className)) { return true; }

  if(!strcmp("AnimationCtrl", className)) { return true; }
  if(!strcmp("StaticBitmapBase", className)) { return true; }

  if(!strcmp("StaticBitmap", className)) { return true; }
  if(!strcmp("RichTextCtrl", className)) { return true; }
  if(!strcmp("AnyButtonBase", className)) { return true; }

  if(!strcmp("AnyButton", className)) { return true; }

  if(!strcmp("ToggleButtonBase", className)) { return true; }

  if(!strcmp("ToggleButton", className)) { return true; }

  if(!strcmp("BitmapToggleButton", className)) { return true; }
  if(!strcmp("ButtonBase", className)) { return true; }

  if(!strcmp("Button", className)) { return true; }

  if(!strcmp("BitmapButtonBase", className)) { return true; }

  if(!strcmp("BitmapButton", className)) { return true; }

  if(!strcmp("ContextHelpButton", className)) { return true; }
  if(!strcmp("GenericFileDirButton", className)) { return true; }

  if(!strcmp("GenericFileButton", className)) { return true; }

  if(!strcmp("FileButton", className)) { return true; }
  if(!strcmp("GenericDirButton", className)) { return true; }

  if(!strcmp("DirButton", className)) { return true; }
  if(!strcmp("CommandLinkButtonBase", className)) { return true; }

  if(!strcmp("GenericCommandLinkButton", className)) { return true; }

  if(!strcmp("CommandLinkButton", className)) { return true; }
  if(!strcmp("FontButton", className)) { return true; }
  if(!strcmp("ColourButton", className)) { return true; }
  if(!strcmp("StatusBarBase", className)) { return true; }

  if(!strcmp("StatusBar", className)) { return true; }
  if(!strcmp("WindowWithItems<wxControl,wxItemContainer>", className)) { return true; }

  if(!strcmp("ControlWithItemsBase", className)) { return true; }

  if(!strcmp("ControlWithItems", className)) { return true; }

  if(!strcmp("ChoiceBase", className)) { return true; }

  if(!strcmp("Choice", className)) { return true; }

  if(!strcmp("ComboBox", className)) { return true; }

  if(!strcmp("BitmapComboBox", className)) { return true; }
  if(!strcmp("DirFilterListCtrl", className)) { return true; }
  if(!strcmp("ListBoxBase", className)) { return true; }

  if(!strcmp("ListBox", className)) { return true; }

  if(!strcmp("CheckListBoxBase", className)) { return true; }
  if(!strcmp("CheckListBox", className)) { return true; }

  if(!strcmp("RearrangeList", className)) { return true; }
  if(!strcmp("ToolBarBase", className)) { return true; }

  if(!strcmp("ToolBar", className)) { return true; }
  if(!strcmp("SpinButtonBase", className)) { return true; }

  if(!strcmp("SpinButton", className)) { return true; }
  if(!strcmp("DataViewCtrlBase", className)) { return true; }

  if(!strcmp("DataViewCtrl", className)) { return true; }

  if(!strcmp("DataViewListCtrl", className)) { return true; }
  if(!strcmp("DataViewTreeCtrl", className)) { return true; }
  if(!strcmp("HeaderCtrlBase", className)) { return true; }

  if(!strcmp("HeaderCtrl", className)) { return true; }

  if(!strcmp("HeaderCtrlSimple", className)) { return true; }
  if(!strcmp("WebView", className)) { return true; }
  if(!strcmp("SliderBase", className)) { return true; }

  if(!strcmp("Slider", className)) { return true; }
  if(!strcmp("CheckBoxBase", className)) { return true; }

  if(!strcmp("CheckBox", className)) { return true; }
  if(!strcmp("CollapsiblePaneBase", className)) { return true; }

  if(!strcmp("CollapsiblePane", className)) { return true; }
  if(!strcmp("HyperlinkCtrlBase", className)) { return true; }

  if(!strcmp("GenericHyperlinkCtrl", className)) { return true; }

  if(!strcmp("HyperlinkCtrl", className)) { return true; }
  if(!strcmp("StyledTextCtrl", className)) { return true; }
  if(!strcmp("RichTextStyleListCtrl", className)) { return true; }
  if(!strcmp("StaticTextBase", className)) { return true; }

  if(!strcmp("StaticText", className)) { return true; }
  if(!strcmp("ScrollBarBase", className)) { return true; }

  if(!strcmp("ScrollBar", className)) { return true; }
  if(!strcmp("TreeCtrlBase", className)) { return true; }

  if(!strcmp("GenericTreeCtrl", className)) { return true; }

  if(!strcmp("TreeCtrl", className)) { return true; }
  if(!strcmp("GenericListCtrl", className)) { return true; }

  if(!strcmp("ListCtrl", className)) { return true; }

  if(!strcmp("ListView", className)) { return true; }
  if(!strcmp("SpinCtrlBase", className)) { return true; }

  if(!strcmp("SpinCtrlGTKBase", className)) { return true; }

  if(!strcmp("SpinCtrlDouble", className)) { return true; }
  if(!strcmp("SpinCtrl", className)) { return true; }
  if(!strcmp("Gauge", className)) { return true; }
  if(!strcmp("GtkFileCtrl", className)) { return true; }
  if(!strcmp("AuiToolBar", className)) { return true; }
  if(!strcmp("RadioButton", className)) { return true; }
  if(!strcmp("CalendarCtrlBase", className)) { return true; }

  if(!strcmp("GtkCalendarCtrl", className)) { return true; }
  if(!strcmp("GenericDirCtrl", className)) { return true; }
  if(!strcmp("StaticBoxBase", className)) { return true; }

  if(!strcmp("StaticBox", className)) { return true; }
  if(!strcmp("AuiTabCtrl", className)) { return true; }
  if(!strcmp("StaticLineBase", className)) { return true; }

  if(!strcmp("StaticLine", className)) { return true; }
  if(!strcmp("RichTextColourSwatchCtrl", className)) { return true; }


  return false;
}

/*static*/ v8::Handle<v8::Value> wxNode_wxWindow::_init(const v8::Arguments& args) {
  v8::HandleScope scope;

  
  
  /*
   * id: _21237
   */
  if(args.Length() == 0) {
    

    wxNode_wxWindow *self = new wxNode_wxWindow();
    NodeExEvtHandlerImpl* evtHandler = dynamic_cast<NodeExEvtHandlerImpl*>(self);
    self->wrap(args.This(), self, evtHandler);
    return args.This();
  }
  
  /*
   * id: _21238
   */
  if(args.Length() == 6 && (args[0]->IsNull() || (args[0]->IsObject() && wxNode_wxWindow::AssignableFrom(args[0]->ToObject()->GetConstructorName()))) && args[1]->IsNumber() && (args[2]->IsNull() || (args[2]->IsObject() && wxNode_wxPoint::AssignableFrom(args[2]->ToObject()->GetConstructorName()))) && (args[3]->IsNull() || (args[3]->IsObject() && wxNode_wxSize::AssignableFrom(args[3]->ToObject()->GetConstructorName()))) && args[4]->IsNumber() && args[5]->IsString()) {
    wxNode_wxWindow* parent = args[0]->IsNull() ? NULL : wxNodeObject::unwrap<wxNode_wxWindow>(args[0]->ToObject()); /* type: _1000 * */
    int id = (int)args[1]->ToInt32()->Value(); /* type: _8725  */
    wxNode_wxPoint* pos = args[2]->IsNull() ? NULL : wxNodeObject::unwrap<wxNode_wxPoint>(args[2]->ToObject()); /* type: _20518  */
    wxNode_wxSize* size = args[3]->IsNull() ? NULL : wxNodeObject::unwrap<wxNode_wxSize>(args[3]->ToObject()); /* type: _20628  */
    long int style = (long int)args[4]->ToInt32()->Value(); /* type: _592  */
    v8::String::AsciiValue name(args[5]->ToString()); /* type: _14975  */
    

    wxNode_wxWindow *self = new wxNode_wxWindow(parent, id, *pos, *size, style, *name);
    NodeExEvtHandlerImpl* evtHandler = dynamic_cast<NodeExEvtHandlerImpl*>(self);
    self->wrap(args.This(), self, evtHandler);
    return args.This();
  }
  
  /*
   * id: _21238
   */
  if(args.Length() == 5 && (args[0]->IsNull() || (args[0]->IsObject() && wxNode_wxWindow::AssignableFrom(args[0]->ToObject()->GetConstructorName()))) && args[1]->IsNumber() && (args[2]->IsNull() || (args[2]->IsObject() && wxNode_wxPoint::AssignableFrom(args[2]->ToObject()->GetConstructorName()))) && (args[3]->IsNull() || (args[3]->IsObject() && wxNode_wxSize::AssignableFrom(args[3]->ToObject()->GetConstructorName()))) && args[4]->IsNumber()) {
    wxNode_wxWindow* parent = args[0]->IsNull() ? NULL : wxNodeObject::unwrap<wxNode_wxWindow>(args[0]->ToObject()); /* type: _1000 * */
    int id = (int)args[1]->ToInt32()->Value(); /* type: _8725  */
    wxNode_wxPoint* pos = args[2]->IsNull() ? NULL : wxNodeObject::unwrap<wxNode_wxPoint>(args[2]->ToObject()); /* type: _20518  */
    wxNode_wxSize* size = args[3]->IsNull() ? NULL : wxNodeObject::unwrap<wxNode_wxSize>(args[3]->ToObject()); /* type: _20628  */
    long int style = (long int)args[4]->ToInt32()->Value(); /* type: _592  */
    

    wxNode_wxWindow *self = new wxNode_wxWindow(parent, id, *pos, *size, style);
    NodeExEvtHandlerImpl* evtHandler = dynamic_cast<NodeExEvtHandlerImpl*>(self);
    self->wrap(args.This(), self, evtHandler);
    return args.This();
  }
  
  /*
   * id: _21238
   */
  if(args.Length() == 4 && (args[0]->IsNull() || (args[0]->IsObject() && wxNode_wxWindow::AssignableFrom(args[0]->ToObject()->GetConstructorName()))) && args[1]->IsNumber() && (args[2]->IsNull() || (args[2]->IsObject() && wxNode_wxPoint::AssignableFrom(args[2]->ToObject()->GetConstructorName()))) && (args[3]->IsNull() || (args[3]->IsObject() && wxNode_wxSize::AssignableFrom(args[3]->ToObject()->GetConstructorName())))) {
    wxNode_wxWindow* parent = args[0]->IsNull() ? NULL : wxNodeObject::unwrap<wxNode_wxWindow>(args[0]->ToObject()); /* type: _1000 * */
    int id = (int)args[1]->ToInt32()->Value(); /* type: _8725  */
    wxNode_wxPoint* pos = args[2]->IsNull() ? NULL : wxNodeObject::unwrap<wxNode_wxPoint>(args[2]->ToObject()); /* type: _20518  */
    wxNode_wxSize* size = args[3]->IsNull() ? NULL : wxNodeObject::unwrap<wxNode_wxSize>(args[3]->ToObject()); /* type: _20628  */
    

    wxNode_wxWindow *self = new wxNode_wxWindow(parent, id, *pos, *size);
    NodeExEvtHandlerImpl* evtHandler = dynamic_cast<NodeExEvtHandlerImpl*>(self);
    self->wrap(args.This(), self, evtHandler);
    return args.This();
  }
  
  /*
   * id: _21238
   */
  if(args.Length() == 3 && (args[0]->IsNull() || (args[0]->IsObject() && wxNode_wxWindow::AssignableFrom(args[0]->ToObject()->GetConstructorName()))) && args[1]->IsNumber() && (args[2]->IsNull() || (args[2]->IsObject() && wxNode_wxPoint::AssignableFrom(args[2]->ToObject()->GetConstructorName())))) {
    wxNode_wxWindow* parent = args[0]->IsNull() ? NULL : wxNodeObject::unwrap<wxNode_wxWindow>(args[0]->ToObject()); /* type: _1000 * */
    int id = (int)args[1]->ToInt32()->Value(); /* type: _8725  */
    wxNode_wxPoint* pos = args[2]->IsNull() ? NULL : wxNodeObject::unwrap<wxNode_wxPoint>(args[2]->ToObject()); /* type: _20518  */
    

    wxNode_wxWindow *self = new wxNode_wxWindow(parent, id, *pos);
    NodeExEvtHandlerImpl* evtHandler = dynamic_cast<NodeExEvtHandlerImpl*>(self);
    self->wrap(args.This(), self, evtHandler);
    return args.This();
  }
  
  /*
   * id: _21238
   */
  if(args.Length() == 2 && (args[0]->IsNull() || (args[0]->IsObject() && wxNode_wxWindow::AssignableFrom(args[0]->ToObject()->GetConstructorName()))) && args[1]->IsNumber()) {
    wxNode_wxWindow* parent = args[0]->IsNull() ? NULL : wxNodeObject::unwrap<wxNode_wxWindow>(args[0]->ToObject()); /* type: _1000 * */
    int id = (int)args[1]->ToInt32()->Value(); /* type: _8725  */
    

    wxNode_wxWindow *self = new wxNode_wxWindow(parent, id);
    NodeExEvtHandlerImpl* evtHandler = dynamic_cast<NodeExEvtHandlerImpl*>(self);
    self->wrap(args.This(), self, evtHandler);
    return args.This();
  }
  
  

  std::ostringstream errStr;
  errStr << "Could not find matching constructor for arguments (class name: wxWindow).\n";
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
   * id: _43026
   */
  if(args.Length() == 1 && args[0]->IsBoolean()) {
    bool force = args[0]->ToBoolean()->Value(); /* type: _14830  */
    

    bool returnVal = self->Close(force);

    return scope.Close(v8::Boolean::New(returnVal));
  }
  
  /*
   * id: _43026
   */
  if(args.Length() == 0) {
    

    bool returnVal = self->Close();

    return scope.Close(v8::Boolean::New(returnVal));
  }
  

  std::ostringstream errStr;
  errStr << "Could not find matching method for arguments (method name: wxWindow::Close).\n";
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
   * id: _43027
   */
  if(args.Length() == 0) {
    

    bool returnVal = self->Destroy();

    return scope.Close(v8::Boolean::New(returnVal));
  }
  

  std::ostringstream errStr;
  errStr << "Could not find matching method for arguments (method name: wxWindow::Destroy).\n";
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
   * id: _43028
   */
  if(args.Length() == 0) {
    

    bool returnVal = self->DestroyChildren();

    return scope.Close(v8::Boolean::New(returnVal));
  }
  

  std::ostringstream errStr;
  errStr << "Could not find matching method for arguments (method name: wxWindow::DestroyChildren).\n";
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
   * id: _43029
   */
  if(args.Length() == 0) {
    

    bool returnVal = self->IsBeingDeleted();

    return scope.Close(v8::Boolean::New(returnVal));
  }
  

  std::ostringstream errStr;
  errStr << "Could not find matching method for arguments (method name: wxWindow::IsBeingDeleted).\n";
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
   * id: _43030
   */
  if(args.Length() == 1 && args[0]->IsString()) {
    v8::String::AsciiValue label(args[0]->ToString()); /* type: _14975  */
    

    self->SetLabel(*label);

    return v8::Undefined();
  }
  

  std::ostringstream errStr;
  errStr << "Could not find matching method for arguments (method name: wxWindow::SetLabel).\n";
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
   * id: _43031
   */
  if(args.Length() == 0) {
    

    wxString returnVal = self->GetLabel();

    return scope.Close(v8::String::New(returnVal.mb_str()));
  }
  

  std::ostringstream errStr;
  errStr << "Could not find matching method for arguments (method name: wxWindow::GetLabel).\n";
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
   * id: _43032
   */
  if(args.Length() == 1 && args[0]->IsString()) {
    v8::String::AsciiValue name(args[0]->ToString()); /* type: _14975  */
    

    self->SetName(*name);

    return v8::Undefined();
  }
  

  std::ostringstream errStr;
  errStr << "Could not find matching method for arguments (method name: wxWindow::SetName).\n";
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
   * id: _43033
   */
  if(args.Length() == 0) {
    

    wxString returnVal = self->GetName();

    return scope.Close(v8::String::New(returnVal.mb_str()));
  }
  

  std::ostringstream errStr;
  errStr << "Could not find matching method for arguments (method name: wxWindow::GetName).\n";
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
   * id: _43034
   */
  if(args.Length() == 1 && args[0]->IsNumber()) {
    wxWindowVariant variant = (wxWindowVariant)args[0]->ToNumber()->Value(); /* type: _10583  */
    

    self->SetWindowVariant(variant);

    return v8::Undefined();
  }
  

  std::ostringstream errStr;
  errStr << "Could not find matching method for arguments (method name: wxWindow::SetWindowVariant).\n";
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
   * id: _43035
   */
  if(args.Length() == 0) {
    

    int returnVal = (int)self->GetWindowVariant();

    return scope.Close(v8::Number::New(returnVal));
  }
  

  std::ostringstream errStr;
  errStr << "Could not find matching method for arguments (method name: wxWindow::GetWindowVariant).\n";
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
   * id: _43036
   */
  if(args.Length() == 0) {
    

    int returnVal = (int)self->GetLayoutDirection();

    return scope.Close(v8::Number::New(returnVal));
  }
  

  std::ostringstream errStr;
  errStr << "Could not find matching method for arguments (method name: wxWindow::GetLayoutDirection).\n";
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
   * id: _43037
   */
  if(args.Length() == 1 && args[0]->IsNumber()) {
    wxLayoutDirection arg0 = (wxLayoutDirection)args[0]->ToNumber()->Value(); /* type: _6401  */
    

    self->SetLayoutDirection(arg0);

    return v8::Undefined();
  }
  

  std::ostringstream errStr;
  errStr << "Could not find matching method for arguments (method name: wxWindow::SetLayoutDirection).\n";
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
   * id: _43038
   */
  if(args.Length() == 3 && args[0]->IsNumber() && args[1]->IsNumber() && args[2]->IsNumber()) {
    int x = (int)args[0]->ToInt32()->Value(); /* type: _12231  */
    int width = (int)args[1]->ToInt32()->Value(); /* type: _12231  */
    int widthTotal = (int)args[2]->ToInt32()->Value(); /* type: _12231  */
    

    int returnVal = self->AdjustForLayoutDirection(x, width, widthTotal);

    return scope.Close(v8::Number::New(returnVal));
  }
  

  std::ostringstream errStr;
  errStr << "Could not find matching method for arguments (method name: wxWindow::AdjustForLayoutDirection).\n";
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
   * id: _43039
   */
  if(args.Length() == 1 && args[0]->IsNumber()) {
    int winid = (int)args[0]->ToInt32()->Value(); /* type: _8725  */
    

    self->SetId(winid);

    return v8::Undefined();
  }
  

  std::ostringstream errStr;
  errStr << "Could not find matching method for arguments (method name: wxWindow::SetId).\n";
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
   * id: _43040
   */
  if(args.Length() == 0) {
    

    int returnVal = self->GetId();

    return scope.Close(v8::Number::New(returnVal));
  }
  

  std::ostringstream errStr;
  errStr << "Could not find matching method for arguments (method name: wxWindow::GetId).\n";
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
   * id: _43041
   */
  if(args.Length() == 1 && args[0]->IsNumber()) {
    int count = (int)args[0]->ToInt32()->Value(); /* type: _165  */
    

    int returnVal = self->NewControlId(count);

    return scope.Close(v8::Number::New(returnVal));
  }
  
  /*
   * id: _43041
   */
  if(args.Length() == 0) {
    

    int returnVal = self->NewControlId();

    return scope.Close(v8::Number::New(returnVal));
  }
  

  std::ostringstream errStr;
  errStr << "Could not find matching method for arguments (method name: wxWindow::NewControlId).\n";
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
   * id: _43042
   */
  if(args.Length() == 2 && args[0]->IsNumber() && args[1]->IsNumber()) {
    int id = (int)args[0]->ToInt32()->Value(); /* type: _8725  */
    int count = (int)args[1]->ToInt32()->Value(); /* type: _165  */
    

    self->UnreserveControlId(id, count);

    return v8::Undefined();
  }
  
  /*
   * id: _43042
   */
  if(args.Length() == 1 && args[0]->IsNumber()) {
    int id = (int)args[0]->ToInt32()->Value(); /* type: _8725  */
    

    self->UnreserveControlId(id);

    return v8::Undefined();
  }
  

  std::ostringstream errStr;
  errStr << "Could not find matching method for arguments (method name: wxWindow::UnreserveControlId).\n";
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
   * id: _43043
   */
  if(args.Length() == 5 && args[0]->IsNumber() && args[1]->IsNumber() && args[2]->IsNumber() && args[3]->IsNumber() && args[4]->IsNumber()) {
    int x = (int)args[0]->ToInt32()->Value(); /* type: _165  */
    int y = (int)args[1]->ToInt32()->Value(); /* type: _165  */
    int width = (int)args[2]->ToInt32()->Value(); /* type: _165  */
    int height = (int)args[3]->ToInt32()->Value(); /* type: _165  */
    int sizeFlags = (int)args[4]->ToInt32()->Value(); /* type: _165  */
    

    self->SetSize(x, y, width, height, sizeFlags);

    return v8::Undefined();
  }
  
  /*
   * id: _43043
   */
  if(args.Length() == 4 && args[0]->IsNumber() && args[1]->IsNumber() && args[2]->IsNumber() && args[3]->IsNumber()) {
    int x = (int)args[0]->ToInt32()->Value(); /* type: _165  */
    int y = (int)args[1]->ToInt32()->Value(); /* type: _165  */
    int width = (int)args[2]->ToInt32()->Value(); /* type: _165  */
    int height = (int)args[3]->ToInt32()->Value(); /* type: _165  */
    

    self->SetSize(x, y, width, height);

    return v8::Undefined();
  }
  
  /*
   * id: _43044
   */
  if(args.Length() == 2 && args[0]->IsNumber() && args[1]->IsNumber()) {
    int width = (int)args[0]->ToInt32()->Value(); /* type: _165  */
    int height = (int)args[1]->ToInt32()->Value(); /* type: _165  */
    

    self->SetSize(width, height);

    return v8::Undefined();
  }
  
  /*
   * id: _43045
   */
  if(args.Length() == 1 && (args[0]->IsNull() || (args[0]->IsObject() && wxNode_wxSize::AssignableFrom(args[0]->ToObject()->GetConstructorName())))) {
    wxNode_wxSize* size = args[0]->IsNull() ? NULL : wxNodeObject::unwrap<wxNode_wxSize>(args[0]->ToObject()); /* type: _20628  */
    

    self->SetSize(*size);

    return v8::Undefined();
  }
  
  /*
   * id: _43046
   */
  if(args.Length() == 2 && (args[0]->IsNull() || (args[0]->IsObject() && wxNode_wxRect::AssignableFrom(args[0]->ToObject()->GetConstructorName()))) && args[1]->IsNumber()) {
    wxNode_wxRect* rect = args[0]->IsNull() ? NULL : wxNodeObject::unwrap<wxNode_wxRect>(args[0]->ToObject()); /* type: _24885  */
    int sizeFlags = (int)args[1]->ToInt32()->Value(); /* type: _165  */
    

    self->SetSize(*rect, sizeFlags);

    return v8::Undefined();
  }
  
  /*
   * id: _43046
   */
  if(args.Length() == 1 && (args[0]->IsNull() || (args[0]->IsObject() && wxNode_wxRect::AssignableFrom(args[0]->ToObject()->GetConstructorName())))) {
    wxNode_wxRect* rect = args[0]->IsNull() ? NULL : wxNodeObject::unwrap<wxNode_wxRect>(args[0]->ToObject()); /* type: _24885  */
    

    self->SetSize(*rect);

    return v8::Undefined();
  }
  

  std::ostringstream errStr;
  errStr << "Could not find matching method for arguments (method name: wxWindow::SetSize).\n";
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
   * id: _43047
   */
  if(args.Length() == 3 && args[0]->IsNumber() && args[1]->IsNumber() && args[2]->IsNumber()) {
    int x = (int)args[0]->ToInt32()->Value(); /* type: _165  */
    int y = (int)args[1]->ToInt32()->Value(); /* type: _165  */
    int flags = (int)args[2]->ToInt32()->Value(); /* type: _165  */
    

    self->Move(x, y, flags);

    return v8::Undefined();
  }
  
  /*
   * id: _43047
   */
  if(args.Length() == 2 && args[0]->IsNumber() && args[1]->IsNumber()) {
    int x = (int)args[0]->ToInt32()->Value(); /* type: _165  */
    int y = (int)args[1]->ToInt32()->Value(); /* type: _165  */
    

    self->Move(x, y);

    return v8::Undefined();
  }
  
  /*
   * id: _43048
   */
  if(args.Length() == 2 && (args[0]->IsNull() || (args[0]->IsObject() && wxNode_wxPoint::AssignableFrom(args[0]->ToObject()->GetConstructorName()))) && args[1]->IsNumber()) {
    wxNode_wxPoint* pt = args[0]->IsNull() ? NULL : wxNodeObject::unwrap<wxNode_wxPoint>(args[0]->ToObject()); /* type: _20518  */
    int flags = (int)args[1]->ToInt32()->Value(); /* type: _165  */
    

    self->Move(*pt, flags);

    return v8::Undefined();
  }
  
  /*
   * id: _43048
   */
  if(args.Length() == 1 && (args[0]->IsNull() || (args[0]->IsObject() && wxNode_wxPoint::AssignableFrom(args[0]->ToObject()->GetConstructorName())))) {
    wxNode_wxPoint* pt = args[0]->IsNull() ? NULL : wxNodeObject::unwrap<wxNode_wxPoint>(args[0]->ToObject()); /* type: _20518  */
    

    self->Move(*pt);

    return v8::Undefined();
  }
  

  std::ostringstream errStr;
  errStr << "Could not find matching method for arguments (method name: wxWindow::Move).\n";
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
   * id: _43049
   */
  if(args.Length() == 1 && (args[0]->IsNull() || (args[0]->IsObject() && wxNode_wxPoint::AssignableFrom(args[0]->ToObject()->GetConstructorName())))) {
    wxNode_wxPoint* pt = args[0]->IsNull() ? NULL : wxNodeObject::unwrap<wxNode_wxPoint>(args[0]->ToObject()); /* type: _20518  */
    

    self->SetPosition(*pt);

    return v8::Undefined();
  }
  

  std::ostringstream errStr;
  errStr << "Could not find matching method for arguments (method name: wxWindow::SetPosition).\n";
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
   * id: _43050
   */
  if(args.Length() == 0) {
    

    self->Raise();

    return v8::Undefined();
  }
  

  std::ostringstream errStr;
  errStr << "Could not find matching method for arguments (method name: wxWindow::Raise).\n";
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
   * id: _43051
   */
  if(args.Length() == 0) {
    

    self->Lower();

    return v8::Undefined();
  }
  

  std::ostringstream errStr;
  errStr << "Could not find matching method for arguments (method name: wxWindow::Lower).\n";
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
   * id: _43052
   */
  if(args.Length() == 2 && args[0]->IsNumber() && args[1]->IsNumber()) {
    int width = (int)args[0]->ToInt32()->Value(); /* type: _165  */
    int height = (int)args[1]->ToInt32()->Value(); /* type: _165  */
    

    self->SetClientSize(width, height);

    return v8::Undefined();
  }
  
  /*
   * id: _43053
   */
  if(args.Length() == 1 && (args[0]->IsNull() || (args[0]->IsObject() && wxNode_wxSize::AssignableFrom(args[0]->ToObject()->GetConstructorName())))) {
    wxNode_wxSize* size = args[0]->IsNull() ? NULL : wxNodeObject::unwrap<wxNode_wxSize>(args[0]->ToObject()); /* type: _20628  */
    

    self->SetClientSize(*size);

    return v8::Undefined();
  }
  
  /*
   * id: _43054
   */
  if(args.Length() == 1 && (args[0]->IsNull() || (args[0]->IsObject() && wxNode_wxRect::AssignableFrom(args[0]->ToObject()->GetConstructorName())))) {
    wxNode_wxRect* rect = args[0]->IsNull() ? NULL : wxNodeObject::unwrap<wxNode_wxRect>(args[0]->ToObject()); /* type: _24885  */
    

    self->SetClientSize(*rect);

    return v8::Undefined();
  }
  

  std::ostringstream errStr;
  errStr << "Could not find matching method for arguments (method name: wxWindow::SetClientSize).\n";
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
   * id: _43055
   */
  if(args.Length() == 2 && false && false) {
    int x; /* type: _16655 * */
    int y; /* type: _16655 * */
    

    self->GetPosition(&x, &y);

    return v8::Undefined();
  }
  
  /*
   * id: _43056
   */
  if(args.Length() == 0) {
    

    wxPoint returnVal = self->GetPosition();

    return scope.Close(wxNode_wxPoint::NewCopy(returnVal));
  }
  

  std::ostringstream errStr;
  errStr << "Could not find matching method for arguments (method name: wxWindow::GetPosition).\n";
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
   * id: _43057
   */
  if(args.Length() == 2 && false && false) {
    int x; /* type: _16655 * */
    int y; /* type: _16655 * */
    

    self->GetScreenPosition(&x, &y);

    return v8::Undefined();
  }
  
  /*
   * id: _43058
   */
  if(args.Length() == 0) {
    

    wxPoint returnVal = self->GetScreenPosition();

    return scope.Close(wxNode_wxPoint::NewCopy(returnVal));
  }
  

  std::ostringstream errStr;
  errStr << "Could not find matching method for arguments (method name: wxWindow::GetScreenPosition).\n";
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
   * id: _43059
   */
  if(args.Length() == 2 && false && false) {
    int w; /* type: _16655 * */
    int h; /* type: _16655 * */
    

    self->GetSize(&w, &h);

    return v8::Undefined();
  }
  
  /*
   * id: _43060
   */
  if(args.Length() == 0) {
    

    wxSize returnVal = self->GetSize();

    return scope.Close(wxNode_wxSize::NewCopy(returnVal));
  }
  

  std::ostringstream errStr;
  errStr << "Could not find matching method for arguments (method name: wxWindow::GetSize).\n";
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
   * id: _43061
   */
  if(args.Length() == 2 && false && false) {
    int w; /* type: _16655 * */
    int h; /* type: _16655 * */
    

    self->GetClientSize(&w, &h);

    return v8::Undefined();
  }
  
  /*
   * id: _43062
   */
  if(args.Length() == 0) {
    

    wxSize returnVal = self->GetClientSize();

    return scope.Close(wxNode_wxSize::NewCopy(returnVal));
  }
  

  std::ostringstream errStr;
  errStr << "Could not find matching method for arguments (method name: wxWindow::GetClientSize).\n";
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
   * id: _43063
   */
  if(args.Length() == 0) {
    

    wxRect returnVal = self->GetRect();

    return scope.Close(wxNode_wxRect::NewCopy(returnVal));
  }
  

  std::ostringstream errStr;
  errStr << "Could not find matching method for arguments (method name: wxWindow::GetRect).\n";
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
   * id: _43064
   */
  if(args.Length() == 0) {
    

    wxRect returnVal = self->GetScreenRect();

    return scope.Close(wxNode_wxRect::NewCopy(returnVal));
  }
  

  std::ostringstream errStr;
  errStr << "Could not find matching method for arguments (method name: wxWindow::GetScreenRect).\n";
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
   * id: _43065
   */
  if(args.Length() == 0) {
    

    wxPoint returnVal = self->GetClientAreaOrigin();

    return scope.Close(wxNode_wxPoint::NewCopy(returnVal));
  }
  

  std::ostringstream errStr;
  errStr << "Could not find matching method for arguments (method name: wxWindow::GetClientAreaOrigin).\n";
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
   * id: _43066
   */
  if(args.Length() == 0) {
    

    wxRect returnVal = self->GetClientRect();

    return scope.Close(wxNode_wxRect::NewCopy(returnVal));
  }
  

  std::ostringstream errStr;
  errStr << "Could not find matching method for arguments (method name: wxWindow::GetClientRect).\n";
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
   * id: _43067
   */
  if(args.Length() == 1 && (args[0]->IsNull() || (args[0]->IsObject() && wxNode_wxSize::AssignableFrom(args[0]->ToObject()->GetConstructorName())))) {
    wxNode_wxSize* size = args[0]->IsNull() ? NULL : wxNodeObject::unwrap<wxNode_wxSize>(args[0]->ToObject()); /* type: _20628  */
    

    wxSize returnVal = self->ClientToWindowSize(*size);

    return scope.Close(wxNode_wxSize::NewCopy(returnVal));
  }
  

  std::ostringstream errStr;
  errStr << "Could not find matching method for arguments (method name: wxWindow::ClientToWindowSize).\n";
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
   * id: _43068
   */
  if(args.Length() == 1 && (args[0]->IsNull() || (args[0]->IsObject() && wxNode_wxSize::AssignableFrom(args[0]->ToObject()->GetConstructorName())))) {
    wxNode_wxSize* size = args[0]->IsNull() ? NULL : wxNodeObject::unwrap<wxNode_wxSize>(args[0]->ToObject()); /* type: _20628  */
    

    wxSize returnVal = self->WindowToClientSize(*size);

    return scope.Close(wxNode_wxSize::NewCopy(returnVal));
  }
  

  std::ostringstream errStr;
  errStr << "Could not find matching method for arguments (method name: wxWindow::WindowToClientSize).\n";
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
   * id: _43069
   */
  if(args.Length() == 0) {
    

    wxSize returnVal = self->GetBestSize();

    return scope.Close(wxNode_wxSize::NewCopy(returnVal));
  }
  
  /*
   * id: _43070
   */
  if(args.Length() == 2 && false && false) {
    int w; /* type: _16655 * */
    int h; /* type: _16655 * */
    

    self->GetBestSize(&w, &h);

    return v8::Undefined();
  }
  

  std::ostringstream errStr;
  errStr << "Could not find matching method for arguments (method name: wxWindow::GetBestSize).\n";
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
   * id: _43071
   */
  if(args.Length() == 1 && (args[0]->IsNull() || (args[0]->IsObject() && wxNode_wxScrollHelper::AssignableFrom(args[0]->ToObject()->GetConstructorName())))) {
    wxNode_wxScrollHelper* sh = args[0]->IsNull() ? NULL : wxNodeObject::unwrap<wxNode_wxScrollHelper>(args[0]->ToObject()); /* type: _66186 * */
    

    self->SetScrollHelper(sh);

    return v8::Undefined();
  }
  

  std::ostringstream errStr;
  errStr << "Could not find matching method for arguments (method name: wxWindow::SetScrollHelper).\n";
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
   * id: _43072
   */
  if(args.Length() == 0) {
    

    wxScrollHelper* returnVal = self->GetScrollHelper();

    return scope.Close(wxNode_wxScrollHelper::New(returnVal));
  }
  

  std::ostringstream errStr;
  errStr << "Could not find matching method for arguments (method name: wxWindow::GetScrollHelper).\n";
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
   * id: _43073
   */
  if(args.Length() == 0) {
    

    self->InvalidateBestSize();

    return v8::Undefined();
  }
  

  std::ostringstream errStr;
  errStr << "Could not find matching method for arguments (method name: wxWindow::InvalidateBestSize).\n";
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
   * id: _43074
   */
  if(args.Length() == 1 && (args[0]->IsNull() || (args[0]->IsObject() && wxNode_wxSize::AssignableFrom(args[0]->ToObject()->GetConstructorName())))) {
    wxNode_wxSize* size = args[0]->IsNull() ? NULL : wxNodeObject::unwrap<wxNode_wxSize>(args[0]->ToObject()); /* type: _20628  */
    

    self->CacheBestSize(*size);

    return v8::Undefined();
  }
  

  std::ostringstream errStr;
  errStr << "Could not find matching method for arguments (method name: wxWindow::CacheBestSize).\n";
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
   * id: _43075
   */
  if(args.Length() == 0) {
    

    wxSize returnVal = self->GetEffectiveMinSize();

    return scope.Close(wxNode_wxSize::NewCopy(returnVal));
  }
  

  std::ostringstream errStr;
  errStr << "Could not find matching method for arguments (method name: wxWindow::GetEffectiveMinSize).\n";
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
   * id: _43078
   */
  if(args.Length() == 1 && (args[0]->IsNull() || (args[0]->IsObject() && wxNode_wxSize::AssignableFrom(args[0]->ToObject()->GetConstructorName())))) {
    wxNode_wxSize* size = args[0]->IsNull() ? NULL : wxNodeObject::unwrap<wxNode_wxSize>(args[0]->ToObject()); /* type: _20628  */
    

    self->SetInitialSize(*size);

    return v8::Undefined();
  }
  
  /*
   * id: _43078
   */
  if(args.Length() == 0) {
    

    self->SetInitialSize();

    return v8::Undefined();
  }
  

  std::ostringstream errStr;
  errStr << "Could not find matching method for arguments (method name: wxWindow::SetInitialSize).\n";
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
   * id: _43080
   */
  if(args.Length() == 1 && args[0]->IsNumber()) {
    int dir = (int)args[0]->ToInt32()->Value(); /* type: _165  */
    

    self->Centre(dir);

    return v8::Undefined();
  }
  
  /*
   * id: _43080
   */
  if(args.Length() == 0) {
    

    self->Centre();

    return v8::Undefined();
  }
  

  std::ostringstream errStr;
  errStr << "Could not find matching method for arguments (method name: wxWindow::Centre).\n";
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
   * id: _43081
   */
  if(args.Length() == 1 && args[0]->IsNumber()) {
    int dir = (int)args[0]->ToInt32()->Value(); /* type: _165  */
    

    self->Center(dir);

    return v8::Undefined();
  }
  
  /*
   * id: _43081
   */
  if(args.Length() == 0) {
    

    self->Center();

    return v8::Undefined();
  }
  

  std::ostringstream errStr;
  errStr << "Could not find matching method for arguments (method name: wxWindow::Center).\n";
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
   * id: _43082
   */
  if(args.Length() == 1 && args[0]->IsNumber()) {
    int dir = (int)args[0]->ToInt32()->Value(); /* type: _165  */
    

    self->CentreOnParent(dir);

    return v8::Undefined();
  }
  
  /*
   * id: _43082
   */
  if(args.Length() == 0) {
    

    self->CentreOnParent();

    return v8::Undefined();
  }
  

  std::ostringstream errStr;
  errStr << "Could not find matching method for arguments (method name: wxWindow::CentreOnParent).\n";
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
   * id: _43083
   */
  if(args.Length() == 1 && args[0]->IsNumber()) {
    int dir = (int)args[0]->ToInt32()->Value(); /* type: _165  */
    

    self->CenterOnParent(dir);

    return v8::Undefined();
  }
  
  /*
   * id: _43083
   */
  if(args.Length() == 0) {
    

    self->CenterOnParent();

    return v8::Undefined();
  }
  

  std::ostringstream errStr;
  errStr << "Could not find matching method for arguments (method name: wxWindow::CenterOnParent).\n";
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
   * id: _43084
   */
  if(args.Length() == 0) {
    

    self->Fit();

    return v8::Undefined();
  }
  

  std::ostringstream errStr;
  errStr << "Could not find matching method for arguments (method name: wxWindow::Fit).\n";
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
   * id: _43085
   */
  if(args.Length() == 0) {
    

    self->FitInside();

    return v8::Undefined();
  }
  

  std::ostringstream errStr;
  errStr << "Could not find matching method for arguments (method name: wxWindow::FitInside).\n";
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
   * id: _43086
   */
  if(args.Length() == 6 && args[0]->IsNumber() && args[1]->IsNumber() && args[2]->IsNumber() && args[3]->IsNumber() && args[4]->IsNumber() && args[5]->IsNumber()) {
    int minW = (int)args[0]->ToInt32()->Value(); /* type: _165  */
    int minH = (int)args[1]->ToInt32()->Value(); /* type: _165  */
    int maxW = (int)args[2]->ToInt32()->Value(); /* type: _165  */
    int maxH = (int)args[3]->ToInt32()->Value(); /* type: _165  */
    int incW = (int)args[4]->ToInt32()->Value(); /* type: _165  */
    int incH = (int)args[5]->ToInt32()->Value(); /* type: _165  */
    

    self->SetSizeHints(minW, minH, maxW, maxH, incW, incH);

    return v8::Undefined();
  }
  
  /*
   * id: _43086
   */
  if(args.Length() == 5 && args[0]->IsNumber() && args[1]->IsNumber() && args[2]->IsNumber() && args[3]->IsNumber() && args[4]->IsNumber()) {
    int minW = (int)args[0]->ToInt32()->Value(); /* type: _165  */
    int minH = (int)args[1]->ToInt32()->Value(); /* type: _165  */
    int maxW = (int)args[2]->ToInt32()->Value(); /* type: _165  */
    int maxH = (int)args[3]->ToInt32()->Value(); /* type: _165  */
    int incW = (int)args[4]->ToInt32()->Value(); /* type: _165  */
    

    self->SetSizeHints(minW, minH, maxW, maxH, incW);

    return v8::Undefined();
  }
  
  /*
   * id: _43086
   */
  if(args.Length() == 4 && args[0]->IsNumber() && args[1]->IsNumber() && args[2]->IsNumber() && args[3]->IsNumber()) {
    int minW = (int)args[0]->ToInt32()->Value(); /* type: _165  */
    int minH = (int)args[1]->ToInt32()->Value(); /* type: _165  */
    int maxW = (int)args[2]->ToInt32()->Value(); /* type: _165  */
    int maxH = (int)args[3]->ToInt32()->Value(); /* type: _165  */
    

    self->SetSizeHints(minW, minH, maxW, maxH);

    return v8::Undefined();
  }
  
  /*
   * id: _43086
   */
  if(args.Length() == 3 && args[0]->IsNumber() && args[1]->IsNumber() && args[2]->IsNumber()) {
    int minW = (int)args[0]->ToInt32()->Value(); /* type: _165  */
    int minH = (int)args[1]->ToInt32()->Value(); /* type: _165  */
    int maxW = (int)args[2]->ToInt32()->Value(); /* type: _165  */
    

    self->SetSizeHints(minW, minH, maxW);

    return v8::Undefined();
  }
  
  /*
   * id: _43086
   */
  if(args.Length() == 2 && args[0]->IsNumber() && args[1]->IsNumber()) {
    int minW = (int)args[0]->ToInt32()->Value(); /* type: _165  */
    int minH = (int)args[1]->ToInt32()->Value(); /* type: _165  */
    

    self->SetSizeHints(minW, minH);

    return v8::Undefined();
  }
  
  /*
   * id: _43087
   */
  if(args.Length() == 3 && (args[0]->IsNull() || (args[0]->IsObject() && wxNode_wxSize::AssignableFrom(args[0]->ToObject()->GetConstructorName()))) && (args[1]->IsNull() || (args[1]->IsObject() && wxNode_wxSize::AssignableFrom(args[1]->ToObject()->GetConstructorName()))) && (args[2]->IsNull() || (args[2]->IsObject() && wxNode_wxSize::AssignableFrom(args[2]->ToObject()->GetConstructorName())))) {
    wxNode_wxSize* minSize = args[0]->IsNull() ? NULL : wxNodeObject::unwrap<wxNode_wxSize>(args[0]->ToObject()); /* type: _20628  */
    wxNode_wxSize* maxSize = args[1]->IsNull() ? NULL : wxNodeObject::unwrap<wxNode_wxSize>(args[1]->ToObject()); /* type: _20628  */
    wxNode_wxSize* incSize = args[2]->IsNull() ? NULL : wxNodeObject::unwrap<wxNode_wxSize>(args[2]->ToObject()); /* type: _20628  */
    

    self->SetSizeHints(*minSize, *maxSize, *incSize);

    return v8::Undefined();
  }
  
  /*
   * id: _43087
   */
  if(args.Length() == 2 && (args[0]->IsNull() || (args[0]->IsObject() && wxNode_wxSize::AssignableFrom(args[0]->ToObject()->GetConstructorName()))) && (args[1]->IsNull() || (args[1]->IsObject() && wxNode_wxSize::AssignableFrom(args[1]->ToObject()->GetConstructorName())))) {
    wxNode_wxSize* minSize = args[0]->IsNull() ? NULL : wxNodeObject::unwrap<wxNode_wxSize>(args[0]->ToObject()); /* type: _20628  */
    wxNode_wxSize* maxSize = args[1]->IsNull() ? NULL : wxNodeObject::unwrap<wxNode_wxSize>(args[1]->ToObject()); /* type: _20628  */
    

    self->SetSizeHints(*minSize, *maxSize);

    return v8::Undefined();
  }
  
  /*
   * id: _43087
   */
  if(args.Length() == 1 && (args[0]->IsNull() || (args[0]->IsObject() && wxNode_wxSize::AssignableFrom(args[0]->ToObject()->GetConstructorName())))) {
    wxNode_wxSize* minSize = args[0]->IsNull() ? NULL : wxNodeObject::unwrap<wxNode_wxSize>(args[0]->ToObject()); /* type: _20628  */
    

    self->SetSizeHints(*minSize);

    return v8::Undefined();
  }
  

  std::ostringstream errStr;
  errStr << "Could not find matching method for arguments (method name: wxWindow::SetSizeHints).\n";
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
   * id: _43090
   */
  if(args.Length() == 1 && (args[0]->IsNull() || (args[0]->IsObject() && wxNode_wxSize::AssignableFrom(args[0]->ToObject()->GetConstructorName())))) {
    wxNode_wxSize* minSize = args[0]->IsNull() ? NULL : wxNodeObject::unwrap<wxNode_wxSize>(args[0]->ToObject()); /* type: _20628  */
    

    self->SetMinSize(*minSize);

    return v8::Undefined();
  }
  

  std::ostringstream errStr;
  errStr << "Could not find matching method for arguments (method name: wxWindow::SetMinSize).\n";
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
   * id: _43091
   */
  if(args.Length() == 1 && (args[0]->IsNull() || (args[0]->IsObject() && wxNode_wxSize::AssignableFrom(args[0]->ToObject()->GetConstructorName())))) {
    wxNode_wxSize* maxSize = args[0]->IsNull() ? NULL : wxNodeObject::unwrap<wxNode_wxSize>(args[0]->ToObject()); /* type: _20628  */
    

    self->SetMaxSize(*maxSize);

    return v8::Undefined();
  }
  

  std::ostringstream errStr;
  errStr << "Could not find matching method for arguments (method name: wxWindow::SetMaxSize).\n";
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
   * id: _43092
   */
  if(args.Length() == 1 && (args[0]->IsNull() || (args[0]->IsObject() && wxNode_wxSize::AssignableFrom(args[0]->ToObject()->GetConstructorName())))) {
    wxNode_wxSize* size = args[0]->IsNull() ? NULL : wxNodeObject::unwrap<wxNode_wxSize>(args[0]->ToObject()); /* type: _20628  */
    

    self->SetMinClientSize(*size);

    return v8::Undefined();
  }
  

  std::ostringstream errStr;
  errStr << "Could not find matching method for arguments (method name: wxWindow::SetMinClientSize).\n";
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
   * id: _43093
   */
  if(args.Length() == 1 && (args[0]->IsNull() || (args[0]->IsObject() && wxNode_wxSize::AssignableFrom(args[0]->ToObject()->GetConstructorName())))) {
    wxNode_wxSize* size = args[0]->IsNull() ? NULL : wxNodeObject::unwrap<wxNode_wxSize>(args[0]->ToObject()); /* type: _20628  */
    

    self->SetMaxClientSize(*size);

    return v8::Undefined();
  }
  

  std::ostringstream errStr;
  errStr << "Could not find matching method for arguments (method name: wxWindow::SetMaxClientSize).\n";
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
   * id: _43094
   */
  if(args.Length() == 0) {
    

    wxSize returnVal = self->GetMinSize();

    return scope.Close(wxNode_wxSize::NewCopy(returnVal));
  }
  

  std::ostringstream errStr;
  errStr << "Could not find matching method for arguments (method name: wxWindow::GetMinSize).\n";
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
   * id: _43095
   */
  if(args.Length() == 0) {
    

    wxSize returnVal = self->GetMaxSize();

    return scope.Close(wxNode_wxSize::NewCopy(returnVal));
  }
  

  std::ostringstream errStr;
  errStr << "Could not find matching method for arguments (method name: wxWindow::GetMaxSize).\n";
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
   * id: _43096
   */
  if(args.Length() == 0) {
    

    wxSize returnVal = self->GetMinClientSize();

    return scope.Close(wxNode_wxSize::NewCopy(returnVal));
  }
  

  std::ostringstream errStr;
  errStr << "Could not find matching method for arguments (method name: wxWindow::GetMinClientSize).\n";
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
   * id: _43097
   */
  if(args.Length() == 0) {
    

    wxSize returnVal = self->GetMaxClientSize();

    return scope.Close(wxNode_wxSize::NewCopy(returnVal));
  }
  

  std::ostringstream errStr;
  errStr << "Could not find matching method for arguments (method name: wxWindow::GetMaxClientSize).\n";
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
   * id: _43098
   */
  if(args.Length() == 0) {
    

    int returnVal = self->GetMinWidth();

    return scope.Close(v8::Number::New(returnVal));
  }
  

  std::ostringstream errStr;
  errStr << "Could not find matching method for arguments (method name: wxWindow::GetMinWidth).\n";
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
   * id: _43099
   */
  if(args.Length() == 0) {
    

    int returnVal = self->GetMinHeight();

    return scope.Close(v8::Number::New(returnVal));
  }
  

  std::ostringstream errStr;
  errStr << "Could not find matching method for arguments (method name: wxWindow::GetMinHeight).\n";
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
   * id: _43100
   */
  if(args.Length() == 0) {
    

    int returnVal = self->GetMaxWidth();

    return scope.Close(v8::Number::New(returnVal));
  }
  

  std::ostringstream errStr;
  errStr << "Could not find matching method for arguments (method name: wxWindow::GetMaxWidth).\n";
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
   * id: _43101
   */
  if(args.Length() == 0) {
    

    int returnVal = self->GetMaxHeight();

    return scope.Close(v8::Number::New(returnVal));
  }
  

  std::ostringstream errStr;
  errStr << "Could not find matching method for arguments (method name: wxWindow::GetMaxHeight).\n";
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
   * id: _43102
   */
  if(args.Length() == 1 && (args[0]->IsNull() || (args[0]->IsObject() && wxNode_wxSize::AssignableFrom(args[0]->ToObject()->GetConstructorName())))) {
    wxNode_wxSize* size = args[0]->IsNull() ? NULL : wxNodeObject::unwrap<wxNode_wxSize>(args[0]->ToObject()); /* type: _20628  */
    

    self->SetVirtualSize(*size);

    return v8::Undefined();
  }
  
  /*
   * id: _43103
   */
  if(args.Length() == 2 && args[0]->IsNumber() && args[1]->IsNumber()) {
    int x = (int)args[0]->ToInt32()->Value(); /* type: _165  */
    int y = (int)args[1]->ToInt32()->Value(); /* type: _165  */
    

    self->SetVirtualSize(x, y);

    return v8::Undefined();
  }
  

  std::ostringstream errStr;
  errStr << "Could not find matching method for arguments (method name: wxWindow::SetVirtualSize).\n";
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
   * id: _43104
   */
  if(args.Length() == 0) {
    

    wxSize returnVal = self->GetVirtualSize();

    return scope.Close(wxNode_wxSize::NewCopy(returnVal));
  }
  
  /*
   * id: _43105
   */
  if(args.Length() == 2 && false && false) {
    int x; /* type: _16655 * */
    int y; /* type: _16655 * */
    

    self->GetVirtualSize(&x, &y);

    return v8::Undefined();
  }
  

  std::ostringstream errStr;
  errStr << "Could not find matching method for arguments (method name: wxWindow::GetVirtualSize).\n";
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
   * id: _43106
   */
  if(args.Length() == 2 && args[0]->IsNumber() && args[1]->IsNumber()) {
    int x = (int)args[0]->ToInt32()->Value(); /* type: _165  */
    int y = (int)args[1]->ToInt32()->Value(); /* type: _165  */
    

    self->DoSetVirtualSize(x, y);

    return v8::Undefined();
  }
  

  std::ostringstream errStr;
  errStr << "Could not find matching method for arguments (method name: wxWindow::DoSetVirtualSize).\n";
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
   * id: _43107
   */
  if(args.Length() == 0) {
    

    wxSize returnVal = self->DoGetVirtualSize();

    return scope.Close(wxNode_wxSize::NewCopy(returnVal));
  }
  

  std::ostringstream errStr;
  errStr << "Could not find matching method for arguments (method name: wxWindow::DoGetVirtualSize).\n";
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
   * id: _43108
   */
  if(args.Length() == 0) {
    

    wxSize returnVal = self->GetBestVirtualSize();

    return scope.Close(wxNode_wxSize::NewCopy(returnVal));
  }
  

  std::ostringstream errStr;
  errStr << "Could not find matching method for arguments (method name: wxWindow::GetBestVirtualSize).\n";
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
   * id: _43109
   */
  if(args.Length() == 0) {
    

    wxSize returnVal = self->GetWindowBorderSize();

    return scope.Close(wxNode_wxSize::NewCopy(returnVal));
  }
  

  std::ostringstream errStr;
  errStr << "Could not find matching method for arguments (method name: wxWindow::GetWindowBorderSize).\n";
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
   * id: _43110
   */
  if(args.Length() == 3 && args[0]->IsNumber() && args[1]->IsNumber() && args[2]->IsNumber()) {
    int direction = (int)args[0]->ToInt32()->Value(); /* type: _165  */
    int size = (int)args[1]->ToInt32()->Value(); /* type: _165  */
    int availableOtherDir = (int)args[2]->ToInt32()->Value(); /* type: _165  */
    

    bool returnVal = self->InformFirstDirection(direction, size, availableOtherDir);

    return scope.Close(v8::Boolean::New(returnVal));
  }
  

  std::ostringstream errStr;
  errStr << "Could not find matching method for arguments (method name: wxWindow::InformFirstDirection).\n";
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
   * id: _43111
   */
  if(args.Length() == 1 && args[0]->IsNumber()) {
    int flags = (int)args[0]->ToInt32()->Value(); /* type: _165  */
    

    self->SendSizeEvent(flags);

    return v8::Undefined();
  }
  
  /*
   * id: _43111
   */
  if(args.Length() == 0) {
    

    self->SendSizeEvent();

    return v8::Undefined();
  }
  

  std::ostringstream errStr;
  errStr << "Could not find matching method for arguments (method name: wxWindow::SendSizeEvent).\n";
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
   * id: _43112
   */
  if(args.Length() == 1 && args[0]->IsNumber()) {
    int flags = (int)args[0]->ToInt32()->Value(); /* type: _165  */
    

    self->SendSizeEventToParent(flags);

    return v8::Undefined();
  }
  
  /*
   * id: _43112
   */
  if(args.Length() == 0) {
    

    self->SendSizeEventToParent();

    return v8::Undefined();
  }
  

  std::ostringstream errStr;
  errStr << "Could not find matching method for arguments (method name: wxWindow::SendSizeEventToParent).\n";
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
   * id: _43113
   */
  if(args.Length() == 0) {
    

    self->PostSizeEvent();

    return v8::Undefined();
  }
  

  std::ostringstream errStr;
  errStr << "Could not find matching method for arguments (method name: wxWindow::PostSizeEvent).\n";
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
   * id: _43114
   */
  if(args.Length() == 0) {
    

    self->PostSizeEventToParent();

    return v8::Undefined();
  }
  

  std::ostringstream errStr;
  errStr << "Could not find matching method for arguments (method name: wxWindow::PostSizeEventToParent).\n";
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
   * id: _43115
   */
  if(args.Length() == 1 && args[0]->IsBoolean()) {
    bool show = args[0]->ToBoolean()->Value(); /* type: _14830  */
    

    bool returnVal = self->Show(show);

    return scope.Close(v8::Boolean::New(returnVal));
  }
  
  /*
   * id: _43115
   */
  if(args.Length() == 0) {
    

    bool returnVal = self->Show();

    return scope.Close(v8::Boolean::New(returnVal));
  }
  

  std::ostringstream errStr;
  errStr << "Could not find matching method for arguments (method name: wxWindow::Show).\n";
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
   * id: _43116
   */
  if(args.Length() == 0) {
    

    bool returnVal = self->Hide();

    return scope.Close(v8::Boolean::New(returnVal));
  }
  

  std::ostringstream errStr;
  errStr << "Could not find matching method for arguments (method name: wxWindow::Hide).\n";
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
   * id: _43117
   */
  if(args.Length() == 2 && args[0]->IsNumber() && args[1]->IsNumber()) {
    wxShowEffect arg0 = (wxShowEffect)args[0]->ToNumber()->Value(); /* type: _4531  */
    unsigned int arg1 = (unsigned int)args[1]->ToInt32()->Value(); /* type: _44  */
    

    bool returnVal = self->ShowWithEffect(arg0, arg1);

    return scope.Close(v8::Boolean::New(returnVal));
  }
  
  /*
   * id: _43117
   */
  if(args.Length() == 1 && args[0]->IsNumber()) {
    wxShowEffect arg0 = (wxShowEffect)args[0]->ToNumber()->Value(); /* type: _4531  */
    

    bool returnVal = self->ShowWithEffect(arg0);

    return scope.Close(v8::Boolean::New(returnVal));
  }
  

  std::ostringstream errStr;
  errStr << "Could not find matching method for arguments (method name: wxWindow::ShowWithEffect).\n";
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
   * id: _43118
   */
  if(args.Length() == 2 && args[0]->IsNumber() && args[1]->IsNumber()) {
    wxShowEffect arg0 = (wxShowEffect)args[0]->ToNumber()->Value(); /* type: _4531  */
    unsigned int arg1 = (unsigned int)args[1]->ToInt32()->Value(); /* type: _44  */
    

    bool returnVal = self->HideWithEffect(arg0, arg1);

    return scope.Close(v8::Boolean::New(returnVal));
  }
  
  /*
   * id: _43118
   */
  if(args.Length() == 1 && args[0]->IsNumber()) {
    wxShowEffect arg0 = (wxShowEffect)args[0]->ToNumber()->Value(); /* type: _4531  */
    

    bool returnVal = self->HideWithEffect(arg0);

    return scope.Close(v8::Boolean::New(returnVal));
  }
  

  std::ostringstream errStr;
  errStr << "Could not find matching method for arguments (method name: wxWindow::HideWithEffect).\n";
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
   * id: _43119
   */
  if(args.Length() == 1 && args[0]->IsBoolean()) {
    bool enable = args[0]->ToBoolean()->Value(); /* type: _14830  */
    

    bool returnVal = self->Enable(enable);

    return scope.Close(v8::Boolean::New(returnVal));
  }
  
  /*
   * id: _43119
   */
  if(args.Length() == 0) {
    

    bool returnVal = self->Enable();

    return scope.Close(v8::Boolean::New(returnVal));
  }
  

  std::ostringstream errStr;
  errStr << "Could not find matching method for arguments (method name: wxWindow::Enable).\n";
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
   * id: _43120
   */
  if(args.Length() == 0) {
    

    bool returnVal = self->Disable();

    return scope.Close(v8::Boolean::New(returnVal));
  }
  

  std::ostringstream errStr;
  errStr << "Could not find matching method for arguments (method name: wxWindow::Disable).\n";
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
   * id: _43121
   */
  if(args.Length() == 0) {
    

    bool returnVal = self->IsShown();

    return scope.Close(v8::Boolean::New(returnVal));
  }
  

  std::ostringstream errStr;
  errStr << "Could not find matching method for arguments (method name: wxWindow::IsShown).\n";
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
   * id: _43122
   */
  if(args.Length() == 0) {
    

    bool returnVal = self->IsEnabled();

    return scope.Close(v8::Boolean::New(returnVal));
  }
  

  std::ostringstream errStr;
  errStr << "Could not find matching method for arguments (method name: wxWindow::IsEnabled).\n";
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
   * id: _43123
   */
  if(args.Length() == 0) {
    

    bool returnVal = self->IsThisEnabled();

    return scope.Close(v8::Boolean::New(returnVal));
  }
  

  std::ostringstream errStr;
  errStr << "Could not find matching method for arguments (method name: wxWindow::IsThisEnabled).\n";
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
   * id: _43124
   */
  if(args.Length() == 0) {
    

    bool returnVal = self->IsShownOnScreen();

    return scope.Close(v8::Boolean::New(returnVal));
  }
  

  std::ostringstream errStr;
  errStr << "Could not find matching method for arguments (method name: wxWindow::IsShownOnScreen).\n";
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
   * id: _43125
   */
  if(args.Length() == 1 && args[0]->IsNumber()) {
    long int style = (long int)args[0]->ToInt32()->Value(); /* type: _592  */
    

    self->SetWindowStyleFlag(style);

    return v8::Undefined();
  }
  

  std::ostringstream errStr;
  errStr << "Could not find matching method for arguments (method name: wxWindow::SetWindowStyleFlag).\n";
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
   * id: _43126
   */
  if(args.Length() == 0) {
    

    int returnVal = self->GetWindowStyleFlag();

    return scope.Close(v8::Number::New(returnVal));
  }
  

  std::ostringstream errStr;
  errStr << "Could not find matching method for arguments (method name: wxWindow::GetWindowStyleFlag).\n";
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
   * id: _43127
   */
  if(args.Length() == 1 && args[0]->IsNumber()) {
    long int style = (long int)args[0]->ToInt32()->Value(); /* type: _592  */
    

    self->SetWindowStyle(style);

    return v8::Undefined();
  }
  

  std::ostringstream errStr;
  errStr << "Could not find matching method for arguments (method name: wxWindow::SetWindowStyle).\n";
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
   * id: _43128
   */
  if(args.Length() == 0) {
    

    int returnVal = self->GetWindowStyle();

    return scope.Close(v8::Number::New(returnVal));
  }
  

  std::ostringstream errStr;
  errStr << "Could not find matching method for arguments (method name: wxWindow::GetWindowStyle).\n";
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
   * id: _43129
   */
  if(args.Length() == 1 && args[0]->IsNumber()) {
    int flag = (int)args[0]->ToInt32()->Value(); /* type: _165  */
    

    bool returnVal = self->HasFlag(flag);

    return scope.Close(v8::Boolean::New(returnVal));
  }
  

  std::ostringstream errStr;
  errStr << "Could not find matching method for arguments (method name: wxWindow::HasFlag).\n";
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
   * id: _43130
   */
  if(args.Length() == 0) {
    

    bool returnVal = self->IsRetained();

    return scope.Close(v8::Boolean::New(returnVal));
  }
  

  std::ostringstream errStr;
  errStr << "Could not find matching method for arguments (method name: wxWindow::IsRetained).\n";
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
   * id: _43131
   */
  if(args.Length() == 1 && args[0]->IsNumber()) {
    int flag = (int)args[0]->ToInt32()->Value(); /* type: _165  */
    

    bool returnVal = self->ToggleWindowStyle(flag);

    return scope.Close(v8::Boolean::New(returnVal));
  }
  

  std::ostringstream errStr;
  errStr << "Could not find matching method for arguments (method name: wxWindow::ToggleWindowStyle).\n";
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
   * id: _43132
   */
  if(args.Length() == 1 && args[0]->IsNumber()) {
    long int exStyle = (long int)args[0]->ToInt32()->Value(); /* type: _592  */
    

    self->SetExtraStyle(exStyle);

    return v8::Undefined();
  }
  

  std::ostringstream errStr;
  errStr << "Could not find matching method for arguments (method name: wxWindow::SetExtraStyle).\n";
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
   * id: _43133
   */
  if(args.Length() == 0) {
    

    int returnVal = self->GetExtraStyle();

    return scope.Close(v8::Number::New(returnVal));
  }
  

  std::ostringstream errStr;
  errStr << "Could not find matching method for arguments (method name: wxWindow::GetExtraStyle).\n";
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
   * id: _43134
   */
  if(args.Length() == 1 && args[0]->IsNumber()) {
    int exFlag = (int)args[0]->ToInt32()->Value(); /* type: _165  */
    

    bool returnVal = self->HasExtraStyle(exFlag);

    return scope.Close(v8::Boolean::New(returnVal));
  }
  

  std::ostringstream errStr;
  errStr << "Could not find matching method for arguments (method name: wxWindow::HasExtraStyle).\n";
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
   * id: _43135
   */
  if(args.Length() == 1 && args[0]->IsBoolean()) {
    bool modal = args[0]->ToBoolean()->Value(); /* type: _14830  */
    

    self->MakeModal(modal);

    return v8::Undefined();
  }
  
  /*
   * id: _43135
   */
  if(args.Length() == 0) {
    

    self->MakeModal();

    return v8::Undefined();
  }
  

  std::ostringstream errStr;
  errStr << "Could not find matching method for arguments (method name: wxWindow::MakeModal).\n";
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
   * id: _43136
   */
  if(args.Length() == 1 && args[0]->IsBoolean()) {
    bool enableTheme = args[0]->ToBoolean()->Value(); /* type: _14830  */
    

    self->SetThemeEnabled(enableTheme);

    return v8::Undefined();
  }
  

  std::ostringstream errStr;
  errStr << "Could not find matching method for arguments (method name: wxWindow::SetThemeEnabled).\n";
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
   * id: _43137
   */
  if(args.Length() == 0) {
    

    bool returnVal = self->GetThemeEnabled();

    return scope.Close(v8::Boolean::New(returnVal));
  }
  

  std::ostringstream errStr;
  errStr << "Could not find matching method for arguments (method name: wxWindow::GetThemeEnabled).\n";
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
   * id: _43138
   */
  if(args.Length() == 0) {
    

    self->SetFocus();

    return v8::Undefined();
  }
  

  std::ostringstream errStr;
  errStr << "Could not find matching method for arguments (method name: wxWindow::SetFocus).\n";
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
   * id: _43139
   */
  if(args.Length() == 0) {
    

    self->SetFocusFromKbd();

    return v8::Undefined();
  }
  

  std::ostringstream errStr;
  errStr << "Could not find matching method for arguments (method name: wxWindow::SetFocusFromKbd).\n";
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
   * id: _43140
   */
  if(args.Length() == 0) {
    

    const wxWindow* returnVal = self->FindFocus();

    return scope.Close(wxNode_wxWindow::New(returnVal));
  }
  

  std::ostringstream errStr;
  errStr << "Could not find matching method for arguments (method name: wxWindow::FindFocus).\n";
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
   * id: _43141
   */
  if(args.Length() == 0) {
    

    const wxWindow* returnVal = self->DoFindFocus();

    return scope.Close(wxNode_wxWindow::New(returnVal));
  }
  

  std::ostringstream errStr;
  errStr << "Could not find matching method for arguments (method name: wxWindow::DoFindFocus).\n";
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
   * id: _43142
   */
  if(args.Length() == 0) {
    

    bool returnVal = self->HasFocus();

    return scope.Close(v8::Boolean::New(returnVal));
  }
  

  std::ostringstream errStr;
  errStr << "Could not find matching method for arguments (method name: wxWindow::HasFocus).\n";
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
   * id: _43143
   */
  if(args.Length() == 0) {
    

    bool returnVal = self->AcceptsFocus();

    return scope.Close(v8::Boolean::New(returnVal));
  }
  

  std::ostringstream errStr;
  errStr << "Could not find matching method for arguments (method name: wxWindow::AcceptsFocus).\n";
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
   * id: _43144
   */
  if(args.Length() == 0) {
    

    bool returnVal = self->AcceptsFocusRecursively();

    return scope.Close(v8::Boolean::New(returnVal));
  }
  

  std::ostringstream errStr;
  errStr << "Could not find matching method for arguments (method name: wxWindow::AcceptsFocusRecursively).\n";
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
   * id: _43145
   */
  if(args.Length() == 0) {
    

    bool returnVal = self->AcceptsFocusFromKeyboard();

    return scope.Close(v8::Boolean::New(returnVal));
  }
  

  std::ostringstream errStr;
  errStr << "Could not find matching method for arguments (method name: wxWindow::AcceptsFocusFromKeyboard).\n";
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
   * id: _43146
   */
  if(args.Length() == 0) {
    

    bool returnVal = self->CanBeFocused();

    return scope.Close(v8::Boolean::New(returnVal));
  }
  

  std::ostringstream errStr;
  errStr << "Could not find matching method for arguments (method name: wxWindow::CanBeFocused).\n";
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
   * id: _43147
   */
  if(args.Length() == 0) {
    

    bool returnVal = self->IsFocusable();

    return scope.Close(v8::Boolean::New(returnVal));
  }
  

  std::ostringstream errStr;
  errStr << "Could not find matching method for arguments (method name: wxWindow::IsFocusable).\n";
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
   * id: _43148
   */
  if(args.Length() == 0) {
    

    bool returnVal = self->CanAcceptFocus();

    return scope.Close(v8::Boolean::New(returnVal));
  }
  

  std::ostringstream errStr;
  errStr << "Could not find matching method for arguments (method name: wxWindow::CanAcceptFocus).\n";
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
   * id: _43149
   */
  if(args.Length() == 0) {
    

    bool returnVal = self->CanAcceptFocusFromKeyboard();

    return scope.Close(v8::Boolean::New(returnVal));
  }
  

  std::ostringstream errStr;
  errStr << "Could not find matching method for arguments (method name: wxWindow::CanAcceptFocusFromKeyboard).\n";
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
   * id: _43150
   */
  if(args.Length() == 1 && args[0]->IsBoolean()) {
    bool arg0 = args[0]->ToBoolean()->Value(); /* type: _14830  */
    

    self->SetCanFocus(arg0);

    return v8::Undefined();
  }
  

  std::ostringstream errStr;
  errStr << "Could not find matching method for arguments (method name: wxWindow::SetCanFocus).\n";
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
   * id: _43151
   */
  if(args.Length() == 1 && args[0]->IsNumber()) {
    int flags = (int)args[0]->ToInt32()->Value(); /* type: _165  */
    

    bool returnVal = self->NavigateIn(flags);

    return scope.Close(v8::Boolean::New(returnVal));
  }
  
  /*
   * id: _43151
   */
  if(args.Length() == 0) {
    

    bool returnVal = self->NavigateIn();

    return scope.Close(v8::Boolean::New(returnVal));
  }
  

  std::ostringstream errStr;
  errStr << "Could not find matching method for arguments (method name: wxWindow::NavigateIn).\n";
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
   * id: _43152
   */
  if(args.Length() == 1 && args[0]->IsNumber()) {
    int flags = (int)args[0]->ToInt32()->Value(); /* type: _165  */
    

    bool returnVal = self->Navigate(flags);

    return scope.Close(v8::Boolean::New(returnVal));
  }
  
  /*
   * id: _43152
   */
  if(args.Length() == 0) {
    

    bool returnVal = self->Navigate();

    return scope.Close(v8::Boolean::New(returnVal));
  }
  

  std::ostringstream errStr;
  errStr << "Could not find matching method for arguments (method name: wxWindow::Navigate).\n";
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
   * id: _43153
   */
  if(args.Length() == 1 && (args[0]->IsNull() || (args[0]->IsObject() && wxNode_wxKeyEvent::AssignableFrom(args[0]->ToObject()->GetConstructorName())))) {
    wxNode_wxKeyEvent* event = args[0]->IsNull() ? NULL : wxNodeObject::unwrap<wxNode_wxKeyEvent>(args[0]->ToObject()); /* type: _61743  */
    

    bool returnVal = self->HandleAsNavigationKey(*event);

    return scope.Close(v8::Boolean::New(returnVal));
  }
  

  std::ostringstream errStr;
  errStr << "Could not find matching method for arguments (method name: wxWindow::HandleAsNavigationKey).\n";
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
   * id: _43154
   */
  if(args.Length() == 1 && (args[0]->IsNull() || (args[0]->IsObject() && wxNode_wxWindow::AssignableFrom(args[0]->ToObject()->GetConstructorName())))) {
    wxNode_wxWindow* win = args[0]->IsNull() ? NULL : wxNodeObject::unwrap<wxNode_wxWindow>(args[0]->ToObject()); /* type: _1000 * */
    

    self->MoveBeforeInTabOrder(win);

    return v8::Undefined();
  }
  

  std::ostringstream errStr;
  errStr << "Could not find matching method for arguments (method name: wxWindow::MoveBeforeInTabOrder).\n";
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
   * id: _43155
   */
  if(args.Length() == 1 && (args[0]->IsNull() || (args[0]->IsObject() && wxNode_wxWindow::AssignableFrom(args[0]->ToObject()->GetConstructorName())))) {
    wxNode_wxWindow* win = args[0]->IsNull() ? NULL : wxNodeObject::unwrap<wxNode_wxWindow>(args[0]->ToObject()); /* type: _1000 * */
    

    self->MoveAfterInTabOrder(win);

    return v8::Undefined();
  }
  

  std::ostringstream errStr;
  errStr << "Could not find matching method for arguments (method name: wxWindow::MoveAfterInTabOrder).\n";
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
   * id: _43156
   */
  if(args.Length() == 0) {
    

    wxWindowList returnVal = self->GetChildren();

    return scope.Close(wxNode_wxWindowList::NewCopy(returnVal));
  }
  
  /*
   * id: _43157
   */
  if(args.Length() == 0) {
    

    wxWindowList returnVal = self->GetChildren();

    return scope.Close(wxNode_wxWindowList::NewCopy(returnVal));
  }
  

  std::ostringstream errStr;
  errStr << "Could not find matching method for arguments (method name: wxWindow::GetChildren).\n";
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
   * id: _43158
   */
  if(args.Length() == 0) {
    

    wxWindowList returnVal = self->GetWindowChildren();

    return scope.Close(wxNode_wxWindowList::NewCopy(returnVal));
  }
  

  std::ostringstream errStr;
  errStr << "Could not find matching method for arguments (method name: wxWindow::GetWindowChildren).\n";
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
   * id: _43159
   */
  if(args.Length() == 0) {
    

    const wxWindow* returnVal = self->GetPrevSibling();

    return scope.Close(wxNode_wxWindow::New(returnVal));
  }
  

  std::ostringstream errStr;
  errStr << "Could not find matching method for arguments (method name: wxWindow::GetPrevSibling).\n";
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
   * id: _43160
   */
  if(args.Length() == 0) {
    

    const wxWindow* returnVal = self->GetNextSibling();

    return scope.Close(wxNode_wxWindow::New(returnVal));
  }
  

  std::ostringstream errStr;
  errStr << "Could not find matching method for arguments (method name: wxWindow::GetNextSibling).\n";
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
   * id: _43161
   */
  if(args.Length() == 0) {
    

    const wxWindow* returnVal = self->GetParent();

    return scope.Close(wxNode_wxWindow::New(returnVal));
  }
  

  std::ostringstream errStr;
  errStr << "Could not find matching method for arguments (method name: wxWindow::GetParent).\n";
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
   * id: _43162
   */
  if(args.Length() == 0) {
    

    const wxWindow* returnVal = self->GetGrandParent();

    return scope.Close(wxNode_wxWindow::New(returnVal));
  }
  

  std::ostringstream errStr;
  errStr << "Could not find matching method for arguments (method name: wxWindow::GetGrandParent).\n";
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
   * id: _43163
   */
  if(args.Length() == 0) {
    

    bool returnVal = self->IsTopLevel();

    return scope.Close(v8::Boolean::New(returnVal));
  }
  

  std::ostringstream errStr;
  errStr << "Could not find matching method for arguments (method name: wxWindow::IsTopLevel).\n";
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
   * id: _43164
   */
  if(args.Length() == 1 && (args[0]->IsNull() || (args[0]->IsObject() && wxNode_wxWindow::AssignableFrom(args[0]->ToObject()->GetConstructorName())))) {
    wxNode_wxWindow* parent = args[0]->IsNull() ? NULL : wxNodeObject::unwrap<wxNode_wxWindow>(args[0]->ToObject()); /* type: _51898 * */
    

    self->SetParent(parent);

    return v8::Undefined();
  }
  

  std::ostringstream errStr;
  errStr << "Could not find matching method for arguments (method name: wxWindow::SetParent).\n";
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
   * id: _43165
   */
  if(args.Length() == 1 && (args[0]->IsNull() || (args[0]->IsObject() && wxNode_wxWindow::AssignableFrom(args[0]->ToObject()->GetConstructorName())))) {
    wxNode_wxWindow* newParent = args[0]->IsNull() ? NULL : wxNodeObject::unwrap<wxNode_wxWindow>(args[0]->ToObject()); /* type: _51898 * */
    

    bool returnVal = self->Reparent(newParent);

    return scope.Close(v8::Boolean::New(returnVal));
  }
  

  std::ostringstream errStr;
  errStr << "Could not find matching method for arguments (method name: wxWindow::Reparent).\n";
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
   * id: _43166
   */
  if(args.Length() == 1 && (args[0]->IsNull() || (args[0]->IsObject() && wxNode_wxWindow::AssignableFrom(args[0]->ToObject()->GetConstructorName())))) {
    wxNode_wxWindow* child = args[0]->IsNull() ? NULL : wxNodeObject::unwrap<wxNode_wxWindow>(args[0]->ToObject()); /* type: _51898 * */
    

    self->AddChild(child);

    return v8::Undefined();
  }
  

  std::ostringstream errStr;
  errStr << "Could not find matching method for arguments (method name: wxWindow::AddChild).\n";
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
   * id: _43167
   */
  if(args.Length() == 1 && (args[0]->IsNull() || (args[0]->IsObject() && wxNode_wxWindow::AssignableFrom(args[0]->ToObject()->GetConstructorName())))) {
    wxNode_wxWindow* child = args[0]->IsNull() ? NULL : wxNodeObject::unwrap<wxNode_wxWindow>(args[0]->ToObject()); /* type: _51898 * */
    

    self->RemoveChild(child);

    return v8::Undefined();
  }
  

  std::ostringstream errStr;
  errStr << "Could not find matching method for arguments (method name: wxWindow::RemoveChild).\n";
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
   * id: _43168
   */
  if(args.Length() == 1 && (args[0]->IsNull() || (args[0]->IsObject() && wxNode_wxWindow::AssignableFrom(args[0]->ToObject()->GetConstructorName())))) {
    wxNode_wxWindow* arg0 = args[0]->IsNull() ? NULL : wxNodeObject::unwrap<wxNode_wxWindow>(args[0]->ToObject()); /* type: _62278 * */
    

    bool returnVal = self->IsClientAreaChild(arg0);

    return scope.Close(v8::Boolean::New(returnVal));
  }
  

  std::ostringstream errStr;
  errStr << "Could not find matching method for arguments (method name: wxWindow::IsClientAreaChild).\n";
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
   * id: _43169
   */
  if(args.Length() == 1 && args[0]->IsNumber()) {
    long int winid = (long int)args[0]->ToInt32()->Value(); /* type: _592  */
    

    const wxWindow* returnVal = self->FindWindow(winid);

    return scope.Close(wxNode_wxWindow::New(returnVal));
  }
  
  /*
   * id: _43170
   */
  if(args.Length() == 1 && args[0]->IsString()) {
    v8::String::AsciiValue name(args[0]->ToString()); /* type: _14975  */
    

    const wxWindow* returnVal = self->FindWindow(*name);

    return scope.Close(wxNode_wxWindow::New(returnVal));
  }
  

  std::ostringstream errStr;
  errStr << "Could not find matching method for arguments (method name: wxWindow::FindWindow).\n";
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
   * id: _43171
   */
  if(args.Length() == 2 && args[0]->IsNumber() && (args[1]->IsNull() || (args[1]->IsObject() && wxNode_wxWindow::AssignableFrom(args[1]->ToObject()->GetConstructorName())))) {
    long int winid = (long int)args[0]->ToInt32()->Value(); /* type: _592  */
    wxNode_wxWindow* parent = args[1]->IsNull() ? NULL : wxNodeObject::unwrap<wxNode_wxWindow>(args[1]->ToObject()); /* type: _62278 * */
    

    const wxWindow* returnVal = self->FindWindowById(winid, parent);

    return scope.Close(wxNode_wxWindow::New(returnVal));
  }
  
  /*
   * id: _43171
   */
  if(args.Length() == 1 && args[0]->IsNumber()) {
    long int winid = (long int)args[0]->ToInt32()->Value(); /* type: _592  */
    

    const wxWindow* returnVal = self->FindWindowById(winid);

    return scope.Close(wxNode_wxWindow::New(returnVal));
  }
  

  std::ostringstream errStr;
  errStr << "Could not find matching method for arguments (method name: wxWindow::FindWindowById).\n";
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
   * id: _43172
   */
  if(args.Length() == 2 && args[0]->IsString() && (args[1]->IsNull() || (args[1]->IsObject() && wxNode_wxWindow::AssignableFrom(args[1]->ToObject()->GetConstructorName())))) {
    v8::String::AsciiValue name(args[0]->ToString()); /* type: _14975  */
    wxNode_wxWindow* parent = args[1]->IsNull() ? NULL : wxNodeObject::unwrap<wxNode_wxWindow>(args[1]->ToObject()); /* type: _62278 * */
    

    const wxWindow* returnVal = self->FindWindowByName(*name, parent);

    return scope.Close(wxNode_wxWindow::New(returnVal));
  }
  
  /*
   * id: _43172
   */
  if(args.Length() == 1 && args[0]->IsString()) {
    v8::String::AsciiValue name(args[0]->ToString()); /* type: _14975  */
    

    const wxWindow* returnVal = self->FindWindowByName(*name);

    return scope.Close(wxNode_wxWindow::New(returnVal));
  }
  

  std::ostringstream errStr;
  errStr << "Could not find matching method for arguments (method name: wxWindow::FindWindowByName).\n";
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
   * id: _43173
   */
  if(args.Length() == 2 && args[0]->IsString() && (args[1]->IsNull() || (args[1]->IsObject() && wxNode_wxWindow::AssignableFrom(args[1]->ToObject()->GetConstructorName())))) {
    v8::String::AsciiValue label(args[0]->ToString()); /* type: _14975  */
    wxNode_wxWindow* parent = args[1]->IsNull() ? NULL : wxNodeObject::unwrap<wxNode_wxWindow>(args[1]->ToObject()); /* type: _62278 * */
    

    const wxWindow* returnVal = self->FindWindowByLabel(*label, parent);

    return scope.Close(wxNode_wxWindow::New(returnVal));
  }
  
  /*
   * id: _43173
   */
  if(args.Length() == 1 && args[0]->IsString()) {
    v8::String::AsciiValue label(args[0]->ToString()); /* type: _14975  */
    

    const wxWindow* returnVal = self->FindWindowByLabel(*label);

    return scope.Close(wxNode_wxWindow::New(returnVal));
  }
  

  std::ostringstream errStr;
  errStr << "Could not find matching method for arguments (method name: wxWindow::FindWindowByLabel).\n";
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
   * id: _43174
   */
  if(args.Length() == 0) {
    

    wxEvtHandler* returnVal = self->GetEventHandler();

    return scope.Close(wxNode_wxEvtHandler::New(returnVal));
  }
  

  std::ostringstream errStr;
  errStr << "Could not find matching method for arguments (method name: wxWindow::GetEventHandler).\n";
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
   * id: _43175
   */
  if(args.Length() == 1 && (args[0]->IsNull() || (args[0]->IsObject() && wxNode_wxEvtHandler::AssignableFrom(args[0]->ToObject()->GetConstructorName())))) {
    wxNode_wxEvtHandler* handler = args[0]->IsNull() ? NULL : wxNodeObject::unwrap<wxNode_wxEvtHandler>(args[0]->ToObject()); /* type: _1680 * */
    

    self->SetEventHandler(handler);

    return v8::Undefined();
  }
  

  std::ostringstream errStr;
  errStr << "Could not find matching method for arguments (method name: wxWindow::SetEventHandler).\n";
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
   * id: _43176
   */
  if(args.Length() == 1 && (args[0]->IsNull() || (args[0]->IsObject() && wxNode_wxEvtHandler::AssignableFrom(args[0]->ToObject()->GetConstructorName())))) {
    wxNode_wxEvtHandler* handler = args[0]->IsNull() ? NULL : wxNodeObject::unwrap<wxNode_wxEvtHandler>(args[0]->ToObject()); /* type: _1680 * */
    

    self->PushEventHandler(handler);

    return v8::Undefined();
  }
  

  std::ostringstream errStr;
  errStr << "Could not find matching method for arguments (method name: wxWindow::PushEventHandler).\n";
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
   * id: _43177
   */
  if(args.Length() == 1 && args[0]->IsBoolean()) {
    bool deleteHandler = args[0]->ToBoolean()->Value(); /* type: _14830  */
    

    wxEvtHandler* returnVal = self->PopEventHandler(deleteHandler);

    return scope.Close(wxNode_wxEvtHandler::New(returnVal));
  }
  
  /*
   * id: _43177
   */
  if(args.Length() == 0) {
    

    wxEvtHandler* returnVal = self->PopEventHandler();

    return scope.Close(wxNode_wxEvtHandler::New(returnVal));
  }
  

  std::ostringstream errStr;
  errStr << "Could not find matching method for arguments (method name: wxWindow::PopEventHandler).\n";
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
   * id: _43178
   */
  if(args.Length() == 1 && (args[0]->IsNull() || (args[0]->IsObject() && wxNode_wxEvtHandler::AssignableFrom(args[0]->ToObject()->GetConstructorName())))) {
    wxNode_wxEvtHandler* handler = args[0]->IsNull() ? NULL : wxNodeObject::unwrap<wxNode_wxEvtHandler>(args[0]->ToObject()); /* type: _1680 * */
    

    bool returnVal = self->RemoveEventHandler(handler);

    return scope.Close(v8::Boolean::New(returnVal));
  }
  

  std::ostringstream errStr;
  errStr << "Could not find matching method for arguments (method name: wxWindow::RemoveEventHandler).\n";
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
   * id: _43179
   */
  if(args.Length() == 1 && (args[0]->IsNull() || (args[0]->IsObject() && wxNode_wxEvent::AssignableFrom(args[0]->ToObject()->GetConstructorName())))) {
    wxNode_wxEvent* event = args[0]->IsNull() ? NULL : wxNodeObject::unwrap<wxNode_wxEvent>(args[0]->ToObject()); /* type: _59253  */
    

    bool returnVal = self->ProcessWindowEvent(*event);

    return scope.Close(v8::Boolean::New(returnVal));
  }
  

  std::ostringstream errStr;
  errStr << "Could not find matching method for arguments (method name: wxWindow::ProcessWindowEvent).\n";
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
   * id: _43180
   */
  if(args.Length() == 1 && (args[0]->IsNull() || (args[0]->IsObject() && wxNode_wxEvent::AssignableFrom(args[0]->ToObject()->GetConstructorName())))) {
    wxNode_wxEvent* event = args[0]->IsNull() ? NULL : wxNodeObject::unwrap<wxNode_wxEvent>(args[0]->ToObject()); /* type: _59253  */
    

    bool returnVal = self->ProcessWindowEventLocally(*event);

    return scope.Close(v8::Boolean::New(returnVal));
  }
  

  std::ostringstream errStr;
  errStr << "Could not find matching method for arguments (method name: wxWindow::ProcessWindowEventLocally).\n";
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
   * id: _43181
   */
  if(args.Length() == 1 && (args[0]->IsNull() || (args[0]->IsObject() && wxNode_wxEvent::AssignableFrom(args[0]->ToObject()->GetConstructorName())))) {
    wxNode_wxEvent* event = args[0]->IsNull() ? NULL : wxNodeObject::unwrap<wxNode_wxEvent>(args[0]->ToObject()); /* type: _59253  */
    

    bool returnVal = self->HandleWindowEvent(*event);

    return scope.Close(v8::Boolean::New(returnVal));
  }
  

  std::ostringstream errStr;
  errStr << "Could not find matching method for arguments (method name: wxWindow::HandleWindowEvent).\n";
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
   * id: _43182
   */
  if(args.Length() == 1 && (args[0]->IsNull() || (args[0]->IsObject() && wxNode_wxEvtHandler::AssignableFrom(args[0]->ToObject()->GetConstructorName())))) {
    wxNode_wxEvtHandler* handler = args[0]->IsNull() ? NULL : wxNodeObject::unwrap<wxNode_wxEvtHandler>(args[0]->ToObject()); /* type: _1680 * */
    

    self->SetNextHandler(handler);

    return v8::Undefined();
  }
  

  std::ostringstream errStr;
  errStr << "Could not find matching method for arguments (method name: wxWindow::SetNextHandler).\n";
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
   * id: _43183
   */
  if(args.Length() == 1 && (args[0]->IsNull() || (args[0]->IsObject() && wxNode_wxEvtHandler::AssignableFrom(args[0]->ToObject()->GetConstructorName())))) {
    wxNode_wxEvtHandler* handler = args[0]->IsNull() ? NULL : wxNodeObject::unwrap<wxNode_wxEvtHandler>(args[0]->ToObject()); /* type: _1680 * */
    

    self->SetPreviousHandler(handler);

    return v8::Undefined();
  }
  

  std::ostringstream errStr;
  errStr << "Could not find matching method for arguments (method name: wxWindow::SetPreviousHandler).\n";
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
   * id: _43184
   */
  if(args.Length() == 1 && (args[0]->IsNull() || (args[0]->IsObject() && wxNode_wxValidator::AssignableFrom(args[0]->ToObject()->GetConstructorName())))) {
    wxNode_wxValidator* validator = args[0]->IsNull() ? NULL : wxNodeObject::unwrap<wxNode_wxValidator>(args[0]->ToObject()); /* type: _59247  */
    

    self->SetValidator(*validator);

    return v8::Undefined();
  }
  

  std::ostringstream errStr;
  errStr << "Could not find matching method for arguments (method name: wxWindow::SetValidator).\n";
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
   * id: _43185
   */
  if(args.Length() == 0) {
    

    const wxValidator* returnVal = self->GetValidator();

    return scope.Close(wxNode_wxValidator::New(returnVal));
  }
  

  std::ostringstream errStr;
  errStr << "Could not find matching method for arguments (method name: wxWindow::GetValidator).\n";
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
   * id: _43186
   */
  if(args.Length() == 0) {
    

    bool returnVal = self->Validate();

    return scope.Close(v8::Boolean::New(returnVal));
  }
  

  std::ostringstream errStr;
  errStr << "Could not find matching method for arguments (method name: wxWindow::Validate).\n";
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
   * id: _43187
   */
  if(args.Length() == 0) {
    

    bool returnVal = self->TransferDataToWindow();

    return scope.Close(v8::Boolean::New(returnVal));
  }
  

  std::ostringstream errStr;
  errStr << "Could not find matching method for arguments (method name: wxWindow::TransferDataToWindow).\n";
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
   * id: _43188
   */
  if(args.Length() == 0) {
    

    bool returnVal = self->TransferDataFromWindow();

    return scope.Close(v8::Boolean::New(returnVal));
  }
  

  std::ostringstream errStr;
  errStr << "Could not find matching method for arguments (method name: wxWindow::TransferDataFromWindow).\n";
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
   * id: _43189
   */
  if(args.Length() == 0) {
    

    self->InitDialog();

    return v8::Undefined();
  }
  

  std::ostringstream errStr;
  errStr << "Could not find matching method for arguments (method name: wxWindow::InitDialog).\n";
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
   * id: _43190
   */
  if(args.Length() == 1 && (args[0]->IsNull() || (args[0]->IsObject() && wxNode_wxAcceleratorTable::AssignableFrom(args[0]->ToObject()->GetConstructorName())))) {
    wxNode_wxAcceleratorTable* accel = args[0]->IsNull() ? NULL : wxNodeObject::unwrap<wxNode_wxAcceleratorTable>(args[0]->ToObject()); /* type: _64988  */
    

    self->SetAcceleratorTable(*accel);

    return v8::Undefined();
  }
  

  std::ostringstream errStr;
  errStr << "Could not find matching method for arguments (method name: wxWindow::SetAcceleratorTable).\n";
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
   * id: _43191
   */
  if(args.Length() == 0) {
    

    const wxAcceleratorTable* returnVal = self->GetAcceleratorTable();

    return scope.Close(wxNode_wxAcceleratorTable::New(returnVal));
  }
  

  std::ostringstream errStr;
  errStr << "Could not find matching method for arguments (method name: wxWindow::GetAcceleratorTable).\n";
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
   * id: _43192
   */
  if(args.Length() == 1 && (args[0]->IsNull() || (args[0]->IsObject() && wxNode_wxPoint::AssignableFrom(args[0]->ToObject()->GetConstructorName())))) {
    wxNode_wxPoint* pt = args[0]->IsNull() ? NULL : wxNodeObject::unwrap<wxNode_wxPoint>(args[0]->ToObject()); /* type: _20518  */
    

    wxPoint returnVal = self->ConvertPixelsToDialog(*pt);

    return scope.Close(wxNode_wxPoint::NewCopy(returnVal));
  }
  
  /*
   * id: _43194
   */
  if(args.Length() == 1 && (args[0]->IsNull() || (args[0]->IsObject() && wxNode_wxSize::AssignableFrom(args[0]->ToObject()->GetConstructorName())))) {
    wxNode_wxSize* sz = args[0]->IsNull() ? NULL : wxNodeObject::unwrap<wxNode_wxSize>(args[0]->ToObject()); /* type: _20628  */
    

    wxSize returnVal = self->ConvertPixelsToDialog(*sz);

    return scope.Close(wxNode_wxSize::NewCopy(returnVal));
  }
  

  std::ostringstream errStr;
  errStr << "Could not find matching method for arguments (method name: wxWindow::ConvertPixelsToDialog).\n";
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
   * id: _43193
   */
  if(args.Length() == 1 && (args[0]->IsNull() || (args[0]->IsObject() && wxNode_wxPoint::AssignableFrom(args[0]->ToObject()->GetConstructorName())))) {
    wxNode_wxPoint* pt = args[0]->IsNull() ? NULL : wxNodeObject::unwrap<wxNode_wxPoint>(args[0]->ToObject()); /* type: _20518  */
    

    wxPoint returnVal = self->ConvertDialogToPixels(*pt);

    return scope.Close(wxNode_wxPoint::NewCopy(returnVal));
  }
  
  /*
   * id: _43195
   */
  if(args.Length() == 1 && (args[0]->IsNull() || (args[0]->IsObject() && wxNode_wxSize::AssignableFrom(args[0]->ToObject()->GetConstructorName())))) {
    wxNode_wxSize* sz = args[0]->IsNull() ? NULL : wxNodeObject::unwrap<wxNode_wxSize>(args[0]->ToObject()); /* type: _20628  */
    

    wxSize returnVal = self->ConvertDialogToPixels(*sz);

    return scope.Close(wxNode_wxSize::NewCopy(returnVal));
  }
  

  std::ostringstream errStr;
  errStr << "Could not find matching method for arguments (method name: wxWindow::ConvertDialogToPixels).\n";
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
   * id: _43196
   */
  if(args.Length() == 2 && args[0]->IsNumber() && args[1]->IsNumber()) {
    int x = (int)args[0]->ToInt32()->Value(); /* type: _165  */
    int y = (int)args[1]->ToInt32()->Value(); /* type: _165  */
    

    self->WarpPointer(x, y);

    return v8::Undefined();
  }
  

  std::ostringstream errStr;
  errStr << "Could not find matching method for arguments (method name: wxWindow::WarpPointer).\n";
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
   * id: _43197
   */
  if(args.Length() == 0) {
    

    self->CaptureMouse();

    return v8::Undefined();
  }
  

  std::ostringstream errStr;
  errStr << "Could not find matching method for arguments (method name: wxWindow::CaptureMouse).\n";
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
   * id: _43198
   */
  if(args.Length() == 0) {
    

    self->ReleaseMouse();

    return v8::Undefined();
  }
  

  std::ostringstream errStr;
  errStr << "Could not find matching method for arguments (method name: wxWindow::ReleaseMouse).\n";
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
   * id: _43199
   */
  if(args.Length() == 0) {
    

    const wxWindow* returnVal = self->GetCapture();

    return scope.Close(wxNode_wxWindow::New(returnVal));
  }
  

  std::ostringstream errStr;
  errStr << "Could not find matching method for arguments (method name: wxWindow::GetCapture).\n";
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
   * id: _43200
   */
  if(args.Length() == 0) {
    

    bool returnVal = self->HasCapture();

    return scope.Close(v8::Boolean::New(returnVal));
  }
  

  std::ostringstream errStr;
  errStr << "Could not find matching method for arguments (method name: wxWindow::HasCapture).\n";
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
   * id: _43201
   */
  if(args.Length() == 2 && args[0]->IsBoolean() && (args[1]->IsNull() || (args[1]->IsObject() && wxNode_wxRect::AssignableFrom(args[1]->ToObject()->GetConstructorName())))) {
    bool eraseBackground = args[0]->ToBoolean()->Value(); /* type: _14830  */
    wxNode_wxRect* rect = args[1]->IsNull() ? NULL : wxNodeObject::unwrap<wxNode_wxRect>(args[1]->ToObject()); /* type: _60095 * */
    

    self->Refresh(eraseBackground, rect);

    return v8::Undefined();
  }
  
  /*
   * id: _43201
   */
  if(args.Length() == 1 && args[0]->IsBoolean()) {
    bool eraseBackground = args[0]->ToBoolean()->Value(); /* type: _14830  */
    

    self->Refresh(eraseBackground);

    return v8::Undefined();
  }
  
  /*
   * id: _43201
   */
  if(args.Length() == 0) {
    

    self->Refresh();

    return v8::Undefined();
  }
  

  std::ostringstream errStr;
  errStr << "Could not find matching method for arguments (method name: wxWindow::Refresh).\n";
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
   * id: _43202
   */
  if(args.Length() == 2 && (args[0]->IsNull() || (args[0]->IsObject() && wxNode_wxRect::AssignableFrom(args[0]->ToObject()->GetConstructorName()))) && args[1]->IsBoolean()) {
    wxNode_wxRect* rect = args[0]->IsNull() ? NULL : wxNodeObject::unwrap<wxNode_wxRect>(args[0]->ToObject()); /* type: _24885  */
    bool eraseBackground = args[1]->ToBoolean()->Value(); /* type: _14830  */
    

    self->RefreshRect(*rect, eraseBackground);

    return v8::Undefined();
  }
  
  /*
   * id: _43202
   */
  if(args.Length() == 1 && (args[0]->IsNull() || (args[0]->IsObject() && wxNode_wxRect::AssignableFrom(args[0]->ToObject()->GetConstructorName())))) {
    wxNode_wxRect* rect = args[0]->IsNull() ? NULL : wxNodeObject::unwrap<wxNode_wxRect>(args[0]->ToObject()); /* type: _24885  */
    

    self->RefreshRect(*rect);

    return v8::Undefined();
  }
  

  std::ostringstream errStr;
  errStr << "Could not find matching method for arguments (method name: wxWindow::RefreshRect).\n";
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
   * id: _43203
   */
  if(args.Length() == 0) {
    

    self->Update();

    return v8::Undefined();
  }
  

  std::ostringstream errStr;
  errStr << "Could not find matching method for arguments (method name: wxWindow::Update).\n";
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
   * id: _43204
   */
  if(args.Length() == 0) {
    

    self->ClearBackground();

    return v8::Undefined();
  }
  

  std::ostringstream errStr;
  errStr << "Could not find matching method for arguments (method name: wxWindow::ClearBackground).\n";
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
   * id: _43205
   */
  if(args.Length() == 0) {
    

    self->Freeze();

    return v8::Undefined();
  }
  

  std::ostringstream errStr;
  errStr << "Could not find matching method for arguments (method name: wxWindow::Freeze).\n";
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
   * id: _43206
   */
  if(args.Length() == 0) {
    

    self->Thaw();

    return v8::Undefined();
  }
  

  std::ostringstream errStr;
  errStr << "Could not find matching method for arguments (method name: wxWindow::Thaw).\n";
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
   * id: _43207
   */
  if(args.Length() == 0) {
    

    bool returnVal = self->IsFrozen();

    return scope.Close(v8::Boolean::New(returnVal));
  }
  

  std::ostringstream errStr;
  errStr << "Could not find matching method for arguments (method name: wxWindow::IsFrozen).\n";
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
   * id: _43208
   */
  if(args.Length() == 1 && (args[0]->IsNull() || (args[0]->IsObject() && wxNode_wxDC::AssignableFrom(args[0]->ToObject()->GetConstructorName())))) {
    wxNode_wxDC* arg0 = args[0]->IsNull() ? NULL : wxNodeObject::unwrap<wxNode_wxDC>(args[0]->ToObject()); /* type: _58803  */
    

    self->PrepareDC(*arg0);

    return v8::Undefined();
  }
  

  std::ostringstream errStr;
  errStr << "Could not find matching method for arguments (method name: wxWindow::PrepareDC).\n";
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
   * id: _43209
   */
  if(args.Length() == 0) {
    

    bool returnVal = self->IsDoubleBuffered();

    return scope.Close(v8::Boolean::New(returnVal));
  }
  

  std::ostringstream errStr;
  errStr << "Could not find matching method for arguments (method name: wxWindow::IsDoubleBuffered).\n";
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
   * id: _43210
   */
  if(args.Length() == 0) {
    

    wxRegion returnVal = self->GetUpdateRegion();

    return scope.Close(wxNode_wxRegion::NewCopy(returnVal));
  }
  
  /*
   * id: _43211
   */
  if(args.Length() == 0) {
    

    wxRegion returnVal = self->GetUpdateRegion();

    return scope.Close(wxNode_wxRegion::NewCopy(returnVal));
  }
  

  std::ostringstream errStr;
  errStr << "Could not find matching method for arguments (method name: wxWindow::GetUpdateRegion).\n";
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
   * id: _43212
   */
  if(args.Length() == 0) {
    

    wxRect returnVal = self->GetUpdateClientRect();

    return scope.Close(wxNode_wxRect::NewCopy(returnVal));
  }
  

  std::ostringstream errStr;
  errStr << "Could not find matching method for arguments (method name: wxWindow::GetUpdateClientRect).\n";
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
   * id: _43213
   */
  if(args.Length() == 2 && args[0]->IsNumber() && args[1]->IsNumber()) {
    int x = (int)args[0]->ToInt32()->Value(); /* type: _165  */
    int y = (int)args[1]->ToInt32()->Value(); /* type: _165  */
    

    bool returnVal = self->DoIsExposed(x, y);

    return scope.Close(v8::Boolean::New(returnVal));
  }
  
  /*
   * id: _43214
   */
  if(args.Length() == 4 && args[0]->IsNumber() && args[1]->IsNumber() && args[2]->IsNumber() && args[3]->IsNumber()) {
    int x = (int)args[0]->ToInt32()->Value(); /* type: _165  */
    int y = (int)args[1]->ToInt32()->Value(); /* type: _165  */
    int w = (int)args[2]->ToInt32()->Value(); /* type: _165  */
    int h = (int)args[3]->ToInt32()->Value(); /* type: _165  */
    

    bool returnVal = self->DoIsExposed(x, y, w, h);

    return scope.Close(v8::Boolean::New(returnVal));
  }
  

  std::ostringstream errStr;
  errStr << "Could not find matching method for arguments (method name: wxWindow::DoIsExposed).\n";
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
   * id: _43215
   */
  if(args.Length() == 2 && args[0]->IsNumber() && args[1]->IsNumber()) {
    int x = (int)args[0]->ToInt32()->Value(); /* type: _165  */
    int y = (int)args[1]->ToInt32()->Value(); /* type: _165  */
    

    bool returnVal = self->IsExposed(x, y);

    return scope.Close(v8::Boolean::New(returnVal));
  }
  
  /*
   * id: _43216
   */
  if(args.Length() == 4 && args[0]->IsNumber() && args[1]->IsNumber() && args[2]->IsNumber() && args[3]->IsNumber()) {
    int x = (int)args[0]->ToInt32()->Value(); /* type: _165  */
    int y = (int)args[1]->ToInt32()->Value(); /* type: _165  */
    int w = (int)args[2]->ToInt32()->Value(); /* type: _165  */
    int h = (int)args[3]->ToInt32()->Value(); /* type: _165  */
    

    bool returnVal = self->IsExposed(x, y, w, h);

    return scope.Close(v8::Boolean::New(returnVal));
  }
  
  /*
   * id: _43217
   */
  if(args.Length() == 1 && (args[0]->IsNull() || (args[0]->IsObject() && wxNode_wxPoint::AssignableFrom(args[0]->ToObject()->GetConstructorName())))) {
    wxNode_wxPoint* pt = args[0]->IsNull() ? NULL : wxNodeObject::unwrap<wxNode_wxPoint>(args[0]->ToObject()); /* type: _20518  */
    

    bool returnVal = self->IsExposed(*pt);

    return scope.Close(v8::Boolean::New(returnVal));
  }
  
  /*
   * id: _43218
   */
  if(args.Length() == 1 && (args[0]->IsNull() || (args[0]->IsObject() && wxNode_wxRect::AssignableFrom(args[0]->ToObject()->GetConstructorName())))) {
    wxNode_wxRect* rect = args[0]->IsNull() ? NULL : wxNodeObject::unwrap<wxNode_wxRect>(args[0]->ToObject()); /* type: _24885  */
    

    bool returnVal = self->IsExposed(*rect);

    return scope.Close(v8::Boolean::New(returnVal));
  }
  

  std::ostringstream errStr;
  errStr << "Could not find matching method for arguments (method name: wxWindow::IsExposed).\n";
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
   * id: _43219
   */
  if(args.Length() == 0) {
    

    wxVisualAttributes returnVal = self->GetDefaultAttributes();

    return scope.Close(wxNode_wxVisualAttributes::NewCopy(returnVal));
  }
  

  std::ostringstream errStr;
  errStr << "Could not find matching method for arguments (method name: wxWindow::GetDefaultAttributes).\n";
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
   * id: _43220
   */
  if(args.Length() == 1 && args[0]->IsNumber()) {
    wxWindowVariant variant = (wxWindowVariant)args[0]->ToNumber()->Value(); /* type: _10583  */
    

    wxVisualAttributes returnVal = self->GetClassDefaultAttributes(variant);

    return scope.Close(wxNode_wxVisualAttributes::NewCopy(returnVal));
  }
  
  /*
   * id: _43220
   */
  if(args.Length() == 0) {
    

    wxVisualAttributes returnVal = self->GetClassDefaultAttributes();

    return scope.Close(wxNode_wxVisualAttributes::NewCopy(returnVal));
  }
  

  std::ostringstream errStr;
  errStr << "Could not find matching method for arguments (method name: wxWindow::GetClassDefaultAttributes).\n";
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
   * id: _43221
   */
  if(args.Length() == 1 && (args[0]->IsNull() || (args[0]->IsObject() && wxNode_wxColour::AssignableFrom(args[0]->ToObject()->GetConstructorName())))) {
    wxNode_wxColour* colour = args[0]->IsNull() ? NULL : wxNodeObject::unwrap<wxNode_wxColour>(args[0]->ToObject()); /* type: _15649  */
    

    bool returnVal = self->SetBackgroundColour(*colour);

    return scope.Close(v8::Boolean::New(returnVal));
  }
  

  std::ostringstream errStr;
  errStr << "Could not find matching method for arguments (method name: wxWindow::SetBackgroundColour).\n";
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
   * id: _43222
   */
  if(args.Length() == 1 && (args[0]->IsNull() || (args[0]->IsObject() && wxNode_wxColour::AssignableFrom(args[0]->ToObject()->GetConstructorName())))) {
    wxNode_wxColour* colour = args[0]->IsNull() ? NULL : wxNodeObject::unwrap<wxNode_wxColour>(args[0]->ToObject()); /* type: _15649  */
    

    self->SetOwnBackgroundColour(*colour);

    return v8::Undefined();
  }
  

  std::ostringstream errStr;
  errStr << "Could not find matching method for arguments (method name: wxWindow::SetOwnBackgroundColour).\n";
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
   * id: _43223
   */
  if(args.Length() == 0) {
    

    wxColour returnVal = self->GetBackgroundColour();

    return scope.Close(wxNode_wxColour::NewCopy(returnVal));
  }
  

  std::ostringstream errStr;
  errStr << "Could not find matching method for arguments (method name: wxWindow::GetBackgroundColour).\n";
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
   * id: _43224
   */
  if(args.Length() == 0) {
    

    bool returnVal = self->InheritsBackgroundColour();

    return scope.Close(v8::Boolean::New(returnVal));
  }
  

  std::ostringstream errStr;
  errStr << "Could not find matching method for arguments (method name: wxWindow::InheritsBackgroundColour).\n";
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
   * id: _43225
   */
  if(args.Length() == 0) {
    

    bool returnVal = self->UseBgCol();

    return scope.Close(v8::Boolean::New(returnVal));
  }
  

  std::ostringstream errStr;
  errStr << "Could not find matching method for arguments (method name: wxWindow::UseBgCol).\n";
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
   * id: _43226
   */
  if(args.Length() == 1 && (args[0]->IsNull() || (args[0]->IsObject() && wxNode_wxColour::AssignableFrom(args[0]->ToObject()->GetConstructorName())))) {
    wxNode_wxColour* colour = args[0]->IsNull() ? NULL : wxNodeObject::unwrap<wxNode_wxColour>(args[0]->ToObject()); /* type: _15649  */
    

    bool returnVal = self->SetForegroundColour(*colour);

    return scope.Close(v8::Boolean::New(returnVal));
  }
  

  std::ostringstream errStr;
  errStr << "Could not find matching method for arguments (method name: wxWindow::SetForegroundColour).\n";
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
   * id: _43227
   */
  if(args.Length() == 1 && (args[0]->IsNull() || (args[0]->IsObject() && wxNode_wxColour::AssignableFrom(args[0]->ToObject()->GetConstructorName())))) {
    wxNode_wxColour* colour = args[0]->IsNull() ? NULL : wxNodeObject::unwrap<wxNode_wxColour>(args[0]->ToObject()); /* type: _15649  */
    

    self->SetOwnForegroundColour(*colour);

    return v8::Undefined();
  }
  

  std::ostringstream errStr;
  errStr << "Could not find matching method for arguments (method name: wxWindow::SetOwnForegroundColour).\n";
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
   * id: _43228
   */
  if(args.Length() == 0) {
    

    wxColour returnVal = self->GetForegroundColour();

    return scope.Close(wxNode_wxColour::NewCopy(returnVal));
  }
  

  std::ostringstream errStr;
  errStr << "Could not find matching method for arguments (method name: wxWindow::GetForegroundColour).\n";
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
   * id: _43229
   */
  if(args.Length() == 1 && args[0]->IsNumber()) {
    wxBackgroundStyle style = (wxBackgroundStyle)args[0]->ToNumber()->Value(); /* type: _7671  */
    

    bool returnVal = self->SetBackgroundStyle(style);

    return scope.Close(v8::Boolean::New(returnVal));
  }
  

  std::ostringstream errStr;
  errStr << "Could not find matching method for arguments (method name: wxWindow::SetBackgroundStyle).\n";
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
   * id: _43230
   */
  if(args.Length() == 0) {
    

    int returnVal = (int)self->GetBackgroundStyle();

    return scope.Close(v8::Number::New(returnVal));
  }
  

  std::ostringstream errStr;
  errStr << "Could not find matching method for arguments (method name: wxWindow::GetBackgroundStyle).\n";
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
   * id: _43231
   */
  if(args.Length() == 0) {
    

    bool returnVal = self->HasTransparentBackground();

    return scope.Close(v8::Boolean::New(returnVal));
  }
  

  std::ostringstream errStr;
  errStr << "Could not find matching method for arguments (method name: wxWindow::HasTransparentBackground).\n";
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
   * id: _43232
   */
  if(args.Length() == 1 && (args[0]->IsNull() || (args[0]->IsObject() && wxNode_wxFont::AssignableFrom(args[0]->ToObject()->GetConstructorName())))) {
    wxNode_wxFont* font = args[0]->IsNull() ? NULL : wxNodeObject::unwrap<wxNode_wxFont>(args[0]->ToObject()); /* type: _33186  */
    

    bool returnVal = self->SetFont(*font);

    return scope.Close(v8::Boolean::New(returnVal));
  }
  

  std::ostringstream errStr;
  errStr << "Could not find matching method for arguments (method name: wxWindow::SetFont).\n";
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
   * id: _43233
   */
  if(args.Length() == 1 && (args[0]->IsNull() || (args[0]->IsObject() && wxNode_wxFont::AssignableFrom(args[0]->ToObject()->GetConstructorName())))) {
    wxNode_wxFont* font = args[0]->IsNull() ? NULL : wxNodeObject::unwrap<wxNode_wxFont>(args[0]->ToObject()); /* type: _33186  */
    

    self->SetOwnFont(*font);

    return v8::Undefined();
  }
  

  std::ostringstream errStr;
  errStr << "Could not find matching method for arguments (method name: wxWindow::SetOwnFont).\n";
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
   * id: _43234
   */
  if(args.Length() == 0) {
    

    wxFont returnVal = self->GetFont();

    return scope.Close(wxNode_wxFont::NewCopy(returnVal));
  }
  

  std::ostringstream errStr;
  errStr << "Could not find matching method for arguments (method name: wxWindow::GetFont).\n";
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
   * id: _43235
   */
  if(args.Length() == 1 && (args[0]->IsNull() || (args[0]->IsObject() && wxNode_wxCursor::AssignableFrom(args[0]->ToObject()->GetConstructorName())))) {
    wxNode_wxCursor* cursor = args[0]->IsNull() ? NULL : wxNodeObject::unwrap<wxNode_wxCursor>(args[0]->ToObject()); /* type: _42148  */
    

    bool returnVal = self->SetCursor(*cursor);

    return scope.Close(v8::Boolean::New(returnVal));
  }
  

  std::ostringstream errStr;
  errStr << "Could not find matching method for arguments (method name: wxWindow::SetCursor).\n";
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
   * id: _43236
   */
  if(args.Length() == 0) {
    

    wxCursor returnVal = self->GetCursor();

    return scope.Close(wxNode_wxCursor::NewCopy(returnVal));
  }
  

  std::ostringstream errStr;
  errStr << "Could not find matching method for arguments (method name: wxWindow::GetCursor).\n";
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
   * id: _43237
   */
  if(args.Length() == 1 && (args[0]->IsNull() || (args[0]->IsObject() && wxNode_wxCaret::AssignableFrom(args[0]->ToObject()->GetConstructorName())))) {
    wxNode_wxCaret* caret = args[0]->IsNull() ? NULL : wxNodeObject::unwrap<wxNode_wxCaret>(args[0]->ToObject()); /* type: _65513 * */
    

    self->SetCaret(caret);

    return v8::Undefined();
  }
  

  std::ostringstream errStr;
  errStr << "Could not find matching method for arguments (method name: wxWindow::SetCaret).\n";
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
   * id: _43238
   */
  if(args.Length() == 0) {
    

    wxCaret* returnVal = self->GetCaret();

    return scope.Close(wxNode_wxCaret::New(returnVal));
  }
  

  std::ostringstream errStr;
  errStr << "Could not find matching method for arguments (method name: wxWindow::GetCaret).\n";
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
   * id: _43239
   */
  if(args.Length() == 0) {
    

    int returnVal = self->GetCharHeight();

    return scope.Close(v8::Number::New(returnVal));
  }
  

  std::ostringstream errStr;
  errStr << "Could not find matching method for arguments (method name: wxWindow::GetCharHeight).\n";
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
   * id: _43240
   */
  if(args.Length() == 0) {
    

    int returnVal = self->GetCharWidth();

    return scope.Close(v8::Number::New(returnVal));
  }
  

  std::ostringstream errStr;
  errStr << "Could not find matching method for arguments (method name: wxWindow::GetCharWidth).\n";
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
   * id: _43241
   */
  if(args.Length() == 6 && args[0]->IsString() && false && false && false && false && (args[5]->IsNull() || (args[5]->IsObject() && wxNode_wxFont::AssignableFrom(args[5]->ToObject()->GetConstructorName())))) {
    v8::String::AsciiValue string(args[0]->ToString()); /* type: _14975  */
    int x; /* type: _16655 * */
    int y; /* type: _16655 * */
    int descent; /* type: _16655 * */
    int externalLeading; /* type: _16655 * */
    wxNode_wxFont* font = args[5]->IsNull() ? NULL : wxNodeObject::unwrap<wxNode_wxFont>(args[5]->ToObject()); /* type: _61219 * */
    

    self->GetTextExtent(*string, &x, &y, &descent, &externalLeading, font);

    return v8::Undefined();
  }
  
  /*
   * id: _43241
   */
  if(args.Length() == 5 && args[0]->IsString() && false && false && false && false) {
    v8::String::AsciiValue string(args[0]->ToString()); /* type: _14975  */
    int x; /* type: _16655 * */
    int y; /* type: _16655 * */
    int descent; /* type: _16655 * */
    int externalLeading; /* type: _16655 * */
    

    self->GetTextExtent(*string, &x, &y, &descent, &externalLeading);

    return v8::Undefined();
  }
  
  /*
   * id: _43241
   */
  if(args.Length() == 4 && args[0]->IsString() && false && false && false) {
    v8::String::AsciiValue string(args[0]->ToString()); /* type: _14975  */
    int x; /* type: _16655 * */
    int y; /* type: _16655 * */
    int descent; /* type: _16655 * */
    

    self->GetTextExtent(*string, &x, &y, &descent);

    return v8::Undefined();
  }
  
  /*
   * id: _43241
   */
  if(args.Length() == 3 && args[0]->IsString() && false && false) {
    v8::String::AsciiValue string(args[0]->ToString()); /* type: _14975  */
    int x; /* type: _16655 * */
    int y; /* type: _16655 * */
    

    self->GetTextExtent(*string, &x, &y);

    return v8::Undefined();
  }
  
  /*
   * id: _43242
   */
  if(args.Length() == 1 && args[0]->IsString()) {
    v8::String::AsciiValue string(args[0]->ToString()); /* type: _14975  */
    

    wxSize returnVal = self->GetTextExtent(*string);

    return scope.Close(wxNode_wxSize::NewCopy(returnVal));
  }
  

  std::ostringstream errStr;
  errStr << "Could not find matching method for arguments (method name: wxWindow::GetTextExtent).\n";
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
   * id: _43243
   */
  if(args.Length() == 2 && false && false) {
    int x; /* type: _16655 * */
    int y; /* type: _16655 * */
    

    self->ClientToScreen(&x, &y);

    return v8::Undefined();
  }
  
  /*
   * id: _43245
   */
  if(args.Length() == 1 && (args[0]->IsNull() || (args[0]->IsObject() && wxNode_wxPoint::AssignableFrom(args[0]->ToObject()->GetConstructorName())))) {
    wxNode_wxPoint* pt = args[0]->IsNull() ? NULL : wxNodeObject::unwrap<wxNode_wxPoint>(args[0]->ToObject()); /* type: _20518  */
    

    wxPoint returnVal = self->ClientToScreen(*pt);

    return scope.Close(wxNode_wxPoint::NewCopy(returnVal));
  }
  

  std::ostringstream errStr;
  errStr << "Could not find matching method for arguments (method name: wxWindow::ClientToScreen).\n";
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
   * id: _43244
   */
  if(args.Length() == 2 && false && false) {
    int x; /* type: _16655 * */
    int y; /* type: _16655 * */
    

    self->ScreenToClient(&x, &y);

    return v8::Undefined();
  }
  
  /*
   * id: _43246
   */
  if(args.Length() == 1 && (args[0]->IsNull() || (args[0]->IsObject() && wxNode_wxPoint::AssignableFrom(args[0]->ToObject()->GetConstructorName())))) {
    wxNode_wxPoint* pt = args[0]->IsNull() ? NULL : wxNodeObject::unwrap<wxNode_wxPoint>(args[0]->ToObject()); /* type: _20518  */
    

    wxPoint returnVal = self->ScreenToClient(*pt);

    return scope.Close(wxNode_wxPoint::NewCopy(returnVal));
  }
  

  std::ostringstream errStr;
  errStr << "Could not find matching method for arguments (method name: wxWindow::ScreenToClient).\n";
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
   * id: _43247
   */
  if(args.Length() == 2 && args[0]->IsNumber() && args[1]->IsNumber()) {
    int x = (int)args[0]->ToInt32()->Value(); /* type: _12231  */
    int y = (int)args[1]->ToInt32()->Value(); /* type: _12231  */
    

    int returnVal = (int)self->HitTest(x, y);

    return scope.Close(v8::Number::New(returnVal));
  }
  
  /*
   * id: _43248
   */
  if(args.Length() == 1 && (args[0]->IsNull() || (args[0]->IsObject() && wxNode_wxPoint::AssignableFrom(args[0]->ToObject()->GetConstructorName())))) {
    wxNode_wxPoint* pt = args[0]->IsNull() ? NULL : wxNodeObject::unwrap<wxNode_wxPoint>(args[0]->ToObject()); /* type: _20518  */
    

    int returnVal = (int)self->HitTest(*pt);

    return scope.Close(v8::Number::New(returnVal));
  }
  

  std::ostringstream errStr;
  errStr << "Could not find matching method for arguments (method name: wxWindow::HitTest).\n";
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
   * id: _43249
   */
  if(args.Length() == 1 && args[0]->IsNumber()) {
    long int flags = (long int)args[0]->ToInt32()->Value(); /* type: _592  */
    

    int returnVal = (int)self->GetBorder(flags);

    return scope.Close(v8::Number::New(returnVal));
  }
  
  /*
   * id: _43250
   */
  if(args.Length() == 0) {
    

    int returnVal = (int)self->GetBorder();

    return scope.Close(v8::Number::New(returnVal));
  }
  

  std::ostringstream errStr;
  errStr << "Could not find matching method for arguments (method name: wxWindow::GetBorder).\n";
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
   * id: _43251
   */
  if(args.Length() == 1 && args[0]->IsNumber()) {
    long int flags = (long int)args[0]->ToInt32()->Value(); /* type: _592  */
    

    self->UpdateWindowUI(flags);

    return v8::Undefined();
  }
  
  /*
   * id: _43251
   */
  if(args.Length() == 0) {
    

    self->UpdateWindowUI();

    return v8::Undefined();
  }
  

  std::ostringstream errStr;
  errStr << "Could not find matching method for arguments (method name: wxWindow::UpdateWindowUI).\n";
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
   * id: _43252
   */
  if(args.Length() == 1 && (args[0]->IsNull() || (args[0]->IsObject() && wxNode_wxUpdateUIEvent::AssignableFrom(args[0]->ToObject()->GetConstructorName())))) {
    wxNode_wxUpdateUIEvent* event = args[0]->IsNull() ? NULL : wxNodeObject::unwrap<wxNode_wxUpdateUIEvent>(args[0]->ToObject()); /* type: _59754  */
    

    self->DoUpdateWindowUI(*event);

    return v8::Undefined();
  }
  

  std::ostringstream errStr;
  errStr << "Could not find matching method for arguments (method name: wxWindow::DoUpdateWindowUI).\n";
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
   * id: _43253
   */
  if(args.Length() == 2 && (args[0]->IsNull() || (args[0]->IsObject() && wxNode_wxMenu::AssignableFrom(args[0]->ToObject()->GetConstructorName()))) && (args[1]->IsNull() || (args[1]->IsObject() && wxNode_wxPoint::AssignableFrom(args[1]->ToObject()->GetConstructorName())))) {
    wxNode_wxMenu* menu = args[0]->IsNull() ? NULL : wxNodeObject::unwrap<wxNode_wxMenu>(args[0]->ToObject()); /* type: _53132 * */
    wxNode_wxPoint* pos = args[1]->IsNull() ? NULL : wxNodeObject::unwrap<wxNode_wxPoint>(args[1]->ToObject()); /* type: _20518  */
    

    bool returnVal = self->PopupMenu(menu, *pos);

    return scope.Close(v8::Boolean::New(returnVal));
  }
  
  /*
   * id: _43253
   */
  if(args.Length() == 1 && (args[0]->IsNull() || (args[0]->IsObject() && wxNode_wxMenu::AssignableFrom(args[0]->ToObject()->GetConstructorName())))) {
    wxNode_wxMenu* menu = args[0]->IsNull() ? NULL : wxNodeObject::unwrap<wxNode_wxMenu>(args[0]->ToObject()); /* type: _53132 * */
    

    bool returnVal = self->PopupMenu(menu);

    return scope.Close(v8::Boolean::New(returnVal));
  }
  
  /*
   * id: _43254
   */
  if(args.Length() == 3 && (args[0]->IsNull() || (args[0]->IsObject() && wxNode_wxMenu::AssignableFrom(args[0]->ToObject()->GetConstructorName()))) && args[1]->IsNumber() && args[2]->IsNumber()) {
    wxNode_wxMenu* menu = args[0]->IsNull() ? NULL : wxNodeObject::unwrap<wxNode_wxMenu>(args[0]->ToObject()); /* type: _53132 * */
    int x = (int)args[1]->ToInt32()->Value(); /* type: _165  */
    int y = (int)args[2]->ToInt32()->Value(); /* type: _165  */
    

    bool returnVal = self->PopupMenu(menu, x, y);

    return scope.Close(v8::Boolean::New(returnVal));
  }
  

  std::ostringstream errStr;
  errStr << "Could not find matching method for arguments (method name: wxWindow::PopupMenu).\n";
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
   * id: _43255
   */
  if(args.Length() == 2 && (args[0]->IsNull() || (args[0]->IsObject() && wxNode_wxMenu::AssignableFrom(args[0]->ToObject()->GetConstructorName()))) && (args[1]->IsNull() || (args[1]->IsObject() && wxNode_wxPoint::AssignableFrom(args[1]->ToObject()->GetConstructorName())))) {
    wxNode_wxMenu* menu = args[0]->IsNull() ? NULL : wxNodeObject::unwrap<wxNode_wxMenu>(args[0]->ToObject()); /* type: _62197  */
    wxNode_wxPoint* pos = args[1]->IsNull() ? NULL : wxNodeObject::unwrap<wxNode_wxPoint>(args[1]->ToObject()); /* type: _20518  */
    

    int returnVal = self->GetPopupMenuSelectionFromUser(*menu, *pos);

    return scope.Close(v8::Number::New(returnVal));
  }
  
  /*
   * id: _43255
   */
  if(args.Length() == 1 && (args[0]->IsNull() || (args[0]->IsObject() && wxNode_wxMenu::AssignableFrom(args[0]->ToObject()->GetConstructorName())))) {
    wxNode_wxMenu* menu = args[0]->IsNull() ? NULL : wxNodeObject::unwrap<wxNode_wxMenu>(args[0]->ToObject()); /* type: _62197  */
    

    int returnVal = self->GetPopupMenuSelectionFromUser(*menu);

    return scope.Close(v8::Number::New(returnVal));
  }
  
  /*
   * id: _43256
   */
  if(args.Length() == 3 && (args[0]->IsNull() || (args[0]->IsObject() && wxNode_wxMenu::AssignableFrom(args[0]->ToObject()->GetConstructorName()))) && args[1]->IsNumber() && args[2]->IsNumber()) {
    wxNode_wxMenu* menu = args[0]->IsNull() ? NULL : wxNodeObject::unwrap<wxNode_wxMenu>(args[0]->ToObject()); /* type: _62197  */
    int x = (int)args[1]->ToInt32()->Value(); /* type: _165  */
    int y = (int)args[2]->ToInt32()->Value(); /* type: _165  */
    

    int returnVal = self->GetPopupMenuSelectionFromUser(*menu, x, y);

    return scope.Close(v8::Number::New(returnVal));
  }
  

  std::ostringstream errStr;
  errStr << "Could not find matching method for arguments (method name: wxWindow::GetPopupMenuSelectionFromUser).\n";
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
   * id: _43257
   */
  if(args.Length() == 0) {
    

    bool returnVal = self->HasMultiplePages();

    return scope.Close(v8::Boolean::New(returnVal));
  }
  

  std::ostringstream errStr;
  errStr << "Could not find matching method for arguments (method name: wxWindow::HasMultiplePages).\n";
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
   * id: _43258
   */
  if(args.Length() == 1 && args[0]->IsNumber()) {
    int orient = (int)args[0]->ToInt32()->Value(); /* type: _165  */
    

    bool returnVal = self->CanScroll(orient);

    return scope.Close(v8::Boolean::New(returnVal));
  }
  

  std::ostringstream errStr;
  errStr << "Could not find matching method for arguments (method name: wxWindow::CanScroll).\n";
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
   * id: _43259
   */
  if(args.Length() == 1 && args[0]->IsNumber()) {
    int orient = (int)args[0]->ToInt32()->Value(); /* type: _165  */
    

    bool returnVal = self->HasScrollbar(orient);

    return scope.Close(v8::Boolean::New(returnVal));
  }
  

  std::ostringstream errStr;
  errStr << "Could not find matching method for arguments (method name: wxWindow::HasScrollbar).\n";
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
   * id: _43260
   */
  if(args.Length() == 5 && args[0]->IsNumber() && args[1]->IsNumber() && args[2]->IsNumber() && args[3]->IsNumber() && args[4]->IsBoolean()) {
    int orient = (int)args[0]->ToInt32()->Value(); /* type: _165  */
    int pos = (int)args[1]->ToInt32()->Value(); /* type: _165  */
    int thumbvisible = (int)args[2]->ToInt32()->Value(); /* type: _165  */
    int range = (int)args[3]->ToInt32()->Value(); /* type: _165  */
    bool refresh = args[4]->ToBoolean()->Value(); /* type: _14830  */
    

    self->SetScrollbar(orient, pos, thumbvisible, range, refresh);

    return v8::Undefined();
  }
  
  /*
   * id: _43260
   */
  if(args.Length() == 4 && args[0]->IsNumber() && args[1]->IsNumber() && args[2]->IsNumber() && args[3]->IsNumber()) {
    int orient = (int)args[0]->ToInt32()->Value(); /* type: _165  */
    int pos = (int)args[1]->ToInt32()->Value(); /* type: _165  */
    int thumbvisible = (int)args[2]->ToInt32()->Value(); /* type: _165  */
    int range = (int)args[3]->ToInt32()->Value(); /* type: _165  */
    

    self->SetScrollbar(orient, pos, thumbvisible, range);

    return v8::Undefined();
  }
  

  std::ostringstream errStr;
  errStr << "Could not find matching method for arguments (method name: wxWindow::SetScrollbar).\n";
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
   * id: _43261
   */
  if(args.Length() == 3 && args[0]->IsNumber() && args[1]->IsNumber() && args[2]->IsBoolean()) {
    int orient = (int)args[0]->ToInt32()->Value(); /* type: _165  */
    int pos = (int)args[1]->ToInt32()->Value(); /* type: _165  */
    bool refresh = args[2]->ToBoolean()->Value(); /* type: _14830  */
    

    self->SetScrollPos(orient, pos, refresh);

    return v8::Undefined();
  }
  
  /*
   * id: _43261
   */
  if(args.Length() == 2 && args[0]->IsNumber() && args[1]->IsNumber()) {
    int orient = (int)args[0]->ToInt32()->Value(); /* type: _165  */
    int pos = (int)args[1]->ToInt32()->Value(); /* type: _165  */
    

    self->SetScrollPos(orient, pos);

    return v8::Undefined();
  }
  

  std::ostringstream errStr;
  errStr << "Could not find matching method for arguments (method name: wxWindow::SetScrollPos).\n";
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
   * id: _43262
   */
  if(args.Length() == 1 && args[0]->IsNumber()) {
    int orient = (int)args[0]->ToInt32()->Value(); /* type: _165  */
    

    int returnVal = self->GetScrollPos(orient);

    return scope.Close(v8::Number::New(returnVal));
  }
  

  std::ostringstream errStr;
  errStr << "Could not find matching method for arguments (method name: wxWindow::GetScrollPos).\n";
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
   * id: _43263
   */
  if(args.Length() == 1 && args[0]->IsNumber()) {
    int orient = (int)args[0]->ToInt32()->Value(); /* type: _165  */
    

    int returnVal = self->GetScrollThumb(orient);

    return scope.Close(v8::Number::New(returnVal));
  }
  

  std::ostringstream errStr;
  errStr << "Could not find matching method for arguments (method name: wxWindow::GetScrollThumb).\n";
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
   * id: _43264
   */
  if(args.Length() == 1 && args[0]->IsNumber()) {
    int orient = (int)args[0]->ToInt32()->Value(); /* type: _165  */
    

    int returnVal = self->GetScrollRange(orient);

    return scope.Close(v8::Number::New(returnVal));
  }
  

  std::ostringstream errStr;
  errStr << "Could not find matching method for arguments (method name: wxWindow::GetScrollRange).\n";
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
   * id: _43265
   */
  if(args.Length() == 3 && args[0]->IsNumber() && args[1]->IsNumber() && (args[2]->IsNull() || (args[2]->IsObject() && wxNode_wxRect::AssignableFrom(args[2]->ToObject()->GetConstructorName())))) {
    int dx = (int)args[0]->ToInt32()->Value(); /* type: _165  */
    int dy = (int)args[1]->ToInt32()->Value(); /* type: _165  */
    wxNode_wxRect* rect = args[2]->IsNull() ? NULL : wxNodeObject::unwrap<wxNode_wxRect>(args[2]->ToObject()); /* type: _60095 * */
    

    self->ScrollWindow(dx, dy, rect);

    return v8::Undefined();
  }
  
  /*
   * id: _43265
   */
  if(args.Length() == 2 && args[0]->IsNumber() && args[1]->IsNumber()) {
    int dx = (int)args[0]->ToInt32()->Value(); /* type: _165  */
    int dy = (int)args[1]->ToInt32()->Value(); /* type: _165  */
    

    self->ScrollWindow(dx, dy);

    return v8::Undefined();
  }
  

  std::ostringstream errStr;
  errStr << "Could not find matching method for arguments (method name: wxWindow::ScrollWindow).\n";
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
   * id: _43266
   */
  if(args.Length() == 1 && args[0]->IsNumber()) {
    int arg0 = (int)args[0]->ToInt32()->Value(); /* type: _165  */
    

    bool returnVal = self->ScrollLines(arg0);

    return scope.Close(v8::Boolean::New(returnVal));
  }
  

  std::ostringstream errStr;
  errStr << "Could not find matching method for arguments (method name: wxWindow::ScrollLines).\n";
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
   * id: _43267
   */
  if(args.Length() == 1 && args[0]->IsNumber()) {
    int arg0 = (int)args[0]->ToInt32()->Value(); /* type: _165  */
    

    bool returnVal = self->ScrollPages(arg0);

    return scope.Close(v8::Boolean::New(returnVal));
  }
  

  std::ostringstream errStr;
  errStr << "Could not find matching method for arguments (method name: wxWindow::ScrollPages).\n";
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
   * id: _43268
   */
  if(args.Length() == 0) {
    

    bool returnVal = self->LineUp();

    return scope.Close(v8::Boolean::New(returnVal));
  }
  

  std::ostringstream errStr;
  errStr << "Could not find matching method for arguments (method name: wxWindow::LineUp).\n";
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
   * id: _43269
   */
  if(args.Length() == 0) {
    

    bool returnVal = self->LineDown();

    return scope.Close(v8::Boolean::New(returnVal));
  }
  

  std::ostringstream errStr;
  errStr << "Could not find matching method for arguments (method name: wxWindow::LineDown).\n";
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
   * id: _43270
   */
  if(args.Length() == 0) {
    

    bool returnVal = self->PageUp();

    return scope.Close(v8::Boolean::New(returnVal));
  }
  

  std::ostringstream errStr;
  errStr << "Could not find matching method for arguments (method name: wxWindow::PageUp).\n";
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
   * id: _43271
   */
  if(args.Length() == 0) {
    

    bool returnVal = self->PageDown();

    return scope.Close(v8::Boolean::New(returnVal));
  }
  

  std::ostringstream errStr;
  errStr << "Could not find matching method for arguments (method name: wxWindow::PageDown).\n";
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
   * id: _43272
   */
  if(args.Length() == 2 && args[0]->IsBoolean() && args[1]->IsBoolean()) {
    bool arg0 = args[0]->ToBoolean()->Value(); /* type: _14830  */
    bool arg1 = args[1]->ToBoolean()->Value(); /* type: _14830  */
    

    self->AlwaysShowScrollbars(arg0, arg1);

    return v8::Undefined();
  }
  
  /*
   * id: _43272
   */
  if(args.Length() == 1 && args[0]->IsBoolean()) {
    bool arg0 = args[0]->ToBoolean()->Value(); /* type: _14830  */
    

    self->AlwaysShowScrollbars(arg0);

    return v8::Undefined();
  }
  
  /*
   * id: _43272
   */
  if(args.Length() == 0) {
    

    self->AlwaysShowScrollbars();

    return v8::Undefined();
  }
  

  std::ostringstream errStr;
  errStr << "Could not find matching method for arguments (method name: wxWindow::AlwaysShowScrollbars).\n";
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
   * id: _43273
   */
  if(args.Length() == 1 && args[0]->IsNumber()) {
    int arg0 = (int)args[0]->ToInt32()->Value(); /* type: _165  */
    

    bool returnVal = self->IsScrollbarAlwaysShown(arg0);

    return scope.Close(v8::Boolean::New(returnVal));
  }
  

  std::ostringstream errStr;
  errStr << "Could not find matching method for arguments (method name: wxWindow::IsScrollbarAlwaysShown).\n";
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
   * id: _43274
   */
  if(args.Length() == 1 && args[0]->IsString()) {
    v8::String::AsciiValue text(args[0]->ToString()); /* type: _14975  */
    

    self->SetHelpText(*text);

    return v8::Undefined();
  }
  

  std::ostringstream errStr;
  errStr << "Could not find matching method for arguments (method name: wxWindow::SetHelpText).\n";
  errStr << "  arg count: " << args.Length() << "\n";
  for(int i = 0; i < args.Length(); i++) {
    v8::String::AsciiValue argStr(args[i]);
    errStr << "  arg[" << i << "]: " << *argStr << "\n";
  }
  return v8::ThrowException(v8::Exception::TypeError(v8::String::New(errStr.str().c_str())));
}

/*static*/ v8::Handle<v8::Value> wxNode_wxWindow::_GetHelpTextAtPoint(const v8::Arguments& args) {
  v8::HandleScope scope;
  wxNode_wxWindow* self = unwrap<wxNode_wxWindow>(args.This());

  
  /*
   * id: _43276
   */
  if(args.Length() == 2 && (args[0]->IsNull() || (args[0]->IsObject() && wxNode_wxPoint::AssignableFrom(args[0]->ToObject()->GetConstructorName()))) && args[1]->IsNumber()) {
    wxNode_wxPoint* pt = args[0]->IsNull() ? NULL : wxNodeObject::unwrap<wxNode_wxPoint>(args[0]->ToObject()); /* type: _20518  */
    wxHelpEvent::Origin origin = (wxHelpEvent::Origin)args[1]->ToNumber()->Value(); /* type: _48816  */
    

    wxString returnVal = self->GetHelpTextAtPoint(*pt, origin);

    return scope.Close(v8::String::New(returnVal.mb_str()));
  }
  

  std::ostringstream errStr;
  errStr << "Could not find matching method for arguments (method name: wxWindow::GetHelpTextAtPoint).\n";
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
   * id: _43277
   */
  if(args.Length() == 0) {
    

    wxString returnVal = self->GetHelpText();

    return scope.Close(v8::String::New(returnVal.mb_str()));
  }
  

  std::ostringstream errStr;
  errStr << "Could not find matching method for arguments (method name: wxWindow::GetHelpText).\n";
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
   * id: _43278
   */
  if(args.Length() == 1 && args[0]->IsString()) {
    v8::String::AsciiValue tip(args[0]->ToString()); /* type: _14975  */
    

    self->SetToolTip(*tip);

    return v8::Undefined();
  }
  
  /*
   * id: _43279
   */
  if(args.Length() == 1 && (args[0]->IsNull() || (args[0]->IsObject() && wxNode_wxToolTip::AssignableFrom(args[0]->ToObject()->GetConstructorName())))) {
    wxNode_wxToolTip* tip = args[0]->IsNull() ? NULL : wxNodeObject::unwrap<wxNode_wxToolTip>(args[0]->ToObject()); /* type: _6613 * */
    

    self->SetToolTip(tip);

    return v8::Undefined();
  }
  

  std::ostringstream errStr;
  errStr << "Could not find matching method for arguments (method name: wxWindow::SetToolTip).\n";
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
   * id: _43280
   */
  if(args.Length() == 0) {
    

    self->UnsetToolTip();

    return v8::Undefined();
  }
  

  std::ostringstream errStr;
  errStr << "Could not find matching method for arguments (method name: wxWindow::UnsetToolTip).\n";
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
   * id: _43281
   */
  if(args.Length() == 0) {
    

    wxToolTip* returnVal = self->GetToolTip();

    return scope.Close(wxNode_wxToolTip::New(returnVal));
  }
  

  std::ostringstream errStr;
  errStr << "Could not find matching method for arguments (method name: wxWindow::GetToolTip).\n";
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
   * id: _43282
   */
  if(args.Length() == 0) {
    

    wxString returnVal = self->GetToolTipText();

    return scope.Close(v8::String::New(returnVal.mb_str()));
  }
  

  std::ostringstream errStr;
  errStr << "Could not find matching method for arguments (method name: wxWindow::GetToolTipText).\n";
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
   * id: _43283
   */
  if(args.Length() == 1 && (args[0]->IsNull() || (args[0]->IsObject() && wxNode_wxToolTip::AssignableFrom(args[0]->ToObject()->GetConstructorName())))) {
    wxNode_wxToolTip* tip = args[0]->IsNull() ? NULL : wxNodeObject::unwrap<wxNode_wxToolTip>(args[0]->ToObject()); /* type: _6613 * */
    

    bool returnVal = self->CopyToolTip(tip);

    return scope.Close(v8::Boolean::New(returnVal));
  }
  

  std::ostringstream errStr;
  errStr << "Could not find matching method for arguments (method name: wxWindow::CopyToolTip).\n";
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
   * id: _43284
   */
  if(args.Length() == 1 && (args[0]->IsNull() || (args[0]->IsObject() && wxNode_wxDropTarget::AssignableFrom(args[0]->ToObject()->GetConstructorName())))) {
    wxNode_wxDropTarget* dropTarget = args[0]->IsNull() ? NULL : wxNodeObject::unwrap<wxNode_wxDropTarget>(args[0]->ToObject()); /* type: _61215 * */
    

    self->SetDropTarget(dropTarget);

    return v8::Undefined();
  }
  

  std::ostringstream errStr;
  errStr << "Could not find matching method for arguments (method name: wxWindow::SetDropTarget).\n";
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
   * id: _43285
   */
  if(args.Length() == 0) {
    

    wxDropTarget* returnVal = self->GetDropTarget();

    return scope.Close(wxNode_wxDropTarget::New(returnVal));
  }
  

  std::ostringstream errStr;
  errStr << "Could not find matching method for arguments (method name: wxWindow::GetDropTarget).\n";
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
   * id: _43286
   */
  if(args.Length() == 1 && args[0]->IsBoolean()) {
    bool accept = args[0]->ToBoolean()->Value(); /* type: _14830  */
    

    self->DragAcceptFiles(accept);

    return v8::Undefined();
  }
  

  std::ostringstream errStr;
  errStr << "Could not find matching method for arguments (method name: wxWindow::DragAcceptFiles).\n";
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
   * id: _43287
   */
  if(args.Length() == 1 && (args[0]->IsNull() || (args[0]->IsObject() && wxNode_wxLayoutConstraints::AssignableFrom(args[0]->ToObject()->GetConstructorName())))) {
    wxNode_wxLayoutConstraints* constraints = args[0]->IsNull() ? NULL : wxNodeObject::unwrap<wxNode_wxLayoutConstraints>(args[0]->ToObject()); /* type: _64468 * */
    

    self->SetConstraints(constraints);

    return v8::Undefined();
  }
  

  std::ostringstream errStr;
  errStr << "Could not find matching method for arguments (method name: wxWindow::SetConstraints).\n";
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
   * id: _43288
   */
  if(args.Length() == 0) {
    

    wxLayoutConstraints* returnVal = self->GetConstraints();

    return scope.Close(wxNode_wxLayoutConstraints::New(returnVal));
  }
  

  std::ostringstream errStr;
  errStr << "Could not find matching method for arguments (method name: wxWindow::GetConstraints).\n";
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
   * id: _43289
   */
  if(args.Length() == 1 && (args[0]->IsNull() || (args[0]->IsObject() && wxNode_wxLayoutConstraints::AssignableFrom(args[0]->ToObject()->GetConstructorName())))) {
    wxNode_wxLayoutConstraints* c = args[0]->IsNull() ? NULL : wxNodeObject::unwrap<wxNode_wxLayoutConstraints>(args[0]->ToObject()); /* type: _64468 * */
    

    self->UnsetConstraints(c);

    return v8::Undefined();
  }
  

  std::ostringstream errStr;
  errStr << "Could not find matching method for arguments (method name: wxWindow::UnsetConstraints).\n";
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
   * id: _43290
   */
  if(args.Length() == 0) {
    

    const wxWindowList* returnVal = self->GetConstraintsInvolvedIn();

    return scope.Close(wxNode_wxWindowList::New(returnVal));
  }
  

  std::ostringstream errStr;
  errStr << "Could not find matching method for arguments (method name: wxWindow::GetConstraintsInvolvedIn).\n";
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
   * id: _43291
   */
  if(args.Length() == 1 && (args[0]->IsNull() || (args[0]->IsObject() && wxNode_wxWindow::AssignableFrom(args[0]->ToObject()->GetConstructorName())))) {
    wxNode_wxWindow* otherWin = args[0]->IsNull() ? NULL : wxNodeObject::unwrap<wxNode_wxWindow>(args[0]->ToObject()); /* type: _51898 * */
    

    self->AddConstraintReference(otherWin);

    return v8::Undefined();
  }
  

  std::ostringstream errStr;
  errStr << "Could not find matching method for arguments (method name: wxWindow::AddConstraintReference).\n";
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
   * id: _43292
   */
  if(args.Length() == 1 && (args[0]->IsNull() || (args[0]->IsObject() && wxNode_wxWindow::AssignableFrom(args[0]->ToObject()->GetConstructorName())))) {
    wxNode_wxWindow* otherWin = args[0]->IsNull() ? NULL : wxNodeObject::unwrap<wxNode_wxWindow>(args[0]->ToObject()); /* type: _51898 * */
    

    self->RemoveConstraintReference(otherWin);

    return v8::Undefined();
  }
  

  std::ostringstream errStr;
  errStr << "Could not find matching method for arguments (method name: wxWindow::RemoveConstraintReference).\n";
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
   * id: _43293
   */
  if(args.Length() == 0) {
    

    self->DeleteRelatedConstraints();

    return v8::Undefined();
  }
  

  std::ostringstream errStr;
  errStr << "Could not find matching method for arguments (method name: wxWindow::DeleteRelatedConstraints).\n";
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
   * id: _43294
   */
  if(args.Length() == 0) {
    

    self->ResetConstraints();

    return v8::Undefined();
  }
  

  std::ostringstream errStr;
  errStr << "Could not find matching method for arguments (method name: wxWindow::ResetConstraints).\n";
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
   * id: _43295
   */
  if(args.Length() == 1 && args[0]->IsBoolean()) {
    bool recurse = args[0]->ToBoolean()->Value(); /* type: _14830  */
    

    self->SetConstraintSizes(recurse);

    return v8::Undefined();
  }
  
  /*
   * id: _43295
   */
  if(args.Length() == 0) {
    

    self->SetConstraintSizes();

    return v8::Undefined();
  }
  

  std::ostringstream errStr;
  errStr << "Could not find matching method for arguments (method name: wxWindow::SetConstraintSizes).\n";
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
   * id: _43296
   */
  if(args.Length() == 1 && false) {
    int noChanges; /* type: _16655 * */
    

    bool returnVal = self->LayoutPhase1(&noChanges);

    return scope.Close(v8::Boolean::New(returnVal));
  }
  

  std::ostringstream errStr;
  errStr << "Could not find matching method for arguments (method name: wxWindow::LayoutPhase1).\n";
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
   * id: _43297
   */
  if(args.Length() == 1 && false) {
    int noChanges; /* type: _16655 * */
    

    bool returnVal = self->LayoutPhase2(&noChanges);

    return scope.Close(v8::Boolean::New(returnVal));
  }
  

  std::ostringstream errStr;
  errStr << "Could not find matching method for arguments (method name: wxWindow::LayoutPhase2).\n";
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
   * id: _43298
   */
  if(args.Length() == 1 && args[0]->IsNumber()) {
    int phase = (int)args[0]->ToInt32()->Value(); /* type: _165  */
    

    bool returnVal = self->DoPhase(phase);

    return scope.Close(v8::Boolean::New(returnVal));
  }
  

  std::ostringstream errStr;
  errStr << "Could not find matching method for arguments (method name: wxWindow::DoPhase).\n";
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
   * id: _43299
   */
  if(args.Length() == 4 && args[0]->IsNumber() && args[1]->IsNumber() && args[2]->IsNumber() && args[3]->IsNumber()) {
    int x = (int)args[0]->ToInt32()->Value(); /* type: _165  */
    int y = (int)args[1]->ToInt32()->Value(); /* type: _165  */
    int w = (int)args[2]->ToInt32()->Value(); /* type: _165  */
    int h = (int)args[3]->ToInt32()->Value(); /* type: _165  */
    

    self->SetSizeConstraint(x, y, w, h);

    return v8::Undefined();
  }
  

  std::ostringstream errStr;
  errStr << "Could not find matching method for arguments (method name: wxWindow::SetSizeConstraint).\n";
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
   * id: _43300
   */
  if(args.Length() == 2 && args[0]->IsNumber() && args[1]->IsNumber()) {
    int x = (int)args[0]->ToInt32()->Value(); /* type: _165  */
    int y = (int)args[1]->ToInt32()->Value(); /* type: _165  */
    

    self->MoveConstraint(x, y);

    return v8::Undefined();
  }
  

  std::ostringstream errStr;
  errStr << "Could not find matching method for arguments (method name: wxWindow::MoveConstraint).\n";
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
   * id: _43301
   */
  if(args.Length() == 2 && false && false) {
    int w; /* type: _16655 * */
    int h; /* type: _16655 * */
    

    self->GetSizeConstraint(&w, &h);

    return v8::Undefined();
  }
  

  std::ostringstream errStr;
  errStr << "Could not find matching method for arguments (method name: wxWindow::GetSizeConstraint).\n";
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
   * id: _43302
   */
  if(args.Length() == 2 && false && false) {
    int w; /* type: _16655 * */
    int h; /* type: _16655 * */
    

    self->GetClientSizeConstraint(&w, &h);

    return v8::Undefined();
  }
  

  std::ostringstream errStr;
  errStr << "Could not find matching method for arguments (method name: wxWindow::GetClientSizeConstraint).\n";
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
   * id: _43303
   */
  if(args.Length() == 2 && false && false) {
    int x; /* type: _16655 * */
    int y; /* type: _16655 * */
    

    self->GetPositionConstraint(&x, &y);

    return v8::Undefined();
  }
  

  std::ostringstream errStr;
  errStr << "Could not find matching method for arguments (method name: wxWindow::GetPositionConstraint).\n";
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
   * id: _43304
   */
  if(args.Length() == 1 && args[0]->IsBoolean()) {
    bool autoLayout = args[0]->ToBoolean()->Value(); /* type: _14830  */
    

    self->SetAutoLayout(autoLayout);

    return v8::Undefined();
  }
  

  std::ostringstream errStr;
  errStr << "Could not find matching method for arguments (method name: wxWindow::SetAutoLayout).\n";
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
   * id: _43305
   */
  if(args.Length() == 0) {
    

    bool returnVal = self->GetAutoLayout();

    return scope.Close(v8::Boolean::New(returnVal));
  }
  

  std::ostringstream errStr;
  errStr << "Could not find matching method for arguments (method name: wxWindow::GetAutoLayout).\n";
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
   * id: _43306
   */
  if(args.Length() == 0) {
    

    bool returnVal = self->Layout();

    return scope.Close(v8::Boolean::New(returnVal));
  }
  

  std::ostringstream errStr;
  errStr << "Could not find matching method for arguments (method name: wxWindow::Layout).\n";
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
   * id: _43307
   */
  if(args.Length() == 2 && (args[0]->IsNull() || (args[0]->IsObject() && wxNode_wxSizer::AssignableFrom(args[0]->ToObject()->GetConstructorName()))) && args[1]->IsBoolean()) {
    wxNode_wxSizer* sizer = args[0]->IsNull() ? NULL : wxNodeObject::unwrap<wxNode_wxSizer>(args[0]->ToObject()); /* type: _58915 * */
    bool deleteOld = args[1]->ToBoolean()->Value(); /* type: _14830  */
    

    self->SetSizer(sizer, deleteOld);

    return v8::Undefined();
  }
  
  /*
   * id: _43307
   */
  if(args.Length() == 1 && (args[0]->IsNull() || (args[0]->IsObject() && wxNode_wxSizer::AssignableFrom(args[0]->ToObject()->GetConstructorName())))) {
    wxNode_wxSizer* sizer = args[0]->IsNull() ? NULL : wxNodeObject::unwrap<wxNode_wxSizer>(args[0]->ToObject()); /* type: _58915 * */
    

    self->SetSizer(sizer);

    return v8::Undefined();
  }
  

  std::ostringstream errStr;
  errStr << "Could not find matching method for arguments (method name: wxWindow::SetSizer).\n";
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
   * id: _43308
   */
  if(args.Length() == 2 && (args[0]->IsNull() || (args[0]->IsObject() && wxNode_wxSizer::AssignableFrom(args[0]->ToObject()->GetConstructorName()))) && args[1]->IsBoolean()) {
    wxNode_wxSizer* sizer = args[0]->IsNull() ? NULL : wxNodeObject::unwrap<wxNode_wxSizer>(args[0]->ToObject()); /* type: _58915 * */
    bool deleteOld = args[1]->ToBoolean()->Value(); /* type: _14830  */
    

    self->SetSizerAndFit(sizer, deleteOld);

    return v8::Undefined();
  }
  
  /*
   * id: _43308
   */
  if(args.Length() == 1 && (args[0]->IsNull() || (args[0]->IsObject() && wxNode_wxSizer::AssignableFrom(args[0]->ToObject()->GetConstructorName())))) {
    wxNode_wxSizer* sizer = args[0]->IsNull() ? NULL : wxNodeObject::unwrap<wxNode_wxSizer>(args[0]->ToObject()); /* type: _58915 * */
    

    self->SetSizerAndFit(sizer);

    return v8::Undefined();
  }
  

  std::ostringstream errStr;
  errStr << "Could not find matching method for arguments (method name: wxWindow::SetSizerAndFit).\n";
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
   * id: _43309
   */
  if(args.Length() == 0) {
    

    wxSizer* returnVal = self->GetSizer();

    return scope.Close(wxNode_wxSizer::New(returnVal));
  }
  

  std::ostringstream errStr;
  errStr << "Could not find matching method for arguments (method name: wxWindow::GetSizer).\n";
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
   * id: _43310
   */
  if(args.Length() == 1 && (args[0]->IsNull() || (args[0]->IsObject() && wxNode_wxSizer::AssignableFrom(args[0]->ToObject()->GetConstructorName())))) {
    wxNode_wxSizer* sizer = args[0]->IsNull() ? NULL : wxNodeObject::unwrap<wxNode_wxSizer>(args[0]->ToObject()); /* type: _58915 * */
    

    self->SetContainingSizer(sizer);

    return v8::Undefined();
  }
  

  std::ostringstream errStr;
  errStr << "Could not find matching method for arguments (method name: wxWindow::SetContainingSizer).\n";
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
   * id: _43311
   */
  if(args.Length() == 0) {
    

    wxSizer* returnVal = self->GetContainingSizer();

    return scope.Close(wxNode_wxSizer::New(returnVal));
  }
  

  std::ostringstream errStr;
  errStr << "Could not find matching method for arguments (method name: wxWindow::GetContainingSizer).\n";
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
   * id: _43312
   */
  if(args.Length() == 1 && args[0]->IsNumber()) {
    unsigned char arg0 = args[0]->ToInt32()->Value(); /* type: _10005  */
    

    bool returnVal = self->SetTransparent(arg0);

    return scope.Close(v8::Boolean::New(returnVal));
  }
  

  std::ostringstream errStr;
  errStr << "Could not find matching method for arguments (method name: wxWindow::SetTransparent).\n";
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
   * id: _43313
   */
  if(args.Length() == 0) {
    

    bool returnVal = self->CanSetTransparent();

    return scope.Close(v8::Boolean::New(returnVal));
  }
  

  std::ostringstream errStr;
  errStr << "Could not find matching method for arguments (method name: wxWindow::CanSetTransparent).\n";
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
  errStr << "Could not find matching method for arguments (method name: wxWindow::OnSysColourChanged).\n";
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
  errStr << "Could not find matching method for arguments (method name: wxWindow::OnInitDialog).\n";
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
  errStr << "Could not find matching method for arguments (method name: wxWindow::OnMiddleClick).\n";
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
  errStr << "Could not find matching method for arguments (method name: wxWindow::OnHelp).\n";
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
  errStr << "Could not find matching method for arguments (method name: wxWindow::OnInternalIdle).\n";
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
   * id: _43319
   */
  if(args.Length() == 1 && (args[0]->IsNull() || (args[0]->IsObject() && wxNode_wxIdleEvent::AssignableFrom(args[0]->ToObject()->GetConstructorName())))) {
    wxNode_wxIdleEvent* event = args[0]->IsNull() ? NULL : wxNodeObject::unwrap<wxNode_wxIdleEvent>(args[0]->ToObject()); /* type: _61216  */
    

    bool returnVal = self->SendIdleEvents(*event);

    return scope.Close(v8::Boolean::New(returnVal));
  }
  

  std::ostringstream errStr;
  errStr << "Could not find matching method for arguments (method name: wxWindow::SendIdleEvents).\n";
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

  

  std::ostringstream errStr;
  errStr << "Could not find matching method for arguments (method name: wxWindow::GetHandle).\n";
  errStr << "  arg count: " << args.Length() << "\n";
  for(int i = 0; i < args.Length(); i++) {
    v8::String::AsciiValue argStr(args[i]);
    errStr << "  arg[" << i << "]: " << *argStr << "\n";
  }
  return v8::ThrowException(v8::Exception::TypeError(v8::String::New(errStr.str().c_str())));
}

/*static*/ v8::Handle<v8::Value> wxNode_wxWindow::_AssociateHandle(const v8::Arguments& args) {
  v8::HandleScope scope;
  wxNode_wxWindow* self = unwrap<wxNode_wxWindow>(args.This());

  

  std::ostringstream errStr;
  errStr << "Could not find matching method for arguments (method name: wxWindow::AssociateHandle).\n";
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
   * id: _43322
   */
  if(args.Length() == 0) {
    

    self->DissociateHandle();

    return v8::Undefined();
  }
  

  std::ostringstream errStr;
  errStr << "Could not find matching method for arguments (method name: wxWindow::DissociateHandle).\n";
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
   * id: _43323
   */
  if(args.Length() == 0) {
    

    wxPalette returnVal = self->GetPalette();

    return scope.Close(wxNode_wxPalette::NewCopy(returnVal));
  }
  

  std::ostringstream errStr;
  errStr << "Could not find matching method for arguments (method name: wxWindow::GetPalette).\n";
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
   * id: _43324
   */
  if(args.Length() == 1 && (args[0]->IsNull() || (args[0]->IsObject() && wxNode_wxPalette::AssignableFrom(args[0]->ToObject()->GetConstructorName())))) {
    wxNode_wxPalette* pal = args[0]->IsNull() ? NULL : wxNodeObject::unwrap<wxNode_wxPalette>(args[0]->ToObject()); /* type: _59458  */
    

    self->SetPalette(*pal);

    return v8::Undefined();
  }
  

  std::ostringstream errStr;
  errStr << "Could not find matching method for arguments (method name: wxWindow::SetPalette).\n";
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
   * id: _43325
   */
  if(args.Length() == 0) {
    

    bool returnVal = self->HasCustomPalette();

    return scope.Close(v8::Boolean::New(returnVal));
  }
  

  std::ostringstream errStr;
  errStr << "Could not find matching method for arguments (method name: wxWindow::HasCustomPalette).\n";
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
   * id: _43326
   */
  if(args.Length() == 0) {
    

    const wxWindow* returnVal = self->GetAncestorWithCustomPalette();

    return scope.Close(wxNode_wxWindow::New(returnVal));
  }
  

  std::ostringstream errStr;
  errStr << "Could not find matching method for arguments (method name: wxWindow::GetAncestorWithCustomPalette).\n";
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
   * id: _43327
   */
  if(args.Length() == 0) {
    

    self->InheritAttributes();

    return v8::Undefined();
  }
  

  std::ostringstream errStr;
  errStr << "Could not find matching method for arguments (method name: wxWindow::InheritAttributes).\n";
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
   * id: _43328
   */
  if(args.Length() == 0) {
    

    bool returnVal = self->ShouldInheritColours();

    return scope.Close(v8::Boolean::New(returnVal));
  }
  

  std::ostringstream errStr;
  errStr << "Could not find matching method for arguments (method name: wxWindow::ShouldInheritColours).\n";
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
   * id: _43329
   */
  if(args.Length() == 0) {
    

    bool returnVal = self->CanBeOutsideClientArea();

    return scope.Close(v8::Boolean::New(returnVal));
  }
  

  std::ostringstream errStr;
  errStr << "Could not find matching method for arguments (method name: wxWindow::CanBeOutsideClientArea).\n";
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
   * id: _43330
   */
  if(args.Length() == 0) {
    

    bool returnVal = self->CanApplyThemeBorder();

    return scope.Close(v8::Boolean::New(returnVal));
  }
  

  std::ostringstream errStr;
  errStr << "Could not find matching method for arguments (method name: wxWindow::CanApplyThemeBorder).\n";
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
   * id: _43331
   */
  if(args.Length() == 0) {
    

    const wxWindow* returnVal = self->GetMainWindowOfCompositeControl();

    return scope.Close(wxNode_wxWindow::New(returnVal));
  }
  

  std::ostringstream errStr;
  errStr << "Could not find matching method for arguments (method name: wxWindow::GetMainWindowOfCompositeControl).\n";
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
   * id: _43332
   */
  if(args.Length() == 0) {
    

    bool returnVal = self->IsTopNavigationDomain();

    return scope.Close(v8::Boolean::New(returnVal));
  }
  

  std::ostringstream errStr;
  errStr << "Could not find matching method for arguments (method name: wxWindow::IsTopNavigationDomain).\n";
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
   * id: _43381
   */
  if(args.Length() == 0) {
    

    wxClassInfo* returnVal = self->GetClassInfo();

    return scope.Close(wxNode_wxClassInfo::New(returnVal));
  }
  

  std::ostringstream errStr;
  errStr << "Could not find matching method for arguments (method name: wxWindow::GetClassInfo).\n";
  errStr << "  arg count: " << args.Length() << "\n";
  for(int i = 0; i < args.Length(); i++) {
    v8::String::AsciiValue argStr(args[i]);
    errStr << "  arg[" << i << "]: " << *argStr << "\n";
  }
  return v8::ThrowException(v8::Exception::TypeError(v8::String::New(errStr.str().c_str())));
}

