// Copyright (c) 2021 The Chromium Embedded Framework Authors. All rights
// reserved. Use of this source code is governed by a BSD-style license that
// can be found in the LICENSE file.
//
// ---------------------------------------------------------------------------
//
// This file was generated by the CEF translator tool. If making changes by
// hand only do so within the body of existing method and function
// implementations. See the translator.README.txt file in the tools directory
// for more information.
//
// $hash=275cb37282252c06bd4fe5ad21291924d37937c0$
//

#include "libcef_dll/ctocpp/views/overlay_controller_ctocpp.h"
#include "libcef_dll/ctocpp/views/view_ctocpp.h"
#include "libcef_dll/ctocpp/views/window_ctocpp.h"
#include "libcef_dll/shutdown_checker.h"

// VIRTUAL METHODS - Body may be edited by hand.

NO_SANITIZE("cfi-icall") bool CefOverlayControllerCToCpp::IsValid() {
  shutdown_checker::AssertNotShutdown();

  cef_overlay_controller_t* _struct = GetStruct();
  if (CEF_MEMBER_MISSING(_struct, is_valid))
    return false;

  // AUTO-GENERATED CONTENT - DELETE THIS COMMENT BEFORE MODIFYING

  // Execute
  int _retval = _struct->is_valid(_struct);

  // Return type: bool
  return _retval ? true : false;
}

NO_SANITIZE("cfi-icall")
bool CefOverlayControllerCToCpp::IsSame(CefRefPtr<CefOverlayController> that) {
  shutdown_checker::AssertNotShutdown();

  cef_overlay_controller_t* _struct = GetStruct();
  if (CEF_MEMBER_MISSING(_struct, is_same))
    return false;

  // AUTO-GENERATED CONTENT - DELETE THIS COMMENT BEFORE MODIFYING

  // Verify param: that; type: refptr_same
  DCHECK(that.get());
  if (!that.get())
    return false;

  // Execute
  int _retval =
      _struct->is_same(_struct, CefOverlayControllerCToCpp::Unwrap(that));

  // Return type: bool
  return _retval ? true : false;
}

NO_SANITIZE("cfi-icall")
CefRefPtr<CefView> CefOverlayControllerCToCpp::GetContentsView() {
  shutdown_checker::AssertNotShutdown();

  cef_overlay_controller_t* _struct = GetStruct();
  if (CEF_MEMBER_MISSING(_struct, get_contents_view))
    return nullptr;

  // AUTO-GENERATED CONTENT - DELETE THIS COMMENT BEFORE MODIFYING

  // Execute
  cef_view_t* _retval = _struct->get_contents_view(_struct);

  // Return type: refptr_same
  return CefViewCToCpp::Wrap(_retval);
}

NO_SANITIZE("cfi-icall")
CefRefPtr<CefWindow> CefOverlayControllerCToCpp::GetWindow() {
  shutdown_checker::AssertNotShutdown();

  cef_overlay_controller_t* _struct = GetStruct();
  if (CEF_MEMBER_MISSING(_struct, get_window))
    return nullptr;

  // AUTO-GENERATED CONTENT - DELETE THIS COMMENT BEFORE MODIFYING

  // Execute
  cef_window_t* _retval = _struct->get_window(_struct);

  // Return type: refptr_same
  return CefWindowCToCpp::Wrap(_retval);
}

NO_SANITIZE("cfi-icall")
cef_docking_mode_t CefOverlayControllerCToCpp::GetDockingMode() {
  shutdown_checker::AssertNotShutdown();

  cef_overlay_controller_t* _struct = GetStruct();
  if (CEF_MEMBER_MISSING(_struct, get_docking_mode))
    return CEF_DOCKING_MODE_TOP_LEFT;

  // AUTO-GENERATED CONTENT - DELETE THIS COMMENT BEFORE MODIFYING

  // Execute
  cef_docking_mode_t _retval = _struct->get_docking_mode(_struct);

  // Return type: simple
  return _retval;
}

