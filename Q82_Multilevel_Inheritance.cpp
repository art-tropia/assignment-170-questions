/*
 * Question: 82. Program for multilevel inheritance.
 */
#include <iostream>

class Animal {
public:
    void eat() { std::cout << "Eating..." << std::endl; }
};

class Mammal : public Animal {
public:
    void breathe() { std::cout << "Breathing..." << std::endl; }
};

class Dog : public Mammal {
public:
    void bark() { std::cout << "Barking..." << std::endl; }
};

int main() {
    Dog d;
    d.eat();
    d.breathe();
    d.bark();
    return 0;
}
