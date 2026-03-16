#include "T07/math_tools.h" // Підключаємо власний заголовок, щоб бачити структуру Point
#include <iostream>
#include <cmath>

// Тіла функцій
double calculateDistance(Point p1, Point p2) {
    return std::sqrt(std::pow(p2.x - p1.x, 2) + std::pow(p2.y - p1.y, 2));
}

void printPoint(const Point &p) {
    std::cout << "(" << p.x << ", " << p.y << ")\n";
}