NO_SANITIZE("cfi-icall") void CefOverlayControllerCToCpp::Destroy() {
  shutdown_checker::AssertNotShutdown();

  cef_overlay_controller_t* _struct = GetStruct();
  if (CEF_MEMBER_MISSING(_struct, destroy))
    return;

  // AUTO-GENERATED CONTENT - DELETE THIS COMMENT BEFORE MODIFYING

  // Execute
  _struct->destroy(_struct);
}

NO_SANITIZE("cfi-icall")
void CefOverlayControllerCToCpp::SetBounds(const CefRect& bounds) {
  shutdown_checker::AssertNotShutdown();

  cef_overlay_controller_t* _struct = GetStruct();
  if (CEF_MEMBER_MISSING(_struct, set_bounds))
    return;

  // AUTO-GENERATED CONTENT - DELETE THIS COMMENT BEFORE MODIFYING

  // Execute
  _struct->set_bounds(_struct, &bounds);
}

NO_SANITIZE("cfi-icall") CefRect CefOverlayControllerCToCpp::GetBounds() {
  shutdown_checker::AssertNotShutdown();

  cef_overlay_controller_t* _struct = GetStruct();
  if (CEF_MEMBER_MISSING(_struct, get_bounds))
    return CefRect();

  // AUTO-GENERATED CONTENT - DELETE THIS COMMENT BEFORE MODIFYING

  // Execute
  cef_rect_t _retval = _struct->get_bounds(_struct);

  // Return type: simple
  return _retval;
}

NO_SANITIZE("cfi-icall")
CefRect CefOverlayControllerCToCpp::GetBoundsInScreen() {
  shutdown_checker::AssertNotShutdown();

  cef_overlay_controller_t* _struct = GetStruct();
  if (CEF_MEMBER_MISSING(_struct, get_bounds_in_screen))
    return CefRect();

  // AUTO-GENERATED CONTENT - DELETE THIS COMMENT BEFORE MODIFYING

  // Execute
  cef_rect_t _retval = _struct->get_bounds_in_screen(_struct);

  // Return type: simple
  return _retval;
}

NO_SANITIZE("cfi-icall")
void CefOverlayControllerCToCpp::SetSize(const CefSize& size) {
  shutdown_checker::AssertNotShutdown();

  cef_overlay_controller_t* _struct = GetStruct();
  if (CEF_MEMBER_MISSING(_struct, set_size))
    return;

  // AUTO-GENERATED CONTENT - DELETE THIS COMMENT BEFORE MODIFYING

  // Execute
  _struct->set_size(_struct, &size);
}

NO_SANITIZE("cfi-icall") CefSize CefOverlayControllerCToCpp::GetSize() {
  shutdown_checker::AssertNotShutdown();

  cef_overlay_controller_t* _struct = GetStruct();
  if (CEF_MEMBER_MISSING(_struct, get_size))
    return CefSize();

  // AUTO-GENERATED CONTENT - DELETE THIS COMMENT BEFORE MODIFYING

  // Execute
  cef_size_t _retval = _struct->get_size(_struct);

  // Return type: simple
  return _retval;
}

NO_SANITIZE("cfi-icall")
void CefOverlayControllerCToCpp::SetPosition(const CefPoint& position) {
  shutdown_checker::AssertNotShutdown();

  cef_overlay_controller_t* _struct = GetStruct();
  if (CEF_MEMBER_MISSING(_struct, set_position))
    return;

  // AUTO-GENERATED CONTENT - DELETE THIS COMMENT BEFORE MODIFYING

  // Execute
  _struct->set_position(_struct, &position);
}

NO_SANITIZE("cfi-icall") CefPoint CefOverlayControllerCToCpp::GetPosition() {
  shutdown_checker::AssertNotShutdown();

  cef_overlay_controller_t* _struct = GetStruct();
  if (CEF_MEMBER_MISSING(_struct, get_position))
    return CefPoint();

  // AUTO-GENERATED CONTENT - DELETE THIS COMMENT BEFORE MODIFYING

  // Execute
  cef_point_t _retval = _struct->get_position(_struct);

  // Return type: simple
  return _retval;
}

