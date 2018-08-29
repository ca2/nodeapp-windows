// Copyright (c) 2016 The Chromium Embedded Framework Authors. All rights
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

#include "cpptoc/views/button_delegate_cpptoc.h"
#include "cpptoc/views/view_delegate_cpptoc.h"
#include "ctocpp/views/browser_view_ctocpp.h"
#include "ctocpp/views/button_ctocpp.h"
#include "ctocpp/image_ctocpp.h"
#include "ctocpp/views/label_button_ctocpp.h"
#include "ctocpp/views/menu_button_ctocpp.h"
#include "ctocpp/views/panel_ctocpp.h"
#include "ctocpp/views/scroll_view_ctocpp.h"
#include "ctocpp/views/textfield_ctocpp.h"
#include "ctocpp/views/view_ctocpp.h"
#include "ctocpp/views/window_ctocpp.h"


// STATIC METHODS - Body may be edited by hand.

CefRefPtr<CefLabelButton> CefLabelButton::CreateLabelButton(
    CefRefPtr<CefButtonDelegate> delegate, const CefString& text,
    bool with_frame) {
  // AUTO-GENERATED CONTENT - DELETE THIS COMMENT BEFORE MODIFYING

  // Verify param: delegate; type: refptr_diff
  DCHECK(delegate.get());
  if (!delegate.get())
    return NULL;
  // Unverified params: text

  // Execute
  cef_label_button_t* _retval = cef_label_button_create(
      CefButtonDelegateCppToC::Wrap(delegate),
      text.GetStruct(),
      with_frame);

  // Return type: refptr_same
  return CefLabelButtonCToCpp::Wrap(_retval);
}


// VIRTUAL METHODS - Body may be edited by hand.

CefRefPtr<CefMenuButton> CefLabelButtonCToCpp::AsMenuButton() {
  cef_label_button_t* _struct = GetStruct();
  if (CEF_MEMBER_MISSING(_struct, as_menu_button))
    return NULL;

  // AUTO-GENERATED CONTENT - DELETE THIS COMMENT BEFORE MODIFYING

  // Execute
  cef_menu_button_t* _retval = _struct->as_menu_button(_struct);

  // Return type: refptr_same
  return CefMenuButtonCToCpp::Wrap(_retval);
}

void CefLabelButtonCToCpp::SetText(const CefString& text) {
  cef_label_button_t* _struct = GetStruct();
  if (CEF_MEMBER_MISSING(_struct, set_text))
    return;

  // AUTO-GENERATED CONTENT - DELETE THIS COMMENT BEFORE MODIFYING

  // Verify param: text; type: string_byref_const
  DCHECK(!text.empty());
  if (text.empty())
    return;

  // Execute
  _struct->set_text(_struct,
      text.GetStruct());
}

CefString CefLabelButtonCToCpp::GetText() {
  cef_label_button_t* _struct = GetStruct();
  if (CEF_MEMBER_MISSING(_struct, get_text))
    return CefString();

  // AUTO-GENERATED CONTENT - DELETE THIS COMMENT BEFORE MODIFYING

  // Execute
  cef_string_userfree_t _retval = _struct->get_text(_struct);

  // Return type: string
  CefString _retvalStr;
  _retvalStr.AttachToUserFree(_retval);
  return _retvalStr;
}

void CefLabelButtonCToCpp::SetImage(cef_button_state_t button_state,
    CefRefPtr<CefImage> image) {
  cef_label_button_t* _struct = GetStruct();
  if (CEF_MEMBER_MISSING(_struct, set_image))
    return;

  // AUTO-GENERATED CONTENT - DELETE THIS COMMENT BEFORE MODIFYING

  // Unverified params: image

  // Execute
  _struct->set_image(_struct,
      button_state,
      CefImageCToCpp::Unwrap(image));
}

CefRefPtr<CefImage> CefLabelButtonCToCpp::GetImage(
    cef_button_state_t button_state) {
  cef_label_button_t* _struct = GetStruct();
  if (CEF_MEMBER_MISSING(_struct, get_image))
    return NULL;

  // AUTO-GENERATED CONTENT - DELETE THIS COMMENT BEFORE MODIFYING

  // Execute
  cef_image_t* _retval = _struct->get_image(_struct,
      button_state);

  // Return type: refptr_same
  return CefImageCToCpp::Wrap(_retval);
}

