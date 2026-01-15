/*
 * Question: 38. Program to copy string manually.
 */
#include <iostream>

int main() {
    char s1[100], s2[100];
    std::cout << "Enter string s1: ";
    std::cin >> s1;

    int i;
    for (i = 0; s1[i] != '\0'; ++i) {
        s2[i] = s1[i];
    }
    s2[i] = '\0';

    std::cout << "String s2 (copied): " << s2 << std::endl;

    return 0;
}
