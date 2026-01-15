/*
 * Question: 164. Program with multiple catch blocks for same try.
 */
#include <iostream>

int main() {
    try {
        throw 'A';
    } catch (int e) { std::cout << "Caught int" << std::endl; }
    catch (char e) { std::cout << "Caught char: " << e << std::endl; }
    catch (...) { std::cout << "Caught something else" << std::endl; }
    return 0;
}
