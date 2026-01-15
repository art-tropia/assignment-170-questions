/*
 * Question: 57. Program to show order of constructor execution.
 */
#include <iostream>

class Base {
public:
    Base() { std::cout << "Base Constructor" << std::endl; }
};

class Derived : public Base {
public:
    Derived() { std::cout << "Derived Constructor" << std::endl; }
};

int main() {
    Derived d;
    return 0;
}
