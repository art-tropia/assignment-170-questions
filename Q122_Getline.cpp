/*
 * Question: 122. Program reading full sentence using getline.
 */
#include <iostream>
#include <string>

int main() {
    std::string sentence;
    std::cout << "Enter a full sentence: ";
    std::getline(std::cin >> std::ws, sentence);
    std::cout << "Sentence: " << sentence << std::endl;
    return 0;
}
