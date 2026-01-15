/*
 * Question: 169. Program implementing bank withdrawal exception.
 */
#include <iostream>

class InsufficientFunds {};

class Bank {
    double balance = 500;
public:
    void withdraw(double amt) {
        if (amt > balance) throw InsufficientFunds();
        balance -= amt;
        std::cout << "Withdrawn. New Balance: " << balance << std::endl;
    }
};

int main() {
    Bank b;
    try {
        b.withdraw(1000);
    } catch (InsufficientFunds) {
        std::cout << "Error: Insufficient Funds!" << std::endl;
    }
    return 0;
}
