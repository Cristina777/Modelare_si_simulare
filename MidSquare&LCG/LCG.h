#ifndef LCG_H_INCLUDED
#define LCG_H_INCLUDED

class LCG: public BaseGenerator{
public:
    int a, c;
    unsigned int m, seed;
    LCG();
    ~LCG();
    int next();
     void citire();

};

#endif // LCG_H_INCLUDED