void CefLabelButtonCToCpp::SetTextColor(cef_button_state_t for_state,
    cef_color_t color) {
  cef_label_button_t* _struct = GetStruct();
  if (CEF_MEMBER_MISSING(_struct, set_text_color))
    return;

  // AUTO-GENERATED CONTENT - DELETE THIS COMMENT BEFORE MODIFYING

  // Execute
  _struct->set_text_color(_struct,
      for_state,
      color);
}

void CefLabelButtonCToCpp::SetEnabledTextColors(cef_color_t color) {
  cef_label_button_t* _struct = GetStruct();
  if (CEF_MEMBER_MISSING(_struct, set_enabled_text_colors))
    return;

  // AUTO-GENERATED CONTENT - DELETE THIS COMMENT BEFORE MODIFYING

  // Execute
  _struct->set_enabled_text_colors(_struct,
      color);
}

void CefLabelButtonCToCpp::SetFontList(const CefString& font_list) {
  cef_label_button_t* _struct = GetStruct();
  if (CEF_MEMBER_MISSING(_struct, set_font_list))
    return;

  // AUTO-GENERATED CONTENT - DELETE THIS COMMENT BEFORE MODIFYING

  // Verify param: font_list; type: string_byref_const
  DCHECK(!font_list.empty());
  if (font_list.empty())
    return;

  // Execute
  _struct->set_font_list(_struct,
      font_list.GetStruct());
}

void CefLabelButtonCToCpp::SetHorizontalAlignment(
    cef_horizontal_alignment_t alignment) {
  cef_label_button_t* _struct = GetStruct();
  if (CEF_MEMBER_MISSING(_struct, set_horizontal_alignment))
    return;

  // AUTO-GENERATED CONTENT - DELETE THIS COMMENT BEFORE MODIFYING

  // Execute
  _struct->set_horizontal_alignment(_struct,
      alignment);
}

void CefLabelButtonCToCpp::SetMinimumSize(const CefSize& size) {
  cef_label_button_t* _struct = GetStruct();
  if (CEF_MEMBER_MISSING(_struct, set_minimum_size))
    return;

  // AUTO-GENERATED CONTENT - DELETE THIS COMMENT BEFORE MODIFYING

  // Execute
  _struct->set_minimum_size(_struct,
      &size);
}

void CefLabelButtonCToCpp::SetMaximumSize(const CefSize& size) {
  cef_label_button_t* _struct = GetStruct();
  if (CEF_MEMBER_MISSING(_struct, set_maximum_size))
    return;

  // AUTO-GENERATED CONTENT - DELETE THIS COMMENT BEFORE MODIFYING

  // Execute
  _struct->set_maximum_size(_struct,
      &size);
}

CefRefPtr<CefLabelButton> CefLabelButtonCToCpp::AsLabelButton() {
  cef_button_t* _struct = reinterpret_cast<cef_button_t*>(GetStruct());
  if (CEF_MEMBER_MISSING(_struct, as_label_button))
    return NULL;

  // AUTO-GENERATED CONTENT - DELETE THIS COMMENT BEFORE MODIFYING

  // Execute
  cef_label_button_t* _retval = _struct->as_label_button(_struct);

  // Return type: refptr_same
  return CefLabelButtonCToCpp::Wrap(_retval);
}

void CefLabelButtonCToCpp::SetState(cef_button_state_t state) {
  cef_button_t* _struct = reinterpret_cast<cef_button_t*>(GetStruct());
  if (CEF_MEMBER_MISSING(_struct, set_state))
    return;

  // AUTO-GENERATED CONTENT - DELETE THIS COMMENT BEFORE MODIFYING

  // Execute
  _struct->set_state(_struct,
      state);
}

cef_button_state_t CefLabelButtonCToCpp::GetState() {
  cef_button_t* _struct = reinterpret_cast<cef_button_t*>(GetStruct());
  if (CEF_MEMBER_MISSING(_struct, get_state))
    return CEF_BUTTON_STATE_NORMAL;

  // AUTO-GENERATED CONTENT - DELETE THIS COMMENT BEFORE MODIFYING

  // Execute
  cef_button_state_t _retval = _struct->get_state(_struct);

  // Return type: simple
  return _retval;
}

