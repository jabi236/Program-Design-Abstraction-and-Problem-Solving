#include "proj3_2018_course.h"
//-------------------------------------------------------------------
//                               constructor
//-------------------------------------------------------------------
proj3_2018_course::proj3_2018_course(){
    id, department, num, title = "";
    hours = 0;
}
//-------------------------------------------------------------------
//                                  sets
//-------------------------------------------------------------------
void proj3_2018_course::setId(string newId){
    id = newId;
}
void proj3_2018_course::setDepartment(string newDep){
    department = newDep;
}
void proj3_2018_course::setNum(string newNum){
    num = newNum;
}
void proj3_2018_course::setHours(int newHours){
    if(newHours < 0){
        hours = 0;
    }
    else{
        hours = newHours;
    }
}
void proj3_2018_course::setTitle(string newTitle){
    title = newTitle;
}
//-------------------------------------------------------------------
//                                  gets
//-------------------------------------------------------------------
string proj3_2018_course::getId(){return id;}
string proj3_2018_course::getDepartment(){return department;}
string proj3_2018_course::getNum(){return num;}
int proj3_2018_course::getHours(){return hours;}
string proj3_2018_course::getTitle(){return title;}
//-------------------------------------------------------------------
//                                  print
//-------------------------------------------------------------------
void proj3_2018_course::print(){
    cout << setw(5) << left << id << " " << setw(4) << left << department << " " << setw(4) << left << num << " " << setw(3) << right << hours << " " << setw(20) << left << title << endl;
}