/*
 * Question: 111. Program implementing bank account system using OOP.
 */
#include <iostream>
#include <string>

class Account {
    std::string owner;
    double balance;
public:
    Account(std::string name, double bal) : owner(name), balance(bal) {}
    void deposit(double amt) { balance += amt; }
    void withdraw(double amt) { if(amt <= balance) balance -= amt; }
    void show() { std::cout << owner << " Balance: " << balance << std::endl; }
};

int main() {
    Account acc("Alice", 1000);
    acc.deposit(500);
    acc.withdraw(200);
    acc.show();
    return 0;
}
