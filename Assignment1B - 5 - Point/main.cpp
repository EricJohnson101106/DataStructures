//          Eric Johnson
//          Assignment 1B - 5

//      Specify, design, and implement a class that can
//      be used to keep track of the position of a EJpoint in 3D space.
//      Include member functions to set a EJpoint to a specified location,
//      to shift a EJpoint A given amount along one of the axes, and to
//      retrieve the coordinates of a EJpoint. Also provide member functions
//      that will rotate the EJpoint by a specified angle around a specified axis.


#include <iostream>
#include "EJpoint.h"
#include "EJline_segment.h"

using namespace std;


int main() {
    cout << "Initialize a point to x = 2.5, y = 0, z = 2: " << endl;
    EJpoint testX(2.5, 0, 2);

    cout << "Return the coordinates of the point: " << endl;
    cout << "X: " << testX.get_x() << endl;
    cout << "Y: " << testX.get_y() << endl;
    cout << "Z: " << testX.get_z() << endl;

    cout << "Rotate point 80 degrees across X-axis: " << endl;
    testX.rotate_x(80);

    cout << "Return the coordinates of the point: " << endl;
    cout << "X: " << testX.get_x() << endl;
    cout << "Y: " << testX.get_y() << endl;
    cout << "Z: " << testX.get_z() << endl;

    cout << "=============================================" << endl;

    cout << "Initialize a point to x = 2.5, y = 0, z = 2: " << endl;
    EJpoint testY(2.5, 0, 2);

    cout << "Return the coordinates of the point: " << endl;
    cout << "X: " << testY.get_x() << endl;
    cout << "Y: " << testY.get_y() << endl;
    cout << "Z: " << testY.get_z() << endl;

    cout << "Rotate point 80 degrees across Y-axis: " << endl;
    testY.rotate_y(80);

    cout << "Return the coordinates of the point: " << endl;
    cout << "X: " << testY.get_x() << endl;
    cout << "Y: " << testY.get_y() << endl;
    cout << "Z: " << testY.get_z() << endl;

    cout << "=============================================" << endl;

    cout << "Initialize a point to x = 2.5, y = 0, z = 2: " << endl;
    EJpoint testZ(2.5, 0, 2);

    cout << "Return the coordinates of the point: " << endl;
    cout << "X: " << testZ.get_x() << endl;
    cout << "Y: " << testZ.get_y() << endl;
    cout << "Z: " << testZ.get_z() << endl;

    cout << "Rotate point 80 degrees across Z-axis: " << endl;
    testZ.rotate_z(80);

    cout << "Return the coordinates of the point: " << endl;
    cout << "X: " << testZ.get_x() << endl;
    cout << "Y: " << testZ.get_y() << endl;
    cout << "Z: " << testZ.get_z() << endl;


    cout << "\n=============================================" << endl;
    cout << "Testing line segments. First will be Default: " << endl;
    EJline_segment line1;
    EJpoint line1midpoint;
    line1midpoint = line1.midpoint();
    cout << "Length: " << line1.length() << "\tMidpoint: " <<
         line1midpoint.get_x() << ", " <<
         line1midpoint.get_y() << ", " <<
         line1midpoint.get_z() << endl;


    cout << "=============================================" << endl;
    cout << "New line. PointA = (1, 0, 0). PointB = (-1, 0, 0) " << endl;
    EJline_segment line2(1, 0, 0, -1, 0, 0);
    EJpoint line2midpoint;
    line2midpoint = line2.midpoint();
    cout << "Length: " << line2.length() << "\tMidpoint: " <<
         line2midpoint.get_x() << ", " <<
         line2midpoint.get_y() << ", " <<
         line2midpoint.get_z() << endl;


}