/*
 * Question: 45. Program to perform arithmetic operations using class.
 */
#include <iostream>

class Calculator {
public:
    int add(int a, int b) { return a + b; }
    int subtract(int a, int b) { return a - b; }
    int multiply(int a, int b) { return a * b; }
    float divide(int a, int b) { 
        if (b != 0) return (float)a / b;
        return 0;
    }
};

int main() {
    Calculator calc;
    int x = 10, y = 5;
    std::cout << "Add: " << calc.add(x, y) << std::endl;
    std::cout << "Subtract: " << calc.subtract(x, y) << std::endl;
    std::cout << "Multiply: " << calc.multiply(x, y) << std::endl;
    std::cout << "Divide: " << calc.divide(x, y) << std::endl;
    return 0;
}
