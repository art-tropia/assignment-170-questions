/*
 * Question: 29. Program demonstrating break and continue.
 */
#include <iostream>

int main() {
    std::cout << "Using break at 5 and skipping 3 with continue:" << std::endl;
    for (int i = 1; i <= 10; i++) {
        if (i == 3) continue;
        if (i == 6) break;
        std::cout << i << " ";
    }
    std::cout << std::endl;

    return 0;
}
