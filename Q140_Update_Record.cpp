/*
 * Question: 140. Program to update a record in file.
 */
#include <iostream>
#include <fstream>
#include <vector>
#include <string>

int main() {
    std::ifstream in("students.txt");
    std::string name, target;
    int roll, newRoll;
    std::cout << "Enter name to update roll: ";
    std::cin >> target;
    std::cout << "Enter new roll: ";
    std::cin >> newRoll;

    std::vector<std::string> lines;
    while (in >> name >> roll) {
        if (name == target) roll = newRoll;
        lines.push_back(name + " " + std::to_string(roll));
    }
    in.close();

    std::ofstream out("students.txt");
    for (const auto& l : lines) out << l << std::endl;
    std::cout << "Updated." << std::endl;
    return 0;
}
