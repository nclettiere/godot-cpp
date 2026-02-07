/**************************************************************************/
/*  bt_call_method.cpp                                                    */
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

#include <godot_cpp/classes/bt_call_method.hpp>

#include <godot_cpp/core/class_db.hpp>
#include <godot_cpp/core/engine_ptrcall.hpp>
#include <godot_cpp/core/error_macros.hpp>

#include <godot_cpp/classes/bb_node.hpp>
#include <godot_cpp/classes/bb_variant.hpp>

namespace godot {

void BTCallMethod::set_method(const StringName &p_method_name) {
	static GDExtensionMethodBindPtr _gde_method_bind = ::godot::gdextension_interface::classdb_get_method_bind(BTCallMethod::get_class_static()._native_ptr(), StringName("set_method")._native_ptr(), 3304788590);
	CHECK_METHOD_BIND(_gde_method_bind);
	::godot::internal::_call_native_mb_no_ret(_gde_method_bind, _owner, &p_method_name);
}

StringName BTCallMethod::get_method() const {
	static GDExtensionMethodBindPtr _gde_method_bind = ::godot::gdextension_interface::classdb_get_method_bind(BTCallMethod::get_class_static()._native_ptr(), StringName("get_method")._native_ptr(), 2002593661);
	CHECK_METHOD_BIND_RET(_gde_method_bind, (StringName()));
	return ::godot::internal::_call_native_mb_ret<StringName>(_gde_method_bind, _owner);
}

void BTCallMethod::set_node_param(const Ref<BBNode> &p_param) {
	static GDExtensionMethodBindPtr _gde_method_bind = ::godot::gdextension_interface::classdb_get_method_bind(BTCallMethod::get_class_static()._native_ptr(), StringName("set_node_param")._native_ptr(), 3697692215);
	CHECK_METHOD_BIND(_gde_method_bind);
	::godot::internal::_call_native_mb_no_ret(_gde_method_bind, _owner, (p_param != nullptr ? &p_param->_owner : nullptr));
}

Ref<BBNode> BTCallMethod::get_node_param() const {
	static GDExtensionMethodBindPtr _gde_method_bind = ::godot::gdextension_interface::classdb_get_method_bind(BTCallMethod::get_class_static()._native_ptr(), StringName("get_node_param")._native_ptr(), 1319241008);
	CHECK_METHOD_BIND_RET(_gde_method_bind, (Ref<BBNode>()));
	return Ref<BBNode>::_gde_internal_constructor(::godot::internal::_call_native_mb_ret_obj<BBNode>(_gde_method_bind, _owner));
}

void BTCallMethod::set_args(const TypedArray<Ref<BBVariant>> &p_args) {
	static GDExtensionMethodBindPtr _gde_method_bind = ::godot::gdextension_interface::classdb_get_method_bind(BTCallMethod::get_class_static()._native_ptr(), StringName("set_args")._native_ptr(), 381264803);
	CHECK_METHOD_BIND(_gde_method_bind);
	::godot::internal::_call_native_mb_no_ret(_gde_method_bind, _owner, &p_args);
}

TypedArray<Ref<BBVariant>> BTCallMethod::get_args() const {
	static GDExtensionMethodBindPtr _gde_method_bind = ::godot::gdextension_interface::classdb_get_method_bind(BTCallMethod::get_class_static()._native_ptr(), StringName("get_args")._native_ptr(), 3995934104);
	CHECK_METHOD_BIND_RET(_gde_method_bind, (TypedArray<Ref<BBVariant>>()));
	return ::godot::internal::_call_native_mb_ret<TypedArray<Ref<BBVariant>>>(_gde_method_bind, _owner);
}

void BTCallMethod::set_include_delta(bool p_include_delta) {
	static GDExtensionMethodBindPtr _gde_method_bind = ::godot::gdextension_interface::classdb_get_method_bind(BTCallMethod::get_class_static()._native_ptr(), StringName("set_include_delta")._native_ptr(), 2586408642);
	CHECK_METHOD_BIND(_gde_method_bind);
	int8_t p_include_delta_encoded;
	PtrToArg<bool>::encode(p_include_delta, &p_include_delta_encoded);
	::godot::internal::_call_native_mb_no_ret(_gde_method_bind, _owner, &p_include_delta_encoded);
}

bool BTCallMethod::is_delta_included() const {
	static GDExtensionMethodBindPtr _gde_method_bind = ::godot::gdextension_interface::classdb_get_method_bind(BTCallMethod::get_class_static()._native_ptr(), StringName("is_delta_included")._native_ptr(), 36873697);
	CHECK_METHOD_BIND_RET(_gde_method_bind, (false));
	return ::godot::internal::_call_native_mb_ret<int8_t>(_gde_method_bind, _owner);
}

void BTCallMethod::set_result_var(const StringName &p_variable) {
	static GDExtensionMethodBindPtr _gde_method_bind = ::godot::gdextension_interface::classdb_get_method_bind(BTCallMethod::get_class_static()._native_ptr(), StringName("set_result_var")._native_ptr(), 3304788590);
	CHECK_METHOD_BIND(_gde_method_bind);
	::godot::internal::_call_native_mb_no_ret(_gde_method_bind, _owner, &p_variable);
}

StringName BTCallMethod::get_result_var() const {
	static GDExtensionMethodBindPtr _gde_method_bind = ::godot::gdextension_interface::classdb_get_method_bind(BTCallMethod::get_class_static()._native_ptr(), StringName("get_result_var")._native_ptr(), 2002593661);
	CHECK_METHOD_BIND_RET(_gde_method_bind, (StringName()));
	return ::godot::internal::_call_native_mb_ret<StringName>(_gde_method_bind, _owner);
}

} // namespace godot
