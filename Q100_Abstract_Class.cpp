/*
 * Question: 100. Program with pure virtual function & abstract class.
 */
#include <iostream>

class Base { // Abstract class
public:
    virtual void show() = 0; // Pure virtual function
};

class Derived : public Base {
public:
    void show() override { std::cout << "Derived implementation" << std::endl; }
};

int main() {
    Derived d;
    d.show();
    // Base b; // Error: cannot instantiate abstract class
    return 0;
}
