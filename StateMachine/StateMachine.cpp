#include<iostream>
#include "StateMachine.h"

StateMachine::StateMachine(){
   StateMachine* mState = new StateMachine();
}
StateMachine::StateMachine(){
    delete mState;
}
void StateMachine::transition(){
 while (1)
    {
        cout << "Current state: " << current_state << "\n";
        cout << "Enter transition: ";
        cin >> transition;
        cin.ignore(1000, '\n');
        bool state_found = false;
        while ((!state_found)){
          if (current_state->transition == transition){
                    cout << "State found, transitioning"
                         << " from state " << current_state
                         << ", to state " << current_state->next_state
                         << "\n";
                    current_state = current_state->next_state;
                    state_found = true;
                    break;
                }
             ++current_state;
         }
         if (!state_found)
         {
             cout << "Transition not found, current state not changed.\n";
         }
    }
}

