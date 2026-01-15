/*
 * Question: 124. Program demonstrating formatted output using setw, setprecision.
 */
#include <iostream>
#include <iomanip>

int main() {
    double pi = 3.14159265;
    std::cout << "Formatted PI:" << std::endl;
    std::cout << "Setw(10): |" << std::setw(10) << pi << "|" << std::endl;
    std::cout << "Precision 3: " << std::setprecision(3) << pi << std::endl;
    return 0;
}
