//------------------------------------------------------------------------------
//                      Coding Tester and Tutor
//------------------------------------------------------------------------------
// Author: James Birch
// Date: 5/16/24
// Description: T
//------------------------------------------------------------------------------

#include <iostream> // needed for cout
#include <string> // needed for string and getline

using namespace std; // needed for cout and string

//------------------------------------------------------------------------------
// Function: Hello World
// Date: 5/14/24
// Description: The computer talks
//------------------------------------------------------------------------------
void helloworld(){
    cout << "Hello World!\n";
    //system("pause");
};

//------------------------------------------------------------------------------
// Function: Lab 1
// Date: 5/14/24
// Description: Ask user for name and greet them.
//------------------------------------------------------------------------------
void lab1(){
    string name; // give input to be set as string of user name

    cout << "Hello! What is your name?\n";
    cin >> name; // get input

    cout << "Greetings " << name << "!\n";
};

//------------------------------------------------------------------------------
// Function: Lab 2 2018
// Date: 5/16/24
// Description: Write a program that asks the user to enter 3 numbers, one at a 
// time. Print the three numbers in sorted order. Then display a menu and print 
// Scoville Units associated with the users's input.
//------------------------------------------------------------------------------
void lab2_2018(){
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
};


//------------------------------------------------------------------------------
// Function: Lab 2 2021
// Date: 5/20/24
// Description: a program that asks the user to select a chemical compound from 
// the following list, printing the selection number and compound name.
//------------------------------------------------------------------------------
void lab2_2021(){
    string comp;

    cout << "Compound List:\n"
         << "1. Water\n"
         << "2. Mercury\n"
         << "3. Octane\n"
         << "4. Ethanol\n"
         << "Enter Selection: ";
    cin >> comp;

    int temp;
    if(comp == "1"){
        cout << "Selected Compound: Water\n"
             << "Enter temperature (C): ";
        cin >> temp;
        if(temp <= 0){
            cout << "Water at a temperature of " << temp << " is in a Solid state.";
        }
        else if(temp > 0 && temp < 100){
            cout << "Water at a temperature of " << temp << " is in a Liquid state.";
        }
        else if(temp >= 100){
            cout << "Water at a temperature of " << temp << " is in a Gas state.";
        }
    }
    else if(comp == "2"){
        cout << "Selected Compound: Mercury\n"
             << "Enter temperature (C): ";
        cin >> temp;
        if(temp <= -39){
            cout << "Water at a temperature of " << temp << " is in a Solid state.";
        }
        else if(temp > -39 && temp < 357){
            cout << "Water at a temperature of " << temp << " is in a Liquid state.";
        }
        else if(temp >= 357){
            cout << "Water at a temperature of " << temp << " is in a Gas state.";
        }
    }
    else if(comp == "3"){
        cout << "Selected Compound: Octane\n"
             << "Enter temperature (C): ";
        cin >> temp;
        if(temp <= -57){
            cout << "Water at a temperature of " << temp << " is in a Solid state.";
        }
        else if(temp > -57 && temp < 126){
            cout << "Water at a temperature of " << temp << " is in a Liquid state.";
        }
        else if(temp >= 126){
            cout << "Water at a temperature of " << temp << " is in a Gas state.";
        }
    }
    else if(comp == "4"){
        cout << "Selected Compound: Ethanol\n"
             << "Enter temperature (C): ";
        cin >> temp;
        if(temp <= -115){
            cout << "Water at a temperature of " << temp << " is in a Solid state.";
        }
        else if(temp > -115 && temp < 78){
            cout << "Water at a temperature of " << temp << " is in a Liquid state.";
        }
        else if(temp >= 78){
            cout << "Water at a temperature of " << temp << " is in a Gas state.";
        }
    }
    else{
        // error message
        cout << "Invalid Selection, assuming 1 entered\n";
        // Go through temperture slection of water
        cout << "Selected Compound: Water\n"
             << "Enter temperature (C): ";
        cin >> temp;
        if(temp <= 0){
            cout << "Water at a temperature of " << temp << " is in a Solid state.";
        }
        else if(temp > 0 && temp < 100){
            cout << "Water at a temperature of " << temp << " is in a Liquid state.";
        }
        else if(temp >= 100){
            cout << "Water at a temperature of " << temp << " is in a Gas state.";
        }
    }
};

//------------------------------------------------------------------------------
// Function: Lab 3 2018
// Date: 5/20/24
// Description: a program for processing temperature readings for a period of days
//------------------------------------------------------------------------------
void lab3_2018(){
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
};

//------------------------------------------------------------------------------
// Function: Lab 3 2021
// Date: 5/20/24
// Description: 
//------------------------------------------------------------------------------
void lab3_2021(){

};

//------------------------------------------------------------------------------
// Function: Lab 4
// Date: 5/16/24
// Description: 
//------------------------------------------------------------------------------
void lab4(){
    
};

