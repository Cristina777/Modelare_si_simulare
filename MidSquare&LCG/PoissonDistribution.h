#ifndef POISSONDISTRIBUTION_H_INCLUDED
#define POISSONDISTRIBUTION_H_INCLUDED

class PoissonDistribution:public BaseGenerator{
     int k=0;
     int p=1;
     int lamda;
     int L;
     float e=2,71828;
     PoissonDistribution();
     ~PoissonDistribution();
     int poisson();
     void citire();
};


#endif // POISSONDISTRIBUTION_H_INCLUDED
