/*
 * Question: 35. Program for matrix addition.
 */
#include <iostream>

int main() {
    int r, c, a[10][10], b[10][10], sum[10][10];
    std::cout << "Enter rows and columns: ";
    std::cin >> r >> c;

    std::cout << "Enter elements of 1st matrix:" << std::endl;
    for (int i = 0; i < r; ++i)
        for (int j = 0; j < c; ++j)
            std::cin >> a[i][j];

    std::cout << "Enter elements of 2nd matrix:" << std::endl;
    for (int i = 0; i < r; ++i)
        for (int j = 0; j < c; ++j)
            std::cin >> b[i][j];

    for (int i = 0; i < r; ++i)
        for (int j = 0; j < c; ++j)
            sum[i][j] = a[i][j] + b[i][j];

    std::cout << "Sum Matrix:" << std::endl;
    for (int i = 0; i < r; ++i) {
        for (int j = 0; j < c; ++j)
            std::cout << sum[i][j] << " ";
        std::cout << std::endl;
    }

    return 0;
}
