/*
 * Question: 144. Program formatted I/O with manipulators.
 */
#include <iostream>
#include <iomanip>

int main() {
    std::cout << std::hex << 255 << " (hex)" << std::endl;
    std::cout << std::oct << 255 << " (oct)" << std::endl;
    std::cout << std::dec << std::setfill('*') << std::setw(10) << 42 << " (padded)" << std::endl;
    return 0;
}
