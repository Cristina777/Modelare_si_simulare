#include<iostream>
#include "CoffeeMachine.h"
#include "StateMachine.h"


CoffeeMachine::CoffeeMachine(){
     //mCoffee(new CoffeeMachine());
     this->state=(int)state::current_state;
     Table[0] = {(int)current_state::0   (int)next_state::5   (int)final_state::5};
     Table[1] = {(int)current_state::0   (int)next_state::10  (int)final_state::10};
     Table[2] = {(int)current_state::0   (int)next_state::0   (int)final_state::0};
     Table[3] = {(int)current_state::5   (int)next_state::5   (int)final_state::10};
     Table[4] = {(int)current_state::5   (int)next_state::10  (int)final_state::15};
     Table[5] = {(int)current_state::10  (int)next_state::5   (int)final_state::15};
     Table[6] = {(int)current_state::10  (int)next_state::10  (int)final_state:0};
     Table[7] = {(int)current_state::15  (int)next_state::10  (int)final_state::5};
     Table[8] = {(int)current_state::15  (int)next_state::15  (int)final_state::0};



}
CoffeeMachine::~CoffeeMachine(){
     //delete mCoffee;
}


