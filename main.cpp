//------------------------------------------------------------------------------
//                      Coding Tester and Tutor
//------------------------------------------------------------------------------
// Author: James Birch
// Date: 5/16/24
// Description: T
//------------------------------------------------------------------------------

#include <iostream> // needed for cout
#include <iomanip> // need for setw
#include <string> // needed for string and getline
#include <fstream> // for writing and reading to files

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
// Date: 5/21/24
// Description: a program that asks the user for data on courses for a semester, 
// calculates the GPA and writes a report to a file as shown below.
//------------------------------------------------------------------------------
void lab3_2021(){
    string fn = "grades.txt";

    ofstream f;
    f.open(fn);
    if(f.fail()){
        cout << "Unable to open file " << fn << endl;
        return;
    }

    string sName;
    cout << "Enter the students name: ";
    getline(cin, sName);

    // write file header with name given
    f << "GRADE REPORT FOR: " << sName << endl
      << "Course   Grd Hrs QPts\n"
      << "-------- --- --- ----\n";

    string course;
    cout << "\nEnter Course (or done): ";
    cin >> course;

    string inputGrade;
    int hours;
    int QPV;
    int QPE;
    float totQPE = 0.0;
    float totHours = 0.0;
    float GPA = 0.0;

    while(course != "done"){

        cout << "Enter number of hours: ";
        cin >> hours;

        cout << "Enter grade (A,B,C,D,E): ";
        cin >> inputGrade;

        char grade = toupper(inputGrade[0]);

        if(grade == 'A'){
            QPV = 4;
        }
        else if(grade == 'B'){
            QPV = 3;
        }
        else if(grade == 'C'){
            QPV = 2;
        }
        else if(grade == 'D'){
            QPV = 1;
        }
        else{
            QPV = 0;
        }
        QPE = QPV * hours;
        totQPE += QPE;
        totHours += hours;

        f << setw(8) << left << course << setw(3) << right << grade << setw(5) << right << hours << setw(5) << right << QPE << endl;;

        cout << "\nEnter Course (or done): ";
        cin >> course;
    }

    GPA = totQPE / totHours;

    f << "-------- --- --- ----\n"
      << "Overall:" << setw(8) << totHours << setw(5) << totQPE << "  GPA: " << fixed << setprecision(2) << GPA;

    f.close();

    cout << "Grade report written to " << fn << endl;
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
//                              Project 1 - 2021
//------------------------------------------------------------------------------
// Author: James Birch
// Date: 5/21/24
// Description: a small application to process payroll for a group of employees
//------------------------------------------------------------------------------
void proj1_2021(){
    // constant tax rates
    // fed tax is named by the beginning number of the tax range(greater than)
    // Ex: fedTaxRate_0 is in range 0 <= gross < 450
    const float localTaxRate = 0.015;
    const float stateTaxRate = 0.06;
    const float fedTaxRate_0 = 0.02;
    const float fedTaxRate_460 = 0.08;
    const float fedTaxRate_900 = 0.14;
    const float fedTaxRate_1500 = 0.22;

    cout << "+-------------------------------------+\n"
         << "|            Payroll Express          |\n"
         << "|                by James             |\n"
         << "+-------------------------------------+\n";

    string fn = "payroll.txt";

    ofstream f;
    f.open(fn);
    if(f.fail()){
        cout << "Unable to open payroll.txt\n";
        return;
    }

    string rDate; //date of report
    int numEmp; //number of employees

    // get user input of report date and number of employees
    cout << setw(27)<< left << "Enter date for report:";
    getline(cin, rDate);
    cout << setw(27) << left << "Enter number of employees: ";
    cin >> numEmp;

    // validation loop until number of employees is between 1 and 50
    while ((numEmp < 1)||(numEmp > 50)){
        cout << "Enter a number 1 to 50\n";

        cout << setw(27) << left << "Enter number of employees: ";
        cin >> numEmp;
    }

    string nameEmp; // Employee name
    string typeEmp_input; // type of employee input
    char typeEmp; // type of employee character


    f << "-------------------------------------------------------------------\n"
      << "                 Payroll Report for "<< rDate << endl
      << "-------------------------------------------------------------------\n"
      << "Employee             TYP Gross    Local   State   Fed     Net Pay\n"
      << "-------------------- --- -------- ------- ------- ------- ---------\n";

    // initialize totals
    int totH = 0; // total hourly employees
    int totS = 0; // total salaried employees
    int totC = 0; // total contactors
    float totGross = 0.00;
    float totLocal = 0.00;
    float totState = 0.00;
    float totFed = 0.00;
    float totNPay = 0.00;

    //intialize highest paid employee
    float maxGross = 0.00;
    string maxEmp;

    for(int i = 0; i < numEmp; i++){
        cout << "\nEmployee " << i+1 << ":\n"
             << "Enter name: ";
        if (cin.peek() == '\n') cin.ignore();
        getline(cin, nameEmp);

        cout << "H=hourly  S=salaried  C=contractor\n"
             << setw(21) << left << "Enter employee type:";

        if (cin.peek() == '\n') cin.ignore();
        getline(cin, typeEmp_input);

        typeEmp = toupper(typeEmp_input[0]);
        
        //validation loop
        while((typeEmp != 'H') && (typeEmp != 'S') && (typeEmp != 'C')){
            cout << "Invalid entry. Enter H, S or C!\n";

            cout << setw(21) << left << "Enter employee type:";
            if (cin.peek() == '\n') cin.ignore();
            getline(cin, typeEmp_input);

            typeEmp = toupper(typeEmp_input[0]);
        }

        float wage = 0.00;
        int hours = 0;
        float gross = 0.00;

        if(typeEmp == 'H'){
            cout << setw(21) << left << "Enter hourly wage:";
            cin >> wage;

            cout << setw(21) << left << "Enter hours worked:";
            cin >> hours;

            if(hours > 40){
                gross = (40* wage) + (1.5 * wage* (hours-40));
            }
            else{
                gross = hours * wage;
            }
            
            totH++;

        }
        else if(typeEmp == 'S'){
            cout << setw(21) << left << "Enter gross salary:";
            cin >> gross;

            totS++;
        }
        else if(typeEmp == 'C'){
            cout << setw(21) << left << "Enter contract pay:";
            cin >> gross;

            totC++;
        }

        float localTax = 0.00;
        float stateTax = 0.00;
        float fedTax = 0.00;
        float netPay = 0.00;

        if((typeEmp == 'H')||(typeEmp == 'S')){
            localTax = gross * localTaxRate;
            stateTax = gross * stateTaxRate;
            if(gross < 460){
                fedTax = gross * fedTaxRate_0;
            }
            else if((gross>=460) && (gross < 900)){
                fedTax = gross * fedTaxRate_460;
            }
            else if((gross>=900) && (gross < 1500)){
                fedTax = gross * fedTaxRate_900;
            }
            else if(gross > 1500){
                fedTax = gross * fedTaxRate_1500;
            }
        }

        netPay = gross - localTax - stateTax - fedTax;

        // add calculated amounts to designated totals
        totGross += gross;
        totLocal += localTax;
        totState += stateTax;
        totFed += fedTax;
        totNPay += netPay;

        // most paid employee
        if(gross >= maxGross){
            maxGross = gross;
            maxEmp = nameEmp;
        }

        f << fixed << setprecision(2)
          << setw(20) << left << nameEmp << "  " << setw(1) << right << typeEmp << "  " << setw(8) << right << gross 
          << " " << setw(7) << right << localTax << " " << setw(7) << right << stateTax << " " << setw(7) << right << fedTax 
          << "  $" << setw(7) << right << netPay << endl;
    }

    f << "-------------------- --- -------- ------- ------- ------- ---------\n"
      << setw(25) << left << "TOTALS:"<< setw(8) << right << totGross 
      << " " << setw(7) << right << totLocal << " " << setw(7) << right << totState << " " << setw(7) << right << totFed 
      << "  $" << setw(7) << right << totNPay << endl << endl
      << "Highest pard employee: " << maxEmp <<"(" << maxGross << ")\n"
      << setw(22) << left << "Hourly Employees:" << totH<< endl
      << " " << setw(21) << left << "Salaried Employees:" << totS << endl
      << " " << setw(21) << left << "Hourly Employees:" << totC;

    f.close();

    cout << endl <<"Payroll report written to file.\n";

    return;
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
                    cin.ignore();
                    cout << "Loading \"helloworld\"\n";
                    helloworld();
                }
                else if(prog == "lab1"){
                    cin.ignore();
                    cout << "Loading \"lab1\"...\n";
                    lab1();
                }
                else if(prog == "lab2"){
                    string ver2;
                    cout << "Which version of lab 3? (2018 or 2021)\n";
                    cin >> ver2;

                    if(ver2 == "2018"){
                        cout << "Loading \"lab2_2018\"...\n";
                        cin.ignore();
                        lab2_2018();
                    }
                    else if(ver2 == "2021"){
                        cout << "Loading \"lab2_2021\"...\n";
                        cin.ignore();
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
                        cin.ignore();
                        lab3_2018();
                    }
                    else if(ver3 == "2021"){
                        cout << "Loading \"lab3_2021\"...\n";
                        cin.ignore();
                        lab3_2021();
                    }
                    else{
                        cout << "Invalid input. Returning to program select\n";
                    }
                }
                else if(prog == "lab4"){
                    cout << "This lab is currently not available\n";
                    //cout << "Loading \"lab4\"...\n";
                    //cin.ignore();
                    //lab4();
                }
                else if(prog == "lab5"){
                    cout << "This lab is currently not available\n";
                    //cout << "Loading \"lab5\"...\n";
                    //cin.ignore();
                    //lab5();
                }
                else if(prog == "lab6"){
                    cout << "This lab is currently not available\n";
                    //cout << "Loading \"lab6\"...\n";
                    //cin.ignore();
                    //lab6();
                }
                else if(prog == "lab7"){
                    cout << "This lab is currently not available\n";
                    //cout << "Loading \"lab7\"...\n";
                    //cin.ignore();
                    //lab7();
                }
                else if(prog == "lab8"){
                    cout << "This lab is currently not available\n";
                    //cout << "Loading \"lab8\"...\n";
                    //cin.ignore();
                    //lab8();
                }
                else if(prog == "lab9"){
                    cout << "This lab is currently not available\n";
                    //cout << "Loading \"lab9\"...\n";
                    //cin.ignore();
                    //lab9();
                }
                else if(prog == "lab10"){
                    cout << "This lab is currently not available\n";
                    //cout << "Loading \"lab10\"...\n";
                    //cin.ignore();
                    //lab10();
                }
                else if(prog == "proj1"){
                    string verP1;
                    cout << "Which version of project 1? (2018 or 2021)\n";
                    cin >> verP1;

                    if(verP1 == "2018"){
                        cout << "This version is currently not available\n";
                        //cout << "Loading \"proj1_2018\"...\n";
                        //cin.ignore();
                        //proj1_2018();
                    }
                    else if(verP1 == "2021"){
                        cout << "Loading \"proj1_2021\"...\n";
                        cin.ignore();
                        proj1_2021();
                    }
                    else{
                        cout << "Invalid input. Returning to program select\n";
                    }
                }
                else if(prog == "help"){
                    cout << "Possible inputs:\n"
                         << "\"help\" - List possible input options\n"
                         << "\"exit\" - End program\n"
                         << "\"helloworld\" - Run helloworld program\n"
                         << "\"lab1\" - Run Lab 1\n"
                         << "\"lab2\" - Run Lab 2 (2018 or 2021 Edition)\n"
                         << "\"lab3\" - Run Lab 3 (2018 or 2021 Edition)\n"
                         << "\"proj1\" - Run Project 1 (2018 or 2021 Edition)\n";
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