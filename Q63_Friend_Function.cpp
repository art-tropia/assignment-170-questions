/*
 * Question: 63. Program with friend function accessing private data.
 */
#include <iostream>

class Box {
    double width;
public:
    Box() : width(0) {}
    friend void setWidth(Box &b, double w);
    void showWidth() { std::cout << "Width: " << width << std::endl; }
};

void setWidth(Box &b, double w) {
    b.width = w; // Access private member
}

int main() {
    Box b;
    setWidth(b, 10.5);
    b.showWidth();
    return 0;
}
