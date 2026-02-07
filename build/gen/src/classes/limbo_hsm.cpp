/**************************************************************************/
/*  limbo_hsm.cpp                                                         */
/**************************************************************************/
/*                         This file is part of:                          */
/*                             GODOT ENGINE                               */
/*                        https://godotengine.org                         */
/**************************************************************************/
/* Copyright (c) 2014-present Godot Engine contributors (see AUTHORS.md). */
/* Copyright (c) 2007-2014 Juan Linietsky, Ariel Manzur.                  */
/*                                                                        */
/* Permission is hereby granted, free of charge, to any person obtaining  */
/* a copy of this software and associated documentation files (the        */
/* "Software"), to deal in the Software without restriction, including    */
/* without limitation the rights to use, copy, modify, merge, publish,    */
/* distribute, sublicense, and/or sell copies of the Software, and to     */
/* permit persons to whom the Software is furnished to do so, subject to  */
/* the following conditions:                                              */
/*                                                                        */
/* The above copyright notice and this permission notice shall be         */
/* included in all copies or substantial portions of the Software.        */
/*                                                                        */
/* THE SOFTWARE IS PROVIDED "AS IS", WITHOUT WARRANTY OF ANY KIND,        */
/* EXPRESS OR IMPLIED, INCLUDING BUT NOT LIMITED TO THE WARRANTIES OF     */
/* MERCHANTABILITY, FITNESS FOR A PARTICULAR PURPOSE AND NONINFRINGEMENT. */
/* IN NO EVENT SHALL THE AUTHORS OR COPYRIGHT HOLDERS BE LIABLE FOR ANY   */
/* CLAIM, DAMAGES OR OTHER LIABILITY, WHETHER IN AN ACTION OF CONTRACT,   */
/* TORT OR OTHERWISE, ARISING FROM, OUT OF OR IN CONNECTION WITH THE      */
/* SOFTWARE OR THE USE OR OTHER DEALINGS IN THE SOFTWARE.                 */
/**************************************************************************/

// THIS FILE IS GENERATED. EDITS WILL BE LOST.

#include <godot_cpp/classes/limbo_hsm.hpp>

#include <godot_cpp/core/class_db.hpp>
#include <godot_cpp/core/engine_ptrcall.hpp>
#include <godot_cpp/core/error_macros.hpp>

#include <godot_cpp/classes/node.hpp>
#include <godot_cpp/variant/string_name.hpp>

