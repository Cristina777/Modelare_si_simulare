#include <iostream>
#include <stdlib.h>
#include <math.h>
#include "Evaluator.h"

float Evaluator::eval(){
   for(int i=0;i<nr_p;i++){
        if(i%2==0)
            x=generator.next();
        else if(i%2!=0)
            y=generator.next();
        if(sqrt(pow(x,2)+pow(y,2)))
            nr_sc++;
    }
    return double(pi-(4*nr_sc/nr_p));
}
