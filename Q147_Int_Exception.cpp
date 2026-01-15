/*
 * Question: 147. Program throwing an integer exception.
 */
#include <iostream>

int main() {
    int x = -1;
    try {
        if (x < 0) throw 404;
    } catch (int e) {
        std::cout << "Error Code: " << e << std::endl;
    }
    return 0;
}
