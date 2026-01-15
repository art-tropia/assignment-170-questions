/*
 * Question: 118. Program with aggregation of objects.
 */
#include <iostream>
#include <string>

class Address {
public:
    std::string city;
    Address(std::string c) : city(c) {}
};

class User {
    Address* addr; // Aggregation (refers to existing object)
public:
    User(Address* a) : addr(a) {}
    void show() { std::cout << "User in " << addr->city << std::endl; }
};

int main() {
    Address a("New York");
    User u(&a);
    u.show();
    return 0;
}
