/*
 * Question: 125. Program demonstrating file creation.
 */
#include <iostream>
#include <fstream>

int main() {
    std::ofstream outfile("test.txt");
    if (outfile.is_open()) {
        std::cout << "File 'test.txt' created successfully." << std::endl;
        outfile.close();
    } else {
        std::cout << "Error creating file." << std::endl;
    }
    return 0;
}
