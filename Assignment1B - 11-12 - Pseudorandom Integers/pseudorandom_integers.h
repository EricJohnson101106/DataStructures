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

//      Header File

#ifndef ASSIGNMENT1B_11_12_PSEUDORANDOM_INTEGERS_PSEUDORANDOM_INTEGERS_H
#define ASSIGNMENT1B_11_12_PSEUDORANDOM_INTEGERS_PSEUDORANDOM_INTEGERS_H


class pseudorandom_integers {
public:
//Constructors
    pseudorandom_integers();        //Default
    pseudorandom_integers(unsigned int ini_seed, unsigned int ini_multiplier, unsigned int ini_increment,
                          unsigned int ini_modulus);

//Mutators
    void change_seed(unsigned new_seed);

//Getters
    int generate_number();
    double generate_number_modulus();
//DEBUG
    unsigned get_seed(){return seed;};
    unsigned get_multiplier(){return multiplier;};
    unsigned get_increment(){return increment;};
    unsigned get_modulus(){return modulus;};

private:
    unsigned seed;
    unsigned multiplier;
    unsigned increment;
    unsigned modulus;

};

#endif //ASSIGNMENT1B_11_12_PSEUDORANDOM_INTEGERS_PSEUDORANDOM_INTEGERS_H
