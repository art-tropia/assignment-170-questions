/*
 * Question: 59. Program to initialize const data members in constructor.
 */
#include <iostream>

class ConstMem {
    const int val;
public:
    ConstMem(int v) : val(v) {} // Initializer list is required
    void show() { std::cout << "Const value: " << val << std::endl; }
};

int main() {
    ConstMem c(100);
    c.show();
    return 0;
}
