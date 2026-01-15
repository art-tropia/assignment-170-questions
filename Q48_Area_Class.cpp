/*
 * Question: 48. Program to calculate area using class object.
 */
#include <iostream>

class Rectangle {
    double l, w;
public:
    Rectangle(double length, double width) : l(length), w(width) {}
    double area() { return l * w; }
};

int main() {
    Rectangle r(10, 5);
    std::cout << "Area: " << r.area() << std::endl;
    return 0;
}
