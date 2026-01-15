/*
 * Question: 74. Program with constant member function.
 */
#include <iostream>

class Value {
    int v;
public:
    Value(int val) : v(val) {}
    int get() const { // Const member function
        return v;
    }
    void set(int val) { v = val; }
};

int main() {
    Value obj(5);
    std::cout << "Value: " << obj.get() << std::endl;
    return 0;
}
