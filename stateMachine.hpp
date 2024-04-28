#pragma once

#ifndef STATE_MACHINE_HPP
#define STATE_MACHINE_HPP

#include <memory>
#include <stack>
#include "state.hpp"

namespace Sonar {
    typedef std::unique_ptr<state> StateRef;

    class StateMachine {
    public: 
        // State machine constructor 
        StateMachine() : _isRemoving(false), _isAdding(false), _isReplacing(false) {}

        // State Machine destructor 
        ~StateMachine() {}

        // When you click the play button, you have to go
        void AddState(StateRef newState, bool isReplacing = true);
        void RemoveState();
        void ProcessStateChanges();
        StateRef& GetActiveState();

    private:
        std::stack<StateRef> _states;
        StateRef _newState;

        bool _isRemoving;
        bool _isAdding;
        bool _isReplacing;
    };

} // namespace Sonar

#endif // STATE_MACHINE_HPP
