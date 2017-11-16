#include <iostream>
#include <stdlib.h>
#include <math.h>
#include <time.h>
#include "Generator.h"
#include "MiddleSquare.h"
#include "LCG.h"



using namespace std;
/*int MiddleSquare::randomNumber(){
    if (n >=12){
    cout<<"TOO LARGE!!";
    exit(0);
  }
  srand (time(NULL));
  seed = rand()%10000+1;
  for(i = 0; i < r; i++){
     //s = von(seed,n);
     seed = s;
  cout<<"\nRandom Number generated:"<<s;
  }
  return 0;
}*/

int main()
{
    BaseGenerator *p;
    MiddleSquare q;
    LCG b;
    Evaluator generator;
    p=&q;
    p->next();
    p=&b;
    p->next();
    generator.eval();
    return 0;
}
