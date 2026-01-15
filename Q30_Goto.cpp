/*
 * Question: 30. Program to show use of goto.
 */
#include <iostream>

int main() {
    int i = 1;
loop:
    std::cout << i << " ";
    if (++i <= 5) goto loop;
    std::cout << std::endl;

    return 0;
}
