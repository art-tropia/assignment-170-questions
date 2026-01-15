/*
 * Question: 104. Program with dynamic method dispatch.
 */
#include <iostream>

class Animal {
public:
    virtual void sound() { std::cout << "Some sound" << std::endl; }
};

class Cat : public Animal {
public:
    void sound() override { std::cout << "Meow" << std::endl; }
};

class Dog : public Animal {
public:
    void sound() override { std::cout << "Woof" << std::endl; }
};

int main() {
    Animal *a;
    Cat c; Dog d;
    
    a = &c; a->sound();
    a = &d; a->sound();
    return 0;
}
