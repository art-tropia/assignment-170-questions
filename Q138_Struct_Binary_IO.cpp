/*
 * Question: 138. Program storing and retrieving structures in binary file.
 */
#include <iostream>
#include <fstream>

struct Point { int x, y; };

int main() {
    Point p1 = {10, 20};
    std::ofstream out("point.bin", std::ios::binary);
    out.write((char*)&p1, sizeof(p1));
    out.close();

    Point p2;
    std::ifstream in("point.bin", std::ios::binary);
    in.read((char*)&p2, sizeof(p2));
    std::cout << "Point: " << p2.x << ", " << p2.y << std::endl;
    return 0;
}
