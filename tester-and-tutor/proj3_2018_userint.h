#pragma once
//----------------------------------------------------------------------
//                         userint class
//----------------------------------------------------------------------
// This class implements the user interface for the Student Course
// Registration project.
//----------------------------------------------------------------------
#include <iostream>
#include <iomanip>
using namespace std;
#include "proj3_2018_schedList.h"
#include "proj3_2018_studentList.h"
#include "proj3_2018_catalog.h"
#include "proj3_2018_menu.h"

class userint {
public:
	userint();
	void go();
private:
	proj3_2018_schedList   scList;
	proj3_2018_catalog     cat;
	proj3_2018_studentList stuList;
	proj3_2018_menu        mainMenu;
	proj3_2018_menu        regMenu;
	void registerStudent();
	void printSchedule(proj3_2018_student stu, proj3_2018_schedule sched);
	void addCourse(proj3_2018_student stu, proj3_2018_schedule & sched);
	void dropCourse(proj3_2018_student stu, proj3_2018_schedule & sched);
};