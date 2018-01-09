#include<iostream>
#include <string>
#include <iomanip>          // for setting precision of average wait time
#include <ctime> 
#include "PostOffice.h"

PostOffice::PostOffice() {
	size = 0;
	front = back = NULL;
}

bool PostOffice::isEmpty() const {
	return front == NULL;
}

bool PostOffice::isFull() const {
	return false;
}

bool PostOffice::dequeue(int& frontItem) {
	if (isEmpty())
		return false;

	frontItem = front->elem;
	Node * old = front;
	front = old->next;
	delete old;
	size--;
	return true;
}

bool PostOffice::enqueue(const int& x) {
	if (isEmpty())
		front = back = new Node(x);
	else {
		back->next = new Node(x);
		back = back->next;
	}
	back->elem = x;
	size++;
	return true;
}

int PostOffice::length() const {
	return size;
}

