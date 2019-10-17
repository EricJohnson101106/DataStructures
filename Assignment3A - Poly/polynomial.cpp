//      Eric Johnson
//      Assignment 3A - Polynomial

//      The goal of this assignment is to reinforce the container class concepts in C++.
//      Specifically, the assignment is to implement the polynomial class.
//      Specifically, you should use the poly.h header file as your starting point.
//      You need to supply a test program.

//            REFERENCES:
//            https://www.geeksforgeeks.org/trapezoidal-rule-for-approximate-value-of-definite-integral/
//            https://en.cppreference.com/w/cpp/language/zero_initialization

#include <cassert>
#include <climits>
#include <cmath>
#include "polynomial.h"

using namespace std;

colorado_edu::polynomial::polynomial(double c, unsigned int exponent) {
//     PRECONDITION: exponent <= MAXIMUM_DEGREE
//     POSTCONDITION: This polynomial has been created with all zero
//     coefficients, except for coefficient c for the specified exponent.
//     When used as a default constructor (using default values for
//     both arguments), the result is a polynomial with all zero
//     coefficients.
    assert(exponent <= MAXIMUM_DEGREE);

    for (int i = 0; i <= exponent; i++) {
        if (i == exponent) {
            coef[i] = c;
            current_degree = exponent;
        } else
            coef[i] = 0;
    }

}

void colorado_edu::polynomial::add_to_coef(double amount, unsigned int exponent) {
//     PRECONDITION: exponent <= MAXIMUM_DEGREE.
//     POSTCONDITION: Adds the given amount to the coefficient of the
//     specified exponent
    assert(exponent <= MAXIMUM_DEGREE);

    coef[exponent] += amount;

    if (current_degree < exponent)   //If the degree of the function is larger, change current_degree
        current_degree = exponent;
}

void colorado_edu::polynomial::assign_coef(double coefficient, unsigned int exponent) {
//     PRECONDITION: exponent <= MAXIMUM_DEGREE.
//     POSTCONDITION: Sets the coefficient for the specified exponent.
    assert(exponent <= MAXIMUM_DEGREE);

    coef[exponent] = coefficient;

    if (current_degree < exponent)
        current_degree = exponent;
}

void colorado_edu::polynomial::clear() {
//    POSTCONDITION: All coefficients of this polynomial are set to zero.
    for (int i = 0; i <= current_degree; i++) {
        coef[i] = 0;

        if (i == 0)
            current_degree = 0;
    }

}

colorado_edu::polynomial colorado_edu::polynomial::antiderivative() const {
//     PRECONDITION: degree( ) < MAXIMUM_DEGREE
//     POSTCONDITION: The return value is the antiderivative (indefinite integral)
//     of this polynomial.
//     NOTE: The return polynomial always has a constant term of zero.
    assert(degree() < MAXIMUM_DEGREE);

    unsigned int new_degree = current_degree + 1;
    colorado_edu::polynomial antider;

    //Make new array and shift the values one to the right. Divide value stored in array by index i
    //ie. AD of x^3 becomes x^4 / 4
    for (unsigned int i = new_degree; i > 0; i--) {
        if (i == 0)
            antider.assign_coef(0, 0); //Antiderivative constant C set to 0. Prevents divide by 0
        else
            antider.assign_coef(((coef[i - 1]) / double(i)), i);

    }

    return antider;
}

double colorado_edu::polynomial::coefficient(unsigned int exponent) const {
//     POSTCONDITION: Returns coefficient at specified exponent of this
//     polynomial.
//     NOTE: For exponents > MAXIMUM_DEGREE, the return value is always zero.

    if (exponent < MAXIMUM_DEGREE)
        return coef[exponent];
    else
        return 0;
}

double colorado_edu::polynomial::definite_integral(double x0, double x1) const {
//     POSTCONDITION: Returns the value of the definite integral computed from
//     x0 to x1.  The answer is computed analytically.
    return antiderivative().eval(x0) - antiderivative().eval(x1);

}

colorado_edu::polynomial colorado_edu::polynomial::derivative() const {
// Precondition: Current Degree > 0
// POSTCONDITION: The return value is the first derivative of this
//     polynomial.
    assert(current_degree > 0);

    unsigned int new_degree = current_degree - 1;
    polynomial deriv;

    for (unsigned int i = new_degree; i > 0; i--) {
        deriv.assign_coef((coef[i] * i), (i - 1));
    }

    return deriv;
}

