/*
 * Question: 127. Program reading from a file.
 */
#include <iostream>
#include <fstream>
#include <string>

int main() {
    std::ifstream infile("example.txt");
    std::string line;
    if (infile.is_open()) {
        while (std::getline(infile, line)) {
            std::cout << "Read from file: " << line << std::endl;
        }
        infile.close();
    } else {
        std::cout << "Could not open example.txt (make sure to run Q126 first)" << std::endl;
    }
    return 0;
}