void CefLabelButtonCToCpp::SetTooltipText(const CefString& tooltip_text) {
  cef_button_t* _struct = reinterpret_cast<cef_button_t*>(GetStruct());
  if (CEF_MEMBER_MISSING(_struct, set_tooltip_text))
    return;

  // AUTO-GENERATED CONTENT - DELETE THIS COMMENT BEFORE MODIFYING

  // Verify param: tooltip_text; type: string_byref_const
  DCHECK(!tooltip_text.empty());
  if (tooltip_text.empty())
    return;

  // Execute
  _struct->set_tooltip_text(_struct,
      tooltip_text.GetStruct());
}

void CefLabelButtonCToCpp::SetAccessibleName(const CefString& name) {
  cef_button_t* _struct = reinterpret_cast<cef_button_t*>(GetStruct());
  if (CEF_MEMBER_MISSING(_struct, set_accessible_name))
    return;

  // AUTO-GENERATED CONTENT - DELETE THIS COMMENT BEFORE MODIFYING

  // Verify param: name; type: string_byref_const
  DCHECK(!name.empty());
  if (name.empty())
    return;

  // Execute
  _struct->set_accessible_name(_struct,
      name.GetStruct());
}

CefRefPtr<CefBrowserView> CefLabelButtonCToCpp::AsBrowserView() {
  cef_view_t* _struct = reinterpret_cast<cef_view_t*>(GetStruct());
  if (CEF_MEMBER_MISSING(_struct, as_browser_view))
    return NULL;

  // AUTO-GENERATED CONTENT - DELETE THIS COMMENT BEFORE MODIFYING

  // Execute
  cef_browser_view_t* _retval = _struct->as_browser_view(_struct);

  // Return type: refptr_same
  return CefBrowserViewCToCpp::Wrap(_retval);
}

CefRefPtr<CefButton> CefLabelButtonCToCpp::AsButton() {
  cef_view_t* _struct = reinterpret_cast<cef_view_t*>(GetStruct());
  if (CEF_MEMBER_MISSING(_struct, as_button))
    return NULL;

  // AUTO-GENERATED CONTENT - DELETE THIS COMMENT BEFORE MODIFYING

  // Execute
  cef_button_t* _retval = _struct->as_button(_struct);

  // Return type: refptr_same
  return CefButtonCToCpp::Wrap(_retval);
}

CefRefPtr<CefPanel> CefLabelButtonCToCpp::AsPanel() {
  cef_view_t* _struct = reinterpret_cast<cef_view_t*>(GetStruct());
  if (CEF_MEMBER_MISSING(_struct, as_panel))
    return NULL;

  // AUTO-GENERATED CONTENT - DELETE THIS COMMENT BEFORE MODIFYING

  // Execute
  cef_panel_t* _retval = _struct->as_panel(_struct);

  // Return type: refptr_same
  return CefPanelCToCpp::Wrap(_retval);
}

CefRefPtr<CefScrollView> CefLabelButtonCToCpp::AsScrollView() {
  cef_view_t* _struct = reinterpret_cast<cef_view_t*>(GetStruct());
  if (CEF_MEMBER_MISSING(_struct, as_scroll_view))
    return NULL;

  // AUTO-GENERATED CONTENT - DELETE THIS COMMENT BEFORE MODIFYING

  // Execute
  cef_scroll_view_t* _retval = _struct->as_scroll_view(_struct);

  // Return type: refptr_same
  return CefScrollViewCToCpp::Wrap(_retval);
}

CefRefPtr<CefTextfield> CefLabelButtonCToCpp::AsTextfield() {
  cef_view_t* _struct = reinterpret_cast<cef_view_t*>(GetStruct());
  if (CEF_MEMBER_MISSING(_struct, as_textfield))
    return NULL;

  // AUTO-GENERATED CONTENT - DELETE THIS COMMENT BEFORE MODIFYING

  // Execute
  cef_textfield_t* _retval = _struct->as_textfield(_struct);

  // Return type: refptr_same
  return CefTextfieldCToCpp::Wrap(_retval);
}

