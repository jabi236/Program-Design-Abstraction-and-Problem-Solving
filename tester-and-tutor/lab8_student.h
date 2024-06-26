//------------------------------------------------------------------------------
//                           Student Class Interface
//------------------------------------------------------------------------------
// Author: James Birch
// Date: 6/5/24
// Description: 
//------------------------------------------------------------------------------
#ifndef LAB_STUDENT_H
#define LAB_STUDENT_H

#include <iostream> // needed for cout
#include <string> // needed for string and getline

using namespace std;

const int MAX_SCORES = 10;

class lab8_student{
    friend int main();
    public:
        lab8_student();
        void setName(string n);
        string getName();
        int getNumScores();
        void addScore(int s);
        double getAvg();
        void print();
    private:
        string name;
        int numScores;
        int scores[MAX_SCORES];
};

#endif // LAB_STUDENT_H