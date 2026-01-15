/*
 * Question: 153. Program defining user-defined exception class.
 */
#include <iostream>
#include <exception>

class MyEx : public std::exception {
public:
    const char* what() const throw() { return "My Custom Error"; }
};

int main() {
    try { throw MyEx(); }
    catch (MyEx& e) { std::cout << e.what() << std::endl; }
    return 0;
}
