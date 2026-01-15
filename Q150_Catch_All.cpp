/*
 * Question: 150. Program catching all exceptions using catch(...).
 */
#include <iostream>

int main() {
    try {
        throw 3.14; // Double
    } catch (...) {
        std::cout << "Caught unknown exception type" << std::endl;
    }
    return 0;
}