CefString CefLabelButtonCToCpp::GetTypeString() {
  cef_view_t* _struct = reinterpret_cast<cef_view_t*>(GetStruct());
  if (CEF_MEMBER_MISSING(_struct, get_type_string))
    return CefString();

  // AUTO-GENERATED CONTENT - DELETE THIS COMMENT BEFORE MODIFYING

  // Execute
  cef_string_userfree_t _retval = _struct->get_type_string(_struct);

  // Return type: string
  CefString _retvalStr;
  _retvalStr.AttachToUserFree(_retval);
  return _retvalStr;
}

CefString CefLabelButtonCToCpp::ToString(bool include_children) {
  cef_view_t* _struct = reinterpret_cast<cef_view_t*>(GetStruct());
  if (CEF_MEMBER_MISSING(_struct, to_string))
    return CefString();

  // AUTO-GENERATED CONTENT - DELETE THIS COMMENT BEFORE MODIFYING

  // Execute
  cef_string_userfree_t _retval = _struct->to_string(_struct,
      include_children);

  // Return type: string
  CefString _retvalStr;
  _retvalStr.AttachToUserFree(_retval);
  return _retvalStr;
}

bool CefLabelButtonCToCpp::IsValid() {
  cef_view_t* _struct = reinterpret_cast<cef_view_t*>(GetStruct());
  if (CEF_MEMBER_MISSING(_struct, is_valid))
    return false;

  // AUTO-GENERATED CONTENT - DELETE THIS COMMENT BEFORE MODIFYING

  // Execute
  int _retval = _struct->is_valid(_struct);

  // Return type: bool
  return _retval?true:false;
}

bool CefLabelButtonCToCpp::IsAttached() {
  cef_view_t* _struct = reinterpret_cast<cef_view_t*>(GetStruct());
  if (CEF_MEMBER_MISSING(_struct, is_attached))
    return false;

  // AUTO-GENERATED CONTENT - DELETE THIS COMMENT BEFORE MODIFYING

  // Execute
  int _retval = _struct->is_attached(_struct);

  // Return type: bool
  return _retval?true:false;
}

bool CefLabelButtonCToCpp::IsSame(CefRefPtr<CefView> that) {
  cef_view_t* _struct = reinterpret_cast<cef_view_t*>(GetStruct());
  if (CEF_MEMBER_MISSING(_struct, is_same))
    return false;

  // AUTO-GENERATED CONTENT - DELETE THIS COMMENT BEFORE MODIFYING

  // Verify param: that; type: refptr_same
  DCHECK(that.get());
  if (!that.get())
    return false;

  // Execute
  int _retval = _struct->is_same(_struct,
      CefViewCToCpp::Unwrap(that));

  // Return type: bool
  return _retval?true:false;
}

CefRefPtr<CefViewDelegate> CefLabelButtonCToCpp::GetDelegate() {
  cef_view_t* _struct = reinterpret_cast<cef_view_t*>(GetStruct());
  if (CEF_MEMBER_MISSING(_struct, get_delegate))
    return NULL;

  // AUTO-GENERATED CONTENT - DELETE THIS COMMENT BEFORE MODIFYING

  // Execute
  cef_view_delegate_t* _retval = _struct->get_delegate(_struct);

  // Return type: refptr_diff
  return CefViewDelegateCppToC::Unwrap(_retval);
}

CefRefPtr<CefWindow> CefLabelButtonCToCpp::GetWindow() {
  cef_view_t* _struct = reinterpret_cast<cef_view_t*>(GetStruct());
  if (CEF_MEMBER_MISSING(_struct, get_window))
    return NULL;

  // AUTO-GENERATED CONTENT - DELETE THIS COMMENT BEFORE MODIFYING

  // Execute
  cef_window_t* _retval = _struct->get_window(_struct);

  // Return type: refptr_same
  return CefWindowCToCpp::Wrap(_retval);
}

int CefLabelButtonCToCpp::GetID() {
  cef_view_t* _struct = reinterpret_cast<cef_view_t*>(GetStruct());
  if (CEF_MEMBER_MISSING(_struct, get_id))
    return 0;

  // AUTO-GENERATED CONTENT - DELETE THIS COMMENT BEFORE MODIFYING

  // Execute
  int _retval = _struct->get_id(_struct);

  // Return type: simple
  return _retval;
}

