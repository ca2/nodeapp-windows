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

#include "cpptoc/views/textfield_delegate_cpptoc.h"
#include "cpptoc/views/view_delegate_cpptoc.h"
#include "ctocpp/views/browser_view_ctocpp.h"
#include "ctocpp/views/button_ctocpp.h"
#include "ctocpp/views/panel_ctocpp.h"
#include "ctocpp/views/scroll_view_ctocpp.h"
#include "ctocpp/views/textfield_ctocpp.h"
#include "ctocpp/views/view_ctocpp.h"
#include "ctocpp/views/window_ctocpp.h"


// STATIC METHODS - Body may be edited by hand.

CefRefPtr<CefTextfield> CefTextfield::CreateTextfield(
    CefRefPtr<CefTextfieldDelegate> delegate) {
  // AUTO-GENERATED CONTENT - DELETE THIS COMMENT BEFORE MODIFYING

  // Unverified params: delegate

  // Execute
  cef_textfield_t* _retval = cef_textfield_create(
      CefTextfieldDelegateCppToC::Wrap(delegate));

  // Return type: refptr_same
  return CefTextfieldCToCpp::Wrap(_retval);
}


// VIRTUAL METHODS - Body may be edited by hand.

void CefTextfieldCToCpp::SetPasswordInput(bool password_input) {
  cef_textfield_t* _struct = GetStruct();
  if (CEF_MEMBER_MISSING(_struct, set_password_input))
    return;

  // AUTO-GENERATED CONTENT - DELETE THIS COMMENT BEFORE MODIFYING

  // Execute
  _struct->set_password_input(_struct,
      password_input);
}

bool CefTextfieldCToCpp::IsPasswordInput() {
  cef_textfield_t* _struct = GetStruct();
  if (CEF_MEMBER_MISSING(_struct, is_password_input))
    return false;

  // AUTO-GENERATED CONTENT - DELETE THIS COMMENT BEFORE MODIFYING

  // Execute
  int _retval = _struct->is_password_input(_struct);

  // Return type: bool
  return _retval?true:false;
}

void CefTextfieldCToCpp::SetReadOnly(bool read_only) {
  cef_textfield_t* _struct = GetStruct();
  if (CEF_MEMBER_MISSING(_struct, set_read_only))
    return;

  // AUTO-GENERATED CONTENT - DELETE THIS COMMENT BEFORE MODIFYING

  // Execute
  _struct->set_read_only(_struct,
      read_only);
}

bool CefTextfieldCToCpp::IsReadOnly() {
  cef_textfield_t* _struct = GetStruct();
  if (CEF_MEMBER_MISSING(_struct, is_read_only))
    return false;

  // AUTO-GENERATED CONTENT - DELETE THIS COMMENT BEFORE MODIFYING

  // Execute
  int _retval = _struct->is_read_only(_struct);

  // Return type: bool
  return _retval?true:false;
}

