#ifndef STATEMACHINE_H_INCLUDED
#define STATEMACHINE_H_INCLUDED

class StateMachine {
public:

        //unsigned char  state;
        virtual StateMachine();
        virtual ~StateMachine();
        void transition();
};
struct Table{
        unsigned char  current_state;
        unsigned char  next_state;
        //unsigned char transition;
        unsigned char  final_state;
};


#endif // STATEMACHINE_H_INCLUDED
