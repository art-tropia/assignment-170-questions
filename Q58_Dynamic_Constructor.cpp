/*
 * Question: 58. Program to dynamically allocate memory in constructor.
 */
#include <iostream>
#include <cstring>

class String {
    char *s;
public:
    String(const char *str) {
        s = new char[strlen(str) + 1];
        strcpy(s, str);
    }
    ~String() { delete[] s; }
    void print() { std::cout << s << std::endl; }
};

int main() {
    String str("Dynamic Memory Allocation");
    str.print();
    return 0;
}
