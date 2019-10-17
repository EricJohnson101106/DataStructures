//          Eric Johnson
//          Assignment 1B - 5

//      Specify, design, and implement a class that can
//      be used to keep track of the position of a EJpoint in 3D space.
//      Include member functions to set a EJpoint to a specified location,
//      to shift a EJpoint A given amount along one of the axes, and to
//      retrieve the coordinates of a EJpoint. Also provide member functions
//      that will rotate the EJpoint by a specified angle around a specified axis.


#ifndef ASSIGNMENT1B_5_POINT_H
#define ASSIGNMENT1B_5_POINT_H


class EJpoint {
public:
    //Constructors
    EJpoint();                            //Default Constructor
    EJpoint(double initial_x, double initial_y, double initial_z);

    //Getters
    double get_x() const {return x;};
    double get_y() const {return y;};
    double get_z() const {return z;};
    //Setters
    void set_x(double new_x);
    void set_y(double new_y);
    void set_z(double new_z);
    //Shift along axis by amount given passed to method
    void shift_x(double new_x);
    void shift_y(double new_y);
    void shift_z(double new_z);
    void shift(double new_x, double new_y, double new_z);
    //Rotators
    void rotate_x(double angle);
    void rotate_y(double angle);
    void rotate_z(double angle);
private:
    //Coordinates of EJpoint in 3D space
    double x;
    double y;
    double z;
};


#endif //ASSIGNMENT1B_5_POINT_H
