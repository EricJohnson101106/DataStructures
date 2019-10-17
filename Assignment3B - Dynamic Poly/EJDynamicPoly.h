// FILE: poly.h
// CLASS PROVIDED:
//   class EJDynamicPoly (in the namespace colorado_edu)
//     A EJDynamicPoly has one variable x, real number coefficients, and
//     non-negative integer exponents. Such a EJDynamicPoly can be viewed
//     as having the form:
//       A[n]*x^n + A[n-1]*x^(n-1) + ... A[2]*x^2 + A[1]*x + A[0]
//     where the A[n] are the real number coefficients and x^i represents
//     the variable x raised to the i power. The coefficient A[0] is
//     called the "constant" or "zeroth" term of the EJDynamicPoly.
//
// MEMBER CONSTANTS
//   const static size_t DEFAULT_DEGREE
//     The size of the maximum exponent permitted for a EJDynamicPoly.
//
// CONSTRUCTOR for the EJDynamicPoly class
//   EJDynamicPoly(double c = 0.0, unsigned int exponent = 0)
//     PRECONDITION: exponent <= DEFAULT_DEGREE
//     POSTCONDITION: This EJDynamicPoly has been created with all zero
//     coefficients, except for coefficient c for the specified exponent.
//     When used as a default constructor (using default values for
//     both arguments), the result is a EJDynamicPoly with all zero
//     coefficients.
//
// MODIFICATION MEMBER FUNCTIONS for the EJDynamicPoly class
//   void add_to_coef(double amount, unsigned int exponent)
//     PRECONDITION: exponent <= DEFAULT_DEGREE.
//     POSTCONDITION: Adds the given amount to the coefficient of the
//     specified exponent.
//
//   void assign_coef(double coefficient, unsigned int exponent)
//     PRECONDITION: exponent <= DEFAULT_DEGREE.
//     POSTCONDITION: Sets the coefficient for the specified exponent.
//
//   void clear( )
//     POSTCONDITION: All coefficients of this EJDynamicPoly are set to zero.
//
// CONSTANT MEMBER FUNCTIONS for the EJDynamicPoly class
//   EJDynamicPoly antiderivative( ) const
//     PRECONDITION: degree( ) < DEFAULT_DEGREE
//     POSTCONDITION: The return value is the antiderivative (indefinite integral)
//     of this EJDynamicPoly.
//     NOTE: The return EJDynamicPoly always has a constant term of zero.
//
//   double coefficient(unsigned int exponent) const
//     POSTCONDITION: Returns coefficient at specified exponent of this
//     EJDynamicPoly.
//     NOTE: For exponents > DEFAULT_DEGREE, the return value is always zero.
//
//   double definite_integral(double x0, double x1) const
//     POSTCONDITION: Returns the value of the definite integral computed from
//     x0 to x1.  The answer is computed analytically.
//
//   unsigned int degree( ) const
//     POSTCONDITION: The function returns the value of the largest exponent
//     with a non-zero coefficient.
//     If all coefficients are zero, then the function returns zero (even
//     though, technically, this EJDynamicPoly does not have a degree).
//
//   EJDynamicPoly derivative( ) const
//     POSTCONDITION: The return value is the first derivative of this
//     EJDynamicPoly.
//
//   double eval(double x) const
//     POSTCONDITION: The return value is the value of this EJDynamicPoly with the
//     given value for the variable x.
//
//   void find_root(
//     double& answer,
//     bool& success,
//     unsigned int& iterations,
//     double starting_guess = 0,
//     unsigned int maximum_iterations = 100,
//     double epsilon = 1e-8
//     )
//     const
//     PRECONDITION: epsilon > 0.
//     POSTCONDITION: This function uses Newton's method to search for a root of
//     the EJDynamicPoly (i.e., a value of x for which the EJDynamicPoly is zero).
//     The method requires some starting guess for the value of the root. This
//     guess is improved over a series of iterations (with the maximum allowed
//     iterations defined by the parameter maximum_iterations). There are three
//     possible outcomes:
//     1. SUCCESS:
//        The method hits a near-root (a value of x for which the absolute value
//        of the EJDynamicPoly is no more than epsilon). In this case, the function
//        sets answer to equal this near-root, success is set to true, and
//        iterations is set to the number of iterations required.
//     2. FLAT FAILURE:
//        Newton's method fails because the guess hits a very flat area of the
//        EJDynamicPoly (a point where first derivative is no more than epsilon).
//        In this case, the function sets answer equal to the guess that caused
//        flat failure, success is set to false, and iterations is the number
//        of iterations carried out (which will be less than maximum_iterations).
//     3. MAXIMUM ITERATIONS REACHED:
//        The maximum number of iterations is reached without success or flat
//        failure. In this case, the function sets answer to the last guess tried,
//        success is set to false, and iterations is set to maximum_iterations.
//
//   bool is_zero( ) const
//     POSTCONDITION: The return value is true if and only if the EJDynamicPoly
//     is the zero EJDynamicPoly.
//
//   unsigned int next_term(unsigned int e) const
//     POSTCONDITION: The return value is the next exponent n which is LARGER
//     than e such that coefficient(n) != 0.
//     If there is no such term, then the return value is zero.
//
//   double numeric_definite_integral(double x0, double x1, unsigned int n) const
//     POSTCONDITION: Returns the value of the definite integral computed from
//     x0 to x1 by using the trapezoid method with n sections of equal width.
//
//   unsigned int previous_term(unsigned int e) const
//     POSTCONDITION: The return value is the next exponent n which is SMALLER
//     than e such that coefficient(n) != 0.
//     If there is no such term, then the return value is UINT_MAX
//     from <climits>.
//
// CONSTANT OPERATORS for the EJDynamicPoly class
//   double operator( ) (double x) const
//     Same as the eval member function.
//
// NON-MEMBER BINARY OPERATORS for the EJDynamicPoly Class
//   EJDynamicPoly operator -(const EJDynamicPoly& p1, const EJDynamicPoly& p2)
//     POSTCONDITION: return-value is a EJDynamicPoly with each coefficient
//     equal to the difference of the coefficients of p1 & p2 for any given
//     exponent.
//
//   EJDynamicPoly operator +(const EJDynamicPoly& p1, const EJDynamicPoly& p2)
//     POSTCONDITION: return-value is a EJDynamicPoly with each coefficient
//     equal to the sum of the coefficients of p1 & p2 for any given
//     exponent.
//
//   EJDynamicPoly operator *(const EJDynamicPoly& p1, const EJDynamicPoly& p2)
//     PRECONDITION: p1.degree( ) + p2.degree( ) <= DEFAULT_DEGREE.
//     POSTCONDITION: Each term of p1 has been multiplied by each term of p2,
//     and the answer is the sum of all these term-by-term products.
//     For example, if p1 is 2x^2 + 3x + 4 and p2 is 5x^2 - 1x + 7, then the
//     return value is 10x^4 + 13x^3 + 31x^2 + 17x + 28.
//
// NON-MEMBER OUTPUT FUNCTIONS for the EJDynamicPoly Class
//   ostream& operator << (ostream& out, const EJDynamicPoly& p)
//     POSTCONDITION: The EJDynamicPoly has been printed to ostream out, which,
//     in turn, has been returned to the calling function.
//
//   void make_gif(
//     const EJDynamicPoly& p,
//     const char filename[ ],
//     double low_x,
//     double high_x,
//     double low_y,
//     double high_y
//     )
//     PRECONDITION: filename is a legal filename for a gif file.
//     Also (low_x < high_x) && (low_y < high_y).
//     POSTCONDITION: A gif file has been written to the specified filename
//     with a graphical representation of the EJDynamicPoly in the specified
//     ranges (low_x...high_x and low_y...high_y).
//
// The value semantics (copy constructor and assignment operator) are valid for
// the EJDynamicPoly class.

