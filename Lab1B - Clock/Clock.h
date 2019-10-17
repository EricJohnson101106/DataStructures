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

//          Header File

#ifndef LAB1B_CLOCK_CLOCK_H
#define LAB1B_CLOCK_CLOCK_H

#include <iostream>
#include <string>
using namespace std;

class Clock {
public:
    //Constructor
    Clock();
    Clock(int hour, int minute, bool morning);

    //Modifiers
    void set_time(int hour, int minute, bool morning);
    void advance_time(int minutes);

    //Constants
    int get_clockMinute() const {return clockMinute;}; //DEBUG
    int get_hour() const;
    int get_minute() const;
    bool is_before_noon() const;
    string get_time() const;

private:
    int clockMinute;
};


#endif //LAB1B_CLOCK_CLOCK_H
