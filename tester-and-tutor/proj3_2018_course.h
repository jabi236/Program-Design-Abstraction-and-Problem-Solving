#pragma once

#include <iostream>
#include <iomanip>
#include <string>
#include <fstream>

using namespace std;

const int CRS_NOT_FOUND = -1;

class proj3_2018_course{
    friend class proj3_2018_catalog;
    private:
        string id;
        string department;
        string num;
        int hours;
        string title;
    public:
        proj3_2018_course();
        void setId(string newId);
        void setDepartment(string newDep);
        void setNum(string newCourseNum);
        void setHours(int newHours);
        void setTitle(string newTitle);
        string getId();
        string getDepartment();
        string getNum();
        int getHours();
        string getTitle();
        void print();

};