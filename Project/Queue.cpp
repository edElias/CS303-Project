// pre-processor
#include "Queue.h"
#include <iomanip>
#include <iostream>
using namespace std;

Queue::Queue() {
    front = nullptr;
    rear = nullptr;
}

Queue::~Queue() {
    queueNode* tempPtr = front;
    while (tempPtr != nullptr) {
        queueNode* next = tempPtr->nextPtr;
        delete tempPtr;
        tempPtr = next;
    }
    front = nullptr;
}

// defining addNode method for Queue class (overriding from Linked class) CHECK
// IT ALL
void Queue::enQueue(ElevatorData d) {
    queueNode* newQueueNode = new queueNode; // queueNode pointer
    newQueueNode->data = d;
    newQueueNode->nextPtr = nullptr;
    if (front == nullptr) {
        front = newQueueNode;
        rear = newQueueNode;
    }
    else {
        rear->nextPtr = newQueueNode;
        rear = newQueueNode;
    }
}

void Queue::deQueue() {
    queueNode* delNode = front;
    if (delNode == nullptr) {
        cout << "WARNING: Queue is empty" << endl;
    }
    else {
        front = front->nextPtr;
        delete delNode;
        delNode = nullptr;
    }
}

bool Queue::queueEmpty() {
    if (front == nullptr)
        return true;
    else
        return false;
}

/*
//UPDATE TO PRINT OUT DATA
void Queue::printQueue() {
  queueNode *tempPtr = front;
  while (tempPtr != nullptr) {
    cout << tempPtr->data.itemCount << endl; // just outputting itemCount for now
    tempPtr = tempPtr->nextPtr;
  }
}
*/
//CL: CHANGED printQ to print data we want for output
    // may need to fix spacing
void Queue::printQueue() {
    cout << "\tTotal Customers Helped:  " << setw(5) << laneInfo.totalCustomers << endl;
    cout << "\tTotal Number of Items:   " << setw(5) << laneInfo.totalItems << endl;
    cout << "\tMax Line Length:         " << setw(5) << laneInfo.maxQueueLength << endl;
    cout << "\tTotal Idle Time:         " << setw(5) << laneInfo.totalIdleTime << endl;
    cout << "\tTotal Over Time:         " << setw(5) << laneInfo.totalOverTime << endl;
}

ElevatorData Queue::peek() {
    return front->data;
}