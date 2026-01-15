/*
 * Question: 37. Program for string length without using library function.
 */
#include <iostream>

int main() {
    char str[100];
    std::cout << "Enter a string: ";
    std::cin >> str;

    int length = 0;
    while (str[length] != '\0') {
        length++;
    }

    std::cout << "Length of string: " << length << std::endl;

    return 0;
}
