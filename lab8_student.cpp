//------------------------------------------------------------------------------
//                      Student Class Implementation
//------------------------------------------------------------------------------
// Author: James Birch
// Date: 6/5/24
// Description: 
//------------------------------------------------------------------------------
#include "lab8_student.h"

// constructor: intializes data members
lab8_student::lab8_student(){
    name = "";
    numScores = 0;
    for(int i = 0; i < MAX_SCORES; i++){
        scores[i] = 0;
    }
    cout << "Constructed!\n";
}
// all data members should have corresponding set and get functions unless it will be done in other functions
void lab8_student::setName(string n){
    name = n;
}
string lab8_student::getName(){
    return name;
}
int lab8_student::getNumScores(){
    return numScores;
}
void lab8_student::addScore(int s){
    if(numScores == MAX_SCORES){
        cout << "MAX SCORES exceeded!\n";
        return;
    }
    scores[numScores] = s;
    numScores++;
}
double lab8_student::getAvg(){
    double avg = 0.0;
    double sum = 0.0;
    if(numScores == 0){
        return 0.0;
    }
    for(int i = 0; i < numScores; i++){
        sum += scores[i];
    }
    avg = sum / numScores;
    return avg;
}
void lab8_student::print(){
    cout << "Name= " << name << " Avg= " << getAvg() << " #scores= " << numScores << " scores= ";
    for(int i = 0; i < numScores; i++){
        cout << scores[i];
        if(i != numScores){
            cout << " ";
        }
    }
    cout << endl;
}