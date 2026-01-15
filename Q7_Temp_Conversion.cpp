/*
 * Question: 7. Program to convert temperature (C to F).
 */
#include <iostream>

int main() {
    float celsius, fahrenheit;
    std::cout << "Enter temperature in Celsius: ";
    std::cin >> celsius;

    fahrenheit = (celsius * 9 / 5) + 32;

    std::cout << celsius << " Celsius is " << fahrenheit << " Fahrenheit" << std::endl;

    return 0;
}
