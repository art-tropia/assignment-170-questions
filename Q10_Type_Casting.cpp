/*
 * Question: 10. Program to demonstrate type casting.
 */
#include <iostream>

int main() {
    double d = 10.5;
    int i = (int)d; // C-style cast
    int j = static_cast<int>(d); // C++ style cast

    std::cout << "Original double: " << d << std::endl;
    std::cout << "C-style cast to int: " << i << std::endl;
    std::cout << "C++ style cast (static_cast) to int: " << j << std::endl;

    return 0;
}
