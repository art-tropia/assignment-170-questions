/*
 * Question: 95. Program using inheritance for employee-payroll.
 */
#include <iostream>

class Employee {
protected:
    int id;
    float basic;
public:
    void getEmp() {
        std::cout << "Enter ID and Basic Salary: ";
        std::cin >> id >> basic;
    }
};

class Payroll : public Employee {
    float allowance;
public:
    void calc() {
        allowance = basic * 0.1;
    }
    void show() {
        std::cout << "ID: " << id << ", Total: " << basic + allowance << std::endl;
    }
};

int main() {
    Payroll p;
    p.getEmp();
    p.calc();
    p.show();
    return 0;
}
