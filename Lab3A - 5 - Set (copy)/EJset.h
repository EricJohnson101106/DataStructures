//          Eric Johnson
//          Lab 3A - Set

//      Write a new container class called EJset, which is similar to a bag,
//      except that EJset can contain only one copy of any given item.
//      You'll need to change the interface a bit.
//      Make an explicit statement of the invariant of the EJset class.
//      Do a time analysis for each operation. At this point, an efficient implementation is not needed.
//      You may also want to add additional operations to your EJset class, such as an operator for subtraction.



#ifndef LAB3A_5_SET_SET_H
#define LAB3A_5_SET_SET_H

#include <cstdlib>

class EJset {
public:
    static const size_t CAPACITY = 30;
    typedef int Item;

    //Constructors
    EJset();

    //Modifiers
    void insert(const Item& target);
    void remove(const Item& target);
    void erase();

    inline Item getElement(Item index) const {return data[index];};
    inline size_t size() const {return used;};

    bool contains(const Item& target) const;
    void display();

private:
    Item data[CAPACITY];
    size_t used;

};

//Operators for set
EJset operator+(const EJset &set1, const EJset &set2);
EJset operator-(const EJset &set1, const EJset &set2);
bool operator==(const EJset &set1, const EJset &set2);


#endif //LAB3A_5_SET_SET_H
