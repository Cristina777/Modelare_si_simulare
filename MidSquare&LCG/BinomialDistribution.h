#ifndef BINOMIALDISTRIBUTION_H_INCLUDED
#define BINOMIALDISTRIBUTION_H_INCLUDED

class BinomialDistribution:public BaseGenerator{
      int n;
      float p;
      int x=0;
      int u;
      BinomialDistribution();
      ~BinomialDistribution();
      int binomial();
};

#endif // BINOMIALDISTRIBUTION_H_INCLUDED
