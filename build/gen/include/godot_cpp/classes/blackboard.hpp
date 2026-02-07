/**************************************************************************/
/*  blackboard.hpp                                                        */
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

#pragma once

#include <godot_cpp/classes/ref.hpp>
#include <godot_cpp/classes/ref_counted.hpp>
#include <godot_cpp/variant/dictionary.hpp>
#include <godot_cpp/variant/string_name.hpp>
#include <godot_cpp/variant/typed_array.hpp>
#include <godot_cpp/variant/variant.hpp>

#include <godot_cpp/core/class_db.hpp>

#include <type_traits>

namespace godot {

class Object;

class Blackboard : public RefCounted {
	GDEXTENSION_CLASS(Blackboard, RefCounted)

public:
	Variant get_var(const StringName &p_var_name, const Variant &p_default = nullptr, bool p_complain = true) const;
	void set_var(const StringName &p_var_name, const Variant &p_value);
	bool has_var(const StringName &p_var_name) const;
	void set_parent(const Ref<Blackboard> &p_blackboard);
	Ref<Blackboard> get_parent() const;
	void erase_var(const StringName &p_var_name);
	void clear();
	TypedArray<StringName> list_vars() const;
	void print_state() const;
	Dictionary get_vars_as_dict() const;
	void populate_from_dict(const Dictionary &p_dictionary);
	Ref<Blackboard> top() const;
	void bind_var_to_property(const StringName &p_var_name, Object *p_object, const StringName &p_property, bool p_create = false);
	void unbind_var(const StringName &p_var_name);
	void link_var(const StringName &p_var_name, const Ref<Blackboard> &p_target_blackboard, const StringName &p_target_var, bool p_create = false);

protected:
	template <typename T, typename B>
	static void register_virtuals() {
		RefCounted::register_virtuals<T, B>();
	}

public:
};

} // namespace godot

