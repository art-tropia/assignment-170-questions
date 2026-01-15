/*
 * Question: 166. Program with function overriding and exceptions.
 */
#include <iostream>

class Parent {
public:
    virtual void show() { throw 1; }
};

class Child : public Parent {
public:
    void show() override { std::cout << "Child no throw" << std::endl; }
};

int main() {
    Child c;
    try { c.show(); } catch(...) { std::cout << "Error" << std::endl; }
    return 0;
}
