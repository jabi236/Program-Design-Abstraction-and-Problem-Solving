//-------------------------------------------------------------------------------------------------------------------------------------------------
//                                                      Coding Tester and Tutor
//-------------------------------------------------------------------------------------------------------------------------------------------------
// Author: James Birch
// Date: 5/16/24
// Description: Program to test my old C++ programs from my intro class and also learn with questions about coding concepts and specific lines of 
// code.
// TODO: Use OOP to divide most of functions into own files to not have just 1 long messy file
//-------------------------------------------------------------------------------------------------------------------------------------------------

#include "lab8_student.h"
#include "lab9_buddyList.h"

#include <iostream> // needed for cout
#include <iomanip> // need for setw
#include <string> // needed for string and getline
#include <fstream> // for writing and reading to files
#include <cmath> // for round

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
} // helloworld()

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
} // lab1()

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
}// lab2_2018()

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
}// lab2_2021()

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
}// lab3_2018()

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
    if (cin.peek() == '\n') cin.ignore();
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
}// lab3_2021()

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
} // lab4()

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
}; // student object

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
} // read()

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
} // calcAverages()

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
} // print()

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
} // search()

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
} // lab5()

struct lab6_frac{
    int num; // numerator
    int den; // denominator
}; // a fraction object

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
} // AskFraction()

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
} // DecimalValue()

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
} // PrintFraction()

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
} // Multiply()

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
} // Add()

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
} // lab6()

struct lab7_employee {
        string first, last;
        double hours, rate, gross, state, fed, net;
}; // employee object

// FEDERAL TAX BRACKETS: in order low to high
struct lab7_bracket {
        double max, rate;
}; // bracket object()

const int lab7_NUM_BRACKETS = 4;
const lab7_bracket brackets[lab7_NUM_BRACKETS] =
                {       {400,0.01},             // max gross, rate for bracket 0
                        {800,0.03},             // max gross, rate for bracket 1
                        {1200,0.05},    // max gross, rate for bracket 2
                        {99999,0.06} }; // max gross, rate for bracket 3
const double lab7_STATE_TAX_RATE = 0.06;
const int    lab7_MAX_EMPLOYEES = 10;

//-------------------------------------------------------------------------------------------------------------------------------------------------
// Function: readData
// Date: 6/4/24
// Description: read in dat of emplyee names, hours worked, and pay rate
//-------------------------------------------------------------------------------------------------------------------------------------------------
void lab7_readData(lab7_employee e[], int & numE){
    ifstream f;
    
    string fn;

    cout << setw(24) << left << "Enter input file name:";
    cin >> fn;

    f.open(fn);
    if(f.fail()){
        cout << "Failed to open " << fn << endl;
        numE = 0;
        return;
    }
    
    f >> numE;
    for(int i = 0; i < numE; i++){
        f >> e[i].first >> e[i].last >> e[i].hours >> e[i].rate;
    }

    f.close();
} // readData()

//-------------------------------------------------------------------------------------------------------------------------------------------------
// Function: calcData
// Date: 6/4/24
// Description: given gross, returns corresponding tax rate for that gross
//-------------------------------------------------------------------------------------------------------------------------------------------------
double lab7_calcData(double gross){
    double fed;

    if(gross <= brackets[0].max){
        fed = brackets[0].rate;
    }
    else if(gross > brackets[0].max && gross <= brackets[1].max){
        fed = brackets[1].rate;
    }
    else if(gross > brackets[1].max && gross <= brackets[2].max){
        fed = brackets[2].rate;
    }
    else if(gross > brackets[2].max && gross <= brackets[3].max){
        fed = brackets[3].rate;
    }

    return fed;
} // calcData()

//-------------------------------------------------------------------------------------------------------------------------------------------------
// Function: calcPay
// Date: 6/4/24
// Description: modifies single employee object by calculating taxes based on pay and net income after removing tax
//-------------------------------------------------------------------------------------------------------------------------------------------------
void lab7_calcPay(lab7_employee & e){
    e.gross = e.hours * e.rate;
    e.state = round(100 * e.gross * lab7_STATE_TAX_RATE)/100;
    e.fed = round(100 * e.gross * lab7_calcData(e.gross))/100;
    e.net = e.gross - e.state - e.fed;
} // calcPay()

