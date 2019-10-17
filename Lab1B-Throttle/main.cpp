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

//      Implementation File

#include <iostream>
#include "throttle.h"
using namespace std;


int main() {
    throttle test(6);

    //  Lab1B #7
    test.shut_off();    //Sets throttle test to 0
    test.shift(3);      //Sets throttle test to 3
    cout << "Lab 1B #7:" << endl;
    cout << "The flow is " << test.flow() << endl;

    //  Lab1B #8
    cout << "\nLab 1B #8:" << endl;
    cout << "Is the flow more than half? " << test.is_greater_than_half() << endl;

    return 0;
}
