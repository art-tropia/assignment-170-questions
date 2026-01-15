/*
 * Question: 52. Program with parameterized constructor.
 */
#include <iostream>

class Item {
    int id;
public:
    Item(int i) : id(i) {
        std::cout << "Parameterized constructor called with id: " << id << std::endl;
    }
};

int main() {
    Item it(101);
    return 0;
}
