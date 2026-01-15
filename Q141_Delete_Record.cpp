/*
 * Question: 141. Program deleting a record in file.
 */
#include <iostream>
#include <fstream>
#include <vector>
#include <string>

int main() {
    std::ifstream in("students.txt");
    std::string name, target;
    int roll;
    std::cout << "Enter name to delete: ";
    std::cin >> target;

    std::vector<std::string> lines;
    while (in >> name >> roll) {
        if (name != target) {
            lines.push_back(name + " " + std::to_string(roll));
        }
    }
    in.close();

    std::ofstream out("students.txt");
    for (const auto& l : lines) out << l << std::endl;
    std::cout << "Deleted record for " << target << std::endl;
    return 0;
}
