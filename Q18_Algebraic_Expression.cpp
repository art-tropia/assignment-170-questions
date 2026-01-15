/*
 * Question: 18. Program to evaluate an algebraic expression.
 */
#include <iostream>

int main() {
    // Evaluating x = (a + b) * (c - d) / e
    float a, b, c, d, e, result;
    std::cout << "Enter values for a, b, c, d, e: ";
    std::cin >> a >> b >> c >> d >> e;

    if (e != 0) {
        result = (a + b) * (c - d) / e;
        std::cout << "Result of (a + b) * (c - d) / e is: " << result << std::endl;
    } else {
        std::cout << "Error: Division by zero!" << std::endl;
    }

    return 0;
}
