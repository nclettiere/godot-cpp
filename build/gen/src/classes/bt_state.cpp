/**************************************************************************/
/*  bt_state.cpp                                                          */
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

#include <godot_cpp/classes/bt_state.hpp>

#include <godot_cpp/core/class_db.hpp>
#include <godot_cpp/core/engine_ptrcall.hpp>
#include <godot_cpp/core/error_macros.hpp>

#include <godot_cpp/classes/behavior_tree.hpp>
#include <godot_cpp/classes/bt_instance.hpp>
#include <godot_cpp/classes/node.hpp>

namespace godot {

void BTState::set_behavior_tree(const Ref<BehaviorTree> &p_behavior_tree) {
	static GDExtensionMethodBindPtr _gde_method_bind = ::godot::gdextension_interface::classdb_get_method_bind(BTState::get_class_static()._native_ptr(), StringName("set_behavior_tree")._native_ptr(), 1578118810);
	CHECK_METHOD_BIND(_gde_method_bind);
	::godot::internal::_call_native_mb_no_ret(_gde_method_bind, _owner, (p_behavior_tree != nullptr ? &p_behavior_tree->_owner : nullptr));
}

Ref<BehaviorTree> BTState::get_behavior_tree() const {
	static GDExtensionMethodBindPtr _gde_method_bind = ::godot::gdextension_interface::classdb_get_method_bind(BTState::get_class_static()._native_ptr(), StringName("get_behavior_tree")._native_ptr(), 2060910044);
	CHECK_METHOD_BIND_RET(_gde_method_bind, (Ref<BehaviorTree>()));
	return Ref<BehaviorTree>::_gde_internal_constructor(::godot::internal::_call_native_mb_ret_obj<BehaviorTree>(_gde_method_bind, _owner));
}

Ref<BTInstance> BTState::get_bt_instance() const {
	static GDExtensionMethodBindPtr _gde_method_bind = ::godot::gdextension_interface::classdb_get_method_bind(BTState::get_class_static()._native_ptr(), StringName("get_bt_instance")._native_ptr(), 583636296);
	CHECK_METHOD_BIND_RET(_gde_method_bind, (Ref<BTInstance>()));
	return Ref<BTInstance>::_gde_internal_constructor(::godot::internal::_call_native_mb_ret_obj<BTInstance>(_gde_method_bind, _owner));
}

void BTState::set_success_event(const StringName &p_event) {
	static GDExtensionMethodBindPtr _gde_method_bind = ::godot::gdextension_interface::classdb_get_method_bind(BTState::get_class_static()._native_ptr(), StringName("set_success_event")._native_ptr(), 3304788590);
	CHECK_METHOD_BIND(_gde_method_bind);
	::godot::internal::_call_native_mb_no_ret(_gde_method_bind, _owner, &p_event);
}

StringName BTState::get_success_event() const {
	static GDExtensionMethodBindPtr _gde_method_bind = ::godot::gdextension_interface::classdb_get_method_bind(BTState::get_class_static()._native_ptr(), StringName("get_success_event")._native_ptr(), 2002593661);
	CHECK_METHOD_BIND_RET(_gde_method_bind, (StringName()));
	return ::godot::internal::_call_native_mb_ret<StringName>(_gde_method_bind, _owner);
}

void BTState::set_failure_event(const StringName &p_event) {
	static GDExtensionMethodBindPtr _gde_method_bind = ::godot::gdextension_interface::classdb_get_method_bind(BTState::get_class_static()._native_ptr(), StringName("set_failure_event")._native_ptr(), 3304788590);
	CHECK_METHOD_BIND(_gde_method_bind);
	::godot::internal::_call_native_mb_no_ret(_gde_method_bind, _owner, &p_event);
}

StringName BTState::get_failure_event() const {
	static GDExtensionMethodBindPtr _gde_method_bind = ::godot::gdextension_interface::classdb_get_method_bind(BTState::get_class_static()._native_ptr(), StringName("get_failure_event")._native_ptr(), 2002593661);
	CHECK_METHOD_BIND_RET(_gde_method_bind, (StringName()));
	return ::godot::internal::_call_native_mb_ret<StringName>(_gde_method_bind, _owner);
}

void BTState::set_monitor_performance(bool p_enable) {
	static GDExtensionMethodBindPtr _gde_method_bind = ::godot::gdextension_interface::classdb_get_method_bind(BTState::get_class_static()._native_ptr(), StringName("set_monitor_performance")._native_ptr(), 2586408642);
	CHECK_METHOD_BIND(_gde_method_bind);
	int8_t p_enable_encoded;
	PtrToArg<bool>::encode(p_enable, &p_enable_encoded);
	::godot::internal::_call_native_mb_no_ret(_gde_method_bind, _owner, &p_enable_encoded);
}

bool BTState::get_monitor_performance() const {
	static GDExtensionMethodBindPtr _gde_method_bind = ::godot::gdextension_interface::classdb_get_method_bind(BTState::get_class_static()._native_ptr(), StringName("get_monitor_performance")._native_ptr(), 36873697);
	CHECK_METHOD_BIND_RET(_gde_method_bind, (false));
	return ::godot::internal::_call_native_mb_ret<int8_t>(_gde_method_bind, _owner);
}

void BTState::set_scene_root_hint(Node *p_scene_root) {
	static GDExtensionMethodBindPtr _gde_method_bind = ::godot::gdextension_interface::classdb_get_method_bind(BTState::get_class_static()._native_ptr(), StringName("set_scene_root_hint")._native_ptr(), 1078189570);
	CHECK_METHOD_BIND(_gde_method_bind);
	::godot::internal::_call_native_mb_no_ret(_gde_method_bind, _owner, (p_scene_root != nullptr ? &p_scene_root->_owner : nullptr));
}

} // namespace godot