//-------------------------------------------------------------------------------------------------------------------------------------------------
// Function: writeData
// Date: 6/4/24
// Description: outputs calculated pay outs to new file
//-------------------------------------------------------------------------------------------------------------------------------------------------
void lab7_writeData(lab7_employee e[], int numE){
    if(numE == 0){
        return;
    }
    ofstream f;
    string fn;

    cout << setw(24) << left << "Enter output file name:";
    cin >> fn;

    f.open(fn);
    if(f.fail()){
        cout << "Failed to open " << fn << endl;
        return;
    }
    for(int i = 0; i < numE; i++){
        f << fixed << setprecision(2) 
          << setw(15) << left << e[i].last << setw(10) << left << e[i].first << setw(9) << right << e[i].gross << setw(9) << right << e[i].state 
          << setw(9) << right << e[i].fed << setw(9) << right << e[i].net;
        if(i != numE -1){
            f << endl;
        }
    }

    f.close();
} // writeData()

//-------------------------------------------------------------------------------------------------------------------------------------------------
// Function: Lab 7
// Date: 5/16/24
// Description: 
//-------------------------------------------------------------------------------------------------------------------------------------------------
void lab7(){
    lab7_employee e[lab7_MAX_EMPLOYEES];
    int numEmps = 0;
    lab7_readData(e, numEmps);
    for (int i = 0; i < numEmps; i++)
            lab7_calcPay(e[i]);
    lab7_writeData(e, numEmps);
    return;
} // lab7()

//-------------------------------------------------------------------------------------------------------------------------------------------------
// Function: Lab 8
// Date: 6/5/24
// Description: Test Student Class. Add student name and scores, and get averages of those scores
//-------------------------------------------------------------------------------------------------------------------------------------------------
void lab8(){
    lab8_student s;		// create one student object

	// test empty student 
	cout << "Empty student: \n";
	s.print();		 
	cout << "Avg=" << s.getAvg() << endl;

	cout << "\nTesting setName and addScore...\n";
	s.setName("George");
	s.addScore(88);
	s.addScore(77);
	s.addScore(99);
	s.addScore(85);
	s.addScore(75);
	s.addScore(95);
	s.addScore(81);
	s.addScore(91);
	s.addScore(71);
	s.addScore(100);
	s.addScore(50);		// should fail; array is full
	cout << "\nAll scores added: \n";
	s.print();

	cout << "\nTesting gets:\n";
	cout << "Name = " << s.getName() << endl;
	cout << "Avg  = " << s.getAvg() << endl;
	cout << "#Scores = " << s.getNumScores() << endl << endl;

	cout << "Test another student object:\n";
	lab8_student t;		// create another object NOW
	t.setName("Mary");
	t.addScore(88);
	t.addScore(99);
	t.addScore(77);
	t.print();
	cout << endl;

	return;
} // lab8()

char lab9_askMenuOpt() {
	char opt;
	string input;

	cout << "\n===== Buddy List Pro =====\n";
	cout << "A - Add buddy \n";
	cout << "D - Delete buddy\n";
	cout << "P - Print list\n";
	cout << "S - Sort list\n";
	cout << "X - Exit\n";
	cout << "===> ";
	cin >> input;
	opt = toupper(input[0]);
	return opt;
}

//-------------------------------------------------------------------------------------------------------------------------------------------------
// Function: Lab 9
// Date: 5/16/24
// Description: 
//-------------------------------------------------------------------------------------------------------------------------------------------------
void lab9(){
    {
		lab9_buddyList b;
		string first, last, phone;
		char opt;
		do {
			opt = lab9_askMenuOpt();
			switch (opt) {
			case 'A':
				cout << "Enter buddy's First Last Phone: ";
				cin >> first >> last >> phone;
				b.add(first, last, phone);
				cout << "Buddy added!\n\n";
				break;
			case 'D': 
				cout << "Coming soon!\n";
				break;
			case 'S': 
				cout << "Coming soon!\n";
				break;
			case 'P': b.print(); break;
			case 'X': break;
			default: cout << "Invalid option!\n";
			}
		} while (opt != 'X');
	}
	system("pause");
	return;
} // lab9()

