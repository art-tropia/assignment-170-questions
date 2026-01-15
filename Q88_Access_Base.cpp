/*
 * Question: 88. Program to access base class members using derived class.
 */
#include <iostream>

class Base {
public:
    int val = 100;
};

class Derived : public Base {
public:
    void print() {
        std::cout << "Base value: " << val << std::endl;
    }
};

int main() {
    Derived d;
    d.print();
    std::cout << "Direct access: " << d.val << std::endl;
    return 0;
}
