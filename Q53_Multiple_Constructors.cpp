/*
 * Question: 53. Program with multiple constructors.
 */
#include <iostream>

class Multi {
public:
    Multi() { std::cout << "No args" << std::endl; }
    Multi(int x) { std::cout << "One arg: " << x << std::endl; }
    Multi(int x, int y) { std::cout << "Two args: " << x << ", " << y << std::endl; }
};

int main() {
    Multi m1;
    Multi m2(10);
    Multi m3(10, 20);
    return 0;
}