//-------------------------------------------------------------------------------------------------------------------------------------------------
// Function: Lab 10
// Date: 5/16/24
// Description: 
//-------------------------------------------------------------------------------------------------------------------------------------------------
void lab10(){
    cout << "This lab is currently not available\n";
} // lab10()

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
} // proj1_2018()

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
    if (cin.peek() == '\n') cin.ignore();
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
} // proj1_2021

const int proj2_2019_READ_ERROR    = -1;
const int proj2_2019_MAX_INV_ITEMS = 10;

// describes a single item in the inventory, and on an order
struct proj2_2019_item {
	string prodCode;		// product code: length 12, no spaces
	string description;		// product description: max length 28, has spaces
	double price;			// price of the product, max 999.99
}; // item object

const int proj2_2019_MAX_ORDERS = 10;

// describes a customer order or "basket"
const int proj2_2019_MAX_ORDER_ITEMS = 5;
struct proj2_2019_order {
	long   orderNumber;		// unique order number for this order
	string custName;		// customer name
	double totalPrice;		// price of all items purchased
	proj2_2019_item items[proj2_2019_MAX_ORDER_ITEMS];	// list of items purchased
	int numItems;			// number of items purchased
}; // order object

//----------------------------------------------------------------------------
//                                  readInventory
//----------------------------------------------------------------------------
// Modifies: inventory list (sets numberOfItems to -1 on READ ERROR)
//           lastOrderNum
// Reads inventory data from a file into an array of inventory items
//----------------------------------------------------------------------------
void proj2_2019_readInventory(proj2_2019_item inv[], int & numberOfInvItems, int & lastOrderNum) {
	ifstream f;

	// open the inventory file
	f.open("inventory.txt");
	if (f.fail()) {
		cout << "readFile:: error opening inventory.txt\n";
		numberOfInvItems = proj2_2019_READ_ERROR;
		return;
	}

	// read number of items from first line
	f >> numberOfInvItems >> lastOrderNum;

	// for each item, read the data for the item
	for (int i = 0; i < numberOfInvItems; i++) {
		f >> inv[i].prodCode >> inv[i].price;
		f.ignore(); // finished reading integer, getline() on string is next
		if (cin.peek() == '\n') cin.ignore();
        getline(f, inv[i].description);
	}
	f.close();
} // readInventory()

//----------------------------------------------------------------------------
//                                  isValidOption
//----------------------------------------------------------------------------
// given: option character, and string of valid options
// returns true or false if menu option is valid
//----------------------------------------------------------------------------
bool proj2_2019_isValidOption(char o, string val) {
	
    for(int i = 0; i < val.length(); i++){
        if(val[i] == o){
            return true;
        }
    }

    return false;
} // isValidOption()

//----------------------------------------------------------------------------
//                                  getMenuOption
//----------------------------------------------------------------------------
// returns menu option character
//----------------------------------------------------------------------------
char proj2_2019_getMenuOption() {
	
    string userInput;
    char option;
    // display menu
    cout << "+-----------------------------------------------------+\n"
         << "|                     JAMAZON.COM                     |\n"
         << "|                       by James                      |\n"
         << "+-----------------------------------------------------+\n"
         << "I - List our Inventory\n"
         << "O - Make an Order\n"
         << "L - List all Orders made\n"
         << "X - Exit\n";
    // user input
    cout << "Enter an option: ";
    if(cin.peek() == '\n') cin.ignore(); // just in case it's needed
    getline(cin, userInput);
    option = toupper(userInput[0]);
    // userInput[0] is the first char of the string userInput
    // toupper is a C++ function that converts a lowercase char to uppercase

    // loop until valid option. Use isValidOption function with string of valid options to check
    while(!proj2_2019_isValidOption(option, "IOLX")){
        cout << "Invalid option, enter I, O, L or X!\n";

        cout << "Enter an option: ";
        if(cin.peek() == '\n') cin.ignore();
        getline(cin, userInput);
        option = toupper(userInput[0]);
    }

    return option;
} // getMenuOption()

//----------------------------------------------------------------------------
//                                  displayList
//----------------------------------------------------------------------------
// given: inventory struct
// prints list of items in inventory
//----------------------------------------------------------------------------
void proj2_2019_displayList(proj2_2019_item inv[], int numItems) {
	for(int i = 0; i < numItems; i++){
        cout << setw(3) << right << i << "  " << setw(12) << left << inv[i].prodCode << "  $" << setw(6) << right << inv[i].price << "  " << inv[i].description;
        if(i != numItems-1){
            cout << endl;
        }
    }
    
} // displayList()

