/*
 * Question: 3. Program to swap two numbers using a third variable.
 */
#include <iostream>

int main() {
    int a, b, temp;
    std::cout << "Enter two numbers: ";
    std::cin >> a >> b;

    std::cout << "Before swap: a = " << a << ", b = " << b << std::endl;

    temp = a;
    a = b;
    b = temp;

    std::cout << "After swap: a = " << a << ", b = " << b << std::endl;

    return 0;
}
