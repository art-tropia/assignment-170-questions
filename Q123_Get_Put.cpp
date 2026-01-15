/*
 * Question: 123. Program demonstrating get(), put().
 */
#include <iostream>

int main() {
    char ch;
    std::cout << "Enter a character: ";
    std::cin.get(ch);
    std::cout << "You entered using put(): ";
    std::cout.put(ch);
    std::cout << std::endl;
    return 0;
}
