//------------------------------------------------------------------------------
//                              Lab 3 - 2021
//------------------------------------------------------------------------------
// Author: James Birch
// Date: 5/21/24
// Description: a program that asks the user for data on courses for a semester, 
// calculates the GPA and writes a report to a file as shown below.
//------------------------------------------------------------------------------

#include <iostream> // needed for cout
#include <iomanip> // setw
#include <string> // needed for string and getline
#include <fstream> // for writing and reading to files

using namespace std; // needed for cout and string

int main(){

    string fn = "grades.txt";

    ofstream f;
    f.open(fn);
    if(f.fail()){
        cout << "Unable to open file " << fn << endl;
        return 0;
    }

    string name;
    cout << "Enter the students name: ";
    getline(cin, name);

    // write file header with name given
    f << "GRADE REPORT FOR: " << name << endl
      << "Course   Grd Hrs QPts\n"
      << "-------- --- --- ----\n";

    string course;
    cout << "\nEnter Course (or done): ";
    cin >> course;

    string inputGrade;
    int hours;
    int QPV;
    int QPE;
    float totQPE = 0.0;
    float totHours = 0.0;
    float GPA = 0.0;

    while(course != "done"){

        cout << "Enter number of hours: ";
        cin >> hours;

        cout << "Enter grade (A,B,C,D,E): ";
        cin >> inputGrade;

        char grade = toupper(inputGrade[0]);

        if(grade == 'A'){
            QPV = 4;
        }
        else if(grade == 'B'){
            QPV = 3;
        }
        else if(grade == 'C'){
            QPV = 2;
        }
        else if(grade == 'D'){
            QPV = 1;
        }
        else{
            QPV = 0;
        }
        QPE = QPV * hours;
        totQPE += QPE;
        totHours += hours;

        f << setw(8) << left << course << setw(3) << right << grade << setw(5) << right << hours << setw(5) << right << QPE << endl;;

        cout << "\nEnter Course (or done): ";
        cin >> course;
    }

    GPA = totQPE / totHours;

    f << "-------- --- --- ----\n"
      << "Overall:" << setw(8) << totHours << setw(5) << totQPE << "  GPA: " << fixed << setprecision(2) << GPA;

    f.close();

    cout << "Grade report written to " << fn << endl;

    return 0;
};