//----------------------------------------------------------------------------
//                                  displayInventory
//----------------------------------------------------------------------------
// given: inventory struct
// prints header for inventory list
//----------------------------------------------------------------------------
void proj2_2019_displayInventory(proj2_2019_item inv[], int numItems) {
	cout << "+-----------------------------------------------------+\n"
         << "|                       Products                      |\n"
         << "+-----------------------------------------------------+\n"
         << " #   PRODUCT CODE   PRICE   PRODUCT DESCRIPTION\n"
         << "---  ------------  -------  ---------------------------\n";
    proj2_2019_displayList(inv, numItems);
    cout << endl << "Number of items in inventory: " << numItems << endl << endl;
} // displayInventory()

//----------------------------------------------------------------------------
//                                  displayOrder
//----------------------------------------------------------------------------
// given: order struct
// prints header for inventory list
//----------------------------------------------------------------------------
void proj2_2019_displayOrder(proj2_2019_order o){
	cout << "ORDER: " << o.orderNumber << "   " << o.custName << endl;
    proj2_2019_displayList(o.items, o.numItems);
    cout << "\nTOTAL              $" << setw(6) << right << o.totalPrice << endl << endl;
} // displayOrder()

//----------------------------------------------------------------------------
//                                  startOrder
//----------------------------------------------------------------------------
// modifies partial aray of orders and LastOrderNumber
//----------------------------------------------------------------------------
void proj2_2019_startOrder(proj2_2019_order o[], int & numOrds, int & LastONum){
    o[numOrds].orderNumber = LastONum + 1;
    o[numOrds].totalPrice = 0;
    o[numOrds].numItems = 0;

    cout << setw(21) << left << "Order Number:" << o[numOrds].orderNumber << endl
         << setw(21) << left << "Enter customer name:";
    if(cin.peek() == '\n') cin.ignore();
    getline(cin, o[numOrds].custName);

    LastONum = o[numOrds].orderNumber;
    numOrds++;
} // startOrder()

//----------------------------------------------------------------------------
//                                  orderItem
//----------------------------------------------------------------------------
// given: inventory partial array
// true if user chose to quit and false if the order is not done
//----------------------------------------------------------------------------
bool proj2_2019_orderItem(proj2_2019_item inv[], proj2_2019_order o[], int numOrd, int numInInv){
    if(o[numOrd-1].numItems >= proj2_2019_MAX_ORDER_ITEMS){
        cout << "You have reached your maximum amount of items.\n";
        return true;
    }
    int numItemInput;
    cout << "Enter an item number: ";
    cin >> numItemInput;
    while(numItemInput < -1 || numItemInput > numInInv-1){
        cout << "Invalid entry. Enter number -1 to " << numInInv-1 << endl;

        cout << "Enter an item number: ";
        cin >> numItemInput;
    }
    if(numItemInput == -1){
        return true;
    }
    o[numOrd-1].items[o[numOrd-1].numItems] = inv[numItemInput];
    o[numOrd-1].totalPrice = o[numOrd-1].totalPrice + inv[numItemInput].price;
    cout << inv[numItemInput].description << " added to your basket. Current total is " << o[numOrd-1].totalPrice << endl;
    o[numOrd-1].numItems++;

    return false;
} // orderItem()

//----------------------------------------------------------------------------
//                                  makeOrder
//----------------------------------------------------------------------------
// given: inventory partial array
// Adds new order struct to orders partial array
//----------------------------------------------------------------------------
void proj2_2019_makeOrder(proj2_2019_item inv[], proj2_2019_order o[], int numInv, int & lastONum, int & numOrd){
	if(numOrd >= proj2_2019_MAX_ORDERS){
        cout << "Sorry, we can not take more orders today.\n";
        return;
    }
    proj2_2019_startOrder(o, numOrd, lastONum);
    proj2_2019_displayInventory(inv, numInv);

    while(!proj2_2019_orderItem(inv, o, numOrd, numInv)){}

    cout << "\nThank you for your order!\n";
    proj2_2019_displayOrder(o[numOrd-1]);
} // makeOrder()