void CefLabelButtonCToCpp::SetID(int id) {
  cef_view_t* _struct = reinterpret_cast<cef_view_t*>(GetStruct());
  if (CEF_MEMBER_MISSING(_struct, set_id))
    return;

  // AUTO-GENERATED CONTENT - DELETE THIS COMMENT BEFORE MODIFYING

  // Execute
  _struct->set_id(_struct,
      id);
}

CefRefPtr<CefView> CefLabelButtonCToCpp::GetParentView() {
  cef_view_t* _struct = reinterpret_cast<cef_view_t*>(GetStruct());
  if (CEF_MEMBER_MISSING(_struct, get_parent_view))
    return NULL;

  // AUTO-GENERATED CONTENT - DELETE THIS COMMENT BEFORE MODIFYING

  // Execute
  cef_view_t* _retval = _struct->get_parent_view(_struct);

  // Return type: refptr_same
  return CefViewCToCpp::Wrap(_retval);
}

CefRefPtr<CefView> CefLabelButtonCToCpp::GetViewForID(int id) {
  cef_view_t* _struct = reinterpret_cast<cef_view_t*>(GetStruct());
  if (CEF_MEMBER_MISSING(_struct, get_view_for_id))
    return NULL;

  // AUTO-GENERATED CONTENT - DELETE THIS COMMENT BEFORE MODIFYING

  // Execute
  cef_view_t* _retval = _struct->get_view_for_id(_struct,
      id);

  // Return type: refptr_same
  return CefViewCToCpp::Wrap(_retval);
}

void CefLabelButtonCToCpp::SetBounds(const CefRect& bounds) {
  cef_view_t* _struct = reinterpret_cast<cef_view_t*>(GetStruct());
  if (CEF_MEMBER_MISSING(_struct, set_bounds))
    return;

  // AUTO-GENERATED CONTENT - DELETE THIS COMMENT BEFORE MODIFYING

  // Execute
  _struct->set_bounds(_struct,
      &bounds);
}

CefRect CefLabelButtonCToCpp::GetBounds() {
  cef_view_t* _struct = reinterpret_cast<cef_view_t*>(GetStruct());
  if (CEF_MEMBER_MISSING(_struct, get_bounds))
    return CefRect();

  // AUTO-GENERATED CONTENT - DELETE THIS COMMENT BEFORE MODIFYING

  // Execute
  cef_rect_t _retval = _struct->get_bounds(_struct);

  // Return type: simple
  return _retval;
}

CefRect CefLabelButtonCToCpp::GetBoundsInScreen() {
  cef_view_t* _struct = reinterpret_cast<cef_view_t*>(GetStruct());
  if (CEF_MEMBER_MISSING(_struct, get_bounds_in_screen))
    return CefRect();

  // AUTO-GENERATED CONTENT - DELETE THIS COMMENT BEFORE MODIFYING

  // Execute
  cef_rect_t _retval = _struct->get_bounds_in_screen(_struct);

  // Return type: simple
  return _retval;
}

void CefLabelButtonCToCpp::SetSize(const CefSize& size) {
  cef_view_t* _struct = reinterpret_cast<cef_view_t*>(GetStruct());
  if (CEF_MEMBER_MISSING(_struct, set_size))
    return;

  // AUTO-GENERATED CONTENT - DELETE THIS COMMENT BEFORE MODIFYING

  // Execute
  _struct->set_size(_struct,
      &size);
}

CefSize CefLabelButtonCToCpp::GetSize() {
  cef_view_t* _struct = reinterpret_cast<cef_view_t*>(GetStruct());
  if (CEF_MEMBER_MISSING(_struct, get_size))
    return CefSize();

  // AUTO-GENERATED CONTENT - DELETE THIS COMMENT BEFORE MODIFYING

  // Execute
  cef_size_t _retval = _struct->get_size(_struct);

  // Return type: simple
  return _retval;
}

void CefLabelButtonCToCpp::SetPosition(const CefPoint& position) {
  cef_view_t* _struct = reinterpret_cast<cef_view_t*>(GetStruct());
  if (CEF_MEMBER_MISSING(_struct, set_position))
    return;

  // AUTO-GENERATED CONTENT - DELETE THIS COMMENT BEFORE MODIFYING

  // Execute
  _struct->set_position(_struct,
      &position);
}

