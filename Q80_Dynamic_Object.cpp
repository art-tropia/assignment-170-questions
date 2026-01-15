/*
 * Question: 80. Program dynamic object creation & deletion using new/delete.
 */
#include <iostream>

class Dynamic {
public:
    Dynamic() { std::cout << "Dynamic object created" << std::endl; }
    ~Dynamic() { std::cout << "Dynamic object destroyed" << std::endl; }
};

int main() {
    Dynamic* ptr = new Dynamic();
    delete ptr;
    return 0;
}
