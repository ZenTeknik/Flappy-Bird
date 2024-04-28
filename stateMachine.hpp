#pragma once
#include<memory>
#include<stack>

#include"state.hpp"


namespace Sonar {
	typedef  std::unique_ptr<State> StateRef;


	class stateMachine {
	public: 
		// state mcahine constructer 
		stateMachine(){}
		// state Machine desturcter 
		~stateMachine() {}


        // when u click play button u have to go
		void AddState(StateRef newState, bool isReplacing = true);
		void RemoveState();

		void ProcessStateChanges();


		StateRef& GetActiveState();

	private:
		std::stack<StateRef>_states;
		StateRef _newState;

		bool _isRemoving;
		bool _isAdding;
		bool _isReplacing;

	};

}