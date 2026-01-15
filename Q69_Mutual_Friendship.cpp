/*
 * Question: 69. Program showing “friendship is not mutual”.
 */
#include <iostream>

class A {
    int secret = 42;
public:
    friend class B; // B is friend of A
};

class B {
public:
    void lookAtA(A a) { std::cout << "B sees A's secret: " << a.secret << std::endl; }
    // int bSecret = 100;
};

// class A cannot see B's private members unless B also declares A as a friend.

int main() {
    A a;
    B b;
    b.lookAtA(a);
    std::cout << "B is friend of A, but A is not necessarily friend of B." << std::endl;
    return 0;
}
