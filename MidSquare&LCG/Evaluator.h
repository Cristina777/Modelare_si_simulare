#ifndef EVALUATOR_H_INCLUDED
#define EVALUATOR_H_INCLUDED
class Evaluator{
public:
    int i,ctor,nr_sc=0,nr_p=0; //nr_sc=nr de puncte din sfertul de cerc,nr_p=nr de puncte din patrat
    double x=0,y=0;
    const float pi=3,1415;
    Evaluator();
    ~Evaluator();
    float eval();

};


#endif // EVALUATOR_H_INCLUDED
