/*
 * Question: 84. Program for hierarchical inheritance.
 */
#include <iostream>

class Shape {
public:
    void info() { std::cout << "This is a shape." << std::endl; }
};

class Circle : public Shape {
public:
    void draw() { std::cout << "Drawing Circle." << std::endl; }
};

class Square : public Shape {
public:
    void draw() { std::cout << "Drawing Square." << std::endl; }
};

int main() {
    Circle c; Square s;
    c.info(); c.draw();
    s.info(); s.draw();
    return 0;
}
