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
// Description: Ask user for name and greet them
//------------------------------------------------------------------------------
void lab1(){
    string name; // give input to be set as string of user name

    cout << "Hello! What is your name?\n";
    getline(cin, name); // get input

    cout << "Greetings " << name << "!\n";
};

//------------------------------------------------------------------------------
// Function: Lab 2
// Date: 5/16/24
// Description: 
//------------------------------------------------------------------------------
void lab2(){

};

//------------------------------------------------------------------------------
// Function: Lab 3
// Date: 5/16/24
// Description: 
//------------------------------------------------------------------------------
void lab3(){
    
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
//------------------------------------------------------------------------------
void programSelect(){
    string input;

    cout << "Which program would you like to test?\n";
    getline(cin, input);
    while(input != "exit"){
        if(input == "helloworld"){
            cout << "Loading \"helloworld\"\n";
            helloworld();
        }
        else if(input == "lab1"){
            cout << "Loading \"lab1\"\n";
            lab1();
        }
        else if(input == "lab2"){
            cout << "Loading \"lab2\"\n";
            //lab2();
        }
        else if(input == "lab3"){
            cout << "Loading \"lab3\"\n";
            //lab3();
        }
        else if(input == "lab4"){
            cout << "Loading \"lab4\"\n";
            //lab4();
        }
        else if(input == "lab5"){
            cout << "Loading \"lab5\"\n";
            //lab5();
        }
        else if(input == "lab6"){
            cout << "Loading \"lab6\"\n";
            //lab6();
        }
        else if(input == "lab7"){
            cout << "Loading \"lab7\"\n";
            //lab7();
        }
        else if(input == "lab8"){
            cout << "Loading \"lab8\"\n";
            //lab8();
        }
        else if(input == "lab9"){
            cout << "Loading \"lab9\"\n";
            //lab9();
        }
        else if(input == "lab10"){
            cout << "Loading \"lab10\"\n";
            //lab10();
        }
        else if(input == "help"){
            cout << "Possible inputs:\n";
            cout << "\"help\" - List possible input options\n";
            cout << "\"exit\" - End program\n";
            cout << "\"helloworld\" - Run helloworld program\n";
            cout << "\"lab1\" - Run Lab 1\n";
        }
        else if(input == "exit"){
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