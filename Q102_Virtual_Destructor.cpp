/*
 * Question: 102. Program with virtual destructor.
 */
#include <iostream>

class Base {
public:
    Base() { std::cout << "Base Constructor" << std::endl; }
    virtual ~Base() { std::cout << "Base Destructor" << std::endl; }
};

class Derived : public Base {
public:
    Derived() { std::cout << "Derived Constructor" << std::endl; }
    ~Derived() { std::cout << "Derived Destructor" << std::endl; }
};

int main() {
    Base *b = new Derived();
    delete b; // Virtual destructor ensures Derived destructor is called
    return 0;
}
