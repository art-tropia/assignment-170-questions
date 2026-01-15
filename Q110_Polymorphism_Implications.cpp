/*
 * Question: 110. Program showing implications of polymorphism.
 */
#include <iostream>

class Logger {
public:
    virtual void log(const char* msg) { std::cout << "Console: " << msg << std::endl; }
};

class FileLogger : public Logger {
public:
    void log(const char* msg) override { std::cout << "File: " << msg << std::endl; }
};

void run(Logger& l) {
    l.log("Polymorphism is flexible!");
}

int main() {
    Logger cl; FileLogger fl;
    run(cl); run(fl);
    return 0;
}
