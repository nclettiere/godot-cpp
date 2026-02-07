/**************************************************************************/
/*  bt_evaluate_expression.cpp                                            */
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

#include <godot_cpp/classes/bt_evaluate_expression.hpp>

#include <godot_cpp/core/class_db.hpp>
#include <godot_cpp/core/engine_ptrcall.hpp>
#include <godot_cpp/core/error_macros.hpp>

#include <godot_cpp/classes/bb_node.hpp>
#include <godot_cpp/classes/bb_variant.hpp>

namespace godot {

Error BTEvaluateExpression::parse() {
	static GDExtensionMethodBindPtr _gde_method_bind = ::godot::gdextension_interface::classdb_get_method_bind(BTEvaluateExpression::get_class_static()._native_ptr(), StringName("parse")._native_ptr(), 166280745);
	CHECK_METHOD_BIND_RET(_gde_method_bind, (Error(0)));
	return (Error)::godot::internal::_call_native_mb_ret<int64_t>(_gde_method_bind, _owner);
}

void BTEvaluateExpression::set_expression_string(const String &p_expression_string) {
	static GDExtensionMethodBindPtr _gde_method_bind = ::godot::gdextension_interface::classdb_get_method_bind(BTEvaluateExpression::get_class_static()._native_ptr(), StringName("set_expression_string")._native_ptr(), 83702148);
	CHECK_METHOD_BIND(_gde_method_bind);
	::godot::internal::_call_native_mb_no_ret(_gde_method_bind, _owner, &p_expression_string);
}

String BTEvaluateExpression::get_expression_string() const {
	static GDExtensionMethodBindPtr _gde_method_bind = ::godot::gdextension_interface::classdb_get_method_bind(BTEvaluateExpression::get_class_static()._native_ptr(), StringName("get_expression_string")._native_ptr(), 201670096);
	CHECK_METHOD_BIND_RET(_gde_method_bind, (String()));
	return ::godot::internal::_call_native_mb_ret<String>(_gde_method_bind, _owner);
}

void BTEvaluateExpression::set_node_param(const Ref<BBNode> &p_param) {
	static GDExtensionMethodBindPtr _gde_method_bind = ::godot::gdextension_interface::classdb_get_method_bind(BTEvaluateExpression::get_class_static()._native_ptr(), StringName("set_node_param")._native_ptr(), 3697692215);
	CHECK_METHOD_BIND(_gde_method_bind);
	::godot::internal::_call_native_mb_no_ret(_gde_method_bind, _owner, (p_param != nullptr ? &p_param->_owner : nullptr));
}

Ref<BBNode> BTEvaluateExpression::get_node_param() const {
	static GDExtensionMethodBindPtr _gde_method_bind = ::godot::gdextension_interface::classdb_get_method_bind(BTEvaluateExpression::get_class_static()._native_ptr(), StringName("get_node_param")._native_ptr(), 1319241008);
	CHECK_METHOD_BIND_RET(_gde_method_bind, (Ref<BBNode>()));
	return Ref<BBNode>::_gde_internal_constructor(::godot::internal::_call_native_mb_ret_obj<BBNode>(_gde_method_bind, _owner));
}

void BTEvaluateExpression::set_input_names(const PackedStringArray &p_input_names) {
	static GDExtensionMethodBindPtr _gde_method_bind = ::godot::gdextension_interface::classdb_get_method_bind(BTEvaluateExpression::get_class_static()._native_ptr(), StringName("set_input_names")._native_ptr(), 4015028928);
	CHECK_METHOD_BIND(_gde_method_bind);
	::godot::internal::_call_native_mb_no_ret(_gde_method_bind, _owner, &p_input_names);
}

PackedStringArray BTEvaluateExpression::get_input_names() const {
	static GDExtensionMethodBindPtr _gde_method_bind = ::godot::gdextension_interface::classdb_get_method_bind(BTEvaluateExpression::get_class_static()._native_ptr(), StringName("get_input_names")._native_ptr(), 1139954409);
	CHECK_METHOD_BIND_RET(_gde_method_bind, (PackedStringArray()));
	return ::godot::internal::_call_native_mb_ret<PackedStringArray>(_gde_method_bind, _owner);
}

void BTEvaluateExpression::set_input_values(const TypedArray<Ref<BBVariant>> &p_input_values) {
	static GDExtensionMethodBindPtr _gde_method_bind = ::godot::gdextension_interface::classdb_get_method_bind(BTEvaluateExpression::get_class_static()._native_ptr(), StringName("set_input_values")._native_ptr(), 381264803);
	CHECK_METHOD_BIND(_gde_method_bind);
	::godot::internal::_call_native_mb_no_ret(_gde_method_bind, _owner, &p_input_values);
}

TypedArray<Ref<BBVariant>> BTEvaluateExpression::get_input_values() const {
	static GDExtensionMethodBindPtr _gde_method_bind = ::godot::gdextension_interface::classdb_get_method_bind(BTEvaluateExpression::get_class_static()._native_ptr(), StringName("get_input_values")._native_ptr(), 3995934104);
	CHECK_METHOD_BIND_RET(_gde_method_bind, (TypedArray<Ref<BBVariant>>()));
	return ::godot::internal::_call_native_mb_ret<TypedArray<Ref<BBVariant>>>(_gde_method_bind, _owner);
}

void BTEvaluateExpression::set_input_include_delta(bool p_input_include_delta) {
	static GDExtensionMethodBindPtr _gde_method_bind = ::godot::gdextension_interface::classdb_get_method_bind(BTEvaluateExpression::get_class_static()._native_ptr(), StringName("set_input_include_delta")._native_ptr(), 2586408642);
	CHECK_METHOD_BIND(_gde_method_bind);
	int8_t p_input_include_delta_encoded;
	PtrToArg<bool>::encode(p_input_include_delta, &p_input_include_delta_encoded);
	::godot::internal::_call_native_mb_no_ret(_gde_method_bind, _owner, &p_input_include_delta_encoded);
}

bool BTEvaluateExpression::is_input_delta_included() const {
	static GDExtensionMethodBindPtr _gde_method_bind = ::godot::gdextension_interface::classdb_get_method_bind(BTEvaluateExpression::get_class_static()._native_ptr(), StringName("is_input_delta_included")._native_ptr(), 36873697);
	CHECK_METHOD_BIND_RET(_gde_method_bind, (false));
	return ::godot::internal::_call_native_mb_ret<int8_t>(_gde_method_bind, _owner);
}

void BTEvaluateExpression::set_result_var(const StringName &p_variable) {
	static GDExtensionMethodBindPtr _gde_method_bind = ::godot::gdextension_interface::classdb_get_method_bind(BTEvaluateExpression::get_class_static()._native_ptr(), StringName("set_result_var")._native_ptr(), 3304788590);
	CHECK_METHOD_BIND(_gde_method_bind);
	::godot::internal::_call_native_mb_no_ret(_gde_method_bind, _owner, &p_variable);
}

StringName BTEvaluateExpression::get_result_var() const {
	static GDExtensionMethodBindPtr _gde_method_bind = ::godot::gdextension_interface::classdb_get_method_bind(BTEvaluateExpression::get_class_static()._native_ptr(), StringName("get_result_var")._native_ptr(), 2002593661);
	CHECK_METHOD_BIND_RET(_gde_method_bind, (StringName()));
	return ::godot::internal::_call_native_mb_ret<StringName>(_gde_method_bind, _owner);
}

} // namespace godot
