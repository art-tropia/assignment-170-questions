/*
 * Question: 159. Program using exception specifications.
 */
#include <iostream>

// Note: Exception specifications (throw()) are deprecated in modern C++, replaced by noexcept
void func() throw(int) {
    throw 1;
}

int main() {
    try { func(); }
    catch (int e) { std::cout << "Caught specified int: " << e << std::endl; }
    return 0;
}
