/*
 * Question: 90. Program resolving ambiguity using scope resolution operator.
 */
#include <iostream>

class A {
public:
    void show() { std::cout << "Class A show" << std::endl; }
};

class B {
public:
    void show() { std::cout << "Class B show" << std::endl; }
};

class C : public A, public B {};

int main() {
    C obj;
    obj.A::show(); // Resolved using scope resolution
    obj.B::show();
    return 0;
}
