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

//          Class File

//      References: http://www.cplusplus.com/forum/articles/14631/
//                  http://www.cplusplus.com/reference/string/to_string/

//      Private variable clock minutes holds the necessary information about the clock.
//      60 min * 24 hours = 1440 minutes each day. 1440 / 2 = 720 minutes (before noon or AM).
//      The advance_time function will trim any days from the input to allow for going back in time 10 days, for example


#include <iostream>
#include <cassert>
#include <string>
#include "Clock.h"
using namespace std;


Clock::Clock(){
    //Postcondition: Default constructor for a Clock. Initializes to midnight (12:00 AM)
    clockMinute = 0;
}

Clock::Clock(int hour, int minute, bool morning){
    //Precondition: 1 >= hour >= 12
    //              0 >= minute >= 59
    //Precondition: Construct Clock object with values passed into constructor
    assert(hour >= 1);
    assert(hour <= 12);
    assert(minute >= 0);
    assert(minute <= 59);
    clockMinute = (morning ? 0 : 720) + (60 * hour) + minute;
}

void Clock::set_time(int hour, int minute, bool morning) {
    //Precondition: 1 >= hour >= 12
    //              0 >= minute >= 59
    //Precondition: Will change the value of clockHour to hour,
    //              clockMinute to minute, isMorning to morning.
    assert(hour >= 1);
    assert(hour <= 12);
    assert(minute >= 0);
    assert(minute <= 59);

    clockMinute = (morning ? 0 : 720) + (60 * hour) + minute;
}

void Clock::advance_time(int minutes) {
    //Precondition: None
    //Postcondition: Move the Clock's time by an amount entered (Negative will move back), trimming excess days
    clockMinute = (clockMinute + (minutes < 0 ? 1440 + (minutes % 1440) : minutes)) % 1440;
}


int Clock::get_hour() const {
    //Precondition: None
    //Postcondition: Return the current hour in the Clock. 5:36 PM returns 5.
    int hour;
    hour = (clockMinute / 60) - (is_before_noon() ? 0 : 12);
    return (hour == 0 ? 12 : hour);     //If Midnight, return 12, else return the hour (Fixing edge case)
}

int Clock::get_minute() const {
    //Precondition: None
    //Postcondition: Return the current minute in the Clock (12:36 returns 36)
    return (clockMinute % 60);
}

bool Clock::is_before_noon() const {
    //Precondition: None
    //Postcondition: Return true if the time is between 12:00 AM and 11:59 AM)
    return (clockMinute < 720);
}


string Clock::get_time() const {
    //Postcondition: Return a string of the current time (Hour: Minute AM/PM ie 10:08 PM)
    string time;
    time = to_string(get_hour()) + ":" + (get_minute() < 10 ? "0" : "") + to_string(get_minute()) + " " + (is_before_noon() ? "AM" : "PM");

    return time;
}