double colorado_edu::polynomial::eval(double x) const {
//     POSTCONDITION: The return value is the value of this polynomial with the
//     given value for the variable x.
    double answer = 0;

    for (int i = 0; i <= current_degree; i++) {
        answer += pow(x, i) * coef[i];
    }

    return answer;
}

bool colorado_edu::polynomial::is_zero() const {
//     POSTCONDITION: The return value is true if and only if the polynomial
//     is the zero polynomial.
    int count_poly = 0;

    for (int i = 0; i <= current_degree; i++) {
        if (coef[i] != 0)
            count_poly++;
    }
    return count_poly == 0;

}

unsigned int colorado_edu::polynomial::next_term(unsigned int e) const {
//     POSTCONDITION: The return value is the next exponent n which is LARGER
//     than e such that coefficient(n) != 0.
//     If there is no such term, then the return value is zero.
    for (unsigned int i = e + 1; i <= current_degree; i++) {
        if (coef[i] != 0)
            return i;
    }

    return 0;
}

double colorado_edu::polynomial::numeric_definite_integral(double x0, double x1, unsigned int n) {
//     POSTCONDITION: Returns the value of the definite integral computed from
//     x0 to x1 by using the trapezoid method with n sections of equal width.
    //REFERENCE https://www.geeksforgeeks.org/trapezoidal-rule-for-approximate-value-of-definite-integral/

    double h = (x1 - x0) / n;

    double s = eval(x0) + eval(x1);

    for (int i = 1; i < n; i++) {
        s += 2 * eval(x0 + i * h);

    }

    return (h / 2) * s;
}

unsigned int colorado_edu::polynomial::previous_term(unsigned int e) const {
//     POSTCONDITION: The return value is the next exponent n which is SMALLER
//     than e such that coefficient(n) != 0.
//     If there is no such term, then the return value is UINT_MAX
//     from <climits>.
    for (unsigned int i = e - 1; i >= 0; i--) {
        if (coef[i] != 0)
            return i;
    }
    return UINT_MAX;
}


colorado_edu::polynomial
colorado_edu::operator-(const colorado_edu::polynomial &p1, const colorado_edu::polynomial &p2) {
//     POSTCONDITION: return-value is a polynomial with each coefficient
//     equal to the difference of the coefficients of p1 & p2 for any given
//     exponent.
//
    colorado_edu::polynomial answer;

    for (unsigned int i = 0; i <= (p1.degree() < p2.degree() ? p1.degree() : p2.degree()); i++) {
        answer.assign_coef((p1.coefficient(i) - p2.coefficient(i)), i);
    }
    return answer;
}

colorado_edu::polynomial
colorado_edu::operator+(const colorado_edu::polynomial &p1, const colorado_edu::polynomial &p2) {
//     POSTCONDITION: return-value is a polynomial with each coefficient
//     equal to the sum of the coefficients of p1 & p2 for any given
//     exponent.
    colorado_edu::polynomial answer;

    for (unsigned int i = 0; i <= (p1.degree() < p2.degree() ? p1.degree() : p2.degree()); i++) {
        answer.assign_coef((p1.coefficient(i) + p2.coefficient(i)), i);
    }
    return answer;

}

colorado_edu::polynomial
colorado_edu::operator*(const colorado_edu::polynomial &p1, const colorado_edu::polynomial &p2) {
//     PRECONDITION: p1.degree( ) + p2.degree( ) <= MAXIMUM_DEGREE.
//     POSTCONDITION: Each term of p1 has been multiplied by each term of p2,
//     and the answer is the sum of all these term-by-term products.
//     For example, if p1 is 2x^2 + 3x + 4 and p2 is 5x^2 - 1x + 7, then the
//     return value is 10x^4 + 13x^3 + 31x^2 + 17x + 28.
    assert((p1.degree() + p2.degree()) <= colorado_edu::polynomial::MAXIMUM_DEGREE);

    colorado_edu::polynomial answer;

    for (unsigned int i = 0; i <= p1.degree(); i++) {
        for (unsigned int j = 0; j <= +p2.degree(); j++) {
            answer.add_to_coef(
                    p1.coefficient(i) * p2.coefficient(j), (i + j));
        }
    }
    return answer;
}
