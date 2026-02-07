/**************************************************************************/
/*  bt_state.hpp                                                          */
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

#include <godot_cpp/classes/limbo_state.hpp>
#include <godot_cpp/classes/ref.hpp>
#include <godot_cpp/variant/string_name.hpp>

#include <godot_cpp/core/class_db.hpp>

#include <type_traits>

namespace godot {

class BTInstance;
class BehaviorTree;
class Node;

class BTState : public LimboState {
	GDEXTENSION_CLASS(BTState, LimboState)

public:
	void set_behavior_tree(const Ref<BehaviorTree> &p_behavior_tree);
	Ref<BehaviorTree> get_behavior_tree() const;
	Ref<BTInstance> get_bt_instance() const;
	void set_success_event(const StringName &p_event);
	StringName get_success_event() const;
	void set_failure_event(const StringName &p_event);
	StringName get_failure_event() const;
	void set_monitor_performance(bool p_enable);
	bool get_monitor_performance() const;
	void set_scene_root_hint(Node *p_scene_root);

protected:
	template <typename T, typename B>
	static void register_virtuals() {
		LimboState::register_virtuals<T, B>();
	}

public:
};

} // namespace godot

