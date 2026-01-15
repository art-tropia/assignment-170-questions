/*
 * Question: 83. Program for multiple inheritance.
 */
#include <iostream>

class Flyer {
public:
    void fly() { std::cout << "Flying..." << std::endl; }
};

class Swimmer {
public:
    void swim() { std::cout << "Swimming..." << std::endl; }
};

class Duck : public Flyer, public Swimmer {
public:
    void quack() { std::cout << "Quacking..." << std::endl; }
};

int main() {
    Duck d;
    d.fly();
    d.swim();
    d.quack();
    return 0;
}
