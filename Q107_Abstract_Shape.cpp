/*
 * Question: 107. Program demonstrating abstract shape class.
 */
#include <iostream>

class Shape {
public:
    virtual double area() = 0; // Pure virtual
};

class Rect : public Shape {
    double l, w;
public:
    Rect(double len, double wid) : l(len), w(wid) {}
    double area() override { return l * w; }
};

int main() {
    Rect r(5, 4);
    std::cout << "Area: " << r.area() << std::endl;
    return 0;
}
