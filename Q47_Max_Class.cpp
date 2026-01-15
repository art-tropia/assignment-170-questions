/*
 * Question: 47. Program to find largest of two numbers using class.
 */
#include <iostream>

class Finder {
public:
    int findMax(int a, int b) {
        return (a > b) ? a : b;
    }
};

int main() {
    Finder f;
    int x, y;
    std::cout << "Enter two numbers: ";
    std::cin >> x >> y;
    std::cout << "Max: " << f.findMax(x, y) << std::endl;
    return 0;
}
