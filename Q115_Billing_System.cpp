/*
 * Question: 115. Program implementing customer billing system.
 */
#include <iostream>
#include <string>

class Bill {
    std::string item;
    double price;
    int qty;
public:
    Bill(std::string it, double p, int q) : item(it), price(p), qty(q) {}
    void print() { std::cout << item << " x" << qty << " Total: " << price * qty << std::endl; }
};

int main() {
    Bill b("Laptop", 1000, 2);
    b.print();
    return 0;
}
