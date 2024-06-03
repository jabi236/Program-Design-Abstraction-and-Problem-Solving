//-------------------------------------------------------------------------------------------------------------------------------------------------
//                                                      Coding Tester and Tutor
//-------------------------------------------------------------------------------------------------------------------------------------------------
// Author: James Birch
// Date: 5/16/24
// Description: Program to test my old C++ programs from my intro class and also learn with questions about coding concepts and specific lines of 
// code.
// TODO: Use OOP to divide most of functions into own files to not have just 1 long messy file
//-------------------------------------------------------------------------------------------------------------------------------------------------

#include <iostream> // needed for cout
#include <iomanip> // need for setw
#include <string> // needed for string and getline
#include <fstream> // for writing and reading to files

using namespace std; // needed for cout and string


//-------------------------------------------------------------------------------------------------------------------------------------------------
//                                                               Labs
//-------------------------------------------------------------------------------------------------------------------------------------------------
// Function: Hello World
// Date: 5/14/24
// Description: The computer talks
//-------------------------------------------------------------------------------------------------------------------------------------------------
void helloworld(){
    cout << "Hello World!\n";
    //system("pause");
};

//-------------------------------------------------------------------------------------------------------------------------------------------------
// Function: Lab 1
// Date: 5/14/24
// Description: Ask user for name and greet them.
//-------------------------------------------------------------------------------------------------------------------------------------------------
void lab1(){
    string name = ""; // give input to be set as string of user name

    cout << "Hello! What is your name?\n";
    cin >> name; // get input

    cout << "Greetings " << name << "!\n";
};

