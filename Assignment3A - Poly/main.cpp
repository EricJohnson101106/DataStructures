//      Eric Johnson
//      Assignment 3A - Polynomial

//      The goal of this assignment is to reinforce the container class concepts in C++.
//      Specifically, the assignment is to implement the polynomial class.
//      Specifically, you should use the poly.h header file as your starting point.
//      You need to supply a test program.

//            REFERENCES:
//            https://www.geeksforgeeks.org/trapezoidal-rule-for-approximate-value-of-definite-integral/



#include <iostream>
#include "polynomial.h"

using namespace std;

int main() {
    cout << "Constructing a polynomial object" << endl;
    colorado_edu::polynomial test1;

    test1.assign_coef(4, 0);
    test1.assign_coef(3, 1);
    test1.assign_coef(2, 2);
    //Checking to see it was input correctly
    cout << "Poly: \n" << "\tIndex 0: " << test1.coefficient(0)
         << "\tIndex 1: " << test1.coefficient(1)
         << "\tIndex 2: " << test1.coefficient(2) << endl;

    cout << "\n===================================================\n" << endl;

    cout << "Constructing a second polynomial object" << endl;
    colorado_edu::polynomial test2;

    test2.assign_coef(7, 0);
    test2.assign_coef(-1, 1);
    test2.assign_coef(5, 2);
    //Checking to see it was input correctly
    cout << "Poly: \n" << "\tIndex 0: " << test2.coefficient(0)
         << "\tIndex 1: " << test2.coefficient(1)
         << "\tIndex 2: " << test2.coefficient(2) << endl;

    cout << "\n===================================================\n" << endl;
//ANTIDER
    cout << "Antiderivative of test1 \n "
         << "\t0: " << test1.antiderivative().coefficient(0)
         << "\t1: " << test1.antiderivative().coefficient(1)
         << "\t2: " << test1.antiderivative().coefficient(2)
         << "\t3: " << test1.antiderivative().coefficient(3)
         << endl;

    cout << "\n===================================================\n" << endl;
//DERIV
    cout << "Derivative of test1 \n"
         << "\t0: " << test1.derivative().coefficient(0)
         << "\t1: " << test1.derivative().coefficient(1)
         << endl;

    cout << "\n===================================================\n" << endl;
//ADDITION
    cout << "Testing the addition operator between first two objects: " << endl;
    colorado_edu::polynomial addOpTest = (test1 + test2);

    cout << "Poly: \n" << "\tIndex 0: " << addOpTest.coefficient(0)
         << "\tIndex 1: " << addOpTest.coefficient(1)
         << "\tIndex 2: " << addOpTest.coefficient(2)
         << endl;


    cout << "\n===================================================\n" << endl;
//SUBTRACTION
    cout << "Testing the substraction operator between first two objects: " << endl;
    colorado_edu::polynomial subOpTest = (test1 - test2);

    cout << "Poly: \n" << "\tIndex 0: " << subOpTest.coefficient(0)
         << "\tIndex 1: " << subOpTest.coefficient(1)
         << "\tIndex 2: " << subOpTest.coefficient(2)
         << endl;


    cout << "\n===================================================\n" << endl;
//MULTIPLICATION
    colorado_edu::polynomial multiOpTest = (test1 * test2);
    cout << "Testing the Multiplication operator: " << endl;
    cout << "Poly: \n" << "\tIndex 0: " << multiOpTest.coefficient(0)
         << "\tIndex 1: " << multiOpTest.coefficient(1)
         << "\tIndex 2: " << multiOpTest.coefficient(2)
         << "\tIndex 3: " << multiOpTest.coefficient(3)
         << "\tIndex 4: " << multiOpTest.coefficient(4)
         << endl;

    cout << "\n===================================================\n" << endl;
//NUMERIC DEFINITE INTEGRAL
    cout << "Trapezoidal Integration: " << test1.numeric_definite_integral(0, 1, 5) << endl;

    cout << "\n===================================================\n" << endl;
//TESTING next_term and previous_term
    cout << "Initialize polynomial: 6x^6 + 4x^4 + 2x^2 + 1" << endl;
    colorado_edu::polynomial test3;
    test3.assign_coef(6, 6);
    test3.assign_coef(4, 4);
    test3.assign_coef(2, 2);
    test3.assign_coef(1, 0);

    cout << "This poly: \n"
         << "\tIndex 0: " << test3.coefficient(0)
         << "\tIndex 2: " << test3.coefficient(2)
         << "\tIndex4: " << test3.coefficient(4)
         << "\tIndex 6: " << test3.coefficient(6)
         << endl;

    cout << "Next term after 4x^4: " << test3.next_term(4) << endl;
    cout << "Previous term before 4x^4: " << test3.previous_term(4) << endl;

    return 0;   //Exit Success
}