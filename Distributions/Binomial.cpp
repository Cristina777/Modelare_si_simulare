#include <iostream>
#include <stdlib.h>
#include <math.h>
#include "Binomial.h"
#include "RandomGenerator.h"

int Binomial::binomial(){
    for(int i=0;i<=n-1;i++)
    {
       u= RandomGenerator.generateNumber();
       if(u<p)
           x++;
    }
    return (float)x/(n-1);
}
