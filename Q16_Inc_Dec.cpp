/*
 * Question: 16. Program demonstrating increment/decrement.
 */
#include <iostream>

int main() {
    int a = 10;
    std::cout << "a = " << a << std::endl;
    std::cout << "Post-increment (a++): " << a++ << " (a is now " << a << ")" << std::endl;
    std::cout << "Pre-increment (++a): " << ++a << " (a is now " << a << ")" << std::endl;
    std::cout << "Post-decrement (a--): " << a-- << " (a is now " << a << ")" << std::endl;
    std::cout << "Pre-decrement (--a): " << --a << " (a is now " << a << ")" << std::endl;
    return 0;
}
