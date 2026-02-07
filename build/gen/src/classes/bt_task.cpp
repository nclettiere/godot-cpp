/**************************************************************************/
/*  bt_task.cpp                                                           */
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

#include <godot_cpp/classes/bt_task.hpp>

#include <godot_cpp/core/class_db.hpp>
#include <godot_cpp/core/engine_ptrcall.hpp>
#include <godot_cpp/core/error_macros.hpp>

#include <godot_cpp/classes/behavior_tree.hpp>
#include <godot_cpp/classes/blackboard.hpp>
#include <godot_cpp/classes/node.hpp>

namespace godot {

bool BTTask::is_root() const {
	static GDExtensionMethodBindPtr _gde_method_bind = ::godot::gdextension_interface::classdb_get_method_bind(BTTask::get_class_static()._native_ptr(), StringName("is_root")._native_ptr(), 36873697);
	CHECK_METHOD_BIND_RET(_gde_method_bind, (false));
	return ::godot::internal::_call_native_mb_ret<int8_t>(_gde_method_bind, _owner);
}

Ref<BTTask> BTTask::get_root() const {
	static GDExtensionMethodBindPtr _gde_method_bind = ::godot::gdextension_interface::classdb_get_method_bind(BTTask::get_class_static()._native_ptr(), StringName("get_root")._native_ptr(), 2357383988);
	CHECK_METHOD_BIND_RET(_gde_method_bind, (Ref<BTTask>()));
	return Ref<BTTask>::_gde_internal_constructor(::godot::internal::_call_native_mb_ret_obj<BTTask>(_gde_method_bind, _owner));
}

void BTTask::initialize(Node *p_agent, const Ref<Blackboard> &p_blackboard, Node *p_scene_root) {
	static GDExtensionMethodBindPtr _gde_method_bind = ::godot::gdextension_interface::classdb_get_method_bind(BTTask::get_class_static()._native_ptr(), StringName("initialize")._native_ptr(), 183049298);
	CHECK_METHOD_BIND(_gde_method_bind);
	::godot::internal::_call_native_mb_no_ret(_gde_method_bind, _owner, (p_agent != nullptr ? &p_agent->_owner : nullptr), (p_blackboard != nullptr ? &p_blackboard->_owner : nullptr), (p_scene_root != nullptr ? &p_scene_root->_owner : nullptr));
}

Ref<BTTask> BTTask::clone() const {
	static GDExtensionMethodBindPtr _gde_method_bind = ::godot::gdextension_interface::classdb_get_method_bind(BTTask::get_class_static()._native_ptr(), StringName("clone")._native_ptr(), 2357383988);
	CHECK_METHOD_BIND_RET(_gde_method_bind, (Ref<BTTask>()));
	return Ref<BTTask>::_gde_internal_constructor(::godot::internal::_call_native_mb_ret_obj<BTTask>(_gde_method_bind, _owner));
}

BT::Status BTTask::execute(double p_delta) {
	static GDExtensionMethodBindPtr _gde_method_bind = ::godot::gdextension_interface::classdb_get_method_bind(BTTask::get_class_static()._native_ptr(), StringName("execute")._native_ptr(), 3875129530);
	CHECK_METHOD_BIND_RET(_gde_method_bind, (BT::Status(0)));
	double p_delta_encoded;
	PtrToArg<double>::encode(p_delta, &p_delta_encoded);
	return (BT::Status)::godot::internal::_call_native_mb_ret<int64_t>(_gde_method_bind, _owner, &p_delta_encoded);
}

Ref<BTTask> BTTask::get_child(int32_t p_idx) const {
	static GDExtensionMethodBindPtr _gde_method_bind = ::godot::gdextension_interface::classdb_get_method_bind(BTTask::get_class_static()._native_ptr(), StringName("get_child")._native_ptr(), 3131648040);
	CHECK_METHOD_BIND_RET(_gde_method_bind, (Ref<BTTask>()));
	int64_t p_idx_encoded;
	PtrToArg<int64_t>::encode(p_idx, &p_idx_encoded);
	return Ref<BTTask>::_gde_internal_constructor(::godot::internal::_call_native_mb_ret_obj<BTTask>(_gde_method_bind, _owner, &p_idx_encoded));
}

int32_t BTTask::get_child_count() const {
	static GDExtensionMethodBindPtr _gde_method_bind = ::godot::gdextension_interface::classdb_get_method_bind(BTTask::get_class_static()._native_ptr(), StringName("get_child_count")._native_ptr(), 3905245786);
	CHECK_METHOD_BIND_RET(_gde_method_bind, (0));
	return ::godot::internal::_call_native_mb_ret<int64_t>(_gde_method_bind, _owner);
}

int32_t BTTask::get_enabled_child_count() const {
	static GDExtensionMethodBindPtr _gde_method_bind = ::godot::gdextension_interface::classdb_get_method_bind(BTTask::get_class_static()._native_ptr(), StringName("get_enabled_child_count")._native_ptr(), 3905245786);
	CHECK_METHOD_BIND_RET(_gde_method_bind, (0));
	return ::godot::internal::_call_native_mb_ret<int64_t>(_gde_method_bind, _owner);
}

void BTTask::add_child(const Ref<BTTask> &p_task) {
	static GDExtensionMethodBindPtr _gde_method_bind = ::godot::gdextension_interface::classdb_get_method_bind(BTTask::get_class_static()._native_ptr(), StringName("add_child")._native_ptr(), 3709114228);
	CHECK_METHOD_BIND(_gde_method_bind);
	::godot::internal::_call_native_mb_no_ret(_gde_method_bind, _owner, (p_task != nullptr ? &p_task->_owner : nullptr));
}

void BTTask::add_child_at_index(const Ref<BTTask> &p_task, int32_t p_idx) {
	static GDExtensionMethodBindPtr _gde_method_bind = ::godot::gdextension_interface::classdb_get_method_bind(BTTask::get_class_static()._native_ptr(), StringName("add_child_at_index")._native_ptr(), 1003463687);
	CHECK_METHOD_BIND(_gde_method_bind);
	int64_t p_idx_encoded;
	PtrToArg<int64_t>::encode(p_idx, &p_idx_encoded);
	::godot::internal::_call_native_mb_no_ret(_gde_method_bind, _owner, (p_task != nullptr ? &p_task->_owner : nullptr), &p_idx_encoded);
}

void BTTask::remove_child(const Ref<BTTask> &p_task) {
	static GDExtensionMethodBindPtr _gde_method_bind = ::godot::gdextension_interface::classdb_get_method_bind(BTTask::get_class_static()._native_ptr(), StringName("remove_child")._native_ptr(), 3709114228);
	CHECK_METHOD_BIND(_gde_method_bind);
	::godot::internal::_call_native_mb_no_ret(_gde_method_bind, _owner, (p_task != nullptr ? &p_task->_owner : nullptr));
}

void BTTask::remove_child_at_index(int32_t p_idx) {
	static GDExtensionMethodBindPtr _gde_method_bind = ::godot::gdextension_interface::classdb_get_method_bind(BTTask::get_class_static()._native_ptr(), StringName("remove_child_at_index")._native_ptr(), 1286410249);
	CHECK_METHOD_BIND(_gde_method_bind);
	int64_t p_idx_encoded;
	PtrToArg<int64_t>::encode(p_idx, &p_idx_encoded);
	::godot::internal::_call_native_mb_no_ret(_gde_method_bind, _owner, &p_idx_encoded);
}

bool BTTask::has_child(const Ref<BTTask> &p_task) const {
	static GDExtensionMethodBindPtr _gde_method_bind = ::godot::gdextension_interface::classdb_get_method_bind(BTTask::get_class_static()._native_ptr(), StringName("has_child")._native_ptr(), 1745371493);
	CHECK_METHOD_BIND_RET(_gde_method_bind, (false));
	return ::godot::internal::_call_native_mb_ret<int8_t>(_gde_method_bind, _owner, (p_task != nullptr ? &p_task->_owner : nullptr));
}

bool BTTask::is_descendant_of(const Ref<BTTask> &p_task) const {
	static GDExtensionMethodBindPtr _gde_method_bind = ::godot::gdextension_interface::classdb_get_method_bind(BTTask::get_class_static()._native_ptr(), StringName("is_descendant_of")._native_ptr(), 1745371493);
	CHECK_METHOD_BIND_RET(_gde_method_bind, (false));
	return ::godot::internal::_call_native_mb_ret<int8_t>(_gde_method_bind, _owner, (p_task != nullptr ? &p_task->_owner : nullptr));
}

int32_t BTTask::get_index() const {
	static GDExtensionMethodBindPtr _gde_method_bind = ::godot::gdextension_interface::classdb_get_method_bind(BTTask::get_class_static()._native_ptr(), StringName("get_index")._native_ptr(), 3905245786);
	CHECK_METHOD_BIND_RET(_gde_method_bind, (0));
	return ::godot::internal::_call_native_mb_ret<int64_t>(_gde_method_bind, _owner);
}

Ref<BTTask> BTTask::next_sibling() const {
	static GDExtensionMethodBindPtr _gde_method_bind = ::godot::gdextension_interface::classdb_get_method_bind(BTTask::get_class_static()._native_ptr(), StringName("next_sibling")._native_ptr(), 2357383988);
	CHECK_METHOD_BIND_RET(_gde_method_bind, (Ref<BTTask>()));
	return Ref<BTTask>::_gde_internal_constructor(::godot::internal::_call_native_mb_ret_obj<BTTask>(_gde_method_bind, _owner));
}

void BTTask::print_tree(int32_t p_initial_tabs) {
	static GDExtensionMethodBindPtr _gde_method_bind = ::godot::gdextension_interface::classdb_get_method_bind(BTTask::get_class_static()._native_ptr(), StringName("print_tree")._native_ptr(), 1995695955);
	CHECK_METHOD_BIND(_gde_method_bind);
	int64_t p_initial_tabs_encoded;
	PtrToArg<int64_t>::encode(p_initial_tabs, &p_initial_tabs_encoded);
	::godot::internal::_call_native_mb_no_ret(_gde_method_bind, _owner, &p_initial_tabs_encoded);
}

String BTTask::get_task_name() {
	static GDExtensionMethodBindPtr _gde_method_bind = ::godot::gdextension_interface::classdb_get_method_bind(BTTask::get_class_static()._native_ptr(), StringName("get_task_name")._native_ptr(), 2841200299);
	CHECK_METHOD_BIND_RET(_gde_method_bind, (String()));
	return ::godot::internal::_call_native_mb_ret<String>(_gde_method_bind, _owner);
}

void BTTask::abort() {
	static GDExtensionMethodBindPtr _gde_method_bind = ::godot::gdextension_interface::classdb_get_method_bind(BTTask::get_class_static()._native_ptr(), StringName("abort")._native_ptr(), 3218959716);
	CHECK_METHOD_BIND(_gde_method_bind);
	::godot::internal::_call_native_mb_no_ret(_gde_method_bind, _owner);
}

Ref<BehaviorTree> BTTask::editor_get_behavior_tree() {
	static GDExtensionMethodBindPtr _gde_method_bind = ::godot::gdextension_interface::classdb_get_method_bind(BTTask::get_class_static()._native_ptr(), StringName("editor_get_behavior_tree")._native_ptr(), 699685348);
	CHECK_METHOD_BIND_RET(_gde_method_bind, (Ref<BehaviorTree>()));
	return Ref<BehaviorTree>::_gde_internal_constructor(::godot::internal::_call_native_mb_ret_obj<BehaviorTree>(_gde_method_bind, _owner));
}

int32_t BTTask::get_child_count_excluding_comments() const {
	static GDExtensionMethodBindPtr _gde_method_bind = ::godot::gdextension_interface::classdb_get_method_bind(BTTask::get_class_static()._native_ptr(), StringName("get_child_count_excluding_comments")._native_ptr(), 3905245786);
	CHECK_METHOD_BIND_RET(_gde_method_bind, (0));
	return ::godot::internal::_call_native_mb_ret<int64_t>(_gde_method_bind, _owner);
}

Node *BTTask::get_agent() const {
	static GDExtensionMethodBindPtr _gde_method_bind = ::godot::gdextension_interface::classdb_get_method_bind(BTTask::get_class_static()._native_ptr(), StringName("get_agent")._native_ptr(), 3160264692);
	CHECK_METHOD_BIND_RET(_gde_method_bind, (nullptr));
	return ::godot::internal::_call_native_mb_ret_obj<Node>(_gde_method_bind, _owner);
}

void BTTask::set_agent(Node *p_agent) {
	static GDExtensionMethodBindPtr _gde_method_bind = ::godot::gdextension_interface::classdb_get_method_bind(BTTask::get_class_static()._native_ptr(), StringName("set_agent")._native_ptr(), 1078189570);
	CHECK_METHOD_BIND(_gde_method_bind);
	::godot::internal::_call_native_mb_no_ret(_gde_method_bind, _owner, (p_agent != nullptr ? &p_agent->_owner : nullptr));
}

Node *BTTask::get_scene_root() const {
	static GDExtensionMethodBindPtr _gde_method_bind = ::godot::gdextension_interface::classdb_get_method_bind(BTTask::get_class_static()._native_ptr(), StringName("get_scene_root")._native_ptr(), 3160264692);
	CHECK_METHOD_BIND_RET(_gde_method_bind, (nullptr));
	return ::godot::internal::_call_native_mb_ret_obj<Node>(_gde_method_bind, _owner);
}

Ref<Blackboard> BTTask::get_blackboard() const {
	static GDExtensionMethodBindPtr _gde_method_bind = ::godot::gdextension_interface::classdb_get_method_bind(BTTask::get_class_static()._native_ptr(), StringName("get_blackboard")._native_ptr(), 481986516);
	CHECK_METHOD_BIND_RET(_gde_method_bind, (Ref<Blackboard>()));
	return Ref<Blackboard>::_gde_internal_constructor(::godot::internal::_call_native_mb_ret_obj<Blackboard>(_gde_method_bind, _owner));
}

Ref<BTTask> BTTask::get_parent() const {
	static GDExtensionMethodBindPtr _gde_method_bind = ::godot::gdextension_interface::classdb_get_method_bind(BTTask::get_class_static()._native_ptr(), StringName("get_parent")._native_ptr(), 2357383988);
	CHECK_METHOD_BIND_RET(_gde_method_bind, (Ref<BTTask>()));
	return Ref<BTTask>::_gde_internal_constructor(::godot::internal::_call_native_mb_ret_obj<BTTask>(_gde_method_bind, _owner));
}

BT::Status BTTask::get_status() const {
	static GDExtensionMethodBindPtr _gde_method_bind = ::godot::gdextension_interface::classdb_get_method_bind(BTTask::get_class_static()._native_ptr(), StringName("get_status")._native_ptr(), 3844251819);
	CHECK_METHOD_BIND_RET(_gde_method_bind, (BT::Status(0)));
	return (BT::Status)::godot::internal::_call_native_mb_ret<int64_t>(_gde_method_bind, _owner);
}

double BTTask::get_elapsed_time() const {
	static GDExtensionMethodBindPtr _gde_method_bind = ::godot::gdextension_interface::classdb_get_method_bind(BTTask::get_class_static()._native_ptr(), StringName("get_elapsed_time")._native_ptr(), 1740695150);
	CHECK_METHOD_BIND_RET(_gde_method_bind, (0.0));
	return ::godot::internal::_call_native_mb_ret<double>(_gde_method_bind, _owner);
}

String BTTask::get_custom_name() const {
	static GDExtensionMethodBindPtr _gde_method_bind = ::godot::gdextension_interface::classdb_get_method_bind(BTTask::get_class_static()._native_ptr(), StringName("get_custom_name")._native_ptr(), 201670096);
	CHECK_METHOD_BIND_RET(_gde_method_bind, (String()));
	return ::godot::internal::_call_native_mb_ret<String>(_gde_method_bind, _owner);
}

void BTTask::set_custom_name(const String &p_name) {
	static GDExtensionMethodBindPtr _gde_method_bind = ::godot::gdextension_interface::classdb_get_method_bind(BTTask::get_class_static()._native_ptr(), StringName("set_custom_name")._native_ptr(), 83702148);
	CHECK_METHOD_BIND(_gde_method_bind);
	::godot::internal::_call_native_mb_no_ret(_gde_method_bind, _owner, &p_name);
}

bool BTTask::is_enabled() const {
	static GDExtensionMethodBindPtr _gde_method_bind = ::godot::gdextension_interface::classdb_get_method_bind(BTTask::get_class_static()._native_ptr(), StringName("is_enabled")._native_ptr(), 36873697);
	CHECK_METHOD_BIND_RET(_gde_method_bind, (false));
	return ::godot::internal::_call_native_mb_ret<int8_t>(_gde_method_bind, _owner);
}

void BTTask::_setup() {}

void BTTask::_enter() {}

void BTTask::_exit() {}

BT::Status BTTask::_tick(double p_delta) {
	return BT::Status(0);
}

String BTTask::_generate_name() const {
	return String();
}

PackedStringArray BTTask::_get_configuration_warnings() const {
	return PackedStringArray();
}

} // namespace godot
