/*
 * Question: 149. Program throwing multiple types of exceptions.
 */
#include <iostream>

void check(int type) {
    if (type == 1) throw 1;
    if (type == 2) throw "error";
}

int main() {
    for (int i = 1; i <= 2; i++) {
        try { check(i); }
        catch (int e) { std::cout << "Caught int: " << e << std::endl; }
        catch (const char* e) { std::cout << "Caught string: " << e << std::endl; }
    }
    return 0;
}
