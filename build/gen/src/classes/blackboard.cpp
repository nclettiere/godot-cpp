/**************************************************************************/
/*  blackboard.cpp                                                        */
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

#include <godot_cpp/classes/blackboard.hpp>

#include <godot_cpp/core/class_db.hpp>
#include <godot_cpp/core/engine_ptrcall.hpp>
#include <godot_cpp/core/error_macros.hpp>

#include <godot_cpp/core/object.hpp>

namespace godot {

Variant Blackboard::get_var(const StringName &p_var_name, const Variant &p_default, bool p_complain) const {
	static GDExtensionMethodBindPtr _gde_method_bind = ::godot::gdextension_interface::classdb_get_method_bind(Blackboard::get_class_static()._native_ptr(), StringName("get_var")._native_ptr(), 2625785934);
	CHECK_METHOD_BIND_RET(_gde_method_bind, (Variant()));
	int8_t p_complain_encoded;
	PtrToArg<bool>::encode(p_complain, &p_complain_encoded);
	return ::godot::internal::_call_native_mb_ret<Variant>(_gde_method_bind, _owner, &p_var_name, &p_default, &p_complain_encoded);
}

void Blackboard::set_var(const StringName &p_var_name, const Variant &p_value) {
	static GDExtensionMethodBindPtr _gde_method_bind = ::godot::gdextension_interface::classdb_get_method_bind(Blackboard::get_class_static()._native_ptr(), StringName("set_var")._native_ptr(), 3776071444);
	CHECK_METHOD_BIND(_gde_method_bind);
	::godot::internal::_call_native_mb_no_ret(_gde_method_bind, _owner, &p_var_name, &p_value);
}

bool Blackboard::has_var(const StringName &p_var_name) const {
	static GDExtensionMethodBindPtr _gde_method_bind = ::godot::gdextension_interface::classdb_get_method_bind(Blackboard::get_class_static()._native_ptr(), StringName("has_var")._native_ptr(), 2619796661);
	CHECK_METHOD_BIND_RET(_gde_method_bind, (false));
	return ::godot::internal::_call_native_mb_ret<int8_t>(_gde_method_bind, _owner, &p_var_name);
}

void Blackboard::set_parent(const Ref<Blackboard> &p_blackboard) {
	static GDExtensionMethodBindPtr _gde_method_bind = ::godot::gdextension_interface::classdb_get_method_bind(Blackboard::get_class_static()._native_ptr(), StringName("set_parent")._native_ptr(), 3814559149);
	CHECK_METHOD_BIND(_gde_method_bind);
	::godot::internal::_call_native_mb_no_ret(_gde_method_bind, _owner, (p_blackboard != nullptr ? &p_blackboard->_owner : nullptr));
}

Ref<Blackboard> Blackboard::get_parent() const {
	static GDExtensionMethodBindPtr _gde_method_bind = ::godot::gdextension_interface::classdb_get_method_bind(Blackboard::get_class_static()._native_ptr(), StringName("get_parent")._native_ptr(), 481986516);
	CHECK_METHOD_BIND_RET(_gde_method_bind, (Ref<Blackboard>()));
	return Ref<Blackboard>::_gde_internal_constructor(::godot::internal::_call_native_mb_ret_obj<Blackboard>(_gde_method_bind, _owner));
}

void Blackboard::erase_var(const StringName &p_var_name) {
	static GDExtensionMethodBindPtr _gde_method_bind = ::godot::gdextension_interface::classdb_get_method_bind(Blackboard::get_class_static()._native_ptr(), StringName("erase_var")._native_ptr(), 3304788590);
	CHECK_METHOD_BIND(_gde_method_bind);
	::godot::internal::_call_native_mb_no_ret(_gde_method_bind, _owner, &p_var_name);
}

void Blackboard::clear() {
	static GDExtensionMethodBindPtr _gde_method_bind = ::godot::gdextension_interface::classdb_get_method_bind(Blackboard::get_class_static()._native_ptr(), StringName("clear")._native_ptr(), 3218959716);
	CHECK_METHOD_BIND(_gde_method_bind);
	::godot::internal::_call_native_mb_no_ret(_gde_method_bind, _owner);
}

TypedArray<StringName> Blackboard::list_vars() const {
	static GDExtensionMethodBindPtr _gde_method_bind = ::godot::gdextension_interface::classdb_get_method_bind(Blackboard::get_class_static()._native_ptr(), StringName("list_vars")._native_ptr(), 3995934104);
	CHECK_METHOD_BIND_RET(_gde_method_bind, (TypedArray<StringName>()));
	return ::godot::internal::_call_native_mb_ret<TypedArray<StringName>>(_gde_method_bind, _owner);
}

void Blackboard::print_state() const {
	static GDExtensionMethodBindPtr _gde_method_bind = ::godot::gdextension_interface::classdb_get_method_bind(Blackboard::get_class_static()._native_ptr(), StringName("print_state")._native_ptr(), 4051624405);
	CHECK_METHOD_BIND(_gde_method_bind);
	::godot::internal::_call_native_mb_no_ret(_gde_method_bind, _owner);
}

Dictionary Blackboard::get_vars_as_dict() const {
	static GDExtensionMethodBindPtr _gde_method_bind = ::godot::gdextension_interface::classdb_get_method_bind(Blackboard::get_class_static()._native_ptr(), StringName("get_vars_as_dict")._native_ptr(), 3102165223);
	CHECK_METHOD_BIND_RET(_gde_method_bind, (Dictionary()));
	return ::godot::internal::_call_native_mb_ret<Dictionary>(_gde_method_bind, _owner);
}

void Blackboard::populate_from_dict(const Dictionary &p_dictionary) {
	static GDExtensionMethodBindPtr _gde_method_bind = ::godot::gdextension_interface::classdb_get_method_bind(Blackboard::get_class_static()._native_ptr(), StringName("populate_from_dict")._native_ptr(), 4155329257);
	CHECK_METHOD_BIND(_gde_method_bind);
	::godot::internal::_call_native_mb_no_ret(_gde_method_bind, _owner, &p_dictionary);
}

Ref<Blackboard> Blackboard::top() const {
	static GDExtensionMethodBindPtr _gde_method_bind = ::godot::gdextension_interface::classdb_get_method_bind(Blackboard::get_class_static()._native_ptr(), StringName("top")._native_ptr(), 481986516);
	CHECK_METHOD_BIND_RET(_gde_method_bind, (Ref<Blackboard>()));
	return Ref<Blackboard>::_gde_internal_constructor(::godot::internal::_call_native_mb_ret_obj<Blackboard>(_gde_method_bind, _owner));
}

void Blackboard::bind_var_to_property(const StringName &p_var_name, Object *p_object, const StringName &p_property, bool p_create) {
	static GDExtensionMethodBindPtr _gde_method_bind = ::godot::gdextension_interface::classdb_get_method_bind(Blackboard::get_class_static()._native_ptr(), StringName("bind_var_to_property")._native_ptr(), 308277285);
	CHECK_METHOD_BIND(_gde_method_bind);
	int8_t p_create_encoded;
	PtrToArg<bool>::encode(p_create, &p_create_encoded);
	::godot::internal::_call_native_mb_no_ret(_gde_method_bind, _owner, &p_var_name, (p_object != nullptr ? &p_object->_owner : nullptr), &p_property, &p_create_encoded);
}

void Blackboard::unbind_var(const StringName &p_var_name) {
	static GDExtensionMethodBindPtr _gde_method_bind = ::godot::gdextension_interface::classdb_get_method_bind(Blackboard::get_class_static()._native_ptr(), StringName("unbind_var")._native_ptr(), 3304788590);
	CHECK_METHOD_BIND(_gde_method_bind);
	::godot::internal::_call_native_mb_no_ret(_gde_method_bind, _owner, &p_var_name);
}

void Blackboard::link_var(const StringName &p_var_name, const Ref<Blackboard> &p_target_blackboard, const StringName &p_target_var, bool p_create) {
	static GDExtensionMethodBindPtr _gde_method_bind = ::godot::gdextension_interface::classdb_get_method_bind(Blackboard::get_class_static()._native_ptr(), StringName("link_var")._native_ptr(), 2944255451);
	CHECK_METHOD_BIND(_gde_method_bind);
	int8_t p_create_encoded;
	PtrToArg<bool>::encode(p_create, &p_create_encoded);
	::godot::internal::_call_native_mb_no_ret(_gde_method_bind, _owner, &p_var_name, (p_target_blackboard != nullptr ? &p_target_blackboard->_owner : nullptr), &p_target_var, &p_create_encoded);
}

} // namespace godot
