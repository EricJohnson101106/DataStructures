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

//      Class File

//  Reference:  http://www.cplusplus.com/reference/cstdlib/srand/
//              https://stackoverflow.com/questions/9138790/cant-use-modulus-on-doubles

#include <cassert>
#include <cstdlib>
#include <cmath>
#include "pseudorandom_integers.h"

pseudorandom_integers::pseudorandom_integers() {
    //Postcondition: Construct a default object using values given in example from textbook
    seed = 1;
    multiplier = 40;
    increment = 725;
    modulus = 729;
}

pseudorandom_integers::pseudorandom_integers(unsigned int ini_seed, unsigned int ini_multiplier,
                                             unsigned int ini_increment, unsigned int ini_modulus){
    //Precondition: All values must be positive
    //Postcondition: Construct an object using values passed into the method
    assert(ini_seed > 0);
    assert(ini_multiplier > 0);
    assert(ini_increment > 0);
    assert(ini_modulus > 0);

    seed = ini_seed;
    multiplier = ini_multiplier;
    increment = ini_increment;
    modulus = ini_modulus;
}

void pseudorandom_integers::change_seed(unsigned new_seed) {
    //Precondition: new_seed > 0
    //Postcondition: Change the value of seed to new_seed
    assert(new_seed > 0);
    seed = new_seed;

}

int pseudorandom_integers::generate_number() {
    //Postcondition: Will generate a random number using the formula given by textbook
    //                  (multiplier * seed + increment) % modulus
    //              Afterwards, it will change seed to the new seed according to the formula which
    //              allows for a new seed for each random number in the sequence.
    unsigned new_seed;
    new_seed = (multiplier * seed + increment) % modulus;
    srand(new_seed); //Seed the random numbers
    seed = new_seed;

    return rand();
}

double pseudorandom_integers::generate_number_modulus() {
    //Postcondition: Returns a double pseudorandom number.
    //              Will create a random number then divide by the value modulus (cast as a double).
    //              Will return this double value, which falls in the range of [0...1)

    unsigned new_seed;
    double converted_modulus;
    converted_modulus = modulus;

    new_seed = (multiplier * seed + increment) % modulus;
    srand(new_seed); //Seed the random numbers
    seed = new_seed;

    return fmod((rand() / (converted_modulus)), 1.0); //Mod 1 to reduce this to a decimal

}