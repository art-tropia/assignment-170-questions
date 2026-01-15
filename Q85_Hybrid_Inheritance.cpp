/*
 * Question: 85. Program for hybrid inheritance.
 */
#include <iostream>

class A {
public:
    void showA() { std::cout << "Class A" << std::endl; }
};

class B : public A {
public:
    void showB() { std::cout << "Class B" << std::endl; }
};

class C {
public:
    void showC() { std::cout << "Class C" << std::endl; }
};

class D : public B, public C {
public:
    void showD() { std::cout << "Class D" << std::endl; }
};

int main() {
    D obj;
    obj.showA(); obj.showB(); obj.showC(); obj.showD();
    return 0;
}
