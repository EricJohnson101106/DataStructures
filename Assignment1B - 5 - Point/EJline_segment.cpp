//          Eric Johnson
//          Assignment 1B - 6 - Line Segment

//      In 3D space, a line segment is defined by its two endpoints. Specify, design, and implement
//      a class for a line segment. The class should have two private variables that are points
//      from the previous project.

//      Class File

//  References:        http://mathforum.org/library/drmath/view/65712.html
//                     http://www.cplusplus.com/reference/cmath/pow/

#include <cmath>
#include "EJline_segment.h"
#include "EJpoint.h"

EJline_segment::EJline_segment() {
    //Postcondition: Default constructor. Sets both end points to (0,0,0)
    pointA = EJpoint(0, 0, 0);
    pointB = EJpoint(0, 0, 0);
}

EJline_segment::EJline_segment(EJpoint newPointA, EJpoint newPointB) {
    //Postcondition: Construct a line segment with parameters that are two different EJPoint objects
    pointA = newPointA;
    pointB = newPointB;

}

EJline_segment::EJline_segment(double A_x, double A_y, double A_z, double B_x, double B_y, double B_z) {
    //Postcondition: Construct a line segment with parameters passed in that are coordinates for the two endpoints
    pointA = EJpoint(A_x, A_y, A_z);
    pointB = EJpoint(B_x, B_y, B_z);
}

double EJline_segment::length() const {
    //Postcondition: Return the length of the line segment based on the two end points passed into the method
    return (
            sqrt(
                    pow((pointA.get_z() - pointB.get_z()), 2) +
                    pow((pointA.get_x() - pointB.get_x()), 2) +
                    pow((pointA.get_y() - pointB.get_y()), 2)
            )

    );
}

EJpoint EJline_segment::midpoint() {
    //Postcondition: Return an EJpoint object that holds the values of the midpoint
    //               of a line segment with endpoints passed into method


    return EJpoint((pointA.get_x() + pointB.get_x()) / 2,
                   (pointA.get_y() + pointB.get_y()) / 2,
                   (pointA.get_z() + pointB.get_z()) / 2);
}