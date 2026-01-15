/*
 * Question: 113. Program implementing library management system.
 */
#include <iostream>
#include <string>

class Library {
    std::string book;
    bool isIssued;
public:
    Library(std::string b) : book(b), isIssued(false) {}
    void issue() { isIssued = true; std::cout << book << " issued." << std::endl; }
    void returnBook() { isIssued = false; std::cout << book << " returned." << std::endl; }
};

int main() {
    Library lib("C++ Programming");
    lib.issue();
    lib.returnBook();
    return 0;
}
