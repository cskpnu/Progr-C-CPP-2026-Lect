#include <iostream>
#include "math_tools.h"

int main() {
    Point a = {0, 0};
    Point b = {3, 4};

    printPoint(b);
    std::cout << "Відстань: " << calculateDistance(a, b) << std::endl;
    return 0;
}
