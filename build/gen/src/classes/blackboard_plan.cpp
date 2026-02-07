/**************************************************************************/
/*  blackboard_plan.cpp                                                   */
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

#include <godot_cpp/classes/blackboard_plan.hpp>

#include <godot_cpp/core/class_db.hpp>
#include <godot_cpp/core/engine_ptrcall.hpp>
#include <godot_cpp/core/error_macros.hpp>

namespace godot {

void BlackboardPlan::set_prefetch_nodepath_vars(bool p_enable) {
	static GDExtensionMethodBindPtr _gde_method_bind = ::godot::gdextension_interface::classdb_get_method_bind(BlackboardPlan::get_class_static()._native_ptr(), StringName("set_prefetch_nodepath_vars")._native_ptr(), 2586408642);
	CHECK_METHOD_BIND(_gde_method_bind);
	int8_t p_enable_encoded;
	PtrToArg<bool>::encode(p_enable, &p_enable_encoded);
	::godot::internal::_call_native_mb_no_ret(_gde_method_bind, _owner, &p_enable_encoded);
}

bool BlackboardPlan::is_prefetching_nodepath_vars() const {
	static GDExtensionMethodBindPtr _gde_method_bind = ::godot::gdextension_interface::classdb_get_method_bind(BlackboardPlan::get_class_static()._native_ptr(), StringName("is_prefetching_nodepath_vars")._native_ptr(), 36873697);
	CHECK_METHOD_BIND_RET(_gde_method_bind, (false));
	return ::godot::internal::_call_native_mb_ret<int8_t>(_gde_method_bind, _owner);
}

void BlackboardPlan::set_base_plan(const Ref<BlackboardPlan> &p_blackboard_plan) {
	static GDExtensionMethodBindPtr _gde_method_bind = ::godot::gdextension_interface::classdb_get_method_bind(BlackboardPlan::get_class_static()._native_ptr(), StringName("set_base_plan")._native_ptr(), 75109561);
	CHECK_METHOD_BIND(_gde_method_bind);
	::godot::internal::_call_native_mb_no_ret(_gde_method_bind, _owner, (p_blackboard_plan != nullptr ? &p_blackboard_plan->_owner : nullptr));
}

Ref<BlackboardPlan> BlackboardPlan::get_base_plan() const {
	static GDExtensionMethodBindPtr _gde_method_bind = ::godot::gdextension_interface::classdb_get_method_bind(BlackboardPlan::get_class_static()._native_ptr(), StringName("get_base_plan")._native_ptr(), 3292298585);
	CHECK_METHOD_BIND_RET(_gde_method_bind, (Ref<BlackboardPlan>()));
	return Ref<BlackboardPlan>::_gde_internal_constructor(::godot::internal::_call_native_mb_ret_obj<BlackboardPlan>(_gde_method_bind, _owner));
}

bool BlackboardPlan::is_derived() const {
	static GDExtensionMethodBindPtr _gde_method_bind = ::godot::gdextension_interface::classdb_get_method_bind(BlackboardPlan::get_class_static()._native_ptr(), StringName("is_derived")._native_ptr(), 36873697);
	CHECK_METHOD_BIND_RET(_gde_method_bind, (false));
	return ::godot::internal::_call_native_mb_ret<int8_t>(_gde_method_bind, _owner);
}

void BlackboardPlan::sync_with_base_plan() {
	static GDExtensionMethodBindPtr _gde_method_bind = ::godot::gdextension_interface::classdb_get_method_bind(BlackboardPlan::get_class_static()._native_ptr(), StringName("sync_with_base_plan")._native_ptr(), 3218959716);
	CHECK_METHOD_BIND(_gde_method_bind);
	::godot::internal::_call_native_mb_no_ret(_gde_method_bind, _owner);
}

void BlackboardPlan::set_parent_scope_plan_provider(const Callable &p_callable) {
	static GDExtensionMethodBindPtr _gde_method_bind = ::godot::gdextension_interface::classdb_get_method_bind(BlackboardPlan::get_class_static()._native_ptr(), StringName("set_parent_scope_plan_provider")._native_ptr(), 1611583062);
	CHECK_METHOD_BIND(_gde_method_bind);
	::godot::internal::_call_native_mb_no_ret(_gde_method_bind, _owner, &p_callable);
}

Callable BlackboardPlan::get_parent_scope_plan_provider() const {
	static GDExtensionMethodBindPtr _gde_method_bind = ::godot::gdextension_interface::classdb_get_method_bind(BlackboardPlan::get_class_static()._native_ptr(), StringName("get_parent_scope_plan_provider")._native_ptr(), 1307783378);
	CHECK_METHOD_BIND_RET(_gde_method_bind, (Callable()));
	return ::godot::internal::_call_native_mb_ret<Callable>(_gde_method_bind, _owner);
}

Ref<Blackboard> BlackboardPlan::create_blackboard(Node *p_prefetch_root, const Ref<Blackboard> &p_parent_scope, Node *p_prefetch_root_for_base_plan) {
	static GDExtensionMethodBindPtr _gde_method_bind = ::godot::gdextension_interface::classdb_get_method_bind(BlackboardPlan::get_class_static()._native_ptr(), StringName("create_blackboard")._native_ptr(), 702907583);
	CHECK_METHOD_BIND_RET(_gde_method_bind, (Ref<Blackboard>()));
	return Ref<Blackboard>::_gde_internal_constructor(::godot::internal::_call_native_mb_ret_obj<Blackboard>(_gde_method_bind, _owner, (p_prefetch_root != nullptr ? &p_prefetch_root->_owner : nullptr), (p_parent_scope != nullptr ? &p_parent_scope->_owner : nullptr), (p_prefetch_root_for_base_plan != nullptr ? &p_prefetch_root_for_base_plan->_owner : nullptr)));
}

void BlackboardPlan::populate_blackboard(const Ref<Blackboard> &p_blackboard, bool p_overwrite, Node *p_prefetch_root, Node *p_prefetch_root_for_base_plan) {
	static GDExtensionMethodBindPtr _gde_method_bind = ::godot::gdextension_interface::classdb_get_method_bind(BlackboardPlan::get_class_static()._native_ptr(), StringName("populate_blackboard")._native_ptr(), 983779258);
	CHECK_METHOD_BIND(_gde_method_bind);
	int8_t p_overwrite_encoded;
	PtrToArg<bool>::encode(p_overwrite, &p_overwrite_encoded);
	::godot::internal::_call_native_mb_no_ret(_gde_method_bind, _owner, (p_blackboard != nullptr ? &p_blackboard->_owner : nullptr), &p_overwrite_encoded, (p_prefetch_root != nullptr ? &p_prefetch_root->_owner : nullptr), (p_prefetch_root_for_base_plan != nullptr ? &p_prefetch_root_for_base_plan->_owner : nullptr));
}

} // namespace godot
