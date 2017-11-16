#include <iostream>
#include <stdlib.h>
#include <math.h>
//#include <time.h>
#include "MiddleSquare.h"

void MiddleSquare::next(){
    k =pow(seed,2);
    x = k/100%10000;
}
/*void MiddleSquare::citire(){
    cout << "Enter the number of digits in the seed value: ";
	cin >> n;
	cout << "\nEnter the total number of random numbers to be generated ";
	cin >> r;
}*/
