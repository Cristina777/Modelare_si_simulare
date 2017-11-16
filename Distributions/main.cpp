#include <iostream>
#include <stdlib.h>
#include <math.h>
#include <time.h>
#include "Poisson.h"
#include "Binomial.h"
#include "RandomGenerator.h"

using namespace std;


//generate a generator
int main()
{
    RandomGenerator r;
    Poisson p;
    Binomial b;
    int n;
    double v[100],q[100];
    double v1[],q1[];
    cout<<"Dati nr de subintervale";
    cin>>n;
    for(i=0;i<n;i++)
    {
        v[i]=p.generateNumber();
        int j=0;
        do{
            if(v[i]<((j+1)*0.1))
            {
                v1[j]++;
            }

        }while(j<n);
    }
    cout<<"Poisson distribution:"<<endl;
    for(int i=0;i<n;i++)
        cout<<"In intervalul [0."<<i<<",0."<<i+1<<"] : "<<v1[i]<<endl;
    for(i=0;i<n;i++)
    {
        q[i]=b.generateNumber();
        int j=0;
        do{
            if(v[i]<((j+1)*0.1))
            {
                q1[j]++;
            }

        }while(j<n);
    }
    cout<<"Binomial distribution:"<<endl;
    for(int i=0;i<n;i++)
        cout<<"In intervalul [0."<<i<<",0."<<i+1<<"] : "<<q1[i]<<endl;
    return 0;
}
