// This will recive the person into the elavator 
//need to place into order (ascending or descending) dependent on first person in Elevator only when theres more than 1 person in elevator 
#pragma once

struct ElevatorData {
    int capacity = 5;// **might have to move somewhere else**
    int headCount;
    int destination;
    //would still need to keep the person intact as I need to know where they are going to next
};

// defining each Node
struct queueNode {
    ElevatorData data;
    queueNode* nextPtr;
};
////This is extra not needed
//struct queueData { // Queue data used for EACH LANE
//    int totalIdleTime = 0;//if queueCount == 0; this is incremented
//    int totalheadCount = 0;//CL: ADDED totalCustomers to track each queue's total customers
//};

class Queue { 
private:
    queueNode* front;
    queueNode* rear;
public:
    Queue();
    ~Queue();
    queueNode* getRear() { return rear; } //dont need
    void enQueue(ElevatorData d);//add the ElevatorData the end of the queue
    void deQueue();//remove a ElevatorData item from the front of the queue
    ElevatorData peek(); //return the contents of the front of the queue (but do not remove)
    bool queueEmpty();//return true if the queue is empty (front = nullptr?), false otherwise
    void printQueue();
    /*queueData ElevatorInfo;*/
};