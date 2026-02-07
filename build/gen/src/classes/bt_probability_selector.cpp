/**************************************************************************/
/*  bt_probability_selector.cpp                                           */
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

#include <godot_cpp/classes/bt_probability_selector.hpp>

#include <godot_cpp/core/class_db.hpp>
#include <godot_cpp/core/engine_ptrcall.hpp>
#include <godot_cpp/core/error_macros.hpp>

namespace godot {

double BTProbabilitySelector::get_weight(int32_t p_child_idx) const {
	static GDExtensionMethodBindPtr _gde_method_bind = ::godot::gdextension_interface::classdb_get_method_bind(BTProbabilitySelector::get_class_static()._native_ptr(), StringName("get_weight")._native_ptr(), 2339986948);
	CHECK_METHOD_BIND_RET(_gde_method_bind, (0.0));
	int64_t p_child_idx_encoded;
	PtrToArg<int64_t>::encode(p_child_idx, &p_child_idx_encoded);
	return ::godot::internal::_call_native_mb_ret<double>(_gde_method_bind, _owner, &p_child_idx_encoded);
}

void BTProbabilitySelector::set_weight(int32_t p_child_idx, double p_weight) {
	static GDExtensionMethodBindPtr _gde_method_bind = ::godot::gdextension_interface::classdb_get_method_bind(BTProbabilitySelector::get_class_static()._native_ptr(), StringName("set_weight")._native_ptr(), 1602489585);
	CHECK_METHOD_BIND(_gde_method_bind);
	int64_t p_child_idx_encoded;
	PtrToArg<int64_t>::encode(p_child_idx, &p_child_idx_encoded);
	double p_weight_encoded;
	PtrToArg<double>::encode(p_weight, &p_weight_encoded);
	::godot::internal::_call_native_mb_no_ret(_gde_method_bind, _owner, &p_child_idx_encoded, &p_weight_encoded);
}

double BTProbabilitySelector::get_total_weight() const {
	static GDExtensionMethodBindPtr _gde_method_bind = ::godot::gdextension_interface::classdb_get_method_bind(BTProbabilitySelector::get_class_static()._native_ptr(), StringName("get_total_weight")._native_ptr(), 1740695150);
	CHECK_METHOD_BIND_RET(_gde_method_bind, (0.0));
	return ::godot::internal::_call_native_mb_ret<double>(_gde_method_bind, _owner);
}

double BTProbabilitySelector::get_probability(int32_t p_child_idx) const {
	static GDExtensionMethodBindPtr _gde_method_bind = ::godot::gdextension_interface::classdb_get_method_bind(BTProbabilitySelector::get_class_static()._native_ptr(), StringName("get_probability")._native_ptr(), 2339986948);
	CHECK_METHOD_BIND_RET(_gde_method_bind, (0.0));
	int64_t p_child_idx_encoded;
	PtrToArg<int64_t>::encode(p_child_idx, &p_child_idx_encoded);
	return ::godot::internal::_call_native_mb_ret<double>(_gde_method_bind, _owner, &p_child_idx_encoded);
}

void BTProbabilitySelector::set_probability(int32_t p_child_idx, double p_probability) {
	static GDExtensionMethodBindPtr _gde_method_bind = ::godot::gdextension_interface::classdb_get_method_bind(BTProbabilitySelector::get_class_static()._native_ptr(), StringName("set_probability")._native_ptr(), 1602489585);
	CHECK_METHOD_BIND(_gde_method_bind);
	int64_t p_child_idx_encoded;
	PtrToArg<int64_t>::encode(p_child_idx, &p_child_idx_encoded);
	double p_probability_encoded;
	PtrToArg<double>::encode(p_probability, &p_probability_encoded);
	::godot::internal::_call_native_mb_no_ret(_gde_method_bind, _owner, &p_child_idx_encoded, &p_probability_encoded);
}

bool BTProbabilitySelector::has_probability(int32_t p_child_idx) const {
	static GDExtensionMethodBindPtr _gde_method_bind = ::godot::gdextension_interface::classdb_get_method_bind(BTProbabilitySelector::get_class_static()._native_ptr(), StringName("has_probability")._native_ptr(), 1116898809);
	CHECK_METHOD_BIND_RET(_gde_method_bind, (false));
	int64_t p_child_idx_encoded;
	PtrToArg<int64_t>::encode(p_child_idx, &p_child_idx_encoded);
	return ::godot::internal::_call_native_mb_ret<int8_t>(_gde_method_bind, _owner, &p_child_idx_encoded);
}

bool BTProbabilitySelector::get_abort_on_failure() const {
	static GDExtensionMethodBindPtr _gde_method_bind = ::godot::gdextension_interface::classdb_get_method_bind(BTProbabilitySelector::get_class_static()._native_ptr(), StringName("get_abort_on_failure")._native_ptr(), 36873697);
	CHECK_METHOD_BIND_RET(_gde_method_bind, (false));
	return ::godot::internal::_call_native_mb_ret<int8_t>(_gde_method_bind, _owner);
}

void BTProbabilitySelector::set_abort_on_failure(bool p_enable) {
	static GDExtensionMethodBindPtr _gde_method_bind = ::godot::gdextension_interface::classdb_get_method_bind(BTProbabilitySelector::get_class_static()._native_ptr(), StringName("set_abort_on_failure")._native_ptr(), 2586408642);
	CHECK_METHOD_BIND(_gde_method_bind);
	int8_t p_enable_encoded;
	PtrToArg<bool>::encode(p_enable, &p_enable_encoded);
	::godot::internal::_call_native_mb_no_ret(_gde_method_bind, _owner, &p_enable_encoded);
}

} // namespace godot
