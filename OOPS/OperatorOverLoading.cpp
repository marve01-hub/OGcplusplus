#include <iostream>
using namespace std;

//* Defining a class for fraction operations

class Fraction{
public:
    int num;
    int den;
    Fraction(int numerator, int denominator) {
        num = numerator;
        den = denominator;
    }
    // Overloading the + operator for fraction addition
    Fraction operator+(Fraction f2) {   //! f2 is the second fraction object
        int newNum = (num * f2.den) + (den * f2.num);
        int newDen = den * f2.den;
        Fraction ans(newNum, newDen);
        return ans;
    }   
    
    // Overloading the - operator for fraction subtraction
    Fraction operator-(Fraction f2) {
        int newNum = (num * f2.den) - (den * f2.num);
        int newDen = den * f2.den;
        Fraction ans(newNum, newDen);
        return ans;
    }
    // Overloading the * operator for fraction multiplication
    Fraction operator*(Fraction f2) {
        int newNum = num * f2.num;
        int newDen = den * f2.den;
        Fraction ans(newNum, newDen);
        return ans;
    }
    
    void display() {
        cout << num << "/" << den << endl;
    }
};

int main() {
    Fraction f1(1,2);
    Fraction f2(3,2);
    Fraction f3 = f1 + f2; // ! can add fractions using the + operator / operator overloading
    f3.display();
    Fraction diff = f1 - f2; //! can subtract fractions using the - operator / operator overloading
    diff.display();
    Fraction prod = f1 * f2; //! can multiply fractions using the * operator / operator overloading
    prod.display();
    

}