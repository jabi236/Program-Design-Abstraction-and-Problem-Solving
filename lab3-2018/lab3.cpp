//------------------------------------------------------------------------------
//                              Lab 3 - 2018
//------------------------------------------------------------------------------
// Author: James Birch
// Date: 5/20/24
// Description: a program for processing temperature readings for a period of days
//------------------------------------------------------------------------------

#include <iostream> // needed for cout
#include <iomanip> // setw
#include <string> // needed for string and getline

using namespace std; // needed for cout and string

int main(){

    int days;
    cout << "Enter a number of days (1-10) : ";
    cin >> days;

    while((days <= 1) || (days >= 10)){
        cout << "Invalid entry! Try again!\n"
         << "Enter a number of days (1-10): ";
        cin >> days;
    }

    int high, low;

    // set intial placeholder values for high and low
    int highest = -1000;
    int lowest = 1000;

    float avgHigh = 0.0;
    float avgLow = 0.0;

    int fDays;

    for(int i = 0; i < days; i++){
        cout << "Enter Hi and Low for day " << i+1 << " (F): ";
        cin >> high >> low;
        if(high > highest){
            highest = high;
        }
        if(low < lowest){
            lowest = low;
        }
        avgHigh += high;
        avgLow += low;
        if( low <= 32){
            fDays++;
        }
    }
    avgHigh /= days;
    avgLow /= days;

    cout << "The Highs: max = " << highest << " avg = " << avgHigh << endl
         << "The Lows:  min = " << lowest << " avg = " << avgLow << endl
         << "Number of days below freezing: " << fDays << endl;

    return 0;
};