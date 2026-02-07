/**************************************************************************/
/*  behavior_tree.cpp                                                     */
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

#include <godot_cpp/classes/behavior_tree.hpp>

#include <godot_cpp/core/class_db.hpp>
#include <godot_cpp/core/engine_ptrcall.hpp>
#include <godot_cpp/core/error_macros.hpp>

#include <godot_cpp/classes/blackboard.hpp>
#include <godot_cpp/classes/blackboard_plan.hpp>
#include <godot_cpp/classes/bt_instance.hpp>
#include <godot_cpp/classes/bt_task.hpp>

namespace godot {

void BehaviorTree::set_description(const String &p_description) {
	static GDExtensionMethodBindPtr _gde_method_bind = ::godot::gdextension_interface::classdb_get_method_bind(BehaviorTree::get_class_static()._native_ptr(), StringName("set_description")._native_ptr(), 83702148);
	CHECK_METHOD_BIND(_gde_method_bind);
	::godot::internal::_call_native_mb_no_ret(_gde_method_bind, _owner, &p_description);
}

String BehaviorTree::get_description() const {
	static GDExtensionMethodBindPtr _gde_method_bind = ::godot::gdextension_interface::classdb_get_method_bind(BehaviorTree::get_class_static()._native_ptr(), StringName("get_description")._native_ptr(), 201670096);
	CHECK_METHOD_BIND_RET(_gde_method_bind, (String()));
	return ::godot::internal::_call_native_mb_ret<String>(_gde_method_bind, _owner);
}

void BehaviorTree::set_blackboard_plan(const Ref<BlackboardPlan> &p_plan) {
	static GDExtensionMethodBindPtr _gde_method_bind = ::godot::gdextension_interface::classdb_get_method_bind(BehaviorTree::get_class_static()._native_ptr(), StringName("set_blackboard_plan")._native_ptr(), 75109561);
	CHECK_METHOD_BIND(_gde_method_bind);
	::godot::internal::_call_native_mb_no_ret(_gde_method_bind, _owner, (p_plan != nullptr ? &p_plan->_owner : nullptr));
}

Ref<BlackboardPlan> BehaviorTree::get_blackboard_plan() const {
	static GDExtensionMethodBindPtr _gde_method_bind = ::godot::gdextension_interface::classdb_get_method_bind(BehaviorTree::get_class_static()._native_ptr(), StringName("get_blackboard_plan")._native_ptr(), 3292298585);
	CHECK_METHOD_BIND_RET(_gde_method_bind, (Ref<BlackboardPlan>()));
	return Ref<BlackboardPlan>::_gde_internal_constructor(::godot::internal::_call_native_mb_ret_obj<BlackboardPlan>(_gde_method_bind, _owner));
}

void BehaviorTree::set_root_task(const Ref<BTTask> &p_task) {
	static GDExtensionMethodBindPtr _gde_method_bind = ::godot::gdextension_interface::classdb_get_method_bind(BehaviorTree::get_class_static()._native_ptr(), StringName("set_root_task")._native_ptr(), 3709114228);
	CHECK_METHOD_BIND(_gde_method_bind);
	::godot::internal::_call_native_mb_no_ret(_gde_method_bind, _owner, (p_task != nullptr ? &p_task->_owner : nullptr));
}

Ref<BTTask> BehaviorTree::get_root_task() const {
	static GDExtensionMethodBindPtr _gde_method_bind = ::godot::gdextension_interface::classdb_get_method_bind(BehaviorTree::get_class_static()._native_ptr(), StringName("get_root_task")._native_ptr(), 2357383988);
	CHECK_METHOD_BIND_RET(_gde_method_bind, (Ref<BTTask>()));
	return Ref<BTTask>::_gde_internal_constructor(::godot::internal::_call_native_mb_ret_obj<BTTask>(_gde_method_bind, _owner));
}

Ref<BehaviorTree> BehaviorTree::clone() const {
	static GDExtensionMethodBindPtr _gde_method_bind = ::godot::gdextension_interface::classdb_get_method_bind(BehaviorTree::get_class_static()._native_ptr(), StringName("clone")._native_ptr(), 2060910044);
	CHECK_METHOD_BIND_RET(_gde_method_bind, (Ref<BehaviorTree>()));
	return Ref<BehaviorTree>::_gde_internal_constructor(::godot::internal::_call_native_mb_ret_obj<BehaviorTree>(_gde_method_bind, _owner));
}

void BehaviorTree::copy_other(const Ref<BehaviorTree> &p_other) {
	static GDExtensionMethodBindPtr _gde_method_bind = ::godot::gdextension_interface::classdb_get_method_bind(BehaviorTree::get_class_static()._native_ptr(), StringName("copy_other")._native_ptr(), 1578118810);
	CHECK_METHOD_BIND(_gde_method_bind);
	::godot::internal::_call_native_mb_no_ret(_gde_method_bind, _owner, (p_other != nullptr ? &p_other->_owner : nullptr));
}

Ref<BTInstance> BehaviorTree::instantiate(Node *p_agent, const Ref<Blackboard> &p_blackboard, Node *p_instance_owner, Node *p_custom_scene_root) const {
	static GDExtensionMethodBindPtr _gde_method_bind = ::godot::gdextension_interface::classdb_get_method_bind(BehaviorTree::get_class_static()._native_ptr(), StringName("instantiate")._native_ptr(), 199206060);
	CHECK_METHOD_BIND_RET(_gde_method_bind, (Ref<BTInstance>()));
	return Ref<BTInstance>::_gde_internal_constructor(::godot::internal::_call_native_mb_ret_obj<BTInstance>(_gde_method_bind, _owner, (p_agent != nullptr ? &p_agent->_owner : nullptr), (p_blackboard != nullptr ? &p_blackboard->_owner : nullptr), (p_instance_owner != nullptr ? &p_instance_owner->_owner : nullptr), (p_custom_scene_root != nullptr ? &p_custom_scene_root->_owner : nullptr)));
}

} // namespace godot
