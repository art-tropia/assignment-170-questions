/*
 * Question: 151. Program showing stack unwinding.
 */
#include <iostream>

class Demo {
public:
    Demo() { std::cout << "Constructor" << std::endl; }
    ~Demo() { std::cout << "Destructor (Unwinding)" << std::endl; }
};

void func() {
    Demo d;
    throw 1;
}

int main() {
    try { func(); }
    catch (int e) { std::cout << "Caught: " << e << std::endl; }
    return 0;
}
