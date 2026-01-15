/*
 * Question: 44. Program to read and display employee details using class.
 */
#include <iostream>
#include <string>

class Employee {
    int id;
    std::string name;
    float salary;
public:
    void input() {
        std::cout << "Enter ID, Name, Salary: ";
        std::cin >> id >> name >> salary;
    }
    void display() {
        std::cout << "ID: " << id << ", Name: " << name << ", Salary: " << salary << std::endl;
    }
};

int main() {
    Employee e;
    e.input();
    e.display();
    return 0;
}
