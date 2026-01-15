/*
 * Question: 132. Program reading/writing objects to a file.
 */
#include <iostream>
#include <fstream>

class Student {
public:
    int id; char name[20];
};

int main() {
    Student s = {1, "Bob"};
    std::ofstream out("stud.dat", std::ios::binary);
    out.write((char*)&s, sizeof(s));
    out.close();

    Student s2;
    std::ifstream in("stud.dat", std::ios::binary);
    in.read((char*)&s2, sizeof(s2));
    std::cout << "Read: " << s2.id << ", " << s2.name << std::endl;
    return 0;
}
