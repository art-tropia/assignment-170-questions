/*
 * Question: 46. Program to compare two objects.
 */
#include <iostream>

class Number {
    int val;
public:
    Number(int v) : val(v) {}
    bool isEqualTo(Number other) {
        return val == other.val;
    }
};

int main() {
    Number n1(10), n2(20), n3(10);
    std::cout << std::boolalpha;
    std::cout << "n1 == n2: " << n1.isEqualTo(n2) << std::endl;
    std::cout << "n1 == n3: " << n1.isEqualTo(n3) << std::endl;
    return 0;
}
