//------------------------------------------------------------------------------
//                              Project 1 - 2021
//------------------------------------------------------------------------------
// Author: James Birch
// Date: 5/21/24
// Description: a small application to process payroll for a group of employees
//------------------------------------------------------------------------------

#include <iostream> // needed for cout
#include <iomanip> // setw
#include <string> // needed for string and getline
#include <fstream> // for writing and reading to files

using namespace std; // needed for cout and string

int main(){

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
        return 0;
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

    return 0;
};