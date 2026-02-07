/**************************************************************************/
/*  limbo_utility.hpp                                                     */
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
#include <godot_cpp/core/object.hpp>
#include <godot_cpp/variant/string.hpp>
#include <godot_cpp/variant/variant.hpp>

#include <godot_cpp/core/class_db.hpp>

#include <type_traits>

namespace godot {

class Texture2D;

class LimboUtility : public Object {
	GDEXTENSION_CLASS(LimboUtility, Object)

	static LimboUtility *singleton;

public:
	enum CheckType {
		CHECK_EQUAL = 0,
		CHECK_LESS_THAN = 1,
		CHECK_LESS_THAN_OR_EQUAL = 2,
		CHECK_GREATER_THAN = 3,
		CHECK_GREATER_THAN_OR_EQUAL = 4,
		CHECK_NOT_EQUAL = 5,
	};

	enum Operation {
		OPERATION_NONE = 0,
		OPERATION_ADDITION = 1,
		OPERATION_SUBTRACTION = 2,
		OPERATION_MULTIPLICATION = 3,
		OPERATION_DIVISION = 4,
		OPERATION_MODULO = 5,
		OPERATION_POWER = 6,
		OPERATION_BIT_SHIFT_LEFT = 7,
		OPERATION_BIT_SHIFT_RIGHT = 8,
		OPERATION_BIT_AND = 9,
		OPERATION_BIT_OR = 10,
		OPERATION_BIT_XOR = 11,
	};

	static LimboUtility *get_singleton();

	String decorate_var(const String &p_variable) const;
	String decorate_output_var(const String &p_variable) const;
	String get_status_name(int32_t p_status) const;
	Ref<Texture2D> get_task_icon(const String &p_class_or_script_path) const;
	String get_check_operator_string(LimboUtility::CheckType p_check) const;
	bool perform_check(LimboUtility::CheckType p_check, const Variant &p_a, const Variant &p_b);
	String get_operation_string(LimboUtility::Operation p_operation) const;
	Variant perform_operation(LimboUtility::Operation p_operation, const Variant &p_a, const Variant &p_b);

protected:
	template <typename T, typename B>
	static void register_virtuals() {
		Object::register_virtuals<T, B>();
	}

	~LimboUtility();

public:
};

} // namespace godot

VARIANT_ENUM_CAST(LimboUtility::CheckType);
VARIANT_ENUM_CAST(LimboUtility::Operation);

