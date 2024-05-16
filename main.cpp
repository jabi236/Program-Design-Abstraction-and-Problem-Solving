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

void helloworld(){
    cout << "Hello World!\n";
    //system("pause");
};

void lab1(){
    string name; // give input to be set as string of user name

    cout << "Hello! What is your name?\n";
    getline(cin, name); // get input

    cout << "Greetings " << name << "!\n";
};

void programSelect(){
    string input;

    cout << "Which program would you like to test?\n";
    getline(cin, input);
    while(input != "exit"){
        if(input == "helloworld"){
            cout << "Loading \"helloworld\"\n";
            helloworld();
        }
        if(input == "lab1"){
            cout << "Loading \"lab1\"\n";
            lab1();
        }
        if(input == "help"){
            cout << "Possible inputs:\n";
            cout << "\"help\" - List possible input options\n";
            cout << "\"exit\" - End program\n";
            cout << "\"helloworld\" - Run helloworld program\n";
            cout << "\"lab1\" - Run Lab 1\n";
        }
        if(input == "exit"){
            cout << "Ending Program";
            return;
        }
        else{
            cout << "Invalid input\n";
        }
        cout << "Which program would you like to test?\n";
        getline(cin, input);
    }
    cout << "Ending Program";
    return;
};
int main(){

    programSelect();

    return 0;
};