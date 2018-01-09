#include <iostream>
#include <iomanip>          // for setting precision of average wait time
#include <ctime>            // for seeding rand()
#include <string>
#include "PostOffice.h"
#include<iostream>
#include "PostOffice.h"
#include "Customer.h"

using namespace std;

void runSimulation(int lower, int upper);

int main() {
	Customer obj;
	// run the simulation for 3 times
	obj.runSimulation(1, 3);
	cout << endl;
	obj.runSimulation(1, 4);
	cout << endl;
	obj.runSimulation(1, 5);

}


	