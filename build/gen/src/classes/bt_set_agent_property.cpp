/**************************************************************************/
/*  bt_set_agent_property.cpp                                             */
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

#include <godot_cpp/classes/bt_set_agent_property.hpp>

#include <godot_cpp/core/class_db.hpp>
#include <godot_cpp/core/engine_ptrcall.hpp>
#include <godot_cpp/core/error_macros.hpp>

#include <godot_cpp/classes/bb_variant.hpp>

namespace godot {

void BTSetAgentProperty::set_property(const StringName &p_property) {
	static GDExtensionMethodBindPtr _gde_method_bind = ::godot::gdextension_interface::classdb_get_method_bind(BTSetAgentProperty::get_class_static()._native_ptr(), StringName("set_property")._native_ptr(), 3304788590);
	CHECK_METHOD_BIND(_gde_method_bind);
	::godot::internal::_call_native_mb_no_ret(_gde_method_bind, _owner, &p_property);
}

StringName BTSetAgentProperty::get_property() const {
	static GDExtensionMethodBindPtr _gde_method_bind = ::godot::gdextension_interface::classdb_get_method_bind(BTSetAgentProperty::get_class_static()._native_ptr(), StringName("get_property")._native_ptr(), 2002593661);
	CHECK_METHOD_BIND_RET(_gde_method_bind, (StringName()));
	return ::godot::internal::_call_native_mb_ret<StringName>(_gde_method_bind, _owner);
}

void BTSetAgentProperty::set_value(const Ref<BBVariant> &p_value) {
	static GDExtensionMethodBindPtr _gde_method_bind = ::godot::gdextension_interface::classdb_get_method_bind(BTSetAgentProperty::get_class_static()._native_ptr(), StringName("set_value")._native_ptr(), 2690419197);
	CHECK_METHOD_BIND(_gde_method_bind);
	::godot::internal::_call_native_mb_no_ret(_gde_method_bind, _owner, (p_value != nullptr ? &p_value->_owner : nullptr));
}

Ref<BBVariant> BTSetAgentProperty::get_value() const {
	static GDExtensionMethodBindPtr _gde_method_bind = ::godot::gdextension_interface::classdb_get_method_bind(BTSetAgentProperty::get_class_static()._native_ptr(), StringName("get_value")._native_ptr(), 4084654968);
	CHECK_METHOD_BIND_RET(_gde_method_bind, (Ref<BBVariant>()));
	return Ref<BBVariant>::_gde_internal_constructor(::godot::internal::_call_native_mb_ret_obj<BBVariant>(_gde_method_bind, _owner));
}

void BTSetAgentProperty::set_operation(LimboUtility::Operation p_operation) {
	static GDExtensionMethodBindPtr _gde_method_bind = ::godot::gdextension_interface::classdb_get_method_bind(BTSetAgentProperty::get_class_static()._native_ptr(), StringName("set_operation")._native_ptr(), 2256141563);
	CHECK_METHOD_BIND(_gde_method_bind);
	int64_t p_operation_encoded;
	PtrToArg<int64_t>::encode(p_operation, &p_operation_encoded);
	::godot::internal::_call_native_mb_no_ret(_gde_method_bind, _owner, &p_operation_encoded);
}

LimboUtility::Operation BTSetAgentProperty::get_operation() const {
	static GDExtensionMethodBindPtr _gde_method_bind = ::godot::gdextension_interface::classdb_get_method_bind(BTSetAgentProperty::get_class_static()._native_ptr(), StringName("get_operation")._native_ptr(), 166815378);
	CHECK_METHOD_BIND_RET(_gde_method_bind, (LimboUtility::Operation(0)));
	return (LimboUtility::Operation)::godot::internal::_call_native_mb_ret<int64_t>(_gde_method_bind, _owner);
}

} // namespace godot
