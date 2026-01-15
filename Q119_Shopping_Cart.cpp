/*
 * Question: 119. Program implementing online shopping cart (OOP).
 */
#include <iostream>
#include <vector>

class Cart {
    std::vector<std::string> items;
public:
    void add(std::string item) { items.push_back(item); }
    void show() {
        std::cout << "Cart: ";
        for(const auto& i : items) std::cout << i << " ";
        std::cout << std::endl;
    }
};

int main() {
    Cart myCart;
    myCart.add("Milk"); myCart.add("Bread");
    myCart.show();
    return 0;
}