CefString CefTextfieldCToCpp::GetText() {
  cef_textfield_t* _struct = GetStruct();
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

void CefTextfieldCToCpp::SetText(const CefString& text) {
  cef_textfield_t* _struct = GetStruct();
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

void CefTextfieldCToCpp::AppendText(const CefString& text) {
  cef_textfield_t* _struct = GetStruct();
  if (CEF_MEMBER_MISSING(_struct, append_text))
    return;

  // AUTO-GENERATED CONTENT - DELETE THIS COMMENT BEFORE MODIFYING

  // Verify param: text; type: string_byref_const
  DCHECK(!text.empty());
  if (text.empty())
    return;

  // Execute
  _struct->append_text(_struct,
      text.GetStruct());
}

void CefTextfieldCToCpp::InsertOrReplaceText(const CefString& text) {
  cef_textfield_t* _struct = GetStruct();
  if (CEF_MEMBER_MISSING(_struct, insert_or_replace_text))
    return;

  // AUTO-GENERATED CONTENT - DELETE THIS COMMENT BEFORE MODIFYING

  // Verify param: text; type: string_byref_const
  DCHECK(!text.empty());
  if (text.empty())
    return;

  // Execute
  _struct->insert_or_replace_text(_struct,
      text.GetStruct());
}

bool CefTextfieldCToCpp::HasSelection() {
  cef_textfield_t* _struct = GetStruct();
  if (CEF_MEMBER_MISSING(_struct, has_selection))
    return false;

  // AUTO-GENERATED CONTENT - DELETE THIS COMMENT BEFORE MODIFYING

  // Execute
  int _retval = _struct->has_selection(_struct);

  // Return type: bool
  return _retval?true:false;
}

CefString CefTextfieldCToCpp::GetSelectedText() {
  cef_textfield_t* _struct = GetStruct();
  if (CEF_MEMBER_MISSING(_struct, get_selected_text))
    return CefString();

  // AUTO-GENERATED CONTENT - DELETE THIS COMMENT BEFORE MODIFYING

  // Execute
  cef_string_userfree_t _retval = _struct->get_selected_text(_struct);

  // Return type: string
  CefString _retvalStr;
  _retvalStr.AttachToUserFree(_retval);
  return _retvalStr;
}

void CefTextfieldCToCpp::SelectAll(bool reversed) {
  cef_textfield_t* _struct = GetStruct();
  if (CEF_MEMBER_MISSING(_struct, select_all))
    return;

  // AUTO-GENERATED CONTENT - DELETE THIS COMMENT BEFORE MODIFYING

  // Execute
  _struct->select_all(_struct,
      reversed);
}

void CefTextfieldCToCpp::ClearSelection() {
  cef_textfield_t* _struct = GetStruct();
  if (CEF_MEMBER_MISSING(_struct, clear_selection))
    return;

  // AUTO-GENERATED CONTENT - DELETE THIS COMMENT BEFORE MODIFYING

  // Execute
  _struct->clear_selection(_struct);
}

CefRange CefTextfieldCToCpp::GetSelectedRange() {
  cef_textfield_t* _struct = GetStruct();
  if (CEF_MEMBER_MISSING(_struct, get_selected_range))
    return CefRange();

  // AUTO-GENERATED CONTENT - DELETE THIS COMMENT BEFORE MODIFYING

  // Execute
  cef_range_t _retval = _struct->get_selected_range(_struct);

  // Return type: simple
  return _retval;
}

void CefTextfieldCToCpp::SelectRange(const CefRange& range) {
  cef_textfield_t* _struct = GetStruct();
  if (CEF_MEMBER_MISSING(_struct, select_range))
    return;

  // AUTO-GENERATED CONTENT - DELETE THIS COMMENT BEFORE MODIFYING

  // Execute
  _struct->select_range(_struct,
      &range);
}

size_t CefTextfieldCToCpp::GetCursorPosition() {
  cef_textfield_t* _struct = GetStruct();
  if (CEF_MEMBER_MISSING(_struct, get_cursor_position))
    return 0;

  // AUTO-GENERATED CONTENT - DELETE THIS COMMENT BEFORE MODIFYING

  // Execute
  size_t _retval = _struct->get_cursor_position(_struct);

  // Return type: simple
  return _retval;
}

void CefTextfieldCToCpp::SetTextColor(cef_color_t color) {
  cef_textfield_t* _struct = GetStruct();
  if (CEF_MEMBER_MISSING(_struct, set_text_color))
    return;

  // AUTO-GENERATED CONTENT - DELETE THIS COMMENT BEFORE MODIFYING

  // Execute
  _struct->set_text_color(_struct,
      color);
}

cef_color_t CefTextfieldCToCpp::GetTextColor() {
  cef_textfield_t* _struct = GetStruct();
  if (CEF_MEMBER_MISSING(_struct, get_text_color))
    return 0;

  // AUTO-GENERATED CONTENT - DELETE THIS COMMENT BEFORE MODIFYING

  // Execute
  cef_color_t _retval = _struct->get_text_color(_struct);

  // Return type: simple
  return _retval;
}

void CefTextfieldCToCpp::SetSelectionTextColor(cef_color_t color) {
  cef_textfield_t* _struct = GetStruct();
  if (CEF_MEMBER_MISSING(_struct, set_selection_text_color))
    return;

  // AUTO-GENERATED CONTENT - DELETE THIS COMMENT BEFORE MODIFYING

  // Execute
  _struct->set_selection_text_color(_struct,
      color);
}

cef_color_t CefTextfieldCToCpp::GetSelectionTextColor() {
  cef_textfield_t* _struct = GetStruct();
  if (CEF_MEMBER_MISSING(_struct, get_selection_text_color))
    return 0;

  // AUTO-GENERATED CONTENT - DELETE THIS COMMENT BEFORE MODIFYING

  // Execute
  cef_color_t _retval = _struct->get_selection_text_color(_struct);

  // Return type: simple
  return _retval;
}

void CefTextfieldCToCpp::SetSelectionBackgroundColor(cef_color_t color) {
  cef_textfield_t* _struct = GetStruct();
  if (CEF_MEMBER_MISSING(_struct, set_selection_background_color))
    return;

  // AUTO-GENERATED CONTENT - DELETE THIS COMMENT BEFORE MODIFYING

  // Execute
  _struct->set_selection_background_color(_struct,
      color);
}

cef_color_t CefTextfieldCToCpp::GetSelectionBackgroundColor() {
  cef_textfield_t* _struct = GetStruct();
  if (CEF_MEMBER_MISSING(_struct, get_selection_background_color))
    return 0;

  // AUTO-GENERATED CONTENT - DELETE THIS COMMENT BEFORE MODIFYING

  // Execute
  cef_color_t _retval = _struct->get_selection_background_color(_struct);

  // Return type: simple
  return _retval;
}

void CefTextfieldCToCpp::SetFontList(const CefString& font_list) {
  cef_textfield_t* _struct = GetStruct();
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

void CefTextfieldCToCpp::ApplyTextColor(cef_color_t color,
    const CefRange& range) {
  cef_textfield_t* _struct = GetStruct();
  if (CEF_MEMBER_MISSING(_struct, apply_text_color))
    return;

  // AUTO-GENERATED CONTENT - DELETE THIS COMMENT BEFORE MODIFYING

  // Execute
  _struct->apply_text_color(_struct,
      color,
      &range);
}

void CefTextfieldCToCpp::ApplyTextStyle(cef_text_style_t style, bool add,
    const CefRange& range) {
  cef_textfield_t* _struct = GetStruct();
  if (CEF_MEMBER_MISSING(_struct, apply_text_style))
    return;

  // AUTO-GENERATED CONTENT - DELETE THIS COMMENT BEFORE MODIFYING

  // Execute
  _struct->apply_text_style(_struct,
      style,
      add,
      &range);
}

bool CefTextfieldCToCpp::IsCommandEnabled(int command_id) {
  cef_textfield_t* _struct = GetStruct();
  if (CEF_MEMBER_MISSING(_struct, is_command_enabled))
    return false;

  // AUTO-GENERATED CONTENT - DELETE THIS COMMENT BEFORE MODIFYING

  // Execute
  int _retval = _struct->is_command_enabled(_struct,
      command_id);

  // Return type: bool
  return _retval?true:false;
}

void CefTextfieldCToCpp::ExecuteCommand(int command_id) {
  cef_textfield_t* _struct = GetStruct();
  if (CEF_MEMBER_MISSING(_struct, execute_command))
    return;

  // AUTO-GENERATED CONTENT - DELETE THIS COMMENT BEFORE MODIFYING

  // Execute
  _struct->execute_command(_struct,
      command_id);
}

void CefTextfieldCToCpp::ClearEditHistory() {
  cef_textfield_t* _struct = GetStruct();
  if (CEF_MEMBER_MISSING(_struct, clear_edit_history))
    return;

  // AUTO-GENERATED CONTENT - DELETE THIS COMMENT BEFORE MODIFYING

  // Execute
  _struct->clear_edit_history(_struct);
}

void CefTextfieldCToCpp::SetPlaceholderText(const CefString& text) {
  cef_textfield_t* _struct = GetStruct();
  if (CEF_MEMBER_MISSING(_struct, set_placeholder_text))
    return;

  // AUTO-GENERATED CONTENT - DELETE THIS COMMENT BEFORE MODIFYING

  // Verify param: text; type: string_byref_const
  DCHECK(!text.empty());
  if (text.empty())
    return;

  // Execute
  _struct->set_placeholder_text(_struct,
      text.GetStruct());
}

CefString CefTextfieldCToCpp::GetPlaceholderText() {
  cef_textfield_t* _struct = GetStruct();
  if (CEF_MEMBER_MISSING(_struct, get_placeholder_text))
    return CefString();

  // AUTO-GENERATED CONTENT - DELETE THIS COMMENT BEFORE MODIFYING

  // Execute
  cef_string_userfree_t _retval = _struct->get_placeholder_text(_struct);

  // Return type: string
  CefString _retvalStr;
  _retvalStr.AttachToUserFree(_retval);
  return _retvalStr;
}

void CefTextfieldCToCpp::SetPlaceholderTextColor(cef_color_t color) {
  cef_textfield_t* _struct = GetStruct();
  if (CEF_MEMBER_MISSING(_struct, set_placeholder_text_color))
    return;

  // AUTO-GENERATED CONTENT - DELETE THIS COMMENT BEFORE MODIFYING

  // Execute
  _struct->set_placeholder_text_color(_struct,
      color);
}

void CefTextfieldCToCpp::SetAccessibleName(const CefString& name) {
  cef_textfield_t* _struct = GetStruct();
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

CefRefPtr<CefBrowserView> CefTextfieldCToCpp::AsBrowserView() {
  cef_view_t* _struct = reinterpret_cast<cef_view_t*>(GetStruct());
  if (CEF_MEMBER_MISSING(_struct, as_browser_view))
    return NULL;

  // AUTO-GENERATED CONTENT - DELETE THIS COMMENT BEFORE MODIFYING

  // Execute
  cef_browser_view_t* _retval = _struct->as_browser_view(_struct);

  // Return type: refptr_same
  return CefBrowserViewCToCpp::Wrap(_retval);
}

CefRefPtr<CefButton> CefTextfieldCToCpp::AsButton() {
  cef_view_t* _struct = reinterpret_cast<cef_view_t*>(GetStruct());
  if (CEF_MEMBER_MISSING(_struct, as_button))
    return NULL;

  // AUTO-GENERATED CONTENT - DELETE THIS COMMENT BEFORE MODIFYING

  // Execute
  cef_button_t* _retval = _struct->as_button(_struct);

  // Return type: refptr_same
  return CefButtonCToCpp::Wrap(_retval);
}

CefRefPtr<CefPanel> CefTextfieldCToCpp::AsPanel() {
  cef_view_t* _struct = reinterpret_cast<cef_view_t*>(GetStruct());
  if (CEF_MEMBER_MISSING(_struct, as_panel))
    return NULL;

  // AUTO-GENERATED CONTENT - DELETE THIS COMMENT BEFORE MODIFYING

  // Execute
  cef_panel_t* _retval = _struct->as_panel(_struct);

  // Return type: refptr_same
  return CefPanelCToCpp::Wrap(_retval);
}

CefRefPtr<CefScrollView> CefTextfieldCToCpp::AsScrollView() {
  cef_view_t* _struct = reinterpret_cast<cef_view_t*>(GetStruct());
  if (CEF_MEMBER_MISSING(_struct, as_scroll_view))
    return NULL;

  // AUTO-GENERATED CONTENT - DELETE THIS COMMENT BEFORE MODIFYING

  // Execute
  cef_scroll_view_t* _retval = _struct->as_scroll_view(_struct);

  // Return type: refptr_same
  return CefScrollViewCToCpp::Wrap(_retval);
}

CefRefPtr<CefTextfield> CefTextfieldCToCpp::AsTextfield() {
  cef_view_t* _struct = reinterpret_cast<cef_view_t*>(GetStruct());
  if (CEF_MEMBER_MISSING(_struct, as_textfield))
    return NULL;

  // AUTO-GENERATED CONTENT - DELETE THIS COMMENT BEFORE MODIFYING

  // Execute
  cef_textfield_t* _retval = _struct->as_textfield(_struct);

  // Return type: refptr_same
  return CefTextfieldCToCpp::Wrap(_retval);
}

CefString CefTextfieldCToCpp::GetTypeString() {
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

CefString CefTextfieldCToCpp::ToString(bool include_children) {
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

bool CefTextfieldCToCpp::IsValid() {
  cef_view_t* _struct = reinterpret_cast<cef_view_t*>(GetStruct());
  if (CEF_MEMBER_MISSING(_struct, is_valid))
    return false;

  // AUTO-GENERATED CONTENT - DELETE THIS COMMENT BEFORE MODIFYING

  // Execute
  int _retval = _struct->is_valid(_struct);

  // Return type: bool
  return _retval?true:false;
}

bool CefTextfieldCToCpp::IsAttached() {
  cef_view_t* _struct = reinterpret_cast<cef_view_t*>(GetStruct());
  if (CEF_MEMBER_MISSING(_struct, is_attached))
    return false;

  // AUTO-GENERATED CONTENT - DELETE THIS COMMENT BEFORE MODIFYING

  // Execute
  int _retval = _struct->is_attached(_struct);

  // Return type: bool
  return _retval?true:false;
}

bool CefTextfieldCToCpp::IsSame(CefRefPtr<CefView> that) {
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

CefRefPtr<CefViewDelegate> CefTextfieldCToCpp::GetDelegate() {
  cef_view_t* _struct = reinterpret_cast<cef_view_t*>(GetStruct());
  if (CEF_MEMBER_MISSING(_struct, get_delegate))
    return NULL;

  // AUTO-GENERATED CONTENT - DELETE THIS COMMENT BEFORE MODIFYING

  // Execute
  cef_view_delegate_t* _retval = _struct->get_delegate(_struct);

  // Return type: refptr_diff
  return CefViewDelegateCppToC::Unwrap(_retval);
}

CefRefPtr<CefWindow> CefTextfieldCToCpp::GetWindow() {
  cef_view_t* _struct = reinterpret_cast<cef_view_t*>(GetStruct());
  if (CEF_MEMBER_MISSING(_struct, get_window))
    return NULL;

  // AUTO-GENERATED CONTENT - DELETE THIS COMMENT BEFORE MODIFYING

  // Execute
  cef_window_t* _retval = _struct->get_window(_struct);

  // Return type: refptr_same
  return CefWindowCToCpp::Wrap(_retval);
}

int CefTextfieldCToCpp::GetID() {
  cef_view_t* _struct = reinterpret_cast<cef_view_t*>(GetStruct());
  if (CEF_MEMBER_MISSING(_struct, get_id))
    return 0;

  // AUTO-GENERATED CONTENT - DELETE THIS COMMENT BEFORE MODIFYING

  // Execute
  int _retval = _struct->get_id(_struct);

  // Return type: simple
  return _retval;
}

void CefTextfieldCToCpp::SetID(int id) {
  cef_view_t* _struct = reinterpret_cast<cef_view_t*>(GetStruct());
  if (CEF_MEMBER_MISSING(_struct, set_id))
    return;

  // AUTO-GENERATED CONTENT - DELETE THIS COMMENT BEFORE MODIFYING

  // Execute
  _struct->set_id(_struct,
      id);
}

CefRefPtr<CefView> CefTextfieldCToCpp::GetParentView() {
  cef_view_t* _struct = reinterpret_cast<cef_view_t*>(GetStruct());
  if (CEF_MEMBER_MISSING(_struct, get_parent_view))
    return NULL;

  // AUTO-GENERATED CONTENT - DELETE THIS COMMENT BEFORE MODIFYING

  // Execute
  cef_view_t* _retval = _struct->get_parent_view(_struct);

  // Return type: refptr_same
  return CefViewCToCpp::Wrap(_retval);
}

CefRefPtr<CefView> CefTextfieldCToCpp::GetViewForID(int id) {
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

void CefTextfieldCToCpp::SetBounds(const CefRect& bounds) {
  cef_view_t* _struct = reinterpret_cast<cef_view_t*>(GetStruct());
  if (CEF_MEMBER_MISSING(_struct, set_bounds))
    return;

  // AUTO-GENERATED CONTENT - DELETE THIS COMMENT BEFORE MODIFYING

  // Execute
  _struct->set_bounds(_struct,
      &bounds);
}

CefRect CefTextfieldCToCpp::GetBounds() {
  cef_view_t* _struct = reinterpret_cast<cef_view_t*>(GetStruct());
  if (CEF_MEMBER_MISSING(_struct, get_bounds))
    return CefRect();

  // AUTO-GENERATED CONTENT - DELETE THIS COMMENT BEFORE MODIFYING

  // Execute
  cef_rect_t _retval = _struct->get_bounds(_struct);

  // Return type: simple
  return _retval;
}

CefRect CefTextfieldCToCpp::GetBoundsInScreen() {
  cef_view_t* _struct = reinterpret_cast<cef_view_t*>(GetStruct());
  if (CEF_MEMBER_MISSING(_struct, get_bounds_in_screen))
    return CefRect();

  // AUTO-GENERATED CONTENT - DELETE THIS COMMENT BEFORE MODIFYING

  // Execute
  cef_rect_t _retval = _struct->get_bounds_in_screen(_struct);

  // Return type: simple
  return _retval;
}

void CefTextfieldCToCpp::SetSize(const CefSize& size) {
  cef_view_t* _struct = reinterpret_cast<cef_view_t*>(GetStruct());
  if (CEF_MEMBER_MISSING(_struct, set_size))
    return;

  // AUTO-GENERATED CONTENT - DELETE THIS COMMENT BEFORE MODIFYING

  // Execute
  _struct->set_size(_struct,
      &size);
}

CefSize CefTextfieldCToCpp::GetSize() {
  cef_view_t* _struct = reinterpret_cast<cef_view_t*>(GetStruct());
  if (CEF_MEMBER_MISSING(_struct, get_size))
    return CefSize();

  // AUTO-GENERATED CONTENT - DELETE THIS COMMENT BEFORE MODIFYING

  // Execute
  cef_size_t _retval = _struct->get_size(_struct);

  // Return type: simple
  return _retval;
}

void CefTextfieldCToCpp::SetPosition(const CefPoint& position) {
  cef_view_t* _struct = reinterpret_cast<cef_view_t*>(GetStruct());
  if (CEF_MEMBER_MISSING(_struct, set_position))
    return;

  // AUTO-GENERATED CONTENT - DELETE THIS COMMENT BEFORE MODIFYING

  // Execute
  _struct->set_position(_struct,
      &position);
}

CefPoint CefTextfieldCToCpp::GetPosition() {
  cef_view_t* _struct = reinterpret_cast<cef_view_t*>(GetStruct());
  if (CEF_MEMBER_MISSING(_struct, get_position))
    return CefPoint();

  // AUTO-GENERATED CONTENT - DELETE THIS COMMENT BEFORE MODIFYING

  // Execute
  cef_point_t _retval = _struct->get_position(_struct);

  // Return type: simple
  return _retval;
}

CefSize CefTextfieldCToCpp::GetPreferredSize() {
  cef_view_t* _struct = reinterpret_cast<cef_view_t*>(GetStruct());
  if (CEF_MEMBER_MISSING(_struct, get_preferred_size))
    return CefSize();

  // AUTO-GENERATED CONTENT - DELETE THIS COMMENT BEFORE MODIFYING

  // Execute
  cef_size_t _retval = _struct->get_preferred_size(_struct);

  // Return type: simple
  return _retval;
}

void CefTextfieldCToCpp::SizeToPreferredSize() {
  cef_view_t* _struct = reinterpret_cast<cef_view_t*>(GetStruct());
  if (CEF_MEMBER_MISSING(_struct, size_to_preferred_size))
    return;

  // AUTO-GENERATED CONTENT - DELETE THIS COMMENT BEFORE MODIFYING

  // Execute
  _struct->size_to_preferred_size(_struct);
}

CefSize CefTextfieldCToCpp::GetMinimumSize() {
  cef_view_t* _struct = reinterpret_cast<cef_view_t*>(GetStruct());
  if (CEF_MEMBER_MISSING(_struct, get_minimum_size))
    return CefSize();

  // AUTO-GENERATED CONTENT - DELETE THIS COMMENT BEFORE MODIFYING

  // Execute
  cef_size_t _retval = _struct->get_minimum_size(_struct);

  // Return type: simple
  return _retval;
}

CefSize CefTextfieldCToCpp::GetMaximumSize() {
  cef_view_t* _struct = reinterpret_cast<cef_view_t*>(GetStruct());
  if (CEF_MEMBER_MISSING(_struct, get_maximum_size))
    return CefSize();

  // AUTO-GENERATED CONTENT - DELETE THIS COMMENT BEFORE MODIFYING

  // Execute
  cef_size_t _retval = _struct->get_maximum_size(_struct);

  // Return type: simple
  return _retval;
}

int CefTextfieldCToCpp::GetHeightForWidth(int width) {
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

void CefTextfieldCToCpp::InvalidateLayout() {
  cef_view_t* _struct = reinterpret_cast<cef_view_t*>(GetStruct());
  if (CEF_MEMBER_MISSING(_struct, invalidate_layout))
    return;

  // AUTO-GENERATED CONTENT - DELETE THIS COMMENT BEFORE MODIFYING

  // Execute
  _struct->invalidate_layout(_struct);
}

void CefTextfieldCToCpp::SetVisible(bool visible) {
  cef_view_t* _struct = reinterpret_cast<cef_view_t*>(GetStruct());
  if (CEF_MEMBER_MISSING(_struct, set_visible))
    return;

  // AUTO-GENERATED CONTENT - DELETE THIS COMMENT BEFORE MODIFYING

  // Execute
  _struct->set_visible(_struct,
      visible);
}

bool CefTextfieldCToCpp::IsVisible() {
  cef_view_t* _struct = reinterpret_cast<cef_view_t*>(GetStruct());
  if (CEF_MEMBER_MISSING(_struct, is_visible))
    return false;

  // AUTO-GENERATED CONTENT - DELETE THIS COMMENT BEFORE MODIFYING

  // Execute
  int _retval = _struct->is_visible(_struct);

  // Return type: bool
  return _retval?true:false;
}

bool CefTextfieldCToCpp::IsDrawn() {
  cef_view_t* _struct = reinterpret_cast<cef_view_t*>(GetStruct());
  if (CEF_MEMBER_MISSING(_struct, is_drawn))
    return false;

  // AUTO-GENERATED CONTENT - DELETE THIS COMMENT BEFORE MODIFYING

  // Execute
  int _retval = _struct->is_drawn(_struct);

  // Return type: bool
  return _retval?true:false;
}

void CefTextfieldCToCpp::SetEnabled(bool enabled) {
  cef_view_t* _struct = reinterpret_cast<cef_view_t*>(GetStruct());
  if (CEF_MEMBER_MISSING(_struct, set_enabled))
    return;

  // AUTO-GENERATED CONTENT - DELETE THIS COMMENT BEFORE MODIFYING

  // Execute
  _struct->set_enabled(_struct,
      enabled);
}

bool CefTextfieldCToCpp::IsEnabled() {
  cef_view_t* _struct = reinterpret_cast<cef_view_t*>(GetStruct());
  if (CEF_MEMBER_MISSING(_struct, is_enabled))
    return false;

  // AUTO-GENERATED CONTENT - DELETE THIS COMMENT BEFORE MODIFYING

  // Execute
  int _retval = _struct->is_enabled(_struct);

  // Return type: bool
  return _retval?true:false;
}

void CefTextfieldCToCpp::SetFocusable(bool focusable) {
  cef_view_t* _struct = reinterpret_cast<cef_view_t*>(GetStruct());
  if (CEF_MEMBER_MISSING(_struct, set_focusable))
    return;

  // AUTO-GENERATED CONTENT - DELETE THIS COMMENT BEFORE MODIFYING

  // Execute
  _struct->set_focusable(_struct,
      focusable);
}

bool CefTextfieldCToCpp::IsFocusable() {
  cef_view_t* _struct = reinterpret_cast<cef_view_t*>(GetStruct());
  if (CEF_MEMBER_MISSING(_struct, is_focusable))
    return false;

  // AUTO-GENERATED CONTENT - DELETE THIS COMMENT BEFORE MODIFYING

  // Execute
  int _retval = _struct->is_focusable(_struct);

  // Return type: bool
  return _retval?true:false;
}

bool CefTextfieldCToCpp::IsAccessibilityFocusable() {
  cef_view_t* _struct = reinterpret_cast<cef_view_t*>(GetStruct());
  if (CEF_MEMBER_MISSING(_struct, is_accessibility_focusable))
    return false;

  // AUTO-GENERATED CONTENT - DELETE THIS COMMENT BEFORE MODIFYING

  // Execute
  int _retval = _struct->is_accessibility_focusable(_struct);

  // Return type: bool
  return _retval?true:false;
}

void CefTextfieldCToCpp::RequestFocus() {
  cef_view_t* _struct = reinterpret_cast<cef_view_t*>(GetStruct());
  if (CEF_MEMBER_MISSING(_struct, request_focus))
    return;

  // AUTO-GENERATED CONTENT - DELETE THIS COMMENT BEFORE MODIFYING

  // Execute
  _struct->request_focus(_struct);
}

void CefTextfieldCToCpp::SetBackgroundColor(cef_color_t color) {
  cef_view_t* _struct = reinterpret_cast<cef_view_t*>(GetStruct());
  if (CEF_MEMBER_MISSING(_struct, set_background_color))
    return;

  // AUTO-GENERATED CONTENT - DELETE THIS COMMENT BEFORE MODIFYING

  // Execute
  _struct->set_background_color(_struct,
      color);
}

cef_color_t CefTextfieldCToCpp::GetBackgroundColor() {
  cef_view_t* _struct = reinterpret_cast<cef_view_t*>(GetStruct());
  if (CEF_MEMBER_MISSING(_struct, get_background_color))
    return 0;

  // AUTO-GENERATED CONTENT - DELETE THIS COMMENT BEFORE MODIFYING

  // Execute
  cef_color_t _retval = _struct->get_background_color(_struct);

  // Return type: simple
  return _retval;
}

bool CefTextfieldCToCpp::ConvertPointToScreen(CefPoint& point) {
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

bool CefTextfieldCToCpp::ConvertPointFromScreen(CefPoint& point) {
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

bool CefTextfieldCToCpp::ConvertPointToWindow(CefPoint& point) {
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

bool CefTextfieldCToCpp::ConvertPointFromWindow(CefPoint& point) {
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

bool CefTextfieldCToCpp::ConvertPointToView(CefRefPtr<CefView> view,
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

bool CefTextfieldCToCpp::ConvertPointFromView(CefRefPtr<CefView> view,
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

CefTextfieldCToCpp::CefTextfieldCToCpp() {
}

template<> cef_textfield_t* CefCToCpp<CefTextfieldCToCpp, CefTextfield,
    cef_textfield_t>::UnwrapDerived(CefWrapperType type, CefTextfield* c) {
  NOTREACHED() << "Unexpected class type: " << type;
  return NULL;
}

#if DCHECK_IS_ON()
template<> base::AtomicRefCount CefCToCpp<CefTextfieldCToCpp, CefTextfield,
    cef_textfield_t>::DebugObjCt = 0;
#endif

template<> CefWrapperType CefCToCpp<CefTextfieldCToCpp, CefTextfield,
    cef_textfield_t>::kWrapperType = WT_TEXTFIELD;