CefPoint CefLabelButtonCToCpp::GetPosition() {
  cef_view_t* _struct = reinterpret_cast<cef_view_t*>(GetStruct());
  if (CEF_MEMBER_MISSING(_struct, get_position))
    return CefPoint();

  // AUTO-GENERATED CONTENT - DELETE THIS COMMENT BEFORE MODIFYING

  // Execute
  cef_point_t _retval = _struct->get_position(_struct);

  // Return type: simple
  return _retval;
}

CefSize CefLabelButtonCToCpp::GetPreferredSize() {
  cef_view_t* _struct = reinterpret_cast<cef_view_t*>(GetStruct());
  if (CEF_MEMBER_MISSING(_struct, get_preferred_size))
    return CefSize();

  // AUTO-GENERATED CONTENT - DELETE THIS COMMENT BEFORE MODIFYING

  // Execute
  cef_size_t _retval = _struct->get_preferred_size(_struct);

  // Return type: simple
  return _retval;
}

void CefLabelButtonCToCpp::SizeToPreferredSize() {
  cef_view_t* _struct = reinterpret_cast<cef_view_t*>(GetStruct());
  if (CEF_MEMBER_MISSING(_struct, size_to_preferred_size))
    return;

  // AUTO-GENERATED CONTENT - DELETE THIS COMMENT BEFORE MODIFYING

  // Execute
  _struct->size_to_preferred_size(_struct);
}

CefSize CefLabelButtonCToCpp::GetMinimumSize() {
  cef_view_t* _struct = reinterpret_cast<cef_view_t*>(GetStruct());
  if (CEF_MEMBER_MISSING(_struct, get_minimum_size))
    return CefSize();

  // AUTO-GENERATED CONTENT - DELETE THIS COMMENT BEFORE MODIFYING

  // Execute
  cef_size_t _retval = _struct->get_minimum_size(_struct);

  // Return type: simple
  return _retval;
}

CefSize CefLabelButtonCToCpp::GetMaximumSize() {
  cef_view_t* _struct = reinterpret_cast<cef_view_t*>(GetStruct());
  if (CEF_MEMBER_MISSING(_struct, get_maximum_size))
    return CefSize();

  // AUTO-GENERATED CONTENT - DELETE THIS COMMENT BEFORE MODIFYING

  // Execute
  cef_size_t _retval = _struct->get_maximum_size(_struct);

  // Return type: simple
  return _retval;
}

int CefLabelButtonCToCpp::GetHeightForWidth(int width) {
  cef_view_t* _struct = reinterpret_cast<cef_view_t*>(GetStruct());
  if (CEF_MEMBER_MISSING(_struct, get_height_for_width))
    return 0;

  // AUTO-GENERATED CONTENT - DELETE THIS COMMENT BEFORE MODIFYING

  // Execute
  int _retval = _struct->get_height_for_width(_struct,
      width);

  // Return type: simple
  return _retval;
}

void CefLabelButtonCToCpp::InvalidateLayout() {
  cef_view_t* _struct = reinterpret_cast<cef_view_t*>(GetStruct());
  if (CEF_MEMBER_MISSING(_struct, invalidate_layout))
    return;

  // AUTO-GENERATED CONTENT - DELETE THIS COMMENT BEFORE MODIFYING

  // Execute
  _struct->invalidate_layout(_struct);
}

void CefLabelButtonCToCpp::SetVisible(bool visible) {
  cef_view_t* _struct = reinterpret_cast<cef_view_t*>(GetStruct());
  if (CEF_MEMBER_MISSING(_struct, set_visible))
    return;

  // AUTO-GENERATED CONTENT - DELETE THIS COMMENT BEFORE MODIFYING

  // Execute
  _struct->set_visible(_struct,
      visible);
}

bool CefLabelButtonCToCpp::IsVisible() {
  cef_view_t* _struct = reinterpret_cast<cef_view_t*>(GetStruct());
  if (CEF_MEMBER_MISSING(_struct, is_visible))
    return false;

  // AUTO-GENERATED CONTENT - DELETE THIS COMMENT BEFORE MODIFYING

  // Execute
  int _retval = _struct->is_visible(_struct);

  // Return type: bool
  return _retval?true:false;
}

