/*
 * Question: 161. Program demonstrating exception propagation.
 */
#include <iostream>

void level3() { throw 100; }
void level2() { level3(); }
void level1() { level2(); }

int main() {
    try { level1(); }
    catch (int e) { std::cout << "Propagated exception caught: " << e << std::endl; }
    return 0;
}
