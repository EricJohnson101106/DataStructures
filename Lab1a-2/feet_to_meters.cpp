//      Eric Johnson
//      Lab1a - 2
//      #8 from textbook. Write program to print a conversion table from feet to meters using
//      the temperature conversion program as starting point.

//      Class File

//      REFERENCE: http://www.cs.colorado.edu/~main/chapter1/temperature.cxx

// File: temperature.cxx       <== Old file heading
// This program prints a table to convert numbers from one unit to another.
// The program illustrates some implementation techniques.

#include <iostream>    // Provides cout
#include <iomanip>     // Provides setw function for setting output width
#include <cassert>     // Provides assert function
#include "Lab1A-2.h"

using namespace std;   // Allows all standard library items to be used

double feet_to_meters(double f)
// Precondition: f is feet. For this example, f cannot be less than 0.
// Postcondition: The return value is the feet f converted to meters m.
{
    const double MINIMUM_FEET = 0; // Absolute zero for this example
    assert(f >= MINIMUM_FEET);
    return f * 0.3048;
};

void setup_cout_fractions(int fraction_digits)
// Precondition: fraction_digits is not negative.
// Postcondition: All double or float numbers printed to cout will now be
// rounded to the specified digits on the right of the decimal.
{
    assert(fraction_digits > 0);
    cout.precision(fraction_digits);
    cout.setf(ios::fixed, ios::floatfield);
    if (fraction_digits == 0)
        cout.unsetf(ios::showpoint);
    else
        cout.setf(ios::showpoint);
};