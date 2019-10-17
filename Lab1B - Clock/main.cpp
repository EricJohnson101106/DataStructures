//          Eric Johnson
//          Lab1B - 19 Clock

//          #19 - Design and implement a class called Clock. A Clock object
//          holds one instance of a time value such as 9:48 PM.
//          have at least these public member functions:
//          * A Default constructor that sets the time to midnight
//          * A function to explicitly assign a given time (you will havce to give
//          some thought to appropriate paramters for this functions)
//          * Functions to retrieve informatin: the current hour, the current minute,
//          and a boolean function to determine whether the time is at or before noon.
//          * A function to advance the time forward by a given number of minutes


//      Reference: https://stackoverflow.com/questions/28135075/error-expected-before-defining-object-of-class

#include <iostream>
#include "Clock.h"
using namespace std;

int main() {
    Clock testDefault;
    cout << "Testing Default Constructor: " << testDefault.get_time() << endl;
    testDefault.advance_time(2 * 60);
    cout << "Advancing Default Constructor by 2 hours: " << testDefault.get_time() << endl;

    Clock test2(5, 6, false);
    cout << "\nTesting Constructor at 5:06 PM: " << test2.get_time() << endl;
    test2.advance_time(2 * 60);
    cout << "Advancing Test2 by 2 hours: " << test2.get_time() << endl;
    test2.advance_time(-11 * 60);
    cout << "Advancing Test2 by -11 hours: " << test2.get_time() << endl;
    test2.advance_time(-70 * 60);
    cout << "Advancing Test2 by -70 hours: " << test2.get_time() << endl;



    return 0;
}

