/*
 * Question: 8. Program to find ASCII value of a character.
 */
#include <iostream>

int main() {
    char c;
    std::cout << "Enter a character: ";
    std::cin >> c;

    std::cout << "ASCII value of " << c << " is " << (int)c << std::endl;

    return 0;
}
