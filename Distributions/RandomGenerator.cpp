#include <iostream>
#include <stdlib.h>
#include <math.h>
#include "RandomGenerator.h"

RandomGenerator::RandomGenerator(int x){
    srand(x);
}
RandomGenerator::~RandomGenerator(){
   cout<<"Dealocare memorie";
}


float RandomGenerator::generateNumber(){
     seed=rand()%100;
     return ((float)seed)/100;
         /*srand (time(NULL));
         for(i=0;i<=n;i++)
            gen = rand()%(b-a+1)+a;
            genfloat=(double)rand();*/
}
