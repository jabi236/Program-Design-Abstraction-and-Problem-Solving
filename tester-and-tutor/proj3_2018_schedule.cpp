#include "proj3_2018_schedule.h"

proj3_2018_schedule::proj3_2018_schedule(){
    stuId = "";
    numRegCourses= 0;
    for(int i = 0; i < MAX_REG_COURSES; i++){
        proj3_2018_course emptyCourse;
        regCourses[i] = emptyCourse;
    }
}
void proj3_2018_schedule::setStudentId(string newId){
    stuId = newId;
}

string proj3_2018_schedule::getStudentId(){return stuId;}
int proj3_2018_schedule::getNumCourses(){return numRegCourses;}
string proj3_2018_schedule::getCourseId(int idx){
    if(idx < 0 || idx > MAX_REG_COURSES){
        return "";
    }
    else{
        return regCourses[idx].getId();
    }
}

int proj3_2018_schedule::addCourse(string cId){
    if(numRegCourses >= MAX_REG_COURSES - 1){
        return -1;
    }
    regCourses[numRegCourses].setId(cId);
    numRegCourses++;
    return 0;
}

int proj3_2018_schedule::dropCourse(string cId){
    for(int i = 0; i < numRegCourses; i++){
        if(regCourses[i].getId() == cId){
            numRegCourses--;

            for(int j = i; j < numRegCourses; j++){
                regCourses[j] = regCourses[j+1];
            }
            regCourses[numRegCourses].setId("");
            return 0;
        }
    }
    return -1;
}

void proj3_2018_schedule::print(){
    cout << setw(5) << left << stuId << " " << setw(2) << right << numRegCourses << " " ;

    for(int i = 0; i < numRegCourses; i++){
        cout << regCourses[i].getId() << " ";
    } 
    cout << endl;
}