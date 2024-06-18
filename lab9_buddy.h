

#pragma once
#include <iostream>
#include <iomanip>
#include <string>
using namespace std;

class lab9_buddy {
    friend class lab9_buddyList;
    public:
	    lab9_buddy()  { 
	    	first = last = phone = ""; next = NULL; 
	    	cout << "Buddy allocated\n";
	    }
        ~lab9_buddy(){
            delete next;
            cout << "Buddy " << first << " " << last << " deallocated!\n";
        }

	    void set(string fname, string lname, string tele) {
		    first = fname;
		    last = lname;
		    phone = tele;
	    }
	    void print() {
		    cout << left << setw(15) << last << setw(15) << first << "  " << phone << endl;
	    }
    private:
	    string first;
	    string last;
	    string phone;
	    lab9_buddy * next;	// pointer to next buddy in the list
};