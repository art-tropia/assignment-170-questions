/*
 * Question: 43. Program to demonstrate class member functions.
 */
#include <iostream>

class Circle {
    double radius;
public:
    void setRadius(double r);
    double getArea();
};

void Circle::setRadius(double r) {
    radius = r;
}

double Circle::getArea() {
    return 3.14159 * radius * radius;
}

int main() {
    Circle c;
    c.setRadius(5.0);
    std::cout << "Area of circle: " << c.getArea() << std::endl;
    return 0;
}
