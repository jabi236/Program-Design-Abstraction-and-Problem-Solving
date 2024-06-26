//------------------------------------------------------------------------------
//                          Lab 2 - 2018
//------------------------------------------------------------------------------
// Author: James Birch
// Date: 5/16/24
// Description: Sort user inputed numbers and pepper heat index
//------------------------------------------------------------------------------

#include <iostream> // needed for cout
#include <iomanip> // setw
#include <string> // needed for string and getline

using namespace std; // needed for cout and string

int main(){

    // Sorted Numbers
    const int NUMS_SIZE = 3;
    int nums[NUMS_SIZE];
    int num1, num2, num3; 

    cout << "Enter a Number 1: ";
    cin >> num1;
    nums[0] = num1;

    cout << "Enter a Number 2: ";
    cin >> num2;
    nums[1] = num2;

    cout << "Enter a Number 3: ";
    cin >> num3;
    nums[2] = num3;

    for(int i = 0; i < NUMS_SIZE; i++){
        for(int j = i+1; j < NUMS_SIZE; j++ ){
            if(nums[i] > nums[j]){
                int temp = nums[i];
                nums[i] = nums[j];
                nums[j] = temp;
            }
        }
    }
    cout << "Sorted they are " << nums[0] << " "
         << nums[1] << " "
         << nums[2] << endl << endl;

    // Pepper Index
    string pepper;
    int sco_ale = 30000;
    int sco_ban = 1000;
    int sco_cay = 40000;
    int sco_drag = 2480000;


    cout << "A. Aleppo Pepper\n"
         << "B. Banana Pepper\n"
         << "C. Cayenne Pepper\n"
         << "D. Dragons Breath\n"
         << "Enter a letter to choose a pepper: ";
    
    cin >> pepper;

    if(pepper == "a" || pepper == "A"){
        cout << "That's " << sco_ale << " Scovillies of heat!\n";
    }
    else if(pepper == "b" || pepper == "B"){
        cout << "That's " << sco_ban << " Scovillies of heat!\n";
    }
    else if(pepper == "c" || pepper == "C"){
        cout << "That's " << sco_cay << " Scovillies of heat!\n";
    }
    else if(pepper == "d" || pepper == "D"){
        cout << "That's " << sco_drag << " Scovillies of heat!\n";
    }
    else{
        cout << "That is not on the list\n";
    }



    return 0;
};