/*
 * Question: 108. Program polymorphic array of objects.
 */
#include <iostream>

class Base {
public:
    virtual void show() { std::cout << "Base" << std::endl; }
};

class D1 : public Base { public: void show() override { std::cout << "D1" << std::endl; } };
class D2 : public Base { public: void show() override { std::cout << "D2" << std::endl; } };

int main() {
    Base* arr[2];
    arr[0] = new D1();
    arr[1] = new D2();

    for(int i=0; i<2; i++) arr[i]->show();

    delete arr[0]; delete arr[1];
    return 0;
}
