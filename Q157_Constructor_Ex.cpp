/*
 * Question: 157. Program handling constructor exceptions.
 */
#include <iostream>

class Fail {
public:
    Fail() {
        std::cout << "Constructor failing..." << std::endl;
        throw "Construction failed";
    }
};

int main() {
    try { Fail f; }
    catch (const char* e) { std::cout << "Caught: " << e << std::endl; }
    return 0;
}
