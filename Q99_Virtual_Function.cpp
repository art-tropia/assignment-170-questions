/*
 * Question: 99. Program with virtual function.
 */
#include <iostream>

class Shape {
public:
    virtual void draw() { std::cout << "Drawing generic shape" << std::endl; }
};

class Circle : public Shape {
public:
    void draw() override { std::cout << "Drawing circle" << std::endl; }
};

int main() {
    Shape* s = new Circle();
    s->draw();
    delete s;
    return 0;
}
