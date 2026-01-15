/*
 * Question: 13. Program to demonstrate logical operators.
 */
#include <iostream>

int main() {
    bool a = true, b = false;
    std::cout << std::boolalpha;
    std::cout << "a = " << a << ", b = " << b << std::endl;
    std::cout << "a && b: " << (a && b) << std::endl;
    std::cout << "a || b: " << (a || b) << std::endl;
    std::cout << "!a: " << (!a) << std::endl;
    return 0;
}
