/*
 * Question: 163. Program validating user input using exceptions.
 */
#include <iostream>

int main() {
    int age;
    std::cout << "Enter age (0-120): ";
    std::cin >> age;
    try {
        if (age < 0 || age > 120) throw "Invalid age Range";
        std::cout << "Age: " << age << std::endl;
    } catch (const char* msg) {
        std::cout << "Error: " << msg << std::endl;
    }
    return 0;
}