bool CefLabelButtonCToCpp::IsDrawn() {
  cef_view_t* _struct = reinterpret_cast<cef_view_t*>(GetStruct());
  if (CEF_MEMBER_MISSING(_struct, is_drawn))
    return false;

  // AUTO-GENERATED CONTENT - DELETE THIS COMMENT BEFORE MODIFYING

  // Execute
  int _retval = _struct->is_drawn(_struct);

  // Return type: bool
  return _retval?true:false;
}

void CefLabelButtonCToCpp::SetEnabled(bool enabled) {
  cef_view_t* _struct = reinterpret_cast<cef_view_t*>(GetStruct());
  if (CEF_MEMBER_MISSING(_struct, set_enabled))
    return;

  // AUTO-GENERATED CONTENT - DELETE THIS COMMENT BEFORE MODIFYING

  // Execute
  _struct->set_enabled(_struct,
      enabled);
}

bool CefLabelButtonCToCpp::IsEnabled() {
  cef_view_t* _struct = reinterpret_cast<cef_view_t*>(GetStruct());
  if (CEF_MEMBER_MISSING(_struct, is_enabled))
    return false;

  // AUTO-GENERATED CONTENT - DELETE THIS COMMENT BEFORE MODIFYING

  // Execute
  int _retval = _struct->is_enabled(_struct);

  // Return type: bool
  return _retval?true:false;
}

void CefLabelButtonCToCpp::SetFocusable(bool focusable) {
  cef_view_t* _struct = reinterpret_cast<cef_view_t*>(GetStruct());
  if (CEF_MEMBER_MISSING(_struct, set_focusable))
    return;

  // AUTO-GENERATED CONTENT - DELETE THIS COMMENT BEFORE MODIFYING

  // Execute
  _struct->set_focusable(_struct,
      focusable);
}

bool CefLabelButtonCToCpp::IsFocusable() {
  cef_view_t* _struct = reinterpret_cast<cef_view_t*>(GetStruct());
  if (CEF_MEMBER_MISSING(_struct, is_focusable))
    return false;

  // AUTO-GENERATED CONTENT - DELETE THIS COMMENT BEFORE MODIFYING

  // Execute
  int _retval = _struct->is_focusable(_struct);

  // Return type: bool
  return _retval?true:false;
}

bool CefLabelButtonCToCpp::IsAccessibilityFocusable() {
  cef_view_t* _struct = reinterpret_cast<cef_view_t*>(GetStruct());
  if (CEF_MEMBER_MISSING(_struct, is_accessibility_focusable))
    return false;

  // AUTO-GENERATED CONTENT - DELETE THIS COMMENT BEFORE MODIFYING

  // Execute
  int _retval = _struct->is_accessibility_focusable(_struct);

  // Return type: bool
  return _retval?true:false;
}

void CefLabelButtonCToCpp::RequestFocus() {
  cef_view_t* _struct = reinterpret_cast<cef_view_t*>(GetStruct());
  if (CEF_MEMBER_MISSING(_struct, request_focus))
    return;

  // AUTO-GENERATED CONTENT - DELETE THIS COMMENT BEFORE MODIFYING

  // Execute
  _struct->request_focus(_struct);
}

void CefLabelButtonCToCpp::SetBackgroundColor(cef_color_t color) {
  cef_view_t* _struct = reinterpret_cast<cef_view_t*>(GetStruct());
  if (CEF_MEMBER_MISSING(_struct, set_background_color))
    return;

  // AUTO-GENERATED CONTENT - DELETE THIS COMMENT BEFORE MODIFYING

  // Execute
  _struct->set_background_color(_struct,
      color);
}

cef_color_t CefLabelButtonCToCpp::GetBackgroundColor() {
  cef_view_t* _struct = reinterpret_cast<cef_view_t*>(GetStruct());
  if (CEF_MEMBER_MISSING(_struct, get_background_color))
    return 0;

  // AUTO-GENERATED CONTENT - DELETE THIS COMMENT BEFORE MODIFYING

  // Execute
  cef_color_t _retval = _struct->get_background_color(_struct);

  // Return type: simple
  return _retval;
}

bool CefLabelButtonCToCpp::ConvertPointToScreen(CefPoint& point) {
  cef_view_t* _struct = reinterpret_cast<cef_view_t*>(GetStruct());
  if (CEF_MEMBER_MISSING(_struct, convert_point_to_screen))
    return false;

  // AUTO-GENERATED CONTENT - DELETE THIS COMMENT BEFORE MODIFYING

  // Execute
  int _retval = _struct->convert_point_to_screen(_struct,
      &point);

  // Return type: bool
  return _retval?true:false;
}

