//------------------------------------------------------------------------------
//                                  Lab 4
//------------------------------------------------------------------------------
// Author: James Birch
// Date: 5/22/24
// Description: a small grading program for an instructor, used to enter quiz
// scores and calculate average scores for a group of students
//------------------------------------------------------------------------------

#include <iostream> // needed for cout
#include <iomanip> // setw
#include <string> // needed for string and getline
#include <fstream> // for writing and reading to files

using namespace std; // needed for cout and string

int main(){

    const int MAX_STU = 20;
    const int MAX_QUIZ = 10;

    string students[MAX_STU];
    float avgQs[MAX_QUIZ];

    int numStu = 0;
    int numQuiz = 0;

    cout << setw(33) << left << "Enter number of students (1-20): ";
    cin >> numStu;

    cout << setw(33) << left << "Enter number of quizzes (1-10): ";
    cin >> numQuiz;

    cout << endl;

    string nameStu = "";
    // enter data for student name and their average quiz scores
    for(int i = 0; i < numStu; i++){
        float qScore = 0.0;
        float totQScores = 0.0;
        float avgQ = 0.0;

        cout << setw(20) << left << "Enter student name: ";
        if (cin.peek() == '\n') cin.ignore(); // clear cin for getline
        getline(cin, nameStu);

        students[i] = nameStu;

        for(int j = 0; j < numQuiz; j++){
            cout << "Enter score " << j+1 << setw(7) << left << ":";
            cin >> qScore;
            totQScores += qScore;
        }
        avgQ = (totQScores / numQuiz);
        avgQs[i] = avgQ;

    }

    float maxQ = avgQs[0];
    float minQ = avgQs[0];
    // find max and min averages
    for(int k = 1; k < numQuiz; k++){
        if(avgQs[k] > maxQ){
            maxQ = avgQs[k];
        }
        if(avgQs[k] < minQ){
            minQ = avgQs[k];
        }
    }

    cout << fixed << setprecision(1);
    //print report
    for(int l = 0; l < numStu; l++){
        cout << setw(19) << left << students[l] << setw(5) << right << avgQs[l] << endl;
    }
    cout << setw(20) << left << "Highest Average:" << maxQ << endl;
    cout << setw(20) << left << "Lowest Average:" << minQ << endl;

    return 0;
};