#pragma once

class PostOffice{
public:
	PostOffice();
	bool isEmpty() const;
	bool isFull() const;
	bool dequeue(int& x);
	bool enqueue(const int& x);
	int length() const;
private:
	int size;

	struct Node {
		int elem;
		Node * next;

		Node(const int& x)
		{
			elem = x;
			next = NULL;
		}
	};

	Node * front, *back;
};


