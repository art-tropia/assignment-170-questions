/*
 * Question: 93. Program for virtual base class.
 */
#include <iostream>

class GrandParent {
public:
    int val = 10;
};

class Parent1 : virtual public GrandParent {};
class Parent2 : virtual public GrandParent {};

class Child : public Parent1, public Parent2 {};

int main() {
    Child c;
    std::cout << "Value: " << c.val << std::endl; // No ambiguity thanks to virtual base
    return 0;
}
