//      Eric Johnson
//      Assignment 1 - Geometric Shape Areas
//      Calculate and display the areas of standard geometric figures
//      Length of side 1, 2, 3, 4, 5, 6
//      Need a separate area function for each geometric figure
//      Equi-triangle, Square, Regular-pentagon, hexagon, heptagon, octagon.

//      Implementation File

//      REFERENCE: http://www.cs.colorado.edu/~main/chapter1/temperature.cxx
//                  Areas of Shapes from google
//                  Assistance with cotangent and PI
//                  https://stackoverflow.com/questions/1727881/how-to-use-the-pi-constant-in-c

#include <iostream>
#include <iomanip>     // Provides setw function for setting output width
#include "geometric_shape.h"
using namespace std;   // Allows all standard library items to be used

int main( )
{
    const char   HEADING1[]  = "Side Length"; // Heading for table's 1st column
    const char   HEADING2[]  = "\tTriangle"; // Heading for table's 2nd column
    const char   HEADING3[]  = "\tSquare"; // Heading for table's 3rd column
    const char   HEADING4[]  = "\tPentagon"; // Heading for table's 4th column
    const char   HEADING5[]  = "\tHexagon"; // Heading for table's 5th column
    const char   HEADING6[]  = "\tHeptagon"; // Heading for table's 6th column
    const char   HEADING7[]  = "\tOctagon"; // Heading for table's 7th column

    const double TABLE_BEGIN =            1; // The table's first Celsius temp.
    const double TABLE_END   =            6; // The table's final Celsius temp.
    const double TABLE_STEP  =            1; // Increment between temperatures
    const int    WIDTH       =           10; // Number chars in output numbers
    const int    DIGITS      =            2; // Number digits right of decimal pt

    double value1;  // A value from the table's first column
    double value2;  // Triangle
    double value3;  // Square
    double value4;  // Pentagon
    double value5;  // Hexagon
    double value6;  // Heptagon
    double value7;  // Octagon

    // Set up the output for fractions and print the table headings.
    setup_cout_fractions(DIGITS);
    cout << "Area of Geometric Figures from side of length " << TABLE_BEGIN << " to " << TABLE_END << endl;
    cout << HEADING1 << "  " << HEADING2 << "  " << HEADING3 << "  " << HEADING4 << "  " << HEADING5;
    cout << "  " << HEADING6 << "  " << HEADING7 << endl;

    // Each iteration of the loop prints one line of the table.
    for (value1 = TABLE_BEGIN; value1 <= TABLE_END; value1 += TABLE_STEP)
    {
        value2 = areaTriangle(value1);
        value3 = areaSquare(value1);
        value4 = areaPentagon(value1);
        value5 = areaHexagon(value1);
        value6 = areaHeptagon(value1);
        value7 = areaOctagon(value1);

        cout << setw(WIDTH) << value1  << "  ";
        cout << setw(WIDTH) << value2  << "  ";
        cout << setw(WIDTH) << value3  << "  ";
        cout << setw(WIDTH) << value4  << "  ";
        cout << setw(WIDTH) << value5  << "  ";
        cout << setw(WIDTH) << value6  << "  ";
        cout << setw(WIDTH) << value7 << endl;
    }

    return 0;
}