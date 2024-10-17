/* Elevator will have max 5 people
 maybe later down the code need to add time like in the store simulation from spring 2024 <--- will be doing this
1. Depending on first command elevator will go to that floor if no command it will stay "idle" on floor 0
2.On the way to the next floor:
	a) IF STATMENT will check capacity of elevator if full or not
		b) if so can add more people check (using ITERATOR) check next queue and "pick up" if on the way (aka passing) if not break
3. Maybe if next person will be getting off push to STACK and check next person until theres no more people getting off, pop all people once they reach thier floor
*/

//for (int i = 0; i < 720; i++) { //VARIABLE
//    // create customers 1-3
//    // Every minute there will be rand(1-3) new
//    int people = rand() % 3 + 1;
//    for (int j = 0; j < people; j++) { // for every new customer
//        // create customer
//        int items = 0;
#include "Function.h"
#include "Queue.h"
#include "LinkedList.h"
#include <iostream>

int main() {
    Linked People; //Create people linked list
	vector <Queue> Elevators; // create a vector of elevators

	//create random people add to Linked list
	//ask user how many elevators they want to run (1-3)
    int numQ = 0;
    while (numQ == 0 || numQ > 3) {
        cout << "Enter # of Elevators (1-3): ";
        cin >> numQ;
        cout << endl;
        if (numQ > 3) {
            cout << "Can not exceed 3" << endl;
        }
        else if (numQ < 1) {
            cout << "Can not be less than 1" << endl;
        }
    }
    //create Elevators
    for (int i = 0; i < numQ; i++) {
        Queue elevate;
        Elevators.push_back(elevate);
    }
}
//**Maybe use an array for Queue**
/*
in array it would be a fixed size of 5
if person add goes up or down, check next person in elevator
if none go straight to destination
if ANY of the next inline are going to same floor or a floor being passed on the way order the list
so that the INITIAL destination is not lost and so that as passengers get off the NEW PASSENGERS get added after initial passanger

ALSO will need to peak next person in linkedlist (every minute aka IN REAL TIME as program runs) to see if they will be getting on Elevator or not as you 
pass the floors (to make it simple only check head if not equal to up or down move on IF is equal keep checking until not equal or capacity is reached)
*/