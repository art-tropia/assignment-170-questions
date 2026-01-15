/*
 * Question: 142. Program merging two files.
 */
#include <iostream>
#include <fstream>

int main() {
    std::ofstream f1("file1.txt"); f1 << "Content of File 1"; f1.close();
    std::ofstream f2("file2.txt"); f2 << "Content of File 2"; f2.close();

    std::ofstream merge("merged.txt");
    std::ifstream in1("file1.txt"), in2("file2.txt");
    merge << in1.rdbuf() << "\n" << in2.rdbuf();
    std::cout << "Merged into merged.txt" << std::endl;
    return 0;
}
