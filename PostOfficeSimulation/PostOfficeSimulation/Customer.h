#pragma once

class Customer {
	// declare needed variables
public:
	const int WORK_TIME = 480;        // 8 hours (480 mins)
	int totalCustomers = 0;
	int	currentMin = 1;         // first min of business hours
	int	arrivalTime = 1;        // assumes an early-bird customer
	int	lastArrivalTime;
	int	servingTime = 1;
	int	lowerServeTime; 
	int	upperServeTime; 
	int	waitTime = 0;
	int	totalWaitTime = 0;
	double avgWaitTime = 0.00;
	bool isAvailable = true;     // clerk availability

	std::string waitTimes = 0;
	Customer();
	std::string taskname();
	void runSimulation(int lower, int upper);
};
