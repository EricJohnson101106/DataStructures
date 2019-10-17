//      Eric Johnson
//      Lab1a - 2
//      #8 from textbook. Write program to print a conversion table from feet to meters using
//      the temperature conversion program as starting point.

//      Implementation File

//      REFERENCE: http://www.cs.colorado.edu/~main/chapter1/temperature.cxx

// File: temperature.cxx       <== Old file heading
// This program prints a table to convert numbers from one unit to another.
// The program illustrates some implementation techniques.

#include <iostream>    // Provides cout
#include <iomanip>     // Provides setw function for setting output width
#include <cassert>     // Provides assert function
#include "Lab1A-2.h"   // Header file
using namespace std;   // Allows all standard library items to be used


int main( )
{
    const char   HEADING1[]  = "   Feet"; // Heading for table's 1st column
    const char   HEADING2[]  = "\t\tMeters"; // Heading for table's 2nd column
    const char   LABEL1[]    =         "ft"; // Label for numbers in 1st column
    const char   LABEL2      =          'm'; // Label for numbers in 2nd column
    const double TABLE_BEGIN =            0; // The table's first feet measurement
    const double TABLE_END   =        100.0; // The table's final feet measurement
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
        value2 = feet_to_meters(value1);
        cout << setw(WIDTH) << value1 << LABEL1 << "  ";
        cout << setw(WIDTH) << value2 << LABEL2 << endl;
    }

    return EXIT_SUCCESS;
};