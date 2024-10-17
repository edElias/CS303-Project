// This will store people, in the order they pressed up or down, storing thier info.
//
#pragma once
#include <iostream>
#include <string>
using namespace std;

// dataType struct used to store all data
struct Person {
	int direction;  // "up" or "down"
	int destinationFloor; // Floor number
	int currentFloor;
};

// Node struct used to define nodes in the linked list
struct Node {
	Person data; // data stored in the dataType structure
	Node* nextPtr; // pointer to the next node structure
};

// Linked class declaration
class Linked {
protected:
	Node* headPtr;
	Node* tailPtr; // not really needed
public:
	Linked();
	~Linked();
	void addElement(Person d);
	void delElement();
	Person peek();
	bool listIsEmpty();
	/*void printList();
	static int listCount;*/
};