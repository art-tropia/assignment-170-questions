/*
 * Question: 116. Program implementing product inventory OOP model.
 */
#include <iostream>
#include <string>

class Product {
    std::string name;
    int stock;
public:
    Product(std::string n, int s) : name(n), stock(s) {}
    void addStock(int n) { stock += n; }
    void show() { std::cout << name << " Stock: " << stock << std::endl; }
};

int main() {
    Product p("Phone", 50);
    p.addStock(10);
    p.show();
    return 0;
}
