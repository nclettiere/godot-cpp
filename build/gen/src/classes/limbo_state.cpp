/**************************************************************************/
/*  limbo_state.cpp                                                       */
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

#include <godot_cpp/classes/limbo_state.hpp>

#include <godot_cpp/core/class_db.hpp>
#include <godot_cpp/core/engine_ptrcall.hpp>
#include <godot_cpp/core/error_macros.hpp>

#include <godot_cpp/classes/blackboard.hpp>
#include <godot_cpp/classes/blackboard_plan.hpp>
#include <godot_cpp/variant/callable.hpp>
#include <godot_cpp/variant/string.hpp>

namespace godot {

void LimboState::restart() {
	static GDExtensionMethodBindPtr _gde_method_bind = ::godot::gdextension_interface::classdb_get_method_bind(LimboState::get_class_static()._native_ptr(), StringName("restart")._native_ptr(), 3218959716);
	CHECK_METHOD_BIND(_gde_method_bind);
	::godot::internal::_call_native_mb_no_ret(_gde_method_bind, _owner);
}

LimboState *LimboState::get_root() const {
	static GDExtensionMethodBindPtr _gde_method_bind = ::godot::gdextension_interface::classdb_get_method_bind(LimboState::get_class_static()._native_ptr(), StringName("get_root")._native_ptr(), 700478003);
	CHECK_METHOD_BIND_RET(_gde_method_bind, (nullptr));
	return ::godot::internal::_call_native_mb_ret_obj<LimboState>(_gde_method_bind, _owner);
}

Node *LimboState::get_agent() const {
	static GDExtensionMethodBindPtr _gde_method_bind = ::godot::gdextension_interface::classdb_get_method_bind(LimboState::get_class_static()._native_ptr(), StringName("get_agent")._native_ptr(), 3160264692);
	CHECK_METHOD_BIND_RET(_gde_method_bind, (nullptr));
	return ::godot::internal::_call_native_mb_ret_obj<Node>(_gde_method_bind, _owner);
}

void LimboState::set_agent(Node *p_agent) {
	static GDExtensionMethodBindPtr _gde_method_bind = ::godot::gdextension_interface::classdb_get_method_bind(LimboState::get_class_static()._native_ptr(), StringName("set_agent")._native_ptr(), 1078189570);
	CHECK_METHOD_BIND(_gde_method_bind);
	::godot::internal::_call_native_mb_no_ret(_gde_method_bind, _owner, (p_agent != nullptr ? &p_agent->_owner : nullptr));
}

StringName LimboState::event_finished() const {
	static GDExtensionMethodBindPtr _gde_method_bind = ::godot::gdextension_interface::classdb_get_method_bind(LimboState::get_class_static()._native_ptr(), StringName("event_finished")._native_ptr(), 2002593661);
	CHECK_METHOD_BIND_RET(_gde_method_bind, (StringName()));
	return ::godot::internal::_call_native_mb_ret<StringName>(_gde_method_bind, _owner);
}

bool LimboState::is_active() const {
	static GDExtensionMethodBindPtr _gde_method_bind = ::godot::gdextension_interface::classdb_get_method_bind(LimboState::get_class_static()._native_ptr(), StringName("is_active")._native_ptr(), 36873697);
	CHECK_METHOD_BIND_RET(_gde_method_bind, (false));
	return ::godot::internal::_call_native_mb_ret<int8_t>(_gde_method_bind, _owner);
}

bool LimboState::dispatch(const StringName &p_event, const Variant &p_cargo) {
	static GDExtensionMethodBindPtr _gde_method_bind = ::godot::gdextension_interface::classdb_get_method_bind(LimboState::get_class_static()._native_ptr(), StringName("dispatch")._native_ptr(), 2749009969);
	CHECK_METHOD_BIND_RET(_gde_method_bind, (false));
	return ::godot::internal::_call_native_mb_ret<int8_t>(_gde_method_bind, _owner, &p_event, &p_cargo);
}

LimboState *LimboState::named(const String &p_name) {
	static GDExtensionMethodBindPtr _gde_method_bind = ::godot::gdextension_interface::classdb_get_method_bind(LimboState::get_class_static()._native_ptr(), StringName("named")._native_ptr(), 3942310674);
	CHECK_METHOD_BIND_RET(_gde_method_bind, (nullptr));
	return ::godot::internal::_call_native_mb_ret_obj<LimboState>(_gde_method_bind, _owner, &p_name);
}

void LimboState::add_event_handler(const StringName &p_event, const Callable &p_handler) {
	static GDExtensionMethodBindPtr _gde_method_bind = ::godot::gdextension_interface::classdb_get_method_bind(LimboState::get_class_static()._native_ptr(), StringName("add_event_handler")._native_ptr(), 1874754934);
	CHECK_METHOD_BIND(_gde_method_bind);
	::godot::internal::_call_native_mb_no_ret(_gde_method_bind, _owner, &p_event, &p_handler);
}

LimboState *LimboState::call_on_enter(const Callable &p_callable) {
	static GDExtensionMethodBindPtr _gde_method_bind = ::godot::gdextension_interface::classdb_get_method_bind(LimboState::get_class_static()._native_ptr(), StringName("call_on_enter")._native_ptr(), 2472918659);
	CHECK_METHOD_BIND_RET(_gde_method_bind, (nullptr));
	return ::godot::internal::_call_native_mb_ret_obj<LimboState>(_gde_method_bind, _owner, &p_callable);
}

LimboState *LimboState::call_on_exit(const Callable &p_callable) {
	static GDExtensionMethodBindPtr _gde_method_bind = ::godot::gdextension_interface::classdb_get_method_bind(LimboState::get_class_static()._native_ptr(), StringName("call_on_exit")._native_ptr(), 2472918659);
	CHECK_METHOD_BIND_RET(_gde_method_bind, (nullptr));
	return ::godot::internal::_call_native_mb_ret_obj<LimboState>(_gde_method_bind, _owner, &p_callable);
}

LimboState *LimboState::call_on_update(const Callable &p_callable) {
	static GDExtensionMethodBindPtr _gde_method_bind = ::godot::gdextension_interface::classdb_get_method_bind(LimboState::get_class_static()._native_ptr(), StringName("call_on_update")._native_ptr(), 2472918659);
	CHECK_METHOD_BIND_RET(_gde_method_bind, (nullptr));
	return ::godot::internal::_call_native_mb_ret_obj<LimboState>(_gde_method_bind, _owner, &p_callable);
}

void LimboState::set_guard(const Callable &p_guard_callable) {
	static GDExtensionMethodBindPtr _gde_method_bind = ::godot::gdextension_interface::classdb_get_method_bind(LimboState::get_class_static()._native_ptr(), StringName("set_guard")._native_ptr(), 1611583062);
	CHECK_METHOD_BIND(_gde_method_bind);
	::godot::internal::_call_native_mb_no_ret(_gde_method_bind, _owner, &p_guard_callable);
}

void LimboState::clear_guard() {
	static GDExtensionMethodBindPtr _gde_method_bind = ::godot::gdextension_interface::classdb_get_method_bind(LimboState::get_class_static()._native_ptr(), StringName("clear_guard")._native_ptr(), 3218959716);
	CHECK_METHOD_BIND(_gde_method_bind);
	::godot::internal::_call_native_mb_no_ret(_gde_method_bind, _owner);
}

Ref<Blackboard> LimboState::get_blackboard() const {
	static GDExtensionMethodBindPtr _gde_method_bind = ::godot::gdextension_interface::classdb_get_method_bind(LimboState::get_class_static()._native_ptr(), StringName("get_blackboard")._native_ptr(), 481986516);
	CHECK_METHOD_BIND_RET(_gde_method_bind, (Ref<Blackboard>()));
	return Ref<Blackboard>::_gde_internal_constructor(::godot::internal::_call_native_mb_ret_obj<Blackboard>(_gde_method_bind, _owner));
}

void LimboState::set_blackboard_plan(const Ref<BlackboardPlan> &p_plan) {
	static GDExtensionMethodBindPtr _gde_method_bind = ::godot::gdextension_interface::classdb_get_method_bind(LimboState::get_class_static()._native_ptr(), StringName("set_blackboard_plan")._native_ptr(), 75109561);
	CHECK_METHOD_BIND(_gde_method_bind);
	::godot::internal::_call_native_mb_no_ret(_gde_method_bind, _owner, (p_plan != nullptr ? &p_plan->_owner : nullptr));
}

Ref<BlackboardPlan> LimboState::get_blackboard_plan() const {
	static GDExtensionMethodBindPtr _gde_method_bind = ::godot::gdextension_interface::classdb_get_method_bind(LimboState::get_class_static()._native_ptr(), StringName("get_blackboard_plan")._native_ptr(), 3292298585);
	CHECK_METHOD_BIND_RET(_gde_method_bind, (Ref<BlackboardPlan>()));
	return Ref<BlackboardPlan>::_gde_internal_constructor(::godot::internal::_call_native_mb_ret_obj<BlackboardPlan>(_gde_method_bind, _owner));
}

void LimboState::_setup() {}

void LimboState::_enter() {}

void LimboState::_exit() {}

void LimboState::_update(double p_delta) {}

} // namespace godot
