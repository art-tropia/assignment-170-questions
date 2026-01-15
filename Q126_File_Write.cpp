/*
 * Question: 126. Program writing to a file.
 */
#include <iostream>
#include <fstream>

int main() {
    std::ofstream outfile("example.txt");
    if (outfile.is_open()) {
        outfile << "Writing this line to a file." << std::endl;
        outfile.close();
        std::cout << "Data written to example.txt" << std::endl;
    }
    return 0;
}
