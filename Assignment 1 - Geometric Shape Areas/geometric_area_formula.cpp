//      Eric Johnson
//      Assignment 1 - Geometric Shape Areas
//      Calculate and display the areas of standard geometric figures
//      Length of side 1, 2, 3, 4, 5, 6
//      Need a separate area function for each geometric figure
//      Equi-triangle, Square, Regular-pentagon, hexagon, heptagon, octagon.

//      REFERENCE: http://www.cs.colorado.edu/~main/chapter1/temperature.cxx
//                  Areas of Shapes from google
//                  Assistance with cotangent and PI
//                  https://stackoverflow.com/questions/1727881/how-to-use-the-pi-constant-in-c

#include <iostream>
#include <cassert>
#include <cmath>
#include <iomanip>     // Provides setw function for setting output width
#include "geometric_shape.h"
using namespace std;   // Allows all standard library items to be used

//Area formula
double areaTriangle(double s){
    //Precondition: s is a measure of a side of triangle. Cannot be less than 0
    //Postcondition: return value is the area of an equilateral triangle.
    const double MINIMUM_S = 0;
    assert(s >= MINIMUM_S);
    return (sqrt(3)/4 * (s * s));
}

double areaSquare(double s){
    //Precondition: s is a measure of a side of a square. Cannot be less than 0
    //Postcondition: return value is the area of a square.
    const double MINIMUM_S = 0;
    assert (s >= MINIMUM_S);
    return (s*s);
}


double areaPentagon(double s){
    //Precondition: s is a measure of a side of a pentagon. Cannot be less than 0
    //Postcondition: return value is the area of a pentagon.
    const double MINIMUM_S = 0;
    assert (s >= MINIMUM_S);
    return ((0.25) * sqrt(5 * (5 + (2 * sqrt(5)))) * (s * s));
}

double areaHexagon(double s){
    //Precondition: s is a measure of a side of a hexagon. Cannot be less than 0
    //Postcondition: return value is the area of a hexagon.
    const double MINIMUM_S = 0;
    assert (s >= MINIMUM_S);
    return (((3 * sqrt(3)) / 2) * (s * s));
}


double areaHeptagon(double s){
    //Precondition: s is a measure of a side of a heptagon. Cannot be less than 0
    //Postcondition: return value is the area of a heptagon.
    const double MINIMUM_S = 0;
    assert (s >= MINIMUM_S);
    return ((7.0 / 4.0) * (s * s) * (1 / tan(M_PI / 7.0)));
}

double areaOctagon(double s){
    //Precondition: s is a measure of a side of an octagon. Cannot be less than 0
    //Postcondition: return value is the area of an octagon.
    const double MINIMUM_S = 0;
    assert (s >= MINIMUM_S);
    return (2 * (1 + sqrt(2)) * (s * s));
}


//Set up fractions digits
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
}
