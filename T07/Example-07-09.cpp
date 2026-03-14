#include <iostream>
#include "math_tools.h" // Отримуємо доступ до Point та функцій

int main() {
    Point a = {0, 0};
    Point b = {3, 4};

    printPoint(a);
    std::cout << "Відстань: " << calculateDistance(a, b) << std::endl;
    return 0;
}
