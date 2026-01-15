/*
 * Question: 81. Program for single inheritance.
 */
#include <iostream>

class Animal {
public:
    void eat() { std::cout << "Animal is eating..." << std::endl; }
};

class Dog : public Animal {
public:
    void bark() { std::cout << "Dog is barking..." << std::endl; }
};

int main() {
    Dog d;
    d.eat();
    d.bark();
    return 0;
}
