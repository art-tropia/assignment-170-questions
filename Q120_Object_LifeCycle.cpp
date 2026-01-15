/*
 * Question: 120. Program demonstrating object life cycle.
 */
#include <iostream>

class Life {
public:
    Life() { std::cout << "Born" << std::endl; }
    void live() { std::cout << "Living..." << std::endl; }
    ~Life() { std::cout << "Gone" << std::endl; }
};

int main() {
    {
        Life obj;
        obj.live();
    } // obj dies here
    std::cout << "End of main" << std::endl;
    return 0;
}
