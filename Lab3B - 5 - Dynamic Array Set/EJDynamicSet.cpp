//          Eric Johnson
//          Lab 3A - Set

//      Write a new container class called EJDynamicSet, which is similar to a bag,
//      except that EJDynamicSet can contain only one copy of any given item.
//      You'll need to change the interface a bit.
//      Make an explicit statement of the invariant of the EJDynamicSet class.
//      Do a time analysis for each operation. At this point, an efficient implementation is not needed.
//      You may also want to add additional operations to your EJDynamicSet class, such as an operator for subtraction.

//  INVARIANT for the EJDynamicSet class:
//      1. The number of items in the set is stored within the private variable used.
//      2. If used is equal to 0, we do not care about any of the data stored within the set array data;
//          for a non-empty set, the items in the set are stored in data[0] through data[used - 1],
//          and we don't care about what is in the rest of the data.
//      3. Capacity for the set is defined in the header file.

//          TC: = Time Complexity Analysis. Posted at end of each function

#include <cassert>
#include <iostream>
#include <algorithm>    //provides copy using std namespace

#include "EJDynamicSet.h"


EJDynamicSet::EJDynamicSet(EJDynamicSet::sizeType initial_capacity) {
    data = new valueType[initial_capacity];
    capacity = initial_capacity;
    used = 0;
}


EJDynamicSet::EJDynamicSet(const EJDynamicSet &source) {
    //Postcondition: Copy constructor for EJDynamicSet
    //      Library:    Algorithm
    data = new valueType[source.capacity];
    capacity = source.capacity;
    used = source.used;
    std::copy(source.data, source.data + used, data);
}

EJDynamicSet::~EJDynamicSet() {
    //Postcondition: Destructor for EJDynamicSet
    delete[] data;
}

void EJDynamicSet::reserve(EJDynamicSet::sizeType new_capacity) {
    //Postcondition: The set's current capacity is changed to the new_capacity
    //               (but not less than the number of items already in the set).
    //  Library Used:   <algorithm> using std namespace
    //Reference:    pg. 179 and pg 193
    valueType *larger_array;

    if (new_capacity == capacity)
        return; //Allocated memory is already the right size

    if (new_capacity < used)
        new_capacity = used; //Can't allocate less than we are using

    larger_array = new valueType[new_capacity];
    std::copy(data, data + used, larger_array);
    delete[] data;
    data = larger_array;
    capacity = new_capacity;

}

void EJDynamicSet::insert(const EJDynamicSet::valueType &target) {
    //Postcondition: If the item passed to method is not in the set already,
    //                  then insert into the set
    if (used == capacity)
        reserve(used + 1);
    if (!contains(target)) {
        data[used] = target;
        ++used;
    }

    //TC: O(n) Linear
}

void EJDynamicSet::remove(const EJDynamicSet::valueType &target) {
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

void EJDynamicSet::erase() {
    //Postcondition: Erase all items from the set by changing the value to 0
    for (int i = 0; i < used; i++) {
        data[i] = 0;
    }
    used = 0;
    //TC: O(n^2) Quadratic
}

bool EJDynamicSet::contains(const EJDynamicSet::valueType &target) const {
    //Postcondition: Returns true if the value passed in from the method is within the set. False otherwise

    for (int i = 0; i < used; i++) {
        if (data[i] == target)
            return true;
    }
    return false;

    //TC: O(n) Linear
}

void EJDynamicSet::display() {
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

void EJDynamicSet::operator+=(const EJDynamicSet &addend) {
    //Refenrence:   pg 194

    //check for enough room
    if (used + addend.used > capacity)
        reserve(used + addend.used);

    std::copy(addend.data, addend.data + addend.used, data + used);
    used += addend.used;
}

void EJDynamicSet::operator=(const EJDynamicSet &source) {
    //  Library used:   <algorithm> with std namespace
    //  Reference:  pg 190

    valueType *new_data;

    //check for self assignment
    if (this == &source)
        return;

    if (capacity != source.capacity) {
        new_data = new valueType[source.capacity];
        delete[] data;
        data = new_data;
        capacity = source.capacity;
    }

    used = source.used;
    std::copy(source.data, source.data + used, data);
}


EJDynamicSet operator+(const EJDynamicSet &set1, const EJDynamicSet &set2) {
    //Postcondition: Adds two sets together, excluding any duplicates.

    EJDynamicSet answer;


    for (int i = 0; i < set1.size(); i++) {
        answer.insert(set1.getElement(i));
    }//TC: O(n)

    for (int i = 0; i < set2.size(); i++) {
        answer.insert(set2.getElement(i));

    } //TC: O(n^2)
    return answer;

}

EJDynamicSet operator-(const EJDynamicSet &set1, const EJDynamicSet &set2) {
    //Postcondition: Adds two sets together, excluding any duplicates.

    EJDynamicSet answer;

    for (int i = 0; i < set1.size(); i++) {
        answer.insert(set1.getElement(i));
    } //TC: O(n)

    for (int i = 0; i < set2.size(); i++) {
        answer.remove(set2.getElement(i));

    }   //TC: O(n^2)
    return answer;
}

bool operator==(const EJDynamicSet &set1, const EJDynamicSet &set2) {
    //Postcondition: Compares if two sets are the same size. If so, compares if the sets are ordered the same.
    if (set1.size() != set2.size())
        return false;

    for (int i = 0; i < set1.size(); i++) {
        if (set1.getElement(i) != set2.getElement(i))
            return false;
    }
    return true;
}
