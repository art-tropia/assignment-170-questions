/*
 * Question: 71. Program with static data member.
 */
#include <iostream>

class StaticTest {
public:
    static int sharedVal;
    void show() { std::cout << "Shared Value: " << sharedVal << std::endl; }
};

int StaticTest::sharedVal = 0;

int main() {
    StaticTest t1, t2;
    t1.sharedVal = 10;
    t2.show();
    t2.sharedVal = 20;
    t1.show();
    return 0;
}
