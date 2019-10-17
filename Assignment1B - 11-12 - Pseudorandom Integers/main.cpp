//          Eric Johnson
//          Assignment 1B - 11 & 12 - Pseudorandom Integers

//  #11 In this project, you will design and implement a class that can generate a sequence of
//      pseudorandom integers, which is a sequence that appears random in many ways. The approach
//      uses the linear congruence method. This starts with a number called the seed. In addition
//      to the seed, three other numbers are used in the method, called the multiplier,
//      the increment, and the modulus.

//              The first number is: (multiplier * seed + increment) % modulus
//      Each time a new random number is computed, the value of the seed is changed to that new number.
//      Design and implement a class thatcan generate a psuedorandom sequence in the manner described.
//      * The initial seed, multiplier, increment, and modulus should all be parameters of the constructor.
//      * There should also be a member function to permit the seed to be changed,
//      * and a member function to generate and return the next number in the pseudorandom sequence.

//  #12 Add a new member function to the random number class of the previous project.
//      * The new member function generates the next pseudorandom number but does not return the number directly.
//      Instead, the function returns this number divided by the modulus. (Cast the modulus as a double).
//      The return value from this new member function is a pseudorandom double number in the range [0...1).

//      Implementation File


#include <iostream>
#include "pseudorandom_integers.h"

using namespace std;

int main() {
    cout << "Testing Default Constructor: " << endl;
    pseudorandom_integers test1;

    cout << "Seeing what everything is before running through: " << endl;
    cout << "Seed: " << test1.get_seed()
         << "\t, Multiplier: " << test1.get_multiplier()
         << "\t, Increment: " << test1.get_increment()
         << "\t, Modulus: " << test1.get_modulus() << endl;

    cout << "================================\n First Run: " << test1.generate_number() << endl;

    cout << "Seed: " << test1.get_seed()
         << "\t, Multiplier: " << test1.get_multiplier()
         << "\t, Increment: " << test1.get_increment()
         << "\t, Modulus: " << test1.get_modulus() << endl;

    cout << "================================\n Second Run: " << test1.generate_number() << endl;

    cout << "Seed: " << test1.get_seed()
         << "\t, Multiplier: " << test1.get_multiplier()
         << "\t, Increment: " << test1.get_increment()
         << "\t, Modulus: " << test1.get_modulus() << endl;

    cout << "================================\n Third Run: " << test1.generate_number() << endl;

    cout << "Seed: " << test1.get_seed()
         << "\t, Multiplier: " << test1.get_multiplier()
         << "\t, Increment: " << test1.get_increment()
         << "\t, Modulus: " << test1.get_modulus() << endl;

    cout << "\n================================================================================\n" << endl;
    cout << "Testing with values passed in (seed = 120, mult = 288, inc = 800, mod = 1300" << endl;
    pseudorandom_integers test2(120, 288, 800, 1300);
    cout << "Seeing what everything is before running through: " << endl;

    cout << "Seed: " << test2.get_seed()
         << "\t, Multiplier: " << test2.get_multiplier()
         << "\t, Increment: " << test2.get_increment()
         << "\t, Modulus: " << test2.get_modulus() << endl;

    cout << "================================\n First Run: " << test2.generate_number() << endl;
    cout << "Seed: " << test2.get_seed()
         << "\t, Multiplier: " << test2.get_multiplier()
         << "\t, Increment: " << test2.get_increment()
         << "\t, Modulus: " << test2.get_modulus() << endl;


    cout << "================================\n Second Run: " << test2.generate_number() << endl;
    cout << "Seed: " << test2.get_seed()
         << "\t, Multiplier: " << test2.get_multiplier()
         << "\t, Increment: " << test2.get_increment()
         << "\t, Modulus: " << test2.get_modulus() << endl;


    cout << "================================\n Third Run: " << test2.generate_number() << endl;
    cout << "Seed: " << test2.get_seed()
         << "\t, Multiplier: " << test2.get_multiplier()
         << "\t, Increment: " << test2.get_increment()
         << "\t, Modulus: " << test2.get_modulus() << endl;


    cout << "\n================================================================================\n" << endl;
    cout << "Testing #12 - Getting a decimal pseudorandom number: " << endl;
    pseudorandom_integers test3;
    cout << test3.generate_number_modulus() << endl;
}