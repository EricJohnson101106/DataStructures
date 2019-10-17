//          Eric Johnson
//          Lab 3A - Set

//      Write a new container class called EJDynamicSet, which is similar to a bag,
//      except that EJDynamicSet can contain only one copy of any given item.
//      You'll need to change the interface a bit.
//      Make an explicit statement of the invariant of the EJDynamicSet class.
//      Do a time analysis for each operation. At this point, an efficient implementation is not needed.
//      You may also want to add additional operations to your EJDynamicSet class, such as an operator for subtraction.



#ifndef LAB3B_5_SET_SET_H
#define LAB3B_5_SET_SET_H

#include <cstdlib>

class EJDynamicSet {
public:
    typedef int valueType;
    typedef size_t sizeType;
    static const sizeType DEFAULT_CAPACITY = 30;

    //Constructors
    EJDynamicSet(sizeType initial_capacity = DEFAULT_CAPACITY);
    EJDynamicSet(const EJDynamicSet& source);
    ~EJDynamicSet();    //Destructor

    //Modifiers
    void reserve(sizeType new_capacity);
    void insert(const valueType& target);
    void remove(const valueType& target);
    void erase();

    void operator +=(const EJDynamicSet& addend);
    void operator =(const EJDynamicSet& source);

    inline valueType getElement(valueType index) const {return data[index];};
    inline sizeType size() const {return used;};

    bool contains(const valueType& target) const;
    void display();

private:
    valueType *data;     //pointer to dynamic array
    sizeType used;    //how much current array is being used
    sizeType capacity; //track current capacity of array

};

//Operators for set
EJDynamicSet operator+(const EJDynamicSet &set1, const EJDynamicSet &set2);
EJDynamicSet operator-(const EJDynamicSet &set1, const EJDynamicSet &set2);
bool operator==(const EJDynamicSet &set1, const EJDynamicSet &set2);


#endif //LAB3B_5_SET_SET_H
