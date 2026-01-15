/*
 * Question: 27. Program using while loop to print table.
 */
#include <iostream>

int main() {
    int num;
    std::cout << "Enter number to print table: ";
    std::cin >> num;

    int i = 1;
    while (i <= 10) {
        std::cout << num << " * " << i << " = " << num * i << std::endl;
        i++;
    }

    return 0;
}
