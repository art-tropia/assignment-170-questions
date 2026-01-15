/*
 * Question: 162. Program performing safe file operations using exceptions.
 */
#include <iostream>
#include <fstream>

int main() {
    try {
        std::ifstream file("non_existent.txt");
        if (!file) throw std::runtime_error("File open failed");
    } catch (const std::exception& e) {
        std::cout << "Safe File Ops: " << e.what() << std::endl;
    }
    return 0;
}
