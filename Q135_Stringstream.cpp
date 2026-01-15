/*
 * Question: 135. Program demonstrating string stream (stringstream).
 */
#include <iostream>
#include <sstream>
#include <string>

int main() {
    std::string data = "123 456.78 Hello";
    std::stringstream ss(data);
    int i; double d; std::string s;
    ss >> i >> d >> s;
    std::cout << "Parsed: " << i << ", " << d << ", " << s << std::endl;
    return 0;
}
