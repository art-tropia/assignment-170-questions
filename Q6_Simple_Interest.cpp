/*
 * Question: 6. Program to calculate simple interest.
 */
#include <iostream>

int main() {
    float principal, rate, time, si;
    std::cout << "Enter principal, rate, and time: ";
    std::cin >> principal >> rate >> time;

    si = (principal * rate * time) / 100;

    std::cout << "Simple Interest: " << si << std::endl;

    return 0;
}
