/*
 * Question: 160. Program using exceptions with inheritance.
 */
#include <iostream>

class BaseEx {};
class DerivedEx : public BaseEx {};

int main() {
    try { throw DerivedEx(); }
    catch (DerivedEx& e) { std::cout << "Caught Derived" << std::endl; }
    catch (BaseEx& e) { std::cout << "Caught Base" << std::endl; }
    return 0;
}