NO_SANITIZE("cfi-icall")
void CefOverlayControllerCToCpp::SetInsets(const CefInsets& insets) {
  shutdown_checker::AssertNotShutdown();

  cef_overlay_controller_t* _struct = GetStruct();
  if (CEF_MEMBER_MISSING(_struct, set_insets))
    return;

  // AUTO-GENERATED CONTENT - DELETE THIS COMMENT BEFORE MODIFYING

  // Execute
  _struct->set_insets(_struct, &insets);
}

NO_SANITIZE("cfi-icall") CefInsets CefOverlayControllerCToCpp::GetInsets() {
  shutdown_checker::AssertNotShutdown();

  cef_overlay_controller_t* _struct = GetStruct();
  if (CEF_MEMBER_MISSING(_struct, get_insets))
    return CefInsets();

  // AUTO-GENERATED CONTENT - DELETE THIS COMMENT BEFORE MODIFYING

  // Execute
  cef_insets_t _retval = _struct->get_insets(_struct);

  // Return type: simple
  return _retval;
}

NO_SANITIZE("cfi-icall")
void CefOverlayControllerCToCpp::SizeToPreferredSize() {
  shutdown_checker::AssertNotShutdown();

  cef_overlay_controller_t* _struct = GetStruct();
  if (CEF_MEMBER_MISSING(_struct, size_to_preferred_size))
    return;

  // AUTO-GENERATED CONTENT - DELETE THIS COMMENT BEFORE MODIFYING

  // Execute
  _struct->size_to_preferred_size(_struct);
}

NO_SANITIZE("cfi-icall")
void CefOverlayControllerCToCpp::SetVisible(bool visible) {
  shutdown_checker::AssertNotShutdown();

  cef_overlay_controller_t* _struct = GetStruct();
  if (CEF_MEMBER_MISSING(_struct, set_visible))
    return;

  // AUTO-GENERATED CONTENT - DELETE THIS COMMENT BEFORE MODIFYING

  // Execute
  _struct->set_visible(_struct, visible);
}

NO_SANITIZE("cfi-icall") bool CefOverlayControllerCToCpp::IsVisible() {
  shutdown_checker::AssertNotShutdown();

  cef_overlay_controller_t* _struct = GetStruct();
  if (CEF_MEMBER_MISSING(_struct, is_visible))
    return false;

  // AUTO-GENERATED CONTENT - DELETE THIS COMMENT BEFORE MODIFYING

  // Execute
  int _retval = _struct->is_visible(_struct);

  // Return type: bool
  return _retval ? true : false;
}

NO_SANITIZE("cfi-icall") bool CefOverlayControllerCToCpp::IsDrawn() {
  shutdown_checker::AssertNotShutdown();

  cef_overlay_controller_t* _struct = GetStruct();
  if (CEF_MEMBER_MISSING(_struct, is_drawn))
    return false;

  // AUTO-GENERATED CONTENT - DELETE THIS COMMENT BEFORE MODIFYING

  // Execute
  int _retval = _struct->is_drawn(_struct);

  // Return type: bool
  return _retval ? true : false;
}

// CONSTRUCTOR - Do not edit by hand.

CefOverlayControllerCToCpp::CefOverlayControllerCToCpp() {}

// DESTRUCTOR - Do not edit by hand.

CefOverlayControllerCToCpp::~CefOverlayControllerCToCpp() {
  shutdown_checker::AssertNotShutdown();
}

template <>
cef_overlay_controller_t* CefCToCppRefCounted<
    CefOverlayControllerCToCpp,
    CefOverlayController,
    cef_overlay_controller_t>::UnwrapDerived(CefWrapperType type,
                                             CefOverlayController* c) {
  NOTREACHED() << "Unexpected class type: " << type;
  return nullptr;
}

template <>
CefWrapperType CefCToCppRefCounted<CefOverlayControllerCToCpp,
                                   CefOverlayController,
                                   cef_overlay_controller_t>::kWrapperType =
    WT_OVERLAY_CONTROLLER;