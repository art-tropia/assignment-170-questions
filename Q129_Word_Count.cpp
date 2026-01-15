/*
 * Question: 129. Program counting words in a file.
 */
#include <iostream>
#include <fstream>
#include <string>

int main() {
    std::ifstream file("example.txt");
    std::string word;
    int count = 0;
    while (file >> word) {
        count++;
    }
    std::cout << "Word count: " << count << std::endl;
    return 0;
}
