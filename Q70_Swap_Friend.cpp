/*
 * Question: 70. Program using friend to swap private values.
 */
#include <iostream>

class Class2;

class Class1 {
    int val;
public:
    Class1(int v) : val(v) {}
    friend void swap(Class1&, Class2&);
    void show() { std::cout << "Class1: " << val << " "; }
};

class Class2 {
    int val;
public:
    Class2(int v) : val(v) {}
    friend void swap(Class1&, Class2&);
    void show() { std::cout << "Class2: " << val << std::endl; }
};

void swap(Class1 &c1, Class2 &c2) {
    int temp = c1.val;
    c1.val = c2.val;
    c2.val = temp;
}

int main() {
    Class1 o1(10);
    Class2 o2(20);
    std::cout << "Before swap: "; o1.show(); o2.show();
    swap(o1, o2);
    std::cout << "After swap:  "; o1.show(); o2.show();
    return 0;
}
