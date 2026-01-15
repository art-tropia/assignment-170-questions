/*
 * Question: 154. Program handling division-by-zero exception.
 */
#include <iostream>

int main() {
    double a, b;
    std::cout << "Enter a and b: ";
    std::cin >> a >> b;
    try {
        if (b == 0) throw "Division by zero!";
        std::cout << "Result: " << a / b << std::endl;
    } catch (const char* e) {
        std::cout << e << std::endl;
    }
    return 0;
}
