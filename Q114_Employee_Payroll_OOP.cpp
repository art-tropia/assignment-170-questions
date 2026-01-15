/*
 * Question: 114. Program implementing employee payroll system.
 */
#include <iostream>

class Payroll {
    int id;
    double base;
public:
    Payroll(int i, double b) : id(i), base(b) {}
    double getNet() { return base - (base * 0.1); } // 10% tax
    void show() { std::cout << "Emp " << id << " Net: " << getNet() << std::endl; }
};

int main() {
    Payroll p(1, 5000);
    p.show();
    return 0;
}
