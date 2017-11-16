#ifndef MIDDLESQUARE_H_INCLUDED
#define MIDDLESQUARE_H_INCLUDED
class MiddleSquare: public BaseGenerator{
public:
    int seed;
    int k,x;
    //unsigned long s,y;
    MiddleSquare();
    MiddleSquare( const MiddleSquare *seed);
    ~MiddleSquare();
    int randomNumber();
    int virtual next();
    void citire();

};


#endif // MIDDLESQUARE_H_INCLUDED
