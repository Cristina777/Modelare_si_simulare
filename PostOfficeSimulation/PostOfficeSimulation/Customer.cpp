#include<iostream>
#include <string>
#include <iomanip>     // for setting precision of average wait time
#include <ctime>  
#include "Customer.h"
#include "PostOffice.h"

using namespace std;

Customer::Customer() {
	lowerServeTime = 1; 
	upperServeTime = 5; 
}
string Customer::taskname(){
	string message;
	int task;
	switch (task) {
	case 1:
		message = "parcel pickup and parcel delivery";
		break;
	case 2:
		message = "recommended letters and buying stamps";
		break;
	case 3:
		message = "paying invoices";
		break;
	}
	return message;
}


void Customer::runSimulation(int lower, int upper) {
	srand((unsigned)time(0));   // seed the random number generator
    PostOffice postOffice;  // initialize the queue

	// initial message
	cout << "----------------------------------------------------------------" << endl;
	cout << "\nSimulating post-office activities and generating statistics for "
		<< lower << "-" << upper << " mins of serving time..." << endl;

	// run simulation until closing time
	while (currentMin < WORK_TIME) {

		// enqueue a customer after certain minutes have passed
		if (currentMin % arrivalTime == 0) {
			postOffice.enqueue(arrivalTime);
			arrivalTime += (rand() % 5) + 1;     // generate random arrival time for next customer
		}

		// dequeue a customer if worker is available
		if (isAvailable && !postOffice.isEmpty()) {
			postOffice.dequeue(lastArrivalTime);
            totalCustomers++;   // count total number of served customers
			servingTime = (rand() % upperServeTime) + lowerServeTime;  // generate random serving time for worker		  
			isAvailable = false;  // serve the customer
		}

		// if worker is busy, count waiting time
		if (!isAvailable) {
			waitTime++;
			servingTime--;
		}

		// get worker ready to serve the next customer
		if (servingTime == 0) {
			isAvailable = true;
			totalWaitTime += waitTime;
			cout<<waitTimes<<waitTime << ", ";
			waitTime = 0; // reset wait time since the worker is now available
		}	
		currentMin++;  // increase digital clock
	}

	avgWaitTime = static_cast<double>(totalWaitTime) / static_cast<double>(totalCustomers);

	cout << "\nTotal # of customers in 8 hours: " << totalCustomers << endl;
	cout << "Total waiting time: " << totalWaitTime << " minutes" << endl;
	cout << "Max waiting time in minutes per customer (in order of arrival): " << waitTimes.str() << endl;
	cout << "Average waiting time of customers: " << fixed << setprecision(2) << avgWaitTime << " minutes" << endl;
	cout << "\n----------------------------------------------------------------" << endl;
}
