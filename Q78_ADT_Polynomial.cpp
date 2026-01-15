/*
 * Question: 78. Program implementing ADT Polynomial.
 */
#include <iostream>

struct Term {
    int coeff;
    int exp;
};

class Polynomial {
    Term terms[10];
    int n;
public:
    Polynomial(int count) : n(count) {}
    void input() {
        for (int i = 0; i < n; i++) {
            std::cout << "Enter coeff and exp for term " << i + 1 << ": ";
            std::cin >> terms[i].coeff >> terms[i].exp;
        }
    }
    void display() {
        for (int i = 0; i < n; i++) {
            std::cout << terms[i].coeff << "x^" << terms[i].exp;
            if (i < n - 1) std::cout << " + ";
        }
        std::cout << std::endl;
    }
};

int main() {
    Polynomial p(2);
    p.input();
    p.display();
    return 0;
}