//-------------------------------------------------------------------------------------------------------------------------------------------------
// Function: Lab 2 2018
// Date: 5/16/24
// Description: Write a program that asks the user to enter 3 numbers, one at a time. Print the three numbers in sorted order. Then display a menu 
// and print Scoville Units associated with the users's input.
//-------------------------------------------------------------------------------------------------------------------------------------------------
void lab2_2018(){
    // Sorted Numbers
    const int NUMS_SIZE = 3;
    int nums[NUMS_SIZE];
    int num1, num2, num3 = 0; 

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
    string pepper = "";
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

//-------------------------------------------------------------------------------------------------------------------------------------------------
// Function: Lab 2 2021
// Date: 5/20/24
// Description: a program that asks the user to select a chemical compound from the following list, printing the selected number and compound name.
//-------------------------------------------------------------------------------------------------------------------------------------------------
void lab2_2021(){
    string comp = "";

    cout << "Compound List:\n"
         << "1. Water\n"
         << "2. Mercury\n"
         << "3. Octane\n"
         << "4. Ethanol\n"
         << "Enter Selection: ";
    cin >> comp;

    int temp = 0;
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

//-------------------------------------------------------------------------------------------------------------------------------------------------
// Function: Lab 3 2018
// Date: 5/20/24
// Description: a program for processing temperature readings for a period of days
//-------------------------------------------------------------------------------------------------------------------------------------------------
void lab3_2018(){
    int days = 0;
    cout << "Enter a number of days (1-10) : ";
    cin >> days;

    while((days <= 1) || (days >= 10)){
        cout << "Invalid entry! Try again!\n"
         << "Enter a number of days (1-10): ";
        cin >> days;
    }

    int high, low = 0;

    // set intial placeholder values for high and low
    int highest = -1000;
    int lowest = 1000;

    float avgHigh = 0.0;
    float avgLow = 0.0;

    int fDays = 0;

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

//-------------------------------------------------------------------------------------------------------------------------------------------------
// Function: Lab 3 2021
// Date: 5/21/24
// Description: a program that asks the user for data on courses for a semester, calculates the GPA and writes a report to a file as shown below.
//-------------------------------------------------------------------------------------------------------------------------------------------------
void lab3_2021(){
    string fn = "grades.txt";

    ofstream f;
    f.open(fn);
    if(f.fail()){
        cout << "Unable to open file " << fn << endl;
        return;
    }

    string sName = "";
    cout << "Enter the students name: ";
    getline(cin, sName);

    // write file header with name given
    f << "GRADE REPORT FOR: " << sName << endl
      << "Course   Grd Hrs QPts\n"
      << "-------- --- --- ----\n";

    string course = "";
    cout << "\nEnter Course (or done): ";
    cin >> course;

    string inputGrade = "";
    int hours = 0;
    int QPV = 0;
    int QPE = 0;
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

//-------------------------------------------------------------------------------------------------------------------------------------------------
// Function: Lab 4
// Date: 5/22/24
// Description: a small grading program for an instructor, used to enter quiz scores and calculate average scores for a group of students
//-------------------------------------------------------------------------------------------------------------------------------------------------
void lab4(){
    const int MAX_STU = 20;
    const int MAX_QUIZ = 10;

    string students[MAX_STU];
    float avgQs[MAX_QUIZ];

    int numStu = 0;
    int numQuiz = 0;

    cout << setw(33) << left << "Enter number of students (1-20): ";
    cin >> numStu;

    cout << setw(33) << left << "Enter number of quizzes (1-10): ";
    cin >> numQuiz;

    cout << endl;

    string nameStu = "";
    // enter data for student name and their average quiz scores
    for(int i = 0; i < numStu; i++){
        float qScore = 0.0;
        float totQScores = 0.0;
        float avgQ = 0.0;

        cout << setw(20) << left << "Enter student name: ";
        if (cin.peek() == '\n') cin.ignore(); // clear cin for getline
        getline(cin, nameStu);

        students[i] = nameStu;

        for(int j = 0; j < numQuiz; j++){
            cout << "Enter score " << j+1 << setw(7) << left << ":";
            cin >> qScore;
            totQScores += qScore;
        }
        avgQ = (totQScores / numQuiz);
        avgQs[i] = avgQ;

    }

    float maxQ = avgQs[0];
    float minQ = avgQs[0];
    // find max and min averages
    for(int k = 1; k < numQuiz; k++){
        if(avgQs[k] > maxQ){
            maxQ = avgQs[k];
        }
        if(avgQs[k] < minQ){
            minQ = avgQs[k];
        }
    }

    cout << fixed << setprecision(1);
    //print report
    for(int l = 0; l < numStu; l++){
        cout << setw(19) << left << students[l] << setw(5) << right << avgQs[l] << endl;
    }
    cout << setw(20) << left << "Highest Average:" << maxQ << endl;
    cout << setw(20) << left << "Lowest Average:" << minQ << endl;

    return;
};

//-------------------------------------------------------------------------------------------------------------------------------------------------
//                                                              Lab 5
//-------------------------------------------------------------------------------------------------------------------------------------------------
const int LAB5_MAX_STUDENTS = 20;
const int LAB5_MAX_SCORES = 5;

struct lab5_student{
    string first;
    string last;
    float avg;
    int scores[LAB5_MAX_SCORES];
    int numScores;
};
//-------------------------------------------------------------------------------------------------------------------------------------------------
// Function: Read
// Date: 5/23/24
// Description: Read in student members and allocate them to array of student structs
//-------------------------------------------------------------------------------------------------------------------------------------------------
void lab5_read(lab5_student *s, int & numStu, string filename){

    int numScores_input;

    ifstream f;
    f.open(filename);
    if(f.fail()){
        cout << "Unable to open input file\n";
        numStu = 0;
        return;
    }
    f >> numStu >> numScores_input; 

    for(int i = 0; i < numStu; i++){
        f >> s[i].first >> s[i].last;
        for(int j = 0; j < numScores_input; j++){
            f >> s[i].scores[j];
        }
        s[i].numScores = numScores_input;
    }

    f.close();

    return;
};

//-------------------------------------------------------------------------------------------------------------------------------------------------
// Function: Calculate Averages
// Date: 5/23/24
// Description: Get the average of each students scores and store them in their structure
//-------------------------------------------------------------------------------------------------------------------------------------------------
void lab5_calcAverages(lab5_student *s, int numStu){
    for(int i = 0; i < numStu; i++){
        float totScores = 0;
        for(int j = 0; j < s[i].numScores; j++){
            totScores += s[i].scores[j];
        }
        s[i].avg = totScores / s[i].numScores;
    }
    return;
};

//-------------------------------------------------------------------------------------------------------------------------------------------------
// Function: Print
// Date: 5/23/24
// Description: Prints head and the data for each student on one line
//-------------------------------------------------------------------------------------------------------------------------------------------------
void lab5_print(lab5_student *s, int numStu){
    cout << setw(16) << left << "First" << setw(16) << left << "Last" << setw(7) << left << "Avg"
         << setw(4) << left << "S1" << setw(4) << left << "S2" << setw(4) << left << "S3" << setw(4) << left << "S4" << setw(4) << left << "S5" 
         << "\n--------------- --------------- ------ --- --- --- --- ---";
    for(int i = 0; i < numStu; i++){
        cout << endl << setw(15) << left << s[i].first << " " << setw(15) << left << s[i].last << " " << fixed << setprecision(2) << setw(6) << right << s[i].avg;
        for(int j = 0; j < s[i].numScores; j++){
            cout << " " << setw(3) << right << s[i].scores[j];
        }
    }
    cout << endl;
};

//-------------------------------------------------------------------------------------------------------------------------------------------------
// Function: Search
// Date: 5/23/24
// Description: Search for student using first and last name and return index of that student if found. Otherwise return -1.
//-------------------------------------------------------------------------------------------------------------------------------------------------
int lab5_search(lab5_student *s, int numStu, string fname, string lname){
    int found = -1;

    for(int i =0; i < numStu; i++){
        if( (s[i].first == fname) && (s[i].last == lname) ){
            found = i;
        }
    }

    return found;
};
//-------------------------------------------------------------------------------------------------------------------------------------------------
// Function: Lab 5
// Date: 5/16/24
// Description: a program that reads data from a file on students and their project scores.
//-------------------------------------------------------------------------------------------------------------------------------------------------
void lab5(){
    lab5_student s[LAB5_MAX_STUDENTS];
    int numStu;
    string sFirst, sLast;
    string fn = "students.txt";

    lab5_read(s, numStu, fn);
    lab5_calcAverages(s, numStu);
    lab5_print(s, numStu);

    cout << "Enter First and Last to search (or 0 0): ";
    cin >> sFirst >> sLast;
    while(sFirst != "0"){
        int ndx = lab5_search(s, numStu, sFirst, sLast);
        if(ndx == -1){
            cout << "Not found\n";
        }
        else{
            cout << "Average is " << s[ndx].avg << endl;
        }
        cout << "Enter First aand Last to search (or 0 0): ";
        cin >> sFirst >> sLast;
    }

    return;
};

struct lab6_frac{ // a fraction structure
    int num; // numerator
    int den; // denominator
};

//-------------------------------------------------------------------------------------------------------------------------------------------------
// Function: AskFraction
// Date: 6/3/24
// Description: Ask user for numerator and denomnator of a fraction
//-------------------------------------------------------------------------------------------------------------------------------------------------
lab6_frac lab6_AskFraction(){
    lab6_frac f;
    cout << setw(23) << left << "Enter numerator:";
    cin >> f.num;
    cout << setw(23) << left << "Enter denominator > 0:";
    cin >> f.den;

    while(f.den <= 0){
        cout << setw(23) << left << "Enter denominator > 0:";
        cin >> f.den;
    }

    return f;
}

//-------------------------------------------------------------------------------------------------------------------------------------------------
// Function: DecimalValue
// Date: 6/3/24
// Description: given a fraction, then calculates and returns the decimal value of the fraction 
//-------------------------------------------------------------------------------------------------------------------------------------------------
float lab6_DecimalValue(lab6_frac f){
    float dVal = 0.00;
    float num = f.num; // turn numerator and denominator into floats so they can be divided to find the decimal value
    float den = f.den; // ints cannot be calculated together to get a float
    dVal = num / den;
    return dVal;
}

//-------------------------------------------------------------------------------------------------------------------------------------------------
// Function: PrintFraction
// Date: 6/3/24
// Description: prints fraction in format with decimal value
//-------------------------------------------------------------------------------------------------------------------------------------------------
void lab6_PrintFraction(lab6_frac f){
    cout << setw(3) << right << f.num << endl
         << "----  = " << setprecision(6) << setw(10) << left << lab6_DecimalValue(f) << endl
         << setw(3) << right << f.den << endl;
    return;
}

//-------------------------------------------------------------------------------------------------------------------------------------------------
// Function: Multiply
// Date: 6/3/24
// Description: given a 2 fractions, return the product of the given fractions 
//-------------------------------------------------------------------------------------------------------------------------------------------------
lab6_frac lab6_Multiply(lab6_frac a, lab6_frac b){
    lab6_frac c;
    c.num = a.num * b.num;
    c.den = a.den * b.den;
    return c;
}

//-------------------------------------------------------------------------------------------------------------------------------------------------
// Function: Add
// Date: 6/3/24
// Description: given a 2 fractions, return the sum of the given fractions 
//-------------------------------------------------------------------------------------------------------------------------------------------------
lab6_frac lab6_Add(lab6_frac a, lab6_frac b){
    lab6_frac c;
    if(a.den == b.den){
        c.num = a.num + b.num;
        c.den = a.den;
    }
    else{
        c.num = (a.num * b.den) + (b.num * a.den);
        c.den = a.den * b.den;
    }

    return c;
}

//-------------------------------------------------------------------------------------------------------------------------------------------------
// Function: Simplify
// Date: 6/3/24
// Description: modifies a fraction by simplifying it
//-------------------------------------------------------------------------------------------------------------------------------------------------
lab6_frac lab6_Simplify(lab6_frac &f){
    for(int i = f.num; i >= 2; i--){
        if((f.num % i == 0) && (f.den % i == 0)){
            f.num /= i;
            f.den /= i;
        }
    }
    return f;
}

//-------------------------------------------------------------------------------------------------------------------------------------------------
// Function: Lab 6
// Date: 6/3/24
// Description: write and test a set of functions dealing with a Fraction, based on detailed function designs.
//-------------------------------------------------------------------------------------------------------------------------------------------------
void lab6(){
    lab6_frac f1, f2, f_p, f_s; // fraction 1, fraction 2, product of fractions, sum of fractions

    // get input from user of 2 fractions
    cout << "FRACTION 1:\n";
    f1 = lab6_AskFraction();
    cout << "\nFRACTION 2:\n";
    f2 = lab6_AskFraction();

    // multiply fractions
    cout << "PRODUCT:\n";
    f_p = lab6_Multiply(f1, f2);
    lab6_PrintFraction(f_p);

    //add fractions
    cout << "SUM:\n";
    f_s = lab6_Add(f1, f2);
    lab6_PrintFraction(f_s);

    // simplify product of fractions
    cout << "PRODUCT SIMPLIFIED:\n";
    lab6_Simplify(f_p);
    lab6_PrintFraction(f_p);

    return;
};

//-------------------------------------------------------------------------------------------------------------------------------------------------
// Function: Lab 7
// Date: 5/16/24
// Description: 
//-------------------------------------------------------------------------------------------------------------------------------------------------
void lab7(){
    cout << "This lab is currently not available\n";
};

//-------------------------------------------------------------------------------------------------------------------------------------------------
// Function: Lab 8
// Date: 5/16/24
// Description: 
//-------------------------------------------------------------------------------------------------------------------------------------------------
void lab8(){
    cout << "This lab is currently not available\n";
};

//-------------------------------------------------------------------------------------------------------------------------------------------------
// Function: Lab 9
// Date: 5/16/24
// Description: 
//-------------------------------------------------------------------------------------------------------------------------------------------------
void lab9(){
    cout << "This lab is currently not available\n";
};

//-------------------------------------------------------------------------------------------------------------------------------------------------
// Function: Lab 10
// Date: 5/16/24
// Description: 
//-------------------------------------------------------------------------------------------------------------------------------------------------
void lab10(){
    cout << "This lab is currently not available\n";
};
//-------------------------------------------------------------------------------------------------------------------------------------------------
//                                                             Projects
//-------------------------------------------------------------------------------------------------------------------------------------------------
//                                                         Project 1 - 2018
//-------------------------------------------------------------------------------------------------------------------------------------------------
// Author: James Birch
// Date: 5/23/24
// Description: a basic ATM Machine
//-------------------------------------------------------------------------------------------------------------------------------------------------
void proj1_2018(){
    string accNum = ""; // account number
    float accBal = 0.00;

    // transaction begin
    cout << "+---------------------+\n"
         << "|  James' Bank, Inc.  |\n"
         << "+---------------------+\n"
         << setw(23) << left << "Enter account number:"; // prompt user for account number
    cin >> accNum;

    string option = "";
    // loop until user enters shutdown for account number
    while(accNum != "shutdown"){
        cout << setw(23) << left << "Enter account balance:";
        cin >> accBal; 

        //print menu
        cout << "B - Balance Inquiry\n"
             << "D - Deposit\n"
             << "W - Withdrawl\n"
             << setw(19) << left << "Choose an option:";

        cin >> option;

        while((option != "B") && (option != "D") && (option != "W")){
            cout << "\"" << option << "\" is an invalid option. Enter B, D or W.\n"
                 << setw(19) << left << "Choose an option:";
            cin >> option;
        }
        cout << fixed << setprecision(2);
        // balance option
        if(option == "B"){
            cout << "+---------------------+\n"
                 << "|  James' Bank, Inc.  |\n"
                 << "+---------------------+\n"
                 << setw(11) << left << "Account:" << accNum << endl
                 << setw(11) << left << "Balance:" << "$" << setw(8) << right << accBal << endl;
        }
        // deposit option
        else if(option == "D"){
            float deposit = 0.00;
            cout << "Enter depost amount: ";
            cin >> deposit;
            float prevBal = accBal;
            accBal += deposit;

            cout << "+---------------------+\n"
                 << "|  James' Bank, Inc.  |\n"
                 << "+---------------------+\n"
                 << setw(11) << left << "Account:" << accNum << endl
                 << setw(11) << left << "Prev Bal:" << "$" << setw(8) << right << prevBal << endl
                 << setw(11) << left << "Deposit:" << "$" << setw(8) << right << deposit << endl
                 << setw(11) << left << "New Bal:" << "$" << setw(8) << right << accBal << endl;
        }
        // withdrawl option
        else if(option == "W"){
            float wdrawal = 0.00;
            cout << "Enter withdrawal amount: ";
            cin >> wdrawal;
            // can't withdrawal more money than you have in your account
            while(wdrawal > accBal){
                cout << "Insufficient Funds. Current Balence is $ " << accBal << endl
                     << "Enter withdrawal amount: ";
                cin >> wdrawal;
            }
            float prevBal = accBal;
            accBal -= wdrawal;

            cout << "+---------------------+\n"
                 << "|  James' Bank, Inc.  |\n"
                 << "+---------------------+\n"
                 << setw(11) << left << "Account:" << accNum << endl
                 << setw(11) << left << "Prev Bal:" << "$" << setw(8) << right << prevBal << endl
                 << setw(11) << left << "Deposit:" << "$" << setw(8) << right << wdrawal << endl
                 << setw(11) << left << "New Bal:" << "$" << setw(8) << right << accBal << endl;
        }
    // transaction begins again
    cout << "+---------------------+\n"
         << "|  James' Bank, Inc.  |\n"
         << "+---------------------+\n"
         << setw(23) << left << "Enter account number:"; // prompt user for account number
    cin >> accNum;

    }
    cout << "Shutting down...bye!";

    return;
};

//-------------------------------------------------------------------------------------------------------------------------------------------------
//                                                                              Project 1 - 2021
//-------------------------------------------------------------------------------------------------------------------------------------------------
// Author: James Birch
// Date: 5/21/24
// Description: a small application to process payroll for a group of employees
//-------------------------------------------------------------------------------------------------------------------------------------------------
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

//-------------------------------------------------------------------------------------------------------------------------------------------------
// Function: Project 2
// Date: 6/3/24
// Description: 
//-------------------------------------------------------------------------------------------------------------------------------------------------
void proj2(){
    cout << "This project is currently not available\n";
};

//-------------------------------------------------------------------------------------------------------------------------------------------------
// Function: Project 3
// Date: 6/3/24
// Description: 
//-------------------------------------------------------------------------------------------------------------------------------------------------
void proj3(){
    cout << "This project is currently not available\n";
};

//-------------------------------------------------------------------------------------------------------------------------------------------------
// Function: Project 4
// Date: 6/3/24
// Description: 
//-------------------------------------------------------------------------------------------------------------------------------------------------
void proj4(){
    cout << "This project is currently not available\n";
};

//-------------------------------------------------------------------------------------------------------------------------------------------------
//                                                           Tutor Levels
//-------------------------------------------------------------------------------------------------------------------------------------------------
// Author: James Birch
// Date: 5/29/24
// Description: First Round of Questions. Related to Lab 1
// TODO: move to class, make functions for warnings and lives
// Possibly change to multiple choice
//-------------------------------------------------------------------------------------------------------------------------------------------------
int levelone(int & lives, int & warns){
    int start_lives = lives;
    cout << "Level - 1\n"
         << "Lives: " << lives << setw(16) << right << "Warnings: " << warns << endl;
    if(lives != 0){
    // Question 1
    string answer1 = "";
    cout << "Question 1 - What statement lets you include the library for cout? ";
    getline(cin, answer1);
    
    // Loop until answer is incorrect or user has run out of lives
    while(answer1 != "#include<iostream>" && lives != 0){
        if(warns != 0){
            // check for include statement
            cout << "Warning, that answer was incorrect.\n";
            if(answer1[0] != '#'){
                cout << "Remember #include\n";
            }
            else{
                cout << "Make sure your spelling is correct. No spaces\n";
            }

            warns--;
            if(warns == 0){
                cout << "Hint: Answer format is [#include<\"library\">]\n";
            }
            cout << "Warnings Remaining: " << warns << endl;
        }
        else{
            lives--;
            cout << "Incorrect Answer! Try Again.\n"
                 << "Lives Remaining: " << lives << endl;
        }

        if(lives == 0){
            cout << "Study Lab 1\n";
            return lives, warns;
        }
        cout << "Question 1 - What statement lets you include the library for cout? ";
        getline(cin, answer1);
    }

    cout << "Correct! #include <iostream> allows you to use cout in your program!\n";

    // Question 2
    string answer2 = "";
    cout << "Question 2 - What statement makes it so you don't have to write \"std::\" before statements like cout? ";
    getline(cin, answer2);
    while(answer2 != "using namespace std\;" && lives != 0){
        if(warns != 0){
            cout << "Warning, that answer was incorrect.\n";
            // check for include statement
            if(answer2[answer2.size()-1] != ';'){
                cout << "Remember to put a semicolon at the end of your statement\n";
            }
            else{
                cout << "Make sure your spelling is correct\n";
            }

            warns--;
            if(warns == 0){
                cout << "Hint: Answer format is [using namespace ___;]\n";
            }
            cout << "Warnings Remaining: " << warns << endl;
        }
        else{
            lives--;
            cout << "Incorrect Answer! Try Again.\n"
                 << "Lives Remaining: " << lives << endl;
        }

        if(lives == 0){
            cout << "Study Lab 1\n";
            return lives, warns;
        }   
        cout << "Question 2 - What statement makes it so you don't have to write \"std::\" before statements like cout? ";
        getline(cin, answer2);
    }

    cout << "Correct! using namespace std; makes it so you don't have to put std:: before cout, string, etc!\n";
    // Question 3
    string answer3 = "";
    char mc_answer3 = ' ';
    cout << "Question 3 - Which line of code makes the program say \"Hello World!\" ?\n"
         << "A - print(\"Hello World!\")\n"
         << "B - System.out.println(\"Hello World!\")\;\n"
         << "C - cout << \"Hello World!\"\;\n"
         << "D - cout << \'Hello World!\'\;\n"
         << ": ";

    cin >> answer3;
    mc_answer3 = toupper(answer3[0]);
    // Loop until answer is incorrect or user has run out of lives
    while(mc_answer3 != 'C' && lives != 0){
        // remove wrning
        if(warns != 0){
            cout << "Warning, that answer was incorrect.\n";
            // check for include statement
            if(mc_answer3 == 'D'){
                cout << "Printing strings requires double quotes.\n";
            }
            else if(mc_answer3 == 'A' || mc_answer3 == 'B'){
                cout << "Remember this code is in C++.\n";
            }

            warns--;
            cout << "Warnings Remaining: " << warns << endl;
        }
        else{
            // remove life
            lives--;
            cout << "Incorrect Answer! Try Again.\n"
                 << "Lives Remaining: " << lives << endl;
        }

        if(lives == 0){
            cout << "Study Lab 1\n";
            return lives, warns;
        }
        cout << "Question 3 - Which line of code makes the program say \"Hello World!\" ?\n"
             << "A - print(\"Hello World!\")\n"
             << "B - System.out.println(\"Hello World!\")\;\n"
             << "C - cout << \"Hello World!\"\;\n"
             << "D - cout << \'Hello World!\'\;\n"
             << ": "; 

        cin >> answer3;
        mc_answer3 = toupper(answer3[0]);
    }
    cout << "Correct! cout using double quotes is the correct way to print Hello World in C++.\n";

    // end of level
    cout << "Level Complete!\n";
    }
    if(start_lives == lives){
        lives++;
        cout << "You gained a life for not missing a question!\n";
    }
    return lives, warns;
};

//-------------------------------------------------------------------------------------------------------------------------------------------------
// Author: James Birch
// Date: 5/30/24
// Description: Second Round of Questions. Related to Lab 2
// TODO: move to class, make functions for warnings and lives
//-------------------------------------------------------------------------------------------------------------------------------------------------
int leveltwo(int & lives, int & warns){
    // temp return
    cout << "Level 2 is currently not available.\n";
    return lives, warns;

    int start_lives = lives;
    cout << "Level - 2\n"
         << "Lives: " << lives << setw(16) << right << "Warnings: " << warns << endl;
    if(lives != 0){
    // Question 1
    string answer1 = "";
    cout << "Question 1 - ? ";
    getline(cin, answer1);
    
    // Loop until answer is incorrect or user has run out of lives
    while(answer1 != " " && lives != 0){
        if(warns != 0){
            // check for include statement
            cout << "Warning, that answer was incorrect.\n";
            if(answer1[0] != ' '){
                cout << "Remember \n";
            }
            else{
                cout << "Make sure your spelling is correct.\n";
            }

            warns--;
            if(warns == 0){
                cout << "Hint: Answer format is []\n";
            }
            cout << "Warnings Remaining: " << warns << endl;
        }
        else{
            lives--;
            cout << "Incorrect Answer! Try Again.\n"
                 << "Lives Remaining: " << lives << endl;
        }

        if(lives == 0){
            cout << "Study Lab 2\n";
            return lives, warns;
        }
        cout << "Question 1 - ? ";
        getline(cin, answer1);
    }

    cout << "Correct! !\n";

    // Question 2
    string answer2 = "";
    cout << "Question 2 - ? ";
    getline(cin, answer2);
    while(answer2 != " " && lives != 0){
        if(warns != 0){
            cout << "Warning, that answer was incorrect.\n";
            // check for include statement
            if(answer2[answer2.size()-1] != ';'){
                cout << "Remember to put a semicolon at the end of your statement\n";
            }
            else{
                cout << "Make sure your spelling is correct\n";
            }

            warns--;
            if(warns == 0){
                cout << "Hint: Answer format is []\n";
            }
            cout << "Warnings Remaining: " << warns << endl;
        }
        else{
            lives--;
            cout << "Incorrect Answer! Try Again.\n"
                 << "Lives Remaining: " << lives << endl;
        }

        if(lives == 0){
            cout << "Study Lab 2\n";
            return lives, warns;
        }   
        cout << "Question 2 - ? ";
        getline(cin, answer2);
    }

    cout << "Correct! !\n";
    // Question 3
    string answer3 = "";
    char mc_answer3 = ' ';
    cout << "Question 3 - Which option below  ?\n"
         << "A - \n"
         << "B - \n"
         << "C - \n"
         << "D - \n"
         << ": ";

    cin >> answer3;
    mc_answer3 = toupper(answer3[0]);
    // Loop until answer is incorrect or user has run out of lives
    while(mc_answer3 != 'C' && lives != 0){
        // remove wrning
        if(warns != 0){
            cout << "Warning, that answer was incorrect.\n";
            // check for include statement
            if(mc_answer3 == 'D'){
                cout << "Printing strings requires double quotes.\n";
            }
            else if(mc_answer3 == 'A' || mc_answer3 == 'B'){
                cout << "Remember this code is in C++.\n";
            }

            warns--;
            cout << "Warnings Remaining: " << warns << endl;
        }
        else{
            // remove life
            lives--;
            cout << "Incorrect Answer! Try Again.\n"
                 << "Lives Remaining: " << lives << endl;
        }

        if(lives == 0){
            cout << "Study Lab 2\n";
            return lives, warns;
        }
        cout << "Question 3 - Which option below  ?\n"
             << "A - \n"
             << "B - \n"
             << "C - \n"
             << "D - \n"
             << ": ";

        cin >> answer3;
        mc_answer3 = toupper(answer3[0]);
    }
    cout << "Correct! !\n";

    // end of level
    cout << "Level Complete!\n";
    }
    if(start_lives == lives){
        lives++;
        cout << "You gained a life for not missing a question!\n";
    }
    return lives, warns;
};

//-------------------------------------------------------------------------------------------------------------------------------------------------
// Author: James Birch
// Date: 5/30/24
// Description: Third Round of Questions. Related to Lab 3
// TODO: move to class, make functions for warnings and lives
//-------------------------------------------------------------------------------------------------------------------------------------------------
int levelthree(int & lives, int & warns){
    // temp return
    cout << "Level 3 is currently not available.\n";
    return lives, warns;
};

//-------------------------------------------------------------------------------------------------------------------------------------------------
// Author: James Birch
// Date: 5/30/24
// Description: First Boss Round of Questions. Related to Project 1
// TODO: move to class, make functions for warnings and lives
//-------------------------------------------------------------------------------------------------------------------------------------------------
int levelbossone(int & lives, int & warns){
    // temp return
    cout << "Level ★ is currently not available.\n";
    return lives, warns;

    int start_lives = lives;
    cout << "Level - ★\n"
         << "Lives: " << lives << setw(16) << right << "Warnings: " << warns << endl;
    if(lives != 0){
    // Question 1
    string answer1 = "";
    cout << "Question 1 - ? ";
    getline(cin, answer1);
    
    // Loop until answer is incorrect or user has run out of lives
    while(answer1 != " " && lives != 0){
        if(warns != 0){
            // check for include statement
            cout << "Warning, that answer was incorrect.\n";
            if(answer1[0] != ' '){
                cout << "Remember \n";
            }
            else{
                cout << "Make sure your spelling is correct.\n";
            }

            warns--;
            if(warns == 0){
                cout << "Hint: Answer format is []\n";
            }
            cout << "Warnings Remaining: " << warns << endl;
        }
        else{
            lives--;
            cout << "Incorrect Answer! Try Again.\n"
                 << "Lives Remaining: " << lives << endl;
        }

        if(lives == 0){
            cout << "Study Project 1\n";
            return lives, warns;
        }
        cout << "Question 1 - ? ";
        getline(cin, answer1);
    }

    cout << "Correct! !\n";

    // Question 2
    string answer2 = "";
    cout << "Question 2 - ? ";
    getline(cin, answer2);
    while(answer2 != " " && lives != 0){
        if(warns != 0){
            cout << "Warning, that answer was incorrect.\n";
            // check for include statement
            if(answer2[answer2.size()-1] != ';'){
                cout << "Remember to put a semicolon at the end of your statement\n";
            }
            else{
                cout << "Make sure your spelling is correct\n";
            }

            warns--;
            if(warns == 0){
                cout << "Hint: Answer format is []\n";
            }
            cout << "Warnings Remaining: " << warns << endl;
        }
        else{
            lives--;
            cout << "Incorrect Answer! Try Again.\n"
                 << "Lives Remaining: " << lives << endl;
        }

        if(lives == 0){
            cout << "Study Lab Project 1\n";
            return lives, warns;
        }   
        cout << "Question 2 - ? ";
        getline(cin, answer2);
    }

    cout << "Correct! !\n";
    // Question 3
    string answer3 = "";
    char mc_answer3 = ' ';
    cout << "Question 3 - Which option below  ?\n"
         << "A - \n"
         << "B - \n"
         << "C - \n"
         << "D - \n"
         << ": ";

    cin >> answer3;
    mc_answer3 = toupper(answer3[0]);
    // Loop until answer is incorrect or user has run out of lives
    while(mc_answer3 != 'C' && lives != 0){
        // remove wrning
        if(warns != 0){
            cout << "Warning, that answer was incorrect.\n";
            // check for include statement
            if(mc_answer3 == 'D'){
                cout << "Printing strings requires double quotes.\n";
            }
            else if(mc_answer3 == 'A' || mc_answer3 == 'B'){
                cout << "Remember this code is in C++.\n";
            }

            warns--;
            cout << "Warnings Remaining: " << warns << endl;
        }
        else{
            // remove life
            lives--;
            cout << "Incorrect Answer! Try Again.\n"
                 << "Lives Remaining: " << lives << endl;
        }

        if(lives == 0){
            cout << "Study Lab Project 1\n";
            return lives, warns;
        }
        cout << "Question 3 - Which option below  ?\n"
             << "A - \n"
             << "B - \n"
             << "C - \n"
             << "D - \n"
             << ": ";

        cin >> answer3;
        mc_answer3 = toupper(answer3[0]);
    }
    cout << "Correct! !\n";

    // Question 4

    // Question 5


    // end of level
    cout << "Level Complete!\n";
    }
    if(start_lives == lives){
        lives++;
        lives++;
        cout << "You gained two lives for not missing a question in a boss round!\n";
    }
    return lives, warns;
};

//-------------------------------------------------------------------------------------------------------------------------------------------------
// Author: James Birch
// Date: 5/30/24
// Description: Fourth Round of Questions. Related to Lab 4
// TODO: move to class, make functions for warnings and lives
//-------------------------------------------------------------------------------------------------------------------------------------------------
int levelfour(int & lives, int & warns){
    // temp return
    cout << "Level 4 is currently not available.\n";
    return lives, warns;

    int start_lives = lives;
    cout << "Level - 4\n"
         << "Lives: " << lives << setw(16) << right << "Warnings: " << warns << endl;
    if(lives != 0){
    // Question 1
    string answer1 = "";
    cout << "Question 1 - ? ";
    getline(cin, answer1);
    
    // Loop until answer is incorrect or user has run out of lives
    while(answer1 != " " && lives != 0){
        if(warns != 0){
            // check for include statement
            cout << "Warning, that answer was incorrect.\n";
            if(answer1[0] != ' '){
                cout << "Remember \n";
            }
            else{
                cout << "Make sure your spelling is correct.\n";
            }

            warns--;
            if(warns == 0){
                cout << "Hint: Answer format is []\n";
            }
            cout << "Warnings Remaining: " << warns << endl;
        }
        else{
            lives--;
            cout << "Incorrect Answer! Try Again.\n"
                 << "Lives Remaining: " << lives << endl;
        }

        if(lives == 0){
            cout << "Study Lab 4\n";
            return lives, warns;
        }
        cout << "Question 1 - ? ";
        getline(cin, answer1);
    }

    cout << "Correct! !\n";

    // Question 2
    string answer2 = "";
    cout << "Question 2 - ? ";
    getline(cin, answer2);
    while(answer2 != " " && lives != 0){
        if(warns != 0){
            cout << "Warning, that answer was incorrect.\n";
            // check for include statement
            if(answer2[answer2.size()-1] != ';'){
                cout << "Remember to put a semicolon at the end of your statement\n";
            }
            else{
                cout << "Make sure your spelling is correct\n";
            }

            warns--;
            if(warns == 0){
                cout << "Hint: Answer format is []\n";
            }
            cout << "Warnings Remaining: " << warns << endl;
        }
        else{
            lives--;
            cout << "Incorrect Answer! Try Again.\n"
                 << "Lives Remaining: " << lives << endl;
        }

        if(lives == 0){
            cout << "Study Lab 4\n";
            return lives, warns;
        }   
        cout << "Question 2 - ? ";
        getline(cin, answer2);
    }

    cout << "Correct! !\n";
    // Question 3
    string answer3 = "";
    char mc_answer3 = ' ';
    cout << "Question 3 - Which option below  ?\n"
         << "A - \n"
         << "B - \n"
         << "C - \n"
         << "D - \n"
         << ": ";

    cin >> answer3;
    mc_answer3 = toupper(answer3[0]);
    // Loop until answer is incorrect or user has run out of lives
    while(mc_answer3 != 'C' && lives != 0){
        // remove wrning
        if(warns != 0){
            cout << "Warning, that answer was incorrect.\n";
            // check for include statement
            if(mc_answer3 == 'D'){
                cout << "Printing strings requires double quotes.\n";
            }
            else if(mc_answer3 == 'A' || mc_answer3 == 'B'){
                cout << "Remember this code is in C++.\n";
            }

            warns--;
            cout << "Warnings Remaining: " << warns << endl;
        }
        else{
            // remove life
            lives--;
            cout << "Incorrect Answer! Try Again.\n"
                 << "Lives Remaining: " << lives << endl;
        }

        if(lives == 0){
            cout << "Study Lab 4\n";
            return lives, warns;
        }
        cout << "Question 3 - Which option below  ?\n"
             << "A - \n"
             << "B - \n"
             << "C - \n"
             << "D - \n"
             << ": ";

        cin >> answer3;
        mc_answer3 = toupper(answer3[0]);
    }
    cout << "Correct! !\n";

    // end of level
    cout << "Level Complete!\n";
    }
    if(start_lives == lives){
        lives++;
        cout << "You gained a life for not missing a question!\n";
    }
    return lives, warns;
};

//-------------------------------------------------------------------------------------------------------------------------------------------------
// Author: James Birch
// Date: 5/30/24
// Description: Third Round of Questions. Related to Lab 5
// TODO: move to class, make functions for warnings and lives
//-------------------------------------------------------------------------------------------------------------------------------------------------
int levelfive(int & lives, int & warns){
    // temp return
    cout << "Level 5 is currently not available.\n";
    return lives, warns;
};

//-------------------------------------------------------------------------------------------------------------------------------------------------
// Author: James Birch
// Date: 5/30/24
// Description: Sixth Round of Questions. Related to Lab 6
// TODO: move to class, make functions for warnings and lives
//-------------------------------------------------------------------------------------------------------------------------------------------------
int levelsix(int & lives, int & warns){
    // temp return
    cout << "Level 6 is currently not available.\n";
    return lives, warns;

};

//-------------------------------------------------------------------------------------------------------------------------------------------------
// Author: James Birch
// Date: 5/30/24
// Description: Second Boss Round of Questions. Related to Project 2
// TODO: move to class, make functions for warnings and lives
//-------------------------------------------------------------------------------------------------------------------------------------------------
int levelbosstwo(int & lives, int & warns){
    // temp return
    cout << "Level ★★ is currently not available.\n";
    return lives, warns;
};

//-------------------------------------------------------------------------------------------------------------------------------------------------
// Author: James Birch
// Date: 5/30/24
// Description: Seventh Round of Questions. Related to Lab 7
// TODO: move to class, make functions for warnings and lives
//-------------------------------------------------------------------------------------------------------------------------------------------------
int levelseven(int & lives, int & warns){
    cout << "Level 7 is currently not available.\n";
    return lives, warns;
};

//-------------------------------------------------------------------------------------------------------------------------------------------------
// Author: James Birch
// Date: 5/30/24
// Description: Eighth Round of Questions. Related to Lab 8
// TODO: move to class, make functions for warnings and lives
//-------------------------------------------------------------------------------------------------------------------------------------------------
int leveleight(int & lives, int & warns){
    cout << "Level 8 is currently not available.\n";
    return lives, warns;
};

//-------------------------------------------------------------------------------------------------------------------------------------------------
// Author: James Birch
// Date: 5/30/24
// Description: Ninth Round of Questions. Related to Lab 9
// TODO: move to class, make functions for warnings and lives
//-------------------------------------------------------------------------------------------------------------------------------------------------
int levelnine(int & lives, int & warns){
    cout << "Level 9 is currently not available.\n";
    return lives, warns;
};

//-------------------------------------------------------------------------------------------------------------------------------------------------
// Author: James Birch
// Date: 5/30/24
// Description: Tenth Round of Questions. Related to Lab 10
// TODO: move to class, make functions for warnings and lives
//-------------------------------------------------------------------------------------------------------------------------------------------------
int levelten(int & lives, int & warns){
    cout << "Level 10 is currently not available.\n";
    return lives, warns;
};

//-------------------------------------------------------------------------------------------------------------------------------------------------
// Author: James Birch
// Date: 5/30/24
// Description: Third Boss Round of Questions. Related to Project 3
// TODO: move to class, make functions for warnings and lives
//-------------------------------------------------------------------------------------------------------------------------------------------------
int levelbossthree(int & lives, int & warns){
    // temp return
    cout << "Level ★★★ is currently not available.\n";
    return lives, warns;
};

//-------------------------------------------------------------------------------------------------------------------------------------------------
// Author: James Birch
// Date: 5/30/24
// Description: Fourth and Final? Boss Round of Questions. Related to Project 4
// TODO: move to class, make functions for warnings and lives
//-------------------------------------------------------------------------------------------------------------------------------------------------
int levelbossfour(int & lives, int & warns){
    // temp return
    cout << "Level ★★★★ is currently not available.\n";
    return lives, warns;
};

//-------------------------------------------------------------------------------------------------------------------------------------------------
//                                                               Modes
//-------------------------------------------------------------------------------------------------------------------------------------------------
// Function: Tutor Mode
// Date: 5/22/24
// Description: Ask questions to test knowledge on programming basics
//-------------------------------------------------------------------------------------------------------------------------------------------------
void tutorMode(){

    string diff_input;
    int lives = 0;
    int warnings = 0;
    char difficulty = ' ';
    cout << "Choose Difficulty Easy(E), Medium(M), Hard(H): ";
    cin >> diff_input;
    difficulty = toupper(diff_input[0]);

    while(difficulty != 'E' && difficulty != 'M' && difficulty != 'H'){
        cout << "Invalid input. Enter E, M, or H\n"
             << "Choose Difficulty Easy(E), Medium(M), Hard(H): ";
        cin >> diff_input;
        difficulty = toupper(diff_input[0]);
    }
    if(difficulty == 'E'){
        lives = 5;
        warnings = 3;
    }
    else if(difficulty == 'M'){
        lives = 4;
        warnings = 2;
    }
    else if(difficulty == 'H'){
        lives = 3;
        warnings = 1;
    }
    else if(difficulty == 'T'){
        cout << "Test no lives\n";
        lives = 0;
        warnings = 0;
    }

    cin.ignore();
    lives, warnings = levelone(lives, warnings);

    //cin.ignore();
    //lives, warnings = leveltwo(lives, warnings);

    //cin.ignore();
    //lives, warnings = levelthree(lives, warnings);

    //cin.ignore();
    //lives, warnings = levelfour(lives, warnings);

    //cin.ignore();
    //lives, warnings = levelbossone(lives, warnings);

    //cin.ignore();
    //lives, warnings = levelfive(lives, warnings);

    //cin.ignore();
    //lives, warnings = levelsix(lives, warnings);

    //cin.ignore();
    //lives, warnings = levelbosstwo(lives, warnings);

    //cin.ignore();
    //lives, warnings = levelseven(lives, warnings);

    //cin.ignore();
    //lives, warnings = leveleight(lives, warnings);

    //cin.ignore();
    //lives, warnings = levelnine(lives, warnings);

    //cin.ignore();
    //lives, warnings = levelten(lives, warnings);

    //cin.ignore();
    //lives, warnings = levelbossthree(lives, warnings);

    //cin.ignore();
    //lives, warnings = levelbossfour(lives, warnings);

    if(lives == 0){
        cout << "Game Over!\n";
        return;
    }
    cout << "You Won!\n"
         << "Final Lives: " << lives << setw(23) << right << "Final Warnings: " << warnings << endl
         << "Exiting Tutor Mode\n";

    return;
};
//-------------------------------------------------------------------------------------------------------------------------------------------------
// Function: Tutor Mode
// Date: 5/22/24
// Description: Input loop where a user gives an input of program they want to test
//-------------------------------------------------------------------------------------------------------------------------------------------------
void testerMode(){
    string prog = "";
    cout << "Enter program to test (or exit): ";
    cin >> prog;
    while(prog != "exit"){
        if(prog == "helloworld"){
            cin.ignore();
            cout << "Loading \"helloworld\"\n";
            helloworld();
            cout << "\nEnd of test...\n";
        }
        else if(prog == "lab1"){
            cin.ignore();
            cout << "Loading \"lab1\"...\n";
            lab1();
            cout << "\nEnd of test...\n";
        }
        else if(prog == "lab2"){
            string ver2 = "";
            cout << "Select version of lab 2 (2018 or 2021): ";
            cin >> ver2;

            if(ver2 == "2018"){
                cout << "Loading \"lab2_2018\"...\n";
                cin.ignore();
                lab2_2018();
                cout << "\nEnd of test...\n";
            }
            else if(ver2 == "2021"){
                cout << "Loading \"lab2_2021\"...\n";
                cin.ignore();
                lab2_2021();
                cout << "\nEnd of test...\n";
            }
            else{
                cout << "Invalid input. Returning to program select\n";
            }
        }
        else if(prog == "lab3"){
            string ver3 = "";
            cout << "Select version of lab 3 (2018 or 2021): ";
            cin >> ver3;

            if(ver3 == "2018"){
                cout << "Loading \"lab3_2018\"...\n";
                cin.ignore();
                lab3_2018();
                cout << "\nEnd of test...\n";
            }
            else if(ver3 == "2021"){
                cout << "Loading \"lab3_2021\"...\n";
                cin.ignore();
                lab3_2021();
                cout << "\nEnd of test...\n";
            }
            else{
                cout << "Invalid input. Returning to program select\n";
            }
        }
        else if(prog == "lab4"){
            cout << "Loading \"lab4\"...\n";
            cin.ignore();
            lab4();
            cout << "\nEnd of test...\n";
        }
        else if(prog == "lab5"){
            cout << "Loading \"lab5\"...\n";
            cin.ignore();
            lab5();
            cout << "\nEnd of test...\n";
        }
        else if(prog == "lab6"){
            cout << "Loading \"lab6\"...\n";
            cin.ignore();
            lab6();
            cout << "\nEnd of test...\n";
        }
        else if(prog == "lab7"){
            cout << "Loading \"lab7\"...\n";
            cin.ignore();
            lab7();
            cout << "\nEnd of test...\n";
        }
        else if(prog == "lab8"){
            cout << "Loading \"lab8\"...\n";
            cin.ignore();
            lab8();
            cout << "\nEnd of test...\n";
        }
        else if(prog == "lab9"){
            cout << "Loading \"lab9\"...\n";
            cin.ignore();
            lab9();
            cout << "\nEnd of test...\n";
        }
        else if(prog == "lab10"){
            cout << "Loading \"lab10\"...\n";
            cin.ignore();
            lab10();
            cout << "\nEnd of test...\n";
        }
        else if(prog == "proj1"){
            string verP1 = "";
            cout << "Select version of project 1 (2018 or 2021): ";
            cin >> verP1;

            if(verP1 == "2018"){
                cout << "Loading \"proj1_2018\"...\n";
                cin.ignore();
                proj1_2018();
                cout << "\nEnd of test...\n";
            }
            else if(verP1 == "2021"){
                cout << "Loading \"proj1_2021\"...\n";
                cin.ignore();
                proj1_2021();
                cout << "\nEnd of test...\n";
            }
            else{
                cout << "Invalid input. Returning to program select\n";
            }
        }
        else if(prog == "help"){
            cout << "Possible inputs:\n"
                 << "\"help\" - List possible input options\n"
                 << "\"exit\" - Exit tester mode\n"
                 << "\"helloworld\" - Run helloworld program\n"
                 << "\"lab1\" - Run Lab 1\n"
                 << "\"lab2\" - Run Lab 2 (2018 or 2021 Edition)\n"
                 << "\"lab3\" - Run Lab 3 (2018 or 2021 Edition)\n"
                 << "\"proj1\" - Run Project 1 (2018 or 2021 Edition)\n";
        }
        else{
            cout << "Invalid input\n";
        }
        cout << "\nEnter program to test: ";
        cin >> prog;
    }
    cout << "Exiting tester mode...\n";
    return;
};

//-------------------------------------------------------------------------------------------------------------------------------------------------
// Function: Program Selection
// Date: 5/16/24
// Description: Input loop where a user gives an input of program they want to test
// TODO: Convertto its own class
//-------------------------------------------------------------------------------------------------------------------------------------------------
void modeSelect(){
    string mode = "";
    cout << "Enter help if you want to know the options\n";
    cout << "Select mode (tutor or tester): ";
    cin >> mode;
    while(mode != "done"){
        if(mode == "tutor"){
            tutorMode();
        }
        else if(mode == "tester"){
            testerMode();
        }
        else if(mode == "help"){
            cout << "Possible inputs:\n"
                 << "\"help\" - List possible input options\n"
                 << "\"done\" - End program\n"
                 << "\"tester\" - Enter mode to test programs\n"
                 << "\"tutor\" - Enter mode to learn and test coding knowledge\n";
        }
        else{
            cout << "Invalid input\n";
        }
        cout << "Select mode (tutor or tester): ";
        cin >> mode;
    }
    cout << "Ending Program...\n";
    return;
};

//-------------------------------------------------------------------------------------------------------------------------------------------------
// Function: Main
// Date: 5/16/24
// Description: Enter mode selection function
//-------------------------------------------------------------------------------------------------------------------------------------------------
int main(){

    modeSelect();

    return 0;
};