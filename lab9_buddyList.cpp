
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

//------------------------------------------------------------------
//                            drop
//------------------------------------------------------------------
int lab9_buddyList::drop(string fname, string lname){
   lab9_buddy b;
   lab9_buddy * p;
    p = search(fname, lname);
    if(!p){
        cout << "Node not found!" << endl;
        return 0;
    }
    remove(p);
    b.~lab9_buddy();
    return 0;
} // drop()
//------------------------------------------------------------------
//                            sort
//------------------------------------------------------------------
void lab9_buddyList::sort(){
   lab9_buddyList temp;
   lab9_buddy * max;
    while(head != NULL){
        max = maxByName();
        remove(max);
        temp.add(max);
    }
   lab9_buddy * q = temp.head;
    while(temp.head != NULL){
       lab9_buddy * q = temp.head;
        temp.remove(q);
        add(q);
    }
    temp.head = NULL;
} // sort()
//------------------------------------------------------------------
//                            read
//------------------------------------------------------------------
void lab9_buddyList::read(){
    ifstream f;

    string filename = "buddyList.txt";

    f.open(filename);

    if(f.fail()){
        cout << "Unable to open " << filename << endl;
        return;
    }
    string fname, lname, pnum;
    while(!f.eof()){
        f >> fname >> lname >> pnum;
        add(fname, lname, pnum);
    }
    f.close(); 
} // read()
//------------------------------------------------------------------
//                            search
//------------------------------------------------------------------
lab9_buddy* lab9_buddyList::search(string fname, string lname){
    lab9_buddy * p = head;
    while(p != NULL){
        if(p->first == fname && p->last == lname){
            return p;
        }
        p = p->next;
    }
    return NULL;
} // search()
//------------------------------------------------------------------
//                           maxByName
//------------------------------------------------------------------
lab9_buddy* lab9_buddyList::maxByName(){
    if(head == NULL){
        return NULL;
    }
    lab9_buddy * p = head;
    lab9_buddy * q = head->next;
    while(q != NULL){
        if(p->last > q->last){
            p = q;
        }
        else if(p->last == q->last && p->first > q->first){
            p = q;
        }
        q = q->next;
    }
    return p;
} // maxByName()
//------------------------------------------------------------------
//                            remove
//------------------------------------------------------------------
void lab9_buddyList::remove(lab9_buddy * r){
    if(head == NULL){
        return;
    }
    if(r == NULL){
        return;
    }
    if(r == head){
        head = head->next;
    }
    else{
        lab9_buddy * b4 = head;
        while(b4->next != r && b4 != NULL){
            b4 = b4->next;
        }
        if(b4 == NULL){
            return;
        }
        b4->next = r->next;
    }
    r->next = NULL;
} // remove()