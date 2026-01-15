/*
 * Question: 73. Program with constant object.
 */
#include <iostream>

class ConstObj {
    int x;
public:
    ConstObj(int v) : x(v) {}
    void show() const { std::cout << "Value: " << x << std::endl; }
};

int main() {
    const ConstObj obj(10);
    obj.show(); // Can only call const member functions
    return 0;
}
