/*
 * Question: 139. Program to search a record in file.
 */
#include <iostream>
#include <fstream>
#include <string>

int main() {
    std::ifstream in("students.txt");
    std::string name, search;
    int roll;
    std::cout << "Enter name to search: ";
    std::cin >> search;
    bool found = false;
    while (in >> name >> roll) {
        if (name == search) {
            std::cout << "Found: " << name << ", Roll: " << roll << std::endl;
            found = true;
            break;
        }
    }
    if (!found) std::cout << "Not found" << std::endl;
    return 0;
}
