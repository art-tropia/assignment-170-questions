/*
 * Question: 134. Program reading until EOF.
 */
#include <iostream>
#include <fstream>
#include <string>

int main() {
    std::ifstream in("students.txt");
    std::string data;
    while (in >> data) {
        std::cout << "Data: " << data << std::endl;
    }
    return 0;
}
