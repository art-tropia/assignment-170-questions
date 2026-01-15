/*
 * Question: 23. Program using nested if.
 */
#include <iostream>

int main() {
    int a, b, c;
    std::cout << "Enter three numbers: ";
    std::cin >> a >> b >> c;

    if (a >= b) {
        if (a >= c)
            std::cout << "Largest: " << a << std::endl;
        else
            std::cout << "Largest: " << c << std::endl;
    } else {
        if (b >= c)
            std::cout << "Largest: " << b << std::endl;
        else
            std::cout << "Largest: " << c << std::endl;
    }

    return 0;
}
