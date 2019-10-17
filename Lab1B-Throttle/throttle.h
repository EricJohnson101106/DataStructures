//          Eric Johnson
//          Lab 1B - Create a throttle class


//  #7 - Write a program to declare a throttle, shift the throttle halfway up
//  (to third position), and prints the current flow

//  #8 - Add a new throttle member function that will return true
// if the current flow is more than half. The body of your implementation
// should activate flow and use the guidelines
// for boolean values listed above.


//  #12 - Write a new throttle constructor with two parameters: the total number of
//  positions for the throttle, and its initial position

//      Header File

#ifndef LAB1B_THROTTLE_THROTTLE_H
#define LAB1B_THROTTLE_THROTTLE_H


class throttle {
public:
    //Constructors
    throttle();                         //default
    throttle(int size);                 //set max throttle size
    throttle(int size, int starting_position);       //set max throttle size, initial position

    //Modification
    void shut_off();                    //Initialize to 0
    void shift(int amount);
    //Constants
    double flow() const;
    bool is_on() const;
    bool is_greater_than_half() const;        //For #8
private:
    int position;
    int top_position;
};



#endif //LAB1B_THROTTLE_THROTTLE_H
