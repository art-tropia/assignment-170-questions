/*
 * Question: 9. Program to compute area of circle, triangle, rectangle.
 */
#include <iostream>
#include <cmath>

int main() {
    // Circle
    float radius;
    std::cout << "Enter radius of circle: ";
    std::cin >> radius;
    std::cout << "Area of circle: " << M_PI * radius * radius << std::endl;

    // Triangle
    float base, height;
    std::cout << "Enter base and height of triangle: ";
    std::cin >> base >> height;
    std::cout << "Area of triangle: " << 0.5 * base * height << std::endl;

    // Rectangle
    float length, width;
    std::cout << "Enter length and width of rectangle: ";
    std::cin >> length >> width;
    std::cout << "Area of rectangle: " << length * width << std::endl;

    return 0;
}
