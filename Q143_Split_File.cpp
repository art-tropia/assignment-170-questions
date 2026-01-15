/*
 * Question: 143. Program splitting a file into two.
 */
#include <iostream>
#include <fstream>
#include <string>

int main() {
    std::ifstream in("merged.txt");
    std::ofstream part1("part1.txt"), part2("part2.txt");
    std::string line;
    int count = 0;
    while (std::getline(in, line)) {
        if (count++ % 2 == 0) part1 << line << std::endl;
        else part2 << line << std::endl;
    }
    std::cout << "Split merged.txt into part1 and part2" << std::endl;
    return 0;
}
