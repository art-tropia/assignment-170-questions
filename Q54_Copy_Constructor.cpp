/*
 * Question: 54. Program with copy constructor.
 */
#include <iostream>

class Point {
    int x, y;
public:
    Point(int x1, int y1) : x(x1), y(y1) {}
    Point(const Point &p) {
        x = p.x;
        y = p.y;
        std::cout << "Copy constructor called" << std::endl;
    }
    void display() { std::cout << "(" << x << ", " << y << ")" << std::endl; }
};

int main() {
    Point p1(10, 15);
    Point p2 = p1;
    p2.display();
    return 0;
}
