/**************************************************************************/
/*  bt_evaluate_expression.hpp                                            */
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

#include <godot_cpp/classes/bt_action.hpp>
#include <godot_cpp/classes/global_constants.hpp>
#include <godot_cpp/classes/ref.hpp>
#include <godot_cpp/variant/packed_string_array.hpp>
#include <godot_cpp/variant/string.hpp>
#include <godot_cpp/variant/string_name.hpp>
#include <godot_cpp/variant/typed_array.hpp>

#include <godot_cpp/core/class_db.hpp>

#include <type_traits>

namespace godot {

class BBNode;
class BBVariant;

class BTEvaluateExpression : public BTAction {
	GDEXTENSION_CLASS(BTEvaluateExpression, BTAction)

public:
	Error parse();
	void set_expression_string(const String &p_expression_string);
	String get_expression_string() const;
	void set_node_param(const Ref<BBNode> &p_param);
	Ref<BBNode> get_node_param() const;
	void set_input_names(const PackedStringArray &p_input_names);
	PackedStringArray get_input_names() const;
	void set_input_values(const TypedArray<Ref<BBVariant>> &p_input_values);
	TypedArray<Ref<BBVariant>> get_input_values() const;
	void set_input_include_delta(bool p_input_include_delta);
	bool is_input_delta_included() const;
	void set_result_var(const StringName &p_variable);
	StringName get_result_var() const;

protected:
	template <typename T, typename B>
	static void register_virtuals() {
		BTAction::register_virtuals<T, B>();
	}

public:
};

} // namespace godot

