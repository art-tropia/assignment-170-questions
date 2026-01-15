/*
 * Question: 41. Program defining a simple class and creating objects.
 */
#include <iostream>

class Simple {
public:
    void display() {
        std::cout << "Hello from Simple class!" << std::endl;
    }
};

int main() {
    Simple obj;
    obj.display();
    return 0;
}
