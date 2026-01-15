/*
 * Question: 17. Program Using conditional (ternary) operator.
 */
#include <iostream>

int main() {
    int a, b;
    std::cout << "Enter two numbers: ";
    std::cin >> a >> b;

    int max = (a > b) ? a : b;

    std::cout << "The larger number is: " << max << std::endl;

    return 0;
}
