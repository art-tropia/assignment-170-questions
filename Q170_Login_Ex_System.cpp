/*
 * Question: 170. Program implementing login system with error exceptions.
 */
#include <iostream>
#include <string>

class LoginError {
public:
    std::string reason;
    LoginError(std::string r) : reason(r) {}
};

void login(std::string u, std::string p) {
    if (u != "admin") throw LoginError("Invalid Username");
    if (p != "1234") throw LoginError("Invalid Password");
    std::cout << "Login Successful!" << std::endl;
}

int main() {
    try {
        login("admin", "wrong");
    } catch (LoginError& e) {
        std::cout << "Login Failed: " << e.reason << std::endl;
    }
    return 0;
}
