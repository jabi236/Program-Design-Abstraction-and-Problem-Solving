
#pragma once
#include <string>
#include <fstream>
#include "buddy.h"
using namespace std;

class buddyList {
public:
	buddyList();
    ~buddyList();
	void add(string fname, string lname, string phone);
	void print();
	int drop(string fname, string lname);
	void sort();
	void read();
private:
	buddy * head;
	void add(buddy * n);
	buddy* search(string fname, string lname);
	buddy* maxByName();
	void remove(buddy * r);
};