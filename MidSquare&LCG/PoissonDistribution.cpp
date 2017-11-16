#include <iostream>
#include <stdlib.h>
#include <math.h>
#include "PoissonDistribution.h"

int PoissonDistribution::poisson(){
     L=pow(e,(-lamda));
     do{
        k=k+1;
        //Generate uniform random number u in [0,1]
        p=p*u;
     while(k<n && p>L);
     return k-1;
     }
}
void PoissonDistribution::citire(){
    cout<<"Dati lamda:"<<lamda<<endl;
    cin>>lamda;
}
