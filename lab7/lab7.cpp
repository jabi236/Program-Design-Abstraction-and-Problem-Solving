//------------------------------------------------------------------------------
//                                  Lab 7
//------------------------------------------------------------------------------
// Author: James Birch
// Date: 6/4/24
// Description: 
//------------------------------------------------------------------------------

#include <iostream> // needed for cout
#include <iomanip> // setw
#include <string> // needed for string and getline
#include <fstream> // for writing and reading to files
#include <cmath> // for round

using namespace std; // needed for cout and string

struct employee {
        string first, last;
        double hours, rate, gross, state, fed, net;
};

// FEDERAL TAX BRACKETS: in order low to high
struct bracket {
        double max, rate;
};
const int NUM_BRACKETS = 4;
const bracket brackets[NUM_BRACKETS] =
                {       {400,0.01},             // max gross, rate for bracket 0
                        {800,0.03},             // max gross, rate for bracket 1
                        {1200,0.05},    // max gross, rate for bracket 2
                        {99999,0.06} }; // max gross, rate for bracket 3
const double STATE_TAX_RATE = 0.06;
const int    MAX_EMPLOYEES = 10;

//-------------------------------------------------------------------------------------------------------------------------------------------------
// Function: readData
// Date: 6/4/24
// Description: read in dat of emplyee names, hours worked, and pay rate
//-------------------------------------------------------------------------------------------------------------------------------------------------
void readData(employee e[], int & numE){
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
}

//-------------------------------------------------------------------------------------------------------------------------------------------------
// Function: calcData
// Date: 6/4/24
// Description: given gross, returns corresponding tax rate for that gross
//-------------------------------------------------------------------------------------------------------------------------------------------------
double calcData(double gross){
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
}

//-------------------------------------------------------------------------------------------------------------------------------------------------
// Function: calcPay
// Date: 6/4/24
// Description: modifies single employee object by calculating taxes based on pay and net income after removing tax
//-------------------------------------------------------------------------------------------------------------------------------------------------
void calcPay(employee & e){
    e.gross = e.hours * e.rate;
    e.state = round(100 * e.gross * STATE_TAX_RATE)/100;
    e.fed = round(100 * e.gross * calcData(e.gross))/100;
    e.net = e.gross - e.state - e.fed;
}

//-------------------------------------------------------------------------------------------------------------------------------------------------
// Function: writeData
// Date: 6/4/24
// Description: outputs calculated pay outs to new file
//-------------------------------------------------------------------------------------------------------------------------------------------------
void writeData(employee e[], int numE){

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
}

//--------------------------------------------------------
//                         main
//--------------------------------------------------------
int main(){
    employee e[MAX_EMPLOYEES];
    int numEmps = 0;
    readData(e, numEmps);
    for (int i = 0; i < numEmps; i++)
            calcPay(e[i]);
    writeData(e, numEmps);
    return 0;
};// main()