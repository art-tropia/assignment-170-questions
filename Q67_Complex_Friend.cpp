/*
 * Question: 67. Program to add two complex numbers using friend.
 */
#include <iostream>

class Complex {
    double r, i;
public:
    Complex(double real = 0, double imag = 0) : r(real), i(imag) {}
    friend Complex add(Complex, Complex);
    void show() { std::cout << r << " + " << i << "i" << std::endl; }
};

Complex add(Complex c1, Complex c2) {
    return Complex(c1.r + c2.r, c1.i + c2.i);
}

int main() {
    Complex c1(1, 2), c2(3, 4);
    Complex c3 = add(c1, c2);
    c3.show();
    return 0;
}
