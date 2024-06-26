#include "proj3_2018_catalog.h"
//-------------------------------------------------------------------
//                               constructor
//-------------------------------------------------------------------
proj3_2018_catalog::proj3_2018_catalog(){
    numCourses = 0;
    for(int i = 0; i < MAX_COURSES; i++){
        proj3_2018_course emptyCourse;
        courses[i] = emptyCourse;
    }
}
proj3_2018_course proj3_2018_catalog::getCourse(int idx){
    if(idx < 0 || idx > MAX_COURSES){
        proj3_2018_course emptycourse; // allocate empty course
        return emptycourse;
    }
    return courses[idx];
}
int proj3_2018_catalog::getNumCourses(){return numCourses;}
int proj3_2018_catalog::search(string searchId){
    for(int i = 0; i < numCourses; i++){
        if(courses[i].id == searchId){
            return i;
        }
    }
    return CRS_NOT_FOUND;
}
void proj3_2018_catalog::read(){
    ifstream f;
    string filename = "catalog.txt";
    f.open(filename);
    if(f.fail()){
        cout << "Unable to open " + filename << endl;
        return;
    }
    string id, dep, num, title;
    int hours;
    while(!f.eof()){
        f >> id >> dep >> num >> hours;
        if(id == "XXXXX"){ // line indicating end of file
            break;
        }
        getline(f, title);
        courses[numCourses].setId(id);
        courses[numCourses].setDepartment(dep);
        courses[numCourses].setNum(num);
        courses[numCourses].setHours(hours);
        courses[numCourses].setTitle(title);
        numCourses++;
    }
    f.close();
}
void proj3_2018_catalog::print(){
    cout << "=============== COURSE CATALOG ================\n"
         << "ID    DEPT NUMB HRS TITLE\n"
         << "----- ---- ---- --- ---------------------------\n";
    for(int i = 0; i < numCourses; i++){
        courses[i].print();
    }
    cout << "=========== # courses listed: " << numCourses << "=============\n\n";
}
