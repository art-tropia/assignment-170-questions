/*
 * Question: 40. Program using structure to store student details.
 */
#include <iostream>
#include <string>

struct Student {
    std::string name;
    int roll;
    float marks;
};

int main() {
    Student s;
    std::cout << "Enter name, roll number and marks: ";
    std::cin >> s.name >> s.roll >> s.marks;

    std::cout << "\nStudent Details:" << std::endl;
    std::cout << "Name: " << s.name << std::endl;
    std::cout << "Roll: " << s.roll << std::endl;
    std::cout << "Marks: " << s.marks << std::endl;

    return 0;
}