#ifndef ASSIGNMENT3B_POLY_POLYNOMIAL_H
#define ASSIGNMENT3B_POLY_POLYNOMIAL_H

#include <iostream>  // Provides ostream

namespace colorado_edu {

    class EJDynamicPoly {
    public:

        // CONSTRUCTOR
        EJDynamicPoly(double c = 0.0, unsigned int exponent = 0);

        EJDynamicPoly(const EJDynamicPoly &source);
        ~EJDynamicPoly();   //Destructor

        // MODIFICATION MEMBER FUNCTIONS
        void reserve(unsigned int new_degree);

        void add_to_coef(double amount, unsigned int exponent);

        void assign_coef(double coefficient, unsigned int exponent);

        void clear();

        // CONSTANT MEMBER FUNCTIONS
        EJDynamicPoly antiderivative() const;

        double coefficient(unsigned int exponent) const;

        double definite_integral(double x0, double x1) const;

        unsigned int degree() const { return current_degree; }

        EJDynamicPoly derivative() const;

        double eval(double x) const;

        bool is_zero() const;

        unsigned int next_term(unsigned int e) const;


        double numeric_definite_integral(double x0, double x1, unsigned int n);

        unsigned int previous_term(unsigned int e) const;

        // OPERATORS
        double operator( )(double x) const { return eval(x); }
        void operator=(const EJDynamicPoly &source);

    private:
        double *coef{};
        unsigned int current_degree{};
    };

// NON-MEMBER BINARY OPERATORS
    EJDynamicPoly operator+(const EJDynamicPoly &p1, const EJDynamicPoly &p2);

    EJDynamicPoly operator-(const EJDynamicPoly &p1, const EJDynamicPoly &p2);

    EJDynamicPoly operator*(const EJDynamicPoly &p1, const EJDynamicPoly &p2);

// NON-MEMBER OUTPUT FUNCTIONS
    std::ostream &operator<<(std::ostream &out, const EJDynamicPoly &p);

    void make_gif(
            const EJDynamicPoly &p,
            const char filename[],
            double low_x,
            double high_x,
            double low_y,
            double high_y
    );
};


#endif //ASSIGNMENT3B_POLY_POLYNOMIAL_H
