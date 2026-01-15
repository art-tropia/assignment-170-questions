/*
 * Question: 31. Program to input and display array elements.
 */
#include <iostream>

int main() {
    int n;
    std::cout << "Enter number of elements: ";
    std::cin >> n;

    int arr[100];
    std::cout << "Enter " << n << " elements: ";
    for (int i = 0; i < n; i++) {
        std::cin >> arr[i];
    }

    std::cout << "Array elements: ";
    for (int i = 0; i < n; i++) {
        std::cout << arr[i] << " ";
    }
    std::cout << std::endl;

    return 0;
}
