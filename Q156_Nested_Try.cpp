/*
 * Question: 156. Program with nested try blocks.
 */
#include <iostream>

int main() {
    try {
        std::cout << "Outer try" << std::endl;
        try {
            std::cout << "Inner try" << std::endl;
            throw 1.1;
        } catch (double e) { std::cout << "Inner catch double: " << e << std::endl; throw; }
    } catch (double e) { std::cout << "Outer catch double: " << e << std::endl; }
    return 0;
}
