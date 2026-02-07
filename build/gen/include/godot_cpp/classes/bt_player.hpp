/**************************************************************************/
/*  bt_player.hpp                                                         */
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
#include <godot_cpp/variant/node_path.hpp>

#include <godot_cpp/core/class_db.hpp>

#include <type_traits>

namespace godot {

class BTInstance;
class BehaviorTree;
class Blackboard;
class BlackboardPlan;

class BTPlayer : public Node {
	GDEXTENSION_CLASS(BTPlayer, Node)

public:
	enum UpdateMode {
		IDLE = 0,
		PHYSICS = 1,
		MANUAL = 2,
	};

	void set_behavior_tree(const Ref<BehaviorTree> &p_behavior_tree);
	Ref<BehaviorTree> get_behavior_tree() const;
	void set_agent_node(const NodePath &p_agent_node);
	NodePath get_agent_node() const;
	void set_update_mode(BTPlayer::UpdateMode p_update_mode);
	BTPlayer::UpdateMode get_update_mode() const;
	void set_active(bool p_active);
	bool get_active() const;
	void set_blackboard(const Ref<Blackboard> &p_blackboard);
	Ref<Blackboard> get_blackboard() const;
	void set_blackboard_plan(const Ref<BlackboardPlan> &p_plan);
	Ref<BlackboardPlan> get_blackboard_plan() const;
	void set_monitor_performance(bool p_enable);
	bool get_monitor_performance() const;
	void update(double p_delta);
	void restart();
	Ref<BTInstance> get_bt_instance();
	void set_bt_instance(const Ref<BTInstance> &p_bt_instance);
	void set_scene_root_hint(Node *p_scene_root);

protected:
	template <typename T, typename B>
	static void register_virtuals() {
		Node::register_virtuals<T, B>();
	}

public:
};

} // namespace godot

VARIANT_ENUM_CAST(BTPlayer::UpdateMode);

