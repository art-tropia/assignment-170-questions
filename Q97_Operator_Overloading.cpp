/*
 * Question: 97. Program demonstrating operator overloading.
 */
#include <iostream>

class Box {
    double vol;
public:
    Box(double v) : vol(v) {}
    Box operator+(const Box& b) {
        return Box(this->vol + b.vol);
    }
    void show() { std::cout << "Volume: " << vol << std::endl; }
};

int main() {
    Box b1(10), b2(20);
    Box b3 = b1 + b2; // Operator + overloaded
    b3.show();
    return 0;
}
