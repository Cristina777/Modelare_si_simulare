#ifndef BINOMIAL_H_INCLUDED
#define BINOMIAL_H_INCLUDED

class Binomial:public RandomGenerator{
 public:
      int n,
      int x=0;
      float p,u;
      Binomial();
      ~Binomial();
      int binomial();
};


#endif // BINOMIAL_H_INCLUDED
