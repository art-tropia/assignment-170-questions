/*
 * Question: 167. Program catching exceptions thrown by new operator.
 */
#include <iostream>
#include <new>

int main() {
    try {
        while(true) { new long long[100000000]; }
    } catch (std::bad_alloc& e) {
        std::cout << "Memory exhausted: " << e.what() << std::endl;
    }
    return 0;
}
