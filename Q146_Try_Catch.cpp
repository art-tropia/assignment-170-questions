/*
 * Question: 146. Program using try-catch block.
 */
#include <iostream>

int main() {
    try {
        std::cout << "Inside try" << std::endl;
        throw 10;
    } catch (int e) {
        std::cout << "Caught exception: " << e << std::endl;
    }
    return 0;
}
