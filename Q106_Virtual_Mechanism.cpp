/*
 * Question: 106. Program for virtual function call mechanism.
 */
#include <iostream>

class Generic {
public:
    virtual void action() { std::cout << "Generic action" << std::endl; }
};

class Specific : public Generic {
public:
    void action() override { std::cout << "Specific action" << std::endl; }
};

int main() {
    Generic *g = new Specific();
    g->action(); // VTable mechanism in play
    delete g;
    return 0;
}
