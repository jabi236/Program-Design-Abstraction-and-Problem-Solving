#include "proj3_2018_studentList.h"

proj3_2018_studentList::proj3_2018_studentList(){
    numStu = 0;
    for(int i = 0; i < MAX_STUDENTS; i++){
        proj3_2018_student emptyStudent;
        stuList[i] = emptyStudent;
    }
}
proj3_2018_student proj3_2018_studentList::search(string searchId){
    for(int i = 0; i < numStu; i++){
        if(stuList[i].id == searchId){
            return stuList[i];
        }
    }
    proj3_2018_student emptystudent;
    return emptystudent;
}
proj3_2018_student proj3_2018_studentList::search(int idx){
    if(idx < 0 || idx > MAX_STUDENTS){
        proj3_2018_student emptystudent;
        return emptystudent;
    }
    return stuList[idx];
}
void proj3_2018_studentList::read(){
    ifstream f;
    string filename = "stuList.txt";
    f.open(filename);
    if(f.fail()){
        cout << "Unable to open " << filename << endl;
        return;
    }
    string id, last, first;
    int tothours;
    f >> numStu;
    for(int i = 0; i < numStu; i++){
        f >> id >> last >> first >> tothours;
        stuList[i].setId(id);
        stuList[i].setFirst(first);
        stuList[i].setLast(last);
        stuList[i].setTotHours(tothours);
    }
    f.close();
}
void proj3_2018_studentList::print(){
    cout << "================ STUDENT LIST (" << numStu << ") ========\n"
         << "IDNUM HRS LAST            FIRST\n"
         << "----- --- --------------- ---------------\n";
    for(int i=0; i < numStu; i++){
        stuList[i].print();
    }
    cout << endl;
}