namespace godot {

void LimboHSM::set_update_mode(LimboHSM::UpdateMode p_mode) {
	static GDExtensionMethodBindPtr _gde_method_bind = ::godot::gdextension_interface::classdb_get_method_bind(LimboHSM::get_class_static()._native_ptr(), StringName("set_update_mode")._native_ptr(), 348784465);
	CHECK_METHOD_BIND(_gde_method_bind);
	int64_t p_mode_encoded;
	PtrToArg<int64_t>::encode(p_mode, &p_mode_encoded);
	::godot::internal::_call_native_mb_no_ret(_gde_method_bind, _owner, &p_mode_encoded);
}

LimboHSM::UpdateMode LimboHSM::get_update_mode() const {
	static GDExtensionMethodBindPtr _gde_method_bind = ::godot::gdextension_interface::classdb_get_method_bind(LimboHSM::get_class_static()._native_ptr(), StringName("get_update_mode")._native_ptr(), 167275715);
	CHECK_METHOD_BIND_RET(_gde_method_bind, (LimboHSM::UpdateMode(0)));
	return (LimboHSM::UpdateMode)::godot::internal::_call_native_mb_ret<int64_t>(_gde_method_bind, _owner);
}

void LimboHSM::set_initial_state(LimboState *p_state) {
	static GDExtensionMethodBindPtr _gde_method_bind = ::godot::gdextension_interface::classdb_get_method_bind(LimboHSM::get_class_static()._native_ptr(), StringName("set_initial_state")._native_ptr(), 1749593317);
	CHECK_METHOD_BIND(_gde_method_bind);
	::godot::internal::_call_native_mb_no_ret(_gde_method_bind, _owner, (p_state != nullptr ? &p_state->_owner : nullptr));
}

LimboState *LimboHSM::get_initial_state() const {
	static GDExtensionMethodBindPtr _gde_method_bind = ::godot::gdextension_interface::classdb_get_method_bind(LimboHSM::get_class_static()._native_ptr(), StringName("get_initial_state")._native_ptr(), 700478003);
	CHECK_METHOD_BIND_RET(_gde_method_bind, (nullptr));
	return ::godot::internal::_call_native_mb_ret_obj<LimboState>(_gde_method_bind, _owner);
}

LimboState *LimboHSM::get_active_state() const {
	static GDExtensionMethodBindPtr _gde_method_bind = ::godot::gdextension_interface::classdb_get_method_bind(LimboHSM::get_class_static()._native_ptr(), StringName("get_active_state")._native_ptr(), 700478003);
	CHECK_METHOD_BIND_RET(_gde_method_bind, (nullptr));
	return ::godot::internal::_call_native_mb_ret_obj<LimboState>(_gde_method_bind, _owner);
}

LimboState *LimboHSM::get_previous_active_state() const {
	static GDExtensionMethodBindPtr _gde_method_bind = ::godot::gdextension_interface::classdb_get_method_bind(LimboHSM::get_class_static()._native_ptr(), StringName("get_previous_active_state")._native_ptr(), 700478003);
	CHECK_METHOD_BIND_RET(_gde_method_bind, (nullptr));
	return ::godot::internal::_call_native_mb_ret_obj<LimboState>(_gde_method_bind, _owner);
}

LimboState *LimboHSM::get_leaf_state() const {
	static GDExtensionMethodBindPtr _gde_method_bind = ::godot::gdextension_interface::classdb_get_method_bind(LimboHSM::get_class_static()._native_ptr(), StringName("get_leaf_state")._native_ptr(), 700478003);
	CHECK_METHOD_BIND_RET(_gde_method_bind, (nullptr));
	return ::godot::internal::_call_native_mb_ret_obj<LimboState>(_gde_method_bind, _owner);
}

void LimboHSM::set_active(bool p_active) {
	static GDExtensionMethodBindPtr _gde_method_bind = ::godot::gdextension_interface::classdb_get_method_bind(LimboHSM::get_class_static()._native_ptr(), StringName("set_active")._native_ptr(), 2586408642);
	CHECK_METHOD_BIND(_gde_method_bind);
	int8_t p_active_encoded;
	PtrToArg<bool>::encode(p_active, &p_active_encoded);
	::godot::internal::_call_native_mb_no_ret(_gde_method_bind, _owner, &p_active_encoded);
}

void LimboHSM::update(double p_delta) {
	static GDExtensionMethodBindPtr _gde_method_bind = ::godot::gdextension_interface::classdb_get_method_bind(LimboHSM::get_class_static()._native_ptr(), StringName("update")._native_ptr(), 373806689);
	CHECK_METHOD_BIND(_gde_method_bind);
	double p_delta_encoded;
	PtrToArg<double>::encode(p_delta, &p_delta_encoded);
	::godot::internal::_call_native_mb_no_ret(_gde_method_bind, _owner, &p_delta_encoded);
}

void LimboHSM::add_transition(LimboState *p_from_state, LimboState *p_to_state, const StringName &p_event, const Callable &p_guard) {
	static GDExtensionMethodBindPtr _gde_method_bind = ::godot::gdextension_interface::classdb_get_method_bind(LimboHSM::get_class_static()._native_ptr(), StringName("add_transition")._native_ptr(), 1473279111);
	CHECK_METHOD_BIND(_gde_method_bind);
	::godot::internal::_call_native_mb_no_ret(_gde_method_bind, _owner, (p_from_state != nullptr ? &p_from_state->_owner : nullptr), (p_to_state != nullptr ? &p_to_state->_owner : nullptr), &p_event, &p_guard);
}

void LimboHSM::remove_transition(LimboState *p_from_state, const StringName &p_event) {
	static GDExtensionMethodBindPtr _gde_method_bind = ::godot::gdextension_interface::classdb_get_method_bind(LimboHSM::get_class_static()._native_ptr(), StringName("remove_transition")._native_ptr(), 1606082745);
	CHECK_METHOD_BIND(_gde_method_bind);
	::godot::internal::_call_native_mb_no_ret(_gde_method_bind, _owner, (p_from_state != nullptr ? &p_from_state->_owner : nullptr), &p_event);
}

bool LimboHSM::has_transition(LimboState *p_from_state, const StringName &p_event) const {
	static GDExtensionMethodBindPtr _gde_method_bind = ::godot::gdextension_interface::classdb_get_method_bind(LimboHSM::get_class_static()._native_ptr(), StringName("has_transition")._native_ptr(), 2364019334);
	CHECK_METHOD_BIND_RET(_gde_method_bind, (false));
	return ::godot::internal::_call_native_mb_ret<int8_t>(_gde_method_bind, _owner, (p_from_state != nullptr ? &p_from_state->_owner : nullptr), &p_event);
}

LimboState *LimboHSM::anystate() const {
	static GDExtensionMethodBindPtr _gde_method_bind = ::godot::gdextension_interface::classdb_get_method_bind(LimboHSM::get_class_static()._native_ptr(), StringName("anystate")._native_ptr(), 700478003);
	CHECK_METHOD_BIND_RET(_gde_method_bind, (nullptr));
	return ::godot::internal::_call_native_mb_ret_obj<LimboState>(_gde_method_bind, _owner);
}

void LimboHSM::initialize(Node *p_agent, const Ref<Blackboard> &p_parent_scope) {
	static GDExtensionMethodBindPtr _gde_method_bind = ::godot::gdextension_interface::classdb_get_method_bind(LimboHSM::get_class_static()._native_ptr(), StringName("initialize")._native_ptr(), 3656937362);
	CHECK_METHOD_BIND(_gde_method_bind);
	::godot::internal::_call_native_mb_no_ret(_gde_method_bind, _owner, (p_agent != nullptr ? &p_agent->_owner : nullptr), (p_parent_scope != nullptr ? &p_parent_scope->_owner : nullptr));
}

void LimboHSM::change_active_state(LimboState *p_state) {
	static GDExtensionMethodBindPtr _gde_method_bind = ::godot::gdextension_interface::classdb_get_method_bind(LimboHSM::get_class_static()._native_ptr(), StringName("change_active_state")._native_ptr(), 1749593317);
	CHECK_METHOD_BIND(_gde_method_bind);
	::godot::internal::_call_native_mb_no_ret(_gde_method_bind, _owner, (p_state != nullptr ? &p_state->_owner : nullptr));
}

} // namespace godot
