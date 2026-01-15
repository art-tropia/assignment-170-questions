/*
 * Question: 61. Program demonstrating this pointer.
 */
#include <iostream>

class ThisDemo {
    int x;
public:
    void setX(int x) {
        this->x = x; // Using this to distinguish member from parameter
    }
    void showX() {
        std::cout << "Value of x using this: " << this->x << std::endl;
    }
};

int main() {
    ThisDemo obj;
    obj.setX(10);
    obj.showX();
    return 0;
}
