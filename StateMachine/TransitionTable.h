#ifndef TRANSITIONTABLE_H_INCLUDED
#define TRANSITIONTABLE_H_INCLUDED

class TransitionTable
{
public:
     unsigned int  current_state;
     unsigned char transition;
     unsigned int  next_state;
};

TransitionTable const *table_begin(void);
TransitionTable const *table_end(void);

#endif // TRANSITIONTABLE_H_INCLUDED
