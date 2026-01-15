/*
 * Question: 66. Program to overload operators using friend function.
 */
#include <iostream>

class Complex {
    double real, imag;
public:
    Complex(double r = 0, double i = 0) : real(r), imag(i) {}
    friend Complex operator+(const Complex &c1, const Complex &c2);
    void print() { std::cout << real << " + " << imag << "i" << std::endl; }
};

Complex operator+(const Complex &c1, const Complex &c2) {
    return Complex(c1.real + c2.real, c1.imag + c2.imag);
}

int main() {
    Complex c1(2, 3), c2(4, 5);
    Complex c3 = c1 + c2;
    c3.print();
    return 0;
}