//----------------------------------------------------------------------------
//                                  listOrders
//----------------------------------------------------------------------------
// given: partial array of orders
// prints list of orders
//----------------------------------------------------------------------------
void proj2_2019_listOrders(proj2_2019_order o[], int numOrders){
	cout << "+-----------------------------------------------------+\n"
         << "|                        Orders                       |\n"
         << "+-----------------------------------------------------+\n";
    for(int i = 0; i < numOrders; i++){
        proj2_2019_displayOrder(o[i]);
    }
    cout << "Total Number of Orders = " << numOrders << endl;
} // listOrders()

//----------------------------------------------------------------------------
//                                  writeOrders
//----------------------------------------------------------------------------
// given: partial array of orders
// writes orders made to text file
//----------------------------------------------------------------------------
void proj2_2019_writeOrders(proj2_2019_order o[], int numOrders){
	ofstream f;
    f.open("orders.txt");
    if (f.fail()) {
		cout << "writeFile:: error opening orders.txt\n";
		return;
	}
    f << numOrders << endl;
    for(int i = 0; i < numOrders; i++){
        f << o[i].orderNumber << " " << o[i].numItems << " " << o[i].totalPrice << " " << o[i].custName << endl;
        for(int j = 0; j < o[i].numItems; j++){
            f << o[i].items[j].prodCode << " " << o[i].items[j].price << " " << o[i].items[j].description << endl;
        }
    }
    f.close();
} // writeOrders()

//-------------------------------------------------------------------------------------------------------------------------------------------------
// Function: Project 2 V 2019
// Date: 6/4/24
// Description: an application that allows customers to order items from an inventory of products
//-------------------------------------------------------------------------------------------------------------------------------------------------
void proj2_2019(){

    proj2_2019_item inv[proj2_2019_MAX_INV_ITEMS];
    proj2_2019_order orders[proj2_2019_MAX_ORDERS];
    int lastOrderNumber = 0;
    int numOrders = 0;
    int numInv = 0;
    char menuOption;

    proj2_2019_readInventory(inv, numInv, lastOrderNumber);
    menuOption = proj2_2019_getMenuOption();
    while(menuOption != 'X'){
        if(menuOption == 'I'){
            proj2_2019_displayInventory(inv, numInv);
        }
        else if(menuOption == 'O'){
            proj2_2019_makeOrder(inv, orders, numInv, lastOrderNumber, numOrders);
        }
        else if(menuOption == 'L'){
            proj2_2019_listOrders(orders, numOrders);  
        }
        menuOption = proj2_2019_getMenuOption();
    }

    proj2_2019_writeOrders(orders, numOrders);
    return;
}
//-------------------------------------------------------------------------------------------------------------------------------------------------
// Function: Project 2
// Date: 6/3/24
// Description: 
//-------------------------------------------------------------------------------------------------------------------------------------------------
void proj2_2021(){
    cout << "This project is currently not available\n";
} // proj2_2021()

//-------------------------------------------------------------------------------------------------------------------------------------------------
// Function: Project 3
// Date: 6/3/24
// Description: 
//-------------------------------------------------------------------------------------------------------------------------------------------------
void proj3(){
    cout << "This project is currently not available\n";
} // proj3()

