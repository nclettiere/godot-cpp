/**************************************************************************/
/*  bt_task.hpp                                                           */
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

#include <godot_cpp/classes/bt.hpp>
#include <godot_cpp/classes/ref.hpp>
#include <godot_cpp/variant/packed_string_array.hpp>
#include <godot_cpp/variant/string.hpp>

#include <godot_cpp/core/class_db.hpp>

#include <type_traits>

namespace godot {

class BehaviorTree;
class Blackboard;
class Node;

class BTTask : public BT {
	GDEXTENSION_CLASS(BTTask, BT)

public:
	bool is_root() const;
	Ref<BTTask> get_root() const;
	void initialize(Node *p_agent, const Ref<Blackboard> &p_blackboard, Node *p_scene_root);
	Ref<BTTask> clone() const;
	BT::Status execute(double p_delta);
	Ref<BTTask> get_child(int32_t p_idx) const;
	int32_t get_child_count() const;
	int32_t get_enabled_child_count() const;
	void add_child(const Ref<BTTask> &p_task);
	void add_child_at_index(const Ref<BTTask> &p_task, int32_t p_idx);
	void remove_child(const Ref<BTTask> &p_task);
	void remove_child_at_index(int32_t p_idx);
	bool has_child(const Ref<BTTask> &p_task) const;
	bool is_descendant_of(const Ref<BTTask> &p_task) const;
	int32_t get_index() const;
	Ref<BTTask> next_sibling() const;
	void print_tree(int32_t p_initial_tabs = 0);
	String get_task_name();
	void abort();
	Ref<BehaviorTree> editor_get_behavior_tree();
	int32_t get_child_count_excluding_comments() const;
	Node *get_agent() const;
	void set_agent(Node *p_agent);
	Node *get_scene_root() const;
	Ref<Blackboard> get_blackboard() const;
	Ref<BTTask> get_parent() const;
	BT::Status get_status() const;
	double get_elapsed_time() const;
	String get_custom_name() const;
	void set_custom_name(const String &p_name);
	bool is_enabled() const;
	virtual void _setup();
	virtual void _enter();
	virtual void _exit();
	virtual BT::Status _tick(double p_delta);
	virtual String _generate_name() const;
	virtual PackedStringArray _get_configuration_warnings() const;

protected:
	template <typename T, typename B>
	static void register_virtuals() {
		BT::register_virtuals<T, B>();
		if constexpr (!std::is_same_v<decltype(&B::_setup), decltype(&T::_setup)>) {
			BIND_VIRTUAL_METHOD(T, _setup, 3218959716);
		}
		if constexpr (!std::is_same_v<decltype(&B::_enter), decltype(&T::_enter)>) {
			BIND_VIRTUAL_METHOD(T, _enter, 3218959716);
		}
		if constexpr (!std::is_same_v<decltype(&B::_exit), decltype(&T::_exit)>) {
			BIND_VIRTUAL_METHOD(T, _exit, 3218959716);
		}
		if constexpr (!std::is_same_v<decltype(&B::_tick), decltype(&T::_tick)>) {
			BIND_VIRTUAL_METHOD(T, _tick, 3875129530);
		}
		if constexpr (!std::is_same_v<decltype(&B::_generate_name), decltype(&T::_generate_name)>) {
			BIND_VIRTUAL_METHOD(T, _generate_name, 201670096);
		}
		if constexpr (!std::is_same_v<decltype(&B::_get_configuration_warnings), decltype(&T::_get_configuration_warnings)>) {
			BIND_VIRTUAL_METHOD(T, _get_configuration_warnings, 1139954409);
		}
	}

public:
};

} // namespace godot

