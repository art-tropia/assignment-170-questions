/*
 * Question: 39. Program demonstrating pointers basic operations.
 */
#include <iostream>

int main() {
    int var = 20;
    int *ptr;

    ptr = &var;

    std::cout << "Value of var: " << var << std::endl;
    std::cout << "Address of var: " << &var << std::endl;
    std::cout << "Value stored in ptr: " << ptr << std::endl;
    std::cout << "Value pointed by ptr: " << *ptr << std::endl;

    return 0;
}
