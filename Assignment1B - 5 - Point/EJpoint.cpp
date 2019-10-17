//          Eric Johnson
//          Assignment 1B - 5

//      Specify, design, and implement a class that can
//      be used to keep track of the position of a EJpoint in 3D space.
//      Include member functions to set a EJpoint to a specified location,
//      to shift a EJpoint A given amount along one of the axes, and to
//      retrieve the coordinates of a EJpoint. Also provide member functions
//      that will rotate the EJpoint by a specified angle around a specified axis.


#include <cmath>
#include "EJpoint.h"

//Constructors
EJpoint::EJpoint(){
    //Postcondition: Default Constructor for a EJpoint in 3D space. Initialize X, Y, Z to 0, 0, 0.
    x = 0;
    y = 0;
    z = 0;
}

EJpoint::EJpoint(double initial_x, double initial_y, double initial_z){
    //Postcondition: Constructor for a EJpoint in 3D space.
    //          Initialize X, Y, Z to values passed to method.
    x = initial_x;
    y = initial_y;
    z = initial_z;
}

//Setters
void EJpoint::set_x(double new_x) {
    x = new_x;
}

void EJpoint::set_y(double new_y) {
    y = new_y;
}

void EJpoint::set_z(double new_z) {
    z = new_z;
}

//Shift along axis by amount passsed to method
void EJpoint::shift_x(double new_x) {
    x += new_x;
}

void EJpoint::shift_y(double new_y) {
    y += new_y;
}

void EJpoint::shift_z(double new_z) {
    z += new_z;
}

void EJpoint::shift(double new_x, double new_y, double new_z){
    x += new_x;
    y += new_y;
    z += new_z;
}

//Rotate
void EJpoint::rotate_x(double angle) {
    //Postcondition: Rotate the EJpoint by a specified angle around a specified axis
    double xPrime, yPrime, zPrime, theta;
    theta = (angle * M_PI) / 180; //Conversion of angle to radians

    xPrime = x;
    yPrime = y * cos(theta) - z * sin(theta);
    zPrime = y * sin(theta) + z * cos(theta);

    x = xPrime;
    y = yPrime;
    z = zPrime;
}

void EJpoint::rotate_y(double angle) {
    //Postcondition: Rotate the EJpoint by a specified angle around a specified axis
    double xPrime, yPrime, zPrime, theta;
    theta = (angle * M_PI) / 180; //Conversion of angle to radians

    xPrime = x * cos(theta) + z * sin(theta);
    yPrime = y;
    zPrime = z * cos(theta) - x * sin(theta);

    x = xPrime;
    y = yPrime;
    z = zPrime;
}

void EJpoint::rotate_z(double angle) {
    //Postcondition: Rotate the EJpoint by a specified angle around a specified axis
    double xPrime, yPrime, zPrime, theta;
    theta = (angle * M_PI) / 180; //Conversion of angle to radians

    xPrime = x * cos(theta) - y * sin(theta);
    yPrime = x * sin(theta) + y * cos(theta);
    zPrime = z;

    x = xPrime;
    y = yPrime;
    z = zPrime;

}