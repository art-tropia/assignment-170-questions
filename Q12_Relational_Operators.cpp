/*
 * Question: 12. Program to demonstrate relational operators.
 */
#include <iostream>

int main() {
    int a = 10, b = 20;
    std::cout << std::boolalpha;
    std::cout << "a = " << a << ", b = " << b << std::endl;
    std::cout << "a == b: " << (a == b) << std::endl;
    std::cout << "a != b: " << (a != b) << std::endl;
    std::cout << "a > b: " << (a > b) << std::endl;
    std::cout << "a < b: " << (a < b) << std::endl;
    std::cout << "a >= b: " << (a >= b) << std::endl;
    std::cout << "a <= b: " << (a <= b) << std::endl;
    return 0;
}
