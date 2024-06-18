
#pragma once
#include <string>
#include "lab9_buddy.h"
using namespace std;

class lab9_buddyList {
public:
	lab9_buddyList();
    ~lab9_buddyList();
	void add(string fname, string lname, string phone);
	void print();
private:
	lab9_buddy * head;
	void add(lab9_buddy * n);
};