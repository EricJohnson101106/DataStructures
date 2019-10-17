//          Eric Johnson
//          Assignment 1B - 6 - Line Segment

//      In 3D space, a line segment is defined by its two endpoints. Specify, design, and implement
//      a class for a line segment. The class should have two private variables that are points
//      from the previous project.

#ifndef ASSIGNMENT1B_5_EJLINE_SEGMENT_H
#define ASSIGNMENT1B_5_EJLINE_SEGMENT_H

#include "EJpoint.h"

class EJline_segment {
public:
    //Constructors
    EJline_segment();           //Default Constructor, All coordinates to 0

    EJline_segment(EJpoint newPointA, EJpoint newPointB);

    EJline_segment(double A_x, double A_y, double A_z, double B_x, double B_y, double B_z);

    double length() const;

    EJpoint midpoint();

private:
    EJpoint pointA;     //Prototyping an EJpoint object for the two endpoints of a line segment

    EJpoint pointB;
};


#endif //ASSIGNMENT1B_5_EJLINE_SEGMENT_H
