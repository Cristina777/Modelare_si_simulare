#include<iostream>
#include "TransitionTable.h"

static const TransitionTable  my_table[] =
{
    //  Current   Transition   Next
    //  State                  State
    {    0,          5,        5},
    {    0,          10,       10},
    {    5,          5,        10},
    {    5,          10,       15},
    {    10,         10,       15},
    {    10,         15,       15},
};

static const unsigned int  TABLE_SIZE = sizeof(my_table) / sizeof(my_table[0]);


Table_Entry const *table_begin(void)
{
    return &my_table[0];
}


Table_Entry const *table_end(void)
{
    return &my_table[TABLE_SIZE];
}
