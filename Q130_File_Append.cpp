/*
 * Question: 130. Program to append data to file.
 */
#include <iostream>
#include <fstream>

int main() {
    std::ofstream outfile("example.txt", std::ios::app);
    if (outfile.is_open()) {
        outfile << "Appended line." << std::endl;
        outfile.close();
        std::cout << "Data appended." << std::endl;
    }
    return 0;
}
