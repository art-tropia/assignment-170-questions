/*
 * Question: 75. Program implementing Abstract Data Type (Stack).
 */
#include <iostream>

class Stack {
    int arr[100];
    int top;
public:
    Stack() : top(-1) {}
    void push(int val) {
        if (top >= 99) std::cout << "Stack overflow" << std::endl;
        else arr[++top] = val;
    }
    int pop() {
        if (top < 0) { std::cout << "Stack underflow" << std::endl; return -1; }
        else return arr[top--];
    }
    void display() {
        for (int i = 0; i <= top; i++) std::cout << arr[i] << " ";
        std::cout << std::endl;
    }
};

int main() {
    Stack s;
    s.push(10); s.push(20); s.push(30);
    s.display();
    std::cout << "Popped: " << s.pop() << std::endl;
    s.display();
    return 0;
}
