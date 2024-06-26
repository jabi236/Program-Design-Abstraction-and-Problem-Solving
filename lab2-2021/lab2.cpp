//------------------------------------------------------------------------------
//                          Lab 2 - 2021
//------------------------------------------------------------------------------
// Author: James Birch
// Date: 5/16/24
// Description:  a program that asks the user to select a chemical compound from the following list, printing the
// selection number and compound name
//------------------------------------------------------------------------------

#include <iostream> // needed for cout
#include <iomanip> // setw
#include <string> // needed for string and getline

using namespace std; // needed for cout and string

int main(){

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

    
    

    return 0;
};