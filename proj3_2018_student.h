#pragma once

#include <iostream>
#include <iomanip>
#include <string>
#include <fstream>

using namespace std;

class proj3_2018_student{
    friend class proj3_2018_studentList;
    private:
        string id;
        int tothours;
        string last;
        string first;
    public:
        proj3_2018_student();
        void setId(string newId);
        void setTotHours(int newHrs);
        void setLast(string newLast);
        void setFirst(string newFirst);
        string getId();
        int getTotHours();
        string getLast();
        string getFirst();
        void print();
};