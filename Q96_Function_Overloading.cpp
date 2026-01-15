/*
 * Question: 96. Program demonstrating function overloading.
 */
#include <iostream>

class Overload {
public:
    int add(int a, int b) { return a + b; }
    int add(int a, int b, int c) { return a + b + c; }
    double add(double a, double b) { return a + b; }
};

int main() {
    Overload o;
    std::cout << o.add(1, 2) << std::endl;
    std::cout << o.add(1, 2, 3) << std::endl;
    std::cout << o.add(1.5, 2.5) << std::endl;
    return 0;
}
