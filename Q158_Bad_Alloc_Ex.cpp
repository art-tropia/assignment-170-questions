/*
 * Question: 158. Program handling memory allocation failure using exception.
 */
#include <iostream>
#include <new>

int main() {
    try {
        long long* arr = new long long[9999999999999]; // Unlikely to succeed
    } catch (std::bad_alloc& e) {
        std::cout << "Alloc failed: " << e.what() << std::endl;
    }
    return 0;
}
