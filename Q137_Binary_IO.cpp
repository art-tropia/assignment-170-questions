/*
 * Question: 137. Program demonstrating binary file read/write.
 */
#include <iostream>
#include <fstream>

int main() {
    int data = 12345;
    std::ofstream out("binary.bin", std::ios::binary);
    out.write((char*)&data, sizeof(data));
    out.close();

    int readData;
    std::ifstream in("binary.bin", std::ios::binary);
    in.read((char*)&readData, sizeof(readData));
    std::cout << "Read binary: " << readData << std::endl;
    return 0;
}
