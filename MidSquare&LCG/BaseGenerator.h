#ifndef BASEGENERATOR_H_INCLUDED
#define BASEGENERATOR_H_INCLUDED
class BaseGenerator{
public:
    int seed;
    BaseGenerator();
    ~BaseGenerator();
    virtual void next() const=0;
};


#endif // BASEGENERATOR_H_INCLUDED
