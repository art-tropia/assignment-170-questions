/*
 * Question: 94. Program using inheritance for student mark processing.
 */
#include <iostream>
#include <string>

class Student {
protected:
    std::string name;
    int roll;
public:
    void getBasic() {
        std::cout << "Enter name and roll: ";
        std::cin >> name >> roll;
    }
};

class Marks : public Student {
protected:
    int m1, m2;
public:
    void getMarks() {
        std::cout << "Enter marks for 2 subjects: ";
        std::cin >> m1 >> m2;
    }
    void showResult() {
        std::cout << "Name: " << name << ", Total: " << m1 + m2 << std::endl;
    }
};

int main() {
    Marks m;
    m.getBasic();
    m.getMarks();
    m.showResult();
    return 0;
}
