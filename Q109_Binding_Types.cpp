/*
 * Question: 109. Program for static vs dynamic binding.
 */
#include <iostream>

class Binding {
public:
    void staticBind() { std::cout << "Static Binding" << std::endl; }
    virtual void dynamicBind() { std::cout << "Dynamic Binding" << std::endl; }
};

int main() {
    Binding b;
    b.staticBind(); // Static
    Binding *ptr = &b;
    ptr->dynamicBind(); // Dynamic
    return 0;
}
