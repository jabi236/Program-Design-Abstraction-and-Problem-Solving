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
    cin >> name; // get input

    cout << "Greetings " << name << "!\n";
};

//------------------------------------------------------------------------------
// Function: Lab 2 2018
// Date: 5/16/24
// Description: 
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
// Date: 5/16/24
// Description: 
//------------------------------------------------------------------------------
void lab2_2021(){
    
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
    cin >> input;
    while(input != "exit"){
        if(input == "helloworld"){
            cout << "Loading \"helloworld\"\n";
            helloworld();
        }
        else if(input == "lab1"){
            cout << "Loading \"lab1\"...\n";
            lab1();
        }
        else if(input == "lab2"){
            string ver;
            cout << "Which version? (2018 or 2021)\n";
            cin >> ver;

            if(ver == "2018"){
                cout << "Loading \"lab2_2018\"...\n";
                lab2_2018();
            }
            else if(ver == "2021"){
                cout << "Loading \"lab2_2021\"...\n";
                lab2_2021();
            }
            else{
                cout << "Invalid input. Returning to program select\n";
            }
        }
        
        else if(input == "lab3"){
            cout << "Loading \"lab3\"...\n";
            //lab3();
        }
        else if(input == "lab4"){
            cout << "Loading \"lab4\"...\n";
            //lab4();
        }
        else if(input == "lab5"){
            cout << "Loading \"lab5\"...\n";
            //lab5();
        }
        else if(input == "lab6"){
            cout << "Loading \"lab6\"...\n";
            //lab6();
        }
        else if(input == "lab7"){
            cout << "Loading \"lab7\"...\n";
            //lab7();
        }
        else if(input == "lab8"){
            cout << "Loading \"lab8\"...\n";
            //lab8();
        }
        else if(input == "lab9"){
            cout << "Loading \"lab9\"...\n";
            //lab9();
        }
        else if(input == "lab10"){
            cout << "Loading \"lab10\"...\n";
            //lab10();
        }
        else if(input == "help"){
            cout << "Possible inputs:\n"
                 << "\"help\" - List possible input options\n"
                 << "\"exit\" - End program\n"
                 << "\"helloworld\" - Run helloworld program\n"
                 << "\"lab1\" - Run Lab 1\n"
                 << "\"lab2\" - Run Lab 2 (2018 or 2021 Edition)\n";
        }
        else if(input == "exit"){
            cout << "Ending Program";
            return;
        }
        else{
            cout << "Invalid input\n";
        }
        cout << "\nWhich program would you like to test?\n";
        cin >> input;
    }
    cout << "Ending Program";
    return;
};
int main(){

    programSelect();

    return 0;
};