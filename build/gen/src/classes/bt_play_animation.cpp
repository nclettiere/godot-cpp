/**************************************************************************/
/*  bt_play_animation.cpp                                                 */
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

#include <godot_cpp/classes/bt_play_animation.hpp>

#include <godot_cpp/core/class_db.hpp>
#include <godot_cpp/core/engine_ptrcall.hpp>
#include <godot_cpp/core/error_macros.hpp>

#include <godot_cpp/classes/bb_node.hpp>

namespace godot {

void BTPlayAnimation::set_animation_player(const Ref<BBNode> &p_animation_player) {
	static GDExtensionMethodBindPtr _gde_method_bind = ::godot::gdextension_interface::classdb_get_method_bind(BTPlayAnimation::get_class_static()._native_ptr(), StringName("set_animation_player")._native_ptr(), 3697692215);
	CHECK_METHOD_BIND(_gde_method_bind);
	::godot::internal::_call_native_mb_no_ret(_gde_method_bind, _owner, (p_animation_player != nullptr ? &p_animation_player->_owner : nullptr));
}

Ref<BBNode> BTPlayAnimation::get_animation_player() const {
	static GDExtensionMethodBindPtr _gde_method_bind = ::godot::gdextension_interface::classdb_get_method_bind(BTPlayAnimation::get_class_static()._native_ptr(), StringName("get_animation_player")._native_ptr(), 1319241008);
	CHECK_METHOD_BIND_RET(_gde_method_bind, (Ref<BBNode>()));
	return Ref<BBNode>::_gde_internal_constructor(::godot::internal::_call_native_mb_ret_obj<BBNode>(_gde_method_bind, _owner));
}

void BTPlayAnimation::set_animation_name(const StringName &p_name) {
	static GDExtensionMethodBindPtr _gde_method_bind = ::godot::gdextension_interface::classdb_get_method_bind(BTPlayAnimation::get_class_static()._native_ptr(), StringName("set_animation_name")._native_ptr(), 3304788590);
	CHECK_METHOD_BIND(_gde_method_bind);
	::godot::internal::_call_native_mb_no_ret(_gde_method_bind, _owner, &p_name);
}

StringName BTPlayAnimation::get_animation_name() const {
	static GDExtensionMethodBindPtr _gde_method_bind = ::godot::gdextension_interface::classdb_get_method_bind(BTPlayAnimation::get_class_static()._native_ptr(), StringName("get_animation_name")._native_ptr(), 2002593661);
	CHECK_METHOD_BIND_RET(_gde_method_bind, (StringName()));
	return ::godot::internal::_call_native_mb_ret<StringName>(_gde_method_bind, _owner);
}

void BTPlayAnimation::set_await_completion(double p_time_sec) {
	static GDExtensionMethodBindPtr _gde_method_bind = ::godot::gdextension_interface::classdb_get_method_bind(BTPlayAnimation::get_class_static()._native_ptr(), StringName("set_await_completion")._native_ptr(), 373806689);
	CHECK_METHOD_BIND(_gde_method_bind);
	double p_time_sec_encoded;
	PtrToArg<double>::encode(p_time_sec, &p_time_sec_encoded);
	::godot::internal::_call_native_mb_no_ret(_gde_method_bind, _owner, &p_time_sec_encoded);
}

double BTPlayAnimation::get_await_completion() const {
	static GDExtensionMethodBindPtr _gde_method_bind = ::godot::gdextension_interface::classdb_get_method_bind(BTPlayAnimation::get_class_static()._native_ptr(), StringName("get_await_completion")._native_ptr(), 1740695150);
	CHECK_METHOD_BIND_RET(_gde_method_bind, (0.0));
	return ::godot::internal::_call_native_mb_ret<double>(_gde_method_bind, _owner);
}

void BTPlayAnimation::set_blend(double p_blend) {
	static GDExtensionMethodBindPtr _gde_method_bind = ::godot::gdextension_interface::classdb_get_method_bind(BTPlayAnimation::get_class_static()._native_ptr(), StringName("set_blend")._native_ptr(), 373806689);
	CHECK_METHOD_BIND(_gde_method_bind);
	double p_blend_encoded;
	PtrToArg<double>::encode(p_blend, &p_blend_encoded);
	::godot::internal::_call_native_mb_no_ret(_gde_method_bind, _owner, &p_blend_encoded);
}

double BTPlayAnimation::get_blend() const {
	static GDExtensionMethodBindPtr _gde_method_bind = ::godot::gdextension_interface::classdb_get_method_bind(BTPlayAnimation::get_class_static()._native_ptr(), StringName("get_blend")._native_ptr(), 1740695150);
	CHECK_METHOD_BIND_RET(_gde_method_bind, (0.0));
	return ::godot::internal::_call_native_mb_ret<double>(_gde_method_bind, _owner);
}

void BTPlayAnimation::set_speed(double p_speed) {
	static GDExtensionMethodBindPtr _gde_method_bind = ::godot::gdextension_interface::classdb_get_method_bind(BTPlayAnimation::get_class_static()._native_ptr(), StringName("set_speed")._native_ptr(), 373806689);
	CHECK_METHOD_BIND(_gde_method_bind);
	double p_speed_encoded;
	PtrToArg<double>::encode(p_speed, &p_speed_encoded);
	::godot::internal::_call_native_mb_no_ret(_gde_method_bind, _owner, &p_speed_encoded);
}

double BTPlayAnimation::get_speed() const {
	static GDExtensionMethodBindPtr _gde_method_bind = ::godot::gdextension_interface::classdb_get_method_bind(BTPlayAnimation::get_class_static()._native_ptr(), StringName("get_speed")._native_ptr(), 1740695150);
	CHECK_METHOD_BIND_RET(_gde_method_bind, (0.0));
	return ::godot::internal::_call_native_mb_ret<double>(_gde_method_bind, _owner);
}

void BTPlayAnimation::set_from_end(bool p_from_end) {
	static GDExtensionMethodBindPtr _gde_method_bind = ::godot::gdextension_interface::classdb_get_method_bind(BTPlayAnimation::get_class_static()._native_ptr(), StringName("set_from_end")._native_ptr(), 2586408642);
	CHECK_METHOD_BIND(_gde_method_bind);
	int8_t p_from_end_encoded;
	PtrToArg<bool>::encode(p_from_end, &p_from_end_encoded);
	::godot::internal::_call_native_mb_no_ret(_gde_method_bind, _owner, &p_from_end_encoded);
}

bool BTPlayAnimation::get_from_end() const {
	static GDExtensionMethodBindPtr _gde_method_bind = ::godot::gdextension_interface::classdb_get_method_bind(BTPlayAnimation::get_class_static()._native_ptr(), StringName("get_from_end")._native_ptr(), 36873697);
	CHECK_METHOD_BIND_RET(_gde_method_bind, (false));
	return ::godot::internal::_call_native_mb_ret<int8_t>(_gde_method_bind, _owner);
}

} // namespace godot
