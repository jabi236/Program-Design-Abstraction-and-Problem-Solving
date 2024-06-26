//------------------------------------------------------------------------------
//                              Project 1 - 2018
//------------------------------------------------------------------------------
// Author: James Birch
// Date: 5/23/24
// Description: an ATM Machine
//------------------------------------------------------------------------------

#include <iostream> // needed for cout
#include <iomanip> // setw
#include <string> // needed for string and getline
#include <fstream> // for writing and reading to files

using namespace std; // needed for cout and string
/*
struct accounts{
    string accNum;
    string firstName;
    string lastName;
    string dob;
    float accBal;
    bool debt;
};
*/
int main(){

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

    return 0;
};