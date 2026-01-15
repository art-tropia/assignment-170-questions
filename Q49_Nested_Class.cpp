/*
 * Question: 49. Program demonstrating nested classes.
 */
#include <iostream>

class Outer {
public:
    class Inner {
    public:
        void display() {
            std::cout << "This is Inner class" << std::endl;
        }
    };
    void display() {
        std::cout << "This is Outer class" << std::endl;
    }
};

int main() {
    Outer out;
    Outer::Inner in;
    out.display();
    in.display();
    return 0;
}
