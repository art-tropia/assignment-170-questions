/*
 * Question: 136. Program checking if file exists.
 */
#include <iostream>
#include <fstream>

int main() {
    std::ifstream f("example.txt");
    if (f.good()) std::cout << "File exists" << std::endl;
    else std::cout << "File does not exist" << std::endl;
    return 0;
}
