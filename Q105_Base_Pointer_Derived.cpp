/*
 * Question: 105. Program with pointer to base class calling derived function.
 */
#include <iostream>

class Base {
public:
    virtual void func() { std::cout << "Base func" << std::endl; }
};

class Derived : public Base {
public:
    void func() override { std::cout << "Derived func" << std::endl; }
};

int main() {
    Base *ptr = new Derived();
    ptr->func();
    delete ptr;
    return 0;
}
