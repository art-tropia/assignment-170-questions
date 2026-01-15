/*
 * Question: 15. Program to demonstrate bitwise operators.
 */
#include <iostream>

int main() {
    unsigned int a = 5, b = 9; // 5: 0101, 9: 1001
    std::cout << "a = " << a << ", b = " << b << std::endl;
    std::cout << "a & b: " << (a & b) << " (0001)" << std::endl;
    std::cout << "a | b: " << (a | b) << " (1101)" << std::endl;
    std::cout << "a ^ b: " << (a ^ b) << " (1100)" << std::endl;
    std::cout << "~a: " << (~a) << std::endl;
    std::cout << "a << 1: " << (a << 1) << " (1010)" << std::endl;
    std::cout << "a >> 1: " << (a >> 1) << " (0010)" << std::endl;
    return 0;
}
