/**************************************************************************/
/*  bt_check_var.cpp                                                      */
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

#include <godot_cpp/classes/bt_check_var.hpp>

#include <godot_cpp/core/class_db.hpp>
#include <godot_cpp/core/engine_ptrcall.hpp>
#include <godot_cpp/core/error_macros.hpp>

#include <godot_cpp/classes/bb_variant.hpp>

namespace godot {

void BTCheckVar::set_variable(const StringName &p_variable) {
	static GDExtensionMethodBindPtr _gde_method_bind = ::godot::gdextension_interface::classdb_get_method_bind(BTCheckVar::get_class_static()._native_ptr(), StringName("set_variable")._native_ptr(), 3304788590);
	CHECK_METHOD_BIND(_gde_method_bind);
	::godot::internal::_call_native_mb_no_ret(_gde_method_bind, _owner, &p_variable);
}

StringName BTCheckVar::get_variable() const {
	static GDExtensionMethodBindPtr _gde_method_bind = ::godot::gdextension_interface::classdb_get_method_bind(BTCheckVar::get_class_static()._native_ptr(), StringName("get_variable")._native_ptr(), 2002593661);
	CHECK_METHOD_BIND_RET(_gde_method_bind, (StringName()));
	return ::godot::internal::_call_native_mb_ret<StringName>(_gde_method_bind, _owner);
}

void BTCheckVar::set_check_type(LimboUtility::CheckType p_check_type) {
	static GDExtensionMethodBindPtr _gde_method_bind = ::godot::gdextension_interface::classdb_get_method_bind(BTCheckVar::get_class_static()._native_ptr(), StringName("set_check_type")._native_ptr(), 1582792532);
	CHECK_METHOD_BIND(_gde_method_bind);
	int64_t p_check_type_encoded;
	PtrToArg<int64_t>::encode(p_check_type, &p_check_type_encoded);
	::godot::internal::_call_native_mb_no_ret(_gde_method_bind, _owner, &p_check_type_encoded);
}

LimboUtility::CheckType BTCheckVar::get_check_type() const {
	static GDExtensionMethodBindPtr _gde_method_bind = ::godot::gdextension_interface::classdb_get_method_bind(BTCheckVar::get_class_static()._native_ptr(), StringName("get_check_type")._native_ptr(), 1144774854);
	CHECK_METHOD_BIND_RET(_gde_method_bind, (LimboUtility::CheckType(0)));
	return (LimboUtility::CheckType)::godot::internal::_call_native_mb_ret<int64_t>(_gde_method_bind, _owner);
}

void BTCheckVar::set_value(const Ref<BBVariant> &p_value) {
	static GDExtensionMethodBindPtr _gde_method_bind = ::godot::gdextension_interface::classdb_get_method_bind(BTCheckVar::get_class_static()._native_ptr(), StringName("set_value")._native_ptr(), 2690419197);
	CHECK_METHOD_BIND(_gde_method_bind);
	::godot::internal::_call_native_mb_no_ret(_gde_method_bind, _owner, (p_value != nullptr ? &p_value->_owner : nullptr));
}

Ref<BBVariant> BTCheckVar::get_value() const {
	static GDExtensionMethodBindPtr _gde_method_bind = ::godot::gdextension_interface::classdb_get_method_bind(BTCheckVar::get_class_static()._native_ptr(), StringName("get_value")._native_ptr(), 4084654968);
	CHECK_METHOD_BIND_RET(_gde_method_bind, (Ref<BBVariant>()));
	return Ref<BBVariant>::_gde_internal_constructor(::godot::internal::_call_native_mb_ret_obj<BBVariant>(_gde_method_bind, _owner));
}

} // namespace godot
