/*
 * Question: 32. Program to find largest element in array.
 */
#include <iostream>

int main() {
    int n, arr[100];
    std::cout << "Enter number of elements: ";
    std::cin >> n;

    std::cout << "Enter elements: ";
    for (int i = 0; i < n; i++) std::cin >> arr[i];

    int max = arr[0];
    for (int i = 1; i < n; i++) {
        if (arr[i] > max) max = arr[i];
    }

    std::cout << "Largest element: " << max << std::endl;

    return 0;
}
