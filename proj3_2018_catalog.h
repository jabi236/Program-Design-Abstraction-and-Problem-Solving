#pragma once

#include "proj3_2018_course.h"

const int MAX_COURSES = 50;

class proj3_2018_catalog{
    private:
        proj3_2018_course courses[MAX_COURSES];
        int numCourses;
    public:
        proj3_2018_catalog();
        proj3_2018_course getCourse(int idx);
        int getNumCourses();
        int search(string id);
        void read();
        void print();
};