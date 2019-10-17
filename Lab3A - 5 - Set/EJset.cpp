//          Eric Johnson
//          Lab 3A - Set

//      Write a new container class called EJset, which is similar to a bag,
//      except that EJset can contain only one copy of any given item.
//      You'll need to change the interface a bit.
//      Make an explicit statement of the invariant of the EJset class.
//      Do a time analysis for each operation. At this point, an efficient implementation is not needed.
//      You may also want to add additional operations to your EJset class, such as an operator for subtraction.

//  INVARIANT for the EJset class:
//      1. The number of items in the set is stored within the private variable used.
//      2. If used is equal to 0, we do not care about any of the data stored within the set array data;
//          for a non-empty set, the items in the set are stored in data[0] through data[used - 1],
//          and we don't care about what is in the rest of the data.
//      3. Capacity for the set is defined in the header file.

//          TC: = Time Complexity Analysis. Posted at end of each function

#include <cassert>
#include <iostream>
#include "EJset.h"

EJset::EJset() {
    //Postcondition: Default Constructor
    used = 0;

    //TC: O(1) Constant
}


void EJset::insert(const EJset::Item &target) {
    //Precondition: Size of set must remain below CAPACITY
    //Postcondition: If the item passed to method is not in the set already,
    //                  then insert into the set
    assert(size() < CAPACITY);

    if (!contains(target)) {
        data[used] = target;
        ++used;
    }
    //TC: O(n) Linear
}

void EJset::remove(const EJset::Item &target) {
    //Postcondition: If the item passed in from the method is within the set,
    //               it will be removed from the set. Will take the last item in the set
    //               and move it to the position where the item was found and then
    //               reduce the count of used in the set by 1 Otherwise, nothing

    for (int i = 0; i < used; i++) {
        if (data[i] == target) {

            data[i] = data[used - 1];
            used--;

        }
    }
    //TC: O(n) Linear
}

void EJset::erase() {
    //Postcondition: Erase all items from the set by changing the value to 0
    for (int i = 0; i < used; i++) {
        data[i] = 0;
    }
    used = 0;
    //TC: O(n^2) Quadratic
}

bool EJset::contains(const EJset::Item &target) const {
    //Postcondition: Returns true if the value passed in from the method is within the set. False otherwise

    for (int i = 0; i < used; i++) {
        if (data[i] == target)
            return true;
    }
    return false;

    //TC: O(n) Linear
}

void EJset::display() {
    //Postcondition: Display the values within the set to the console using cout

    if (used == 0)
        std::cout << "There are no items within the set." << std::endl;
    else
        for (int i = 0; i < used; i++) {
            std::cout << data[i] << " ";
            if (i == used - 1)
                std::cout << std::endl; //If we're at the end of what needs to display, send a line break
        }
    //TC: O(n^2) Quadratic
}


EJset operator+(const EJset &set1, const EJset &set2) {
    //Precondition: The new set cannot exceed the CAPACITY
    //Postcondition: Adds two sets together, excluding any duplicates.

    EJset answer;

    assert(set1.size() + set2.size() <= EJset::CAPACITY);

    for (int i = 0; i < set1.size(); i++) {
        answer.insert(set1.getElement(i));
    }//TC: O(n)

    for (int i = 0; i < set2.size(); i++) {
        answer.insert(set2.getElement(i));

    } //TC: O(n^2)
    return answer;

}

EJset operator-(const EJset &set1, const EJset &set2) {
    //Postcondition: Adds two sets together, excluding any duplicates.

    EJset answer;

    for (int i = 0; i < set1.size(); i++) {
        answer.insert(set1.getElement(i));
    } //TC: O(n)

    for (int i = 0; i < set2.size(); i++) {
        answer.remove(set2.getElement(i));

    }   //TC: O(n^2)
    return answer;
}

bool operator==(const EJset &set1, const EJset &set2) {
    //Postcondition: Compares if two sets are the same size. If so, compares if the sets are ordered the same.
    if (set1.size() != set2.size())
        return false;

    for (int i = 0; i < set1.size(); i++){
        if (set1.getElement(i) != set2.getElement(i))
            return false;
    }
    return true;
}
