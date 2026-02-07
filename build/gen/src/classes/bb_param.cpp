/**************************************************************************/
/*  bb_param.cpp                                                          */
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

#include <godot_cpp/classes/bb_param.hpp>

#include <godot_cpp/core/class_db.hpp>
#include <godot_cpp/core/engine_ptrcall.hpp>
#include <godot_cpp/core/error_macros.hpp>

#include <godot_cpp/classes/blackboard.hpp>
#include <godot_cpp/classes/node.hpp>

namespace godot {

void BBParam::set_value_source(BBParam::ValueSource p_value_source) {
	static GDExtensionMethodBindPtr _gde_method_bind = ::godot::gdextension_interface::classdb_get_method_bind(BBParam::get_class_static()._native_ptr(), StringName("set_value_source")._native_ptr(), 2736900244);
	CHECK_METHOD_BIND(_gde_method_bind);
	int64_t p_value_source_encoded;
	PtrToArg<int64_t>::encode(p_value_source, &p_value_source_encoded);
	::godot::internal::_call_native_mb_no_ret(_gde_method_bind, _owner, &p_value_source_encoded);
}

BBParam::ValueSource BBParam::get_value_source() const {
	static GDExtensionMethodBindPtr _gde_method_bind = ::godot::gdextension_interface::classdb_get_method_bind(BBParam::get_class_static()._native_ptr(), StringName("get_value_source")._native_ptr(), 824419973);
	CHECK_METHOD_BIND_RET(_gde_method_bind, (BBParam::ValueSource(0)));
	return (BBParam::ValueSource)::godot::internal::_call_native_mb_ret<int64_t>(_gde_method_bind, _owner);
}

void BBParam::set_saved_value(const Variant &p_value) {
	static GDExtensionMethodBindPtr _gde_method_bind = ::godot::gdextension_interface::classdb_get_method_bind(BBParam::get_class_static()._native_ptr(), StringName("set_saved_value")._native_ptr(), 1114965689);
	CHECK_METHOD_BIND(_gde_method_bind);
	::godot::internal::_call_native_mb_no_ret(_gde_method_bind, _owner, &p_value);
}

Variant BBParam::get_saved_value() {
	static GDExtensionMethodBindPtr _gde_method_bind = ::godot::gdextension_interface::classdb_get_method_bind(BBParam::get_class_static()._native_ptr(), StringName("get_saved_value")._native_ptr(), 1460262497);
	CHECK_METHOD_BIND_RET(_gde_method_bind, (Variant()));
	return ::godot::internal::_call_native_mb_ret<Variant>(_gde_method_bind, _owner);
}

void BBParam::set_variable(const StringName &p_variable_name) {
	static GDExtensionMethodBindPtr _gde_method_bind = ::godot::gdextension_interface::classdb_get_method_bind(BBParam::get_class_static()._native_ptr(), StringName("set_variable")._native_ptr(), 3304788590);
	CHECK_METHOD_BIND(_gde_method_bind);
	::godot::internal::_call_native_mb_no_ret(_gde_method_bind, _owner, &p_variable_name);
}

StringName BBParam::get_variable() const {
	static GDExtensionMethodBindPtr _gde_method_bind = ::godot::gdextension_interface::classdb_get_method_bind(BBParam::get_class_static()._native_ptr(), StringName("get_variable")._native_ptr(), 2002593661);
	CHECK_METHOD_BIND_RET(_gde_method_bind, (StringName()));
	return ::godot::internal::_call_native_mb_ret<StringName>(_gde_method_bind, _owner);
}

Variant::Type BBParam::get_type() const {
	static GDExtensionMethodBindPtr _gde_method_bind = ::godot::gdextension_interface::classdb_get_method_bind(BBParam::get_class_static()._native_ptr(), StringName("get_type")._native_ptr(), 3416842102);
	CHECK_METHOD_BIND_RET(_gde_method_bind, (Variant::Type(0)));
	return (Variant::Type)::godot::internal::_call_native_mb_ret<int64_t>(_gde_method_bind, _owner);
}

Variant BBParam::get_value(Node *p_scene_root, const Ref<Blackboard> &p_blackboard, const Variant &p_default) {
	static GDExtensionMethodBindPtr _gde_method_bind = ::godot::gdextension_interface::classdb_get_method_bind(BBParam::get_class_static()._native_ptr(), StringName("get_value")._native_ptr(), 1607989653);
	CHECK_METHOD_BIND_RET(_gde_method_bind, (Variant()));
	return ::godot::internal::_call_native_mb_ret<Variant>(_gde_method_bind, _owner, (p_scene_root != nullptr ? &p_scene_root->_owner : nullptr), (p_blackboard != nullptr ? &p_blackboard->_owner : nullptr), &p_default);
}

} // namespace godot
