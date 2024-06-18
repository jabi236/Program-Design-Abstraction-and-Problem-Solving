
#include <iostream>
#include "lab9_buddyList.h"

//------------------------------------------------------------------
//                    constructor and destructor
//------------------------------------------------------------------
lab9_buddyList::lab9_buddyList(){
    head = NULL;
    cout << "List allocated!\n";
} 

lab9_buddyList::~lab9_buddyList(){
    delete head;
    cout << "List destroyed!\n";
} 

//------------------------------------------------------------------
//                            add
//------------------------------------------------------------------
void lab9_buddyList::add(string fname, string lname, string phone) {
    lab9_buddy * p = new lab9_buddy;
    p->set(fname, lname, phone);
    p->next = NULL;
    add(p);
} // add(fields)

void lab9_buddyList::add(lab9_buddy * p) {
    p->next = head;
    head = p;
} // add(ptr)

//------------------------------------------------------------------
//                            print
//------------------------------------------------------------------
void lab9_buddyList::print() {
	cout << "\nBuddy List: =========================================\n";
	lab9_buddy * p = head;
    while(p != NULL){
        p->print();
        p = p->next;
    }

	cout << "======================================================\n\n";
} // print()