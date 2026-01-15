/*
 * Question: 168. Program implementing custom stack exception.
 */
#include <iostream>
#include <string>

class StackEx {
public:
    std::string msg;
    StackEx(std::string m) : msg(m) {}
};

class Stack {
    int arr[5], top;
public:
    Stack() : top(-1) {}
    void push(int v) {
        if (top == 4) throw StackEx("Stack Overflow");
        arr[++top] = v;
    }
};

int main() {
    Stack s;
    try {
        for(int i=0; i<10; i++) s.push(i);
    } catch (StackEx& e) {
        std::cout << e.msg << std::endl;
    }
    return 0;
}
