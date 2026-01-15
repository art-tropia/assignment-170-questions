/*
 * Question: 89. Program showing ambiguity in multiple inheritance.
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
    // obj.show(); // Ambiguous call
    std::cout << "Direct call obj.show() is ambiguous if both parents have show()." << std::endl;
    return 0;
}
