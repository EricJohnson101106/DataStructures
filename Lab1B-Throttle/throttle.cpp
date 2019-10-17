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

//      Class File

#include <cassert>
#include "throttle.h"

throttle::throttle(){
    top_position = 1;
    position = 0;
}

throttle::throttle(int size){
//Precondition: Size must be above 0
//Postcondition: Construct a throttle object with a top_position of size size and initialize
//  the position of the throttle at 0
    assert(size > 0);
    top_position = size;
    position = 0;
}


//Lab1B #12
throttle::throttle(int size, int starting_position) {
//Precondition: size must be above 0. starting_position must be above 0 but below size
//Postcondition: Construct a throttle object with a top_position of size size and
//  initialize the position of the throttle at starting_position
    assert(size > 0);
    assert(starting_position >= 0);
    assert(starting_position <= size);
    top_position = size;
    position = starting_position;
}

void throttle::shut_off() {
    //Precondition: None
    //Postcondition: Shuts the throttle down by setting the position to 0 (No flow)
    position = 0;
}

void throttle::shift(int amount){
//  Precondition: None
//  Postcondition:  Shifts the throttle by an amount specified by the user.
//  if amount is less than 0, set to 0. If above throttle maximum, set to max.
    position += amount;

    if (position < 0)
        position = 0;
    else if (position > top_position)
        position = top_position;
}

double throttle::flow() const {
// Precondition: None
// Postcondition: Returns the current flow rate as a double value. Flow / Max
    return (position / double(top_position));
}

bool throttle::is_on() const {
//  Precondition: None
//  Postcondition: Returns a boolean value of true if the flow rate is above 0 and false if 0.
    return (flow() > 0);
}

bool throttle::is_greater_than_half() const{
//Precondition: None
//Postcondition: Returns a boolean value true if the flow is greater than half of the max
    return (flow() > 0.5);
}


