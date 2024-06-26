#pragma once
//----------------------------------------------------------------------------------
//                                  class course
//----------------------------------------------------------------------------------
// A list of courses that students may register for. Implemented as a partial
// array of course objects.
//---------------------------------------------------------------------------------
#include "course.h"

const int MAX_COURSES = 50;

class catalog{
    private:
        course courses[MAX_COURSES];
        int numCourses;
    public:
        catalog();
        course getCourse(int idx);
        int getNumCourses();
        int search(string id);
        void read();
        void print();
};