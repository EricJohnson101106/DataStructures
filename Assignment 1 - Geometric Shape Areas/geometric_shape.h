//      Eric Johnson
//      Assignment 1 - Geometric Shape Areas
//      Calculate and display the areas of standard geometric figures
//      Length of side 1, 2, 3, 4, 5, 6
//      Need a separate area function for each geometric figure
//      Equi-triangle, Square, Regular-pentagon, hexagon, heptagon, octagon.

//      Header File

//      REFERENCE: http://www.cs.colorado.edu/~main/chapter1/temperature.cxx
//                  Areas of Shapes from google
//                  Assistance with cotangent and PI
//                  https://stackoverflow.com/questions/1727881/how-to-use-the-pi-constant-in-c


#ifndef ASSIGNMENT_1_GEOMETRIC_SHAPE_AREAS_GEOMETRIC_SHAPE_H
#define ASSIGNMENT_1_GEOMETRIC_SHAPE_AREAS_GEOMETRIC_SHAPE_H

double areaTriangle(double s);

double areaSquare(double s);

double areaPentagon(double s);

double areaHexagon(double s);

double areaHeptagon(double s);

double areaOctagon(double s);

void setup_cout_fractions(int fraction_digits);

#endif //ASSIGNMENT_1_GEOMETRIC_SHAPE_AREAS_GEOMETRIC_SHAPE_H
