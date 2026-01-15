/*
 * Question: 165. Program with exceptions in polymorphic classes.
 */
#include <iostream>

class Base { public: virtual void check() { throw 42; } };
class Derived : public Base { public: void check() override { throw 42.0; } };

int main() {
    Base *b = new Derived();
    try { b->check(); }
    catch (double d) { std::cout << "Caught double from Derived: " << d << std::endl; }
    catch (int i) { std::cout << "Caught int from Base: " << i << std::endl; }
    delete b;
    return 0;
}
