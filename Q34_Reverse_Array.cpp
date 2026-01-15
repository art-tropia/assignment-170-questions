/*
 * Question: 34. Program to reverse an array.
 */
#include <iostream>

int main() {
    int n, arr[100];
    std::cout << "Enter number of elements: ";
    std::cin >> n;

    for (int i = 0; i < n; i++) std::cin >> arr[i];

    for (int i = 0; i < n / 2; i++) {
        int temp = arr[i];
        arr[i] = arr[n - 1 - i];
        arr[n - 1 - i] = temp;
    }

    std::cout << "Reversed array: ";
    for (int i = 0; i < n; i++) std::cout << arr[i] << " ";
    std::cout << std::endl;

    return 0;
}
