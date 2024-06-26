
#pragma once
#include <string>
#include "buddy.h"
using namespace std;

class buddyList {
public:
	buddyList();
    ~buddyList();
	void add(string fname, string lname, string phone);
	void print();
private:
	buddy * head;
	void add(buddy * n);
};