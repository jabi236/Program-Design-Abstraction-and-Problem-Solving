

#pragma once
#include <iostream>
#include <iomanip>
#include <string>
using namespace std;

class buddy {
    friend class buddyList;
    public:
	    buddy()  { 
	    	first = last = phone = ""; next = NULL; 
	    	cout << "Buddy allocated\n";
	    }
        ~buddy(){
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
	    buddy * next;	// pointer to next buddy in the list
};