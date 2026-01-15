/*
 * Question: 56. Program with destructor showing object destruction.
 */
#include <iostream>

class Demo {
public:
    Demo() { std::cout << "Object created" << std::endl; }
    ~Demo() { std::cout << "Object destroyed" << std::endl; }
};

int main() {
    Demo d;
    std::cout << "End of main scope" << std::endl;
    return 0;
}
