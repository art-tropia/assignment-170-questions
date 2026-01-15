/*
 * Question: 28. Program using do-while to print number series.
 */
#include <iostream>

int main() {
    int n;
    std::cout << "Enter n: ";
    std::cin >> n;

    int i = 1;
    if (n >= 1) {
        do {
            std::cout << i << " ";
            i++;
        } while (i <= n);
        std::cout << std::endl;
    }

    return 0;
}
