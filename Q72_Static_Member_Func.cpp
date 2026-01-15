/*
 * Question: 72. Program with static member function.
 */
#include <iostream>

class StaticFunc {
    static int count;
public:
    static void showCount() {
        std::cout << "Count is: " << count << std::endl;
    }
    StaticFunc() { count++; }
};

int StaticFunc::count = 0;

int main() {
    StaticFunc s1, s2;
    StaticFunc::showCount(); // Call without object
    return 0;
}
