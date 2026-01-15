/*
 * Question: 51. Program with default constructor.
 */
#include <iostream>

class DefaultConst {
public:
    DefaultConst() {
        std::cout << "Default constructor called" << std::endl;
    }
};

int main() {
    DefaultConst obj;
    return 0;
}
