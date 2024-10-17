//pre-processor
#include "LinkedList.h"

//default constructor 
Linked::Linked() {
    headPtr = nullptr;
    tailPtr = nullptr;
}

//destructor
Linked::~Linked() {
    Node* tempPtr = headPtr;
    while (tempPtr != nullptr) {
        Node* next = tempPtr->nextPtr;
        delete tempPtr;
        tempPtr = next;
    }
    headPtr = nullptr;
}

void Linked::addElement(Person d) {
    Node* newNode = new Node;
    newNode->data = d;
    newNode->nextPtr = nullptr;
    if (headPtr == nullptr) {
        headPtr = newNode;
    }
    else {
        Node* tempPtr = headPtr;
        while (tempPtr != nullptr && tempPtr->nextPtr != nullptr) {
            tempPtr = tempPtr->nextPtr;
        }
        newNode->nextPtr = tempPtr->nextPtr;
        tempPtr->nextPtr = newNode;
    }
}


//deletes from front of the list
void Linked::delElement() {
    Node* delNode = headPtr;
    if (delNode == nullptr) {
        cout << "WARNING: List is empty" << endl;
        return;
    }
    headPtr = headPtr->nextPtr;
    delete delNode;
    delNode = nullptr;
}

bool Linked::listIsEmpty() {
    if (headPtr == nullptr)
        return true;
    else
        return false;
}

Person Linked::peek() {
    return headPtr->data;
}

//int Linked::listCount = 0;