/*
 * Question: 55. Program to demonstrate constructor overloading.
 */
#include <iostream>

class Box {
    double l, w, h;
public:
    Box() : l(0), w(0), h(0) {}
    Box(double s) : l(s), w(s), h(s) {}
    Box(double l1, double w1, double h1) : l(l1), w(w1), h(h1) {}
    void vol() { std::cout << "Vol: " << l * w * h << std::endl; }
};

int main() {
    Box b1;
    Box b2(5);
    Box b3(1, 2, 3);
    b1.vol();
    b2.vol();
    b3.vol();
    return 0;
}
