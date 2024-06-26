//------------------------------------------------------------------------------
//                              Lab 1
//------------------------------------------------------------------------------
// Author: James Birch
// Date: 5/14/24
// Description: Ask user for their name and greet them
//------------------------------------------------------------------------------

#include <iostream> // needed for cout
#include <string> // needed for string and getline

using namespace std; // needed for cout and string

int main(){

    string name; // give input to be set as string of user name

    cout << "Hello! What is your name?\n";
    getline(cin, name); // get input

    cout << "Greetings " << name << "!\n";

    return 0;
};