/*
 * Question: 103. Program overriding base class function.
 */
#include <iostream>

class Base {
public:
    void show() { std::cout << "Base Function" << std::endl; }
};

class Derived : public Base {
public:
    void show() { std::cout << "Derived Function (Overridden)" << std::endl; }
};

int main() {
    Derived d;
    d.show();
    return 0;
}
