/*
 * Question: 152. Program rethrowing an exception.
 */
#include <iostream>

void inner() {
    try { throw 20; }
    catch (int e) {
        std::cout << "Partial handle, rethrowing..." << std::endl;
        throw; // Rethrow
    }
}

int main() {
    try { inner(); }
    catch (int e) { std::cout << "Final catch: " << e << std::endl; }
    return 0;
}
