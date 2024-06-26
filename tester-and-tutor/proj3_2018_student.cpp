#include "proj3_2018_student.h"

proj3_2018_student::proj3_2018_student(){
    id, last, first = "";
    tothours = 0;
}
void proj3_2018_student::setId(string newId){
    id = newId;
}
void proj3_2018_student::setTotHours(int newHrs){
    tothours = newHrs;
}
void proj3_2018_student::setLast(string newLast){
    last = newLast;
}
void proj3_2018_student::setFirst(string newFirst){
    first = newFirst;
}
string proj3_2018_student::getId(){return id;}
int proj3_2018_student::getTotHours(){return tothours;}
string proj3_2018_student::getLast(){return last;}
string proj3_2018_student::getFirst(){return first;}
void proj3_2018_student::print(){
    cout << setw(5) << left << id << " " << setw(3) << right << tothours << " " << setw(15) << left << last << " " << setw(15) << left << first << endl;
}