/*
 * Question: 86. Program demonstrating private inheritance.
 */
#include <iostream>

class Base {
public:
    void show() { std::cout << "Base show" << std::endl; }
};

class Derived : private Base {
public:
    void accessBase() {
        show(); // Accessible inside the class
    }
};

int main() {
    Derived d;
    d.accessBase();
    // d.show(); // Error: 'Base' is a private base of 'Derived'
    return 0;
}
