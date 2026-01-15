/*
 * Question: 131. Program using file opening modes.
 */
#include <iostream>
#include <fstream>

int main() {
    std::fstream file;
    // ios::in | ios::out | ios::trunc
    file.open("modes.txt", std::ios::out);
    file << "Testing modes." << std::endl;
    file.close();
    std::cout << "Done." << std::endl;
    return 0;
}
