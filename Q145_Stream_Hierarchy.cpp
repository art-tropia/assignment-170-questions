/*
 * Question: 145. Program to demonstrate stream class hierarchy.
 */
#include <iostream>
#include <fstream>

void info(std::ios& s) {
    if (s.good()) std::cout << "Stream is good" << std::endl;
}

int main() {
    info(std::cout);
    std::ofstream f("test.tmp");
    info(f);
    f.close();
    return 0;
}
