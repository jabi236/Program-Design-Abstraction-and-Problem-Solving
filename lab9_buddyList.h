
#pragma once
#include <string>
#include <fstream>
#include "lab9_buddy.h"
using namespace std;

class lab9_buddyList {
public:
	lab9_buddyList();
    ~lab9_buddyList();
	void add(string fname, string lname, string phone);
	void print();
	int drop(string fname, string lname);
	void sort();
	void read();
private:
	lab9_buddy * head;
	void add(lab9_buddy * n);
	lab9_buddy* search(string fname, string lname);
	lab9_buddy* maxByName();
	void remove(lab9_buddy * r);
};