/**************************************************************************/
/*  bt_player.cpp                                                         */
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

#include <godot_cpp/classes/bt_player.hpp>

#include <godot_cpp/core/class_db.hpp>
#include <godot_cpp/core/engine_ptrcall.hpp>
#include <godot_cpp/core/error_macros.hpp>

#include <godot_cpp/classes/behavior_tree.hpp>
#include <godot_cpp/classes/blackboard.hpp>
#include <godot_cpp/classes/blackboard_plan.hpp>
#include <godot_cpp/classes/bt_instance.hpp>

namespace godot {

void BTPlayer::set_behavior_tree(const Ref<BehaviorTree> &p_behavior_tree) {
	static GDExtensionMethodBindPtr _gde_method_bind = ::godot::gdextension_interface::classdb_get_method_bind(BTPlayer::get_class_static()._native_ptr(), StringName("set_behavior_tree")._native_ptr(), 1578118810);
	CHECK_METHOD_BIND(_gde_method_bind);
	::godot::internal::_call_native_mb_no_ret(_gde_method_bind, _owner, (p_behavior_tree != nullptr ? &p_behavior_tree->_owner : nullptr));
}

Ref<BehaviorTree> BTPlayer::get_behavior_tree() const {
	static GDExtensionMethodBindPtr _gde_method_bind = ::godot::gdextension_interface::classdb_get_method_bind(BTPlayer::get_class_static()._native_ptr(), StringName("get_behavior_tree")._native_ptr(), 2060910044);
	CHECK_METHOD_BIND_RET(_gde_method_bind, (Ref<BehaviorTree>()));
	return Ref<BehaviorTree>::_gde_internal_constructor(::godot::internal::_call_native_mb_ret_obj<BehaviorTree>(_gde_method_bind, _owner));
}

void BTPlayer::set_agent_node(const NodePath &p_agent_node) {
	static GDExtensionMethodBindPtr _gde_method_bind = ::godot::gdextension_interface::classdb_get_method_bind(BTPlayer::get_class_static()._native_ptr(), StringName("set_agent_node")._native_ptr(), 1348162250);
	CHECK_METHOD_BIND(_gde_method_bind);
	::godot::internal::_call_native_mb_no_ret(_gde_method_bind, _owner, &p_agent_node);
}

NodePath BTPlayer::get_agent_node() const {
	static GDExtensionMethodBindPtr _gde_method_bind = ::godot::gdextension_interface::classdb_get_method_bind(BTPlayer::get_class_static()._native_ptr(), StringName("get_agent_node")._native_ptr(), 4075236667);
	CHECK_METHOD_BIND_RET(_gde_method_bind, (NodePath()));
	return ::godot::internal::_call_native_mb_ret<NodePath>(_gde_method_bind, _owner);
}

void BTPlayer::set_update_mode(BTPlayer::UpdateMode p_update_mode) {
	static GDExtensionMethodBindPtr _gde_method_bind = ::godot::gdextension_interface::classdb_get_method_bind(BTPlayer::get_class_static()._native_ptr(), StringName("set_update_mode")._native_ptr(), 2387021328);
	CHECK_METHOD_BIND(_gde_method_bind);
	int64_t p_update_mode_encoded;
	PtrToArg<int64_t>::encode(p_update_mode, &p_update_mode_encoded);
	::godot::internal::_call_native_mb_no_ret(_gde_method_bind, _owner, &p_update_mode_encoded);
}

BTPlayer::UpdateMode BTPlayer::get_update_mode() const {
	static GDExtensionMethodBindPtr _gde_method_bind = ::godot::gdextension_interface::classdb_get_method_bind(BTPlayer::get_class_static()._native_ptr(), StringName("get_update_mode")._native_ptr(), 540717847);
	CHECK_METHOD_BIND_RET(_gde_method_bind, (BTPlayer::UpdateMode(0)));
	return (BTPlayer::UpdateMode)::godot::internal::_call_native_mb_ret<int64_t>(_gde_method_bind, _owner);
}

void BTPlayer::set_active(bool p_active) {
	static GDExtensionMethodBindPtr _gde_method_bind = ::godot::gdextension_interface::classdb_get_method_bind(BTPlayer::get_class_static()._native_ptr(), StringName("set_active")._native_ptr(), 2586408642);
	CHECK_METHOD_BIND(_gde_method_bind);
	int8_t p_active_encoded;
	PtrToArg<bool>::encode(p_active, &p_active_encoded);
	::godot::internal::_call_native_mb_no_ret(_gde_method_bind, _owner, &p_active_encoded);
}

bool BTPlayer::get_active() const {
	static GDExtensionMethodBindPtr _gde_method_bind = ::godot::gdextension_interface::classdb_get_method_bind(BTPlayer::get_class_static()._native_ptr(), StringName("get_active")._native_ptr(), 36873697);
	CHECK_METHOD_BIND_RET(_gde_method_bind, (false));
	return ::godot::internal::_call_native_mb_ret<int8_t>(_gde_method_bind, _owner);
}

void BTPlayer::set_blackboard(const Ref<Blackboard> &p_blackboard) {
	static GDExtensionMethodBindPtr _gde_method_bind = ::godot::gdextension_interface::classdb_get_method_bind(BTPlayer::get_class_static()._native_ptr(), StringName("set_blackboard")._native_ptr(), 3814559149);
	CHECK_METHOD_BIND(_gde_method_bind);
	::godot::internal::_call_native_mb_no_ret(_gde_method_bind, _owner, (p_blackboard != nullptr ? &p_blackboard->_owner : nullptr));
}

Ref<Blackboard> BTPlayer::get_blackboard() const {
	static GDExtensionMethodBindPtr _gde_method_bind = ::godot::gdextension_interface::classdb_get_method_bind(BTPlayer::get_class_static()._native_ptr(), StringName("get_blackboard")._native_ptr(), 481986516);
	CHECK_METHOD_BIND_RET(_gde_method_bind, (Ref<Blackboard>()));
	return Ref<Blackboard>::_gde_internal_constructor(::godot::internal::_call_native_mb_ret_obj<Blackboard>(_gde_method_bind, _owner));
}

void BTPlayer::set_blackboard_plan(const Ref<BlackboardPlan> &p_plan) {
	static GDExtensionMethodBindPtr _gde_method_bind = ::godot::gdextension_interface::classdb_get_method_bind(BTPlayer::get_class_static()._native_ptr(), StringName("set_blackboard_plan")._native_ptr(), 75109561);
	CHECK_METHOD_BIND(_gde_method_bind);
	::godot::internal::_call_native_mb_no_ret(_gde_method_bind, _owner, (p_plan != nullptr ? &p_plan->_owner : nullptr));
}

Ref<BlackboardPlan> BTPlayer::get_blackboard_plan() const {
	static GDExtensionMethodBindPtr _gde_method_bind = ::godot::gdextension_interface::classdb_get_method_bind(BTPlayer::get_class_static()._native_ptr(), StringName("get_blackboard_plan")._native_ptr(), 3292298585);
	CHECK_METHOD_BIND_RET(_gde_method_bind, (Ref<BlackboardPlan>()));
	return Ref<BlackboardPlan>::_gde_internal_constructor(::godot::internal::_call_native_mb_ret_obj<BlackboardPlan>(_gde_method_bind, _owner));
}

void BTPlayer::set_monitor_performance(bool p_enable) {
	static GDExtensionMethodBindPtr _gde_method_bind = ::godot::gdextension_interface::classdb_get_method_bind(BTPlayer::get_class_static()._native_ptr(), StringName("set_monitor_performance")._native_ptr(), 2586408642);
	CHECK_METHOD_BIND(_gde_method_bind);
	int8_t p_enable_encoded;
	PtrToArg<bool>::encode(p_enable, &p_enable_encoded);
	::godot::internal::_call_native_mb_no_ret(_gde_method_bind, _owner, &p_enable_encoded);
}

bool BTPlayer::get_monitor_performance() const {
	static GDExtensionMethodBindPtr _gde_method_bind = ::godot::gdextension_interface::classdb_get_method_bind(BTPlayer::get_class_static()._native_ptr(), StringName("get_monitor_performance")._native_ptr(), 36873697);
	CHECK_METHOD_BIND_RET(_gde_method_bind, (false));
	return ::godot::internal::_call_native_mb_ret<int8_t>(_gde_method_bind, _owner);
}

void BTPlayer::update(double p_delta) {
	static GDExtensionMethodBindPtr _gde_method_bind = ::godot::gdextension_interface::classdb_get_method_bind(BTPlayer::get_class_static()._native_ptr(), StringName("update")._native_ptr(), 373806689);
	CHECK_METHOD_BIND(_gde_method_bind);
	double p_delta_encoded;
	PtrToArg<double>::encode(p_delta, &p_delta_encoded);
	::godot::internal::_call_native_mb_no_ret(_gde_method_bind, _owner, &p_delta_encoded);
}

void BTPlayer::restart() {
	static GDExtensionMethodBindPtr _gde_method_bind = ::godot::gdextension_interface::classdb_get_method_bind(BTPlayer::get_class_static()._native_ptr(), StringName("restart")._native_ptr(), 3218959716);
	CHECK_METHOD_BIND(_gde_method_bind);
	::godot::internal::_call_native_mb_no_ret(_gde_method_bind, _owner);
}

Ref<BTInstance> BTPlayer::get_bt_instance() {
	static GDExtensionMethodBindPtr _gde_method_bind = ::godot::gdextension_interface::classdb_get_method_bind(BTPlayer::get_class_static()._native_ptr(), StringName("get_bt_instance")._native_ptr(), 4196683824);
	CHECK_METHOD_BIND_RET(_gde_method_bind, (Ref<BTInstance>()));
	return Ref<BTInstance>::_gde_internal_constructor(::godot::internal::_call_native_mb_ret_obj<BTInstance>(_gde_method_bind, _owner));
}

void BTPlayer::set_bt_instance(const Ref<BTInstance> &p_bt_instance) {
	static GDExtensionMethodBindPtr _gde_method_bind = ::godot::gdextension_interface::classdb_get_method_bind(BTPlayer::get_class_static()._native_ptr(), StringName("set_bt_instance")._native_ptr(), 1876666309);
	CHECK_METHOD_BIND(_gde_method_bind);
	::godot::internal::_call_native_mb_no_ret(_gde_method_bind, _owner, (p_bt_instance != nullptr ? &p_bt_instance->_owner : nullptr));
}

void BTPlayer::set_scene_root_hint(Node *p_scene_root) {
	static GDExtensionMethodBindPtr _gde_method_bind = ::godot::gdextension_interface::classdb_get_method_bind(BTPlayer::get_class_static()._native_ptr(), StringName("set_scene_root_hint")._native_ptr(), 1078189570);
	CHECK_METHOD_BIND(_gde_method_bind);
	::godot::internal::_call_native_mb_no_ret(_gde_method_bind, _owner, (p_scene_root != nullptr ? &p_scene_root->_owner : nullptr));
}

} // namespace godot
