#pragma once

#include "proj3_2018_course.h"

const int MAX_REG_COURSES = 10;

class proj3_2018_schedule{
    friend class proj3_2018_schedList;
    private:
        string stuId;
        proj3_2018_course regCourses[MAX_REG_COURSES];
        int numRegCourses;
    public:
        proj3_2018_schedule();
        void setStudentId(string newId);
        string getStudentId();
        int getNumCourses();
        string getCourseId(int idx);
        int addCourse(string cId);
        int dropCourse(string cId);
        void print();
};