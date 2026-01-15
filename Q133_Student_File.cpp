/*
 * Question: 133. Program to store student data using file handling.
 */
#include <iostream>
#include <fstream>
#include <string>

int main() {
    std::ofstream out("students.txt", std::ios::app);
    std::string name; int roll;
    std::cout << "Enter student name and roll: ";
    std::cin >> name >> roll;
    out << name << " " << roll << std::endl;
    out.close();
    std::cout << "Stored." << std::endl;
    return 0;
}
