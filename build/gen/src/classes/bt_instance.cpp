/**************************************************************************/
/*  bt_instance.cpp                                                       */
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

#include <godot_cpp/classes/bt_instance.hpp>

#include <godot_cpp/core/class_db.hpp>
#include <godot_cpp/core/engine_ptrcall.hpp>
#include <godot_cpp/core/error_macros.hpp>

#include <godot_cpp/classes/blackboard.hpp>
#include <godot_cpp/classes/bt_task.hpp>
#include <godot_cpp/classes/node.hpp>

namespace godot {

Ref<BTTask> BTInstance::get_root_task() const {
	static GDExtensionMethodBindPtr _gde_method_bind = ::godot::gdextension_interface::classdb_get_method_bind(BTInstance::get_class_static()._native_ptr(), StringName("get_root_task")._native_ptr(), 2357383988);
	CHECK_METHOD_BIND_RET(_gde_method_bind, (Ref<BTTask>()));
	return Ref<BTTask>::_gde_internal_constructor(::godot::internal::_call_native_mb_ret_obj<BTTask>(_gde_method_bind, _owner));
}

Node *BTInstance::get_owner_node() const {
	static GDExtensionMethodBindPtr _gde_method_bind = ::godot::gdextension_interface::classdb_get_method_bind(BTInstance::get_class_static()._native_ptr(), StringName("get_owner_node")._native_ptr(), 3160264692);
	CHECK_METHOD_BIND_RET(_gde_method_bind, (nullptr));
	return ::godot::internal::_call_native_mb_ret_obj<Node>(_gde_method_bind, _owner);
}

BT::Status BTInstance::get_last_status() const {
	static GDExtensionMethodBindPtr _gde_method_bind = ::godot::gdextension_interface::classdb_get_method_bind(BTInstance::get_class_static()._native_ptr(), StringName("get_last_status")._native_ptr(), 3844251819);
	CHECK_METHOD_BIND_RET(_gde_method_bind, (BT::Status(0)));
	return (BT::Status)::godot::internal::_call_native_mb_ret<int64_t>(_gde_method_bind, _owner);
}

String BTInstance::get_source_bt_path() const {
	static GDExtensionMethodBindPtr _gde_method_bind = ::godot::gdextension_interface::classdb_get_method_bind(BTInstance::get_class_static()._native_ptr(), StringName("get_source_bt_path")._native_ptr(), 201670096);
	CHECK_METHOD_BIND_RET(_gde_method_bind, (String()));
	return ::godot::internal::_call_native_mb_ret<String>(_gde_method_bind, _owner);
}

Node *BTInstance::get_agent() const {
	static GDExtensionMethodBindPtr _gde_method_bind = ::godot::gdextension_interface::classdb_get_method_bind(BTInstance::get_class_static()._native_ptr(), StringName("get_agent")._native_ptr(), 3160264692);
	CHECK_METHOD_BIND_RET(_gde_method_bind, (nullptr));
	return ::godot::internal::_call_native_mb_ret_obj<Node>(_gde_method_bind, _owner);
}

Ref<Blackboard> BTInstance::get_blackboard() const {
	static GDExtensionMethodBindPtr _gde_method_bind = ::godot::gdextension_interface::classdb_get_method_bind(BTInstance::get_class_static()._native_ptr(), StringName("get_blackboard")._native_ptr(), 481986516);
	CHECK_METHOD_BIND_RET(_gde_method_bind, (Ref<Blackboard>()));
	return Ref<Blackboard>::_gde_internal_constructor(::godot::internal::_call_native_mb_ret_obj<Blackboard>(_gde_method_bind, _owner));
}

bool BTInstance::is_instance_valid() const {
	static GDExtensionMethodBindPtr _gde_method_bind = ::godot::gdextension_interface::classdb_get_method_bind(BTInstance::get_class_static()._native_ptr(), StringName("is_instance_valid")._native_ptr(), 36873697);
	CHECK_METHOD_BIND_RET(_gde_method_bind, (false));
	return ::godot::internal::_call_native_mb_ret<int8_t>(_gde_method_bind, _owner);
}

void BTInstance::set_monitor_performance(bool p_monitor) {
	static GDExtensionMethodBindPtr _gde_method_bind = ::godot::gdextension_interface::classdb_get_method_bind(BTInstance::get_class_static()._native_ptr(), StringName("set_monitor_performance")._native_ptr(), 2586408642);
	CHECK_METHOD_BIND(_gde_method_bind);
	int8_t p_monitor_encoded;
	PtrToArg<bool>::encode(p_monitor, &p_monitor_encoded);
	::godot::internal::_call_native_mb_no_ret(_gde_method_bind, _owner, &p_monitor_encoded);
}

bool BTInstance::get_monitor_performance() const {
	static GDExtensionMethodBindPtr _gde_method_bind = ::godot::gdextension_interface::classdb_get_method_bind(BTInstance::get_class_static()._native_ptr(), StringName("get_monitor_performance")._native_ptr(), 36873697);
	CHECK_METHOD_BIND_RET(_gde_method_bind, (false));
	return ::godot::internal::_call_native_mb_ret<int8_t>(_gde_method_bind, _owner);
}

BT::Status BTInstance::update(double p_delta) {
	static GDExtensionMethodBindPtr _gde_method_bind = ::godot::gdextension_interface::classdb_get_method_bind(BTInstance::get_class_static()._native_ptr(), StringName("update")._native_ptr(), 3875129530);
	CHECK_METHOD_BIND_RET(_gde_method_bind, (BT::Status(0)));
	double p_delta_encoded;
	PtrToArg<double>::encode(p_delta, &p_delta_encoded);
	return (BT::Status)::godot::internal::_call_native_mb_ret<int64_t>(_gde_method_bind, _owner, &p_delta_encoded);
}

void BTInstance::register_with_debugger() {
	static GDExtensionMethodBindPtr _gde_method_bind = ::godot::gdextension_interface::classdb_get_method_bind(BTInstance::get_class_static()._native_ptr(), StringName("register_with_debugger")._native_ptr(), 3218959716);
	CHECK_METHOD_BIND(_gde_method_bind);
	::godot::internal::_call_native_mb_no_ret(_gde_method_bind, _owner);
}

void BTInstance::unregister_with_debugger() {
	static GDExtensionMethodBindPtr _gde_method_bind = ::godot::gdextension_interface::classdb_get_method_bind(BTInstance::get_class_static()._native_ptr(), StringName("unregister_with_debugger")._native_ptr(), 3218959716);
	CHECK_METHOD_BIND(_gde_method_bind);
	::godot::internal::_call_native_mb_no_ret(_gde_method_bind, _owner);
}

} // namespace godot
