/*
 * Question: 128. Program copying content from one file to another.
 */
#include <iostream>
#include <fstream>

int main() {
    std::ifstream src("example.txt");
    std::ofstream dest("copy_example.txt");
    if (src && dest) {
        dest << src.rdbuf();
        std::cout << "File copied successfully." << std::endl;
    }
    return 0;
}
