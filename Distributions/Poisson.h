#ifndef POISSON_H_INCLUDED
#define POISSON_H_INCLUDED


class Poisson:public RandomGenerator{
     int k=0;
     int p=1;
     int lamda;
     double L;
     Poisson();
     ~Poisson();
     int poisson();
     void citire();
};


#endif // POISSON_H_INCLUDED
