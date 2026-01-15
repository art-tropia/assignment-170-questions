/*
 * Question: 62. Program to differentiate local & member variables using this.
 */
#include <iostream>

class Test {
    int a;
public:
    Test(int a) {
        this->a = a; // this->a is member, a is parameter
    }
    void print() {
        std::cout << "Member a: " << a << std::endl;
    }
};

int main() {
    Test t(42);
    t.print();
    return 0;
}
