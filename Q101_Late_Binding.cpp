/*
 * Question: 101. Program showing late binding.
 */
#include <iostream>

class Base {
public:
    virtual void show() { std::cout << "Base: Late Binding" << std::endl; }
};

class Derived : public Base {
public:
    void show() override { std::cout << "Derived: Late Binding" << std::endl; }
};

int main() {
    Base *b;
    Derived d;
    b = &d;
    b->show(); // Late binding occurs here
    return 0;
}
