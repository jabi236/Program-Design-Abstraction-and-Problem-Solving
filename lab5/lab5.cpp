//------------------------------------------------------------------------------
//                                  Lab 5
//------------------------------------------------------------------------------
// Author: James Birch
// Date: 5/22/24
// Description: a program that reads data from a file on students and their 
// project scores.
//------------------------------------------------------------------------------

#include <iostream> // needed for cout
#include <iomanip> // setw
#include <string> // needed for string and getline
#include <fstream> // for writing and reading to files

using namespace std; // needed for cout and string

const int MAX_STUDENTS = 20;
const int MAX_SCORES = 5;

struct student{
    string first;
    string last;
    float avg;
    int scores[MAX_SCORES];
    int numScores;
};

//-------------------------------------------------------------------------------------------------------------------------------------------------
// Function: Read
// Date: 5/23/24
// Description: Read in student members and allocate them to array of student structs
//-------------------------------------------------------------------------------------------------------------------------------------------------
void read(student *s, int & numStu, string filename){

    int numScores_input;

    ifstream f;
    f.open(filename);
    if(f.fail()){
        cout << "Unable to open input file\n";
        numStu = 0;
        return;
    }
    f >> numStu >> numScores_input; 

    for(int i = 0; i < numStu; i++){
        f >> s[i].first >> s[i].last;
        for(int j = 0; j < numScores_input; j++){
            f >> s[i].scores[j];
        }
        s[i].numScores = numScores_input;
    }

    f.close();

    return;
};

//-------------------------------------------------------------------------------------------------------------------------------------------------
// Function: Calculate Averages
// Date: 5/23/24
// Description: Get the average of each students scores and store them in their structure
//-------------------------------------------------------------------------------------------------------------------------------------------------
void calcAverages(student *s, int numStu){
    for(int i = 0; i < numStu; i++){
        float totScores = 0;
        for(int j = 0; j < s[i].numScores; j++){
            totScores += s[i].scores[j];
        }
        s[i].avg = totScores / s[i].numScores;
    }
    return;
};

//-------------------------------------------------------------------------------------------------------------------------------------------------
// Function: Print
// Date: 5/23/24
// Description: Prints head and the data for each student on one line
//-------------------------------------------------------------------------------------------------------------------------------------------------
void print(student *s, int numStu){
    cout << setw(16) << left << "First" << setw(16) << left << "Last" << setw(7) << left << "Avg"
         << setw(4) << left << "S1" << setw(4) << left << "S2" << setw(4) << left << "S3" << setw(4) << left << "S4" << setw(4) << left << "S5" 
         << "\n--------------- --------------- ------ --- --- --- --- ---";
    for(int i = 0; i < numStu; i++){
        cout << endl << setw(15) << left << s[i].first << " " << setw(15) << left << s[i].last << " " << fixed << setprecision(2) << setw(6) << right << s[i].avg;
        for(int j = 0; j < s[i].numScores; j++){
            cout << " " << setw(3) << right << s[i].scores[j];
        }
    }
    cout << endl;
};

//-------------------------------------------------------------------------------------------------------------------------------------------------
// Function: Search
// Date: 5/23/24
// Description: Search for student using first and last name and return index of that student if found. Otherwise return -1.
//-------------------------------------------------------------------------------------------------------------------------------------------------
int search(student *s, int numStu, string fname, string lname){
    int found = -1;

    for(int i =0; i < numStu; i++){
        if( (s[i].first == fname) && (s[i].last == lname) ){
            found = i;
        }
    }

    return found;
};

// given main
int main(){

    student s[MAX_STUDENTS];
    int numStu;
    string sFirst, sLast;
    string fn = "students.txt";

    read(s, numStu, fn);
    calcAverages(s, numStu);
    print(s, numStu);

    cout << "Enter First and Last to search (or 0 0): ";
    cin >> sFirst >> sLast;
    while(sFirst != "0"){
        int ndx = search(s, numStu, sFirst, sLast);
        if(ndx == -1){
            cout << "Not found\n";
        }
        else{
            cout << "Average is " << s[ndx].avg << endl;
        }
        cout << "Enter First aand Last to search (or 0 0): ";
        cin >> sFirst >> sLast;
    }

    return 0;
};