/**************************************************************************/
/*  limbo_state.hpp                                                       */
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

#include <godot_cpp/classes/node.hpp>
#include <godot_cpp/classes/ref.hpp>
#include <godot_cpp/variant/string_name.hpp>
#include <godot_cpp/variant/variant.hpp>

#include <godot_cpp/core/class_db.hpp>

#include <type_traits>

namespace godot {

class Blackboard;
class BlackboardPlan;
class Callable;
class String;

class LimboState : public Node {
	GDEXTENSION_CLASS(LimboState, Node)

public:
	void restart();
	LimboState *get_root() const;
	Node *get_agent() const;
	void set_agent(Node *p_agent);
	StringName event_finished() const;
	bool is_active() const;
	bool dispatch(const StringName &p_event, const Variant &p_cargo = nullptr);
	LimboState *named(const String &p_name);
	void add_event_handler(const StringName &p_event, const Callable &p_handler);
	LimboState *call_on_enter(const Callable &p_callable);
	LimboState *call_on_exit(const Callable &p_callable);
	LimboState *call_on_update(const Callable &p_callable);
	void set_guard(const Callable &p_guard_callable);
	void clear_guard();
	Ref<Blackboard> get_blackboard() const;
	void set_blackboard_plan(const Ref<BlackboardPlan> &p_plan);
	Ref<BlackboardPlan> get_blackboard_plan() const;
	virtual void _setup();
	virtual void _enter();
	virtual void _exit();
	virtual void _update(double p_delta);

protected:
	template <typename T, typename B>
	static void register_virtuals() {
		Node::register_virtuals<T, B>();
		if constexpr (!std::is_same_v<decltype(&B::_setup), decltype(&T::_setup)>) {
			BIND_VIRTUAL_METHOD(T, _setup, 3218959716);
		}
		if constexpr (!std::is_same_v<decltype(&B::_enter), decltype(&T::_enter)>) {
			BIND_VIRTUAL_METHOD(T, _enter, 3218959716);
		}
		if constexpr (!std::is_same_v<decltype(&B::_exit), decltype(&T::_exit)>) {
			BIND_VIRTUAL_METHOD(T, _exit, 3218959716);
		}
		if constexpr (!std::is_same_v<decltype(&B::_update), decltype(&T::_update)>) {
			BIND_VIRTUAL_METHOD(T, _update, 373806689);
		}
	}

public:
};

} // namespace godot

