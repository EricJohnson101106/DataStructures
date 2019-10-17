//      Eric Johnson
//      Assignment 1 - Create a conversion table for miles to kilometers
//      0 - 90 incrementing by 10. Display both num of miles and num of km on same line

//      Implementation File

//      REFERENCE: http://www.cs.colorado.edu/~main/chapter1/temperature.cxx
//              Changed method to fit assignment. Changed variable to m.
//              Changed Label1 and Label2 to be a char array. Changed DIGITS to 2. Updated table begin and end.


#include <iostream>    // Provides cout
#include <iomanip>     // Provides setw function for setting output width
#include <cstdlib>     // Provides EXIT_SUCCESS
#include <cassert>     // Provides assert function
#include "miles_to_kilometers.h"
using namespace std;   // Allows all standard library items to be used


int main( )
{
    const char   HEADING1[]  =   "   Miles"; // Heading for table's 1st column
    const char   HEADING2[]  = "\t\tKilometers"; // Heading for table's 2nd column
    const char   LABEL1[]    =        " mi"; // Label for numbers in 1st column
    const char   LABEL2[]    =        " km"; // Label for numbers in 2nd column
    const double TABLE_BEGIN =            0; // The table's first feet measurement
    const double TABLE_END   =         90.0; // The table's final feet measurement
    const double TABLE_STEP  =         10.0; // Increment between temperatures
    const int    WIDTH       =            9; // Number chars in output numbers
    const int    DIGITS      =            2; // Number digits right of decimal pt

    double value1;  // A value from the table's first column
    double value2;  // A value from the table's second column

    // Set up the output for fractions and print the table headings.
    setup_cout_fractions(DIGITS);
    cout << "CONVERSIONS from " << TABLE_BEGIN << " to " << TABLE_END << endl;
    cout << HEADING1 << "  " << HEADING2 << endl;

    // Each iteration of the loop prints one line of the table.
    for (value1 = TABLE_BEGIN; value1 <= TABLE_END; value1 += TABLE_STEP)
    {
        value2 = miles_to_kilometers(value1);
        cout << setw(WIDTH) << value1 << LABEL1 << "  ";
        cout << setw(WIDTH) << value2 << LABEL2 << endl;
    }

    return EXIT_SUCCESS;
};