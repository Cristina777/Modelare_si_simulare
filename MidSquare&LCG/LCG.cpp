#include <iostream>
#include <stdlib.h>
#include <math.h>
#include "LCG.h"

int LCG::next(){
    if(c!=0)
        return( seed = ( a * seed + c ) % m );
    else
        return( seed= seed/m);
}
void LCG::citire(){
    cout << "Enter m: ";
	cin >> m;
	cout << "\nEnter a:";
	cin >> a;
}
