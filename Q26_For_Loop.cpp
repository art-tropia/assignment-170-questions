/*
 * Question: 26. Program using for loop to print series.
 */
#include <iostream>

int main() {
    int n;
    std::cout << "Enter n: ";
    std::cin >> n;

    std::cout << "Series up to " << n << ": ";
    for (int i = 1; i <= n; i++) {
        std::cout << i << " ";
    }
    std::cout << std::endl;

    return 0;
}