bool CefLabelButtonCToCpp::ConvertPointFromScreen(CefPoint& point) {
  cef_view_t* _struct = reinterpret_cast<cef_view_t*>(GetStruct());
  if (CEF_MEMBER_MISSING(_struct, convert_point_from_screen))
    return false;

  // AUTO-GENERATED CONTENT - DELETE THIS COMMENT BEFORE MODIFYING

  // Execute
  int _retval = _struct->convert_point_from_screen(_struct,
      &point);

  // Return type: bool
  return _retval?true:false;
}

bool CefLabelButtonCToCpp::ConvertPointToWindow(CefPoint& point) {
  cef_view_t* _struct = reinterpret_cast<cef_view_t*>(GetStruct());
  if (CEF_MEMBER_MISSING(_struct, convert_point_to_window))
    return false;

  // AUTO-GENERATED CONTENT - DELETE THIS COMMENT BEFORE MODIFYING

  // Execute
  int _retval = _struct->convert_point_to_window(_struct,
      &point);

  // Return type: bool
  return _retval?true:false;
}

bool CefLabelButtonCToCpp::ConvertPointFromWindow(CefPoint& point) {
  cef_view_t* _struct = reinterpret_cast<cef_view_t*>(GetStruct());
  if (CEF_MEMBER_MISSING(_struct, convert_point_from_window))
    return false;

  // AUTO-GENERATED CONTENT - DELETE THIS COMMENT BEFORE MODIFYING

  // Execute
  int _retval = _struct->convert_point_from_window(_struct,
      &point);

  // Return type: bool
  return _retval?true:false;
}

bool CefLabelButtonCToCpp::ConvertPointToView(CefRefPtr<CefView> view,
    CefPoint& point) {
  cef_view_t* _struct = reinterpret_cast<cef_view_t*>(GetStruct());
  if (CEF_MEMBER_MISSING(_struct, convert_point_to_view))
    return false;

  // AUTO-GENERATED CONTENT - DELETE THIS COMMENT BEFORE MODIFYING

  // Verify param: view; type: refptr_same
  DCHECK(view.get());
  if (!view.get())
    return false;

  // Execute
  int _retval = _struct->convert_point_to_view(_struct,
      CefViewCToCpp::Unwrap(view),
      &point);

  // Return type: bool
  return _retval?true:false;
}

bool CefLabelButtonCToCpp::ConvertPointFromView(CefRefPtr<CefView> view,
    CefPoint& point) {
  cef_view_t* _struct = reinterpret_cast<cef_view_t*>(GetStruct());
  if (CEF_MEMBER_MISSING(_struct, convert_point_from_view))
    return false;

  // AUTO-GENERATED CONTENT - DELETE THIS COMMENT BEFORE MODIFYING

  // Verify param: view; type: refptr_same
  DCHECK(view.get());
  if (!view.get())
    return false;

  // Execute
  int _retval = _struct->convert_point_from_view(_struct,
      CefViewCToCpp::Unwrap(view),
      &point);

  // Return type: bool
  return _retval?true:false;
}


// CONSTRUCTOR - Do not edit by hand.

CefLabelButtonCToCpp::CefLabelButtonCToCpp() {
}

template<> cef_label_button_t* CefCToCpp<CefLabelButtonCToCpp, CefLabelButton,
    cef_label_button_t>::UnwrapDerived(CefWrapperType type,
    CefLabelButton* c) {
  if (type == WT_MENU_BUTTON) {
    return reinterpret_cast<cef_label_button_t*>(CefMenuButtonCToCpp::Unwrap(
        reinterpret_cast<CefMenuButton*>(c)));
  }
  NOTREACHED() << "Unexpected class type: " << type;
  return NULL;
}

#if DCHECK_IS_ON()
template<> base::AtomicRefCount CefCToCpp<CefLabelButtonCToCpp, CefLabelButton,
    cef_label_button_t>::DebugObjCt = 0;
#endif

template<> CefWrapperType CefCToCpp<CefLabelButtonCToCpp, CefLabelButton,
    cef_label_button_t>::kWrapperType = WT_LABEL_BUTTON;
