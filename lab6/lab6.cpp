//------------------------------------------------------------------------------
//                                  Lab 6
//------------------------------------------------------------------------------
// Author: James Birch
// Date: 6/3/24
// Description: write and test a set of functions dealing with a Fraction, based 
// on detailed function designs.
//------------------------------------------------------------------------------

#include <iostream> // needed for cout
#include <iomanip> // setw
#include <string> // needed for string and getline
#include <fstream> // for writing and reading to files

using namespace std; // needed for cout and string

struct frac{ // a fraction structure
    int num; // numerator
    int den; // denominator
};

//-------------------------------------------------------------------------------------------------------------------------------------------------
// Function: AskFraction
// Date: 6/3/24
// Description: Ask user for numerator and denomnator of a fraction
//-------------------------------------------------------------------------------------------------------------------------------------------------
frac AskFraction(){
    frac f;
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
float DecimalValue(frac f){
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
void PrintFraction(frac f){
    cout << setw(3) << right << f.num << endl
         << "----  = " << setprecision(6) << setw(10) << left << DecimalValue(f) << endl
         << setw(3) << right << f.den << endl;
    return;
}

//-------------------------------------------------------------------------------------------------------------------------------------------------
// Function: Multiply
// Date: 6/3/24
// Description: given a 2 fractions, return the product of the given fractions 
//-------------------------------------------------------------------------------------------------------------------------------------------------
frac Multiply(frac a, frac b){
    frac c;
    c.num = a.num * b.num;
    c.den = a.den * b.den;
    return c;
}

//-------------------------------------------------------------------------------------------------------------------------------------------------
// Function: Add
// Date: 6/3/24
// Description: given a 2 fractions, return the sum of the given fractions 
//-------------------------------------------------------------------------------------------------------------------------------------------------
frac Add(frac a, frac b){
    frac c;
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
frac Simplify(frac &f){
    for(int i = f.num; i >= 2; i--){
        if((f.num % i == 0) && (f.den % i == 0)){
            f.num /= i;
            f.den /= i;
        }
    }
    return f;
}

int main(){

    frac f1, f2, f_p, f_s; // fraction 1, fraction 2, product of fractions, sum of fractions

    cout << "FRACTION 1:\n";
    f1 = AskFraction();
    cout << "\nFRACTION 2:\n";
    f2 = AskFraction();

    cout << "PRODUCT:\n";
    f_p = Multiply(f1, f2);
    PrintFraction(f_p);

    cout << "SUM:\n";
    f_s = Add(f1, f2);
    PrintFraction(f_s);

    cout << "PRODUCT SIMPLIFIED:\n";
    Simplify(f_p);
    PrintFraction(f_p);

    return 0;
};