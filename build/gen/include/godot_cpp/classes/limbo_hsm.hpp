/**************************************************************************/
/*  limbo_hsm.hpp                                                         */
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

#include <godot_cpp/classes/blackboard.hpp>
#include <godot_cpp/classes/limbo_state.hpp>
#include <godot_cpp/classes/ref.hpp>
#include <godot_cpp/variant/callable.hpp>

#include <godot_cpp/core/class_db.hpp>

#include <type_traits>

namespace godot {

class Node;
class StringName;

class LimboHSM : public LimboState {
	GDEXTENSION_CLASS(LimboHSM, LimboState)

public:
	enum UpdateMode {
		IDLE = 0,
		PHYSICS = 1,
		MANUAL = 2,
	};

	void set_update_mode(LimboHSM::UpdateMode p_mode);
	LimboHSM::UpdateMode get_update_mode() const;
	void set_initial_state(LimboState *p_state);
	LimboState *get_initial_state() const;
	LimboState *get_active_state() const;
	LimboState *get_previous_active_state() const;
	LimboState *get_leaf_state() const;
	void set_active(bool p_active);
	void update(double p_delta);
	void add_transition(LimboState *p_from_state, LimboState *p_to_state, const StringName &p_event, const Callable &p_guard = Callable());
	void remove_transition(LimboState *p_from_state, const StringName &p_event);
	bool has_transition(LimboState *p_from_state, const StringName &p_event) const;
	LimboState *anystate() const;
	void initialize(Node *p_agent, const Ref<Blackboard> &p_parent_scope = nullptr);
	void change_active_state(LimboState *p_state);

protected:
	template <typename T, typename B>
	static void register_virtuals() {
		LimboState::register_virtuals<T, B>();
	}

public:
};

} // namespace godot

VARIANT_ENUM_CAST(LimboHSM::UpdateMode);

