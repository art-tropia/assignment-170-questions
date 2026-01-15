/*
 * Question: 148. Program throwing string exception.
 */
#include <iostream>

int main() {
    try {
        throw "String Error";
    } catch (const char* msg) {
        std::cout << "Caught: " << msg << std::endl;
    }
    return 0;
}
