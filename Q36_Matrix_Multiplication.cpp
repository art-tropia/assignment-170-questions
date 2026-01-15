/*
 * Question: 36. Program for matrix multiplication.
 */
#include <iostream>

int main() {
    int a[10][10], b[10][10], mult[10][10], r1, c1, r2, c2;

    std::cout << "Enter rows and columns for first matrix: ";
    std::cin >> r1 >> c1;
    std::cout << "Enter rows and columns for second matrix: ";
    std::cin >> r2 >> c2;

    if (c1 != r2) {
        std::cout << "Error! Column of first matrix not equal to row of second." << std::endl;
        return 0;
    }

    std::cout << "Enter elements of matrix 1:" << std::endl;
    for (int i = 0; i < r1; ++i)
        for (int j = 0; j < c1; ++j)
            std::cin >> a[i][j];

    std::cout << "Enter elements of matrix 2:" << std::endl;
    for (int i = 0; i < r2; ++i)
        for (int j = 0; j < c2; ++j)
            std::cin >> b[i][j];

    for (int i = 0; i < r1; ++i)
        for (int j = 0; j < c2; ++j) {
            mult[i][j] = 0;
            for (int k = 0; k < c1; ++k) mult[i][j] += a[i][k] * b[k][j];
        }

    std::cout << "Multiplied Matrix:" << std::endl;
    for (int i = 0; i < r1; ++i) {
        for (int j = 0; j < c2; ++j) std::cout << mult[i][j] << " ";
        std::cout << std::endl;
    }

    return 0;
}
