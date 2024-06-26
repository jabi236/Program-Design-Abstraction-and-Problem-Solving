
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

//------------------------------------------------------------------
//                            drop
//------------------------------------------------------------------
int buddyList::drop(string fname, string lname){
    buddy b;
    buddy * p;
    p = search(fname, lname);
    if(!p){
        cout << "Node not found!" << endl;
        return 0;
    }
    remove(p);
    b.~buddy();
    return 0;
} // drop()
//------------------------------------------------------------------
//                            sort
//------------------------------------------------------------------
void buddyList::sort(){
    buddyList temp;
    buddy * max;
    while(head != NULL){
        max = maxByName();
        remove(max);
        temp.add(max);
    }
    buddy * q = temp.head;
    while(temp.head != NULL){
        buddy * q = temp.head;
        temp.remove(q);
        add(q);
    }
    temp.head = NULL;
} // sort()
//------------------------------------------------------------------
//                            read
//------------------------------------------------------------------
void buddyList::read(){
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
buddy* buddyList::search(string fname, string lname){
    buddy * p = head;
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
buddy* buddyList::maxByName(){
    if(head == NULL){
        return NULL;
    }
    buddy * p = head;
    buddy * q = head->next;
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
void buddyList::remove(buddy * r){
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
        buddy * b4 = head;
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