//-------------------------------------------------------------------------------------------------------------------------------------------------
// Function: Project 4
// Date: 6/3/24
// Description: 
//-------------------------------------------------------------------------------------------------------------------------------------------------
void proj4(){
    cout << "This project is currently not available\n";
} //proj4()

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
    if (cin.peek() == '\n') cin.ignore();
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
        if (cin.peek() == '\n') cin.ignore();
        getline(cin, answer1);
    }

    cout << "Correct! #include <iostream> allows you to use cout in your program!\n";

    // Question 2
    string answer2 = "";
    cout << "Question 2 - What statement makes it so you don't have to write \"std::\" before statements like cout? ";
    if (cin.peek() == '\n') cin.ignore();
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
        if (cin.peek() == '\n') cin.ignore();
        getline(cin, answer2);
    }

    cout << "Correct! using namespace std; makes it so you don't have to put std:: before cout, string, etc!\n";
    // Question 3
    string answer3 = "";
    char mc_answer3 = ' ';
    cout << "Question 3 - Which line of code makes the program say \"Hello World!\" ?\n"
         << "A - print(\"Hello World!\")\n"
         << "B - System.out.println(\"Hello World!\");\n"
         << "C - cout << \"Hello World!\";\n"
         << "D - cout << \'Hello World!\';\n"
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
             << "B - System.out.println(\"Hello World!\");\n"
             << "C - cout << \"Hello World!\";\n"
             << "D - cout << \'Hello World!\';\n"
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
} // levelone()

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
    if (cin.peek() == '\n') cin.ignore();
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
        if (cin.peek() == '\n') cin.ignore();
        getline(cin, answer1);
    }

    cout << "Correct! !\n";

    // Question 2
    string answer2 = "";
    cout << "Question 2 - ? ";
    if (cin.peek() == '\n') cin.ignore();
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
        if (cin.peek() == '\n') cin.ignore();
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
} // leveltwo()

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
} // levelthree()

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
    if (cin.peek() == '\n') cin.ignore();
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
        if (cin.peek() == '\n') cin.ignore();
        getline(cin, answer1);
    }

    cout << "Correct! !\n";

    // Question 2
    string answer2 = "";
    cout << "Question 2 - ? ";
    if (cin.peek() == '\n') cin.ignore();
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
        if (cin.peek() == '\n') cin.ignore();
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
}// levelbossone()

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
    if (cin.peek() == '\n') cin.ignore();
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
        if (cin.peek() == '\n') cin.ignore();
        getline(cin, answer1);
    }

    cout << "Correct! !\n";

    // Question 2
    string answer2 = "";
    cout << "Question 2 - ? ";
    if (cin.peek() == '\n') cin.ignore();
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
        if (cin.peek() == '\n') cin.ignore();
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
} // levelfour()

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
} // levelfive()

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

} //levelsix()

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
} // levelbosstwo()

//-------------------------------------------------------------------------------------------------------------------------------------------------
// Author: James Birch
// Date: 5/30/24
// Description: Seventh Round of Questions. Related to Lab 7
// TODO: move to class, make functions for warnings and lives
//-------------------------------------------------------------------------------------------------------------------------------------------------
int levelseven(int & lives, int & warns){
    cout << "Level 7 is currently not available.\n";
    return lives, warns;
} //levelseven()

//-------------------------------------------------------------------------------------------------------------------------------------------------
// Author: James Birch
// Date: 5/30/24
// Description: Eighth Round of Questions. Related to Lab 8
// TODO: move to class, make functions for warnings and lives
//-------------------------------------------------------------------------------------------------------------------------------------------------
int leveleight(int & lives, int & warns){
    cout << "Level 8 is currently not available.\n";
    return lives, warns;
} // leveleight()

//-------------------------------------------------------------------------------------------------------------------------------------------------
// Author: James Birch
// Date: 5/30/24
// Description: Ninth Round of Questions. Related to Lab 9
// TODO: move to class, make functions for warnings and lives
//-------------------------------------------------------------------------------------------------------------------------------------------------
int levelnine(int & lives, int & warns){
    cout << "Level 9 is currently not available.\n";
    return lives, warns;
} // levelnine()

