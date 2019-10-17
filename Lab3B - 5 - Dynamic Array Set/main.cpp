//          Eric Johnson
//          Lab 3A - Set

//      Write a new container class called EJDynamicSet, which is similar to a bag,
//      except that EJDynamicSet can contain only one copy of any given item.
//      You'll need to change the interface a bit.
//      Make an explicit statement of the invariant of the EJDynamicSet class.
//      Do a time analysis for each operation. At this point, an efficient implementation is not needed.
//      You may also want to add additional operations to your EJDynamicSet class, such as an operator for subtraction.

#include <iostream>
#include "EJDynamicSet.h"

using namespace std;

int main() {

    //Calling the constructor for a set and then displaying it
    cout << "Constructing using Default Constructor: " << endl;
    EJDynamicSet test1;
    test1.display();
    cout << "Used: " << test1.size() << endl;
    cout << "\n======================================\n" << endl;

    //Add some numbers to the set
    cout << "Adding 3 numbers to the set: " << endl;

    test1.insert(1);
    test1.insert(3);
    test1.insert(2);
    test1.display();
    cout << "\n======================================\n" << endl;

    //Test to see if we can add 1, 3, and 2 to the set again
    cout << "Checking if we can add the numbers to the set again (We shouldn't): " << endl;
    test1.insert(1);
    test1.insert(3);
    test1.insert(2);
    test1.display();
    cout << "\n======================================\n" << endl;

    //Test Removing of 3 from the set
    cout << "Attempting to remove '3' from the set " << endl;
    test1.remove(3);
    test1.display();

    cout << "\n======================================\n" << endl;

    cout << "Constructing a second object and adding numbers to it: " << endl;
    EJDynamicSet test2;
    test2.insert(4);
    test2.insert(5);
    test2.insert(6);

    test2.display();

    cout << "\n======================================\n" << endl;
    cout << "Testing the operators : " << endl;
    EJDynamicSet addOpTest = (test1 + test2);
    cout << "Test + Operator: ";
    addOpTest.display();


    EJDynamicSet subOpTest = (test1 - test2);
    cout << "Test - Operator: ";
    subOpTest.display();

    cout << "Test == Operator: " << (test1 == test2) << endl;

    cout << "\n======================================\n" << endl;

    //Test erasing the set
    cout << "Testing the Erase/ Clear set function on first set. Should return an empty set" << endl;
    test1.erase();
    test1.display();


    cout << "\n======================================\n" << endl;
    //Testing Dynamic
    EJDynamicSet DynTest;

    for (int i = 0; i < 35; ++i){
        DynTest.insert(i);
    }
    cout << "Adding 35 numbers to the set (Previous cap was 30"  << endl;
    DynTest.display();

    cout << "\nAdding more numbers to the set to demonstrate Dynamic Allocation" << endl;
    for (int i = 0; i < 50; ++i){
        DynTest.insert(i);
    }
    DynTest.display();

    return 0; //Exit success
}