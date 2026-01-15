/*
 * Question: 42. Program with private and public members.
 */
#include <iostream>

class Box {
private:
    double length;
public:
    void setLength(double len) {
        length = len;
    }
    double getLength() {
        return length;
    }
};

int main() {
    Box b;
    b.setLength(10.5);
    std::cout << "Length of box: " << b.getLength() << std::endl;
    return 0;
}
