/*
 * Question: 33. Program to find second-largest element.
 */
#include <iostream>
#include <climits>

int main() {
    int n, arr[100];
    std::cout << "Enter number of elements: ";
    std::cin >> n;

    std::cout << "Enter elements: ";
    for (int i = 0; i < n; i++) std::cin >> arr[i];

    int first = INT_MIN, second = INT_MIN;
    for (int i = 0; i < n; i++) {
        if (arr[i] > first) {
            second = first;
            first = arr[i];
        } else if (arr[i] > second && arr[i] != first) {
            second = arr[i];
        }
    }

    if (second == INT_MIN) std::cout << "No second largest element." << std::endl;
    else std::cout << "Second largest element: " << second << std::endl;

    return 0;
}
