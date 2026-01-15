/*
 * Question: 155. Program handling array out-of-bound exception.
 */
#include <iostream>

int main() {
    int arr[3] = {1, 2, 3};
    int idx;
    std::cout << "Enter index (0-2): ";
    std::cin >> idx;
    try {
        if (idx < 0 || idx >= 3) throw "Index out of bounds!";
        std::cout << "Val: " << arr[idx] << std::endl;
    } catch (const char* e) {
        std::cout << e << std::endl;
    }
    return 0;
}