//------------------------------------------------------------------------------
// Function: Lab 5
// Date: 5/16/24
// Description: 
//------------------------------------------------------------------------------
void lab5(){
    
};

//------------------------------------------------------------------------------
// Function: Lab 6
// Date: 5/16/24
// Description: 
//------------------------------------------------------------------------------
void lab6(){
    
};

//------------------------------------------------------------------------------
// Function: Lab 7
// Date: 5/16/24
// Description: 
//------------------------------------------------------------------------------
void lab7(){
    
};

//------------------------------------------------------------------------------
// Function: Lab 8
// Date: 5/16/24
// Description: 
//------------------------------------------------------------------------------
void lab8(){
    
};

//------------------------------------------------------------------------------
// Function: Lab 9
// Date: 5/16/24
// Description: 
//------------------------------------------------------------------------------
void lab9(){
    
};

//------------------------------------------------------------------------------
// Function: Lab 10
// Date: 5/16/24
// Description: 
//------------------------------------------------------------------------------
void lab10(){
    
};

//------------------------------------------------------------------------------
// Function: Program Selection
// Date: 5/16/24
// Description: Input loop where a user gives an input of program they want to test
// TODO: Convert this to onlt choosing between tutor and testing, and move current loop to testing function loop. Also eventually to its own class
//------------------------------------------------------------------------------
void programSelect(){
    string mode;
    cout << "Select mode (tutor or tester): ";
    cin >> mode;
    while(mode != "exit"){
        if(mode == "tutor"){
            // error message
            cout << "Tutor mode not currently available\n";

        }
        else if(mode == "tester"){
            string prog;
            cout << "Which program would you like to test?\n";
            cin >> prog;
            while(prog != "exit"){
                if(prog == "helloworld"){
                    cout << "Loading \"helloworld\"\n";
                    helloworld();
                }
                else if(prog == "lab1"){
                    cout << "Loading \"lab1\"...\n";
                    lab1();
                }
                else if(prog == "lab2"){
                    string ver2;
                    cout << "Which version of lab 3? (2018 or 2021)\n";
                    cin >> ver2;

                    if(ver2 == "2018"){
                        cout << "Loading \"lab2_2018\"...\n";
                        lab2_2018();
                    }
                    else if(ver2 == "2021"){
                        cout << "Loading \"lab2_2021\"...\n";
                        lab2_2021();
                    }
                    else{
                        cout << "Invalid input. Returning to program select\n";
                    }
                }
                else if(prog == "lab3"){
                    string ver3;
                    cout << "Which version of lab 3? (2018 or 2021)\n";
                    cin >> ver3;

                    if(ver3 == "2018"){
                        cout << "Loading \"lab3_2018\"...\n";
                        lab3_2018();
                    }
                    else if(ver3 == "2021"){
                        cout << "Loading \"lab3_2021\"...\n";
                        lab3_2021();
                    }
                    else{
                        cout << "Invalid input. Returning to program select\n";
                    }
                }
                else if(prog == "lab4"){
                    cout << "Loading \"lab4\"...\n";
                    //lab4();
                }
                else if(prog == "lab5"){
                    cout << "Loading \"lab5\"...\n";
                    //lab5();
                }
                else if(prog == "lab6"){
                    cout << "Loading \"lab6\"...\n";
                    //lab6();
                }
                else if(prog == "lab7"){
                    cout << "Loading \"lab7\"...\n";
                    //lab7();
                }
                else if(prog == "lab8"){
                    cout << "Loading \"lab8\"...\n";
                    //lab8();
                }
                else if(prog == "lab9"){
                    cout << "Loading \"lab9\"...\n";
                    //lab9();
                }
                else if(prog == "lab10"){
                    cout << "Loading \"lab10\"...\n";
                    //lab10();
                }
                else if(prog == "help"){
                    cout << "Possible inputs:\n"
                         << "\"help\" - List possible input options\n"
                         << "\"exit\" - End program\n"
                         << "\"helloworld\" - Run helloworld program\n"
                         << "\"lab1\" - Run Lab 1\n"
                         << "\"lab2\" - Run Lab 2 (2018 or 2021 Edition)\n";
                }
                else if(prog == "exit"){
                    cout << "Exiting tester mode...\n";
                    return;
                }
                else{
                cout << "Invalid input\n";
                }
                cout << "\nWhich program would you like to test?\n";
                cin >> prog;
            }
            cout << "Exiting tester mode...\n";
        }
        else if(mode == "exit"){
            cout << "Ending Program...\n";
            return;
        }
        else{
            cout << "Invalid input\n";
        }
        cout << "Select mode (tutor or tester): ";
        cin >> mode;
    }
    cout << "Ending Program...\n";
    
};
int main(){

    programSelect();

    return 0;
};