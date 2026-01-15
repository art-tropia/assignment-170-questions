/*
 * Question: 50. Program to count number of objects using static variable.
 */
#include <iostream>

class Counter {
public:
    static int count;
    Counter() {
        count++;
    }
};

int Counter::count = 0;

int main() {
    Counter c1, c2, c3;
    std::cout << "Number of objects: " << Counter::count << std::endl;
    return 0;
}
