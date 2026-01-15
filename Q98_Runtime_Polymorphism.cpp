/*
 * Question: 98. Program demonstrating runtime polymorphism.
 */
#include <iostream>

class Base {
public:
    virtual void show() { std::cout << "Base show" << std::endl; }
};

class Derived : public Base {
public:
    void show() override { std::cout << "Derived show" << std::endl; }
};

int main() {
    Base *ptr;
    Derived d;
    ptr = &d;
    ptr->show(); // Runtime polymorphism
    return 0;
}