//-------------------------------------------------------------------------------------------------------------------------------------------------
// Author: James Birch
// Date: 5/30/24
// Description: Tenth Round of Questions. Related to Lab 10
// TODO: move to class, make functions for warnings and lives
//-------------------------------------------------------------------------------------------------------------------------------------------------
int levelten(int & lives, int & warns){
    cout << "Level 10 is currently not available.\n";
    return lives, warns;
} // levelten()

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
} // levelbossthree()

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
} // levelbossfour()

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

    lives, warnings = levelone(lives, warnings);

    //lives, warnings = leveltwo(lives, warnings);

    //lives, warnings = levelthree(lives, warnings);

    //lives, warnings = levelfour(lives, warnings);

    //lives, warnings = levelbossone(lives, warnings);

    //lives, warnings = levelfive(lives, warnings);

    //lives, warnings = levelsix(lives, warnings);

    //lives, warnings = levelbosstwo(lives, warnings);

    //lives, warnings = levelseven(lives, warnings);

    //lives, warnings = leveleight(lives, warnings);

    //lives, warnings = levelnine(lives, warnings);

    //lives, warnings = levelten(lives, warnings);

    //lives, warnings = levelbossthree(lives, warnings);

    //lives, warnings = levelbossfour(lives, warnings);

    if(lives == 0){
        cout << "Game Over!\n";
        return;
    }
    cout << "You Won!\n"
         << "Final Lives: " << lives << setw(23) << right << "Final Warnings: " << warnings << endl
         << "Exiting Tutor Mode\n";

    return;
} // tutorMode()

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
            cout << "Loading \"helloworld\"\n";
            helloworld();
            cout << "\nEnd of test...\n";
        }
        else if(prog == "lab1"){
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
                lab2_2018();
                cout << "\nEnd of test...\n";
            }
            else if(ver2 == "2021"){
                cout << "Loading \"lab2_2021\"...\n";
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
                lab3_2018();
                cout << "\nEnd of test...\n";
            }
            else if(ver3 == "2021"){
                cout << "Loading \"lab3_2021\"...\n";
                lab3_2021();
                cout << "\nEnd of test...\n";
            }
            else{
                cout << "Invalid input. Returning to program select\n";
            }
        }
        else if(prog == "lab4"){
            cout << "Loading \"lab4\"...\n";
            lab4();
            cout << "\nEnd of test...\n";
        }
        else if(prog == "lab5"){
            cout << "Loading \"lab5\"...\n";
            lab5();
            cout << "\nEnd of test...\n";
        }
        else if(prog == "lab6"){
            cout << "Loading \"lab6\"...\n";
            lab6();
            cout << "\nEnd of test...\n";
        }
        else if(prog == "lab7"){
            cout << "Loading \"lab7\"...\n";
            lab7();
            cout << "\nEnd of test...\n";
        }
        else if(prog == "lab8"){
            cout << "Loading \"lab8\"...\n";
            lab8();
            cout << "\nEnd of test...\n";
        }
        else if(prog == "lab9"){
            cout << "Loading \"lab9\"...\n";
            lab9();
            cout << "\nEnd of test...\n";
        }
        else if(prog == "lab10"){
            cout << "Loading \"lab10\"...\n";
            lab10();
            cout << "\nEnd of test...\n";
        }
        else if(prog == "proj1"){
            string verP1 = "";
            cout << "Select version of project 1 (2018 or 2021): ";
            cin >> verP1;

            if(verP1 == "2018"){
                cout << "Loading \"proj1_2018\"...\n";
                proj1_2018();
                cout << "\nEnd of test...\n";
            }
            else if(verP1 == "2021"){
                cout << "Loading \"proj1_2021\"...\n";
                proj1_2021();
                cout << "\nEnd of test...\n";
            }
            else{
                cout << "Invalid input. Returning to program select\n";
            }
        }
        else if(prog == "proj2"){
            string verP2 = "";
            cout << "Select version of project 2 (2019 or 2021): ";
            cin >> verP2;

            if(verP2 == "2019"){
                cout << "Loading \"proj2_2019\"...\n";
                proj2_2019();
                cout << "\nEnd of test...\n";
            }
            else if(verP2 == "2021"){
                cout << "Loading \"proj2_2021\"...\n";
                proj2_2021();
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
                 << "\"lab4\" - Run Lab 4\n"
                 << "\"lab5\" - Run Lab 5\n"
                 << "\"lab6\" - Run Lab 6\n"
                 << "\"lab7\" - Run Lab 7\n"
                 << "\"lab8\" - Run Lab 8\n"
                 << "\"proj1\" - Run Project 1 (2018 or 2021 Edition)\n"
                 << "\"proj2\" - Run Project 2 (2019 or 2021 Edition)\n";
        }
        else{
            cout << "Invalid input\n";
        }
        cout << "\nEnter program to test: ";
        cin >> prog;
    }
    cout << "Exiting tester mode...\n";
    return;
} // testerMode()

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
} // modeSelect()

//-------------------------------------------------------------------------------------------------------------------------------------------------
// Function: Main
// Date: 5/16/24
// Description: Enter mode selection function
//-------------------------------------------------------------------------------------------------------------------------------------------------
int main(){

    modeSelect();

    return 0;
} // main()