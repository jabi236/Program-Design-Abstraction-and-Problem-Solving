#pragma once

#include "proj3_2018_student.h"

const int MAX_STUDENTS = 50;

class proj3_2018_studentList{
    private:
        proj3_2018_student stuList[MAX_STUDENTS];
        int numStu; 
    public:
        proj3_2018_studentList();
        proj3_2018_student search(string searchId);
        proj3_2018_student search(int idx);
        void read();
        void print();

};