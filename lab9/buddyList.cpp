
#include <iostream>
#include "buddyList.h"

//------------------------------------------------------------------
//                    constructor and destructor
//------------------------------------------------------------------
buddyList::buddyList(){
    head = NULL;
    cout << "List allocated!\n";
} 

buddyList::~buddyList(){
    delete head;
    cout << "List destroyed!\n";
} 

//------------------------------------------------------------------
//                            add
//------------------------------------------------------------------
void buddyList::add(string fname, string lname, string phone) {
    buddy * p = new buddy;
    p->set(fname, lname, phone);
    p->next = NULL;
    add(p);
} // add(fields)

void buddyList::add(buddy * p) {
    p->next = head;
    head = p;
} // add(ptr)

//------------------------------------------------------------------
//                            print
//------------------------------------------------------------------
void buddyList::print() {
	cout << "\nBuddy List: =========================================\n";
	buddy * p = head;
    while(p != NULL){
        p->print();
        p = p->next;
    }

	cout << "======================================================\n\n";
} // print()