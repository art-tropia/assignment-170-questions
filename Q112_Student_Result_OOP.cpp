/*
 * Question: 112. Program implementing student result processing using OOP.
 */
#include <iostream>
#include <string>

class Result {
    std::string name;
    int marks[3];
public:
    void input() {
        std::cout << "Enter name and 3 subject marks: ";
        std::cin >> name >> marks[0] >> marks[1] >> marks[2];
    }
    void process() {
        int total = marks[0] + marks[1] + marks[2];
        std::cout << name << " Total: " << total << " Average: " << total/3.0 << std::endl;
    }
};

int main() {
    Result res;
    res.input();
    res.process();
    return 0;
}
