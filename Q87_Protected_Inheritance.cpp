/*
 * Question: 87. Program demonstrating protected inheritance.
 */
#include <iostream>

class Base {
public:
    int x = 10;
};

class Derived : protected Base {
public:
    void show() { std::cout << "x: " << x << std::endl; }
};

class SubDerived : public Derived {
public:
    void showSub() { std::cout << "x in sub: " << x << std::endl; }
};

int main() {
    SubDerived d;
    d.show();
    d.showSub();
    // d.x; // Error: x is protected in Derived and SubDerived
    return 0;
}
