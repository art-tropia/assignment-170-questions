/*
 * Question: 79. Program demonstrating information hiding.
 */
#include <iostream>

class Securable {
private:
    int sensitiveData;
public:
    Securable(int d) : sensitiveData(d) {}
    void showPublicInfo() {
        std::cout << "Public Info: This class hides its data." << std::endl;
    }
    // No getter/setter for sensitiveData = Information Hiding
};

int main() {
    Securable s(12345);
    s.showPublicInfo();
    // s.sensitiveData; // Not accessible
    return 0;
}
