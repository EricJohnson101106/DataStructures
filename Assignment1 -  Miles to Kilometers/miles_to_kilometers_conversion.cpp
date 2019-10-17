//      Eric Johnson
//      Assignment 1 - Create a conversion table for miles to kilometers
//      0 - 90 incrementing by 10. Display both num of miles and num of km on same line

//      Class File

//      REFERENCE: http://www.cs.colorado.edu/~main/chapter1/temperature.cxx
//              Changed method to fit assignment. Changed variable to m.
//              Changed Label1 and Label2 to be a char array. Changed DIGITS to 2. Updated table begin and end.


#include <iostream>    // Provides cout
#include <iomanip>     // Provides setw function for setting output width
#include <cstdlib>     // Provides EXIT_SUCCESS
#include <cassert>     // Provides assert function
#include "miles_to_kilometers.h"
using namespace std;   // Allows all standard library items to be used

double miles_to_kilometers(double m)
// Precondition: m is miles. For this example, m cannot be less than 0.
// Postcondition: The return value is the  miles m converted to kilometers km.
{
    const double MINIMUM_MILES = 0; // Absolute zero for this example
    assert(m >= MINIMUM_MILES);
    return m * 1.60934; //conversion factor of miles to km. 1 mile is 1.60934 kilometers
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