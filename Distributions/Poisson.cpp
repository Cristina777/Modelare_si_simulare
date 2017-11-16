#include <iostream>
#include <stdlib.h>
#include <math.h>
#include "Poisson.h"
#include "RandomGenerator.h"

int Poisson::poisson(){
     L= 1/pow(M_E,(lamda));
     do{
        k=k+1;
        u = RandomGenerator.generateNumber();
        p=p*u;
     while(k<n && p>L);
     return (k-1)/ (float)n;
     }
}
void Poisson::citire(){
    cout<<"Dati lamda:"<<lamda<<endl;
    cin>>lamda;
}
