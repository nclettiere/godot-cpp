/**************************************************************************/
/*  limbo_utility.cpp                                                     */
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

#include <godot_cpp/classes/limbo_utility.hpp>

#include <godot_cpp/core/class_db.hpp>
#include <godot_cpp/core/engine_ptrcall.hpp>
#include <godot_cpp/core/error_macros.hpp>

#include <godot_cpp/classes/texture2d.hpp>

namespace godot {

LimboUtility *LimboUtility::singleton = nullptr;

LimboUtility *LimboUtility::get_singleton() {
	if (unlikely(singleton == nullptr)) {
		GDExtensionObjectPtr singleton_obj = ::godot::gdextension_interface::global_get_singleton(LimboUtility::get_class_static()._native_ptr());
#ifdef DEBUG_ENABLED
		ERR_FAIL_NULL_V(singleton_obj, nullptr);
#endif // DEBUG_ENABLED
		singleton = reinterpret_cast<LimboUtility *>(::godot::gdextension_interface::object_get_instance_binding(singleton_obj, ::godot::gdextension_interface::token, &LimboUtility::_gde_binding_callbacks));
#ifdef DEBUG_ENABLED
		ERR_FAIL_NULL_V(singleton, nullptr);
#endif // DEBUG_ENABLED
		if (likely(singleton)) {
			ClassDB::_register_engine_singleton(LimboUtility::get_class_static(), singleton);
		}
	}
	return singleton;
}

LimboUtility::~LimboUtility() {
	if (singleton == this) {
		ClassDB::_unregister_engine_singleton(LimboUtility::get_class_static());
		singleton = nullptr;
	}
}

String LimboUtility::decorate_var(const String &p_variable) const {
	static GDExtensionMethodBindPtr _gde_method_bind = ::godot::gdextension_interface::classdb_get_method_bind(LimboUtility::get_class_static()._native_ptr(), StringName("decorate_var")._native_ptr(), 3135753539);
	CHECK_METHOD_BIND_RET(_gde_method_bind, (String()));
	return ::godot::internal::_call_native_mb_ret<String>(_gde_method_bind, _owner, &p_variable);
}

String LimboUtility::decorate_output_var(const String &p_variable) const {
	static GDExtensionMethodBindPtr _gde_method_bind = ::godot::gdextension_interface::classdb_get_method_bind(LimboUtility::get_class_static()._native_ptr(), StringName("decorate_output_var")._native_ptr(), 3135753539);
	CHECK_METHOD_BIND_RET(_gde_method_bind, (String()));
	return ::godot::internal::_call_native_mb_ret<String>(_gde_method_bind, _owner, &p_variable);
}

String LimboUtility::get_status_name(int32_t p_status) const {
	static GDExtensionMethodBindPtr _gde_method_bind = ::godot::gdextension_interface::classdb_get_method_bind(LimboUtility::get_class_static()._native_ptr(), StringName("get_status_name")._native_ptr(), 844755477);
	CHECK_METHOD_BIND_RET(_gde_method_bind, (String()));
	int64_t p_status_encoded;
	PtrToArg<int64_t>::encode(p_status, &p_status_encoded);
	return ::godot::internal::_call_native_mb_ret<String>(_gde_method_bind, _owner, &p_status_encoded);
}

Ref<Texture2D> LimboUtility::get_task_icon(const String &p_class_or_script_path) const {
	static GDExtensionMethodBindPtr _gde_method_bind = ::godot::gdextension_interface::classdb_get_method_bind(LimboUtility::get_class_static()._native_ptr(), StringName("get_task_icon")._native_ptr(), 1624868502);
	CHECK_METHOD_BIND_RET(_gde_method_bind, (Ref<Texture2D>()));
	return Ref<Texture2D>::_gde_internal_constructor(::godot::internal::_call_native_mb_ret_obj<Texture2D>(_gde_method_bind, _owner, &p_class_or_script_path));
}

String LimboUtility::get_check_operator_string(LimboUtility::CheckType p_check) const {
	static GDExtensionMethodBindPtr _gde_method_bind = ::godot::gdextension_interface::classdb_get_method_bind(LimboUtility::get_class_static()._native_ptr(), StringName("get_check_operator_string")._native_ptr(), 2229865677);
	CHECK_METHOD_BIND_RET(_gde_method_bind, (String()));
	int64_t p_check_encoded;
	PtrToArg<int64_t>::encode(p_check, &p_check_encoded);
	return ::godot::internal::_call_native_mb_ret<String>(_gde_method_bind, _owner, &p_check_encoded);
}

bool LimboUtility::perform_check(LimboUtility::CheckType p_check, const Variant &p_a, const Variant &p_b) {
	static GDExtensionMethodBindPtr _gde_method_bind = ::godot::gdextension_interface::classdb_get_method_bind(LimboUtility::get_class_static()._native_ptr(), StringName("perform_check")._native_ptr(), 2238532162);
	CHECK_METHOD_BIND_RET(_gde_method_bind, (false));
	int64_t p_check_encoded;
	PtrToArg<int64_t>::encode(p_check, &p_check_encoded);
	return ::godot::internal::_call_native_mb_ret<int8_t>(_gde_method_bind, _owner, &p_check_encoded, &p_a, &p_b);
}

String LimboUtility::get_operation_string(LimboUtility::Operation p_operation) const {
	static GDExtensionMethodBindPtr _gde_method_bind = ::godot::gdextension_interface::classdb_get_method_bind(LimboUtility::get_class_static()._native_ptr(), StringName("get_operation_string")._native_ptr(), 108021222);
	CHECK_METHOD_BIND_RET(_gde_method_bind, (String()));
	int64_t p_operation_encoded;
	PtrToArg<int64_t>::encode(p_operation, &p_operation_encoded);
	return ::godot::internal::_call_native_mb_ret<String>(_gde_method_bind, _owner, &p_operation_encoded);
}

Variant LimboUtility::perform_operation(LimboUtility::Operation p_operation, const Variant &p_a, const Variant &p_b) {
	static GDExtensionMethodBindPtr _gde_method_bind = ::godot::gdextension_interface::classdb_get_method_bind(LimboUtility::get_class_static()._native_ptr(), StringName("perform_operation")._native_ptr(), 3049228354);
	CHECK_METHOD_BIND_RET(_gde_method_bind, (Variant()));
	int64_t p_operation_encoded;
	PtrToArg<int64_t>::encode(p_operation, &p_operation_encoded);
	return ::godot::internal::_call_native_mb_ret<Variant>(_gde_method_bind, _owner, &p_operation_encoded, &p_a, &p_b);
}

} // namespace godot
